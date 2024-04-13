// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItem___ctor(
        ServantStatusListViewItem_o *this,
        PartyListViewItem_o *partyItem,
        int32_t member,
        bool isEnableServantQuest,
        bool canMoveCombine,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  int64_t Instance; // x0
  __int64 v51; // x1
  struct PartyOrganizationListViewItem_o *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  char v59; // w8
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  int64_t pushUserSvtId; // x9
  struct PartyOrganizationListViewItem_o *memberItem; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x20
  struct System_Int64_array *EquipList; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  struct PartyOrganizationListViewItem_o *v91; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v93; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v94; // x21
  __int64 v95; // x22
  __int64 v96; // x23
  struct ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x21
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  ServantLimitMaster_o *v105; // x22
  int32_t v106; // w23
  struct ServantLimitEntity_o *v107; // x0
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  ServantCommentMaster_o *v114; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v122; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // q1
  UserServantCollectionMaster_o *v124; // x22
  int64_t v125; // x23
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  struct PartyOrganizationListViewItem_o *v133; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x22
  int32_t lv; // w23
  struct System_Int32_array *CostumeList_21807488; // x0
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  const MethodInfo *v151; // x1
  struct UserServantCollectionEntity_o *v152; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v154; // x8
  int32_t v155; // w8
  struct System_Int64_array *equipIdList; // x9
  UserServantEntity_o *v157; // x8
  _BOOL8 IsChoice; // x0
  const MethodInfo *v159; // x2
  struct System_Int64_array *v160; // x8
  int64_t v161; // x1
  struct UserServantCollectionEntity_o *v162; // x8
  System_String_array **v163; // x2
  System_String_array **v164; // x3
  System_Boolean_array **v165; // x4
  System_Int32_array **v166; // x5
  System_Int32_array *v167; // x6
  System_Int32_array *v168; // x7
  bool IsNameTrue; // w8
  UserServantEntity_o *v170; // x0
  bool IsEnableOwnRandomLimitCount; // w0
  UserServantEntity_o *v172; // x8
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v174; // x8
  int32_t v175; // w0
  UserServantEntity_o *v176; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v178; // x2
  UserServantEntity_o *v179; // x0
  int32_t v180; // w0
  UserServantEntity_o *v181; // x8
  int32_t v182; // w0
  UserServantEntity_o *v183; // x1
  const MethodInfo *v184; // x1
  const MethodInfo *v185; // x2
  __int64 v186; // x3
  RandomLimitCountManager_c *v187; // x0
  __int64 v188; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v189; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v190; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v191; // 0:x0.16

  if ( (byte_42ED32B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantCommentMaster___,
      (_DWORD)partyItem,
      member,
      isEnableServantQuest);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20, v21, v22);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v38, v39, v40);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v41, v42, v43);
    byte_42ED32B = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.partyItem = partyItem;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.partyItem,
    (System_Int32_array **)partyItem,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  if ( !partyItem )
    goto LABEL_81;
  v52 = PartyListViewItem__GetMember(partyItem, member, 0LL);
  this->fields.memberItem = v52;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.memberItem,
    (System_Int32_array **)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  this->fields.memberNum = member;
  this->fields.isEnableServantQuest = isEnableServantQuest;
  this->fields._CanMoveCombine_k__BackingField = canMoveCombine;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 40, 0LL) )
    goto LABEL_85;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 39, 0LL) )
  {
LABEL_85:
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_81;
    v59 = *(_BYTE *)(Instance + 96) ^ 1;
  }
  else
  {
    v59 = 0;
  }
  this->fields._IsDisplayCombineButton_k__BackingField = v59;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)SelfUserGame,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_81;
  this->fields.favoriteUserSvtId = userGameEntity->fields.favoriteUserSvtId;
  pushUserSvtId = userGameEntity->fields.pushUserSvtId;
  memberItem = this->fields.memberItem;
  this->fields.pushUserSvtId = pushUserSvtId;
  if ( !memberItem )
    goto LABEL_81;
  userServantEntity = memberItem->fields.userServantEntity;
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userServantEntity,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  Instance = (int64_t)this->fields.memberItem;
  if ( !Instance )
    goto LABEL_81;
  EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Instance, 0LL);
  this->fields.equipIdList = EquipList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.equipIdList,
    (System_Int32_array **)EquipList,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  v91 = this->fields.memberItem;
  if ( !v91 )
    goto LABEL_81;
  questRestrictionInfo = v91->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v93 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_81;
  v94 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v96 = *(_QWORD *)&v93[5].fields.currentCryptoKey;
  v95 = *(_QWORD *)&v93[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v191.fields.currentCryptoKey = v96;
  *(_QWORD *)&v191.fields.fakeValue = v95;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v191, 0LL);
  if ( !v94 )
    goto LABEL_81;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v94,
                                       Instance,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_81;
  v105 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_81;
  v106 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_userSvtEntity)[6], 0LL);
  if ( !v105 )
    goto LABEL_81;
  v107 = ServantLimitMaster__GetEntity(v105, v106, Instance, 0LL);
  this->fields.svtLimitEntity = v107;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
    (System_Int32_array **)v107,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_81;
  v114 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_svtEntity)[1], 0LL);
  if ( !v114 )
    goto LABEL_81;
  EntityList = ServantCommentMaster__GetEntityList(v114, Instance, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList,
    v116,
    v117,
    v118,
    v119,
    v120,
    v121);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v122 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_81;
  v123 = v122[4];
  v124 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v190.fields.currentCryptoKey = v122[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v190.fields.fakeValue = v123;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v189 = v190;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v189, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_81;
  v125 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_userSvtEntity)[5], 0LL);
  if ( !v124 )
    goto LABEL_81;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v124, v125, Instance, 0LL);
  this->fields.userSvtCollectionEntity = EntityDefinitely;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
    (System_Int32_array **)EntityDefinitely,
    v127,
    v128,
    v129,
    v130,
    v131,
    v132);
  v133 = this->fields.memberItem;
  if ( !v133 )
    goto LABEL_81;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isConvertOverwriteImage = v133->fields.isConvertOverwriteImage;
  if ( !Instance )
    goto LABEL_81;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v135,
    v136,
    v137,
    v138,
    v139,
    v140);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_81;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  lv = userSvtEntity->fields.lv;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(userSvtEntity->fields.limitCount, 0LL);
  if ( !userSvtCollectionEntity )
    goto LABEL_81;
  CostumeList_21807488 = UserServantCollectionEntity__getCostumeList_21807488(
                           userSvtCollectionEntity,
                           lv,
                           Instance,
                           0LL);
  this->fields.costumeIds = CostumeList_21807488;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.costumeIds,
    (System_Int32_array **)CostumeList_21807488,
    v145,
    v146,
    v147,
    v148,
    v149,
    v150);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v151);
  v152 = this->fields.userSvtCollectionEntity;
  if ( !v152 )
    goto LABEL_81;
  svtCommonFlag = v152->fields.svtCommonFlag;
  v154 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v154 )
    goto LABEL_81;
  v155 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v154->fields.battleVoice, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  equipIdList = this->fields.equipIdList;
  this->fields.changeVoiceFlag = v155;
  this->fields.isEquipChangeMode = 0;
  this->fields.isEquipShowMode = equipIdList != 0LL;
  if ( !Instance )
    goto LABEL_81;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v157 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v157 )
    goto LABEL_81;
  IsChoice = UserServantEntity__IsChoice(v157, 0LL);
  v160 = this->fields.equipIdList;
  *(_WORD *)&this->fields.isChoice = IsChoice;
  if ( v160 )
  {
    if ( !v160->max_length )
    {
      v188 = sub_B5D6C8(IsChoice);
      sub_B5D668(v188, 0LL);
    }
    v161 = v160->m_Items[0];
  }
  else
  {
    v161 = 0LL;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v161, v159);
  v162 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v162 != 0LL;
  if ( !Instance )
    goto LABEL_81;
  if ( ServantEntity__IsNameHide((ServantEntity_o *)Instance, 0LL) )
  {
    Instance = (int64_t)*p_svtEntity;
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0LL);
      goto LABEL_55;
    }
LABEL_81:
    sub_B5D69C(Instance, v51);
  }
  IsNameTrue = 0;
LABEL_55:
  v170 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v170 != 0LL;
  if ( !v170 )
  {
    this->fields.isEnableOwnRandomSetting = 0;
    goto LABEL_61;
  }
  IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v170, 0LL);
  v172 = this->fields.userSvtEntity;
  this->fields.isEnableOwnRandomSetting = IsEnableOwnRandomLimitCount;
  if ( !v172 )
  {
LABEL_61:
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_62;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v172, 0LL);
  v174 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v174 )
  {
LABEL_62:
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_63;
  }
  v175 = BasicHelper__DecryptValue_21084824(v174->fields.limitCountSupport, 0LL);
  v176 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v175;
  if ( v176 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v176, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_63:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.supportRandomLimitCountList,
    (System_Int32_array **)RandomLimitCountList,
    v163,
    v164,
    v165,
    v166,
    v167,
    v168);
  v179 = this->fields.userSvtEntity;
  if ( !v179 )
  {
    v183 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
LABEL_68:
    v182 = 3;
    goto LABEL_69;
  }
  v180 = UserServantEntity__OwnRandomSettingSelectedButton(v179, 0LL);
  v181 = this->fields.userSvtEntity;
  this->fields.ownRandomSettingButtonIndex = v180;
  if ( !v181 )
  {
    v183 = 0LL;
    goto LABEL_68;
  }
  v182 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v181, 0LL);
  v183 = (UserServantEntity_o *)*p_userSvtEntity;
LABEL_69:
  this->fields.supportRandomSettingButtonIndex = v182;
  ServantStatusListViewItem__SetLimitCountInfo(this, v183, v178);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_42E6BE7 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)v184, (_DWORD)v185, v186);
    byte_42E6BE7 = 1;
  }
  v187 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v187 = RandomLimitCountManager_TypeInfo;
  }
  if ( v187->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v185);
  ServantStatusListViewItem__ModifyInfo(this, v184);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItem___ctor_34331100(
        ServantStatusListViewItem_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        bool isEnableServantQuest,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  int64_t Instance; // x0
  __int64 v40; // x1
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  int64_t pushUserSvtId; // x9
  struct PartyOrganizationListViewItem_o *v63; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x20
  struct System_Int64_array *EquipList; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct PartyOrganizationListViewItem_o *v79; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v81; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v82; // x21
  __int64 v83; // x22
  __int64 v84; // x23
  struct ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x21
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  ServantLimitMaster_o *v93; // x22
  int32_t v94; // w23
  struct ServantLimitEntity_o *v95; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  ServantCommentMaster_o *v102; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v110; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // q1
  UserServantCollectionMaster_o *v112; // x22
  int64_t v113; // x23
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  struct PartyOrganizationListViewItem_o *v121; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x22
  int32_t lv; // w23
  struct System_Int32_array *CostumeList_21807488; // x0
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  const MethodInfo *v139; // x1
  struct UserServantCollectionEntity_o *v140; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v142; // x8
  int32_t v143; // w8
  struct System_Int64_array *equipIdList; // x9
  UserServantEntity_o *v145; // x8
  _BOOL8 IsChoice; // x0
  const MethodInfo *v147; // x2
  struct System_Int64_array *v148; // x8
  int64_t v149; // x1
  struct UserServantCollectionEntity_o *v150; // x8
  System_String_array **v151; // x2
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  bool IsNameTrue; // w8
  UserServantEntity_o *v158; // x0
  bool IsEnableOwnRandomLimitCount; // w0
  UserServantEntity_o *v160; // x8
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v162; // x8
  int32_t v163; // w0
  UserServantEntity_o *v164; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v166; // x2
  UserServantEntity_o *v167; // x0
  int32_t v168; // w0
  UserServantEntity_o *v169; // x8
  int32_t v170; // w0
  UserServantEntity_o *v171; // x1
  const MethodInfo *v172; // x1
  const MethodInfo *v173; // x2
  __int64 v174; // x3
  RandomLimitCountManager_c *v175; // x0
  __int64 v176; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v177; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v178; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v179; // 0:x0.16

  if ( (byte_42ED32C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantCommentMaster___,
      (_DWORD)partyItem,
      member,
      isEnableServantQuest);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31, v32);
    byte_42ED32C = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.warBoardPartyItem = partyItem;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.warBoardPartyItem,
    (System_Int32_array **)partyItem,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( !partyItem )
    goto LABEL_71;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, member, 0LL);
  this->fields.memberItem = MemberItem;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.memberItem,
    (System_Int32_array **)MemberItem,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.memberNum = member;
  this->fields.isEnableServantQuest = isEnableServantQuest;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)SelfUserGame,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_71;
  this->fields.favoriteUserSvtId = userGameEntity->fields.favoriteUserSvtId;
  pushUserSvtId = userGameEntity->fields.pushUserSvtId;
  v63 = this->fields.memberItem;
  this->fields.pushUserSvtId = pushUserSvtId;
  if ( !v63 )
    goto LABEL_71;
  userServantEntity = v63->fields.userServantEntity;
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userServantEntity,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  Instance = (int64_t)this->fields.memberItem;
  if ( !Instance )
    goto LABEL_71;
  EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Instance, 0LL);
  this->fields.equipIdList = EquipList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.equipIdList,
    (System_Int32_array **)EquipList,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  v79 = this->fields.memberItem;
  if ( !v79 )
    goto LABEL_71;
  questRestrictionInfo = v79->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v81 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_71;
  v82 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v84 = *(_QWORD *)&v81[5].fields.currentCryptoKey;
  v83 = *(_QWORD *)&v81[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v179.fields.currentCryptoKey = v84;
  *(_QWORD *)&v179.fields.fakeValue = v83;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v179, 0LL);
  if ( !v82 )
    goto LABEL_71;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v82,
                                       Instance,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_71;
  v93 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_71;
  v94 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_userSvtEntity)[6], 0LL);
  if ( !v93 )
    goto LABEL_71;
  v95 = ServantLimitMaster__GetEntity(v93, v94, Instance, 0LL);
  this->fields.svtLimitEntity = v95;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
    (System_Int32_array **)v95,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_71;
  v102 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_svtEntity)[1], 0LL);
  if ( !v102 )
    goto LABEL_71;
  EntityList = ServantCommentMaster__GetEntityList(v102, Instance, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v110 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_71;
  v111 = v110[4];
  v112 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v178.fields.currentCryptoKey = v110[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v178.fields.fakeValue = v111;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v177 = v178;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v177, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_71;
  v113 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_userSvtEntity)[5], 0LL);
  if ( !v112 )
    goto LABEL_71;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v112, v113, Instance, 0LL);
  this->fields.userSvtCollectionEntity = EntityDefinitely;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
    (System_Int32_array **)EntityDefinitely,
    v115,
    v116,
    v117,
    v118,
    v119,
    v120);
  v121 = this->fields.memberItem;
  if ( !v121 )
    goto LABEL_71;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isConvertOverwriteImage = v121->fields.isConvertOverwriteImage;
  if ( !Instance )
    goto LABEL_71;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v123,
    v124,
    v125,
    v126,
    v127,
    v128);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_71;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  lv = userSvtEntity->fields.lv;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(userSvtEntity->fields.limitCount, 0LL);
  if ( !userSvtCollectionEntity )
    goto LABEL_71;
  CostumeList_21807488 = UserServantCollectionEntity__getCostumeList_21807488(
                           userSvtCollectionEntity,
                           lv,
                           Instance,
                           0LL);
  this->fields.costumeIds = CostumeList_21807488;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.costumeIds,
    (System_Int32_array **)CostumeList_21807488,
    v133,
    v134,
    v135,
    v136,
    v137,
    v138);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v139);
  v140 = this->fields.userSvtCollectionEntity;
  if ( !v140 )
    goto LABEL_71;
  svtCommonFlag = v140->fields.svtCommonFlag;
  v142 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v142 )
    goto LABEL_71;
  v143 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v142->fields.battleVoice, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  equipIdList = this->fields.equipIdList;
  this->fields.changeVoiceFlag = v143;
  this->fields.isEquipChangeMode = 0;
  this->fields.isEquipShowMode = equipIdList != 0LL;
  if ( !Instance )
    goto LABEL_71;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v145 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v145 )
    goto LABEL_71;
  IsChoice = UserServantEntity__IsChoice(v145, 0LL);
  v148 = this->fields.equipIdList;
  *(_WORD *)&this->fields.isChoice = IsChoice;
  if ( v148 )
  {
    if ( !v148->max_length )
    {
      v176 = sub_B5D6C8(IsChoice);
      sub_B5D668(v176, 0LL);
    }
    v149 = v148->m_Items[0];
  }
  else
  {
    v149 = 0LL;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v149, v147);
  v150 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v150 != 0LL;
  if ( !Instance )
    goto LABEL_71;
  if ( ServantEntity__IsNameHide((ServantEntity_o *)Instance, 0LL) )
  {
    Instance = (int64_t)*p_svtEntity;
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0LL);
      goto LABEL_45;
    }
LABEL_71:
    sub_B5D69C(Instance, v40);
  }
  IsNameTrue = 0;
LABEL_45:
  v158 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v158 != 0LL;
  if ( !v158 )
  {
    this->fields.isEnableOwnRandomSetting = 0;
    goto LABEL_51;
  }
  IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v158, 0LL);
  v160 = this->fields.userSvtEntity;
  this->fields.isEnableOwnRandomSetting = IsEnableOwnRandomLimitCount;
  if ( !v160 )
  {
LABEL_51:
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_52;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v160, 0LL);
  v162 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v162 )
  {
LABEL_52:
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_53;
  }
  v163 = BasicHelper__DecryptValue_21084824(v162->fields.limitCountSupport, 0LL);
  v164 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v163;
  if ( v164 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v164, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_53:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.supportRandomLimitCountList,
    (System_Int32_array **)RandomLimitCountList,
    v151,
    v152,
    v153,
    v154,
    v155,
    v156);
  v167 = this->fields.userSvtEntity;
  if ( !v167 )
  {
    v171 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
LABEL_58:
    v170 = 3;
    goto LABEL_59;
  }
  v168 = UserServantEntity__OwnRandomSettingSelectedButton(v167, 0LL);
  v169 = this->fields.userSvtEntity;
  this->fields.ownRandomSettingButtonIndex = v168;
  if ( !v169 )
  {
    v171 = 0LL;
    goto LABEL_58;
  }
  v170 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v169, 0LL);
  v171 = (UserServantEntity_o *)*p_userSvtEntity;
