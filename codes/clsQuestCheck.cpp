void __fastcall clsQuestCheck___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7

  if ( (byte_4BD8FFE & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_11139/*"QuestStartEffect"*/);
    sub_1C21E38(&clsQuestCheck_TypeInfo);
    byte_4BD8FFE = 1;
  }
  clsQuestCheck_TypeInfo->static_fields->KEY_QUEST_START_EFFECT = (struct System_String_o *)StringLiteral_11139/*"QuestStartEffect"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)clsQuestCheck_TypeInfo->static_fields,
    StringLiteral_11139/*"QuestStartEffect"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void __fastcall clsQuestCheck___ctor(clsQuestCheck_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BD8FFD & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_clsQuestCheck___ctor__);
    byte_4BD8FFD = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.cQuestReleaseListP = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v10;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.cQuestReleaseListP,
    (int64_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_388D570 *)Method_SingletonTemplate_clsQuestCheck___ctor__);
}


bool __fastcall clsQuestCheck__CheckQuestPlayable(
        clsQuestCheck_o *this,
        MapControl_QuestInfo_o *questInfo,
        int64_t srcEndTime,
        int32_t boostId,
        const MethodInfo *method)
{
  __int64 v9; // x24
  void *SpotID; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  MapControl_QuestInfo_o **v18; // x19
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int32_t v25; // w28
  MapControl_QuestInfo_o *v26; // x8
  int32_t questId; // w20
  int32_t questPhase; // w29
  int32_t v29; // w21
  _BOOL4 isNotItemConsume; // w23
  int32_t v31; // w25
  int v32; // w22
  bool IsQuestReleaseAll; // w0
  Il2CppObject *MasterData_object; // x26
  UserQuestEntity_o *Entity; // x0
  __int64 v36; // x22
  int64_t Time; // x0
  System_String_o *v38; // x19
  System_String_o *v39; // x20
  CommonUI_o *v40; // x21
  clsQuestCheck___c_c *v41; // x8
  System_Action_o *_9__41_3; // x22
  Il2CppObject *v43; // x23
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x1
  struct clsQuestCheck___c_StaticFields *static_fields; // x0
  PartyOrganizationUtility_o *p__9__41_3; // x0
  UserGameEntity_o *v53; // x26
  QuestEntity_o *v54; // x27
  clsQuestCheck___c_c *v55; // x8
  Il2CppObject *v56; // x23
  struct clsQuestCheck___c_StaticFields *v57; // x0
  TerminalPramsManager_c *v58; // x0
  int64_t v59; // x22
  struct TerminalPramsManager_StaticFields *v60; // x8
  UserServantMaster_o *v61; // x28
  Il2CppObject *v62; // x29
  CommonUI_o *v63; // x19
  int32_t v64; // w20
  int32_t svtKeep; // w21
  ServantFrameShortDlgComponent_CallbackFunc_o *v66; // x22
  Il2CppObject *v67; // x23
  struct clsQuestCheck___c_StaticFields *v68; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  CommonUI_o *v75; // x0
  int32_t v76; // w1
  int32_t v77; // w2
  int32_t v78; // w3
  CommonUI_o *v79; // x19
  int32_t v80; // w20
  int32_t svtEquipKeep; // w21
  Il2CppObject *v82; // x23
  struct clsQuestCheck___c_StaticFields *v83; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  int32_t Count; // w19
  CommonUI_o *v91; // x20
  BalanceConfig_c *v92; // x8
  Il2CppObject *v93; // x23
  struct clsQuestCheck___c_StaticFields *v94; // x0
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  bool v101; // w25
  int32_t v103; // w28
  Il2CppObject *Instance; // x19
  RecoverDlgComponent_CallbackFunc_o *v105; // x20
  CommonUI_o *v106; // x0
  int32_t v107; // w1
  RecoverDlgComponent_CallbackFunc_o *v108; // x2
  bool v109; // w3
  Il2CppObject *v110; // x19
  RecoverDlgComponent_CallbackFunc_o *v111; // x20
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x24
  Il2CppObject *v113; // x25
  Il2CppObject *v114; // x27
  System_String_o *v115; // x23
  int32_t v116; // w29
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v118; // x8
  _DWORD *v119; // x23
  System_String_o **v120; // x28
  int32_t qp; // w8
  struct System_Int32_array *nums; // x9
  System_String_o *v123; // x0
  System_String_o *v124; // x0
  System_String_o *v125; // x19
  System_String_o *v126; // x0
  System_String_o *v127; // x19
  CommonUI_o *v128; // x20
  clsQuestCheck___c_c *v129; // x8
  System_String_o *v130; // x21
  System_Action_o *_9__41_11; // x22
  Il2CppObject *v132; // x23
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  struct clsQuestCheck___c_StaticFields *v139; // x0
  PartyOrganizationUtility_o *p__9__41_11; // x0
  Il2CppObject *v141; // x19
  RecoverDlgComponent_CallbackFunc_o *v142; // x20
  QuestConsumeItemEntity_o *v143; // x24
  Il2CppObject *v144; // x27
  System_String_o *v145; // x23
  NetworkManager_c **v146; // x28
  int32_t v147; // w29
  struct System_Int32_array *v148; // x8
  struct System_Int32_array *v149; // x8
  _DWORD *v150; // x26
  NetworkManager_c **v151; // x25
  System_String_o **v152; // x28
  int32_t v153; // w8
  struct System_Int32_array *v154; // x9
  Il2CppObject *v155; // x0
  TerminalPramsManager_c *v156; // x0
  int v157; // w8
  TerminalPramsManager_c *v158; // x0
  int32_t VaildPayType; // w22
  TerminalPramsManager_c *v160; // x0
  MapControl_QuestInfo_o *v161; // x8
  QuestMessageMaster_o *v162; // x19
  int32_t v163; // w2
  System_String_o *ValidMessage; // x0
  System_String_o *v165; // x19
  Il2CppObject *v166; // x20
  System_String_o *v167; // x21
  System_String_o *v168; // x22
  clsQuestCheck___c_c *v169; // x8
  CommonConfirmDialog_ClickDelegate_o *_9__41_2; // x24
  System_String_o *v171; // x23
  Il2CppObject *v172; // x25
  struct clsQuestCheck___c_StaticFields *v173; // x0
  int64_t v174; // x2
  int32_t v175; // w3
  System_String_o *v176; // x4
  BattleSetupInfo_o *v177; // x5
  FollowerInfo_o *v178; // x6
  PartyListViewItem_o *v179; // x7
  System_String_o *v180; // x0
  System_String_o *v181; // x0
  System_String_o *v182; // x19
  System_String_o *v183; // x0
  clsQuestCheck___c_c *v184; // x8
  Il2CppObject *v185; // x23
  struct clsQuestCheck___c_StaticFields *v186; // x0
  char v187; // [xsp+3Ch] [xbp-94h]
  char v188; // [xsp+40h] [xbp-90h]
  UserGameEntity_o *v189; // [xsp+40h] [xbp-90h]
  UserGameEntity_o *SelfUserGame; // [xsp+48h] [xbp-88h]
  System_String_o *v191; // [xsp+48h] [xbp-88h]
  System_String_o *str0; // [xsp+50h] [xbp-80h]
  Il2CppObject *str0a; // [xsp+50h] [xbp-80h]
  int32_t v194; // [xsp+5Ch] [xbp-74h]
  int32_t key; // [xsp+60h] [xbp-70h]
  int32_t servantEquipSum[2]; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4BD8FFB & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&RecoverDlgComponent_CallbackFunc_TypeInfo);
    sub_1C21E38(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_1C21E38(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMessageMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_0__);
    sub_1C21E38(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_11__);
    sub_1C21E38(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_13__);
    sub_1C21E38(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_1__);
    sub_1C21E38(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_2__);
    sub_1C21E38(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_3__);
    sub_1C21E38(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_4__);
    sub_1C21E38(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_7__);
    sub_1C21E38(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__10__);
    sub_1C21E38(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__12__);
    sub_1C21E38(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__9__);
    sub_1C21E38(&clsQuestCheck___c__DisplayClass41_0_TypeInfo);
    sub_1C21E38(&clsQuestCheck___c_TypeInfo);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    sub_1C21E38(&StringLiteral_11096/*"QUEST_MESSAGE_DLG_DECIDE"*/);
    sub_1C21E38(&StringLiteral_11095/*"QUEST_MESSAGE_DLG_CANCEL"*/);
    sub_1C21E38(&StringLiteral_11094/*"QUEST_ITEM_COST_OVER"*/);
    sub_1C21E38(&StringLiteral_11123/*"QUEST_TIME_OVER"*/);
    sub_1C21E38(&StringLiteral_12342/*"SHORT_DLG_TITLE"*/);
    sub_1C21E38(&StringLiteral_44/*"\n\n"*/);
    sub_1C21E38(&StringLiteral_3017/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_11036/*"QUEST_AP_MAX_OVER"*/);
    byte_4BD8FFB = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  v9 = sub_1C22084(clsQuestCheck___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_259;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = questInfo;
  v18 = (MapControl_QuestInfo_o **)(v9 + 24);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)questInfo, v19, v20, v21, v22, v23, v24);
  SpotID = *(void **)(v9 + 24);
  *(_QWORD *)(v9 + 32) = srcEndTime;
  *(_DWORD *)(v9 + 40) = boostId;
  if ( !SpotID )
    goto LABEL_259;
  v25 = *((_DWORD *)SpotID + 16);
  SpotID = (void *)MapControl_QuestInfo__GetSpotID((MapControl_QuestInfo_o *)SpotID, 0LL);
  v26 = *v18;
  if ( !*v18 )
    goto LABEL_259;
  questId = v26->fields.questId;
  questPhase = v26->fields.questPhase;
  v29 = (int)SpotID;
  SpotID = (void *)MapControl_QuestInfo__GetActConsumeCost(*v18, 0LL);
  if ( !*v18 )
    goto LABEL_259;
  isNotItemConsume = (*v18)->fields.isNotItemConsume;
  v31 = (int)SpotID;
  SpotID = MapControl_QuestInfo__GetMine(*v18, 0LL);
  if ( !SpotID )
    goto LABEL_259;
  v32 = *((_DWORD *)SpotID + 20);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IsQuestReleaseAll = TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
  if ( v32 != 1 && !IsQuestReleaseAll )
  {
    SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SpotID )
      goto LABEL_259;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)SpotID,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
    }
    SpotID = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      SpotID = NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_259;
    Entity = UserQuestMaster__GetEntity(
               (UserQuestMaster_o *)MasterData_object,
               *(_QWORD *)(*((_QWORD *)SpotID + 23) + 64LL),
               questId,
               0LL);
    if ( !Entity || !UserQuestEntity__IsNotExpired(Entity, 0LL) )
    {
      v36 = *(_QWORD *)(v9 + 32);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      if ( v36 >= 1 && v36 - Time <= 0 )
      {
        v38 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v39 = LocalizationManager__Get((System_String_o *)StringLiteral_11123/*"QUEST_TIME_OVER"*/, 0LL);
        SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v40 = (CommonUI_o *)SpotID;
        v41 = clsQuestCheck___c_TypeInfo;
        if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
          v41 = clsQuestCheck___c_TypeInfo;
        }
        _9__41_3 = v41->static_fields->__9__41_3;
        if ( _9__41_3 )
          goto LABEL_48;
        if ( !v41->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v41);
          v41 = clsQuestCheck___c_TypeInfo;
        }
        v43 = (Il2CppObject *)v41->static_fields->__9;
        _9__41_3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(_9__41_3, v43, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_3__, 0LL);
        v50 = (int64_t)_9__41_3;
        static_fields = clsQuestCheck___c_TypeInfo->static_fields;
        static_fields->__9__41_3 = _9__41_3;
        p__9__41_3 = (PartyOrganizationUtility_o *)&static_fields->__9__41_3;
LABEL_47:
        sub_1C21DDC(p__9__41_3, v50, v44, v45, v46, v47, v48, v49);