LABEL_59:
  this->fields.supportRandomSettingButtonIndex = v170;
  ServantStatusListViewItem__SetLimitCountInfo(this, v171, v166);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_42E6BE7 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)v172, (_DWORD)v173, v174);
    byte_42E6BE7 = 1;
  }
  v175 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v175 = RandomLimitCountManager_TypeInfo;
  }
  if ( v175->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v173);
  ServantStatusListViewItem__ModifyInfo(this, v172);
}


void __fastcall ServantStatusListViewItem___ctor_34332776(
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x22
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  int64_t Instance; // x0
  __int64 v65; // x1
  char v66; // w8
  __int128 v67; // q1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v88; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v89; // x24
  __int64 v90; // x26
  __int64 v91; // x27
  struct ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x24
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  ServantLimitMaster_o *v100; // x26
  int32_t v101; // w27
  struct ServantLimitEntity_o *v102; // x0
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  ServantCommentMaster_o *v109; // x26
  int32_t v110; // w27
  struct ServantCommentEntity_array *EntityList_27550020; // x0
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v118; // x8
  __int64 v119; // x26
  __int64 v120; // x27
  int32_t v121; // w0
  bool IsConvertOverwriteImage; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v123; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // q0
  int64_t v125; // x25
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v132; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v133; // q0
  UserServantCollectionMaster_o *v134; // x25
  bool v135; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v136; // x8
  int64_t v137; // x26
  __int64 v138; // x27
  __int64 v139; // x28
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x25
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x26
  int32_t lv; // w27
  struct System_Int32_array *CostumeList_21807488; // x0
  System_String_array **v159; // x2
  System_String_array **v160; // x3
  System_Boolean_array **v161; // x4
  System_Int32_array **v162; // x5
  System_Int32_array *v163; // x6
  System_Int32_array *v164; // x7
  const MethodInfo *v165; // x1
  struct System_Int32_array *v166; // x0
  System_String_array **v167; // x2
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  System_String_array **v179; // x2
  System_String_array **v180; // x3
  System_Boolean_array **v181; // x4
  System_Int32_array **v182; // x5
  System_Int32_array *v183; // x6
  System_Int32_array *v184; // x7
  struct UserServantEntity_o *v185; // x8
  __int64 v186; // x25
  __int64 v187; // x26
  System_String_array **v188; // x2
  System_String_array **v189; // x3
  System_Boolean_array **v190; // x4
  System_Int32_array **v191; // x5
  System_Int32_array *v192; // x6
  System_Int32_array *v193; // x7
  System_String_array **v194; // x2
  System_String_array **v195; // x3
  System_Boolean_array **v196; // x4
  System_Int32_array **v197; // x5
  System_Int32_array *v198; // x6
  System_Int32_array *v199; // x7
  UserServantEntity_o *v200; // x8
  ServantEntity_o *svtEntity; // x8
  _BOOL8 IsServantEquip; // x0
  const MethodInfo *v203; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v204; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v205; // q0
  UserDeckMaster_o *v206; // x23
  bool v207; // w20
  bool v208; // w8
  struct System_Int64_array *v209; // x9
  int64_t v210; // x1
  struct UserServantCollectionEntity_o *v211; // x8
  System_String_array **v212; // x2
  System_String_array **v213; // x3
  System_Boolean_array **v214; // x4
  System_Int32_array **v215; // x5
  System_Int32_array *v216; // x6
  System_Int32_array *v217; // x7
  bool IsNameTrue; // w8
  UserServantEntity_o *v219; // x0
  bool IsEnableOwnRandomLimitCount; // w0
  UserServantEntity_o *v221; // x8
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v223; // x8
  int32_t v224; // w0
  UserServantEntity_o *v225; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v227; // x2
  UserServantEntity_o *v228; // x0
  int32_t v229; // w0
  UserServantEntity_o *v230; // x8
  int32_t v231; // w0
  UserServantEntity_o *v232; // x1
  const MethodInfo *v233; // x1
  const MethodInfo *v234; // x2
  __int64 v235; // x3
  RandomLimitCountManager_c *v236; // x0
  __int64 v237; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v238; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v239; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v240; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v241; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v242; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v243; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v244; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v245; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v246; // 0:x0.16

  if ( (byte_42ED32D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantCommentMaster___,
      (_DWORD)userServant,
      (_DWORD)equipIdList,
      questRestrictionInfo);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserDeckMaster___, v23, v24, v25);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v26, v27, v28);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v29, v30, v31);
    sub_B5D5C4(&NetworkManager_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v44, v45, v46);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v47, v48, v49);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v50, v51, v52);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v53, v54, v55);
    byte_42ED32D = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_fields = &this->fields;
  this->fields.userGameEntity = SelfUserGame;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)SelfUserGame,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  this->fields.isEnableServantQuest = isEnableServantQuest;
  this->fields._CanMoveCombine_k__BackingField = canMoveCombine;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 40, 0LL) )
    goto LABEL_122;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  Instance = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 39, 0LL);
  if ( (Instance & 1) != 0 )
  {
LABEL_122:
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_118;
    v66 = *(_BYTE *)(Instance + 96) ^ 1;
  }
  else
  {
    v66 = 0;
  }
  this->fields._IsDisplayCombineButton_k__BackingField = v66;
  if ( !userServant )
    goto LABEL_118;
  v67 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v242.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v242.fields.fakeValue = v67;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v241 = v242;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v241, 0LL);
  userGameEntity = p_fields->userGameEntity;
  if ( !p_fields->userGameEntity )
    goto LABEL_118;
  if ( Instance == userGameEntity->fields.userId )
  {
    this->fields.favoriteUserSvtId = userGameEntity->fields.favoriteUserSvtId;
    this->fields.pushUserSvtId = userGameEntity->fields.pushUserSvtId;
  }
  else
  {
    this->fields.favoriteUserSvtId = -1LL;
    this->fields.pushUserSvtId = -1LL;
    this->fields.userGameEntity = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields, 0LL, v68, v69, v70, v71, v72, v73);
  }
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userServant,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  this->fields.equipIdList = equipIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.equipIdList,
    (System_Int32_array **)equipIdList,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v88 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_118;
  v89 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v91 = *(_QWORD *)&v88[5].fields.currentCryptoKey;
  v90 = *(_QWORD *)&v88[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v243.fields.currentCryptoKey = v91;
  *(_QWORD *)&v243.fields.fakeValue = v90;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v243, 0LL);
  if ( !v89 )
    goto LABEL_118;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v89,
                                       Instance,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v94,
    v95,
    v96,
    v97,
    v98,
    v99);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_118;
  v100 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_118;
  v101 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_userSvtEntity)[6], 0LL);
  if ( !v100 )
    goto LABEL_118;
  v102 = ServantLimitMaster__GetEntity(v100, v101, Instance, 0LL);
  this->fields.svtLimitEntity = v102;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
    (System_Int32_array **)v102,
    v103,
    v104,
    v105,
    v106,
    v107,
    v108);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_118;
  v109 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_svtEntity)[1], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_118;
  v110 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_userSvtEntity)[7], 0LL);
  if ( !v109 )
    goto LABEL_118;
  EntityList_27550020 = ServantCommentMaster__GetEntityList_27550020(v109, v110, Instance, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList_27550020;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList_27550020,
    v112,
    v113,
    v114,
    v115,
    v116,
    v117);
  if ( questRestrictionInfo )
  {
    v118 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_118;
    v120 = *(_QWORD *)&v118[5].fields.currentCryptoKey;
    v119 = *(_QWORD *)&v118[5].fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v244.fields.currentCryptoKey = v120;
    *(_QWORD *)&v244.fields.fakeValue = v119;
    v121 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v244, 0LL);
    IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v121, 0LL);
  }
  else
  {
    IsConvertOverwriteImage = 0;
  }
  this->fields.isConvertOverwriteImage = IsConvertOverwriteImage;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  v123 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
LABEL_118:
    sub_B5D69C(Instance, v65);
  v124 = v123[4];
  v125 = Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v242.fields.currentCryptoKey = v123[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v242.fields.fakeValue = v124;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v240 = v242;
  if ( v125 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v240, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_118;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    v132 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_118;
    v133 = v132[4];
    v134 = (UserServantCollectionMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v242.fields.currentCryptoKey = v132[3];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v242.fields.fakeValue = v133;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v135 = enableBattleVoice;
    v239 = v242;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v239, 0LL);
    v136 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_118;
    v137 = Instance;
    v139 = *(_QWORD *)&v136[5].fields.currentCryptoKey;
    v138 = *(_QWORD *)&v136[5].fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v245.fields.currentCryptoKey = v139;
    *(_QWORD *)&v245.fields.fakeValue = v138;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v245, 0LL);
    if ( !v134 )
      goto LABEL_118;
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v134, v137, Instance, 0LL);
    this->fields.userSvtCollectionEntity = EntityDefinitely;
    p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
      (System_Int32_array **)EntityDefinitely,
      v142,
      v143,
      v144,
      v145,
      v146,
      v147);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_118;
    enableBattleVoice = v135;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
      (System_Int32_array **)CommandCodeIdList,
      v149,
      v150,
      v151,
      v152,
      v153,
      v154);
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_118;
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    lv = userSvtEntity->fields.lv;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                 userSvtEntity->fields.limitCount,
                 0LL);
    if ( !userSvtCollectionEntity )
      goto LABEL_118;
    CostumeList_21807488 = UserServantCollectionEntity__getCostumeList_21807488(
                             userSvtCollectionEntity,
                             lv,
                             Instance,
                             0LL);
    this->fields.costumeIds = CostumeList_21807488;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.costumeIds,
      (System_Int32_array **)CostumeList_21807488,
      v159,
      v160,
      v161,
      v162,
      v163,
      v164);
    ServantStatusListViewItem__SetCostumeAndOtherIds(this, v165);
  }
  else
  {
    this->fields.userSvtCollectionEntity = 0LL;
    p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
      0LL,
      v126,
      v127,
      v128,
      v129,
      v130,
      v131);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_118;
    v166 = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = v166;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
      (System_Int32_array **)v166,
      v167,
      v168,
      v169,
      v170,
      v171,
      v172);
    this->fields.costumeIds = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.costumeIds, 0LL, v173, v174, v175, v176, v177, v178);
    this->fields.costumeAndOtherIds = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.costumeAndOtherIds,
      0LL,
      v179,
      v180,
      v181,
      v182,
      v183,
      v184);
  }
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_118;
  v185 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = (*p_userSvtCollectionEntity)->fields.svtCommonFlag;
  if ( !v185 )
    goto LABEL_118;
  v187 = *(_QWORD *)&v185->fields.battleVoice.fields.currentCryptoKey;
  v186 = *(_QWORD *)&v185->fields.battleVoice.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v246.fields.currentCryptoKey = v187;
  *(_QWORD *)&v246.fields.fakeValue = v186;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v246, 0LL);
  *(_WORD *)&this->fields.isEquipShowMode = equipIdList != 0LL;
  this->fields.servantLeaderInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.servantLeaderInfo, 0LL, v188, v189, v190, v191, v192, v193);
  this->fields.equipTargetInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.equipTargetInfo, 0LL, v194, v195, v196, v197, v198, v199);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_118;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v200 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v200 )
    goto LABEL_118;
  Instance = UserServantEntity__IsChoice(v200, 0LL);
  svtEntity = this->fields.svtEntity;
  this->fields.isChoice = Instance & 1;
  if ( !svtEntity )
    goto LABEL_118;
  IsServantEquip = ServantEntity__get_IsServantEquip(svtEntity, 0LL);
  if ( IsServantEquip )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_118;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserDeckMaster___);
    v204 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_118;
    v205 = v204[2];
    v206 = (UserDeckMaster_o *)Instance;
    v207 = enableTdSpeed;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v242.fields.currentCryptoKey = v204[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v242.fields.fakeValue = v205;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v238 = v242;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v238, 0LL);
    if ( !v206 )
      goto LABEL_118;
    IsServantEquip = UserDeckMaster__IsEquip(v206, Instance, 0LL);
    v208 = IsServantEquip;
  }
  else
  {
    v207 = enableTdSpeed;
    v208 = 0;
  }
  v209 = this->fields.equipIdList;
  this->fields.isUse = v208;
  if ( v209 )
  {
    if ( !v209->max_length )
    {
      v237 = sub_B5D6C8(IsServantEquip);
      sub_B5D668(v237, 0LL);
    }
    v210 = v209->m_Items[0];
  }
  else
  {
    v210 = 0LL;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v210, v203);
  v211 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v211 != 0LL && v207;
  if ( !Instance )
    goto LABEL_118;
  if ( ServantEntity__IsNameHide((ServantEntity_o *)Instance, 0LL) )
  {
    Instance = (int64_t)*p_svtEntity;
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0LL);
      goto LABEL_92;
    }
    goto LABEL_118;
  }
  IsNameTrue = 0;
LABEL_92:
  v219 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue && enableBattleVoice;
  this->fields.isDisplayRandomLimitCount = v219 != 0LL;
  if ( !v219 )
  {
    this->fields.isEnableOwnRandomSetting = 0;
    goto LABEL_98;
  }
  IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v219, 0LL);
  v221 = this->fields.userSvtEntity;
  this->fields.isEnableOwnRandomSetting = IsEnableOwnRandomLimitCount;
  if ( !v221 )
  {
LABEL_98:
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_99;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v221, 0LL);
  v223 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v223 )
  {
LABEL_99:
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_100;
  }
  v224 = BasicHelper__DecryptValue_21084824(v223->fields.limitCountSupport, 0LL);
  v225 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v224;
  if ( v225 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v225, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_100:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.supportRandomLimitCountList,
    (System_Int32_array **)RandomLimitCountList,
    v212,
    v213,
    v214,
    v215,
    v216,
    v217);
  v228 = this->fields.userSvtEntity;
  if ( !v228 )
  {
    v232 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
LABEL_105:
    v231 = 3;
    goto LABEL_106;
  }
  v229 = UserServantEntity__OwnRandomSettingSelectedButton(v228, 0LL);
  v230 = this->fields.userSvtEntity;
  this->fields.ownRandomSettingButtonIndex = v229;
  if ( !v230 )
  {
    v232 = 0LL;
    goto LABEL_105;
  }
  v231 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v230, 0LL);
  v232 = (UserServantEntity_o *)*p_userSvtEntity;
LABEL_106:
  this->fields.supportRandomSettingButtonIndex = v231;
  ServantStatusListViewItem__SetLimitCountInfo(this, v232, v227);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_42E6BE7 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)v233, (_DWORD)v234, v235);
    byte_42E6BE7 = 1;
  }
  v236 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v236 = RandomLimitCountManager_TypeInfo;
  }
  if ( v236->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v234);
  ServantStatusListViewItem__ModifyInfo(this, v233);
}


void __fastcall ServantStatusListViewItem___ctor_34335308(
        ServantStatusListViewItem_o *this,
        UserServantEntity_o *userServant,
        bool isUse,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  int64_t Instance; // x0
  __int64 v43; // x1
  __int128 v44; // q1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v65; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v66; // x22
  __int64 v67; // x23
  __int64 v68; // x24
  struct ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x22
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  ServantLimitMaster_o *v77; // x23
  int32_t v78; // w24
  struct ServantLimitEntity_o *v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  ServantCommentMaster_o *v86; // x23
  struct ServantCommentEntity_array *EntityList; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v94; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // q0
  int64_t v96; // x23
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v103; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // q0
  UserServantCollectionMaster_o *v105; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v106; // x8
  int64_t v107; // x24
  __int64 v108; // x25
  __int64 v109; // x26
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x23
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x24
  int32_t lv; // w25
  struct System_Int32_array *CostumeList_21807488; // x0
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  const MethodInfo *v135; // x1
  struct System_Int32_array *v136; // x0
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  struct UserServantEntity_o *v155; // x8
  __int64 v156; // x23
  __int64 v157; // x24
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  System_String_array **v164; // x2
  System_String_array **v165; // x3
  System_Boolean_array **v166; // x4
  System_Int32_array **v167; // x5
  System_Int32_array *v168; // x6
  System_Int32_array *v169; // x7
  UserServantEntity_o *v170; // x8
  const MethodInfo *v171; // x2
  struct UserServantCollectionEntity_o *v172; // x8
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  bool IsNameTrue; // w8
  struct UserServantEntity_o *v180; // x9
  int32_t v181; // w0
  UserServantEntity_o *v182; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v184; // x2
  UserServantEntity_o *v185; // x0
  int32_t v186; // w0
  UserServantEntity_o *v187; // x8
  int32_t v188; // w0
  UserServantEntity_o *v189; // x1
  const MethodInfo *v190; // x1
  const MethodInfo *v191; // x2
  __int64 v192; // x3
  RandomLimitCountManager_c *v193; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v194; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v195; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v196; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v197; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v198; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v199; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v200; // 0:x0.16

  if ( (byte_42ED32E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCommentMaster___, (_DWORD)userServant, isUse, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16, v17, v18);
    sub_B5D5C4(&NetworkManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32, v33);
    byte_42ED32E = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_fields = &this->fields;
  this->fields.userGameEntity = SelfUserGame;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)SelfUserGame,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields.isEnableServantQuest = 0;
  if ( !userServant )
    goto LABEL_82;
  v44 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v197.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v197.fields.fakeValue = v44;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v196 = v197;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v196, 0LL);
  userGameEntity = p_fields->userGameEntity;
  if ( !p_fields->userGameEntity )
    goto LABEL_82;
  if ( Instance == userGameEntity->fields.userId )
  {
    this->fields.favoriteUserSvtId = userGameEntity->fields.favoriteUserSvtId;
    this->fields.pushUserSvtId = userGameEntity->fields.pushUserSvtId;
  }
  else
  {
    this->fields.favoriteUserSvtId = -1LL;
    this->fields.pushUserSvtId = -1LL;
    this->fields.userGameEntity = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields, 0LL, v45, v46, v47, v48, v49, v50);
  }
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userServant,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  this->fields.equipIdList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v53, v54, v55, v56, v57, v58);
  this->fields.questRestrictionInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v59, v60, v61, v62, v63, v64);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v65 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_82;
  v66 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v68 = *(_QWORD *)&v65[5].fields.currentCryptoKey;
  v67 = *(_QWORD *)&v65[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v198.fields.currentCryptoKey = v68;
  *(_QWORD *)&v198.fields.fakeValue = v67;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v198, 0LL);
  if ( !v66 )
    goto LABEL_82;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v66,
                                       Instance,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_82;
  v77 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_82;
  v78 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_userSvtEntity)[6], 0LL);
  if ( !v77 )
    goto LABEL_82;
  v79 = ServantLimitMaster__GetEntity(v77, v78, Instance, 0LL);
  this->fields.svtLimitEntity = v79;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
    (System_Int32_array **)v79,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_82;
  v86 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_svtEntity)[1], 0LL);
  if ( !v86 )
    goto LABEL_82;
  EntityList = ServantCommentMaster__GetEntityList(v86, Instance, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  this->fields.isConvertOverwriteImage = 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  v94 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_82;
  v95 = v94[4];
  v96 = Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v197.fields.currentCryptoKey = v94[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v197.fields.fakeValue = v95;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v195 = v197;
  if ( v96 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v195, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_82;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    v103 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_82;
    v104 = v103[4];
    v105 = (UserServantCollectionMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v197.fields.currentCryptoKey = v103[3];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v197.fields.fakeValue = v104;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v194 = v197;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v194, 0LL);
    v106 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_82;
    v107 = Instance;
    v109 = *(_QWORD *)&v106[5].fields.currentCryptoKey;
    v108 = *(_QWORD *)&v106[5].fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v199.fields.currentCryptoKey = v109;
    *(_QWORD *)&v199.fields.fakeValue = v108;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v199, 0LL);
    if ( !v105 )
      goto LABEL_82;
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v105, v107, Instance, 0LL);
    this->fields.userSvtCollectionEntity = EntityDefinitely;
    p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
      (System_Int32_array **)EntityDefinitely,
      v112,
      v113,
      v114,
      v115,
      v116,
      v117);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_82;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
      (System_Int32_array **)CommandCodeIdList,
      v119,
      v120,
      v121,
      v122,
      v123,
      v124);
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_82;
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    lv = userSvtEntity->fields.lv;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                 userSvtEntity->fields.limitCount,
                 0LL);
    if ( !userSvtCollectionEntity )
      goto LABEL_82;
    CostumeList_21807488 = UserServantCollectionEntity__getCostumeList_21807488(
                             userSvtCollectionEntity,
                             lv,
                             Instance,
                             0LL);
    this->fields.costumeIds = CostumeList_21807488;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.costumeIds,
      (System_Int32_array **)CostumeList_21807488,
      v129,
      v130,
      v131,
      v132,
      v133,
      v134);
    ServantStatusListViewItem__SetCostumeAndOtherIds(this, v135);
  }
  else
  {
    this->fields.userSvtCollectionEntity = 0LL;
    p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
      0LL,
      v97,
      v98,
      v99,
      v100,
      v101,
      v102);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_82;
    v136 = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = v136;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
      (System_Int32_array **)v136,
      v137,
      v138,
      v139,
      v140,
      v141,
      v142);
    this->fields.costumeIds = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.costumeIds, 0LL, v143, v144, v145, v146, v147, v148);
    this->fields.costumeAndOtherIds = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.costumeAndOtherIds,
      0LL,
      v149,
      v150,
      v151,
      v152,
      v153,
      v154);
  }
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_82;
  v155 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = (*p_userSvtCollectionEntity)->fields.svtCommonFlag;
  if ( !v155 )
    goto LABEL_82;
  v157 = *(_QWORD *)&v155->fields.battleVoice.fields.currentCryptoKey;
  v156 = *(_QWORD *)&v155->fields.battleVoice.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v200.fields.currentCryptoKey = v157;
  *(_QWORD *)&v200.fields.fakeValue = v156;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v200, 0LL);
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  this->fields.servantLeaderInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.servantLeaderInfo, 0LL, v158, v159, v160, v161, v162, v163);
  this->fields.equipTargetInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.equipTargetInfo, 0LL, v164, v165, v166, v167, v168, v169);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_82;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v170 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v170 )
    goto LABEL_82;
  this->fields.isChoice = UserServantEntity__IsChoice(v170, 0LL);
  this->fields.isUse = isUse;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v171);
  v172 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v172 != 0LL;
  if ( !Instance )
    goto LABEL_82;
  if ( ServantEntity__IsNameHide((ServantEntity_o *)Instance, 0LL) )
  {
    Instance = (int64_t)*p_svtEntity;
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0LL);
      goto LABEL_60;
    }
LABEL_82:
    sub_B5D69C(Instance, v43);
  }
  IsNameTrue = 0;
LABEL_60:
  v180 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  *(_WORD *)&this->fields.isDisplayRandomLimitCount = 0;
  this->fields.isEnableSupportRandomSetting = 0;
  if ( v180 )
  {
    v181 = BasicHelper__DecryptValue_21084824(v180->fields.limitCountSupport, 0LL);
    v182 = this->fields.userSvtEntity;
    this->fields.supportRandomLimitCount = v181;
    if ( v182 )
      RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v182, this->fields.costumeIds, 0LL);
    else
      RandomLimitCountList = 0LL;
  }
  else
  {
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
  }
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.supportRandomLimitCountList,
    (System_Int32_array **)RandomLimitCountList,
    v173,
    v174,
    v175,
    v176,
    v177,
    v178);
  v185 = this->fields.userSvtEntity;
  if ( !v185 )
  {
    v189 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
LABEL_70:
    v188 = 3;
    goto LABEL_71;
  }
  v186 = UserServantEntity__OwnRandomSettingSelectedButton(v185, 0LL);
  v187 = this->fields.userSvtEntity;
  this->fields.ownRandomSettingButtonIndex = v186;
  if ( !v187 )
  {
    v189 = 0LL;
    goto LABEL_70;
  }
  v188 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v187, 0LL);
  v189 = (UserServantEntity_o *)*p_userSvtEntity;
LABEL_71:
  this->fields.supportRandomSettingButtonIndex = v188;
  ServantStatusListViewItem__SetLimitCountInfo(this, v189, v184);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_42E6BE7 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)v190, (_BYTE)v191, v192);
    byte_42E6BE7 = 1;
  }
  v193 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v193 = RandomLimitCountManager_TypeInfo;
  }
  if ( v193->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v191);
  ServantStatusListViewItem__ModifyInfo(this, v190);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItem___ctor_34337184(
        ServantStatusListViewItem_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        bool isEnableServantQuest,
        bool enableTdSpeed,
        const MethodInfo *method)
{
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x23
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  DataManager_o *Instance; // x0
  __int64 v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x21
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  struct UserServantCollectionEntity_o *v77; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v78; // x22
  __int64 v79; // x23
  __int64 v80; // x24
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x22
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  ServantLimitMaster_o *v89; // x23
  struct ServantLimitEntity_o *v90; // x0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v97; // x8
  ServantCommentMaster_o *v98; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  struct System_Int32_array *CostumeList; // x0
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  const MethodInfo *v120; // x1
  BalanceConfig_c *v121; // x0
  struct UserServantCollectionEntity_o *v122; // x8
  __int64 v123; // x22
  __int64 v124; // x23
  int32_t v125; // w22
  int32_t maxLimitCount; // w23
  struct UserServantCollectionEntity_o *v127; // x8
  __int64 v128; // x22
  __int64 v129; // x23
  int32_t v130; // w22
  int32_t v131; // w23
  struct UserServantCollectionEntity_o *v132; // x8
  struct System_Int32_array *CardSelectList; // x0
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  struct UserServantCollectionEntity_o *v140; // x8
  struct UserServantCollectionEntity_o *v141; // x8
  struct System_Int32_array *SelectList; // x0
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  struct UserServantCollectionEntity_o *v149; // x8
  struct UserServantCollectionEntity_o *v150; // x8
  struct System_Int32_array *v151; // x0
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  struct System_Int32_array *CommandCardParam; // x0
  System_String_array **v159; // x2
  System_String_array **v160; // x3
  System_Boolean_array **v161; // x4
  System_Int32_array **v162; // x5
  System_Int32_array *v163; // x6
  System_Int32_array *v164; // x7
  int32_t maxCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v166; // x8
  struct System_Int32_array *v167; // x0
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  int32_t commandCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v175; // x8
  struct System_Int32_array *v176; // x0
  System_String_array **v177; // x2
  System_String_array **v178; // x3
  System_Boolean_array **v179; // x4
  System_Int32_array **v180; // x5
  System_Int32_array *v181; // x6
  System_Int32_array *v182; // x7
  const MethodInfo *v183; // x2
  struct UserServantCollectionEntity_o *v184; // x8
  int32_t svtCommonFlag; // w8
  struct UserServantCollectionEntity_o *v186; // x8
  const MethodInfo *v187; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v188; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v189; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v190; // 0:x0.16

  if ( (byte_42ED32F & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)userSvtCollectionEntity, isEnableServantQuest, enableTdSpeed);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCommentMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28, v29);
    byte_42ED32F = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_fields = &this->fields;
  this->fields.userGameEntity = SelfUserGame;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)SelfUserGame,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.isEnableServantQuest = isEnableServantQuest;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  if ( !userSvtCollectionEntity || !p_fields->userGameEntity )
    goto LABEL_62;
  if ( userSvtCollectionEntity->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields, 0LL, v40, v41, v42, v43, v44, v45);
  }
  this->fields.userSvtEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.userSvtEntity, 0LL, v40, v41, v42, v43, v44, v45);
  this->fields.equipIdList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v46, v47, v48, v49, v50, v51);
  this->fields.questRestrictionInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v52, v53, v54, v55, v56, v57);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
    (System_Int32_array **)userSvtCollectionEntity,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  this->fields.servantLeaderInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.servantLeaderInfo, 0LL, v65, v66, v67, v68, v69, v70);
  this->fields.equipTargetInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.equipTargetInfo, 0LL, v71, v72, v73, v74, v75, v76);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v77 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  v78 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v80 = *(_QWORD *)&v77->fields.svtId.fields.currentCryptoKey;
  v79 = *(_QWORD *)&v77->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v188.fields.currentCryptoKey = v80;
  *(_QWORD *)&v188.fields.fakeValue = v79;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v188, 0LL);
  if ( !v78 )
    goto LABEL_62;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v78,
                                       (int32_t)Instance,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  v89 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                (*p_userSvtCollectionEntity)->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  if ( !v89 )
    goto LABEL_62;
  v90 = ServantLimitMaster__GetEntity(v89, (int32_t)Instance, (*p_userSvtCollectionEntity)->fields.maxLimitCount, 0LL);
  this->fields.svtLimitEntity = v90;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
    (System_Int32_array **)v90,
    v91,
    v92,
    v93,
    v94,
    v95,
    v96);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v97 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_62;
  v98 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v97[1], 0LL);
  if ( !v98 )
    goto LABEL_62;
  EntityList = ServantCommentMaster__GetEntityList(v98, (int32_t)Instance, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_62;
  CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_62;
  CostumeList = UserServantCollectionEntity__getCostumeList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.costumeIds = CostumeList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.costumeIds,
    (System_Int32_array **)CostumeList,
    v114,
    v115,
    v116,
    v117,
    v118,
    v119);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v120);
  Instance = (DataManager_o *)ConstantMaster__IsOtherImage(0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v121 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v121 = BalanceConfig_TypeInfo;
    }
    Instance = (DataManager_o *)(unsigned int)v121->static_fields->OtherImageLimitCount;
    goto LABEL_36;
  }
  v122 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  v124 = *(_QWORD *)&v122->fields.svtId.fields.currentCryptoKey;
  v123 = *(_QWORD *)&v122->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v189.fields.currentCryptoKey = v124;
  *(_QWORD *)&v189.fields.fakeValue = v123;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v189, 0LL);
  if ( !*p_userSvtCollectionEntity )
LABEL_62:
    sub_B5D69C(Instance, v39);
  v125 = (int)Instance;
  maxLimitCount = (*p_userSvtCollectionEntity)->fields.maxLimitCount;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v125, maxLimitCount, 1, 0, 0LL);