LABEL_48:
        if ( !v40 )
          goto LABEL_259;
        CommonUI__OpenNotificationDialog(v40, v38, v39, _9__41_3, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
        goto LABEL_101;
      }
    }
  }
  SpotID = UserGameMaster__getSelfUserGame(0LL);
  if ( !*v18 )
    goto LABEL_259;
  v53 = (UserGameEntity_o *)SpotID;
  SpotID = MapControl_QuestInfo__GetMine(*v18, 0LL);
  if ( !SpotID )
    goto LABEL_259;
  v54 = (QuestEntity_o *)SpotID;
  SpotID = (void *)QuestEntity__GetConsumeType((QuestEntity_o *)SpotID, 0LL);
  if ( (_DWORD)SpotID == 1 )
  {
    if ( !v53 )
      goto LABEL_259;
    if ( v31 > v53->fields.actMax )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v38 = LocalizationManager__Get((System_String_o *)StringLiteral_12342/*"SHORT_DLG_TITLE"*/, 0LL);
      v39 = LocalizationManager__Get((System_String_o *)StringLiteral_11036/*"QUEST_AP_MAX_OVER"*/, 0LL);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v40 = (CommonUI_o *)SpotID;
      v55 = clsQuestCheck___c_TypeInfo;
      if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
        v55 = clsQuestCheck___c_TypeInfo;
      }
      _9__41_3 = v55->static_fields->__9__41_4;
      if ( _9__41_3 )
        goto LABEL_48;
      if ( !v55->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v55);
        v55 = clsQuestCheck___c_TypeInfo;
      }
      v56 = (Il2CppObject *)v55->static_fields->__9;
      _9__41_3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(_9__41_3, v56, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_4__, 0LL);
      v50 = (int64_t)_9__41_3;
      v57 = clsQuestCheck___c_TypeInfo->static_fields;
      v57->__9__41_4 = _9__41_3;
      p__9__41_3 = (PartyOrganizationUtility_o *)&v57->__9__41_4;
      goto LABEL_47;
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD909A )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD909A = 1;
  }
  v58 = TerminalPramsManager_TypeInfo;
  key = v25;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v58 = TerminalPramsManager_TypeInfo;
  }
  v58->static_fields->_QuestId_k__BackingField = questId;
  v59 = *(_QWORD *)(v9 + 32);
  if ( !byte_4BD909B )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v58 = TerminalPramsManager_TypeInfo;
    byte_4BD909B = 1;
  }
  if ( !v58->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v58);
    v58 = TerminalPramsManager_TypeInfo;
  }
  v60 = v58->static_fields;
  v60->_EndTime_k__BackingField = v59;
  v60->lastPlayQuestConsumeAp = v31;
  TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(0LL);
  SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_259;
  SpotID = DataManager__GetMasterData_object_(
             (DataManager_o *)SpotID,
             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SpotID )
    goto LABEL_259;
  v61 = (UserServantMaster_o *)SpotID;
  v194 = questPhase;
  UserServantMaster__getCount((UserServantMaster_o *)SpotID, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_259;
  v62 = DataManager__GetMasterData_object_(
          (DataManager_o *)SpotID,
          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v61, 1, 0LL) )
  {
    SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v53 )
      goto LABEL_259;
    v63 = (CommonUI_o *)SpotID;
    v64 = servantEquipSum[1];
    svtKeep = v53->fields.svtKeep;
    SpotID = clsQuestCheck___c_TypeInfo;
    if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
      SpotID = clsQuestCheck___c_TypeInfo;
    }
    v66 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)SpotID + 23) + 40LL);
    if ( !v66 )
    {
      if ( !*((_DWORD *)SpotID + 56) )
      {
        j_il2cpp_runtime_class_init_0(SpotID);
        SpotID = clsQuestCheck___c_TypeInfo;
      }
      v67 = (Il2CppObject *)**((_QWORD **)SpotID + 23);
      v66 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C22084(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v66,
        v67,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__41_0__,
        0LL);
      v68 = clsQuestCheck___c_TypeInfo->static_fields;
      v68->__9__41_0 = v66;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v68->__9__41_0, (int64_t)v66, v69, v70, v71, v72, v73, v74);
    }
    if ( !v63 )
      goto LABEL_259;
    v75 = v63;
    v76 = v64;
    v77 = svtKeep;
    v78 = 0;
    goto LABEL_100;
  }
  SpotID = (void *)UserServantMaster__CheckEquipAdd(v61, 1, 1, 0LL);
  if ( ((unsigned __int8)SpotID & 1) != 0 )
  {
    SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v53 )
      goto LABEL_259;
    v79 = (CommonUI_o *)SpotID;
    v80 = servantEquipSum[0];
    svtEquipKeep = v53->fields.svtEquipKeep;
    SpotID = clsQuestCheck___c_TypeInfo;
    if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
      SpotID = clsQuestCheck___c_TypeInfo;
    }
    v66 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)SpotID + 23) + 48LL);
    if ( !v66 )
    {
      if ( !*((_DWORD *)SpotID + 56) )
      {
        j_il2cpp_runtime_class_init_0(SpotID);
        SpotID = clsQuestCheck___c_TypeInfo;
      }
      v82 = (Il2CppObject *)**((_QWORD **)SpotID + 23);
      v66 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C22084(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v66,
        v82,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__41_1__,
        0LL);
      v83 = clsQuestCheck___c_TypeInfo->static_fields;
      v83->__9__41_1 = v66;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v83->__9__41_1, (int64_t)v66, v84, v85, v86, v87, v88, v89);
    }
    if ( !v79 )
      goto LABEL_259;
    v78 = 1;
    v75 = v79;
    v76 = v80;
LABEL_99:
    v77 = svtEquipKeep;
LABEL_100:
    CommonUI__OpenSvtFrameShortDlg(v75, v76, v77, v78, 1, v66, 0, 0LL);
LABEL_101:
    SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( SpotID )
    {
      ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)SpotID, 0LL);
      return 0;
    }
    goto LABEL_259;
  }
  if ( !v62 )
    goto LABEL_259;
  if ( UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)v62, 0, 0LL) )
  {
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)v62, 0LL);
    SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v53 )
      goto LABEL_259;
    v91 = (CommonUI_o *)SpotID;
    if ( !byte_4BD7514 )
    {
      sub_1C21E38(&BalanceConfig_TypeInfo);
      byte_4BD7514 = 1;
    }
    v92 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v92 = BalanceConfig_TypeInfo;
    }
    SpotID = clsQuestCheck___c_TypeInfo;
    svtEquipKeep = v92->static_fields->CommandCodeFrameMax;
    if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
      SpotID = clsQuestCheck___c_TypeInfo;
    }
    v66 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)SpotID + 23) + 56LL);
    if ( !v66 )
    {
      if ( !*((_DWORD *)SpotID + 56) )
      {
        j_il2cpp_runtime_class_init_0(SpotID);
        SpotID = clsQuestCheck___c_TypeInfo;
      }
      v93 = (Il2CppObject *)**((_QWORD **)SpotID + 23);
      v66 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C22084(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v66,
        v93,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__41_7__,
        0LL);
      v94 = clsQuestCheck___c_TypeInfo->static_fields;
      v94->__9__41_7 = v66;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v94->__9__41_7, (int64_t)v66, v95, v96, v97, v98, v99, v100);
    }
    if ( !v91 )
      goto LABEL_259;
    v78 = 2;
    v75 = v91;
    v76 = Count;
    goto LABEL_99;
  }
  SpotID = (void *)QuestEntity__GetConsumeType(v54, 0LL);
  v103 = v194;
  switch ( (int)SpotID )
  {
    case 1:
      if ( !v53 )
        goto LABEL_259;
      if ( v31 <= UserGameEntity__getAct(v53, 0LL) )
        goto LABEL_189;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v105 = (RecoverDlgComponent_CallbackFunc_o *)sub_1C22084(RecoverDlgComponent_CallbackFunc_TypeInfo);
      RecoverDlgComponent_CallbackFunc___ctor(
        v105,
        (Il2CppObject *)v9,
        Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__9__,
        0LL);
      if ( !Instance )
        goto LABEL_259;
      v106 = (CommonUI_o *)Instance;
      v107 = v31;
      v108 = v105;
      v109 = 0;
      goto LABEL_157;
    case 2:
      if ( !v53 )
        goto LABEL_259;
      if ( v31 <= UserGameEntity__getRp(v53, 0LL) )
        goto LABEL_189;
      v110 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v111 = (RecoverDlgComponent_CallbackFunc_o *)sub_1C22084(RecoverDlgComponent_CallbackFunc_TypeInfo);
      RecoverDlgComponent_CallbackFunc___ctor(
        v111,
        (Il2CppObject *)v9,
        Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__10__,
        0LL);
      if ( !v110 )
        goto LABEL_259;
      CommonUI__OpenRpRecoverItemListDialog((CommonUI_o *)v110, v31, v111, 0, 0LL);
      return 0;
    case 3:
      ItemConsumeEntity = QuestEntity__getItemConsumeEntity(v54, isNotItemConsume, 0LL);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_259;
      v113 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserItemMaster___);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_259;
      v114 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      if ( !ItemConsumeEntity )
        goto LABEL_189;
      v115 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL) )
        goto LABEL_189;
      str0 = v115;
      v188 = 0;
      v116 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4BD6FF5 )
        {
          sub_1C21E38(&NetworkManager_TypeInfo);
          byte_4BD6FF5 = 1;
        }
        SpotID = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          SpotID = NetworkManager_TypeInfo;
        }
        itemIds = ItemConsumeEntity->fields.itemIds;
        if ( !itemIds )
          goto LABEL_259;
        if ( v116 >= itemIds->max_length )
          goto LABEL_260;
        if ( !v113 )
          goto LABEL_259;
        SpotID = UserItemMaster__GetEntity(
                   (UserItemMaster_o *)v113,
                   *(_QWORD *)(*((_QWORD *)SpotID + 23) + 64LL),
                   itemIds->m_Items[v116 + 1],
                   0LL);
        v118 = ItemConsumeEntity->fields.itemIds;
        if ( !v118 )
          goto LABEL_259;
        if ( v116 >= v118->max_length )
          goto LABEL_260;
        if ( !v114 )
          goto LABEL_259;
        v119 = SpotID;
        SpotID = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)v114,
                   v118->m_Items[v116 + 1],
                   (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !SpotID )
          goto LABEL_259;
        v120 = (System_String_o **)SpotID;
        if ( *((_DWORD *)SpotID + 12) == 1 )
        {
          if ( !SelfUserGame )
            goto LABEL_259;
          qp = SelfUserGame->fields.qp;
        }
        else if ( v119
               && (SpotID = (void *)ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0LL), ((unsigned __int8)SpotID & 1) != 0) )
        {
          qp = v119[7];
        }
        else
        {
          qp = 0;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_259;
        if ( v116 >= nums->max_length )
          goto LABEL_260;
        if ( nums->m_Items[v116 + 1] > qp )
        {
          str0 = System_String__Concat_63126736(str0, (System_String_o *)StringLiteral_43/*"\n"*/, v120[3], 0LL);
          v188 = 1;
        }
        ++v116;
      }
      while ( QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, v116, 0LL) );
      v103 = v194;
      if ( (v188 & 1) == 0 )
        goto LABEL_189;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v123 = LocalizationManager__Get((System_String_o *)StringLiteral_11094/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v124 = System_String__Format(v123, (Il2CppObject *)str0, 0LL);
      v125 = System_String__Concat_63115476(v124, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
      v126 = LocalizationManager__Get((System_String_o *)StringLiteral_3017/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v127 = System_String__Concat_63115476(v125, v126, 0LL);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v128 = (CommonUI_o *)SpotID;
      v129 = clsQuestCheck___c_TypeInfo;
      if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
        v129 = clsQuestCheck___c_TypeInfo;
      }
      v130 = (System_String_o *)StringLiteral_1/*""*/;
      _9__41_11 = v129->static_fields->__9__41_11;
      if ( _9__41_11 )
        goto LABEL_257;
      if ( !v129->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v129);
        v129 = clsQuestCheck___c_TypeInfo;
      }
      v132 = (Il2CppObject *)v129->static_fields->__9;
      _9__41_11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(_9__41_11, v132, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_11__, 0LL);
      v139 = clsQuestCheck___c_TypeInfo->static_fields;
      v139->__9__41_11 = _9__41_11;
      p__9__41_11 = (PartyOrganizationUtility_o *)&v139->__9__41_11;
      goto LABEL_256;
    case 4:
      if ( !v53 )
        goto LABEL_259;
      if ( v31 > UserGameEntity__getAct(v53, 0LL) )
      {
        v141 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v142 = (RecoverDlgComponent_CallbackFunc_o *)sub_1C22084(RecoverDlgComponent_CallbackFunc_TypeInfo);
        RecoverDlgComponent_CallbackFunc___ctor(
          v142,
          (Il2CppObject *)v9,
          Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__12__,
          0LL);
        if ( v141 )
        {
          v109 = 1;
          v106 = (CommonUI_o *)v141;
          v107 = v31;
          v108 = v142;
LABEL_157:
          CommonUI__OpenApRecoverItemListDialog(v106, v107, v108, v109, 0LL);
          return 0;
        }
LABEL_259:
        sub_1C22094(SpotID, v11);
      }
      v143 = QuestEntity__getItemConsumeEntity(v54, isNotItemConsume, 0LL);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_259;
      v144 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserItemMaster___);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_259;
      str0a = DataManager__GetMasterData_object_(
                (DataManager_o *)SpotID,
                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
      v189 = UserGameMaster__getSelfUserGame(0LL);
      if ( v143 )
      {
        v145 = (System_String_o *)StringLiteral_1/*""*/;
        if ( QuestConsumeItemEntity__IsAvailableAt(v143, 0, 0LL) )
        {
          v191 = v145;
          v187 = 0;
          v146 = &NetworkManager_TypeInfo;
          v147 = 0;
          do
          {
            if ( !(*v146)->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(*v146);
            if ( !byte_4BD6FF5 )
            {
              sub_1C21E38(v146);
              byte_4BD6FF5 = 1;
            }
            SpotID = *v146;
            if ( !(*v146)->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SpotID);
              SpotID = *v146;
            }
            v148 = v143->fields.itemIds;
            if ( !v148 )
              goto LABEL_259;
            if ( v147 >= v148->max_length )
              goto LABEL_260;
            if ( !v144 )
              goto LABEL_259;
            SpotID = UserItemMaster__GetEntity(
                       (UserItemMaster_o *)v144,
                       *(_QWORD *)(*((_QWORD *)SpotID + 23) + 64LL),
                       v148->m_Items[v147 + 1],
                       0LL);
            v149 = v143->fields.itemIds;
            if ( !v149 )
              goto LABEL_259;
            if ( v147 >= v149->max_length )
              goto LABEL_260;
            v150 = SpotID;
            SpotID = str0a;
            if ( !str0a )
              goto LABEL_259;
            v151 = v146;
            SpotID = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)str0a,
                       v149->m_Items[v147 + 1],
                       (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( !SpotID )
              goto LABEL_259;
            v152 = (System_String_o **)SpotID;
            if ( *((_DWORD *)SpotID + 12) == 1 )
            {
              if ( !v189 )
                goto LABEL_259;
              v153 = v189->fields.qp;
            }
            else if ( v150
                   && (SpotID = (void *)ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0LL),
                       ((unsigned __int8)SpotID & 1) != 0) )
            {
              v153 = v150[7];
            }
            else
            {
              v153 = 0;
            }
            v154 = v143->fields.nums;
            if ( !v154 )
              goto LABEL_259;
            if ( v147 >= v154->max_length )
LABEL_260:
              sub_1C2209C(SpotID, v11);
            if ( v154->m_Items[v147 + 1] > v153 )
            {
              v191 = System_String__Concat_63126736(v191, (System_String_o *)StringLiteral_43/*"\n"*/, v152[3], 0LL);
              v187 = 1;
            }
            ++v147;
            v146 = v151;
          }
          while ( QuestConsumeItemEntity__IsAvailableAt(v143, v147, 0LL) );
          v103 = v194;
          if ( (v187 & 1) != 0 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v180 = LocalizationManager__Get((System_String_o *)StringLiteral_11094/*"QUEST_ITEM_COST_OVER"*/, 0LL);
            v181 = System_String__Format(v180, (Il2CppObject *)v191, 0LL);
            v182 = System_String__Concat_63115476(v181, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
            v183 = LocalizationManager__Get((System_String_o *)StringLiteral_3017/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
            v127 = System_String__Concat_63115476(v182, v183, 0LL);
            SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v128 = (CommonUI_o *)SpotID;
            v184 = clsQuestCheck___c_TypeInfo;
            if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
              v184 = clsQuestCheck___c_TypeInfo;
            }
            v130 = (System_String_o *)StringLiteral_1/*""*/;
            _9__41_11 = v184->static_fields->__9__41_13;
            if ( !_9__41_11 )
            {
              if ( !v184->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v184);
                v184 = clsQuestCheck___c_TypeInfo;
              }
              v185 = (Il2CppObject *)v184->static_fields->__9;
              _9__41_11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
              System_Action___ctor(_9__41_11, v185, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_13__, 0LL);
              v186 = clsQuestCheck___c_TypeInfo->static_fields;
              v186->__9__41_13 = _9__41_11;
              p__9__41_11 = (PartyOrganizationUtility_o *)&v186->__9__41_13;
LABEL_256:
              sub_1C21DDC(p__9__41_11, (int64_t)_9__41_11, v133, v134, v135, v136, v137, v138);
            }
LABEL_257:
            if ( !v128 )
              goto LABEL_259;
            CommonUI__OpenNotificationDialog(v128, v130, v127, _9__41_11, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
            goto LABEL_101;
          }
        }
      }
LABEL_189:
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_259;
      SpotID = DataManager__GetMasterData_object_(
                 (DataManager_o *)SpotID,
                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !SpotID )
        goto LABEL_259;
      v155 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)SpotID,
               key,
               (const MethodInfo_325BDC8 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( v155 && WarEntity__IsFolder((WarEntity_o *)v155, 0LL) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BD909C )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD909C = 1;
        }
        v156 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v156 = TerminalPramsManager_TypeInfo;
        }
        v157 = 3;
      }
      else
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BD909C )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD909C = 1;
        }
        v156 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v156 = TerminalPramsManager_TypeInfo;
        }
        v157 = 2;
      }
      v156->static_fields->_DispState_k__BackingField = v157;
      if ( !v156->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v156);
      if ( !byte_4BD909D )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD909D = 1;
      }
      v158 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v158 = TerminalPramsManager_TypeInfo;
      }
      v158->static_fields->_IsDoneShortcut_k__BackingField = 0;
      if ( !byte_4BD909E )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        v158 = TerminalPramsManager_TypeInfo;
        byte_4BD909E = 1;
      }
      if ( !v158->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v158);
        v158 = TerminalPramsManager_TypeInfo;
      }
      v158->static_fields->_PhaseCnt_k__BackingField = v103;
      if ( !byte_4BD909F )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        v158 = TerminalPramsManager_TypeInfo;
        byte_4BD909F = 1;
      }
      if ( !v158->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v158);
        v158 = TerminalPramsManager_TypeInfo;
      }
      v158->static_fields->_SpotId_k__BackingField = v29;
      if ( !byte_4BD90A0 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        v158 = TerminalPramsManager_TypeInfo;
        byte_4BD90A0 = 1;
      }
      if ( !v158->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v158);
        v158 = TerminalPramsManager_TypeInfo;
      }
      v158->static_fields->_WarId_k__BackingField = key;
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_259;
      SpotID = DataManager__GetMasterData_object_(
                 (DataManager_o *)SpotID,
                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GachaMaster___);
      if ( !SpotID )
        goto LABEL_259;
      VaildPayType = GachaMaster__getVaildPayType((GachaMaster_o *)SpotID, 0LL);
      if ( !byte_4BD8C41 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD8C41 = 1;
      }
      v160 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v160 = TerminalPramsManager_TypeInfo;
      }
      v160->static_fields->_SummonType_k__BackingField = VaildPayType;
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_259;
      SpotID = DataManager__GetMasterData_object_(
                 (DataManager_o *)SpotID,
                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMessageMaster___);
      v161 = *v18;
      if ( !*v18 )
        goto LABEL_259;
      v162 = (QuestMessageMaster_o *)SpotID;
      SpotID = (void *)MapControl_QuestInfo__GetPhaseMax(v161, 0LL);
      if ( !v162 )
        goto LABEL_259;
      if ( v103 + 1 >= (int)SpotID )
        v163 = (int)SpotID;
      else
        v163 = v103 + 1;
      v101 = 1;
      ValidMessage = QuestMessageMaster__GetValidMessage(v162, questId, v163, 1, 0LL);
      if ( ValidMessage )
      {
        v165 = ValidMessage;
        v166 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v167 = LocalizationManager__Get((System_String_o *)StringLiteral_11096/*"QUEST_MESSAGE_DLG_DECIDE"*/, 0LL);
        SpotID = LocalizationManager__Get((System_String_o *)StringLiteral_11095/*"QUEST_MESSAGE_DLG_CANCEL"*/, 0LL);
        v168 = (System_String_o *)SpotID;
        v169 = clsQuestCheck___c_TypeInfo;
        if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
          v169 = clsQuestCheck___c_TypeInfo;
        }
        _9__41_2 = v169->static_fields->__9__41_2;
        v171 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !_9__41_2 )
        {
          if ( !v169->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v169);
            v169 = clsQuestCheck___c_TypeInfo;
          }
          v172 = (Il2CppObject *)v169->static_fields->__9;
          _9__41_2 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C22084(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            _9__41_2,
            v172,
            Method_clsQuestCheck___c__CheckQuestPlayable_b__41_2__,
            0LL);
          v173 = clsQuestCheck___c_TypeInfo->static_fields;
          v173->__9__41_2 = _9__41_2;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v173->__9__41_2,
            (int64_t)_9__41_2,
            v174,
            v175,
            v176,
            v177,
            v178,
            v179);
        }
        if ( v166 )
        {
          v101 = 1;
          CommonUI__OpenConfirmDialog_31128088((CommonUI_o *)v166, v171, v165, v167, v168, _9__41_2, 0, 1, 0, 0LL);
          return v101;
        }
        goto LABEL_259;
      }
      return v101;
    default:
      goto LABEL_189;
  }
}