LABEL_36:
  v127 = this->fields.userSvtCollectionEntity;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v127 )
    goto LABEL_62;
  v129 = *(_QWORD *)&v127->fields.svtId.fields.currentCryptoKey;
  v128 = *(_QWORD *)&v127->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v190.fields.currentCryptoKey = v129;
  *(_QWORD *)&v190.fields.fakeValue = v128;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v190, 0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  v130 = (int)Instance;
  v131 = (*p_userSvtCollectionEntity)->fields.maxLimitCount;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v130, v131, 1, 0, 0LL);
  v132 = this->fields.userSvtCollectionEntity;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v132 )
    goto LABEL_62;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                v132->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  CardSelectList = ImageLimitCount__GetCardSelectList(
                     (int32_t)Instance,
                     (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                     this->fields.costumeAndOtherIds,
                     0LL);
  this->fields.cardSelectList = CardSelectList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.cardSelectList,
    (System_Int32_array **)CardSelectList,
    v134,
    v135,
    v136,
    v137,
    v138,
    v139);
  v140 = this->fields.userSvtCollectionEntity;
  if ( !v140 )
    goto LABEL_62;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                v140->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(
                                (int32_t)Instance,
                                (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                                0LL);
  v141 = this->fields.userSvtCollectionEntity;
  this->fields.dispLimitCount = (int)Instance;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v141 )
    goto LABEL_62;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                v141->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  SelectList = ImageLimitCount__GetSelectList(
                 (int32_t)Instance,
                 (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                 this->fields.costumeIds,
                 0LL);
  this->fields.dispSelectList = SelectList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dispSelectList,
    (System_Int32_array **)SelectList,
    v143,
    v144,
    v145,
    v146,
    v147,
    v148);
  v149 = this->fields.userSvtCollectionEntity;
  if ( !v149 )
    goto LABEL_62;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                v149->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(
                                (int32_t)Instance,
                                (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                                0LL);
  v150 = this->fields.userSvtCollectionEntity;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v150 )
    goto LABEL_62;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                v150->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  v151 = ImageLimitCount__GetSelectList(
           (int32_t)Instance,
           (*p_userSvtCollectionEntity)->fields.maxLimitCount,
           this->fields.costumeIds,
           0LL);
  this->fields.commandCardSelectList = v151;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commandCardSelectList,
    (System_Int32_array **)v151,
    v152,
    v153,
    v154,
    v155,
    v156,
    v157);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_62;
  CommandCardParam = UserServantCollectionEntity__GetCommandCardParam((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCardParam = CommandCardParam;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commandCardParam,
    (System_Int32_array **)CommandCardParam,
    v159,
    v160,
    v161,
    v162,
    v163,
    v164);
  maxCardLimitCount = this->fields.maxCardLimitCount;
  v166 = this->fields.userSvtCollectionEntity;
  this->fields.maxIconLimitCount = maxCardLimitCount;
  this->fields.iconLimitCount = maxCardLimitCount;
  if ( !v166 )
    goto LABEL_62;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                v166->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  v167 = ImageLimitCount__GetCardSelectList(
           (int32_t)Instance,
           (*p_userSvtCollectionEntity)->fields.maxLimitCount,
           this->fields.costumeIds,
           0LL);
  this->fields.iconSelectList = v167;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconSelectList,
    (System_Int32_array **)v167,
    v168,
    v169,
    v170,
    v171,
    v172,
    v173);
  commandCardLimitCount = this->fields.commandCardLimitCount;
  v175 = this->fields.userSvtCollectionEntity;
  this->fields.maxPortraitLimitCount = commandCardLimitCount;
  this->fields.portraitLimitCount = commandCardLimitCount;
  if ( !v175 )
    goto LABEL_62;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                v175->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  v176 = ImageLimitCount__GetSelectList(
           (int32_t)Instance,
           (*p_userSvtCollectionEntity)->fields.maxLimitCount,
           this->fields.costumeIds,
           0LL);
  this->fields.portraitSelectList = v176;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.portraitSelectList,
    (System_Int32_array **)v176,
    v177,
    v178,
    v179,
    v180,
    v181,
    v182);
  v184 = this->fields.userSvtCollectionEntity;
  if ( !v184 )
    goto LABEL_62;
  svtCommonFlag = v184->fields.svtCommonFlag;
  this->fields.changeVoiceFlag = 0;
  this->fields.svtCommonFlag = svtCommonFlag;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v183);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  this->fields.isCollection = 1;
  if ( !Instance )
    goto LABEL_62;
  UserServantCollectionEntity__getCollectionStatus(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.collectionLv,
    &this->fields.collectionHp,
    &this->fields.collectionAtk,
    0LL);
  v186 = this->fields.userSvtCollectionEntity;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields.enableTdSpeed = v186 != 0LL && enableTdSpeed;
  ServantStatusListViewItem__ModifyInfo(this, v187);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItem___ctor_34338868(
        ServantStatusListViewItem_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t limitCount,
        bool isEnableServantQuest,
        bool enableTdSpeed,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x24
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  DataManager_o *Instance; // x0
  __int64 v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x23
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  struct UserServantCollectionEntity_o *v76; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v77; // x22
  __int64 v78; // x24
  __int64 v79; // x25
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x22
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  struct UserServantCollectionEntity_o *v88; // x8
  ServantLimitMaster_o *v89; // x23
  struct ServantLimitEntity_o *v90; // x0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v97; // x8
  ServantCommentMaster_o *v98; // x22
  struct ServantCommentEntity_array *EntityList_27550020; // x0
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  struct System_Int32_array *CostumeList; // x0
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  const MethodInfo *v120; // x1
  struct UserServantCollectionEntity_o *v121; // x8
  int32_t v122; // w22
  struct UserServantCollectionEntity_o *v123; // x8
  int32_t v124; // w0
  struct UserServantCollectionEntity_o *v125; // x8
  int32_t v126; // w0
  struct System_Int32_array *CardSelectList; // x0
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  struct UserServantCollectionEntity_o *v134; // x8
  int32_t v135; // w0
  struct UserServantCollectionEntity_o *v136; // x8
  int32_t v137; // w0
  struct System_Int32_array *SelectList; // x0
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  struct UserServantCollectionEntity_o *v145; // x8
  int32_t v146; // w0
  struct UserServantCollectionEntity_o *v147; // x8
  int32_t v148; // w0
  struct System_Int32_array *v149; // x0
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  struct System_Int32_array *CommandCardParam; // x0
  System_String_array **v157; // x2
  System_String_array **v158; // x3
  System_Boolean_array **v159; // x4
  System_Int32_array **v160; // x5
  System_Int32_array *v161; // x6
  System_Int32_array *v162; // x7
  int32_t maxCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v164; // x8
  int32_t v165; // w0
  struct System_Int32_array *v166; // x0
  System_String_array **v167; // x2
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  int32_t commandCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v174; // x8
  int32_t v175; // w0
  struct System_Int32_array *v176; // x0
  System_String_array **v177; // x2
  System_String_array **v178; // x3
  System_Boolean_array **v179; // x4
  System_Int32_array **v180; // x5
  System_Int32_array *v181; // x6
  System_Int32_array *v182; // x7
  const MethodInfo *v183; // x2
  struct UserServantCollectionEntity_o *v184; // x8
  int32_t svtCommonFlag; // w8
  struct UserServantCollectionEntity_o *v186; // x8
  const MethodInfo *v187; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v188; // 0:x0.16

  if ( (byte_42ED330 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantCommentMaster___,
      (_DWORD)userSvtCollectionEntity,
      limitCount,
      isEnableServantQuest);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27, v28);
    byte_42ED330 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_fields = &this->fields;
  this->fields.userGameEntity = SelfUserGame;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)SelfUserGame,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.isEnableServantQuest = isEnableServantQuest;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  if ( !userSvtCollectionEntity || !p_fields->userGameEntity )
    goto LABEL_37;
  if ( userSvtCollectionEntity->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields, 0LL, v39, v40, v41, v42, v43, v44);
  }
  this->fields.userSvtEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.userSvtEntity, 0LL, v39, v40, v41, v42, v43, v44);
  this->fields.equipIdList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v45, v46, v47, v48, v49, v50);
  this->fields.questRestrictionInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v51, v52, v53, v54, v55, v56);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
    (System_Int32_array **)userSvtCollectionEntity,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  this->fields.servantLeaderInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.servantLeaderInfo, 0LL, v64, v65, v66, v67, v68, v69);
  this->fields.equipTargetInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.equipTargetInfo, 0LL, v70, v71, v72, v73, v74, v75);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v76 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_37;
  v77 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v79 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
  v78 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v188.fields.currentCryptoKey = v79;
  *(_QWORD *)&v188.fields.fakeValue = v78;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v188, 0LL);
  if ( !v77 )
    goto LABEL_37;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v77,
                                       (int32_t)Instance,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v88 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_37;
  v89 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                v88->fields.svtId,
                                0LL);
  if ( !v89 )
    goto LABEL_37;
  v90 = ServantLimitMaster__GetEntity(v89, (int32_t)Instance, limitCount, 0LL);
  this->fields.svtLimitEntity = v90;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
    (System_Int32_array **)v90,
    v91,
    v92,
    v93,
    v94,
    v95,
    v96);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v97 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_37;
  v98 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v97[1], 0LL);
  if ( !v98 )
    goto LABEL_37;
  EntityList_27550020 = ServantCommentMaster__GetEntityList_27550020(v98, (int32_t)Instance, limitCount, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList_27550020;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList_27550020,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_37;
  CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_37;
  CostumeList = UserServantCollectionEntity__getCostumeList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.costumeIds = CostumeList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.costumeIds,
    (System_Int32_array **)CostumeList,
    v114,
    v115,
    v116,
    v117,
    v118,
    v119);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v120);
  v121 = this->fields.userSvtCollectionEntity;
  if ( !v121 )
    goto LABEL_37;
  v122 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v121->fields.svtId, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v122, limitCount, 1, 0, 0LL);
  v123 = this->fields.userSvtCollectionEntity;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v123 )
    goto LABEL_37;
  v124 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v123->fields.svtId, 0LL);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v124, limitCount, 1, 0, 0LL);
  v125 = this->fields.userSvtCollectionEntity;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v125 )
    goto LABEL_37;
  v126 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v125->fields.svtId, 0LL);
  CardSelectList = ImageLimitCount__GetCardSelectList(v126, limitCount, this->fields.costumeAndOtherIds, 0LL);
  this->fields.cardSelectList = CardSelectList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.cardSelectList,
    (System_Int32_array **)CardSelectList,
    v128,
    v129,
    v130,
    v131,
    v132,
    v133);
  v134 = this->fields.userSvtCollectionEntity;
  if ( !v134 )
    goto LABEL_37;
  v135 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v134->fields.svtId, 0LL);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v135, limitCount, 0LL);
  v136 = this->fields.userSvtCollectionEntity;
  this->fields.dispLimitCount = (int)Instance;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v136 )
    goto LABEL_37;
  v137 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v136->fields.svtId, 0LL);
  SelectList = ImageLimitCount__GetSelectList(v137, limitCount, this->fields.costumeIds, 0LL);
  this->fields.dispSelectList = SelectList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dispSelectList,
    (System_Int32_array **)SelectList,
    v139,
    v140,
    v141,
    v142,
    v143,
    v144);
  v145 = this->fields.userSvtCollectionEntity;
  if ( !v145 )
    goto LABEL_37;
  v146 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v145->fields.svtId, 0LL);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v146, limitCount, 0LL);
  v147 = this->fields.userSvtCollectionEntity;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v147 )
    goto LABEL_37;
  v148 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v147->fields.svtId, 0LL);
  v149 = ImageLimitCount__GetSelectList(v148, limitCount, this->fields.costumeIds, 0LL);
  this->fields.commandCardSelectList = v149;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commandCardSelectList,
    (System_Int32_array **)v149,
    v150,
    v151,
    v152,
    v153,
    v154,
    v155);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_37;
  CommandCardParam = UserServantCollectionEntity__GetCommandCardParam((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCardParam = CommandCardParam;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commandCardParam,
    (System_Int32_array **)CommandCardParam,
    v157,
    v158,
    v159,
    v160,
    v161,
    v162);
  maxCardLimitCount = this->fields.maxCardLimitCount;
  v164 = this->fields.userSvtCollectionEntity;
  this->fields.maxIconLimitCount = maxCardLimitCount;
  this->fields.iconLimitCount = maxCardLimitCount;
  if ( !v164 )
    goto LABEL_37;
  v165 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v164->fields.svtId, 0LL);
  v166 = ImageLimitCount__GetCardSelectList(v165, limitCount, this->fields.costumeIds, 0LL);
  this->fields.iconSelectList = v166;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconSelectList,
    (System_Int32_array **)v166,
    v167,
    v168,
    v169,
    v170,
    v171,
    v172);
  commandCardLimitCount = this->fields.commandCardLimitCount;
  v174 = this->fields.userSvtCollectionEntity;
  this->fields.maxPortraitLimitCount = commandCardLimitCount;
  this->fields.portraitLimitCount = commandCardLimitCount;
  if ( !v174 )
    goto LABEL_37;
  v175 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v174->fields.svtId, 0LL);
  v176 = ImageLimitCount__GetSelectList(v175, limitCount, this->fields.costumeIds, 0LL);
  this->fields.portraitSelectList = v176;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.portraitSelectList,
    (System_Int32_array **)v176,
    v177,
    v178,
    v179,
    v180,
    v181,
    v182);
  v184 = this->fields.userSvtCollectionEntity;
  if ( !v184 )
    goto LABEL_37;
  svtCommonFlag = v184->fields.svtCommonFlag;
  this->fields.changeVoiceFlag = 0;
  this->fields.svtCommonFlag = svtCommonFlag;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v183);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  this->fields.isCollection = 1;
  if ( !Instance )
LABEL_37:
    sub_B5D69C(Instance, v38);
  UserServantCollectionEntity__getCollectionStatus(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.collectionLv,
    &this->fields.collectionHp,
    &this->fields.collectionAtk,
    0LL);
  v186 = this->fields.userSvtCollectionEntity;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields.enableTdSpeed = v186 != 0LL && enableTdSpeed;
  ServantStatusListViewItem__ModifyInfo(this, v187);
}


void __fastcall ServantStatusListViewItem___ctor_34340308(
        ServantStatusListViewItem_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        bool isEquipShowMode,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantLeaderInfo; // x20
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  DataManager_o *Instance; // x0
  __int64 v69; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v70; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v71; // x21
  __int64 v72; // x22
  __int64 v73; // x23
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x21
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  ServantLimitMaster_o *v82; // x22
  struct ServantLimitEntity_o *v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v90; // x8
  ServantCommentMaster_o *v91; // x21
  struct ServantCommentEntity_array *EntityList; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  ServantLeaderInfo_o *v112; // x8
  struct ServantLeaderInfo_o *v113; // x8
  int32_t v114; // w21
  int32_t currentCryptoKey; // w22
  int32_t cardLimitCount; // w23
  struct System_Int32_array *CardSelectList_28467052; // x0
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  ServantLeaderInfo_o *v124; // x8
  struct ServantLeaderInfo_o *v125; // x8
  struct System_Int32_array *SelectList_28466324; // x0
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  ServantLeaderInfo_o *v133; // x8
  struct ServantLeaderInfo_o *v134; // x8
  struct System_Int32_array *v135; // x0
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  struct ServantLeaderInfo_o *v148; // x8
  struct System_Int32_array *commandCardParam; // x1
  ServantLeaderInfo_o *v150; // x8
  struct ServantLeaderInfo_o *v151; // x8
  struct System_Int32_array *v152; // x0
  System_String_array **v153; // x2
  System_String_array **v154; // x3
  System_Boolean_array **v155; // x4
  System_Int32_array **v156; // x5
  System_Int32_array *v157; // x6
  System_Int32_array *v158; // x7
  ServantLeaderInfo_o *v159; // x8
  struct ServantLeaderInfo_o *v160; // x8
  struct System_Int32_array *v161; // x0
  System_String_array **v162; // x2
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  const MethodInfo *v168; // x2
  struct ServantLeaderInfo_o *v169; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v171; // x21
  __int64 v172; // x22
  __int64 v173; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v174; // x21
  __int64 v175; // x22
  __int64 v176; // x23
  struct ServantEntity_o *v177; // x0
  System_String_array **v178; // x2
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  __int64 v184; // x8
  ServantLimitMaster_o *v185; // x21
  __int64 v186; // x8
  struct ServantLimitEntity_o *v187; // x0
  System_String_array **v188; // x2
  System_String_array **v189; // x3
  System_Boolean_array **v190; // x4
  System_Int32_array **v191; // x5
  System_Int32_array *v192; // x6
  System_Int32_array *v193; // x7
  const MethodInfo *v194; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v195; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v196; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v197; // 0:x0.16

  if ( (byte_42ED331 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantCommentMaster___,
      (_DWORD)servantLeaderInfo,
      isEquipShowMode,
      method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14, v15);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23, v24);
    byte_42ED331 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, 0LL, v25, v26, v27, v28, v29, v30);
  this->fields.userSvtEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.userSvtEntity, 0LL, v31, v32, v33, v34, v35, v36);
  this->fields.equipIdList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v37, v38, v39, v40, v41, v42);
  this->fields.questRestrictionInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v43, v44, v45, v46, v47, v48);
  this->fields.userSvtCollectionEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity, 0LL, v49, v50, v51, v52, v53, v54);
  this->fields.servantLeaderInfo = servantLeaderInfo;
  p_servantLeaderInfo = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantLeaderInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantLeaderInfo,
    (System_Int32_array **)servantLeaderInfo,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  this->fields.equipTargetInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.equipTargetInfo, 0LL, v62, v63, v64, v65, v66, v67);
  this->fields.isEnableServantQuest = 0;
  *(_WORD *)&this->fields.isEquipShowMode = isEquipShowMode;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v70 = *p_servantLeaderInfo;
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  v71 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v73 = *(_QWORD *)&v70[3].fields.currentCryptoKey;
  v72 = *(_QWORD *)&v70[3].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v195.fields.currentCryptoKey = v73;
  *(_QWORD *)&v195.fields.fakeValue = v72;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v195, 0LL);
  if ( !v71 )
    goto LABEL_63;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v71,
                                       (int32_t)Instance,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  v82 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                (*p_servantLeaderInfo)[3],
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  if ( !v82 )
    goto LABEL_63;
  v83 = ServantLimitMaster__GetEntity(v82, (int32_t)Instance, (*p_servantLeaderInfo)[4].fields.currentCryptoKey, 0LL);
  this->fields.svtLimitEntity = v83;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
    (System_Int32_array **)v83,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v90 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_63;
  v91 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v90[1], 0LL);
  if ( !v91 )
    goto LABEL_63;
  EntityList = ServantCommentMaster__GetEntityList(v91, (int32_t)Instance, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_63;
  CommandCodeIdList = ServantLeaderInfo__getCommandCodeIdList((ServantLeaderInfo_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  this->fields.costumeIds = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.costumeIds, 0LL, v106, v107, v108, v109, v110, v111);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getCardImageLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v112 = this->fields.servantLeaderInfo;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v112 )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxCardImageLimitCount(v112, 0, 0LL);
  v113 = this->fields.servantLeaderInfo;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v113 )
    goto LABEL_63;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                v113->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  v114 = (int)Instance;
  currentCryptoKey = (*p_servantLeaderInfo)[4].fields.currentCryptoKey;
  cardLimitCount = this->fields.cardLimitCount;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  CardSelectList_28467052 = ImageLimitCount__GetCardSelectList_28467052(v114, currentCryptoKey, cardLimitCount, 0LL);
  this->fields.cardSelectList = CardSelectList_28467052;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.cardSelectList,
    (System_Int32_array **)CardSelectList_28467052,
    v118,
    v119,
    v120,
    v121,
    v122,
    v123);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v124 = this->fields.servantLeaderInfo;
  this->fields.dispLimitCount = (int)Instance;
  if ( !v124 )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxDispLimitCount(v124, 0LL);
  v125 = this->fields.servantLeaderInfo;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v125 )
    goto LABEL_63;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                v125->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  SelectList_28466324 = ImageLimitCount__GetSelectList_28466324(
                          (int32_t)Instance,
                          (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
                          this->fields.dispLimitCount,
                          0,
                          0LL);
  this->fields.dispSelectList = SelectList_28466324;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dispSelectList,
    (System_Int32_array **)SelectList_28466324,
    v127,
    v128,
    v129,
    v130,
    v131,
    v132);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getCommandCardLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v133 = this->fields.servantLeaderInfo;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v133 )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxCommandCardLimitCount(v133, 0LL);
  v134 = this->fields.servantLeaderInfo;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  if ( !v134 )
    goto LABEL_63;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                v134->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  v135 = ImageLimitCount__GetSelectList_28466324(
           (int32_t)Instance,
           (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
           this->fields.commandCardLimitCount,
           0,
           0LL);
  this->fields.commandCardSelectList = v135;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commandCardSelectList,
    (System_Int32_array **)v135,
    v136,
    v137,
    v138,
    v139,
    v140,
    v141);
  v148 = this->fields.servantLeaderInfo;
  if ( !v148 )
    goto LABEL_63;
  commandCardParam = v148->fields.commandCardParam;
  this->fields.commandCardParam = commandCardParam;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commandCardParam,
    (System_Int32_array **)commandCardParam,
    v142,
    v143,
    v144,
    v145,
    v146,
    v147);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getIconLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v150 = this->fields.servantLeaderInfo;
  this->fields.iconLimitCount = (int)Instance;
  if ( !v150 )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxIconLimitCount(v150, 0, 0LL);
  v151 = this->fields.servantLeaderInfo;
  this->fields.maxIconLimitCount = (int)Instance;
  if ( !v151 )
    goto LABEL_63;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                v151->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  v152 = ImageLimitCount__GetCardSelectList_28467052(
           (int32_t)Instance,
           (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
           this->fields.iconLimitCount,
           0LL);
  this->fields.iconSelectList = v152;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconSelectList,
    (System_Int32_array **)v152,
    v153,
    v154,
    v155,
    v156,
    v157,
    v158);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getPortraitLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v159 = this->fields.servantLeaderInfo;
  this->fields.portraitLimitCount = (int)Instance;
  if ( !v159 )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxPortraitLimitCount(v159, 0LL);
  v160 = this->fields.servantLeaderInfo;
  this->fields.maxPortraitLimitCount = (int)Instance;
  if ( !v160 )
    goto LABEL_63;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                v160->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  v161 = ImageLimitCount__GetSelectList_28466324(
           (int32_t)Instance,
           (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
           this->fields.portraitLimitCount,
           0,
           0LL);
  this->fields.portraitSelectList = v161;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.portraitSelectList,
    (System_Int32_array **)v161,
    v162,
    v163,
    v164,
    v165,
    v166,
    v167);
  this->fields.svtCommonFlag = 0;
  this->fields.changeVoiceFlag = 0;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v168);
  v169 = this->fields.servantLeaderInfo;
  this->fields.isCollection = 0;
  if ( !v169 )
    goto LABEL_63;
  equipTarget1 = v169->fields.equipTarget1;
  if ( equipTarget1 )
  {
    v172 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
    v171 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v196.fields.currentCryptoKey = v172;
    *(_QWORD *)&v196.fields.fakeValue = v171;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v196, 0LL) >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( *p_servantLeaderInfo )
        {
          v173 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
          if ( v173 )
          {
            v174 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
            v176 = *(_QWORD *)(v173 + 56);
            v175 = *(_QWORD *)(v173 + 64);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v197.fields.currentCryptoKey = v176;
            *(_QWORD *)&v197.fields.fakeValue = v175;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v197, 0LL);
            if ( v174 )
            {
              v177 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                 v174,
                                                 (int32_t)Instance,
                                                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              this->fields.equipServantEntity = v177;
              sub_B5D560(
                (BattleServantConfConponent_o *)&this->fields.equipServantEntity,
                (System_Int32_array **)v177,
                v178,
                v179,
                v180,
                v181,
                v182,
                v183);
              Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              Instance,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                if ( *p_servantLeaderInfo )
                {
                  v184 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
                  if ( v184 )
                  {
                    v185 = (ServantLimitMaster_o *)Instance;
                    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v184 + 56),
                                                  0LL);
                    if ( *p_servantLeaderInfo )
                    {
                      v186 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
                      if ( v186 )
                      {
                        if ( v185 )
                        {
                          v187 = ServantLimitMaster__GetEntity(v185, (int32_t)Instance, *(_DWORD *)(v186 + 72), 0LL);
                          this->fields.equipSvtLimitEntity = v187;
                          sub_B5D560(
                            (BattleServantConfConponent_o *)&this->fields.equipSvtLimitEntity,
                            (System_Int32_array **)v187,
                            v188,
                            v189,
                            v190,
                            v191,
                            v192,
                            v193);
                          goto LABEL_61;
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
LABEL_63:
      sub_B5D69C(Instance, v69);
    }
  }
LABEL_61:
  Instance = (DataManager_o *)*p_servantLeaderInfo;
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  ServantLeaderInfo__getEquipSkillInfo((ServantLeaderInfo_o *)Instance, &this->fields.equipSkillInfoList, 0LL);
  this->fields.enableTdSpeed = 0;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  ServantStatusListViewItem__ModifyInfo(this, v194);
}


void __fastcall ServantStatusListViewItem___ctor_34342020(
        ServantStatusListViewItem_o *this,
        EquipTargetInfo_o *equipTargetInfo,
        bool isNpcFollowerServantEquip,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct EquipTargetInfo_o **p_equipTargetInfo; // x20
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  DataManager_o *Instance; // x0
  __int64 v66; // x1
  struct EquipTargetInfo_o *v67; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v68; // x21
  __int64 v69; // x22
  __int64 v70; // x23
  struct ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x21
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  ServantLimitMaster_o *v79; // x22
  struct ServantLimitEntity_o *v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  ServantCommentMaster_o *v87; // x20
  struct ServantCommentEntity_array *EntityList; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  const MethodInfo *v143; // x2
  const MethodInfo *v144; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v145; // 0:x0.16

  if ( (byte_42ED332 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantCommentMaster___,
      (_DWORD)equipTargetInfo,
      isNpcFollowerServantEquip,
      method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14, v15);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20, v21);
    byte_42ED332 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, 0LL, v22, v23, v24, v25, v26, v27);
  this->fields.userSvtEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.userSvtEntity, 0LL, v28, v29, v30, v31, v32, v33);
  this->fields.equipIdList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v34, v35, v36, v37, v38, v39);
  this->fields.questRestrictionInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v40, v41, v42, v43, v44, v45);
  this->fields.userSvtCollectionEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity, 0LL, v46, v47, v48, v49, v50, v51);
  this->fields.servantLeaderInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.servantLeaderInfo, 0LL, v52, v53, v54, v55, v56, v57);
  this->fields.equipTargetInfo = equipTargetInfo;
  p_equipTargetInfo = &this->fields.equipTargetInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.equipTargetInfo,
    (System_Int32_array **)equipTargetInfo,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  this->fields.isEnableServantQuest = 0;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  this->fields.isNpcFollowerServantEquip = isNpcFollowerServantEquip;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v67 = *p_equipTargetInfo;
  if ( !*p_equipTargetInfo )
    goto LABEL_17;
  v68 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v70 = *(_QWORD *)&v67->fields.svtId.fields.currentCryptoKey;
  v69 = *(_QWORD *)&v67->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v145.fields.currentCryptoKey = v70;
  *(_QWORD *)&v145.fields.fakeValue = v69;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v145, 0LL);
  if ( !v68 )
    goto LABEL_17;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v68,
                                       (int32_t)Instance,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_equipTargetInfo )
    goto LABEL_17;
  v79 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                (*p_equipTargetInfo)->fields.svtId,
                                0LL);
  if ( !*p_equipTargetInfo
    || !v79
    || (v80 = ServantLimitMaster__GetEntity(v79, (int32_t)Instance, (*p_equipTargetInfo)->fields.limitCount, 0LL),
        this->fields.svtLimitEntity = v80,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
          (System_Int32_array **)v80,
          v81,
          v82,
          v83,
          v84,
          v85,
          v86),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCommentMaster___),
        !*p_svtEntity)
    || (v87 = (ServantCommentMaster_o *)Instance,
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                      (*p_svtEntity)[1],
                                      0LL),
        !v87) )
  {
LABEL_17:
    sub_B5D69C(Instance, v66);
  }
  EntityList = ServantCommentMaster__GetEntityList(v87, (int32_t)Instance, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  this->fields.commandCodeIdList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.commandCodeIdList, 0LL, v95, v96, v97, v98, v99, v100);
  this->fields.costumeIds = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.costumeIds, 0LL, v101, v102, v103, v104, v105, v106);
  this->fields.cardSelectList = 0LL;
  *(_QWORD *)&this->fields.cardLimitCount = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.cardSelectList, 0LL, v107, v108, v109, v110, v111, v112);
  this->fields.dispSelectList = 0LL;
  *(_QWORD *)&this->fields.dispLimitCount = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.dispSelectList, 0LL, v113, v114, v115, v116, v117, v118);
  *(_QWORD *)&this->fields.commandCardLimitCount = 0LL;
  this->fields.commandCardSelectList = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commandCardSelectList,
    0LL,
    v119,
    v120,
    v121,
    v122,
    v123,
    v124);
  this->fields.commandCardParam = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.commandCardParam, 0LL, v125, v126, v127, v128, v129, v130);
  *(_QWORD *)&this->fields.iconLimitCount = 0LL;
  this->fields.iconSelectList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.iconSelectList, 0LL, v131, v132, v133, v134, v135, v136);
  *(_QWORD *)&this->fields.portraitLimitCount = 0LL;
  this->fields.portraitSelectList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.portraitSelectList, 0LL, v137, v138, v139, v140, v141, v142);
  this->fields.svtCommonFlag = 0;
  this->fields.changeVoiceFlag = 0;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v143);
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = 0;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  ServantStatusListViewItem__ModifyInfo(this, v144);
}


void __fastcall ServantStatusListViewItem___ctor_34342848(
        ServantStatusListViewItem_o *this,
        CommandCodeEntity_o *commandCode,
        bool isUse,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  DataManager_o *Instance; // x0
  __int64 v35; // x1
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v37; // x21
  __int64 v38; // x22
  __int64 v39; // x23
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_42ED333 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___, (_DWORD)commandCode, isUse, method);
    sub_B5D5C4(
      &Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__,
      v7,
      v8,
      v9);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    byte_42ED333 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, 0LL, v16, v17, v18, v19, v20, v21);
  this->fields.userCommandCodeEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.userCommandCodeEntity, 0LL, v22, v23, v24, v25, v26, v27);
  this->fields.commandCodeEntity = commandCode;
  this->fields.isEnableServantQuest = 0;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commandCodeEntity,
    (System_Int32_array **)commandCode,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_11;
  v37 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v39 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v38 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v46.fields.currentCryptoKey = v39;
  *(_QWORD *)&v46.fields.fakeValue = v38;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v46, 0LL);
  if ( !v37 )
    goto LABEL_11;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    v37,
    (WarEntity_o **)&this->fields.commandCodeCommentEntity,
    (int32_t)Instance,
    (const MethodInfo_23FAE6C *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  this->fields.userCommandCodeCollectionEntity = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeCollectionEntity,
    0LL,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  Instance = (DataManager_o *)this->fields.commandCodeEntity;
  this->fields.isChoice = 0;
  this->fields.isUse = isUse;
  this->fields.enableTdSpeed = 0;
  *(_WORD *)&this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  if ( !Instance )
LABEL_11:
    sub_B5D69C(Instance, v35);
  CommandCodeEntity__GetSkillInfo(
    (CommandCodeEntity_o *)Instance,
    &this->fields.passiveSkillIdList,
    &this->fields.passiveSkillTitleMessageList,
    &this->fields.passiveSkillExplanationMessageList,
    0LL);
}


void __fastcall ServantStatusListViewItem___ctor_34343244(
        ServantStatusListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  int64_t Instance; // x0
  __int64 v42; // x1
  __int128 v43; // q1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct UserCommandCodeEntity_o **p_userCommandCodeEntity; // x20
  struct UserCommandCodeEntity_o *v51; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v52; // x21
  __int64 v53; // x22
  __int64 v54; // x23
  struct CommandCodeEntity_o *Entity; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct UserCommandCodeEntity_o *userCommandCodeEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v63; // x21
  struct UserCommandCodeEntity_o *v64; // x8
  __int128 v65; // q0
  int64_t v66; // x21
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  struct UserCommandCodeEntity_o *v73; // x8
  __int128 v74; // q0
  UserCommandCodeCollectionMaster_o *v75; // x21
  struct UserCommandCodeEntity_o *v76; // x8
  int64_t v77; // x22
  __int64 v78; // x23
  __int64 v79; // x24
  struct UserCommandCodeCollectionEntity_o *EntityDefinitely; // x1
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x0
  UserCommandCodeEntity_o *v82; // x8
  struct UserCommandCodeEntity_o *v83; // x8
  __int128 v84; // q0
  UserServantCommandCodeMaster_o *v85; // x20
  bool IsAttach; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+60h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+80h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16

  if ( (byte_42ED334 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_CommandCodeCommentMaster___,
      (_DWORD)userCommandCode,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCodeMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v15, v16, v17);
    sub_B5D5C4(
      &Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__,
      v18,
      v19,
      v20);
    sub_B5D5C4(&NetworkManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31, v32);
    byte_42ED334 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_fields = &this->fields;
  this->fields.userGameEntity = SelfUserGame;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)SelfUserGame,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.isEnableServantQuest = 0;
  if ( !userCommandCode )
    goto LABEL_49;
  v43 = *(_OWORD *)&userCommandCode->fields.userId.fields.fakeValue;
  *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v91.fields.fakeValue = v43;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v90 = v91;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v90, 0LL);
  if ( !p_fields->userGameEntity )
    goto LABEL_49;
  if ( Instance != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields, 0LL, v44, v45, v46, v47, v48, v49);
  }
  this->fields.userCommandCodeEntity = userCommandCode;
  p_userCommandCodeEntity = &this->fields.userCommandCodeEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeEntity,
    (System_Int32_array **)userCommandCode,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v51 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_49;
  v52 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v54 = *(_QWORD *)&v51->fields.commandCodeId.fields.currentCryptoKey;
  v53 = *(_QWORD *)&v51->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v92.fields.currentCryptoKey = v54;
  *(_QWORD *)&v92.fields.fakeValue = v53;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v92, 0LL);
  if ( !v52 )
    goto LABEL_49;
  Entity = (struct CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v52,
                                           Instance,
                                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commandCodeEntity,
    (System_Int32_array **)Entity,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeEntity = this->fields.userCommandCodeEntity;
  if ( !userCommandCodeEntity )
    goto LABEL_49;
  v63 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
               userCommandCodeEntity->fields.commandCodeId,
               0LL);
  if ( !v63 )
    goto LABEL_49;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    v63,
    (WarEntity_o **)&this->fields.commandCodeCommentEntity,
    Instance,
    (const MethodInfo_23FAE6C *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  v64 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_49;
  v65 = *(_OWORD *)&v64->fields.userId.fields.fakeValue;
  v66 = Instance;
  *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)&v64->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v91.fields.fakeValue = v65;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v89 = v91;
  if ( v66 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v89, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
      v73 = *p_userCommandCodeEntity;
      if ( *p_userCommandCodeEntity )
      {
        v74 = *(_OWORD *)&v73->fields.userId.fields.fakeValue;
        v75 = (UserCommandCodeCollectionMaster_o *)Instance;
        *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)&v73->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v91.fields.fakeValue = v74;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v88 = v91;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v88, 0LL);
        v76 = *p_userCommandCodeEntity;
        if ( *p_userCommandCodeEntity )
        {
          v77 = Instance;
          v79 = *(_QWORD *)&v76->fields.commandCodeId.fields.currentCryptoKey;
          v78 = *(_QWORD *)&v76->fields.commandCodeId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v93.fields.currentCryptoKey = v79;
          *(_QWORD *)&v93.fields.fakeValue = v78;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v93, 0LL);
          if ( v75 )
          {
            EntityDefinitely = UserCommandCodeCollectionMaster__GetEntityDefinitely(v75, v77, Instance, 0LL);
            this->fields.userCommandCodeCollectionEntity = EntityDefinitely;
            p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
            goto LABEL_39;
          }
        }
      }
    }
LABEL_49:
    sub_B5D69C(Instance, v42);
  }
  this->fields.userCommandCodeCollectionEntity = 0LL;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  EntityDefinitely = 0LL;
LABEL_39:
  sub_B5D560(
    (BattleServantConfConponent_o *)p_userCommandCodeCollectionEntity,
    (System_Int32_array **)EntityDefinitely,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  Instance = (int64_t)*p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_49;
  Instance = UserCommandCodeEntity__IsLock((UserCommandCodeEntity_o *)Instance, 0LL);
  v82 = this->fields.userCommandCodeEntity;
  this->fields.isLock = Instance & 1;
  if ( !v82 )
    goto LABEL_49;
  this->fields.isChoice = UserCommandCodeEntity__IsChoice(v82, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v83 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_49;
  v84 = *(_OWORD *)&v83->fields.id.fields.fakeValue;
  v85 = (UserServantCommandCodeMaster_o *)Instance;
  *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)&v83->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v91.fields.fakeValue = v84;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v87 = v91;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v87, 0LL);
  if ( !v85 )
    goto LABEL_49;
  IsAttach = UserServantCommandCodeMaster__IsAttach(v85, Instance, 0LL);
  Instance = (int64_t)this->fields.userCommandCodeEntity;
  this->fields.isUse = IsAttach;
  this->fields.enableTdSpeed = 0;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  if ( !Instance )
    goto LABEL_49;
  UserCommandCodeEntity__GetSkillInfo(
    (UserCommandCodeEntity_o *)Instance,
    &this->fields.passiveSkillIdList,
    &this->fields.passiveSkillTitleMessageList,
    &this->fields.passiveSkillExplanationMessageList,
    0LL);
}