bool __fastcall clsQuestCheck__CheckQuestPlayableNow(clsQuestCheck_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Master_object; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x0
  bool v8; // w0
  const MethodInfo *v9; // x2
  bool IsOpenByTime; // w8
  Il2CppObject *v12; // [xsp+8h] [xbp-48h] BYREF
  UserQuestEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4BD8FDE & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD8FDE = 1;
  }
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, method) )
    return 0;
  entity = 0LL;
  v12 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_26;
  if ( UserQuestMaster__TryGetEntity(
         (UserQuestMaster_o *)Master_object,
         &entity,
         (int64_t)v7[2].fields.list[1].monitor,
         questId,
         0LL) )
  {
    v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_26;
    if ( UserQuestEntity__IsNotExpired(entity, 0LL) )
      return 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !v7 )
LABEL_26:
    sub_1C22094(v7, v5);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v7,
          &v12,
          questId,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)v12;
  if ( !v12 )
    goto LABEL_26;
  IsOpenByTime = QuestEntity__IsOpenByTime((QuestEntity_o *)v12, 0, 0LL);
  v8 = 0;
  if ( IsOpenByTime )
    return clsQuestCheck__IsReleasedQuest(this, questId, v9);
  return v8;
}


void __fastcall clsQuestCheck__DeleteContinueData(const MethodInfo *method)
{
  clsQuestCheck_c *v1; // x0
  System_String_o *KEY_QUEST_START_EFFECT; // x19

  if ( (byte_4BD8FDB & 1) == 0 )
  {
    sub_1C21E38(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C21E38(&clsQuestCheck_TypeInfo);
    byte_4BD8FDB = 1;
  }
  v1 = clsQuestCheck_TypeInfo;
  if ( !clsQuestCheck_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
    v1 = clsQuestCheck_TypeInfo;
  }
  KEY_QUEST_START_EFFECT = v1->static_fields->KEY_QUEST_START_EFFECT;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__DeleteKey(KEY_QUEST_START_EFFECT, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


int32_t __fastcall clsQuestCheck__GetBeforeClearQuestId(
        clsQuestCheck_o *this,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  bool v6; // w8
  int32_t result; // w0
  TerminalPramsManager_c *v8; // x0

  if ( (byte_4BD8FEE & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD8FEE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v6 = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0LL);
  result = -1;
  if ( !v6 || !is_quest_after_action )
    return result;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
LABEL_17:
    sub_1C22094(Instance, v5);
  if ( !QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0LL) )
    return -1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  return v8->static_fields->_QuestId_k__BackingField;
}


System_Int32_array *__fastcall clsQuestCheck__GetEventQuestIdListPlayable(
        clsQuestCheck_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x20
  System_Int32_array *Master_object; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  __int64 v9; // x8
  System_Int32_array *v10; // x21
  unsigned __int64 v11; // x23
  int32_t v12; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10

  if ( (byte_4BD8FF7 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BD8FF7 = 1;
  }
  if ( eventId <= 0 )
    return (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 0LL);
  v5 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Master_object )
    goto LABEL_21;
  Master_object = QuestGroupMaster__GetQuestIdListByEventId((QuestGroupMaster_o *)Master_object, eventId, 0LL);
  if ( !Master_object )
    goto LABEL_21;
  v9 = *(_QWORD *)&Master_object->max_length;
  v10 = Master_object;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    do
    {
      if ( v11 >= (unsigned int)v9 )
        sub_1C2209C(Master_object, v7);
      v12 = v10->m_Items[v11 + 1];
      Master_object = (System_Int32_array *)clsQuestCheck__CheckQuestPlayableNow(this, v12, v8);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v5 )
          goto LABEL_21;
        items = v5->fields._items;
        v14 = Method_System_Collections_Generic_List_int__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v5,
            v12,
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v5->fields._size = size + 1;
          items->m_Items[size + 1] = v12;
        }
      }
      LODWORD(v9) = v10->max_length;
    }
    while ( (__int64)++v11 < (int)v9 );
  }
  if ( !v5 )
LABEL_21:
    sub_1C22094(Master_object, v7);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall clsQuestCheck__GetNewPlayableEventQuestId(
        clsQuestCheck_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0
  System_String_o *ClearEventQuestIds_k__BackingField; // x0
  System_String_array *v9; // x21
  System_Converter_object__int__o *v10; // x22
  const MethodInfo *v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Int32_array *v26; // x19
  PartyOrganizationUtility_c *v27; // x20
  TerminalPramsManager_c *v28; // x0
  PartyOrganizationUtility_o *v29; // x0
  PartyOrganizationUtility_c *v31; // x19
  TerminalPramsManager_c *v32; // x0
  PartyOrganizationUtility_o *p_ClearEventQuestIds_k__BackingField; // x0

  if ( (byte_4BD8FF6 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_ConvertAll_string__int___);
    sub_1C21E38(&System_Converter_string__int__TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Except_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Int32_Parse__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8FF6 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9098 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9098 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( System_String__IsNullOrEmpty(v5->static_fields->_ClearEventQuestIds_k__BackingField, 0LL) )
    return (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9098 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9098 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  ClearEventQuestIds_k__BackingField = v7->static_fields->_ClearEventQuestIds_k__BackingField;
  if ( !ClearEventQuestIds_k__BackingField
    || (v9 = System_String__Split(ClearEventQuestIds_k__BackingField, 0x2Cu, 0, 0LL),
        v10 = (System_Converter_object__int__o *)sub_1C22084(System_Converter_string__int__TypeInfo),
        System_Converter_object__int____ctor(v10, 0LL, Method_System_Int32_Parse__, 0LL),
        (ClearEventQuestIds_k__BackingField = (System_String_o *)System_Array__ConvertAll_object__int_(
                                                                   (System_Object_array *)v9,
                                                                   (System_Converter_TInput__TOutput__o *)v10,
                                                                   (const MethodInfo_30A96A8 *)Method_System_Array_ConvertAll_string__int___)) == 0LL) )
  {
    sub_1C22094(ClearEventQuestIds_k__BackingField, v6);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)ClearEventQuestIds_k__BackingField;
  if ( !ClearEventQuestIds_k__BackingField[1].klass )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v31 = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
    if ( !byte_4BD9097 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9097 = 1;
    }
    v32 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v32 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (PartyOrganizationUtility_o *)&v32->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = v31;
    sub_1C21DDC(p_ClearEventQuestIds_k__BackingField, (int64_t)v31, (int64_t)v11, v12, v13, v14, v15, v16);
    TerminalPramsManager__ClearEventQuestIds_SaveData(0LL);
    return (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 0LL);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)clsQuestCheck__GetEventQuestIdListPlayable(
                                                               this,
                                                               eventId,
                                                               v11);
  v19 = System_Linq_Enumerable__Except_int_(
          v18,
          v17,
          (const MethodInfo_2FCF7F0 *)Method_System_Linq_Enumerable_Except_int___);
  v26 = System_Linq_Enumerable__ToArray_int_(
          v19,
          (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v27 = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
  if ( !byte_4BD9097 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9097 = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v28 = TerminalPramsManager_TypeInfo;
  }
  v29 = (PartyOrganizationUtility_o *)&v28->static_fields->_ClearEventQuestIds_k__BackingField;
  v29->klass = v27;
  sub_1C21DDC(v29, (int64_t)v27, v20, v21, v22, v23, v24, v25);
  TerminalPramsManager__ClearEventQuestIds_SaveData(0LL);
  return v26;
}


System_Collections_Generic_List_QuestEntity__o *__fastcall clsQuestCheck__GetQuestEntityByQuestId(
        clsQuestCheck_o *this,
        System_Collections_Generic_List_int__o *qids,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *Entity; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_int__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v24; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BD8FF4 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_QuestEntity__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8FF4 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v4 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___),
        !qids) )
  {
    sub_1C22094(Instance, v6);
  }
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    qids,
    (const MethodInfo_3632B64 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_int___MoveNext(
           &v24,
           (const MethodInfo_33DD1D0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v8 )
      break;
    if ( !v7 )
      sub_1C22094(v8, v9);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v7,
               v24.fields._current,
               (const MethodInfo_325BDC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    v17 = (int64_t)Entity;
    if ( !v4 )
      sub_1C22094(Entity, Entity);
    items = v4->fields._items;
    v19 = Method_System_Collections_Generic_List_QuestEntity__Add__;
    ++v4->fields._version;
    if ( !items )
      sub_1C22094(Entity, Entity);
    size = v4->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v4,
        Entity,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &items->obj.klass + size;
      v4->fields._size = size + 1;
      v21[4] = (Il2CppClass *)v17;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v21 + 4), v17, v11, v12, v13, v14, v15, v16);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v24,
    (const MethodInfo_33DD1CC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return (System_Collections_Generic_List_QuestEntity__o *)v4;
}


System_Collections_Generic_List_QuestEntity__o *__fastcall clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldFriendShipRank,
        int32_t type_flag,
        const MethodInfo *method)
{
  clsQuestCheck_o *v5; // x1
  const MethodInfo *v6; // x2

  v5 = (clsQuestCheck_o *)clsQuestCheck__GetReleaseQuestIdByServantFriendShip(
                            this,
                            svt_id,
                            oldFriendShipRank,
                            type_flag,
                            method);
  return clsQuestCheck__GetQuestEntityByQuestId(v5, (System_Collections_Generic_List_int__o *)v5, v6);
}


System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantFriendShip(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldFriendShipRank,
        int32_t type_flag,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v9; // x19
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  QuestReleaseEntity_array *ListByType; // x24
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x25
  unsigned int v15; // w28
  QuestReleaseEntity_o *v16; // x8
  int32_t questId; // w26
  const MethodInfo *v18; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v22; // x23
  const MethodInfo *v23; // x4
  int32_t v24; // w20
  int v25; // w21
  System_Collections_Generic_List_Enumerator_int__o v27; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v28; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BD8FF3 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor___77576624);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8FF3 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v9 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_32;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 9, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_32;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_1C2209C(Instance, v11);
      v16 = ListByType->m_Items[v15];
      if ( !v16 )
        break;
      if ( v16->fields.targetId == svt_id )
      {
        if ( !v14 )
          break;
        questId = v16->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v14,
                                      questId,
                                      (const MethodInfo_325BDC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, questId, oldFriendShipRank, 9, v18);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v9 )
              break;
            items = v9->fields._items;
            v20 = Method_System_Collections_Generic_List_int__Add__;
            ++v9->fields._version;
            if ( !items )
              break;
            size = v9->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v9,
                questId,
                *(const MethodInfo_3632090 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v9->fields._size = size + 1;
              items->m_Items[size + 1] = questId;
            }
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_22;
    }
LABEL_32:
    sub_1C22094(Instance, v11);
  }
LABEL_22:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v22 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_56826212(
      v22,
      (System_Collections_Generic_IEnumerable_T__o *)v9,
      (const MethodInfo_3631964 *)Method_System_Collections_Generic_List_int___ctor___77576624);
    Instance = (DataManager_o *)clsQuestCheck__GetReleaseQuestIdByServantFriendShip(this, svt_id, -1, type_flag, v23);
    if ( !Instance )
      goto LABEL_32;
    v9 = (System_Collections_Generic_List_int__o *)Instance;
    v24 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v24 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_int___get_Item(
                                      v9,
                                      v24,
                                      (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v22 )
          goto LABEL_32;
        v25 = (int)Instance;
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v27,
          v22,
          (const MethodInfo_3632B64 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v28 = v27;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v28,
                  (const MethodInfo_33DD1D0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v25 == v28.fields._current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v9,
              v24,
              (const MethodInfo_3633810 *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v28,
          (const MethodInfo_33DD1CC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( --v24 < 0 )
          return v9;
      }
    }
  }
  return v9;
}


System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLimitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__GetReleaseQuestIdByServantLimit_34634328(this, svt_id, oldLimitCount, 494, v4);
}


System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit_34634328(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLimitCount,
        int32_t type_flag,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v9; // x19
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  QuestReleaseEntity_array *ListByType; // x24
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x25
  unsigned int v15; // w28
  QuestReleaseEntity_o *v16; // x8
  int32_t questId; // w26
  const MethodInfo *v18; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v22; // x23
  const MethodInfo *v23; // x4
  int32_t v24; // w20
  int v25; // w21
  System_Collections_Generic_List_Enumerator_int__o v27; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v28; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BD8FF0 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor___77576624);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8FF0 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v9 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_32;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_32;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_1C2209C(Instance, v11);
      v16 = ListByType->m_Items[v15];
      if ( !v16 )
        break;
      if ( v16->fields.targetId == svt_id )
      {
        if ( !v14 )
          break;
        questId = v16->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v14,
                                      questId,
                                      (const MethodInfo_325BDC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, questId, oldLimitCount, 7, v18);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v9 )
              break;
            items = v9->fields._items;
            v20 = Method_System_Collections_Generic_List_int__Add__;
            ++v9->fields._version;
            if ( !items )
              break;
            size = v9->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v9,
                questId,
                *(const MethodInfo_3632090 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v9->fields._size = size + 1;
              items->m_Items[size + 1] = questId;
            }
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_22;
    }
LABEL_32:
    sub_1C22094(Instance, v11);
  }