void __fastcall ServantStatusListViewItem___ctor_34344380(
        ServantStatusListViewItem_o *this,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollection,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  DataManager_o *Instance; // x0
  __int64 v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x21
  struct UserCommandCodeCollectionEntity_o *v38; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v39; // x20
  __int64 v40; // x21
  __int64 v41; // x22
  struct CommandCodeEntity_o *Entity; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v50; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_42ED335 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_CommandCodeCommentMaster___,
      (_DWORD)userCommandCodeCollection,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCodeMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(
      &Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42ED335 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_fields = &this->fields;
  this->fields.userGameEntity = SelfUserGame;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)SelfUserGame,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  if ( !userCommandCodeCollection || !p_fields->userGameEntity )
    goto LABEL_18;
  if ( userCommandCodeCollection->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields, 0LL, v31, v32, v33, v34, v35, v36);
  }
  this->fields.userCommandCodeCollectionEntity = userCommandCodeCollection;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeCollectionEntity,
    (System_Int32_array **)userCommandCodeCollection,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v38 = *p_userCommandCodeCollectionEntity;
  if ( !*p_userCommandCodeCollectionEntity )
    goto LABEL_18;
  v39 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v41 = *(_QWORD *)&v38->fields.commandCodeId.fields.currentCryptoKey;
  v40 = *(_QWORD *)&v38->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v51.fields.currentCryptoKey = v41;
  *(_QWORD *)&v51.fields.fakeValue = v40;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v51, 0LL);
  if ( !v39 )
    goto LABEL_18;
  Entity = (struct CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v39,
                                           (int32_t)Instance,
                                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commandCodeEntity,
    (System_Int32_array **)Entity,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeCollectionEntity = this->fields.userCommandCodeCollectionEntity;
  if ( !userCommandCodeCollectionEntity
    || (v50 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                      userCommandCodeCollectionEntity->fields.commandCodeId,
                                      0LL),
        !v50)
    || (DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v50,
          (WarEntity_o **)&this->fields.commandCodeCommentEntity,
          (int32_t)Instance,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__),
        Instance = (DataManager_o *)this->fields.userCommandCodeCollectionEntity,
        this->fields.enableTdSpeed = 0,
        this->fields.isDisplayRandomLimitCount = 0,
        *(_DWORD *)&this->fields.enableChangeVoice = 0,
        !Instance) )
  {
LABEL_18:
    sub_B5D69C(Instance, v30);
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
  __int64 v3; // x3
  ServantStatusListViewItem_LimitCountCache_o *v6; // x22
  struct ServantStatusListViewItem_LimitCountCache_o **p_currentLimitCountCache; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x22
  unsigned __int64 userSvtEntity; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *v17; // x22
  struct ServantStatusListViewItem_LimitCountCache_o *v18; // x22
  struct ServantStatusListViewItem_LimitCountCache_o *v19; // x22
  struct ServantStatusListViewItem_LimitCountCache_o *v20; // x21

  if ( (byte_42ED338 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItem_LimitCountCache_TypeInfo, ignoreRandomSettings, (_DWORD)method, v3);
    byte_42ED338 = 1;
  }
  v6 = (ServantStatusListViewItem_LimitCountCache_o *)sub_B5D694(ServantStatusListViewItem_LimitCountCache_TypeInfo);
  ServantStatusListViewItem_LimitCountCache___ctor(v6, 0LL);
  p_currentLimitCountCache = &this->fields.currentLimitCountCache;
  this->fields.currentLimitCountCache = v6;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.currentLimitCountCache,
    (System_Int32_array **)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  currentLimitCountCache = this->fields.currentLimitCountCache;
  if ( ignoreRandomSettings )
  {
    userSvtEntity = (unsigned __int64)this->fields.userSvtEntity;
    if ( !userSvtEntity
      || (userSvtEntity = UserServantEntity__getCardImageLimitCount((UserServantEntity_o *)userSvtEntity, 1, 0LL),
          !currentLimitCountCache) )
    {
LABEL_29:
      sub_B5D69C(userSvtEntity, v14);
    }
  }
  else
  {
    userSvtEntity = (unsigned int)this->fields.cardLimitCount;
    if ( !currentLimitCountCache )
      goto LABEL_29;
  }
  currentLimitCountCache->fields.cardLimitCount = userSvtEntity;
  v17 = *p_currentLimitCountCache;
  if ( ignoreRandomSettings )
  {
    userSvtEntity = (unsigned __int64)this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_29;
    userSvtEntity = UserServantEntity__getIconLimitCount((UserServantEntity_o *)userSvtEntity, 1, 0LL);
    if ( !v17 )
      goto LABEL_29;
  }
  else
  {
    userSvtEntity = (unsigned int)this->fields.iconLimitCount;
    if ( !v17 )
      goto LABEL_29;
  }
  v17->fields.iconLimitCount = userSvtEntity;
  v18 = *p_currentLimitCountCache;
  if ( ignoreRandomSettings )
  {
    userSvtEntity = (unsigned __int64)this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_29;
    userSvtEntity = UserServantEntity__getCommandCardLimitCount((UserServantEntity_o *)userSvtEntity, 1, 0LL);
    if ( !v18 )
      goto LABEL_29;
  }
  else
  {
    userSvtEntity = (unsigned int)this->fields.commandCardLimitCount;
    if ( !v18 )
      goto LABEL_29;
  }
  v18->fields.commandCardLimitCount = userSvtEntity;
  v19 = *p_currentLimitCountCache;
  if ( ignoreRandomSettings )
  {
    userSvtEntity = (unsigned __int64)this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_29;
    userSvtEntity = UserServantEntity__getDispLimitCount((UserServantEntity_o *)userSvtEntity, 1, 0LL);
    if ( !v19 )
      goto LABEL_29;
  }
  else
  {
    userSvtEntity = (unsigned int)this->fields.dispLimitCount;
    if ( !v19 )
      goto LABEL_29;
  }
  v19->fields.dispLimitCount = userSvtEntity;
  v20 = *p_currentLimitCountCache;
  if ( ignoreRandomSettings )
  {
    userSvtEntity = (unsigned __int64)this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_29;
    userSvtEntity = UserServantEntity__getPortraitLimitCount((UserServantEntity_o *)userSvtEntity, 1, 0LL);
    if ( !v20 )
      goto LABEL_29;
  }
  else
  {
    userSvtEntity = (unsigned int)this->fields.portraitLimitCount;
    if ( !v20 )
      goto LABEL_29;
  }
  v20->fields.portraitLimitCount = userSvtEntity;
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
  System_Int32_array *v7; // x7
  System_Int32_array *appendPassiveSkillIdList; // x8
  System_String_array *appendPassiveSkillTitleMessageList; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array *appendPassiveSkillExplanationMessageList; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Boolean_array *appendPassiveSkillReleaseStateList; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array *appendPassiveSkillLvList; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  appendPassiveSkillIdList = this->fields.appendPassiveSkillIdList;
  *idList = appendPassiveSkillIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)idList,
    (System_Int32_array **)appendPassiveSkillIdList,
    titleList,
    explanationList,
    releaseStateList,
    lvList,
    (System_Int32_array *)method,
    v7);
  appendPassiveSkillTitleMessageList = this->fields.appendPassiveSkillTitleMessageList;
  *titleList = appendPassiveSkillTitleMessageList;
  sub_B5D560(
    (BattleServantConfConponent_o *)titleList,
    (System_Int32_array **)appendPassiveSkillTitleMessageList,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  appendPassiveSkillExplanationMessageList = this->fields.appendPassiveSkillExplanationMessageList;
  *explanationList = appendPassiveSkillExplanationMessageList;
  sub_B5D560(
    (BattleServantConfConponent_o *)explanationList,
    (System_Int32_array **)appendPassiveSkillExplanationMessageList,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  appendPassiveSkillReleaseStateList = this->fields.appendPassiveSkillReleaseStateList;
  *releaseStateList = appendPassiveSkillReleaseStateList;
  sub_B5D560(
    (BattleServantConfConponent_o *)releaseStateList,
    (System_Int32_array **)appendPassiveSkillReleaseStateList,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  appendPassiveSkillLvList = this->fields.appendPassiveSkillLvList;
  *lvList = appendPassiveSkillLvList;
  sub_B5D560(
    (BattleServantConfConponent_o *)lvList,
    (System_Int32_array **)appendPassiveSkillLvList,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SkillInfo_array *equipSkillInfoList; // x8

  equipSkillInfoList = this->fields.equipSkillInfoList;
  *skillInfoList = equipSkillInfoList;
  sub_B5D560(
    (BattleServantConfConponent_o *)skillInfoList,
    (System_Int32_array **)equipSkillInfoList,
    (System_String_array **)method,
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  struct ServantEntity_o *svtEntity; // x8
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x9
  FriendshipMaster_o *v21; // x24
  int32_t friendshipId; // w25
  __int64 v23; // x26
  __int64 v24; // x27
  struct ServantEntity_o *v25; // x8
  struct UserServantCollectionEntity_o *v26; // x9
  UserServantEntity_o *userSvtEntity; // x0
  bool result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_42ED34E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_FriendshipMaster___, (_DWORD)rank, (_DWORD)max, late);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    byte_42ED34E = 1;
  }
  if ( this->fields.userSvtCollectionEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_FriendshipMaster___);
      svtEntity = this->fields.svtEntity;
      if ( svtEntity )
      {
        userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
        if ( userSvtCollectionEntity )
        {
          v21 = (FriendshipMaster_o *)Instance;
          friendshipId = svtEntity->fields.friendshipId;
          v23 = *(_QWORD *)&userSvtCollectionEntity->fields.friendship.fields.currentCryptoKey;
          v24 = *(_QWORD *)&userSvtCollectionEntity->fields.friendship.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v29.fields.currentCryptoKey = v23;
          *(_QWORD *)&v29.fields.fakeValue = v24;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v29, 0LL);
          v25 = this->fields.svtEntity;
          if ( v25 )
          {
            v26 = this->fields.userSvtCollectionEntity;
            if ( v26 )
            {
              if ( v21 )
              {
                FriendshipMaster__GetFriendshipRank(
                  v21,
                  friendshipId,
                  (int32_t)Instance,
                  v26->fields.friendshipExceedCount + v25->fields.maxFriendshipRank,
                  rank,
                  max,
                  late,
                  fraction,
                  0LL);
                userSvtEntity = this->fields.userSvtEntity;
                if ( !userSvtEntity || UserServantEntity__IsAddFriendShipHeroine(userSvtEntity, 0LL) )
                  return 1;
                Instance = (DataManager_o *)this->fields.svtEntity;
                if ( Instance )
                {
                  if ( ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0LL) )
                    *late = -1;
                  return 1;
                }
              }
            }
          }
        }
      }
    }
    sub_B5D69C(Instance, v18);
  }
  result = 0;
  *rank = 0;
  *max = 0;
  *late = 0;
  *fraction = 0.0;
  return result;
}


bool __fastcall ServantStatusListViewItem__GetNpInfo(
        ServantStatusListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TreasureDvcInfo_o *v8; // x8

  v8 = this->fields.tdInfo;
  *tdInfo = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)tdInfo,
    (System_Int32_array **)v8,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  return this->fields.isTdResult;
}


bool __fastcall ServantStatusListViewItem__GetNpInfo_34351972(
        ServantStatusListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  UserServantEntity_o *svtEntity; // x0
  TreasureDvcInfo_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42ED34D & 1) == 0 )
  {
    sub_B5D5C4(&TreasureDvcInfo_TypeInfo, (_DWORD)tdInfo, dispLimitCount, method);
    byte_42ED34D = 1;
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
      sub_B5D69C(svtEntity, tdInfo);
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
    v9 = (TreasureDvcInfo_o *)sub_B5D694(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v9, 0LL);
    *tdInfo = v9;
    sub_B5D560((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
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
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array *passiveSkillIdList; // x8
  System_String_array *passiveSkillTitleMessageList; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array *passiveSkillExplanationMessageList; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  passiveSkillIdList = this->fields.passiveSkillIdList;
  *idList = passiveSkillIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)idList,
    (System_Int32_array **)passiveSkillIdList,
    titleList,
    explanationList,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  passiveSkillTitleMessageList = this->fields.passiveSkillTitleMessageList;
  *titleList = passiveSkillTitleMessageList;
  sub_B5D560(
    (BattleServantConfConponent_o *)titleList,
    (System_Int32_array **)passiveSkillTitleMessageList,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  passiveSkillExplanationMessageList = this->fields.passiveSkillExplanationMessageList;
  *explanationList = passiveSkillExplanationMessageList;
  sub_B5D560(
    (BattleServantConfConponent_o *)explanationList,
    (System_Int32_array **)passiveSkillExplanationMessageList,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


void __fastcall ServantStatusListViewItem__GetPassiveSkillInfo_34351492(
        ServantStatusListViewItem_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UserServantEntity_o *svtEntity; // x0
  BalanceConfig_c *v18; // x0
  System_Int32_array *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_42ED34C & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)idList, (_DWORD)titleList, explanationList);
    sub_B5D5C4(&int___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&string___TypeInfo, v14, v15, v16);
    byte_42ED34C = 1;
  }
  if ( this->fields.userSvtEntity )
  {
    svtEntity = (UserServantEntity_o *)this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_17;
    if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
    {
      svtEntity = this->fields.userSvtEntity;
      if ( svtEntity )
      {
        UserServantEntity__getPassiveSkillInfo(svtEntity, idList, titleList, explanationList, dispLimitCount, 0LL);
        return;
      }
LABEL_17:
      sub_B5D69C(svtEntity, idList);
    }
    goto LABEL_13;
  }
  if ( !this->fields.userSvtCollectionEntity )
    goto LABEL_13;
  svtEntity = (UserServantEntity_o *)this->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_17;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
  {
LABEL_13:
    v18 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    v19 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)v18->static_fields->SvtPassiveSkillListMax);
    *idList = v19;
    sub_B5D560((BattleServantConfConponent_o *)idList, (System_Int32_array **)v19, v20, v21, v22, v23, v24, v25);
    v26 = (System_String_array *)sub_B5D5DC(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleList = v26;
    sub_B5D560((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
    v33 = (System_String_array *)sub_B5D5DC(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *explanationList = v33;
    sub_B5D560(
      (BattleServantConfConponent_o *)explanationList,
      (System_Int32_array **)v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    return;
  }
  svtEntity = (UserServantEntity_o *)this->fields.userSvtCollectionEntity;
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


void __fastcall ServantStatusListViewItem__GetSkillInfo(
        ServantStatusListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SkillInfo_array *v8; // x8

  v8 = this->fields.skillInfoList;
  *skillInfoList = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)skillInfoList,
    (System_Int32_array **)v8,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantStatusListViewItem__GetSkillInfo_34351112(
        ServantStatusListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UserServantEntity_o *userSvtEntity; // x0
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  BalanceConfig_c *v12; // x0
  SkillInfo_array *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42ED34B & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)skillInfoList, dispLimitCount, method);
    sub_B5D5C4(&SkillInfo___TypeInfo, v7, v8, v9);
    byte_42ED34B = 1;
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
      v12 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v12 = BalanceConfig_TypeInfo;
      }
      v13 = (SkillInfo_array *)sub_B5D5DC(SkillInfo___TypeInfo, (unsigned int)v12->static_fields->SvtSkillListMax);
      *skillInfoList = v13;
      sub_B5D560(
        (BattleServantConfConponent_o *)skillInfoList,
        (System_Int32_array **)v13,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
  }
}


bool __fastcall ServantStatusListViewItem__GetVoiceInfo(
        ServantStatusListViewItem_o *this,
        System_String_o **illust,
        System_String_o **voice,
        bool *isPlayVoice,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  DataManager_o *Instance; // x0
  __int64 v55; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v57; // x1
  int32_t name; // w22
  struct ServantEntity_o *svtEntity; // x8
  int32_t currentCardLimitCount; // w25
  int cvId; // w24
  int32_t cardLimitCount; // w25
  struct ServantEntity_o *v63; // x8
  ServantLimitAddMaster_o *v64; // x23
  __int64 v65; // x26
  __int64 v66; // x27
  WarEntity_o *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_String_o *age; // x1
  WarEntity_o *v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_String_o *v82; // x1
  LocalizationManager_c *v83; // x0
  __int64 *v84; // x8
  ServantLimitAddEntity_o *v86; // [xsp+8h] [xbp-58h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16

  if ( (byte_42ED34F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_CommandCodeCommentMaster___,
      (_DWORD)illust,
      (_DWORD)voice,
      isPlayVoice);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CvMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_IllustratorMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v18, v19, v20);
    sub_B5D5C4(&DataManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__, v24, v25, v26);
    sub_B5D5C4(&Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__, v27, v28, v29);
    sub_B5D5C4(
      &Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__,
      v30,
      v31,
      v32);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_14880/*"UNKNOWN_NAME_ILLUST"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_9451/*"NO_ENTRY_NAME_ILLUST"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_1/*""*/, v51, v52, v53);
    byte_42ED34F = 1;
  }
  entity = 0LL;
  v86 = 0LL;
  *voice = (System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)voice,
    (System_Int32_array **)StringLiteral_1/*""*/,
    (System_String_array **)voice,
    (System_String_array **)isPlayVoice,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  *isPlayVoice = 0;
  if ( this->fields.commandCodeEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_49;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          Instance,
                                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    Instance = (DataManager_o *)ServantStatusListViewItem__get_CommandCodeId(this, v57);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_49;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  &entity,
                                  (int32_t)Instance,
                                  (const MethodInfo_23FAE6C *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      goto LABEL_36;
    if ( !entity )
LABEL_49:
      sub_B5D69C(Instance, v55);
    name = (int32_t)entity->fields.name;
  }
  else
  {
    svtEntity = this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_49;
    currentCardLimitCount = this->fields.currentCardLimitCount;
    name = svtEntity->fields.illustratorId;
    cvId = svtEntity->fields.cvId;
    if ( (currentCardLimitCount & 0x80000000) != 0 )
    {
      cardLimitCount = this->fields.cardLimitCount;
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      currentCardLimitCount = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(cardLimitCount, 0LL);
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    v63 = this->fields.svtEntity;
    if ( !v63 )
      goto LABEL_49;
    v64 = (ServantLimitAddMaster_o *)Instance;
    v66 = *(_QWORD *)&v63->fields.id.fields.currentCryptoKey;
    v65 = *(_QWORD *)&v63->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v88.fields.currentCryptoKey = v66;
    *(_QWORD *)&v88.fields.fakeValue = v65;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v88, 0LL);
    if ( !v64 )
      goto LABEL_49;
    if ( ServantLimitAddMaster__TryGetEntity(v64, &v86, (int32_t)Instance, currentCardLimitCount, 0LL) )
    {
      Instance = (DataManager_o *)v86;
      if ( !v86 )
        goto LABEL_49;
      cvId = ServantLimitAddEntity__GetOverwriteCvId(v86, cvId, 0LL);
    }
    if ( cvId >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_49;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CvMaster___);
      if ( !Instance )
        goto LABEL_49;
      v67 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
              cvId,
              (const MethodInfo_23FAE10 *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__);
      if ( v67 )
      {
        age = v67->fields.age;
        *voice = age;
        sub_B5D560((BattleServantConfConponent_o *)voice, (System_Int32_array **)age, v68, v69, v70, v71, v72, v73);
        *isPlayVoice = 1;
      }
    }
  }
  if ( name < 1 )
  {
    v83 = LocalizationManager_TypeInfo;
    if ( !name )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v84 = &StringLiteral_9451/*"NO_ENTRY_NAME_ILLUST"*/;
      goto LABEL_43;
    }
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
    {
LABEL_42:
      v84 = &StringLiteral_14880/*"UNKNOWN_NAME_ILLUST"*/;
LABEL_43:
      v82 = LocalizationManager__Get((System_String_o *)*v84, 0LL);
      *illust = v82;
      goto LABEL_44;
    }
LABEL_40:
    if ( !v83->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v83);
    goto LABEL_42;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_IllustratorMaster___);
  if ( !Instance )
    goto LABEL_49;
  v75 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          name,
          (const MethodInfo_23FAE10 *)Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__);
  if ( !v75 )
  {
LABEL_36:
    v83 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
      goto LABEL_42;
    goto LABEL_40;
  }
  v82 = v75->fields.age;
  *illust = v82;