LABEL_22:
  if ( (oldLimitCount & 0x80000000) == 0 )
  {
    v22 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_56826212(
      v22,
      (System_Collections_Generic_IEnumerable_T__o *)v9,
      (const MethodInfo_3631964 *)Method_System_Collections_Generic_List_int___ctor___77576624);
    Instance = (DataManager_o *)clsQuestCheck__GetReleaseQuestIdByServantLimit_34634328(
                                  this,
                                  svt_id,
                                  -1,
                                  type_flag,
                                  v23);
    if ( !Instance )
      goto LABEL_32;
    v9 = (System_Collections_Generic_List_int__o *)Instance;
    v24 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v24 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_int___get_Item(
                                      v9,
                                      v24,
                                      (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v22 )
          goto LABEL_32;
        v25 = (int)Instance;
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v27,
          v22,
          (const MethodInfo_3632B64 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v28 = v27;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v28,
                  (const MethodInfo_33DD1D0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v25 == v28.fields._current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v9,
              v24,
              (const MethodInfo_3633810 *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v28,
          (const MethodInfo_33DD1CC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( --v24 < 0 )
          return v9;
      }
    }
  }
  return v9;
}


System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit_34635344(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLimitCount,
        int32_t newLimitCount,
        int32_t type_flag,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v10; // x19
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  QuestReleaseEntity_array *ListByType; // x25
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x26
  unsigned int v16; // w21
  QuestReleaseEntity_o *v17; // x8
  int32_t questId; // w27
  const MethodInfo *v19; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v23; // x24
  int v24; // w8
  __int64 v25; // x29
  QuestReleaseEntity_o *v26; // x8
  int32_t v27; // w27
  const MethodInfo *v28; // x4
  struct System_Int32_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  int32_t v32; // w20
  int v33; // w21
  System_Collections_Generic_List_Enumerator_int__o v36; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v37; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BD8FF1 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8FF1 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v10 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_46;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_46;
  max_length = ListByType->max_length;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( v16 < max_length )
    {
      v17 = ListByType->m_Items[v16];
      if ( !v17 )
        goto LABEL_46;
      if ( v17->fields.targetId == svt_id )
      {
        if ( !v15 )
          goto LABEL_46;
        questId = v17->fields.questId;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v15,
                     questId,
                     (const MethodInfo_325BDC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_46;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (Il2CppObject *)clsQuestCheck__IsQuestRelease(this, questId, oldLimitCount, 7, v19);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v10 )
              goto LABEL_46;
            items = v10->fields._items;
            v21 = Method_System_Collections_Generic_List_int__Add__;
            ++v10->fields._version;
            if ( !items )
              goto LABEL_46;
            size = v10->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v10,
                questId,
                *(const MethodInfo_3632090 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v10->fields._size = size + 1;
              items->m_Items[size + 1] = questId;
            }
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_22;
    }
LABEL_47:
    sub_1C2209C(Instance, v12);
  }
LABEL_22:
  v23 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  v24 = ListByType->max_length;
  if ( v24 >= 1 )
  {
    v25 = 0LL;
    while ( (unsigned int)v25 < v24 )
    {
      v26 = ListByType->m_Items[v25];
      if ( !v26 )
        goto LABEL_46;
      if ( v26->fields.targetId == svt_id )
      {
        if ( !v15 )
          goto LABEL_46;
        v27 = v26->fields.questId;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v15,
                     v27,
                     (const MethodInfo_325BDC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_46;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (Il2CppObject *)clsQuestCheck__IsQuestRelease(this, v27, newLimitCount, 7, v28);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v23 )
              goto LABEL_46;
            v29 = v23->fields._items;
            v30 = Method_System_Collections_Generic_List_int__Add__;
            ++v23->fields._version;
            if ( !v29 )
              goto LABEL_46;
            v31 = v23->fields._size;
            if ( (unsigned int)v31 >= v29->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v23,
                v27,
                *(const MethodInfo_3632090 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
            }
            else
            {
              v23->fields._size = v31 + 1;
              v29->m_Items[v31 + 1] = v27;
            }
          }
        }
      }
      v24 = ListByType->max_length;
      if ( (int)++v25 >= v24 )
        goto LABEL_37;
    }
    goto LABEL_47;
  }
LABEL_37:
  if ( !v23 )
LABEL_46:
    sub_1C22094(Instance, v12);
  v32 = v23->fields._size - 1;
  if ( v32 >= 0 )
  {
    while ( 1 )
    {
      Instance = (Il2CppObject *)System_Collections_Generic_List_int___get_Item(
                                   v23,
                                   v32,
                                   (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v10 )
        goto LABEL_46;
      v33 = (int)Instance;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v36,
        v10,
        (const MethodInfo_3632B64 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v37 = v36;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v37,
                (const MethodInfo_33DD1D0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        if ( v33 == v37.fields._current )
        {
          System_Collections_Generic_List_int___RemoveAt(
            v23,
            v32,
            (const MethodInfo_3633810 *)Method_System_Collections_Generic_List_int__RemoveAt__);
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v37,
        (const MethodInfo_33DD1CC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      if ( --v32 < 0 )
        return v23;
    }
  }
  return v23;
}


System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLv(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLv,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__GetReleaseQuestIdByServantLv_34633768(this, svt_id, oldLv, 494, v4);
}


System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLv_34633768(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLv,
        int32_t type_flag,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v9; // x23
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  QuestReleaseEntity_array *ListByType; // x24
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x25
  unsigned int v15; // w27
  QuestReleaseEntity_o *v16; // x8
  int32_t questId; // w26
  const MethodInfo *v18; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10

  if ( (byte_4BD8FEF & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8FEF = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_23;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 6, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_23;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_1C2209C(Instance, v11);
      v16 = ListByType->m_Items[v15];
      if ( !v16 )
        break;
      if ( v16->fields.targetId == svt_id )
      {
        if ( !v14 )
          break;
        questId = v16->fields.questId;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v14,
                     questId,
                     (const MethodInfo_325BDC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (Il2CppObject *)clsQuestCheck__IsQuestRelease(this, questId, oldLv, 6, v18);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v9 )
              break;
            items = v9->fields._items;
            v20 = Method_System_Collections_Generic_List_int__Add__;
            ++v9->fields._version;
            if ( !items )
              break;
            size = v9->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v9,
                questId,
                *(const MethodInfo_3632090 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v9->fields._size = size + 1;
              items->m_Items[size + 1] = questId;
            }
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v15 >= max_length )
        return v9;
    }
LABEL_23:
    sub_1C22094(Instance, v11);
  }
  return v9;
}


System_Collections_Generic_List_QuestEntity__o *__fastcall clsQuestCheck__GetReleasedQuestEntityListByServantGet(
        clsQuestCheck_o *this,
        int32_t servantId,
        int32_t typeFlag,
        const MethodInfo *method)
{
  QuestReleaseEntity_array *Instance; // x0
  Il2CppObject *v6; // x1
  DataManager_o *v7; // x23
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v9; // x19
  System_Collections_Generic_List_object__o *v10; // x22
  int max_length; // w8
  QuestReleaseEntity_array *v12; // x26
  unsigned int v13; // w19
  QuestReleaseEntity_o *v14; // x25
  __int64 v15; // x29
  int32_t questId; // w27
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  QuestReleaseEntity_array **v23; // x28
  System_Func_object__bool__o *v24; // x25
  const MethodInfo *v25; // x4
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  ServantGroupEntity_array *ListByServantID; // x19
  __int64 v37; // x8
  QuestReleaseEntity_array *v38; // x24
  unsigned __int64 v39; // x29
  int v40; // w8
  unsigned int v41; // w23
  __int64 v42; // x19
  QuestReleaseEntity_o *v43; // x25
  __int64 v44; // x27
  int32_t v45; // w25
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  QuestReleaseEntity_array **v52; // x26
  System_Func_object__bool__o *v53; // x28
  const MethodInfo *v54; // x4
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass **v64; // x0
  QuestReleaseMaster_o *v66; // [xsp+0h] [xbp-80h]
  DataManager_o *v67; // [xsp+8h] [xbp-78h]

  if ( (byte_4BD8FF2 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_QuestEntity___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantGroupMaster___);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C21E38(&System_Func_QuestEntity__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_QuestEntity__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_clsQuestCheck___c__DisplayClass31_0__GetReleasedQuestEntityListByServantGet_b__0__);
    sub_1C21E38(&clsQuestCheck___c__DisplayClass31_0_TypeInfo);
    sub_1C21E38(&Method_clsQuestCheck___c__DisplayClass31_1__GetReleasedQuestEntityListByServantGet_b__1__);
    sub_1C21E38(&clsQuestCheck___c__DisplayClass31_1_TypeInfo);
    byte_4BD8FF2 = 1;
  }
  Instance = (QuestReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  v7 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
  v9 = DataManager__GetMasterData_object_(
         v7,
         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  if ( !v9 )
    goto LABEL_49;
  v66 = (QuestReleaseMaster_o *)v9;
  Instance = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)v9, 8, 0LL);
  if ( !Instance )
    goto LABEL_49;
  max_length = Instance->max_length;
  v12 = Instance;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( v13 < max_length )
    {
      v14 = v12->m_Items[v13];
      v15 = sub_1C22084(clsQuestCheck___c__DisplayClass31_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v15, 0LL);
      if ( !v14 )
        goto LABEL_49;
      if ( v14->fields.targetId == servantId )
      {
        if ( !MasterData_object )
          goto LABEL_49;
        questId = v14->fields.questId;
        Instance = (QuestReleaseEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                 questId,
                                                 (const MethodInfo_325BDC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v15 )
          goto LABEL_49;
        *(_QWORD *)(v15 + 16) = Instance;
        v23 = (QuestReleaseEntity_array **)(v15 + 16);
        sub_1C21DDC((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)Instance, v17, v18, v19, v20, v21, v22);
        v24 = (System_Func_object__bool__o *)sub_1C22084(System_Func_QuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v24,
          (Il2CppObject *)v15,
          Method_clsQuestCheck___c__DisplayClass31_0__GetReleasedQuestEntityListByServantGet_b__0__,
          0LL);
        Instance = (QuestReleaseEntity_array *)BasicHelper__Any_object_(
                                                 (System_Collections_Generic_List_T__o *)v10,
                                                 (System_Func_T__bool__o *)v24,
                                                 (const MethodInfo_2F9AD70 *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = *v23;
          if ( !*v23 )
            goto LABEL_49;
          Instance = (QuestReleaseEntity_array *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
          if ( ((unsigned int)Instance & typeFlag) != 0 )
          {
            Instance = (QuestReleaseEntity_array *)clsQuestCheck__IsQuestRelease(this, questId, -1, 0, v25);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v10 )
                goto LABEL_49;
              v6 = (Il2CppObject *)*v23;
              items = v10->fields._items;
              v33 = Method_System_Collections_Generic_List_QuestEntity__Add__;
              ++v10->fields._version;
              if ( !items )
                goto LABEL_49;
              size = v10->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v10,
                  v6,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
              }
              else
              {
                v35 = &items->obj.klass + size;
                v10->fields._size = size + 1;
                v35[4] = (Il2CppClass *)v6;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)v6, v26, v27, v28, v29, v30, v31);
              }
            }
          }
        }
      }
      max_length = v12->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_23;
    }
LABEL_50:
    sub_1C2209C(Instance, v6);
  }
LABEL_23:
  Instance = (QuestReleaseEntity_array *)DataManager__GetMasterData_object_(
                                           v7,
                                           (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantGroupMaster___);
  if ( !Instance
    || (ListByServantID = ServantGroupMaster__getListByServantID((ServantGroupMaster_o *)Instance, servantId, 0LL),
        Instance = QuestReleaseMaster__getListByType(v66, 10, 0LL),
        !ListByServantID) )
  {
LABEL_49:
    sub_1C22094(Instance, v6);
  }
  v37 = *(_QWORD *)&ListByServantID->max_length;
  if ( (int)v37 >= 1 )
  {
    v38 = Instance;
    v39 = 0LL;
    v67 = (DataManager_o *)ListByServantID;
    while ( 1 )
    {
      if ( v39 >= (unsigned int)v37 )
        goto LABEL_50;
      if ( !v38 )
        goto LABEL_49;
      v40 = v38->max_length;
      if ( v40 >= 1 )
        break;
LABEL_47:
      ++v39;
      LODWORD(v37) = v67->fields.m_CancellationTokenSource;
      if ( (__int64)v39 >= (int)v37 )
        return (System_Collections_Generic_List_QuestEntity__o *)v10;
    }
    v41 = 0;
    v42 = *((_QWORD *)&v67->fields._DispLog + v39);
    while ( v41 < v40 )
    {
      v43 = v38->m_Items[v41];
      v44 = sub_1C22084(clsQuestCheck___c__DisplayClass31_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v44, 0LL);
      if ( !v42 || !v43 )
        goto LABEL_49;
      if ( *(_DWORD *)(v42 + 16) == v43->fields.targetId )
      {
        if ( !MasterData_object )
          goto LABEL_49;
        v45 = v43->fields.questId;
        Instance = (QuestReleaseEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                 v45,
                                                 (const MethodInfo_325BDC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v44 )
          goto LABEL_49;
        *(_QWORD *)(v44 + 16) = Instance;
        v52 = (QuestReleaseEntity_array **)(v44 + 16);
        sub_1C21DDC((PartyOrganizationUtility_o *)(v44 + 16), (int64_t)Instance, v46, v47, v48, v49, v50, v51);
        v53 = (System_Func_object__bool__o *)sub_1C22084(System_Func_QuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v53,
          (Il2CppObject *)v44,
          Method_clsQuestCheck___c__DisplayClass31_1__GetReleasedQuestEntityListByServantGet_b__1__,
          0LL);
        Instance = (QuestReleaseEntity_array *)BasicHelper__Any_object_(
                                                 (System_Collections_Generic_List_T__o *)v10,
                                                 (System_Func_T__bool__o *)v53,
                                                 (const MethodInfo_2F9AD70 *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = *v52;
          if ( !*v52 )
            goto LABEL_49;
          Instance = (QuestReleaseEntity_array *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
          if ( ((unsigned int)Instance & typeFlag) != 0 )
          {
            Instance = (QuestReleaseEntity_array *)clsQuestCheck__IsQuestRelease(this, v45, -1, 0, v54);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v10 )
                goto LABEL_49;
              v6 = (Il2CppObject *)*v52;
              v61 = v10->fields._items;
              v62 = Method_System_Collections_Generic_List_QuestEntity__Add__;
              ++v10->fields._version;
              if ( !v61 )
                goto LABEL_49;
              v63 = v10->fields._size;
              if ( (unsigned int)v63 >= v61->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v10,
                  v6,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
              }
              else
              {
                v64 = &v61->obj.klass + v63;
                v10->fields._size = v63 + 1;
                v64[4] = (Il2CppClass *)v6;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v64 + 4), (int64_t)v6, v55, v56, v57, v58, v59, v60);
              }
            }
          }
        }
      }
      v40 = v38->max_length;
      if ( (int)++v41 >= v40 )
        goto LABEL_47;
    }
    goto LABEL_50;
  }
  return (System_Collections_Generic_List_QuestEntity__o *)v10;
}


bool __fastcall clsQuestCheck__IsEncountRaidBoss(
        clsQuestCheck_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  System_Int32_array *Instance; // x0
  __int64 v8; // x1
  EventRaidMaster_o *v9; // x22
  int32_t RaidDeadQuestId; // w23
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4
  const MethodInfo *v14; // x4
  __int64 v15; // x8
  System_Int32_array *v16; // x20
  unsigned __int64 v17; // x21

  if ( (byte_4BD8FE2 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4BD8FE2 = 1;
  }
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_18;
  v9 = (EventRaidMaster_o *)Instance;
  RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId((EventRaidMaster_o *)Instance, eventId, day, 0LL);
  Instance = (System_Int32_array *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, RaidDeadQuestId, 0, v11)
    || clsQuestCheck__IsQuestRelease(this, RaidDeadQuestId, -1, 0, v12) )
  {
    LOBYTE(Instance) = 1;
    return (unsigned __int8)Instance & 1;
  }
  Instance = EventRaidMaster__GetRaidAliveQuestIds(v9, eventId, day, 0LL);
  if ( !Instance )
LABEL_18:
    sub_1C22094(Instance, v8);
  v15 = *(_QWORD *)&Instance->max_length;
  v16 = Instance;
  if ( (int)v15 < 1 )
  {
    LOBYTE(Instance) = 0;
  }
  else
  {
    v17 = 0LL;
    do
    {
      if ( v17 >= (unsigned int)v15 )
        sub_1C2209C(Instance, v8);
      Instance = (System_Int32_array *)clsQuestCheck__IsQuestRelease(this, v16->m_Items[v17 + 1], -1, 0, v14);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      LODWORD(v15) = v16->max_length;
      ++v17;
    }
    while ( (__int64)v17 < (int)v15 );
  }
  return (unsigned __int8)Instance & 1;
}


bool __fastcall clsQuestCheck__IsLastWarClear(clsQuestCheck_o *this, const MethodInfo *method)
{
  int32_t Value; // w1
  const MethodInfo *v4; // x2

  if ( (byte_4BD8FE4 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_8408/*"LAST_WAR_ID"*/);
    byte_4BD8FE4 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8408/*"LAST_WAR_ID"*/, 0LL);
  return clsQuestCheck__IsWarClear(this, Value, v4);
}


bool __fastcall clsQuestCheck__IsMainInterlude(clsQuestCheck_o *this, int32_t war_id, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4BD8FE5 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C21E38(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8FE5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v5);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             war_id,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = WarEntity__IsMainInterlude((WarEntity_o *)Entity, 0LL);
  return (char)Entity;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsQuestClear(
        clsQuestCheck_o *this,
        int32_t qid,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  int32_t v6; // w20

  if ( (byte_4BD8FEB & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_1C21E38(&CondType_TypeInfo);
    byte_4BD8FEB = 1;
  }
  v6 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_38834244(qid, v6, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsQuestClearRaw(
        clsQuestCheck_o *this,
        int32_t qid,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  int32_t v6; // w20

  if ( (byte_4BD8FEC & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_1C21E38(&CondType_TypeInfo);
    byte_4BD8FEC = 1;
  }
  v6 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_38834244(qid, v6, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsQuestPhaseClear(
        clsQuestCheck_o *this,
        int32_t qid,
        int32_t phase,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  int32_t v8; // w21
  NetworkManager_c *v9; // x0
  int64_t userIdNumber; // x22

  if ( (byte_4BD8FED & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    this = (clsQuestCheck_o *)sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD8FED = 1;
  }
  v8 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, *(const MethodInfo **)&phase);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  userIdNumber = v9->static_fields->userIdNumber;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestPhaseClear(userIdNumber, qid, phase, v8, 0, 0LL);
}


bool __fastcall clsQuestCheck__IsQuestRelease(
        clsQuestCheck_o *this,
        int32_t quest_id,
        int32_t old_val,
        int32_t old_val_qr_type,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *monitor; // x19
  bool v12; // w20
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  QuestReleaseEntity_o *v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x4
  int32_t v26; // w2
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4BD8FE1 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__getEntityList__);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_QuestReleaseEntity__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    byte_4BD8FE1 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object || (monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor) == 0LL )
    sub_1C22094(Master_object, v10);
  v12 = System_Collections_ObjectModel_Collection_object___get_Count(
          (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor,
          (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__) > 0;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 monitor,
                 (const MethodInfo_31F66A4 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C22094(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestReleaseEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_QuestReleaseEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_19;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_19:
      v22 = sub_1C73E18(Enumerator, System_Collections_Generic_IEnumerator_QuestReleaseEntity__TypeInfo, 0LL);
    }
    v23 = (QuestReleaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                                    Enumerator,
                                    *(_QWORD *)(v22 + 8));
    if ( !v23 )
      sub_1C22094(0LL, v24);
    if ( v23->fields.questId == quest_id )
    {
      if ( (old_val & 0x80000000) != 0 )
        v26 = -1;
      else
        v26 = v23->fields.type == old_val_qr_type ? old_val : -1;
      if ( !clsQuestCheck__IsQuestRelease_34630500(this, v23, v26, 0LL, v25) )
      {
        v12 = 0;
        break;
      }
    }
  }
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_34;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_34:
    v30 = sub_1C73E18(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return v12;
}


bool __fastcall clsQuestCheck__IsQuestRelease_34627704(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        MapControl_QuestInfo_o *qinf,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_34630500(this, qrd, -1, qinf, v4);
}


bool __fastcall clsQuestCheck__IsQuestRelease_34629580(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        int32_t old_val,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_34630500(this, qrd, old_val, 0LL, v4);
}


bool __fastcall clsQuestCheck__IsQuestRelease_34630500(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        int32_t old_val,
        MapControl_QuestInfo_o *qinf,
        const MethodInfo *method)
{
  char v5; // cf
  char v6; // zf
  clsQuestCheck_o *v10; // x22
  int32_t type; // w23
  int32_t v12; // w20
  int32_t v13; // w21
  int32_t targetId; // w20
  int64_t value; // x19
  int32_t v17; // w0
  int32_t v18; // w20
  int32_t v19; // w21
  int32_t v20; // w19
  int32_t v21; // w0
  int32_t v22; // w1
  int32_t v23; // w2
  bool v24; // w3
  bool v26; // w3
  QuestReleaseEntity_o *v27; // x2
  Il2CppObject *v28; // x0
  int32_t *v29; // x19
  int64_t Time; // x20
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_openedAt; // x8
  int32_t *p_closedAt; // x9
  int64_t v34; // x8
  Il2CppObject *v35; // x0
  int32_t v36; // w19
  int32_t v37; // w20
  int32_t questId; // w22
  int32_t ValueInt; // w19
  int32_t v40; // w20
  int32_t v41; // w21
  int32_t v42; // w19
  TotalEventRaidEntity_o *v44; // [xsp+0h] [xbp-50h] BYREF
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  System_Int32_array *sameGroupQuestIds; // [xsp+10h] [xbp-40h] BYREF
  bool is_release; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = this;
  if ( (byte_4BD8FE7 & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C21E38(&NetworkManager_TypeInfo);
    this = (clsQuestCheck_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8FE7 = 1;
  }
  entity = 0LL;
  sameGroupQuestIds = 0LL;
  v44 = 0LL;
  is_release = 0;
  if ( !qrd )
LABEL_101:
    sub_1C22094(this, qrd);
  type = qrd->fields.type;
  if ( !v6 & v5 )
  {
LABEL_20:
    targetId = qrd->fields.targetId;
    value = qrd->fields.value;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v17 = type;
  }
  else
  {
    switch ( type )
    {
      case 0:
        return 1;
      case 1:
        return clsQuestCheck__IsQuestClear(v10, qrd->fields.targetId, 0, (const MethodInfo *)qinf);
      case 2:
        v26 = 1;
        v27 = qrd;
        goto LABEL_89;
      case 3:
      case 4:
      case 5:
        return is_release;
      case 6:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        if ( (old_val & 0x80000000) == 0 )
          return QuestReleaseEntity__getValueInt(qrd, 0LL) <= old_val;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v17 = 6;
        break;
      case 7:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        if ( (old_val & 0x80000000) == 0 )
          return QuestReleaseEntity__getValueInt(qrd, 0LL) <= old_val;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v17 = 7;
        break;
      case 8:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v17 = 8;
        break;
      case 9:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        if ( (old_val & 0x80000000) == 0 )
          return QuestReleaseEntity__getValueInt(qrd, 0LL) <= old_val;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v17 = 9;
        break;
      case 10:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v17 = 10;
        break;
      case 11:
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v17 = 11;
        break;
      case 12:
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_101;
        v28 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                qrd->fields.questId,
                (const MethodInfo_325BDC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v28 )
          return is_release;
        v29 = (int32_t *)v28;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Time = NetworkManager__getTime(0LL);
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestAddMaster___);
        if ( !this )
          goto LABEL_101;
        ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)this, v29[4], 0LL);
        p_openedAt = &ReplaceDataByQuestId->fields.openedAt;
        p_closedAt = &ReplaceDataByQuestId->fields.closedAt;
        if ( !ReplaceDataByQuestId )
          p_openedAt = v29 + 39;
        v34 = *p_openedAt;
        if ( !ReplaceDataByQuestId )
          p_closedAt = v29 + 40;
        return Time >= v34 && Time < *p_closedAt;
      case 13:
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_101;
        v35 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                qrd->fields.questId,
                (const MethodInfo_325BDC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v35 )
          return is_release;
        return QuestEntity__IsOpenByTime((QuestEntity_o *)v35, 1, 0LL);
      case 14:
      case 15:
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
      case 21:
      case 22:
      case 23:
      case 25:
      case 29:
      case 30:
      case 31:
      case 33:
      case 34:
      case 35:
      case 36:
      case 37:
      case 39:
      case 40:
      case 41:
      case 42:
      case 43:
      case 44:
      case 45:
      case 46:
      case 47:
      case 48:
      case 49:
      case 50:
      case 51:
      case 52:
        goto LABEL_20;
      case 24:
        v36 = qrd->fields.targetId;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return CondType__IsMissionAchive(v36, 0LL);
      case 26:
        v37 = qrd->fields.targetId;
        questId = qrd->fields.questId;
        ValueInt = QuestReleaseEntity__getValueInt(qrd, 0LL);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        is_release = CondType__IsNotQuestGroupClear(questId, v37, ValueInt, &sameGroupQuestIds, 1, 0LL);
        if ( qinf )
        {
          qinf->fields._GroupId_k__BackingField = v37;
          MapControl_QuestInfo__AddSameGroupQuestIds(qinf, sameGroupQuestIds, 0LL);
        }
        return is_release;
      case 27:
      case 28:
        v12 = qrd->fields.targetId;
        v13 = QuestReleaseEntity__getValueInt(qrd, 0LL);
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventRaidMaster___);
        if ( !this )
          goto LABEL_101;
        if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)this, &entity, v12, v13, 0LL) )
          return is_release;
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)TotalEventRaidMaster__TryGetEntity(
                                    (TotalEventRaidMaster_o *)this,
                                    &v44,
                                    v12,
                                    v13,
                                    0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          return is_release;
        if ( !entity || !v44 )
          goto LABEL_101;
        return (entity->fields.maxHp > v44->fields.totalDamage) ^ (qrd->fields.type != 27);
      case 32:
        v40 = qrd->fields.questId;
        v41 = qrd->fields.targetId;
        v42 = QuestReleaseEntity__getValueInt(qrd, 0LL);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v24 = 1;
        v21 = v40;
        v22 = v41;
        v23 = v42;
        return CondType__IsQuestGroupClear(v21, v22, v23, v24, 0LL);
      case 38:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v17 = 38;
        break;
      case 53:
        v27 = qrd;
        v26 = 0;
LABEL_89:
        clsQuestCheck__checkCondTypeItemGet(this, &is_release, v27, v26, method);
        return is_release;
      case 54:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v17 = 54;
        break;
      default:
        if ( type == 58 )
        {
          v18 = qrd->fields.questId;
          v19 = qrd->fields.targetId;
          v20 = QuestReleaseEntity__getValueInt(qrd, 0LL);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v21 = v18;
          v22 = v19;
          v23 = v20;
          v24 = 0;
          return CondType__IsQuestGroupClear(v21, v22, v23, v24, 0LL);
        }
        if ( type != 64 )
        {
          if ( type != 92 )
            goto LABEL_20;
          return 0;
        }
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v17 = 64;
        break;
    }
  }
  return CondType__IsOpen(v17, targetId, value, 0, 0LL, 0LL);
}


bool __fastcall clsQuestCheck__IsReleasedLoginQuest(
        clsQuestCheck_o *this,
        LoginQuestEntity_o *loginQuestEnt,
        const MethodInfo *method)
{
  QuestReleaseMaster_o *Master_object; // x0
  __int64 v6; // x1
  clsQuestCheck_Fields *p_fields; // x21
  System_Collections_Generic_List_object__o *qrs; // x9
  int64_t v9; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  int v13; // w19
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BD8FE0 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD8FE0 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !loginQuestEnt || !Master_object )
    goto LABEL_24;
  p_fields = &this->fields;
  QuestReleaseMaster__getListByQuestID_40793780(Master_object, loginQuestEnt->fields.questId, &this->fields.qrs, 0LL);
  if ( !this->fields.qrs )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (QuestReleaseMaster_o *)NetworkManager__getTime(0LL);
  qrs = (System_Collections_Generic_List_object__o *)p_fields->qrs;
  if ( !p_fields->qrs )
LABEL_24:
    sub_1C22094(Master_object, v6);
  v9 = (int64_t)Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    qrs,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v10 )
      break;
    if ( !v15.fields._current )
      sub_1C22094(v10, v11);
    if ( HIDWORD(v15.fields._current[1].klass) == 12 )
    {
      if ( !LoginQuestEntity__IsEnablePeriod(loginQuestEnt, v9, 0LL) )
        goto LABEL_18;
    }
    else if ( !clsQuestCheck__IsQuestRelease_34630500(this, (QuestReleaseEntity_o *)v15.fields._current, -1, 0LL, v12) )
    {
LABEL_18:
      v13 = 6;
      goto LABEL_21;
    }
  }
  v13 = 7;
LABEL_21:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v13 != 6;
}


bool __fastcall clsQuestCheck__IsReleasedQuest(clsQuestCheck_o *this, int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_QuestReleaseEntity__o *qrs; // x0
  const MethodInfo *v8; // x4
  int v9; // w19
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BD8FDF & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    byte_4BD8FDF = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object )
    sub_1C22094(0LL, v6);
  QuestReleaseMaster__getListByQuestID_40793780((QuestReleaseMaster_o *)Master_object, questId, &this->fields.qrs, 0LL);
  qrs = this->fields.qrs;
  if ( qrs )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      (System_Collections_Generic_List_object__o *)qrs,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
    {
      if ( !clsQuestCheck__IsQuestRelease_34630500(this, (QuestReleaseEntity_o *)v11.fields._current, -1, 0LL, v8) )
      {
        v9 = 5;
        goto LABEL_12;
      }
    }
    v9 = 6;
LABEL_12:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    LOBYTE(qrs) = v9 != 5;
  }
  return (char)qrs;
}


bool __fastcall clsQuestCheck__IsTapSkipQuestStart(
        clsQuestCheck_o *this,
        int32_t questId,
        int32_t questPhase,
        System_String_o *effectName,
        bool isMyRoomMaterial,
        const MethodInfo *method)
{
  __int64 v10; // x19
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int32_t ScriptIntParam; // w22
  int v20; // w8
  clsQuestCheck_c *v22; // x0
  System_String_o *KEY_QUEST_START_EFFECT; // x21
  System_String_o *String; // x21
  System_String_array *v25; // x0
  System_Object_array *v26; // x23
  System_Func_object__bool__o *v27; // x20
  Il2CppObject *object; // x20
  System_String_o *v29; // x0
  char v30; // w8
  System_String_o *v31; // x19
  clsQuestCheck_c *v32; // x0
  System_String_o *v33; // x20
  Il2CppObject *v34; // [xsp+0h] [xbp-50h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BD8FFA & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Find_string___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C21E38(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C21E38(&System_Func_string__bool__TypeInfo);
    sub_1C21E38(&Method_clsQuestCheck___c__DisplayClass40_0__IsTapSkipQuestStart_b__0__);
    sub_1C21E38(&clsQuestCheck___c__DisplayClass40_0_TypeInfo);
    sub_1C21E38(&StringLiteral_23105/*"questStartEffectSkip"*/);
    sub_1C21E38(&StringLiteral_1123/*"/"*/);
    sub_1C21E38(&clsQuestCheck_TypeInfo);
    byte_4BD8FFA = 1;
  }
  v34 = 0LL;
  entity = 0LL;
  v10 = sub_1C22084(clsQuestCheck___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_41;
  *(_QWORD *)(v10 + 16) = effectName;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)effectName, v13, v14, v15, v16, v17, v18);
  if ( isMyRoomMaterial )
    return 0;
  if ( questPhase <= 1 )
    questPhase = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_41;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, questId, questPhase, 0LL) )
    goto LABEL_44;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_41;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_23105/*"questStartEffectSkip"*/, 0, 0LL);
  if ( !ScriptIntParam )
  {
LABEL_44:
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !Master_object )
      goto LABEL_41;
    Master_object = (QuestPhaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            &v34,
                                            questId,
                                            (const MethodInfo_325BE14 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !v34 )
        goto LABEL_41;
      v20 = LODWORD(v34[2].monitor) - 1;
      if ( (unsigned int)v20 > 7 )
        ScriptIntParam = 0;
      else
        ScriptIntParam = dword_C373F0[v20];
      goto LABEL_22;
    }
    return 0;
  }
LABEL_22:
  v22 = clsQuestCheck_TypeInfo;
  if ( !clsQuestCheck_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
    v22 = clsQuestCheck_TypeInfo;
  }
  KEY_QUEST_START_EFFECT = v22->static_fields->KEY_QUEST_START_EFFECT;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  String = EncryptedPlayerPrefs__GetString(KEY_QUEST_START_EFFECT, 0LL);
  Master_object = (QuestPhaseMaster_o *)System_String__IsNullOrEmpty(String, 0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    goto LABEL_31;
  if ( !String )
LABEL_41:
    sub_1C22094(Master_object, v12);
  v25 = System_String__Split(String, 0x2Fu, 0, 0LL);
  if ( !v25 )
  {
LABEL_31:
    v31 = *(System_String_o **)(v10 + 16);
LABEL_32:
    v32 = clsQuestCheck_TypeInfo;
    if ( !clsQuestCheck_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
      v32 = clsQuestCheck_TypeInfo;
    }
    v33 = v32->static_fields->KEY_QUEST_START_EFFECT;
    if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    EncryptedPlayerPrefs__SetString(v33, v31, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
    v30 = 1;
    goto LABEL_37;
  }
  v26 = (System_Object_array *)v25;
  v27 = (System_Func_object__bool__o *)sub_1C22084(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v27,
    (Il2CppObject *)v10,
    Method_clsQuestCheck___c__DisplayClass40_0__IsTapSkipQuestStart_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             v26,
             (System_Func_T__bool__o *)v27,
             (const MethodInfo_2F9B93C *)Method_BasicHelper_Find_string___);
  v29 = System_String__Concat_63126736(
          String,
          (System_String_o *)StringLiteral_1123/*"/"*/,
          *(System_String_o **)(v10 + 16),
          0LL);
  if ( !object )
  {
    v31 = v29;
    goto LABEL_32;
  }
  v30 = 0;
LABEL_37:
  if ( ScriptIntParam == 1 )
    return 1;
  else
    return (ScriptIntParam == 2) & (v30 ^ 1);
}


bool __fastcall clsQuestCheck__IsValidQuestRandomGroup(
        clsQuestCheck_o *this,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  QuestRandomGroupMaster_o *v6; // x21
  QuestRandomGroupEntity_o *EntityFromQuestId; // x0
  QuestRandomGroupEntity_o *v8; // x19
  int32_t randomGroupId; // w20
  TerminalPramsManager_c *v10; // x0
  bool v11; // w0
  uint32_t cctor_finished; // w9
  TerminalPramsManager_c *v13; // x0
  int32_t Item; // w22
  QuestRandomGroupEntity_o *RandomRangeQuest; // x0
  TerminalPramsManager_c *v16; // x0
  QuestRandomGroupEntity_o *v17; // x21
  TerminalPramsManager_c *v18; // x0
  TerminalPramsManager_c *v19; // x0

  if ( (byte_4BD8FDD & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestRandomGroupMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD8FDD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestRandomGroupMaster___);
  if ( !questInfo )
    goto LABEL_53;
  v6 = (QuestRandomGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_53;
  EntityFromQuestId = QuestRandomGroupMaster__GetEntityFromQuestId(
                        (QuestRandomGroupMaster_o *)Instance,
                        questInfo->fields.questId,
                        0LL);
  if ( EntityFromQuestId )
  {
    v8 = EntityFromQuestId;
    randomGroupId = EntityFromQuestId->fields.randomGroupId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__LoadQuestRandomGroupList(0LL);
    if ( !byte_4BD9096 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9096 = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    Instance = (Il2CppObject *)v10->static_fields->_QuestRandomGroupList_k__BackingField;
    if ( !Instance )
      goto LABEL_53;
    v11 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
            (System_Collections_Generic_Dictionary_int__int__o *)Instance,
            randomGroupId,
            (const MethodInfo_32AD168 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    cctor_finished = TerminalPramsManager_TypeInfo->_2.cctor_finished;
    if ( v11 )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD9096 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9096 = 1;
      }
      v13 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v13 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v13->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_53;
      Item = System_Collections_Generic_Dictionary_int__int___get_Item(
               (System_Collections_Generic_Dictionary_int__int__o *)Instance,
               randomGroupId,
               (const MethodInfo_32ACEE0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsQuestClear_38834244(Item, -1, 0, 0LL) )
        goto LABEL_44;
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD9096 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9096 = 1;
      }
      v16 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v16->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_53;
      System_Collections_Generic_Dictionary_int__int___Add(
        (System_Collections_Generic_Dictionary_int__int__o *)Instance,
        randomGroupId,
        0,
        (const MethodInfo_32ACF7C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
    RandomRangeQuest = QuestRandomGroupMaster__GetRandomRangeQuest(v6, randomGroupId, 0LL);
    if ( RandomRangeQuest )
    {
      v17 = RandomRangeQuest;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD9096 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9096 = 1;
      }
      v18 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v18 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v18->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_53;
      System_Collections_Generic_Dictionary_int__int___set_Item(
        (System_Collections_Generic_Dictionary_int__int__o *)Instance,
        randomGroupId,
        v17->fields.questId,
        (const MethodInfo_32ACF68 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      TerminalPramsManager__SaveQuestRandomGroupList(0LL);
LABEL_44:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD9096 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9096 = 1;
      }
      v19 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v19 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v19->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( Instance )
      {
        LOBYTE(RandomRangeQuest) = System_Collections_Generic_Dictionary_int__int___get_Item(
                                     (System_Collections_Generic_Dictionary_int__int__o *)Instance,
                                     randomGroupId,
                                     (const MethodInfo_32ACEE0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) == v8->fields.questId;
        return (char)RandomRangeQuest;
      }
LABEL_53:
      sub_1C22094(Instance, v5);
    }
  }
  else
  {
    LOBYTE(RandomRangeQuest) = 1;
  }
  return (char)RandomRangeQuest;
}


bool __fastcall clsQuestCheck__IsWarClear(clsQuestCheck_o *this, int32_t war_id, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4BD8FE3 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C21E38(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8FE3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v6);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             war_id,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = clsQuestCheck__IsQuestClear(this, HIDWORD(Entity[6].klass), 0, v8);
  return (char)Entity;
}


void __fastcall clsQuestCheck__PlayQuestStartAction(
        clsQuestCheck_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w20

  if ( (byte_4BD8FF9 & 1) == 0 )
  {
    sub_1C21E38(&ScriptManager_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD8FF9 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9099 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9099 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v4->static_fields->_WarId_k__BackingField;
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4BD7264 = 1;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v4->static_fields->_QuestId_k__BackingField;
  if ( clsQuestCheck__mfCheck_IsQuestNew((clsQuestCheck_o *)v4, QuestId_k__BackingField, method) )
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__PlayQuestStart(WarId_k__BackingField, QuestId_k__BackingField, 0, 0, end_act, 0LL, 0, 0LL, 0LL, 0LL);
  }
  else
  {
    ActionExtensions__Call(end_act, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall clsQuestCheck__RecoverItemListDialogCallback(
        clsQuestCheck_o *this,
        MapControl_QuestInfo_o *qinf,
        int64_t endTime,
        int32_t result,
        int32_t boostId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v12; // x1
  _QWORD *v13; // x19
  __int64 methodPtr_low; // x9
  __int64 v15; // x8
  TerminalPramsManager_c *v16; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w20
  BattleSetupInfo_o *v20; // x23
  Il2CppObject *v21; // x20
  clsQuestCheck_o *v22; // x0
  const MethodInfo *v23; // x1

  if ( (byte_4BD8FFC & 1) == 0 )
  {
    sub_1C21E38(&BattleRootComponent_TypeInfo);
    sub_1C21E38(&BattleSetupInfo_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD8FFC = 1;
  }
  if ( result == 2 )
  {
    if ( clsQuestCheck__CheckQuestPlayable(this, qinf, endTime, boostId, *(const MethodInfo **)&boostId) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD9099 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9099 = 1;
      }
      v16 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
      }
      WarId_k__BackingField = v16->static_fields->_WarId_k__BackingField;
      if ( !byte_4BD7264 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
        byte_4BD7264 = 1;
      }
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = TerminalPramsManager_TypeInfo;
      }
      QuestId_k__BackingField = v16->static_fields->_QuestId_k__BackingField;
      if ( !byte_4BD7263 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
        byte_4BD7263 = 1;
      }
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = TerminalPramsManager_TypeInfo;
      }
      PhaseCnt_k__BackingField = v16->static_fields->_PhaseCnt_k__BackingField;
      v20 = (BattleSetupInfo_o *)sub_1C22084(BattleSetupInfo_TypeInfo);
      BattleSetupInfo___ctor(v20, 0LL);
      if ( !v20 )
        goto LABEL_38;
      Instance = BattleSetupInfo__ConvertBattleSetupInfo(
                   v20,
                   WarId_k__BackingField,
                   QuestId_k__BackingField,
                   PhaseCnt_k__BackingField,
                   0,
                   0,
                   0,
                   0LL);
      v21 = (Il2CppObject *)Instance;
      if ( boostId )
      {
        if ( !Instance )
          goto LABEL_38;
        *((_DWORD *)Instance + 14) = boostId;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance
        || (*((_BYTE *)Instance + 148) = 1,
            (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__)) == 0LL)
        || (*((_DWORD *)Instance + 38) = 1,
            (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
      {
LABEL_38:
        sub_1C22094(Instance, v12);
      }
      AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 35, 1, v21, 0LL);
    }
LABEL_36:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0LL);
      return;
    }
    goto LABEL_38;
  }
  if ( result )
    goto LABEL_36;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v13 = (_QWORD *)*((_QWORD *)Instance + 4);
  if ( !v13 )
    goto LABEL_38;
  methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*v13 + 304LL) >= (unsigned int)methodPtr_low
    && *(BattleRootComponent_c **)(*(_QWORD *)(*v13 + 200LL) + 8 * methodPtr_low - 8) == BattleRootComponent_TypeInfo )
  {
    Instance = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)Instance + 4), 0LL);
    if ( !Instance )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v15 = v13[10];
    if ( !v15 )
      goto LABEL_38;
    Instance = *(void **)(v15 + 512);
    if ( !Instance )
      goto LABEL_38;
    BattleResultComponent__EndResult((BattleResultComponent_o *)Instance, 0LL);
    goto LABEL_36;
  }
  sub_1C22354(*((_QWORD *)Instance + 4));
  clsQuestCheck___ctor(v22, v23);
}


void __fastcall clsQuestCheck__SaveEventQuestIdListPlayable(
        clsQuestCheck_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_c *v10; // x21
  TerminalPramsManager_c *v11; // x0
  PartyOrganizationUtility_o *p_ClearEventQuestIds_k__BackingField; // x0
  const MethodInfo *v13; // x2
  System_Collections_Generic_IEnumerable_T__o *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_String_o *v21; // x19
  TerminalPramsManager_c *v22; // x0
  PartyOrganizationUtility_o *v23; // x0

  if ( (byte_4BD8FF5 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_String_Join_int___);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_866/*","*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8FF5 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v10 = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
  if ( !byte_4BD9097 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9097 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  p_ClearEventQuestIds_k__BackingField = (PartyOrganizationUtility_o *)&v11->static_fields->_ClearEventQuestIds_k__BackingField;
  p_ClearEventQuestIds_k__BackingField->klass = v10;
  sub_1C21DDC(p_ClearEventQuestIds_k__BackingField, (int64_t)v10, (int64_t)method, v3, v4, v5, v6, v7);
  v14 = (System_Collections_Generic_IEnumerable_T__o *)clsQuestCheck__GetEventQuestIdListPlayable(this, eventId, v13);
  v21 = System_String__Join_int_(
          (System_String_o *)StringLiteral_866/*","*/,
          v14,
          (const MethodInfo_3054074 *)Method_System_String_Join_int___);
  if ( !byte_4BD9097 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9097 = 1;
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = TerminalPramsManager_TypeInfo;
  }
  v23 = (PartyOrganizationUtility_o *)&v22->static_fields->_ClearEventQuestIds_k__BackingField;
  v23->klass = (PartyOrganizationUtility_c *)v21;
  sub_1C21DDC(v23, (int64_t)v21, v15, v16, v17, v18, v19, v20);
  TerminalPramsManager__ClearEventQuestIds_SaveData(0LL);
}


void __fastcall clsQuestCheck__checkCondTypeItemGet(
        clsQuestCheck_o *this,
        bool *is_release,
        QuestReleaseEntity_o *qrd,
        bool itemGet,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  UserItemMaster_o *v10; // x22
  int32_t targetId; // w23
  int32_t num; // w22
  bool v13; // w8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BD8FE8 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8FE8 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !qrd )
    goto LABEL_17;
  v10 = (UserItemMaster_o *)Instance;
  targetId = qrd->fields.targetId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !v10 )
    goto LABEL_17;
  Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                v10,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                targetId,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v13 = 1;
    goto LABEL_16;
  }
  if ( !entity )
LABEL_17:
    sub_1C22094(Instance, v9);
  num = entity->fields.num;
  v13 = num < QuestReleaseEntity__getValueInt(qrd, 0LL);
LABEL_16:
  *is_release = (v13 ^ itemGet) & 1;
}