LABEL_44:
  sub_B5D560((BattleServantConfConponent_o *)illust, (System_Int32_array **)v82, v76, v77, v78, v79, v80, v81);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  System_String_o *CondTitle; // x0
  int32_t paramLimitCount; // w8
  bool result; // w0
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42ED352 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, svtId, imageLimitCount, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_1/*""*/, v10, v11, v12);
    byte_42ED352 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_13;
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)Instance, &entity, svtId, imageLimitCount, 0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_13:
    sub_B5D69C(Instance, v14);
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
  int v2; // w2
  __int64 v3; // x3
  TreasureDvcInfo_o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  UserServantEntity_o *svtEntity; // x0
  bool TreasureDeviceInfo; // w0
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  EquipTargetInfo_o *equipTargetInfo; // x0

  if ( (byte_42ED339 & 1) == 0 )
  {
    sub_B5D5C4(&TreasureDvcInfo_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED339 = 1;
  }
  this->fields.isTdResult = 0;
  v5 = (TreasureDvcInfo_o *)sub_B5D694(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v5, 0LL);
  this->fields.tdInfo = v5;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.tdInfo, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(this, v12);
  if ( this->fields.userSvtEntity )
  {
    UserServantEntity__getSkillInfo(
      this->fields.userSvtEntity,
      &this->fields.skillInfoList,
      -1,
      ConvertOverwriteDispImageLimitCount,
      1,
      0,
      -1,
      0LL);
    svtEntity = (UserServantEntity_o *)this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_33;
    if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
    {
      svtEntity = this->fields.userSvtEntity;
      if ( !svtEntity )
        goto LABEL_33;
      UserServantEntity__getPassiveSkillInfo(
        svtEntity,
        &this->fields.passiveSkillIdList,
        &this->fields.passiveSkillTitleMessageList,
        &this->fields.passiveSkillExplanationMessageList,
        ConvertOverwriteDispImageLimitCount,
        0LL);
      svtEntity = this->fields.userSvtEntity;
      if ( !svtEntity )
        goto LABEL_33;
      UserServantEntity__GetAppendPassiveSkillInfo(
        svtEntity,
        &this->fields.appendPassiveSkillIdList,
        &this->fields.appendPassiveSkillTitleMessageList,
        &this->fields.appendPassiveSkillExplanationMessageList,
        &this->fields.appendPassiveSkillReleaseStateList,
        &this->fields.appendPassiveSkillLvList,
        0LL);
    }
    svtEntity = this->fields.userSvtEntity;
    if ( svtEntity )
    {
      TreasureDeviceInfo = UserServantEntity__getTreasureDeviceInfo(
                             svtEntity,
                             &this->fields.tdInfo,
                             -1,
                             ConvertOverwriteDispImageLimitCount,
                             0,
                             0LL);
LABEL_16:
      this->fields.isTdResult = TreasureDeviceInfo;
      return;
    }
LABEL_33:
    sub_B5D69C(svtEntity, v13);
  }
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
  {
    ServantLeaderInfo__getSkillInfo(servantLeaderInfo, &this->fields.skillInfoList, 0LL);
    svtEntity = (UserServantEntity_o *)this->fields.servantLeaderInfo;
    if ( svtEntity )
    {
      ServantLeaderInfo__getPassiveSkillInfo(
        (ServantLeaderInfo_o *)svtEntity,
        &this->fields.passiveSkillIdList,
        &this->fields.passiveSkillTitleMessageList,
        &this->fields.passiveSkillExplanationMessageList,
        0LL);
      svtEntity = (UserServantEntity_o *)this->fields.servantLeaderInfo;
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
        svtEntity = (UserServantEntity_o *)this->fields.servantLeaderInfo;
        if ( svtEntity )
        {
          TreasureDeviceInfo = ServantLeaderInfo__getTreasureDeviceInfo(
                                 (ServantLeaderInfo_o *)svtEntity,
                                 &this->fields.tdInfo,
                                 0LL);
          goto LABEL_16;
        }
      }
    }
    goto LABEL_33;
  }
  equipTargetInfo = this->fields.equipTargetInfo;
  if ( equipTargetInfo )
  {
    EquipTargetInfo__getSkillInfo(equipTargetInfo, &this->fields.skillInfoList, 0LL);
    return;
  }
  if ( this->fields.userSvtCollectionEntity )
  {
    svtEntity = (UserServantEntity_o *)this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_33;
    if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
      goto LABEL_25;
    svtEntity = (UserServantEntity_o *)this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_33;
    if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)svtEntity, 0LL) )
    {
LABEL_25:
      svtEntity = (UserServantEntity_o *)this->fields.userSvtCollectionEntity;
      if ( !svtEntity )
        goto LABEL_33;
      UserServantCollectionEntity__getSkillInfo(
        (UserServantCollectionEntity_o *)svtEntity,
        &this->fields.skillInfoList,
        -1,
        ConvertOverwriteDispImageLimitCount,
        -1,
        0LL);
    }
    svtEntity = (UserServantEntity_o *)this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_33;
    if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
    {
      svtEntity = (UserServantEntity_o *)this->fields.userSvtCollectionEntity;
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
        svtEntity = (UserServantEntity_o *)this->fields.userSvtCollectionEntity;
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
          svtEntity = (UserServantEntity_o *)this->fields.userSvtCollectionEntity;
          if ( svtEntity )
          {
            TreasureDeviceInfo = UserServantCollectionEntity__getTreasureDeviceInfo(
                                   (UserServantCollectionEntity_o *)svtEntity,
                                   &this->fields.tdInfo,
                                   -1,
                                   ConvertOverwriteDispImageLimitCount,
                                   0LL);
            goto LABEL_16;
          }
        }
      }
      goto LABEL_33;
    }
  }
}


void __fastcall ServantStatusListViewItem__RefreshLimitCountWithRandom(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  RandomLimitCountManager_c *v14; // x0
  UserServantEntity_o *userSvtEntity; // x21
  __int64 v16; // x20
  int32_t ownRandomSettingButtonIndex; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // kr00_16
  __int64 v19; // x8
  __int64 v20; // x9
  const MethodInfo *v21; // x2
  int32_t v22; // w21
  BalanceConfig_c *v23; // x8
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t dispLimitCount; // w21
  struct ServantStatusListViewItem_LimitCountCache_o *v26; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_42ED336 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v11, v12, v13);
    byte_42ED336 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_42E6BE7 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6BE7 = 1;
  }
  v14 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v14 = RandomLimitCountManager_TypeInfo;
  }
  if ( v14->static_fields->enableRandomLimitCount )
  {
    if ( this->fields.isEnableOwnRandomSetting )
    {
      userSvtEntity = this->fields.userSvtEntity;
      v16 = sub_B5D694(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_21827084((UserServantEntity_o *)v16, userSvtEntity, 0LL);
      ownRandomSettingButtonIndex = this->fields.ownRandomSettingButtonIndex;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(ownRandomSettingButtonIndex, 0LL);
      if ( !v16 )
        sub_B5D69C(*(_QWORD *)&v18.fields.currentCryptoKey, *(_QWORD *)&v18.fields.fakeValue);
      v19 = *(_QWORD *)(v16 + 80);
      v20 = *(_QWORD *)(v16 + 88);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v16 + 208) = v18;
      *(_QWORD *)&v27.fields.currentCryptoKey = v19;
      *(_QWORD *)&v27.fields.fakeValue = v20;
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v27, 0LL);
      v23 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v23 = BalanceConfig_TypeInfo;
      }
      if ( v22 == v23->static_fields->ServantIdMashu1 )
      {
        currentLimitCountCache = this->fields.currentLimitCountCache;
        if ( currentLimitCountCache )
        {
          dispLimitCount = currentLimitCountCache->fields.dispLimitCount;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v16 + 128) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                              dispLimitCount,
                                                                              0LL);
        }
      }
      ServantStatusListViewItem__SetLimitCountInfo(this, (UserServantEntity_o *)v16, v21);
    }
    else
    {
      v26 = this->fields.currentLimitCountCache;
      if ( v26 )
      {
        this->fields.cardLimitCount = v26->fields.cardLimitCount;
        this->fields.iconLimitCount = v26->fields.iconLimitCount;
        this->fields.commandCardLimitCount = v26->fields.commandCardLimitCount;
        this->fields.dispLimitCount = v26->fields.dispLimitCount;
        this->fields.portraitLimitCount = v26->fields.portraitLimitCount;
      }
    }
  }
}


void __fastcall ServantStatusListViewItem__SetCostumeAndOtherIds(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  ServantEntity_o *svtEntity; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct System_Int32_array **p_costumeAndOtherIds; // x0
  System_Int32_array **v31; // x1
  bool IsOtherImage; // w0
  struct System_Int32_array *costumeIds; // x21
  System_Collections_Generic_List_int__o *v34; // x0
  System_Collections_Generic_List_int__o *v35; // x20
  struct System_Int32_array *v36; // x0
  struct System_Int32_array **v37; // x19
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct System_Int32_array *v44; // x0

  if ( (byte_42ED353 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v20, v21, v22);
    byte_42ED353 = 1;
  }
  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_23;
  if ( !ServantEntity__IsBeast(svtEntity, 0LL) )
  {
    svtEntity = this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_23;
    if ( !ServantEntity__get_IsServant(svtEntity, 0LL) )
    {
      svtEntity = this->fields.svtEntity;
      if ( !svtEntity )
        goto LABEL_23;
      if ( !ServantEntity__get_IsServantCollection(svtEntity, 0LL) )
        goto LABEL_5;
    }
    IsOtherImage = ConstantMaster__IsOtherImage(0LL);
    costumeIds = this->fields.costumeIds;
    if ( IsOtherImage )
    {
      v34 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
      v35 = v34;
      if ( costumeIds )
        System_Collections_Generic_List_int____ctor_50870440(
          v34,
          (System_Collections_Generic_IEnumerable_T__o *)costumeIds,
          (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
      else
        System_Collections_Generic_List_int____ctor(
          v34,
          (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
      svtEntity = (ServantEntity_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( v35 )
      {
        System_Collections_Generic_List_int___Add(
          v35,
          BalanceConfig_TypeInfo->static_fields->OtherImageLimitCount,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        v44 = System_Collections_Generic_List_int___ToArray(
                v35,
                (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
        this->fields.costumeAndOtherIds = v44;
        v31 = (System_Int32_array **)v44;
        p_costumeAndOtherIds = &this->fields.costumeAndOtherIds;
        goto LABEL_22;
      }
    }
    else
    {
      if ( !costumeIds )
        goto LABEL_5;
      v36 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, costumeIds->max_length);
      this->fields.costumeAndOtherIds = v36;
      v37 = &this->fields.costumeAndOtherIds;
      sub_B5D560((BattleServantConfConponent_o *)v37, (System_Int32_array **)v36, v38, v39, v40, v41, v42, v43);
      svtEntity = (ServantEntity_o *)*(v37 - 1);
      if ( svtEntity )
      {
        System_Array__CopyTo((System_Array_o *)svtEntity, (System_Array_o *)*v37, 0, 0LL);
        return;
      }
    }
LABEL_23:
    sub_B5D69C(svtEntity, method);
  }
LABEL_5:
  this->fields.costumeAndOtherIds = 0LL;
  p_costumeAndOtherIds = &this->fields.costumeAndOtherIds;
  v31 = 0LL;
LABEL_22:
  sub_B5D560((BattleServantConfConponent_o *)p_costumeAndOtherIds, v31, v24, v25, v26, v27, v28, v29);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  ServantStatusListViewItem_o *v9; // x19
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  __int64 v37; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_equipUserSvtEntity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v39; // x8
  __int64 v40; // x22
  __int64 v41; // x23
  struct System_Int64_array *equipIdList; // x8
  PartyOrganizationListViewItem_o *memberItem; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v44; // x8
  ServantStatusListViewItem_o *v45; // x21
  __int64 v46; // x22
  __int64 v47; // x23
  System_Int32_array **Entity; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  ServantStatusListViewItem_o *v55; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v56; // x8
  int32_t v57; // w20
  System_Int32_array **v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct System_Int64_array *v65; // x8
  PartyOrganizationListViewItem_o *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  BalanceConfig_c *v79; // x0
  System_Int32_array **v80; // x1
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  __int64 v87; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16

  v9 = this;
  if ( (byte_42ED33A & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, equipUserSvtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v16, v17, v18);
    sub_B5D5C4(&DataManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v22, v23, v24);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v25, v26, v27);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32, v33);
    this = (ServantStatusListViewItem_o *)sub_B5D5C4(&SkillInfo___TypeInfo, v34, v35, v36);
    byte_42ED33A = 1;
  }
  if ( equipUserSvtId >= 1 && v9->fields.userSvtEntity )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusListViewItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !this )
      goto LABEL_42;
    p_equipUserSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v9->fields.equipUserSvtEntity;
    this = (ServantStatusListViewItem_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                            (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                            &v9->fields.equipUserSvtEntity,
                                            equipUserSvtId,
                                            (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v39 = *p_equipUserSvtEntity;
      if ( !*p_equipUserSvtEntity )
        goto LABEL_42;
      v41 = *(_QWORD *)&v39[5].fields.currentCryptoKey;
      v40 = *(_QWORD *)&v39[5].fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v88.fields.currentCryptoKey = v41;
      *(_QWORD *)&v88.fields.fakeValue = v40;
      this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                              v88,
                                              0LL);
      if ( (int)this >= 1 )
      {
        equipIdList = v9->fields.equipIdList;
        if ( !equipIdList )
          goto LABEL_18;
        if ( equipIdList->max_length )
        {
          equipIdList->m_Items[0] = equipUserSvtId;
LABEL_18:
          memberItem = v9->fields.memberItem;
          if ( memberItem )
            PartyOrganizationListViewItem__SetEquipUserServantId(memberItem, equipUserSvtId, 0LL);
          v9->fields.equipTargetId1 = equipUserSvtId;
          this = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ServantStatusListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
            v44 = *p_equipUserSvtEntity;
            if ( *p_equipUserSvtEntity )
            {
              v45 = this;
              v47 = *(_QWORD *)&v44[5].fields.currentCryptoKey;
              v46 = *(_QWORD *)&v44[5].fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v89.fields.currentCryptoKey = v47;
              *(_QWORD *)&v89.fields.fakeValue = v46;
              this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                      v89,
                                                      0LL);
              if ( v45 )
              {
                Entity = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)v45,
                                                  (int32_t)this,
                                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                v9->fields.equipServantEntity = (struct ServantEntity_o *)Entity;
                sub_B5D560(
                  (BattleServantConfConponent_o *)&v9->fields.equipServantEntity,
                  Entity,
                  v49,
                  v50,
                  v51,
                  v52,
                  v53,
                  v54);
                this = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( this )
                {
                  this = (ServantStatusListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                  if ( *p_equipUserSvtEntity )
                  {
                    v55 = this;
                    this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                            (*p_equipUserSvtEntity)[5],
                                                            0LL);
                    v56 = *p_equipUserSvtEntity;
                    if ( *p_equipUserSvtEntity )
                    {
                      v57 = (int)this;
                      this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                              v56[6],
                                                              0LL);
                      if ( v55 )
                      {
                        v58 = (System_Int32_array **)ServantLimitMaster__GetEntity(
                                                       (ServantLimitMaster_o *)v55,
                                                       v57,
                                                       (int32_t)this,
                                                       0LL);
                        v9->fields.equipSvtLimitEntity = (struct ServantLimitEntity_o *)v58;
                        sub_B5D560(
                          (BattleServantConfConponent_o *)&v9->fields.equipSvtLimitEntity,
                          v58,
                          v59,
                          v60,
                          v61,
                          v62,
                          v63,
                          v64);
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
LABEL_42:
          sub_B5D69C(this, v37);
        }
LABEL_43:
        v87 = sub_B5D6C8(this);
        sub_B5D668(v87, 0LL);
      }
    }
  }
  v65 = v9->fields.equipIdList;
  if ( v65 )
  {
    if ( !v65->max_length )
      goto LABEL_43;
    v65->m_Items[0] = 0LL;
  }
  v66 = v9->fields.memberItem;
  if ( v66 && !v66->fields._IsDisappearEquip_k__BackingField )
    PartyOrganizationListViewItem__SetEquipUserServantId(v66, 0LL, 0LL);
  v9->fields.equipTargetId1 = 0LL;
  v9->fields.equipUserSvtEntity = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v9->fields.equipUserSvtEntity,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v9->fields.equipServantEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&v9->fields.equipServantEntity, 0LL, v67, v68, v69, v70, v71, v72);
  v9->fields.equipSvtLimitEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&v9->fields.equipSvtLimitEntity, 0LL, v73, v74, v75, v76, v77, v78);
  v79 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v79 = BalanceConfig_TypeInfo;
  }
  v80 = (System_Int32_array **)sub_B5D5DC(SkillInfo___TypeInfo, (unsigned int)v79->static_fields->SvtEquipSkillListMax);
  v9->fields.equipSkillInfoList = (struct SkillInfo_array *)v80;
  sub_B5D560((BattleServantConfConponent_o *)&v9->fields.equipSkillInfoList, v80, v81, v82, v83, v84, v85, v86);
}


void __fastcall ServantStatusListViewItem__SetLimitCountInfo(
        ServantStatusListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x21
  __int64 v10; // x22
  int32_t v11; // w21
  int32_t v12; // w0
  System_Int32_array *costumeAndOtherIds; // x22
  int32_t v14; // w23
  struct System_Int32_array *CardSelectList; // x0
  struct System_Int32_array **p_cardSelectList; // x19
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  int32_t v23; // w21
  int32_t v24; // w0
  System_Int32_array **SelectList; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  int32_t v32; // w21
  int32_t v33; // w0
  System_Int32_array **v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **CommandCardParam; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  int32_t v48; // w21
  int32_t v49; // w0
  System_Int32_array **v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  int32_t v57; // w0
  __int64 v58; // x8
  int32_t v59; // w20
  int32_t v60; // w0
  System_Int32_array **v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_42ED337 & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    byte_42ED337 = 1;
  }
  if ( entity )
  {
    this->fields.cardLimitCount = UserServantEntity__getCardImageLimitCount(entity, 0, 0LL);
    this->fields.maxCardLimitCount = UserServantEntity__getMaxCardImageLimitCount(entity, 0LL);
    v10 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v68.fields.currentCryptoKey = v10;
    *(_QWORD *)&v68.fields.fakeValue = v9;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v68, 0LL);
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(entity->fields.limitCount, 0LL);
    costumeAndOtherIds = this->fields.costumeAndOtherIds;
    v14 = v12;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    CardSelectList = ImageLimitCount__GetCardSelectList(v11, v14, costumeAndOtherIds, 0LL);
    this->fields.cardSelectList = CardSelectList;
    p_cardSelectList = &this->fields.cardSelectList;
    sub_B5D560(
      (BattleServantConfConponent_o *)p_cardSelectList,
      (System_Int32_array **)CardSelectList,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    *((_DWORD *)p_cardSelectList + 2) = UserServantEntity__getDispLimitCount(entity, 0, 0LL);
    *((_DWORD *)p_cardSelectList + 3) = UserServantEntity__getMaxDispLimitCount(entity, 0LL);
    v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(entity->fields.svtId, 0LL);
    v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(entity->fields.limitCount, 0LL);
    SelectList = (System_Int32_array **)ImageLimitCount__GetSelectList(v23, v24, *(p_cardSelectList - 3), 0LL);
    p_cardSelectList[2] = (struct System_Int32_array *)SelectList;
    sub_B5D560((BattleServantConfConponent_o *)(p_cardSelectList + 2), SelectList, v26, v27, v28, v29, v30, v31);
    *((_DWORD *)p_cardSelectList + 6) = UserServantEntity__getCommandCardLimitCount(entity, 0, 0LL);
    *((_DWORD *)p_cardSelectList + 7) = UserServantEntity__getMaxCommandCardLimitCount(entity, 0LL);
    v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(entity->fields.svtId, 0LL);
    v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(entity->fields.limitCount, 0LL);
    v34 = (System_Int32_array **)ImageLimitCount__GetSelectList(v32, v33, *(p_cardSelectList - 3), 0LL);
    p_cardSelectList[4] = (struct System_Int32_array *)v34;
    sub_B5D560((BattleServantConfConponent_o *)(p_cardSelectList + 4), v34, v35, v36, v37, v38, v39, v40);
    CommandCardParam = (System_Int32_array **)UserServantEntity__GetCommandCardParam(entity, 0LL);
    p_cardSelectList[5] = (struct System_Int32_array *)CommandCardParam;
    sub_B5D560((BattleServantConfConponent_o *)(p_cardSelectList + 5), CommandCardParam, v42, v43, v44, v45, v46, v47);
    *((_DWORD *)p_cardSelectList + 12) = UserServantEntity__getIconLimitCount(entity, 0, 0LL);
    *((_DWORD *)p_cardSelectList + 13) = UserServantEntity__getMaxIconLimitCount(entity, 0LL);
    v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(entity->fields.svtId, 0LL);
    v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(entity->fields.limitCount, 0LL);
    v50 = (System_Int32_array **)ImageLimitCount__GetCardSelectList(v48, v49, *(p_cardSelectList - 3), 0LL);
    p_cardSelectList[7] = (struct System_Int32_array *)v50;
    sub_B5D560((BattleServantConfConponent_o *)(p_cardSelectList + 7), v50, v51, v52, v53, v54, v55, v56);
    *((_DWORD *)p_cardSelectList + 16) = UserServantEntity__getPortraitLimitCount(entity, 0, 0LL);
    *((_DWORD *)p_cardSelectList + 17) = UserServantEntity__getMaxPortraitLimitCount(entity, 0LL);
    v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(entity->fields.svtId, 0LL);
    v58 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v69.fields.fakeValue = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
    v59 = v57;
    *(_QWORD *)&v69.fields.currentCryptoKey = v58;
    v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v69, 0LL);
    v61 = (System_Int32_array **)ImageLimitCount__GetSelectList(v59, v60, *(p_cardSelectList - 3), 0LL);
    p_cardSelectList[9] = (struct System_Int32_array *)v61;
    sub_B5D560((BattleServantConfConponent_o *)(p_cardSelectList + 9), v61, v62, v63, v64, v65, v66, v67);
  }
}


void __fastcall ServantStatusListViewItem__SetRandomSettingByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  if ( index > 2 )
    this->fields.supportRandomSettingButtonIndex = index;
  else
    this->fields.ownRandomSettingButtonIndex = index;
}


void __fastcall ServantStatusListViewItem__SetSupportRandomLimitCountByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusListViewItem_o *v5; // x19
  struct System_Int32_array *supportRandomLimitCountList; // x8
  int32_t max_length; // w9
  int32_t LIMIT_SUPPORT_NOT_ASSIGN; // w8
  UserServantEntity_c *v9; // x0
  __int64 v10; // x0

  v5 = this;
  if ( (byte_42ED34A & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_B5D5C4(&UserServantEntity_TypeInfo, index, (_DWORD)method, v3);
    byte_42ED34A = 1;
  }
  if ( index == -1 )
  {
    v9 = UserServantEntity_TypeInfo;
    if ( (BYTE3(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantEntity_TypeInfo);
      v9 = UserServantEntity_TypeInfo;
    }
    LIMIT_SUPPORT_NOT_ASSIGN = v9->static_fields->LIMIT_SUPPORT_NOT_ASSIGN;
    goto LABEL_13;
  }
  supportRandomLimitCountList = v5->fields.supportRandomLimitCountList;
  if ( supportRandomLimitCountList )
  {
    max_length = supportRandomLimitCountList->max_length;
    if ( max_length > index )
    {
      if ( max_length <= (unsigned int)index )
      {
        v10 = sub_B5D6C8(this);
        sub_B5D668(v10, 0LL);
      }
      LIMIT_SUPPORT_NOT_ASSIGN = supportRandomLimitCountList->m_Items[index + 1];
LABEL_13:
      v5->fields.supportRandomLimitCount = LIMIT_SUPPORT_NOT_ASSIGN;
    }
  }
}


bool __fastcall ServantStatusListViewItem__UpdateServantComment(
        ServantStatusListViewItem_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  _DWORD *klass; // x8
  BattleServantConfConponent_o *p_svtCommentEntityList; // x19
  struct ServantCommentEntity_array *svtCommentEntityList; // t1
  __int64 v21; // x20
  int v22; // w9
  unsigned int v23; // w10
  unsigned int v24; // w21
  bool v25; // w21
  __int64 v27; // x0

  if ( (byte_42ED351 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantCommentMaster___, svtId, imageLimitCount, method);
    sub_B5D5C4(&DataManager_TypeInfo, v7, v8, v9);
    byte_42ED351 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantCommentMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  Master_WarQuestSelectionMaster = (__int64)ServantCommentMaster__GetEntityList_27550020(
                                              (ServantCommentMaster_o *)Master_WarQuestSelectionMaster,
                                              svtId,
                                              imageLimitCount,
                                              0,
                                              0,
                                              0,
                                              0LL);
  svtCommentEntityList = this->fields.svtCommentEntityList;
  p_svtCommentEntityList = (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList;
  klass = svtCommentEntityList;
  v21 = Master_WarQuestSelectionMaster;
  if ( svtCommentEntityList )
  {
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_18;
    v22 = klass[6];
    if ( v22 != *(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
    {
LABEL_20:
      v25 = 1;
      goto LABEL_21;
    }
    if ( v22 >= 1 )
    {
      v23 = 0;
      do
      {
        if ( v23 >= klass[6] || (v24 = v23, v23 >= v22) )
        {
          v27 = sub_B5D6C8(Master_WarQuestSelectionMaster);
          sub_B5D668(v27, 0LL);
        }
        Master_WarQuestSelectionMaster = *(_QWORD *)&klass[2 * v23 + 8];
        if ( !Master_WarQuestSelectionMaster )
          break;
        Master_WarQuestSelectionMaster = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)Master_WarQuestSelectionMaster
                                                                                            + 312LL))(
                                           Master_WarQuestSelectionMaster,
                                           *(_QWORD *)(v21 + 8LL * (int)v23 + 32),
                                           *(_QWORD *)(*(_QWORD *)Master_WarQuestSelectionMaster + 320LL));
        if ( (Master_WarQuestSelectionMaster & 1) == 0 )
          goto LABEL_20;
        v22 = *(_DWORD *)(v21 + 24);
        v23 = v24 + 1;
        if ( (int)(v24 + 1) >= v22 )
          goto LABEL_19;
        klass = p_svtCommentEntityList->klass;
      }
      while ( p_svtCommentEntityList->klass );
LABEL_18:
      sub_B5D69C(Master_WarQuestSelectionMaster, v11);
    }
  }
LABEL_19:
  v25 = 0;
LABEL_21:
  p_svtCommentEntityList->klass = (BattleServantConfConponent_c *)v21;
  sub_B5D560(p_svtCommentEntityList, (System_Int32_array **)v21, v12, v13, v14, v15, v16, v17);
  return v25;
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
    sub_B5D69C(this, method);
  return svtLimitEntity->fields.agility;
}


int32_t __fastcall ServantStatusListViewItem__get_Atk(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTargetInfo; // x8

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
  int v2; // w2
  __int64 v3; // x3
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 v6; // x19
  __int64 v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_42ED33C & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED33C = 1;
  }
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    return 0;
  v7 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v9, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34279132(questRestrictionInfo, userSvtEntity, 0LL);
  if ( (result & 0x80000000) != 0 )
    return this->fields.cardLimitCount;
  return result;
}


int32_t __fastcall ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *memberItem; // x0
  int32_t result; // w0
  UserServantEntity_o *userSvtEntity; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( !this->fields.isConvertOverwriteImage )
    return this->fields.commandCardLimitCount;
  memberItem = this->fields.memberItem;
  if ( memberItem )
    return PartyOrganizationListViewItem__GetCommandCardLimitCount(memberItem, 0LL);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return this->fields.commandCardLimitCount;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return this->fields.commandCardLimitCount;
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34279132(questRestrictionInfo, userSvtEntity, 0LL);
  if ( (result & 0x80000000) != 0 )
    return this->fields.commandCardLimitCount;
  return result;
}


int32_t __fastcall ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *memberItem; // x0
  int32_t result; // w0
  UserServantEntity_o *userSvtEntity; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34279132(questRestrictionInfo, userSvtEntity, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34279132(questRestrictionInfo, userSvtEntity, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34279132(questRestrictionInfo, userSvtEntity, 0LL);
  if ( (result & 0x80000000) != 0 )
    return this->fields.portraitLimitCount;
  return result;
}


int32_t __fastcall ServantStatusListViewItem__get_Cost(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *svtEntity; // x8

  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  __int64 v6; // x19
  __int64 v7; // x20
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_42ED348 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED348 = 1;
  }
  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
  {
    v7 = *(_QWORD *)&equipUserSvtEntity->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&equipUserSvtEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v11.fields.currentCryptoKey = v7;
    *(_QWORD *)&v11.fields.fakeValue = v6;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v11, 0LL);
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
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  RandomLimitCountManager_c *ManualSetCommandCardLimit; // x0
  struct UserServantEntity_o *userSvtEntity; // x20
  int32_t commandCardLimitCount; // w1
  bool v8; // w2
  UserServantEntity_o *v9; // x0

  if ( (byte_42ED341 & 1) == 0 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED341 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_42E6BE7 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6BE7 = 1;
  }
  ManualSetCommandCardLimit = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
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
      v9 = this->fields.userSvtEntity;
      v8 = 0;
      return UserServantEntity__IsModifyCommandCardLimitCount(v9, commandCardLimitCount, v8, 0LL);
    }
LABEL_19:
    sub_B5D69C(ManualSetCommandCardLimit, method);
  }
  ManualSetCommandCardLimit = (RandomLimitCountManager_c *)ServantStatusListViewItem__get_ManualSetCommandCardLimit(
                                                             this,
                                                             method);
  if ( !userSvtEntity )
    goto LABEL_19;
  commandCardLimitCount = (int)ManualSetCommandCardLimit;
  v8 = 1;
  v9 = userSvtEntity;
  return UserServantEntity__IsModifyCommandCardLimitCount(v9, commandCardLimitCount, v8, 0LL);
}