bool __fastcall clsQuestCheck__isPlayQuestStartAction(clsQuestCheck_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalPramsManager_c *v3; // x0
  int32_t WarId_k__BackingField; // w20
  int32_t QuestId_k__BackingField; // w19

  if ( (byte_4BD8FF8 & 1) == 0 )
  {
    sub_1C21E38(&ScriptManager_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD8FF8 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9099 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9099 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v3->static_fields->_WarId_k__BackingField;
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4BD7264 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v3->static_fields->_QuestId_k__BackingField;
  if ( !clsQuestCheck__mfCheck_IsQuestNew((clsQuestCheck_o *)v3, QuestId_k__BackingField, v2) )
    return 0;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  return ScriptManager__isPlayQuestStart(WarId_k__BackingField, QuestId_k__BackingField, 0LL);
}


bool __fastcall clsQuestCheck__mfCheck_IsQuestNew(clsQuestCheck_o *this, int32_t qid, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BD8FE9 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8FE9 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_15;
  Instance = (DataManager_o *)UserQuestMaster__TryGetEntity(
                                (UserQuestMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                qid,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.challengeNum == 0;
LABEL_15:
    sub_1C22094(Instance, v5);
  }
  return 1;
}


int32_t __fastcall clsQuestCheck__mfGetQuestPhaseByQuestID(
        clsQuestCheck_o *this,
        int32_t qid,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BD8FEA & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8FEA = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_15;
  if ( UserQuestMaster__TryGetEntity(
         (UserQuestMaster_o *)MasterData_object,
         &entity,
         *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
         qid,
         0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserQuestEntity__getQuestPhase(entity, 0LL);
LABEL_15:
    sub_1C22094(Instance, v5);
  }
  return 0;
}


bool __fastcall clsQuestCheck__mfQuestReleaseCheckAlreadyClear(
        clsQuestCheck_o *this,
        int32_t qid,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  bool v8; // w8
  bool result; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BD8FE6 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8FE6 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               qid,
                               (const MethodInfo_325BE14 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 1;
  if ( !entity )
LABEL_12:
    sub_1C22094(Instance, v6);
  if ( (HIDWORD(entity[5].klass) | 4) != 5 )
    return 0;
  v8 = clsQuestCheck__IsQuestClear(this, qid, 0, v7);
  result = 0;
  if ( v8 )
    return 1;
  return result;
}


bool __fastcall clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(
        clsQuestCheck_o *this,
        int32_t questId,
        QuestReleaseEntity_o **questReleaseNG,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v12; // x2
  void *Master_object; // x0
  __int64 v14; // x1
  _BOOL8 IsShop; // x0
  const MethodInfo *v16; // x2
  Il2CppObject *v17; // x23
  clsQuestCheck_Fields *p_fields; // x23
  int32_t UseDiceSpotId; // w24
  System_Collections_Generic_List_T__o *qrs; // x24
  clsQuestCheck___c_c *v22; // x0
  System_Func_object__bool__o *_9__5_0; // x25
  Il2CppObject *v24; // x26
  struct clsQuestCheck___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct BalanceConfig_StaticFields *v32; // x8
  QuestEntity_o *Mine; // x0
  UserEventQuestCooltimeMaster_o *v34; // x24
  UserEventQuestCooltimeEntity_o *v35; // x0
  UserEventQuestCooltimeEntity_o *v36; // x24
  int64_t Time; // x0
  int64_t clearedAt; // x26
  int64_t v39; // x25
  int32_t v40; // w2
  int v41; // w8
  struct System_Collections_Generic_List_QuestReleaseEntity__o *cQuestReleaseListP; // x23
  System_Comparison_T__o *v43; // x24
  Il2CppObject *v44; // x25
  struct clsQuestCheck___c_StaticFields *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  UserQuestEntity_o *v52; // x0
  Il2CppObject *v53; // x23
  bool v54; // w23
  _BOOL8 v55; // x0
  __int64 v56; // x1
  const MethodInfo *v57; // x4
  Il2CppObject *current; // x22
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int v65; // w19
  int32_t klass; // w24
  System_Collections_Generic_IEnumerable_T__o *v67; // x25
  System_Collections_Generic_List_object__o *v68; // x24
  const MethodInfo *v69; // x2
  BalanceConfig_c *v70; // x0
  const MethodInfo *v71; // x2
  BalanceConfig_c *v72; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+8h] [xbp-88h] BYREF
  Il2CppObject *v80; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF
  UserQuestEntity_o *v82; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4BD8FDC & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_BasicHelper_Any_QuestReleaseEntity___);
    sub_1C21E38(&System_Comparison_QuestReleaseEntity__TypeInfo);
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1C21E38(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___77581616);
    sub_1C21E38(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__);
    sub_1C21E38(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__);
    sub_1C21E38(&clsQuestCheck___c_TypeInfo);
    byte_4BD8FDC = 1;
  }
  v80 = 0LL;
  entity = 0LL;
  memset(&v79, 0, sizeof(v79));
  *questReleaseNG = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)questReleaseNG,
    0LL,
    (int64_t)questReleaseNG,
    (int32_t)questInfo,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, v12) )
    return 0;
  v82 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !questInfo || !Master_object )
    goto LABEL_107;
  IsShop = DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             questInfo->fields.warId,
             (const MethodInfo_325BE14 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( IsShop )
  {
    Master_object = entity;
    if ( !entity )
      goto LABEL_107;
    IsShop = WarEntity__IsShop((WarEntity_o *)entity, 0LL);
    if ( !IsShop )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v17 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BD6FF5 )
      {
        sub_1C21E38(&NetworkManager_TypeInfo);
        byte_4BD6FF5 = 1;
      }
      Master_object = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Master_object = NetworkManager_TypeInfo;
      }
      if ( !v17 )
        goto LABEL_107;
      IsShop = UserQuestMaster__TryGetEntity(
                 (UserQuestMaster_o *)v17,
                 &v82,
                 *(_QWORD *)(*((_QWORD *)Master_object + 23) + 64LL),
                 questId,
                 0LL);
      if ( IsShop )
      {
        Master_object = v82;
        if ( !v82 )
          goto LABEL_107;
        IsShop = UserQuestEntity__IsNotExpired(v82, 0LL);
        if ( IsShop )
          return 1;
      }
    }
  }
  if ( !clsQuestCheck__IsValidQuestRandomGroup((clsQuestCheck_o *)IsShop, questInfo, v16) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object )
    goto LABEL_107;
  p_fields = &this->fields;
  QuestReleaseMaster__getListByQuestID_40793780((QuestReleaseMaster_o *)Master_object, questId, &this->fields.qrs, 0LL);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !entity || !Master_object )
    goto LABEL_107;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &v80,
         (int32_t)entity[6].klass,
         (const MethodInfo_325BE14 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Master_object = v80;
    if ( !v80 )
      goto LABEL_107;
    if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v80, 0LL) )
    {
      Master_object = v80;
      if ( !v80 )
        goto LABEL_107;
      UseDiceSpotId = EventDetailEntity__GetUseDiceSpotId((EventDetailEntity_o *)v80, 0LL);
      if ( UseDiceSpotId == MapControl_QuestInfo__GetSpotID(questInfo, 0LL)
        && MapControl_QuestInfo__GetQuestType(questInfo, 0LL) == 1 )
      {
        qrs = (System_Collections_Generic_List_T__o *)p_fields->qrs;
        v22 = clsQuestCheck___c_TypeInfo;
        if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
          v22 = clsQuestCheck___c_TypeInfo;
        }
        _9__5_0 = (System_Func_object__bool__o *)v22->static_fields->__9__5_0;
        if ( !_9__5_0 )
        {
          if ( !v22->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v22);
            v22 = clsQuestCheck___c_TypeInfo;
          }
          v24 = (Il2CppObject *)v22->static_fields->__9;
          _9__5_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_QuestReleaseEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__5_0,
            v24,
            Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__,
            0LL);
          static_fields = clsQuestCheck___c_TypeInfo->static_fields;
          static_fields->__9__5_0 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__5_0;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&static_fields->__9__5_0,
            (int64_t)_9__5_0,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31);
        }
        if ( !BasicHelper__Any_object_(
                qrs,
                (System_Func_T__bool__o *)_9__5_0,
                (const MethodInfo_2F9AD70 *)Method_BasicHelper_Any_QuestReleaseEntity___) )
        {
          Master_object = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Master_object = BalanceConfig_TypeInfo;
          }
          v32 = (struct BalanceConfig_StaticFields *)*((_QWORD *)Master_object + 23);
          if ( v32->EventBoardGameNextBoardQuestId != questId )
          {
            if ( !*((_DWORD *)Master_object + 56) )
            {
              j_il2cpp_runtime_class_init_0(Master_object);
              v32 = BalanceConfig_TypeInfo->static_fields;
            }
            if ( v32->EventBoardGameNextRoundQuestId != questId )
            {
              if ( !entity )
                goto LABEL_107;
              klass = (int32_t)entity[6].klass;
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              if ( CondType__IsUserEventStatus(klass, 7, 0LL) )
                return 0;
              v67 = (System_Collections_Generic_IEnumerable_T__o *)p_fields->qrs;
              v68 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor_56945064(
                v68,
                v67,
                (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___77581616);
              v70 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v70 = BalanceConfig_TypeInfo;
              }
              if ( clsQuestCheck__CheckQuestPlayableNow(this, v70->static_fields->EventBoardGameNextBoardQuestId, v69) )
                return 0;
              v72 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v72 = BalanceConfig_TypeInfo;
              }
              if ( clsQuestCheck__CheckQuestPlayableNow(this, v72->static_fields->EventBoardGameNextRoundQuestId, v71) )
                return 0;
              p_fields->qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v68;
              sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v68, v73, v74, v75, v76, v77, v78);
            }
          }
        }
      }
    }
  }
  Mine = MapControl_QuestInfo__GetMine(questInfo, 0LL);
  if ( Mine && QuestEntity__HasFlag(Mine, 0x10000000000000LL, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___);
    if ( !questInfo->fields._WarInfo_k__BackingField )
      goto LABEL_107;
    v34 = (UserEventQuestCooltimeMaster_o *)Master_object;
    Master_object = (void *)MapControl_WarInfo__GetEventId(questInfo->fields._WarInfo_k__BackingField, 0LL);
    if ( !v34 )
      goto LABEL_107;
    v35 = UserEventQuestCooltimeMaster__getEntity(v34, (int32_t)Master_object, questInfo->fields.questId, 1, 0LL);
    if ( v35 )
    {
      v36 = v35;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      clearedAt = v36->fields.clearedAt;
      v39 = Time;
      Master_object = UserEventQuestCooltimeEntity__GetMasterEntity(v36, 0LL);
      if ( !Master_object )
        goto LABEL_107;
      if ( v39 < clearedAt + *((int *)Master_object + 7) )
        return 0;
    }
  }
  if ( !p_fields->qrs )
    return 0;
  Master_object = this->fields.cQuestReleaseListP;
  if ( !Master_object )
    goto LABEL_107;
  v40 = *((_DWORD *)Master_object + 6);
  v41 = *((_DWORD *)Master_object + 7) + 1;
  *((_DWORD *)Master_object + 6) = 0;
  *((_DWORD *)Master_object + 7) = v41;
  if ( v40 >= 1 )
  {
    System_Array__Clear(*((System_Array_o **)Master_object + 2), 0, v40, 0LL);
    Master_object = this->fields.cQuestReleaseListP;
    if ( !Master_object )
      goto LABEL_107;
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Master_object,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.qrs,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__);
  cQuestReleaseListP = this->fields.cQuestReleaseListP;
  Master_object = clsQuestCheck___c_TypeInfo;
  if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
    Master_object = clsQuestCheck___c_TypeInfo;
  }
  v43 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 16LL);
  if ( !v43 )
  {
    if ( !*((_DWORD *)Master_object + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = clsQuestCheck___c_TypeInfo;
    }
    v44 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
    v43 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_QuestReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(
      v43,
      v44,
      Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__,
      0LL);
    v45 = clsQuestCheck___c_TypeInfo->static_fields;
    v45->__9__5_1 = (struct System_Comparison_QuestReleaseEntity__o *)v43;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v45->__9__5_1, (int64_t)v43, v46, v47, v48, v49, v50, v51);
  }
  if ( !cQuestReleaseListP )
    goto LABEL_107;
  System_Collections_Generic_List_object___Sort_56953720(
    (System_Collections_Generic_List_object__o *)cQuestReleaseListP,
    v43,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  v52 = v82;
  if ( v82 )
  {
LABEL_82:
    v54 = !UserQuestEntity__HasStatus(v52, 8, 0LL);
    goto LABEL_83;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v53 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  Master_object = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = NetworkManager_TypeInfo;
  }
  if ( !v53 )
LABEL_107:
    sub_1C22094(Master_object, v14);
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)v53,
    &v82,
    *(_QWORD *)(*((_QWORD *)Master_object + 23) + 64LL),
    questId,
    0LL);
  v52 = v82;
  if ( v82 )
    goto LABEL_82;
  v54 = 1;
LABEL_83:
  Master_object = this->fields.cQuestReleaseListP;
  if ( !Master_object )
    goto LABEL_107;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v79,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v55 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v79,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v55 )
      break;
    current = v79.fields._current;
    if ( v54 )
      goto LABEL_89;
    if ( !v79.fields._current )
      sub_1C22094(v55, v56);
    if ( HIDWORD(v79.fields._current[1].klass) != 12 )
    {
LABEL_89:
      if ( !clsQuestCheck__IsQuestRelease_34630500(
              this,
              (QuestReleaseEntity_o *)v79.fields._current,
              -1,
              questInfo,
              v57) )
      {
        *questReleaseNG = (QuestReleaseEntity_o *)current;
        sub_1C21DDC((PartyOrganizationUtility_o *)questReleaseNG, (int64_t)current, v59, v60, v61, v62, v63, v64);
        v65 = 19;
        goto LABEL_92;
      }
    }
  }
  v65 = 20;
LABEL_92:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v79,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v65 != 19;
}


void __fastcall clsQuestCheck___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD8FFF & 1) == 0 )
  {
    sub_1C21E38(&clsQuestCheck___c_TypeInfo);
    byte_4BD8FFF = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(clsQuestCheck___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  clsQuestCheck___c_TypeInfo->static_fields->__9 = (struct clsQuestCheck___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)clsQuestCheck___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall clsQuestCheck___c___ctor(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_0(
        clsQuestCheck___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4BD9001 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_clsQuestCheck___c__DisplayClass41_1__CheckQuestPlayable_b__5__);
    sub_1C21E38(&clsQuestCheck___c__DisplayClass41_1_TypeInfo);
    byte_4BD9001 = 1;
  }
  v4 = sub_1C22084(clsQuestCheck___c__DisplayClass41_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_clsQuestCheck___c__DisplayClass41_1__CheckQuestPlayable_b__5__,
          0LL),
        !Instance) )
  {
    sub_1C22094(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_1(
        clsQuestCheck___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4BD9002 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_clsQuestCheck___c__DisplayClass41_2__CheckQuestPlayable_b__6__);
    sub_1C21E38(&clsQuestCheck___c__DisplayClass41_2_TypeInfo);
    byte_4BD9002 = 1;
  }
  v4 = sub_1C22084(clsQuestCheck___c__DisplayClass41_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_clsQuestCheck___c__DisplayClass41_2__CheckQuestPlayable_b__6__,
          0LL),
        !Instance) )
  {
    sub_1C22094(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_11(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BD9004 & 1) == 0 )
  {
    sub_1C21E38(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BD9004 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2F995DC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_13(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BD9005 & 1) == 0 )
  {
    sub_1C21E38(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BD9005 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2F995DC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_2(
        clsQuestCheck___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BD9006 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD9006 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_3(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BD9000 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BD9000 = 1;
  }
  TopLoginRequest__ResetAccesTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_4(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_7(
        clsQuestCheck___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4BD9003 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_clsQuestCheck___c__DisplayClass41_3__CheckQuestPlayable_b__8__);
    sub_1C21E38(&clsQuestCheck___c__DisplayClass41_3_TypeInfo);
    byte_4BD9003 = 1;
  }
  v4 = sub_1C22084(clsQuestCheck___c__DisplayClass41_3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_clsQuestCheck___c__DisplayClass41_3__CheckQuestPlayable_b__8__,
          0LL),
        !Instance) )
  {
    sub_1C22094(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0LL);
}


bool __fastcall clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_0(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C22094(this, 0LL);
  return n->fields.type == 118;
}


int32_t __fastcall clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_1(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *a,
        QuestReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C22094(this, a);
  return b->fields.imagePriority - a->fields.imagePriority;
}


void __fastcall clsQuestCheck___c__DisplayClass31_0___ctor(
        clsQuestCheck___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall clsQuestCheck___c__DisplayClass31_0___GetReleasedQuestEntityListByServantGet_b__0(
        clsQuestCheck___c__DisplayClass31_0_o *this,
        QuestEntity_o *n,
        const MethodInfo *method)
{
  struct QuestEntity_o *questEnt; // x8

  if ( !n || (questEnt = this->fields.questEnt) == 0LL )
    sub_1C22094(this, n);
  return n->fields.id == questEnt->fields.id;
}


void __fastcall clsQuestCheck___c__DisplayClass31_1___ctor(
        clsQuestCheck___c__DisplayClass31_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall clsQuestCheck___c__DisplayClass31_1___GetReleasedQuestEntityListByServantGet_b__1(
        clsQuestCheck___c__DisplayClass31_1_o *this,
        QuestEntity_o *n,
        const MethodInfo *method)
{
  struct QuestEntity_o *questEnt; // x8

  if ( !n || (questEnt = this->fields.questEnt) == 0LL )
    sub_1C22094(this, n);
  return n->fields.id == questEnt->fields.id;
}


void __fastcall clsQuestCheck___c__DisplayClass40_0___ctor(
        clsQuestCheck___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall clsQuestCheck___c__DisplayClass40_0___IsTapSkipQuestStart_b__0(
        clsQuestCheck___c__DisplayClass40_0_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_String__op_Equality(a, this->fields.effectName, 0LL);
}


void __fastcall clsQuestCheck___c__DisplayClass41_0___ctor(
        clsQuestCheck___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall clsQuestCheck___c__DisplayClass41_0___CheckQuestPlayable_b__10(
        clsQuestCheck___c__DisplayClass41_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( !this->fields.__4__this )
    sub_1C22094(this, result);
  clsQuestCheck__RecoverItemListDialogCallback(
    this->fields.__4__this,
    this->fields.questInfo,
    this->fields.srcEndTime,
    result,
    this->fields.boostId,
    v3);
}


void __fastcall clsQuestCheck___c__DisplayClass41_0___CheckQuestPlayable_b__12(
        clsQuestCheck___c__DisplayClass41_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( !this->fields.__4__this )
    sub_1C22094(this, result);
  clsQuestCheck__RecoverItemListDialogCallback(
    this->fields.__4__this,
    this->fields.questInfo,
    this->fields.srcEndTime,
    result,
    this->fields.boostId,
    v3);
}


void __fastcall clsQuestCheck___c__DisplayClass41_0___CheckQuestPlayable_b__9(
        clsQuestCheck___c__DisplayClass41_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( !this->fields.__4__this )
    sub_1C22094(this, result);
  clsQuestCheck__RecoverItemListDialogCallback(
    this->fields.__4__this,
    this->fields.questInfo,
    this->fields.srcEndTime,
    result,
    this->fields.boostId,
    v3);
}


void __fastcall clsQuestCheck___c__DisplayClass41_1___ctor(
        clsQuestCheck___c__DisplayClass41_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall clsQuestCheck___c__DisplayClass41_1___CheckQuestPlayable_b__5(
        clsQuestCheck___c__DisplayClass41_1_o *this,
        const MethodInfo *method)
{
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v5; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1
  Il2CppObject *v9; // x3

  if ( (byte_4BD9007 & 1) == 0 )
  {
    sub_1C21E38(&SceneJumpInfo_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&StringLiteral_12833/*"SellServant"*/);
    sub_1C21E38(&StringLiteral_12870/*"ServantCombine"*/);
    byte_4BD9007 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C22084(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39918344(v5, (System_String_o *)StringLiteral_12833/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1C22094(v6, v7);
    case 1:
      v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v6 )
      {
        v8 = 71;
        v9 = 0LL;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C22084(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39918256(v5, (System_String_o *)StringLiteral_12870/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v8 = 32;
LABEL_10:
        v6 = Instance;
        v9 = (Il2CppObject *)v5;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v6, v8, 1, v9, 0LL);
        return;
      }
      goto LABEL_15;
  }
}


void __fastcall clsQuestCheck___c__DisplayClass41_2___ctor(
        clsQuestCheck___c__DisplayClass41_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall clsQuestCheck___c__DisplayClass41_2___CheckQuestPlayable_b__6(
        clsQuestCheck___c__DisplayClass41_2_o *this,
        const MethodInfo *method)
{
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1

  if ( (byte_4BD9008 & 1) == 0 )
  {
    sub_1C21E38(&SceneJumpInfo_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&StringLiteral_12874/*"ServantEquipList"*/);
    sub_1C21E38(&StringLiteral_12833/*"SellServant"*/);
    sub_1C21E38(&StringLiteral_12873/*"ServantEQCombine"*/);
    byte_4BD9008 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C22084(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39918344(v5, (System_String_o *)StringLiteral_12833/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_12;
      }
LABEL_14:
      sub_1C22094(v6, v7);
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C22084(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39918256(v5, (System_String_o *)StringLiteral_12874/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v8 = 71;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C22084(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39918256(v5, (System_String_o *)StringLiteral_12873/*"ServantEQCombine"*/, 0LL);
      if ( Instance )
      {
        v8 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v8, 1, (Il2CppObject *)v5, 0LL);
        return;
      }
      goto LABEL_14;
  }
}


void __fastcall clsQuestCheck___c__DisplayClass41_3___ctor(
        clsQuestCheck___c__DisplayClass41_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall clsQuestCheck___c__DisplayClass41_3___CheckQuestPlayable_b__8(
        clsQuestCheck___c__DisplayClass41_3_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BD9009 & 1) == 0 )
  {
    sub_1C21E38(&SceneJumpInfo_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&StringLiteral_12833/*"SellServant"*/);
    byte_4BD9009 = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v4 = (SceneJumpInfo_o *)sub_1C22084(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_39918344(v4, (System_String_o *)StringLiteral_12833/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_1C22094(v5, v6);
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v4, 0LL);
  }
}