bool __fastcall ServantStatusListViewItem__get_IsModifyDispLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  RandomLimitCountManager_c *ManualSetDispLimitCount; // x0
  struct UserServantEntity_o *userSvtEntity; // x20
  int32_t dispLimitCount; // w1
  bool v8; // w2
  UserServantEntity_o *v9; // x0

  if ( (byte_42ED33F & 1) == 0 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED33F = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_42E6BE7 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6BE7 = 1;
  }
  ManualSetDispLimitCount = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
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
      v9 = this->fields.userSvtEntity;
      v8 = 0;
      return UserServantEntity__IsModifyDispLimitCount(v9, dispLimitCount, v8, 0LL);
    }
LABEL_19:
    sub_B5D69C(ManualSetDispLimitCount, method);
  }
  ManualSetDispLimitCount = (RandomLimitCountManager_c *)ServantStatusListViewItem__get_ManualSetDispLimitCount(
                                                           this,
                                                           method);
  if ( !userSvtEntity )
    goto LABEL_19;
  dispLimitCount = (int)ManualSetDispLimitCount;
  v8 = 1;
  v9 = userSvtEntity;
  return UserServantEntity__IsModifyDispLimitCount(v9, dispLimitCount, v8, 0LL);
}


bool __fastcall ServantStatusListViewItem__get_IsModifyIconLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  RandomLimitCountManager_c *ManualSetIconLimitCount; // x0
  struct UserServantEntity_o *userSvtEntity; // x20
  int32_t iconLimitCount; // w1
  bool v8; // w2
  UserServantEntity_o *v9; // x0

  if ( (byte_42ED343 & 1) == 0 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED343 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_42E6BE7 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6BE7 = 1;
  }
  ManualSetIconLimitCount = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
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
      v9 = this->fields.userSvtEntity;
      v8 = 0;
      return UserServantEntity__IsModifyIconLimitCount(v9, iconLimitCount, v8, 0LL);
    }
LABEL_19:
    sub_B5D69C(ManualSetIconLimitCount, method);
  }
  ManualSetIconLimitCount = (RandomLimitCountManager_c *)ServantStatusListViewItem__get_ManualSetIconLimitCount(
                                                           this,
                                                           method);
  if ( !userSvtEntity )
    goto LABEL_19;
  iconLimitCount = (int)ManualSetIconLimitCount;
  v8 = 1;
  v9 = userSvtEntity;
  return UserServantEntity__IsModifyIconLimitCount(v9, iconLimitCount, v8, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  RandomLimitCountManager_c *ManualSetPortraitLimitCount; // x0
  struct UserServantEntity_o *userSvtEntity; // x20
  int32_t portraitLimitCount; // w1
  bool v8; // w2
  UserServantEntity_o *v9; // x0

  if ( (byte_42ED345 & 1) == 0 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED345 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_42E6BE7 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6BE7 = 1;
  }
  ManualSetPortraitLimitCount = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
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
      v9 = this->fields.userSvtEntity;
      v8 = 0;
      return UserServantEntity__IsModifyPortraitLimitCount(v9, portraitLimitCount, v8, 0LL);
    }
LABEL_19:
    sub_B5D69C(ManualSetPortraitLimitCount, method);
  }
  ManualSetPortraitLimitCount = (RandomLimitCountManager_c *)ServantStatusListViewItem__get_ManualSetPortraitLimitCount(
                                                               this,
                                                               method);
  if ( !userSvtEntity )
    goto LABEL_19;
  portraitLimitCount = (int)ManualSetPortraitLimitCount;
  v8 = 1;
  v9 = userSvtEntity;
  return UserServantEntity__IsModifyPortraitLimitCount(v9, portraitLimitCount, v8, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_42ED347 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED347 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return 0;
  v7 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v9, 0LL) != this->fields.supportRandomLimitCount;
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
  int v2; // w2
  __int64 v3; // x3
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v6; // x19
  __int64 v7; // x20
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTargetInfo; // x8
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_42ED33D & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED33D = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    v7 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v12.fields.currentCryptoKey = v7;
    *(_QWORD *)&v12.fields.fakeValue = v6;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v12, 0LL);
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
    sub_B5D69C(this, method);
  return svtLimitEntity->fields.luck;
}


int32_t __fastcall ServantStatusListViewItem__get_Magic(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_B5D69C(this, method);
  return svtLimitEntity->fields.magic;
}


int32_t __fastcall ServantStatusListViewItem__get_ManualSetCardLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  RandomLimitCountManager_c *v5; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_cardLimitCount; // x8

  if ( (byte_42ED33E & 1) == 0 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED33E = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_42E6BE7 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6BE7 = 1;
  }
  v5 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v5 = RandomLimitCountManager_TypeInfo;
  }
  if ( v5->static_fields->enableRandomLimitCount && this->fields.isEnableOwnRandomSetting )
  {
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_B5D69C(v5, method);
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
  int v2; // w2
  __int64 v3; // x3
  RandomLimitCountManager_c *v5; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_commandCardLimitCount; // x8

  if ( (byte_42ED342 & 1) == 0 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED342 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_42E6BE7 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6BE7 = 1;
  }
  v5 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v5 = RandomLimitCountManager_TypeInfo;
  }
  if ( v5->static_fields->enableRandomLimitCount && this->fields.isEnableOwnRandomSetting )
  {
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_B5D69C(v5, method);
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
  int v2; // w2
  __int64 v3; // x3
  RandomLimitCountManager_c *v5; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_dispLimitCount; // x8

  if ( (byte_42ED340 & 1) == 0 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED340 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_42E6BE7 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6BE7 = 1;
  }
  v5 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v5 = RandomLimitCountManager_TypeInfo;
  }
  if ( v5->static_fields->enableRandomLimitCount && this->fields.isEnableOwnRandomSetting )
  {
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_B5D69C(v5, method);
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
  int v2; // w2
  __int64 v3; // x3
  RandomLimitCountManager_c *v5; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_iconLimitCount; // x8

  if ( (byte_42ED344 & 1) == 0 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED344 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_42E6BE7 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6BE7 = 1;
  }
  v5 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v5 = RandomLimitCountManager_TypeInfo;
  }
  if ( v5->static_fields->enableRandomLimitCount && this->fields.isEnableOwnRandomSetting )
  {
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_B5D69C(v5, method);
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
  int v2; // w2
  __int64 v3; // x3
  RandomLimitCountManager_c *v5; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_portraitLimitCount; // x8

  if ( (byte_42ED346 & 1) == 0 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED346 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_42E6BE7 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6BE7 = 1;
  }
  v5 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v5 = RandomLimitCountManager_TypeInfo;
  }
  if ( v5->static_fields->enableRandomLimitCount && this->fields.isEnableOwnRandomSetting )
  {
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_B5D69C(v5, method);
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
    sub_B5D69C(this, method);
  return svtLimitEntity->fields.treasureDevice;
}


int32_t __fastcall ServantStatusListViewItem__get_OwnRandomSettingSelectedButton(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.ownRandomSettingButtonIndex;
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
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  struct ServantEntity_o *svtEntity; // x8
  __int64 v6; // x19
  __int64 v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_42ED33B & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED33B = 1;
  }
  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    return 0;
  v7 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v9, 0LL);
}


int32_t __fastcall ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t svtCommonFlag; // w8

  svtCommonFlag = this->fields.svtCommonFlag;
  if ( (svtCommonFlag & 2) == 0 )
    return 0;
  if ( (~(svtCommonFlag << 29 >> 31) & 3) != 0 )
    return 1;
  return 2;
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
  int v2; // w2
  __int64 v3; // x3
  ServantStatusListViewItem_o *v4; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v6; // q1
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  _QWORD *p_klass; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-30h]

  v4 = this;
  if ( (byte_42ED350 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_B5D5C4(
                                            &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                            (_DWORD)method,
                                            v2,
                                            v3);
    byte_42ED350 = 1;
  }
  userSvtEntity = v4->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    v6 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
    *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v11.fields.fakeValue = v6;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v10 = v11;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v10, 0LL);
  }
  else
  {
    servantLeaderInfo = v4->fields.servantLeaderInfo;
    if ( servantLeaderInfo )
      return servantLeaderInfo->fields.userId;
    p_klass = &v4->fields.equipTargetInfo->klass;
    if ( !p_klass )
    {
      if ( !v4->fields.isCollection )
        return 0LL;
      p_klass = &v4->fields.userSvtCollectionEntity->klass;
      if ( !p_klass )
        sub_B5D69C(this, method);
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
  __int64 v3; // x3
  RandomLimitCountManager_c *v6; // x0

  if ( (byte_42ED349 & 1) == 0 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, value, (_DWORD)method, v3);
    byte_42ED349 = 1;
  }
  this->fields.isEnableOwnRandomSetting = value;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_42E6BE7 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, value, (_DWORD)method, v3);
    byte_42E6BE7 = 1;
  }
  v6 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v6 = RandomLimitCountManager_TypeInfo;
  }
  if ( v6->static_fields->enableRandomLimitCount && !this->fields.isConvertOverwriteImage && this->fields.userSvtEntity )
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