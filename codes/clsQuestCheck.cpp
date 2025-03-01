void __fastcall clsQuestCheck___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1

  if ( (byte_4BFA1E7 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_11133/*"QuestStartEffect"*/, v1);
    sub_1C2E12C(&clsQuestCheck_TypeInfo, v8);
    byte_4BFA1E7 = 1;
  }
  clsQuestCheck_TypeInfo->static_fields->KEY_QUEST_START_EFFECT = (struct System_String_o *)StringLiteral_11133/*"QuestStartEffect"*/;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)clsQuestCheck_TypeInfo->static_fields,
    StringLiteral_11133/*"QuestStartEffect"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall clsQuestCheck___ctor(clsQuestCheck_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  System_Collections_Generic_List_object__o *v12; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BFA1E6 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, method);
    sub_1C2E12C(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v3);
    sub_1C2E12C(&Method_SingletonTemplate_clsQuestCheck___ctor__, v4);
    byte_4BFA1E6 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v5;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.cQuestReleaseListP = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v12;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.cQuestReleaseListP,
    (int64_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_38A84A8 *)Method_SingletonTemplate_clsQuestCheck___ctor__);
}


bool __fastcall clsQuestCheck__CheckQuestPlayable(
        clsQuestCheck_o *this,
        MapControl_QuestInfo_o *questInfo,
        int64_t srcEndTime,
        int32_t boostId,
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
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x24
  void *SpotID; // x0
  MapControl_QuestInfo_o *v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  MapControl_QuestInfo_o **v58; // x19
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int32_t v65; // w28
  MapControl_QuestInfo_o *v66; // x8
  int32_t questId; // w23
  int32_t questPhase; // w29
  int32_t v69; // w20
  const MethodInfo *v70; // x3
  _BOOL4 isNotItemConsume; // w21
  int32_t v72; // w25
  UserGameEntity_o *v73; // x26
  QuestEntity_o *v74; // x27
  System_String_o *v75; // x19
  System_String_o *v76; // x20
  CommonUI_o *v77; // x21
  clsQuestCheck___c_c *v78; // x8
  System_Action_o *_9__41_3; // x22
  Il2CppObject *v80; // x23
  struct clsQuestCheck___c_StaticFields *static_fields; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  System_Action_o *v88; // x19
  clsQuestCheck_o *v89; // x0
  const MethodInfo *v90; // x2
  TerminalPramsManager_c *v91; // x0
  int32_t v92; // w22
  int64_t v93; // x28
  struct TerminalPramsManager_StaticFields *v94; // x8
  UserServantMaster_o *v95; // x28
  Il2CppObject *MasterData_object; // x29
  CommonUI_o *v97; // x19
  int32_t v98; // w20
  int32_t svtKeep; // w21
  ServantFrameShortDlgComponent_CallbackFunc_o *v100; // x22
  Il2CppObject *v101; // x23
  struct clsQuestCheck___c_StaticFields *v102; // x0
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  CommonUI_o *v109; // x0
  int32_t v110; // w1
  int32_t v111; // w2
  int32_t v112; // w3
  CommonUI_o *v113; // x19
  int32_t v114; // w20
  int32_t svtEquipKeep; // w21
  Il2CppObject *v116; // x23
  struct clsQuestCheck___c_StaticFields *v117; // x0
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  int32_t Count; // w19
  CommonUI_o *v125; // x20
  BalanceConfig_c *v126; // x8
  Il2CppObject *v127; // x23
  struct clsQuestCheck___c_StaticFields *v128; // x0
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  bool v135; // w25
  int32_t v137; // w29
  int32_t v138; // w28
  Il2CppObject *Instance; // x19
  RecoverDlgComponent_CallbackFunc_o *v140; // x20
  CommonUI_o *v141; // x0
  int32_t v142; // w1
  RecoverDlgComponent_CallbackFunc_o *v143; // x2
  bool v144; // w3
  Il2CppObject *v145; // x19
  RecoverDlgComponent_CallbackFunc_o *v146; // x20
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x24
  Il2CppObject *v148; // x25
  Il2CppObject *v149; // x27
  System_String_o *v150; // x20
  int32_t v151; // w29
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v153; // x8
  _DWORD *v154; // x26
  System_String_o **v155; // x28
  int32_t qp; // w8
  struct System_Int32_array *nums; // x9
  System_String_o *v158; // x0
  System_String_o *v159; // x0
  System_String_o *v160; // x19
  System_String_o *v161; // x0
  System_String_o *v162; // x19
  CommonUI_o *v163; // x20
  clsQuestCheck___c_c *v164; // x8
  System_String_o *v165; // x21
  System_Action_o *_9__41_10; // x22
  Il2CppObject *v167; // x23
  int64_t v168; // x2
  int32_t v169; // w3
  System_String_o *v170; // x4
  BattleSetupInfo_o *v171; // x5
  FollowerInfo_o *v172; // x6
  PartyListViewItem_o *v173; // x7
  struct clsQuestCheck___c_StaticFields *v174; // x0
  PartyOrganizationUtility_o *p__9__41_10; // x0
  Il2CppObject *v176; // x19
  RecoverDlgComponent_CallbackFunc_o *v177; // x20
  QuestConsumeItemEntity_o *v178; // x24
  Il2CppObject *v179; // x25
  Il2CppObject *v180; // x27
  System_String_o *v181; // x20
  int32_t v182; // w29
  struct System_Int32_array *v183; // x8
  struct System_Int32_array *v184; // x8
  _DWORD *v185; // x26
  System_String_o **v186; // x28
  int32_t v187; // w8
  struct System_Int32_array *v188; // x9
  Il2CppObject *Entity; // x0
  __int64 v190; // x1
  TerminalPramsManager_c *v191; // x0
  int v192; // w8
  TerminalPramsManager_c *v193; // x0
  __int64 v194; // x1
  int32_t VaildPayType; // w21
  TerminalPramsManager_c *v196; // x0
  MapControl_QuestInfo_o *v197; // x8
  QuestMessageMaster_o *v198; // x19
  int32_t v199; // w2
  System_String_o *ValidMessage; // x0
  System_String_o *v201; // x19
  Il2CppObject *v202; // x20
  System_String_o *v203; // x21
  System_String_o *v204; // x22
  clsQuestCheck___c_c *v205; // x8
  CommonConfirmDialog_ClickDelegate_o *_9__41_2; // x24
  System_String_o *v207; // x23
  Il2CppObject *v208; // x25
  struct clsQuestCheck___c_StaticFields *v209; // x0
  int64_t v210; // x2
  int32_t v211; // w3
  System_String_o *v212; // x4
  BattleSetupInfo_o *v213; // x5
  FollowerInfo_o *v214; // x6
  PartyListViewItem_o *v215; // x7
  System_String_o *v216; // x0
  System_String_o *v217; // x0
  System_String_o *v218; // x19
  System_String_o *v219; // x0
  clsQuestCheck___c_c *v220; // x8
  Il2CppObject *v221; // x23
  struct clsQuestCheck___c_StaticFields *v222; // x0
  char v223; // [xsp+3Ch] [xbp-84h]
  char v224; // [xsp+3Ch] [xbp-84h]
  UserGameEntity_o *SelfUserGame; // [xsp+40h] [xbp-80h]
  UserGameEntity_o *v226; // [xsp+40h] [xbp-80h]
  int32_t v227; // [xsp+4Ch] [xbp-74h]
  int32_t key; // [xsp+50h] [xbp-70h]
  int32_t servantEquipSum[2]; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4BFA1E0 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, questInfo);
    sub_1C2E12C(&RecoverDlgComponent_CallbackFunc_TypeInfo, v9);
    sub_1C2E12C(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, v10);
    sub_1C2E12C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11);
    sub_1C2E12C(&Method_DataManager_GetMasterData_GachaMaster___, v12);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ItemMaster___, v13);
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestMessageMaster___, v14);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v15);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserItemMaster___, v16);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserServantMaster___, v17);
    sub_1C2E12C(&Method_DataManager_GetMasterData_WarMaster___, v18);
    sub_1C2E12C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v19);
    sub_1C2E12C(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v20);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v21);
    sub_1C2E12C(&NetworkManager_TypeInfo, v22);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v25);
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v26);
    sub_1C2E12C(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_0__, v27);
    sub_1C2E12C(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_10__, v28);
    sub_1C2E12C(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_12__, v29);
    sub_1C2E12C(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_1__, v30);
    sub_1C2E12C(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_2__, v31);
    sub_1C2E12C(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_3__, v32);
    sub_1C2E12C(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_6__, v33);
    sub_1C2E12C(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__11__, v34);
    sub_1C2E12C(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__8__, v35);
    sub_1C2E12C(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__9__, v36);
    sub_1C2E12C(&clsQuestCheck___c__DisplayClass41_0_TypeInfo, v37);
    sub_1C2E12C(&clsQuestCheck___c_TypeInfo, v38);
    sub_1C2E12C(&StringLiteral_43/*"\n"*/, v39);
    sub_1C2E12C(&StringLiteral_11090/*"QUEST_MESSAGE_DLG_DECIDE"*/, v40);
    sub_1C2E12C(&StringLiteral_11089/*"QUEST_MESSAGE_DLG_CANCEL"*/, v41);
    sub_1C2E12C(&StringLiteral_11088/*"QUEST_ITEM_COST_OVER"*/, v42);
    sub_1C2E12C(&StringLiteral_12351/*"SHORT_DLG_TITLE"*/, v43);
    sub_1C2E12C(&StringLiteral_44/*"\n\n"*/, v44);
    sub_1C2E12C(&StringLiteral_3004/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, v45);
    sub_1C2E12C(&StringLiteral_1/*""*/, v46);
    sub_1C2E12C(&StringLiteral_11030/*"QUEST_AP_MAX_OVER"*/, v47);
    sub_1C2E12C(&Method_clsQuestCheck_RefreshTerminalScene__, v48);
    byte_4BFA1E0 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  v49 = sub_1C2E378(clsQuestCheck___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v49, 0LL);
  if ( !v49 )
    goto LABEL_232;
  *(_QWORD *)(v49 + 16) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v49 + 16), (int64_t)this, v52, v53, v54, v55, v56, v57);
  *(_QWORD *)(v49 + 24) = questInfo;
  v58 = (MapControl_QuestInfo_o **)(v49 + 24);
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v49 + 24), (int64_t)questInfo, v59, v60, v61, v62, v63, v64);
  SpotID = *(void **)(v49 + 24);
  *(_QWORD *)(v49 + 32) = srcEndTime;
  *(_DWORD *)(v49 + 40) = boostId;
  if ( !SpotID )
    goto LABEL_232;
  v65 = *((_DWORD *)SpotID + 16);
  SpotID = (void *)MapControl_QuestInfo__GetSpotID((MapControl_QuestInfo_o *)SpotID, 0LL);
  v66 = *v58;
  if ( !*v58 )
    goto LABEL_232;
  questId = v66->fields.questId;
  questPhase = v66->fields.questPhase;
  v69 = (int)SpotID;
  SpotID = (void *)MapControl_QuestInfo__GetActConsumeCost(*v58, 0LL);
  v51 = *v58;
  if ( !*v58 )
    goto LABEL_232;
  isNotItemConsume = v51->fields.isNotItemConsume;
  v72 = (int)SpotID;
  if ( !clsQuestCheck__IsQuestValid(this, v51, *(_QWORD *)(v49 + 32), v70) )
  {
    v88 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(v88, (Il2CppObject *)this, Method_clsQuestCheck_RefreshTerminalScene__, 0LL);
    clsQuestCheck__OpenQuestTimeOverNoticeDialog(v89, v88, v90);
    goto LABEL_74;
  }
  SpotID = UserGameMaster__getSelfUserGame(0LL);
  if ( !*v58 )
    goto LABEL_232;
  v73 = (UserGameEntity_o *)SpotID;
  SpotID = MapControl_QuestInfo__GetMine(*v58, 0LL);
  if ( !SpotID )
    goto LABEL_232;
  v74 = (QuestEntity_o *)SpotID;
  SpotID = (void *)QuestEntity__GetConsumeType((QuestEntity_o *)SpotID, 0LL);
  if ( (_DWORD)SpotID == 1 )
  {
    if ( !v73 )
      goto LABEL_232;
    if ( v72 > v73->fields.actMax )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v75 = LocalizationManager__Get((System_String_o *)StringLiteral_12351/*"SHORT_DLG_TITLE"*/, 0LL);
      v76 = LocalizationManager__Get((System_String_o *)StringLiteral_11030/*"QUEST_AP_MAX_OVER"*/, 0LL);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v77 = (CommonUI_o *)SpotID;
      v78 = clsQuestCheck___c_TypeInfo;
      if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
        v78 = clsQuestCheck___c_TypeInfo;
      }
      _9__41_3 = v78->static_fields->__9__41_3;
      if ( !_9__41_3 )
      {
        if ( !v78->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v78);
          v78 = clsQuestCheck___c_TypeInfo;
        }
        v80 = (Il2CppObject *)v78->static_fields->__9;
        _9__41_3 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
        System_Action___ctor(_9__41_3, v80, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_3__, 0LL);
        static_fields = clsQuestCheck___c_TypeInfo->static_fields;
        static_fields->__9__41_3 = _9__41_3;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&static_fields->__9__41_3,
          (int64_t)_9__41_3,
          v82,
          v83,
          v84,
          v85,
          v86,
          v87);
      }
      if ( !v77 )
        goto LABEL_232;
      CommonUI__OpenNotificationDialog(v77, v75, v76, _9__41_3, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
      goto LABEL_74;
    }
  }
  v227 = v69;
  key = v65;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BFA282 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v51);
    byte_4BFA282 = 1;
  }
  v91 = TerminalPramsManager_TypeInfo;
  v92 = questPhase;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v91 = TerminalPramsManager_TypeInfo;
  }
  v91->static_fields->_QuestId_k__BackingField = questId;
  v93 = *(_QWORD *)(v49 + 32);
  if ( !byte_4BFA283 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v51);
    v91 = TerminalPramsManager_TypeInfo;
    byte_4BFA283 = 1;
  }
  if ( !v91->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v91);
    v91 = TerminalPramsManager_TypeInfo;
  }
  v94 = v91->static_fields;
  v94->_EndTime_k__BackingField = v93;
  v94->lastPlayQuestConsumeAp = v72;
  TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(0LL);
  SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_232;
  SpotID = DataManager__GetMasterData_object_(
             (DataManager_o *)SpotID,
             (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SpotID )
    goto LABEL_232;
  v95 = (UserServantMaster_o *)SpotID;
  UserServantMaster__getCount((UserServantMaster_o *)SpotID, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_232;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)SpotID,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v95, 1, 0LL) )
  {
    SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v73 )
      goto LABEL_232;
    v97 = (CommonUI_o *)SpotID;
    v98 = servantEquipSum[1];
    svtKeep = v73->fields.svtKeep;
    SpotID = clsQuestCheck___c_TypeInfo;
    if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
      SpotID = clsQuestCheck___c_TypeInfo;
    }
    v100 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)SpotID + 23) + 32LL);
    if ( !v100 )
    {
      if ( !*((_DWORD *)SpotID + 56) )
      {
        j_il2cpp_runtime_class_init_0(SpotID);
        SpotID = clsQuestCheck___c_TypeInfo;
      }
      v101 = (Il2CppObject *)**((_QWORD **)SpotID + 23);
      v100 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C2E378(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v100,
        v101,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__41_0__,
        0LL);
      v102 = clsQuestCheck___c_TypeInfo->static_fields;
      v102->__9__41_0 = v100;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v102->__9__41_0, (int64_t)v100, v103, v104, v105, v106, v107, v108);
    }
    if ( !v97 )
      goto LABEL_232;
    v109 = v97;
    v110 = v98;
    v111 = svtKeep;
    v112 = 0;
    goto LABEL_73;
  }
  SpotID = (void *)UserServantMaster__CheckEquipAdd(v95, 1, 1, 0LL);
  if ( ((unsigned __int8)SpotID & 1) != 0 )
  {
    SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v73 )
      goto LABEL_232;
    v113 = (CommonUI_o *)SpotID;
    v114 = servantEquipSum[0];
    svtEquipKeep = v73->fields.svtEquipKeep;
    SpotID = clsQuestCheck___c_TypeInfo;
    if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
      SpotID = clsQuestCheck___c_TypeInfo;
    }
    v100 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)SpotID + 23) + 40LL);
    if ( !v100 )
    {
      if ( !*((_DWORD *)SpotID + 56) )
      {
        j_il2cpp_runtime_class_init_0(SpotID);
        SpotID = clsQuestCheck___c_TypeInfo;
      }
      v116 = (Il2CppObject *)**((_QWORD **)SpotID + 23);
      v100 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C2E378(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v100,
        v116,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__41_1__,
        0LL);
      v117 = clsQuestCheck___c_TypeInfo->static_fields;
      v117->__9__41_1 = v100;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v117->__9__41_1, (int64_t)v100, v118, v119, v120, v121, v122, v123);
    }
    if ( !v113 )
      goto LABEL_232;
    v112 = 1;
    v109 = v113;
    v110 = v114;
LABEL_72:
    v111 = svtEquipKeep;
LABEL_73:
    CommonUI__OpenSvtFrameShortDlg(v109, v110, v111, v112, 1, v100, 0, 0LL);
LABEL_74:
    SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( SpotID )
    {
      ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)SpotID, 0LL);
      return 0;
    }
    goto LABEL_232;
  }
  if ( !MasterData_object )
    goto LABEL_232;
  if ( UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)MasterData_object, 0, 0LL) )
  {
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)MasterData_object, 0LL);
    SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v73 )
      goto LABEL_232;
    v125 = (CommonUI_o *)SpotID;
    if ( !byte_4BF86F4 )
    {
      sub_1C2E12C(&BalanceConfig_TypeInfo, v51);
      byte_4BF86F4 = 1;
    }
    v126 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v126 = BalanceConfig_TypeInfo;
    }
    SpotID = clsQuestCheck___c_TypeInfo;
    svtEquipKeep = v126->static_fields->CommandCodeFrameMax;
    if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
      SpotID = clsQuestCheck___c_TypeInfo;
    }
    v100 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)SpotID + 23) + 48LL);
    if ( !v100 )
    {
      if ( !*((_DWORD *)SpotID + 56) )
      {
        j_il2cpp_runtime_class_init_0(SpotID);
        SpotID = clsQuestCheck___c_TypeInfo;
      }
      v127 = (Il2CppObject *)**((_QWORD **)SpotID + 23);
      v100 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C2E378(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v100,
        v127,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__41_6__,
        0LL);
      v128 = clsQuestCheck___c_TypeInfo->static_fields;
      v128->__9__41_6 = v100;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v128->__9__41_6, (int64_t)v100, v129, v130, v131, v132, v133, v134);
    }
    if ( !v125 )
      goto LABEL_232;
    v112 = 2;
    v109 = v125;
    v110 = Count;
    goto LABEL_72;
  }
  SpotID = (void *)QuestEntity__GetConsumeType(v74, 0LL);
  v137 = v69;
  v138 = v92;
  switch ( (int)SpotID )
  {
    case 1:
      if ( !v73 )
        goto LABEL_232;
      if ( v72 <= UserGameEntity__getAct(v73, 0LL) )
        goto LABEL_162;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v140 = (RecoverDlgComponent_CallbackFunc_o *)sub_1C2E378(RecoverDlgComponent_CallbackFunc_TypeInfo);
      RecoverDlgComponent_CallbackFunc___ctor(
        v140,
        (Il2CppObject *)v49,
        Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__8__,
        0LL);
      if ( !Instance )
        goto LABEL_232;
      v141 = (CommonUI_o *)Instance;
      v142 = v72;
      v143 = v140;
      v144 = 0;
      goto LABEL_130;
    case 2:
      if ( !v73 )
        goto LABEL_232;
      if ( v72 <= UserGameEntity__getRp(v73, 0LL) )
        goto LABEL_162;
      v145 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v146 = (RecoverDlgComponent_CallbackFunc_o *)sub_1C2E378(RecoverDlgComponent_CallbackFunc_TypeInfo);
      RecoverDlgComponent_CallbackFunc___ctor(
        v146,
        (Il2CppObject *)v49,
        Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__9__,
        0LL);
      if ( !v145 )
        goto LABEL_232;
      CommonUI__OpenRpRecoverItemListDialog((CommonUI_o *)v145, v72, v146, 0, 0LL);
      return 0;
    case 3:
      ItemConsumeEntity = QuestEntity__getItemConsumeEntity(v74, isNotItemConsume, 0LL);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      v148 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserItemMaster___);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      v149 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ItemMaster___);
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      if ( !ItemConsumeEntity )
        goto LABEL_162;
      v150 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL) )
        goto LABEL_162;
      v223 = 0;
      v151 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4BF81D5 )
        {
          sub_1C2E12C(&NetworkManager_TypeInfo, v51);
          byte_4BF81D5 = 1;
        }
        SpotID = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          SpotID = NetworkManager_TypeInfo;
        }
        itemIds = ItemConsumeEntity->fields.itemIds;
        if ( !itemIds )
          goto LABEL_232;
        if ( v151 >= itemIds->max_length )
          goto LABEL_233;
        if ( !v148 )
          goto LABEL_232;
        SpotID = UserItemMaster__GetEntity(
                   (UserItemMaster_o *)v148,
                   *(_QWORD *)(*((_QWORD *)SpotID + 23) + 64LL),
                   itemIds->m_Items[v151 + 1],
                   0LL);
        v153 = ItemConsumeEntity->fields.itemIds;
        if ( !v153 )
          goto LABEL_232;
        if ( v151 >= v153->max_length )
          goto LABEL_233;
        if ( !v149 )
          goto LABEL_232;
        v154 = SpotID;
        SpotID = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)v149,
                   v153->m_Items[v151 + 1],
                   (const MethodInfo_327B180 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !SpotID )
          goto LABEL_232;
        v155 = (System_String_o **)SpotID;
        if ( *((_DWORD *)SpotID + 12) == 1 )
        {
          if ( !SelfUserGame )
            goto LABEL_232;
          qp = SelfUserGame->fields.qp;
        }
        else if ( v154
               && (SpotID = (void *)ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0LL), ((unsigned __int8)SpotID & 1) != 0) )
        {
          qp = v154[7];
        }
        else
        {
          qp = 0;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_232;
        if ( v151 >= nums->max_length )
          goto LABEL_233;
        if ( nums->m_Items[v151 + 1] > qp )
        {
          v150 = System_String__Concat_63246844(v150, (System_String_o *)StringLiteral_43/*"\n"*/, v155[3], 0LL);
          v223 = 1;
        }
        ++v151;
      }
      while ( QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, v151, 0LL) );
      v138 = v92;
      v137 = v227;
      if ( (v223 & 1) == 0 )
        goto LABEL_162;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v158 = LocalizationManager__Get((System_String_o *)StringLiteral_11088/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v159 = System_String__Format(v158, (Il2CppObject *)v150, 0LL);
      v160 = System_String__Concat_63235584(v159, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
      v161 = LocalizationManager__Get((System_String_o *)StringLiteral_3004/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v162 = System_String__Concat_63235584(v160, v161, 0LL);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v163 = (CommonUI_o *)SpotID;
      v164 = clsQuestCheck___c_TypeInfo;
      if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
        v164 = clsQuestCheck___c_TypeInfo;
      }
      v165 = (System_String_o *)StringLiteral_1/*""*/;
      _9__41_10 = v164->static_fields->__9__41_10;
      if ( _9__41_10 )
        goto LABEL_230;
      if ( !v164->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v164);
        v164 = clsQuestCheck___c_TypeInfo;
      }
      v167 = (Il2CppObject *)v164->static_fields->__9;
      _9__41_10 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      System_Action___ctor(_9__41_10, v167, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_10__, 0LL);
      v174 = clsQuestCheck___c_TypeInfo->static_fields;
      v174->__9__41_10 = _9__41_10;
      p__9__41_10 = (PartyOrganizationUtility_o *)&v174->__9__41_10;
      goto LABEL_229;
    case 4:
      if ( !v73 )
        goto LABEL_232;
      if ( v72 > UserGameEntity__getAct(v73, 0LL) )
      {
        v176 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v177 = (RecoverDlgComponent_CallbackFunc_o *)sub_1C2E378(RecoverDlgComponent_CallbackFunc_TypeInfo);
        RecoverDlgComponent_CallbackFunc___ctor(
          v177,
          (Il2CppObject *)v49,
          Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__11__,
          0LL);
        if ( v176 )
        {
          v144 = 1;
          v141 = (CommonUI_o *)v176;
          v142 = v72;
          v143 = v177;
LABEL_130:
          CommonUI__OpenApRecoverItemListDialog(v141, v142, v143, v144, 0LL);
          return 0;
        }
LABEL_232:
        sub_1C2E388(SpotID, v51);
      }
      v178 = QuestEntity__getItemConsumeEntity(v74, isNotItemConsume, 0LL);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      v179 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserItemMaster___);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      v180 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ItemMaster___);
      v226 = UserGameMaster__getSelfUserGame(0LL);
      if ( v178 )
      {
        v181 = (System_String_o *)StringLiteral_1/*""*/;
        if ( QuestConsumeItemEntity__IsAvailableAt(v178, 0, 0LL) )
        {
          v224 = 0;
          v182 = 0;
          do
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4BF81D5 )
            {
              sub_1C2E12C(&NetworkManager_TypeInfo, v51);
              byte_4BF81D5 = 1;
            }
            SpotID = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              SpotID = NetworkManager_TypeInfo;
            }
            v183 = v178->fields.itemIds;
            if ( !v183 )
              goto LABEL_232;
            if ( v182 >= v183->max_length )
              goto LABEL_233;
            if ( !v179 )
              goto LABEL_232;
            SpotID = UserItemMaster__GetEntity(
                       (UserItemMaster_o *)v179,
                       *(_QWORD *)(*((_QWORD *)SpotID + 23) + 64LL),
                       v183->m_Items[v182 + 1],
                       0LL);
            v184 = v178->fields.itemIds;
            if ( !v184 )
              goto LABEL_232;
            if ( v182 >= v184->max_length )
              goto LABEL_233;
            if ( !v180 )
              goto LABEL_232;
            v185 = SpotID;
            SpotID = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v180,
                       v184->m_Items[v182 + 1],
                       (const MethodInfo_327B180 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( !SpotID )
              goto LABEL_232;
            v186 = (System_String_o **)SpotID;
            if ( *((_DWORD *)SpotID + 12) == 1 )
            {
              if ( !v226 )
                goto LABEL_232;
              v187 = v226->fields.qp;
            }
            else if ( v185
                   && (SpotID = (void *)ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0LL),
                       ((unsigned __int8)SpotID & 1) != 0) )
            {
              v187 = v185[7];
            }
            else
            {
              v187 = 0;
            }
            v188 = v178->fields.nums;
            if ( !v188 )
              goto LABEL_232;
            if ( v182 >= v188->max_length )
LABEL_233:
              sub_1C2E390(SpotID, v51);
            if ( v188->m_Items[v182 + 1] > v187 )
            {
              v181 = System_String__Concat_63246844(v181, (System_String_o *)StringLiteral_43/*"\n"*/, v186[3], 0LL);
              v224 = 1;
            }
            ++v182;
          }
          while ( QuestConsumeItemEntity__IsAvailableAt(v178, v182, 0LL) );
          v138 = v92;
          v137 = v227;
          if ( (v224 & 1) != 0 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v216 = LocalizationManager__Get((System_String_o *)StringLiteral_11088/*"QUEST_ITEM_COST_OVER"*/, 0LL);
            v217 = System_String__Format(v216, (Il2CppObject *)v181, 0LL);
            v218 = System_String__Concat_63235584(v217, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
            v219 = LocalizationManager__Get((System_String_o *)StringLiteral_3004/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
            v162 = System_String__Concat_63235584(v218, v219, 0LL);
            SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v163 = (CommonUI_o *)SpotID;
            v220 = clsQuestCheck___c_TypeInfo;
            if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
              v220 = clsQuestCheck___c_TypeInfo;
            }
            v165 = (System_String_o *)StringLiteral_1/*""*/;
            _9__41_10 = v220->static_fields->__9__41_12;
            if ( !_9__41_10 )
            {
              if ( !v220->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v220);
                v220 = clsQuestCheck___c_TypeInfo;
              }
              v221 = (Il2CppObject *)v220->static_fields->__9;
              _9__41_10 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
              System_Action___ctor(_9__41_10, v221, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_12__, 0LL);
              v222 = clsQuestCheck___c_TypeInfo->static_fields;
              v222->__9__41_12 = _9__41_10;
              p__9__41_10 = (PartyOrganizationUtility_o *)&v222->__9__41_12;
LABEL_229:
              sub_1C2E0D0(p__9__41_10, (int64_t)_9__41_10, v168, v169, v170, v171, v172, v173);
            }
LABEL_230:
            if ( !v163 )
              goto LABEL_232;
            CommonUI__OpenNotificationDialog(v163, v165, v162, _9__41_10, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
            goto LABEL_74;
          }
        }
      }
LABEL_162:
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      SpotID = DataManager__GetMasterData_object_(
                 (DataManager_o *)SpotID,
                 (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !SpotID )
        goto LABEL_232;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)SpotID,
                 key,
                 (const MethodInfo_327B180 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( Entity && WarEntity__IsFolder((WarEntity_o *)Entity, 0LL) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BFA284 )
        {
          sub_1C2E12C(&TerminalPramsManager_TypeInfo, v190);
          byte_4BFA284 = 1;
        }
        v191 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v191 = TerminalPramsManager_TypeInfo;
        }
        v192 = 3;
      }
      else
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BFA284 )
        {
          sub_1C2E12C(&TerminalPramsManager_TypeInfo, v190);
          byte_4BFA284 = 1;
        }
        v191 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v191 = TerminalPramsManager_TypeInfo;
        }
        v192 = 2;
      }
      v191->static_fields->_DispState_k__BackingField = v192;
      if ( !v191->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v191);
      if ( !byte_4BFA285 )
      {
        sub_1C2E12C(&TerminalPramsManager_TypeInfo, v190);
        byte_4BFA285 = 1;
      }
      v193 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v193 = TerminalPramsManager_TypeInfo;
      }
      v193->static_fields->_IsDoneShortcut_k__BackingField = 0;
      if ( !byte_4BFA286 )
      {
        sub_1C2E12C(&TerminalPramsManager_TypeInfo, v190);
        v193 = TerminalPramsManager_TypeInfo;
        byte_4BFA286 = 1;
      }
      if ( !v193->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v193);
        v193 = TerminalPramsManager_TypeInfo;
      }
      v193->static_fields->_PhaseCnt_k__BackingField = v138;
      if ( !byte_4BFA287 )
      {
        sub_1C2E12C(&TerminalPramsManager_TypeInfo, v190);
        v193 = TerminalPramsManager_TypeInfo;
        byte_4BFA287 = 1;
      }
      if ( !v193->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v193);
        v193 = TerminalPramsManager_TypeInfo;
      }
      v193->static_fields->_SpotId_k__BackingField = v137;
      if ( !byte_4BFA288 )
      {
        sub_1C2E12C(&TerminalPramsManager_TypeInfo, v190);
        v193 = TerminalPramsManager_TypeInfo;
        byte_4BFA288 = 1;
      }
      if ( !v193->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v193);
        v193 = TerminalPramsManager_TypeInfo;
      }
      v193->static_fields->_WarId_k__BackingField = key;
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      SpotID = DataManager__GetMasterData_object_(
                 (DataManager_o *)SpotID,
                 (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_GachaMaster___);
      if ( !SpotID )
        goto LABEL_232;
      VaildPayType = GachaMaster__getVaildPayType((GachaMaster_o *)SpotID, 0LL);
      if ( !byte_4BF9E26 )
      {
        sub_1C2E12C(&TerminalPramsManager_TypeInfo, v194);
        byte_4BF9E26 = 1;
      }
      v196 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v196 = TerminalPramsManager_TypeInfo;
      }
      v196->static_fields->_SummonType_k__BackingField = VaildPayType;
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      SpotID = DataManager__GetMasterData_object_(
                 (DataManager_o *)SpotID,
                 (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestMessageMaster___);
      v197 = *v58;
      if ( !*v58 )
        goto LABEL_232;
      v198 = (QuestMessageMaster_o *)SpotID;
      SpotID = (void *)MapControl_QuestInfo__GetPhaseMax(v197, 0LL);
      if ( !v198 )
        goto LABEL_232;
      if ( v138 + 1 >= (int)SpotID )
        v199 = (int)SpotID;
      else
        v199 = v138 + 1;
      v135 = 1;
      ValidMessage = QuestMessageMaster__GetValidMessage(v198, questId, v199, 1, 0LL);
      if ( ValidMessage )
      {
        v201 = ValidMessage;
        v202 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v203 = LocalizationManager__Get((System_String_o *)StringLiteral_11090/*"QUEST_MESSAGE_DLG_DECIDE"*/, 0LL);
        SpotID = LocalizationManager__Get((System_String_o *)StringLiteral_11089/*"QUEST_MESSAGE_DLG_CANCEL"*/, 0LL);
        v204 = (System_String_o *)SpotID;
        v205 = clsQuestCheck___c_TypeInfo;
        if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
          v205 = clsQuestCheck___c_TypeInfo;
        }
        _9__41_2 = v205->static_fields->__9__41_2;
        v207 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !_9__41_2 )
        {
          if ( !v205->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v205);
            v205 = clsQuestCheck___c_TypeInfo;
          }
          v208 = (Il2CppObject *)v205->static_fields->__9;
          _9__41_2 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2E378(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            _9__41_2,
            v208,
            Method_clsQuestCheck___c__CheckQuestPlayable_b__41_2__,
            0LL);
          v209 = clsQuestCheck___c_TypeInfo->static_fields;
          v209->__9__41_2 = _9__41_2;
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&v209->__9__41_2,
            (int64_t)_9__41_2,
            v210,
            v211,
            v212,
            v213,
            v214,
            v215);
        }
        if ( v202 )
        {
          v135 = 1;
          CommonUI__OpenConfirmDialog_31176852((CommonUI_o *)v202, v207, v201, v203, v204, _9__41_2, 0, 1, 0, 0LL);
          return v135;
        }
        goto LABEL_232;
      }
      return v135;
    default:
      goto LABEL_162;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__CheckQuestPlayableNow(clsQuestCheck_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Master_object; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x0
  bool v12; // w0
  const MethodInfo *v13; // x2
  bool IsOpenByTime; // w8
  Il2CppObject *v16; // [xsp+8h] [xbp-48h] BYREF
  UserQuestEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4BFA1C3 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_QuestMaster___, *(_QWORD *)&questId);
    sub_1C2E12C(&Method_DataManager_GetMaster_UserQuestMaster___, v5);
    sub_1C2E12C(&DataManager_TypeInfo, v6);
    sub_1C2E12C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v7);
    sub_1C2E12C(&NetworkManager_TypeInfo, v8);
    byte_4BFA1C3 = 1;
  }
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, method) )
    return 0;
  entity = 0LL;
  v16 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BF81D5 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, v9);
    byte_4BF81D5 = 1;
  }
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_26;
  if ( UserQuestMaster__TryGetEntity(
         (UserQuestMaster_o *)Master_object,
         &entity,
         (int64_t)v11[2].fields.list[1].monitor,
         questId,
         0LL) )
  {
    v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_26;
    if ( UserQuestEntity__IsNotExpired(entity, 0LL) )
      return 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !v11 )
LABEL_26:
    sub_1C2E388(v11, v9);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v11,
          &v16,
          questId,
          (const MethodInfo_327B1CC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)v16;
  if ( !v16 )
    goto LABEL_26;
  IsOpenByTime = QuestEntity__IsOpenByTime((QuestEntity_o *)v16, 0, 0LL);
  v12 = 0;
  if ( IsOpenByTime )
    return clsQuestCheck__IsReleasedQuest(this, questId, v13);
  return v12;
}


void __fastcall clsQuestCheck__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  clsQuestCheck_c *v3; // x0
  System_String_o *KEY_QUEST_START_EFFECT; // x19

  if ( (byte_4BFA1C0 & 1) == 0 )
  {
    sub_1C2E12C(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_1C2E12C(&clsQuestCheck_TypeInfo, v2);
    byte_4BFA1C0 = 1;
  }
  v3 = clsQuestCheck_TypeInfo;
  if ( !clsQuestCheck_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
    v3 = clsQuestCheck_TypeInfo;
  }
  KEY_QUEST_START_EFFECT = v3->static_fields->KEY_QUEST_START_EFFECT;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__DeleteKey(KEY_QUEST_START_EFFECT, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall clsQuestCheck__GetBeforeClearQuestId(
        clsQuestCheck_o *this,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  bool v8; // w8
  int32_t result; // w0
  __int64 v10; // x1
  TerminalPramsManager_c *v11; // x0

  if ( (byte_4BFA1D3 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, is_quest_after_action);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v5);
    byte_4BFA1D3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v8 = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0LL);
  result = -1;
  if ( !v8 || !is_quest_after_action )
    return result;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
LABEL_17:
    sub_1C2E388(Instance, v7);
  if ( !QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0LL) )
    return -1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BF8444 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v10);
    byte_4BF8444 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  return v11->static_fields->_QuestId_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall clsQuestCheck__GetEventQuestIdListPlayable(
        clsQuestCheck_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x20
  System_Int32_array *Master_object; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  __int64 v15; // x8
  System_Int32_array *v16; // x21
  unsigned __int64 v17; // x23
  int32_t v18; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10

  if ( (byte_4BFA1DC & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_QuestGroupMaster___, *(_QWORD *)&eventId);
    sub_1C2E12C(&DataManager_TypeInfo, v5);
    sub_1C2E12C(&int___TypeInfo, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4BFA1DC = 1;
  }
  if ( eventId <= 0 )
    return (System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 0LL);
  v11 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Master_object )
    goto LABEL_21;
  Master_object = QuestGroupMaster__GetQuestIdListByEventId((QuestGroupMaster_o *)Master_object, eventId, 0LL);
  if ( !Master_object )
    goto LABEL_21;
  v15 = *(_QWORD *)&Master_object->max_length;
  v16 = Master_object;
  if ( (int)v15 >= 1 )
  {
    v17 = 0LL;
    do
    {
      if ( v17 >= (unsigned int)v15 )
        sub_1C2E390(Master_object, v13);
      v18 = v16->m_Items[v17 + 1];
      Master_object = (System_Int32_array *)clsQuestCheck__CheckQuestPlayableNow(this, v18, v14);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v11 )
          goto LABEL_21;
        items = v11->fields._items;
        v20 = Method_System_Collections_Generic_List_int__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v11,
            v18,
            *(const MethodInfo_364E888 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v11->fields._size = size + 1;
          items->m_Items[size + 1] = v18;
        }
      }
      LODWORD(v15) = v16->max_length;
    }
    while ( (__int64)++v17 < (int)v15 );
  }
  if ( !v11 )
LABEL_21:
    sub_1C2E388(Master_object, v13);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_3650340 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall clsQuestCheck__GetNewPlayableEventQuestId(
        clsQuestCheck_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  TerminalPramsManager_c *v12; // x0
  __int64 v13; // x1
  TerminalPramsManager_c *v14; // x0
  System_String_o *ClearEventQuestIds_k__BackingField; // x0
  System_String_array *v16; // x21
  System_Converter_object__int__o *v17; // x22
  const MethodInfo *v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Int32_array *v34; // x19
  PartyOrganizationUtility_c *v35; // x20
  TerminalPramsManager_c *v36; // x0
  PartyOrganizationUtility_o *v37; // x0
  PartyOrganizationUtility_c *v39; // x19
  TerminalPramsManager_c *v40; // x0
  PartyOrganizationUtility_o *p_ClearEventQuestIds_k__BackingField; // x0

  if ( (byte_4BFA1DB & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Array_ConvertAll_string__int___, *(_QWORD *)&eventId);
    sub_1C2E12C(&System_Converter_string__int__TypeInfo, v5);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Except_int___, v6);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1C2E12C(&int___TypeInfo, v8);
    sub_1C2E12C(&Method_System_Int32_Parse__, v9);
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v10);
    sub_1C2E12C(&StringLiteral_1/*""*/, v11);
    byte_4BFA1DB = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BFA280 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4BFA280 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  if ( System_String__IsNullOrEmpty(v12->static_fields->_ClearEventQuestIds_k__BackingField, 0LL) )
    return (System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BFA280 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v13);
    byte_4BFA280 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  ClearEventQuestIds_k__BackingField = v14->static_fields->_ClearEventQuestIds_k__BackingField;
  if ( !ClearEventQuestIds_k__BackingField
    || (v16 = System_String__Split(ClearEventQuestIds_k__BackingField, 0x2Cu, 0, 0LL),
        v17 = (System_Converter_object__int__o *)sub_1C2E378(System_Converter_string__int__TypeInfo),
        System_Converter_object__int____ctor(v17, 0LL, Method_System_Int32_Parse__, 0LL),
        (ClearEventQuestIds_k__BackingField = (System_String_o *)System_Array__ConvertAll_object__int_(
                                                                   (System_Object_array *)v16,
                                                                   (System_Converter_TInput__TOutput__o *)v17,
                                                                   (const MethodInfo_30CBA68 *)Method_System_Array_ConvertAll_string__int___)) == 0LL) )
  {
    sub_1C2E388(ClearEventQuestIds_k__BackingField, v13);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)ClearEventQuestIds_k__BackingField;
  if ( !ClearEventQuestIds_k__BackingField[1].klass )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v39 = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
    if ( !byte_4BFA27F )
    {
      sub_1C2E12C(&TerminalPramsManager_TypeInfo, v13);
      byte_4BFA27F = 1;
    }
    v40 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v40 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (PartyOrganizationUtility_o *)&v40->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = v39;
    sub_1C2E0D0(p_ClearEventQuestIds_k__BackingField, (int64_t)v39, (int64_t)v18, v19, v20, v21, v22, v23);
    TerminalPramsManager__ClearEventQuestIds_SaveData(0LL);
    return (System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 0LL);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)clsQuestCheck__GetEventQuestIdListPlayable(
                                                               this,
                                                               eventId,
                                                               v18);
  v26 = System_Linq_Enumerable__Except_int_(
          v25,
          v24,
          (const MethodInfo_2FF1778 *)Method_System_Linq_Enumerable_Except_int___);
  v34 = System_Linq_Enumerable__ToArray_int_(
          v26,
          (const MethodInfo_300BC24 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v35 = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
  if ( !byte_4BFA27F )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v27);
    byte_4BFA27F = 1;
  }
  v36 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v36 = TerminalPramsManager_TypeInfo;
  }
  v37 = (PartyOrganizationUtility_o *)&v36->static_fields->_ClearEventQuestIds_k__BackingField;
  v37->klass = v35;
  sub_1C2E0D0(v37, (int64_t)v35, v28, v29, v30, v31, v32, v33);
  TerminalPramsManager__ClearEventQuestIds_SaveData(0LL);
  return v34;
}


System_Collections_Generic_List_QuestEntity__o *__fastcall clsQuestCheck__GetQuestEntityByQuestId(
        clsQuestCheck_o *this,
        System_Collections_Generic_List_int__o *qids,
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
  System_Collections_Generic_List_object__o *v13; // x19
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x21
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *Entity; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x1
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_List_Enumerator_int__o v32; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v33; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BFA1D9 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestMaster___, qids);
    sub_1C2E12C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_QuestEntity__Add__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v10);
    sub_1C2E12C(&System_Collections_Generic_List_QuestEntity__TypeInfo, v11);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4BFA1D9 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v13 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestMaster___),
        !qids) )
  {
    sub_1C2E388(Instance, v15);
  }
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    qids,
    (const MethodInfo_364F35C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v33,
            (const MethodInfo_33FC0F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v17 )
      break;
    if ( !v16 )
      sub_1C2E388(v17, v18);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v16,
               v33.fields._current,
               (const MethodInfo_327B180 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    v26 = (int64_t)Entity;
    if ( !v13 )
      sub_1C2E388(Entity, Entity);
    items = v13->fields._items;
    v28 = Method_System_Collections_Generic_List_QuestEntity__Add__;
    ++v13->fields._version;
    if ( !items )
      sub_1C2E388(Entity, Entity);
    size = v13->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v13,
        Entity,
        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = &items->obj.klass + size;
      v13->fields._size = size + 1;
      v30[4] = (Il2CppClass *)v26;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v30 + 4), v26, v20, v21, v22, v23, v24, v25);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v33,
    (const MethodInfo_33FC0F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return (System_Collections_Generic_List_QuestEntity__o *)v13;
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


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantFriendShip(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldFriendShipRank,
        int32_t type_flag,
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
  System_Collections_Generic_List_int__o *v23; // x19
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  QuestReleaseEntity_array *ListByType; // x24
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x25
  unsigned int v29; // w28
  QuestReleaseEntity_o *v30; // x8
  int32_t questId; // w26
  const MethodInfo *v32; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v36; // x23
  const MethodInfo *v37; // x4
  int32_t v38; // w20
  int v39; // w21
  System_Collections_Generic_List_Enumerator_int__o v41; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v42; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BFA1D8 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id);
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9);
    sub_1C2E12C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__RemoveAt__, v16);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor___77707560, v18);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4BFA1D8 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v23 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_32;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 9, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_32;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v29 = 0;
    while ( 1 )
    {
      if ( v29 >= max_length )
        sub_1C2E390(Instance, v25);
      v30 = ListByType->m_Items[v29];
      if ( !v30 )
        break;
      if ( v30->fields.targetId == svt_id )
      {
        if ( !v28 )
          break;
        questId = v30->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v28,
                                      questId,
                                      (const MethodInfo_327B180 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, questId, oldFriendShipRank, 9, v32);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v23 )
              break;
            items = v23->fields._items;
            v34 = Method_System_Collections_Generic_List_int__Add__;
            ++v23->fields._version;
            if ( !items )
              break;
            size = v23->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v23,
                questId,
                *(const MethodInfo_364E888 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            }
            else
            {
              v23->fields._size = size + 1;
              items->m_Items[size + 1] = questId;
            }
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v29 >= max_length )
        goto LABEL_22;
    }
LABEL_32:
    sub_1C2E388(Instance, v25);
  }
LABEL_22:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v36 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_56942940(
      v36,
      (System_Collections_Generic_IEnumerable_T__o *)v23,
      (const MethodInfo_364E15C *)Method_System_Collections_Generic_List_int___ctor___77707560);
    Instance = (DataManager_o *)clsQuestCheck__GetReleaseQuestIdByServantFriendShip(this, svt_id, -1, type_flag, v37);
    if ( !Instance )
      goto LABEL_32;
    v23 = (System_Collections_Generic_List_int__o *)Instance;
    v38 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v38 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_int___get_Item(
                                      v23,
                                      v38,
                                      (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v36 )
          goto LABEL_32;
        v39 = (int)Instance;
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v41,
          v36,
          (const MethodInfo_364F35C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v42 = v41;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v42,
                  (const MethodInfo_33FC0F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v39 == v42.fields._current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v23,
              v38,
              (const MethodInfo_3650008 *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v42,
          (const MethodInfo_33FC0F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( --v38 < 0 )
          return v23;
      }
    }
  }
  return v23;
}


System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLimitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__GetReleaseQuestIdByServantLimit_34693788(this, svt_id, oldLimitCount, 494, v4);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit_34693788(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLimitCount,
        int32_t type_flag,
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
  System_Collections_Generic_List_int__o *v23; // x19
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  QuestReleaseEntity_array *ListByType; // x24
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x25
  unsigned int v29; // w28
  QuestReleaseEntity_o *v30; // x8
  int32_t questId; // w26
  const MethodInfo *v32; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v36; // x23
  const MethodInfo *v37; // x4
  int32_t v38; // w20
  int v39; // w21
  System_Collections_Generic_List_Enumerator_int__o v41; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v42; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BFA1D5 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id);
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9);
    sub_1C2E12C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__RemoveAt__, v16);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor___77707560, v18);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4BFA1D5 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v23 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_32;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_32;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v29 = 0;
    while ( 1 )
    {
      if ( v29 >= max_length )
        sub_1C2E390(Instance, v25);
      v30 = ListByType->m_Items[v29];
      if ( !v30 )
        break;
      if ( v30->fields.targetId == svt_id )
      {
        if ( !v28 )
          break;
        questId = v30->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v28,
                                      questId,
                                      (const MethodInfo_327B180 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, questId, oldLimitCount, 7, v32);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v23 )
              break;
            items = v23->fields._items;
            v34 = Method_System_Collections_Generic_List_int__Add__;
            ++v23->fields._version;
            if ( !items )
              break;
            size = v23->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v23,
                questId,
                *(const MethodInfo_364E888 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            }
            else
            {
              v23->fields._size = size + 1;
              items->m_Items[size + 1] = questId;
            }
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v29 >= max_length )
        goto LABEL_22;
    }
LABEL_32:
    sub_1C2E388(Instance, v25);
  }
LABEL_22:
  if ( (oldLimitCount & 0x80000000) == 0 )
  {
    v36 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_56942940(
      v36,
      (System_Collections_Generic_IEnumerable_T__o *)v23,
      (const MethodInfo_364E15C *)Method_System_Collections_Generic_List_int___ctor___77707560);
    Instance = (DataManager_o *)clsQuestCheck__GetReleaseQuestIdByServantLimit_34693788(
                                  this,
                                  svt_id,
                                  -1,
                                  type_flag,
                                  v37);
    if ( !Instance )
      goto LABEL_32;
    v23 = (System_Collections_Generic_List_int__o *)Instance;
    v38 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v38 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_int___get_Item(
                                      v23,
                                      v38,
                                      (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v36 )
          goto LABEL_32;
        v39 = (int)Instance;
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v41,
          v36,
          (const MethodInfo_364F35C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v42 = v41;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v42,
                  (const MethodInfo_33FC0F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v39 == v42.fields._current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v23,
              v38,
              (const MethodInfo_3650008 *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v42,
          (const MethodInfo_33FC0F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( --v38 < 0 )
          return v23;
      }
    }
  }
  return v23;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit_34694804(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLimitCount,
        int32_t newLimitCount,
        int32_t type_flag,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_int__o *v23; // x19
  Il2CppObject *Instance; // x0
  __int64 v25; // x1
  QuestReleaseEntity_array *ListByType; // x25
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x26
  unsigned int v29; // w21
  QuestReleaseEntity_o *v30; // x8
  int32_t questId; // w27
  const MethodInfo *v32; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v36; // x24
  int v37; // w8
  __int64 v38; // x29
  QuestReleaseEntity_o *v39; // x8
  int32_t v40; // w27
  const MethodInfo *v41; // x4
  struct System_Int32_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  int32_t v45; // w20
  int v46; // w21
  System_Collections_Generic_List_Enumerator_int__o v49; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v50; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BFA1D6 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id);
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v10);
    sub_1C2E12C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v16);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__RemoveAt__, v17);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4BFA1D6 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  v23 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_46;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_46;
  max_length = ListByType->max_length;
  v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( max_length >= 1 )
  {
    v29 = 0;
    while ( v29 < max_length )
    {
      v30 = ListByType->m_Items[v29];
      if ( !v30 )
        goto LABEL_46;
      if ( v30->fields.targetId == svt_id )
      {
        if ( !v28 )
          goto LABEL_46;
        questId = v30->fields.questId;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v28,
                     questId,
                     (const MethodInfo_327B180 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_46;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (Il2CppObject *)clsQuestCheck__IsQuestRelease(this, questId, oldLimitCount, 7, v32);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v23 )
              goto LABEL_46;
            items = v23->fields._items;
            v34 = Method_System_Collections_Generic_List_int__Add__;
            ++v23->fields._version;
            if ( !items )
              goto LABEL_46;
            size = v23->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v23,
                questId,
                *(const MethodInfo_364E888 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            }
            else
            {
              v23->fields._size = size + 1;
              items->m_Items[size + 1] = questId;
            }
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v29 >= max_length )
        goto LABEL_22;
    }
LABEL_47:
    sub_1C2E390(Instance, v25);
  }
LABEL_22:
  v36 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v36,
    (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
  v37 = ListByType->max_length;
  if ( v37 >= 1 )
  {
    v38 = 0LL;
    while ( (unsigned int)v38 < v37 )
    {
      v39 = ListByType->m_Items[v38];
      if ( !v39 )
        goto LABEL_46;
      if ( v39->fields.targetId == svt_id )
      {
        if ( !v28 )
          goto LABEL_46;
        v40 = v39->fields.questId;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v28,
                     v40,
                     (const MethodInfo_327B180 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_46;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (Il2CppObject *)clsQuestCheck__IsQuestRelease(this, v40, newLimitCount, 7, v41);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v36 )
              goto LABEL_46;
            v42 = v36->fields._items;
            v43 = Method_System_Collections_Generic_List_int__Add__;
            ++v36->fields._version;
            if ( !v42 )
              goto LABEL_46;
            v44 = v36->fields._size;
            if ( (unsigned int)v44 >= v42->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v36,
                v40,
                *(const MethodInfo_364E888 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
            }
            else
            {
              v36->fields._size = v44 + 1;
              v42->m_Items[v44 + 1] = v40;
            }
          }
        }
      }
      v37 = ListByType->max_length;
      if ( (int)++v38 >= v37 )
        goto LABEL_37;
    }
    goto LABEL_47;
  }
LABEL_37:
  if ( !v36 )
LABEL_46:
    sub_1C2E388(Instance, v25);
  v45 = v36->fields._size - 1;
  if ( v45 >= 0 )
  {
    while ( 1 )
    {
      Instance = (Il2CppObject *)System_Collections_Generic_List_int___get_Item(
                                   v36,
                                   v45,
                                   (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v23 )
        goto LABEL_46;
      v46 = (int)Instance;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v49,
        v23,
        (const MethodInfo_364F35C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v50 = v49;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v50,
                (const MethodInfo_33FC0F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        if ( v46 == v50.fields._current )
        {
          System_Collections_Generic_List_int___RemoveAt(
            v36,
            v45,
            (const MethodInfo_3650008 *)Method_System_Collections_Generic_List_int__RemoveAt__);
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v50,
        (const MethodInfo_33FC0F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      if ( --v45 < 0 )
        return v36;
    }
  }
  return v36;
}


System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLv(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLv,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__GetReleaseQuestIdByServantLv_34693228(this, svt_id, oldLv, 494, v4);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLv_34693228(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLv,
        int32_t type_flag,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_int__o *v15; // x23
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  QuestReleaseEntity_array *ListByType; // x24
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x25
  unsigned int v21; // w27
  QuestReleaseEntity_o *v22; // x8
  int32_t questId; // w26
  const MethodInfo *v24; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10

  if ( (byte_4BFA1D4 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id);
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9);
    sub_1C2E12C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4BFA1D4 = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_23;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 6, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_23;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length )
        sub_1C2E390(Instance, v17);
      v22 = ListByType->m_Items[v21];
      if ( !v22 )
        break;
      if ( v22->fields.targetId == svt_id )
      {
        if ( !v20 )
          break;
        questId = v22->fields.questId;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v20,
                     questId,
                     (const MethodInfo_327B180 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (Il2CppObject *)clsQuestCheck__IsQuestRelease(this, questId, oldLv, 6, v24);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v15 )
              break;
            items = v15->fields._items;
            v26 = Method_System_Collections_Generic_List_int__Add__;
            ++v15->fields._version;
            if ( !items )
              break;
            size = v15->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v15,
                questId,
                *(const MethodInfo_364E888 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v15->fields._size = size + 1;
              items->m_Items[size + 1] = questId;
            }
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v21 >= max_length )
        return v15;
    }
LABEL_23:
    sub_1C2E388(Instance, v17);
  }
  return v15;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestEntity__o *__fastcall clsQuestCheck__GetReleasedQuestEntityListByServantGet(
        clsQuestCheck_o *this,
        int32_t servantId,
        int32_t typeFlag,
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
  QuestReleaseEntity_array *Instance; // x0
  Il2CppObject *v19; // x1
  DataManager_o *v20; // x23
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v22; // x19
  System_Collections_Generic_List_object__o *v23; // x22
  int max_length; // w8
  QuestReleaseEntity_array *v25; // x26
  unsigned int v26; // w19
  QuestReleaseEntity_o *v27; // x25
  __int64 v28; // x29
  int32_t questId; // w27
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  QuestReleaseEntity_array **v36; // x28
  System_Func_object__bool__o *v37; // x25
  const MethodInfo *v38; // x4
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  ServantGroupEntity_array *ListByServantID; // x19
  __int64 v50; // x8
  QuestReleaseEntity_array *v51; // x24
  unsigned __int64 v52; // x29
  int v53; // w8
  unsigned int v54; // w23
  __int64 v55; // x19
  QuestReleaseEntity_o *v56; // x25
  __int64 v57; // x27
  int32_t v58; // w25
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  QuestReleaseEntity_array **v65; // x26
  System_Func_object__bool__o *v66; // x28
  const MethodInfo *v67; // x4
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  struct System_Object_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  Il2CppClass **v77; // x0
  QuestReleaseMaster_o *v79; // [xsp+0h] [xbp-80h]
  DataManager_o *v80; // [xsp+8h] [xbp-78h]

  if ( (byte_4BFA1D7 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BasicHelper_Any_QuestEntity___, *(_QWORD *)&servantId);
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestMaster___, v5);
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v6);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantGroupMaster___, v7);
    sub_1C2E12C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v8);
    sub_1C2E12C(&System_Func_QuestEntity__bool__TypeInfo, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_QuestEntity__Add__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v11);
    sub_1C2E12C(&System_Collections_Generic_List_QuestEntity__TypeInfo, v12);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1C2E12C(&Method_clsQuestCheck___c__DisplayClass31_0__GetReleasedQuestEntityListByServantGet_b__0__, v14);
    sub_1C2E12C(&clsQuestCheck___c__DisplayClass31_0_TypeInfo, v15);
    sub_1C2E12C(&Method_clsQuestCheck___c__DisplayClass31_1__GetReleasedQuestEntityListByServantGet_b__1__, v16);
    sub_1C2E12C(&clsQuestCheck___c__DisplayClass31_1_TypeInfo, v17);
    byte_4BFA1D7 = 1;
  }
  Instance = (QuestReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  v20 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestMaster___);
  v22 = DataManager__GetMasterData_object_(
          v20,
          (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  if ( !v22 )
    goto LABEL_49;
  v79 = (QuestReleaseMaster_o *)v22;
  Instance = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)v22, 8, 0LL);
  if ( !Instance )
    goto LABEL_49;
  max_length = Instance->max_length;
  v25 = Instance;
  if ( max_length >= 1 )
  {
    v26 = 0;
    while ( v26 < max_length )
    {
      v27 = v25->m_Items[v26];
      v28 = sub_1C2E378(clsQuestCheck___c__DisplayClass31_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v28, 0LL);
      if ( !v27 )
        goto LABEL_49;
      if ( v27->fields.targetId == servantId )
      {
        if ( !MasterData_object )
          goto LABEL_49;
        questId = v27->fields.questId;
        Instance = (QuestReleaseEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                 questId,
                                                 (const MethodInfo_327B180 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v28 )
          goto LABEL_49;
        *(_QWORD *)(v28 + 16) = Instance;
        v36 = (QuestReleaseEntity_array **)(v28 + 16);
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v28 + 16), (int64_t)Instance, v30, v31, v32, v33, v34, v35);
        v37 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_QuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v37,
          (Il2CppObject *)v28,
          Method_clsQuestCheck___c__DisplayClass31_0__GetReleasedQuestEntityListByServantGet_b__0__,
          0LL);
        Instance = (QuestReleaseEntity_array *)BasicHelper__Any_object_(
                                                 (System_Collections_Generic_List_T__o *)v23,
                                                 (System_Func_T__bool__o *)v37,
                                                 (const MethodInfo_2FBC23C *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = *v36;
          if ( !*v36 )
            goto LABEL_49;
          Instance = (QuestReleaseEntity_array *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
          if ( ((unsigned int)Instance & typeFlag) != 0 )
          {
            Instance = (QuestReleaseEntity_array *)clsQuestCheck__IsQuestRelease(this, questId, -1, 0, v38);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v23 )
                goto LABEL_49;
              v19 = (Il2CppObject *)*v36;
              items = v23->fields._items;
              v46 = Method_System_Collections_Generic_List_QuestEntity__Add__;
              ++v23->fields._version;
              if ( !items )
                goto LABEL_49;
              size = v23->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v23,
                  v19,
                  *(const MethodInfo_366B8AC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
              }
              else
              {
                v48 = &items->obj.klass + size;
                v23->fields._size = size + 1;
                v48[4] = (Il2CppClass *)v19;
                sub_1C2E0D0((PartyOrganizationUtility_o *)(v48 + 4), (int64_t)v19, v39, v40, v41, v42, v43, v44);
              }
            }
          }
        }
      }
      max_length = v25->max_length;
      if ( (int)++v26 >= max_length )
        goto LABEL_23;
    }
LABEL_50:
    sub_1C2E390(Instance, v19);
  }
LABEL_23:
  Instance = (QuestReleaseEntity_array *)DataManager__GetMasterData_object_(
                                           v20,
                                           (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantGroupMaster___);
  if ( !Instance
    || (ListByServantID = ServantGroupMaster__getListByServantID((ServantGroupMaster_o *)Instance, servantId, 0LL),
        Instance = QuestReleaseMaster__getListByType(v79, 10, 0LL),
        !ListByServantID) )
  {
LABEL_49:
    sub_1C2E388(Instance, v19);
  }
  v50 = *(_QWORD *)&ListByServantID->max_length;
  if ( (int)v50 >= 1 )
  {
    v51 = Instance;
    v52 = 0LL;
    v80 = (DataManager_o *)ListByServantID;
    while ( 1 )
    {
      if ( v52 >= (unsigned int)v50 )
        goto LABEL_50;
      if ( !v51 )
        goto LABEL_49;
      v53 = v51->max_length;
      if ( v53 >= 1 )
        break;
LABEL_47:
      ++v52;
      LODWORD(v50) = v80->fields.m_CancellationTokenSource;
      if ( (__int64)v52 >= (int)v50 )
        return (System_Collections_Generic_List_QuestEntity__o *)v23;
    }
    v54 = 0;
    v55 = *((_QWORD *)&v80->fields._DispLog + v52);
    while ( v54 < v53 )
    {
      v56 = v51->m_Items[v54];
      v57 = sub_1C2E378(clsQuestCheck___c__DisplayClass31_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v57, 0LL);
      if ( !v55 || !v56 )
        goto LABEL_49;
      if ( *(_DWORD *)(v55 + 16) == v56->fields.targetId )
      {
        if ( !MasterData_object )
          goto LABEL_49;
        v58 = v56->fields.questId;
        Instance = (QuestReleaseEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                 v58,
                                                 (const MethodInfo_327B180 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v57 )
          goto LABEL_49;
        *(_QWORD *)(v57 + 16) = Instance;
        v65 = (QuestReleaseEntity_array **)(v57 + 16);
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v57 + 16), (int64_t)Instance, v59, v60, v61, v62, v63, v64);
        v66 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_QuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v66,
          (Il2CppObject *)v57,
          Method_clsQuestCheck___c__DisplayClass31_1__GetReleasedQuestEntityListByServantGet_b__1__,
          0LL);
        Instance = (QuestReleaseEntity_array *)BasicHelper__Any_object_(
                                                 (System_Collections_Generic_List_T__o *)v23,
                                                 (System_Func_T__bool__o *)v66,
                                                 (const MethodInfo_2FBC23C *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = *v65;
          if ( !*v65 )
            goto LABEL_49;
          Instance = (QuestReleaseEntity_array *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
          if ( ((unsigned int)Instance & typeFlag) != 0 )
          {
            Instance = (QuestReleaseEntity_array *)clsQuestCheck__IsQuestRelease(this, v58, -1, 0, v67);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v23 )
                goto LABEL_49;
              v19 = (Il2CppObject *)*v65;
              v74 = v23->fields._items;
              v75 = Method_System_Collections_Generic_List_QuestEntity__Add__;
              ++v23->fields._version;
              if ( !v74 )
                goto LABEL_49;
              v76 = v23->fields._size;
              if ( (unsigned int)v76 >= v74->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v23,
                  v19,
                  *(const MethodInfo_366B8AC **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
              }
              else
              {
                v77 = &v74->obj.klass + v76;
                v23->fields._size = v76 + 1;
                v77[4] = (Il2CppClass *)v19;
                sub_1C2E0D0((PartyOrganizationUtility_o *)(v77 + 4), (int64_t)v19, v68, v69, v70, v71, v72, v73);
              }
            }
          }
        }
      }
      v53 = v51->max_length;
      if ( (int)++v54 >= v53 )
        goto LABEL_47;
    }
    goto LABEL_50;
  }
  return (System_Collections_Generic_List_QuestEntity__o *)v23;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsEnabledPrivilegePeriod(
        clsQuestCheck_o *this,
        int32_t questId,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v10; // x1
  int32_t OpenedPeriodPrivilegeId; // w0
  int32_t v12; // w20
  Il2CppObject *v13; // x21
  int64_t v15; // [xsp+0h] [xbp-50h] BYREF
  int64_t startAt; // [xsp+8h] [xbp-48h] BYREF
  UserPrivilegeEntity_o *v17; // [xsp+10h] [xbp-40h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4BFA1E3 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_QuestPhaseMaster___, *(_QWORD *)&questId);
    sub_1C2E12C(&Method_DataManager_GetMaster_UserPrivilegeMaster___, v6);
    sub_1C2E12C(&DataManager_TypeInfo, v7);
    sub_1C2E12C(&NetworkManager_TypeInfo, v8);
    byte_4BFA1E3 = 1;
  }
  v17 = 0LL;
  entity = 0LL;
  v15 = 0LL;
  startAt = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_24;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, questId, 1, 0LL) )
    return 0;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_24;
  OpenedPeriodPrivilegeId = QuestPhaseEntity__GetOpenedPeriodPrivilegeId(entity, 0LL);
  if ( OpenedPeriodPrivilegeId < 1 )
    return 1;
  v12 = OpenedPeriodPrivilegeId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v13 = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserPrivilegeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BF81D5 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, v10);
    byte_4BF81D5 = 1;
  }
  Master_object = (QuestPhaseMaster_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (QuestPhaseMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v13 )
    goto LABEL_24;
  if ( !UserPrivilegeMaster__TryGetEntity(
          (UserPrivilegeMaster_o *)v13,
          &v17,
          *((_QWORD *)Master_object[2].monitor + 8),
          v12,
          0LL) )
    return 0;
  Master_object = (QuestPhaseMaster_o *)v17;
  if ( !v17 )
LABEL_24:
    sub_1C2E388(Master_object, v10);
  return UserPrivilegeEntity__IsValidPeriod(v17, &startAt, &v15, nowTime, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsEncountRaidBoss(
        clsQuestCheck_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Int32_array *Instance; // x0
  __int64 v10; // x1
  EventRaidMaster_o *v11; // x22
  int32_t RaidDeadQuestId; // w23
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x4
  const MethodInfo *v16; // x4
  __int64 v17; // x8
  System_Int32_array *v18; // x20
  unsigned __int64 v19; // x21

  if ( (byte_4BFA1C7 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1C2E12C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v8);
    byte_4BFA1C7 = 1;
  }
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_18;
  v11 = (EventRaidMaster_o *)Instance;
  RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId((EventRaidMaster_o *)Instance, eventId, day, 0LL);
  Instance = (System_Int32_array *)SingletonTemplate_object___get_Instance((const MethodInfo_38A83B0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, RaidDeadQuestId, 0, v13)
    || clsQuestCheck__IsQuestRelease(this, RaidDeadQuestId, -1, 0, v14) )
  {
    LOBYTE(Instance) = 1;
    return (unsigned __int8)Instance & 1;
  }
  Instance = EventRaidMaster__GetRaidAliveQuestIds(v11, eventId, day, 0LL);
  if ( !Instance )
LABEL_18:
    sub_1C2E388(Instance, v10);
  v17 = *(_QWORD *)&Instance->max_length;
  v18 = Instance;
  if ( (int)v17 < 1 )
  {
    LOBYTE(Instance) = 0;
  }
  else
  {
    v19 = 0LL;
    do
    {
      if ( v19 >= (unsigned int)v17 )
        sub_1C2E390(Instance, v10);
      Instance = (System_Int32_array *)clsQuestCheck__IsQuestRelease(this, v18->m_Items[v19 + 1], -1, 0, v16);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      LODWORD(v17) = v18->max_length;
      ++v19;
    }
    while ( (__int64)v19 < (int)v17 );
  }
  return (unsigned __int8)Instance & 1;
}


bool __fastcall clsQuestCheck__IsLastWarClear(clsQuestCheck_o *this, const MethodInfo *method)
{
  int32_t Value; // w1
  const MethodInfo *v4; // x2

  if ( (byte_4BFA1C9 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_8399/*"LAST_WAR_ID"*/, method);
    byte_4BFA1C9 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8399/*"LAST_WAR_ID"*/, 0LL);
  return clsQuestCheck__IsWarClear(this, Value, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsMainInterlude(clsQuestCheck_o *this, int32_t war_id, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4BFA1CA & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&war_id);
    sub_1C2E12C(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v4);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BFA1CA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1C2E388(Instance, v7);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             war_id,
             (const MethodInfo_327B180 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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

  if ( (byte_4BFA1D0 & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_1C2E12C(&CondType_TypeInfo, *(_QWORD *)&qid);
    byte_4BFA1D0 = 1;
  }
  v6 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_38902436(qid, v6, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsQuestClearRaw(
        clsQuestCheck_o *this,
        int32_t qid,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  int32_t v6; // w20

  if ( (byte_4BFA1D1 & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_1C2E12C(&CondType_TypeInfo, *(_QWORD *)&qid);
    byte_4BFA1D1 = 1;
  }
  v6 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_38902436(qid, v6, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsQuestPhaseClear(
        clsQuestCheck_o *this,
        int32_t qid,
        int32_t phase,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t v10; // w21
  NetworkManager_c *v11; // x0
  int64_t userIdNumber; // x22

  if ( (byte_4BFA1D2 & 1) == 0 )
  {
    sub_1C2E12C(&CondType_TypeInfo, *(_QWORD *)&qid);
    this = (clsQuestCheck_o *)sub_1C2E12C(&NetworkManager_TypeInfo, v8);
    byte_4BFA1D2 = 1;
  }
  v10 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, *(const MethodInfo **)&phase);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BF81D5 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, v9);
    byte_4BF81D5 = 1;
  }
  v11 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v11 = NetworkManager_TypeInfo;
  }
  userIdNumber = v11->static_fields->userIdNumber;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestPhaseClear(userIdNumber, qid, phase, v10, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsQuestRelease(
        clsQuestCheck_o *this,
        int32_t quest_id,
        int32_t old_val,
        int32_t old_val_qr_type,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  Il2CppObject *Master_object; // x0
  __int64 v17; // x1
  System_Collections_ObjectModel_Collection_T__o *monitor; // x19
  bool v19; // w20
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  QuestReleaseEntity_o *v30; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x4
  int32_t v33; // w2
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0

  if ( (byte_4BFA1C6 & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__GetEnumerator__,
      *(_QWORD *)&quest_id);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__, v9);
    sub_1C2E12C(&Method_DataManager_GetMaster_QuestReleaseMaster___, v10);
    sub_1C2E12C(&DataManager_TypeInfo, v11);
    sub_1C2E12C(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__getEntityList__, v12);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v13);
    sub_1C2E12C(&System_Collections_Generic_IEnumerator_QuestReleaseEntity__TypeInfo, v14);
    sub_1C2E12C(&System_Collections_IEnumerator_TypeInfo, v15);
    byte_4BFA1C6 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object || (monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor) == 0LL )
    sub_1C2E388(Master_object, v17);
  v19 = System_Collections_ObjectModel_Collection_object___get_Count(
          (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor,
          (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__) > 0;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 monitor,
                 (const MethodInfo_3216144 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2E388(0LL, v20);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        p_offset += 4;
        if ( !v23 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C8010C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestReleaseEntity__c **)v28 - 1) != System_Collections_Generic_IEnumerator_QuestReleaseEntity__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_19;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_19:
      v29 = sub_1C8010C(Enumerator, System_Collections_Generic_IEnumerator_QuestReleaseEntity__TypeInfo, 0LL);
    }
    v30 = (QuestReleaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                                    Enumerator,
                                    *(_QWORD *)(v29 + 8));
    if ( !v30 )
      sub_1C2E388(0LL, v31);
    if ( v30->fields.questId == quest_id )
    {
      if ( (old_val & 0x80000000) != 0 )
        v33 = -1;
      else
        v33 = v30->fields.type == old_val_qr_type ? old_val : -1;
      if ( !clsQuestCheck__IsQuestRelease_34689960(this, v30, v33, 0LL, v32) )
      {
        v19 = 0;
        break;
      }
    }
  }
  v34 = Enumerator->klass;
  v35 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_34;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_34:
    v37 = sub_1C8010C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  return v19;
}


bool __fastcall clsQuestCheck__IsQuestRelease_34687164(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        MapControl_QuestInfo_o *qinf,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_34689960(this, qrd, -1, qinf, v4);
}


bool __fastcall clsQuestCheck__IsQuestRelease_34689040(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        int32_t old_val,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_34689960(this, qrd, old_val, 0LL, v4);
}


bool __fastcall clsQuestCheck__IsQuestRelease_34689960(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        int32_t old_val,
        MapControl_QuestInfo_o *qinf,
        const MethodInfo *method)
{
  char v5; // cf
  char v6; // zf
  clsQuestCheck_o *v10; // x22
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  int32_t type; // w23
  int32_t v19; // w20
  int32_t v20; // w21
  int32_t targetId; // w20
  int64_t value; // x19
  int32_t v24; // w0
  int32_t v25; // w20
  int32_t v26; // w21
  int32_t v27; // w19
  int32_t v28; // w0
  int32_t v29; // w1
  int32_t v30; // w2
  bool v31; // w3
  bool v33; // w3
  QuestReleaseEntity_o *v34; // x2
  Il2CppObject *v35; // x0
  int32_t *v36; // x19
  int64_t Time; // x20
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_openedAt; // x8
  int32_t *p_closedAt; // x9
  int64_t v41; // x8
  Il2CppObject *v42; // x0
  int32_t v43; // w19
  int32_t v44; // w20
  int32_t questId; // w22
  int32_t ValueInt; // w19
  int32_t v47; // w20
  int32_t v48; // w21
  int32_t v49; // w19
  TotalEventRaidEntity_o *v51; // [xsp+0h] [xbp-50h] BYREF
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  System_Int32_array *sameGroupQuestIds; // [xsp+10h] [xbp-40h] BYREF
  bool is_release; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = this;
  if ( (byte_4BFA1CC & 1) == 0 )
  {
    sub_1C2E12C(&CondType_TypeInfo, qrd);
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventRaidMaster___, v11);
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestAddMaster___, v12);
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestMaster___, v13);
    sub_1C2E12C(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v14);
    sub_1C2E12C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v15);
    sub_1C2E12C(&NetworkManager_TypeInfo, v16);
    this = (clsQuestCheck_o *)sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4BFA1CC = 1;
  }
  entity = 0LL;
  sameGroupQuestIds = 0LL;
  v51 = 0LL;
  is_release = 0;
  if ( !qrd )
LABEL_101:
    sub_1C2E388(this, qrd);
  type = qrd->fields.type;
  if ( !v6 & v5 )
  {
LABEL_20:
    targetId = qrd->fields.targetId;
    value = qrd->fields.value;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v24 = type;
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
        v33 = 1;
        v34 = qrd;
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
        v24 = 6;
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
        v24 = 7;
        break;
      case 8:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v24 = 8;
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
        v24 = 9;
        break;
      case 10:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v24 = 10;
        break;
      case 11:
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v24 = 11;
        break;
      case 12:
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_101;
        v35 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                qrd->fields.questId,
                (const MethodInfo_327B180 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v35 )
          return is_release;
        v36 = (int32_t *)v35;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Time = NetworkManager__getTime(0LL);
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestAddMaster___);
        if ( !this )
          goto LABEL_101;
        ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)this, v36[4], 0LL);
        p_openedAt = &ReplaceDataByQuestId->fields.openedAt;
        p_closedAt = &ReplaceDataByQuestId->fields.closedAt;
        if ( !ReplaceDataByQuestId )
          p_openedAt = v36 + 39;
        v41 = *p_openedAt;
        if ( !ReplaceDataByQuestId )
          p_closedAt = v36 + 40;
        return Time >= v41 && Time < *p_closedAt;
      case 13:
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_101;
        v42 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                qrd->fields.questId,
                (const MethodInfo_327B180 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v42 )
          return is_release;
        return QuestEntity__IsOpenByTime((QuestEntity_o *)v42, 1, 0LL);
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
        v43 = qrd->fields.targetId;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return CondType__IsMissionAchive(v43, 0LL);
      case 26:
        v44 = qrd->fields.targetId;
        questId = qrd->fields.questId;
        ValueInt = QuestReleaseEntity__getValueInt(qrd, 0LL);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        is_release = CondType__IsNotQuestGroupClear(questId, v44, ValueInt, &sameGroupQuestIds, 1, 0LL);
        if ( qinf )
        {
          qinf->fields._GroupId_k__BackingField = v44;
          MapControl_QuestInfo__AddSameGroupQuestIds(qinf, sameGroupQuestIds, 0LL);
        }
        return is_release;
      case 27:
      case 28:
        v19 = qrd->fields.targetId;
        v20 = QuestReleaseEntity__getValueInt(qrd, 0LL);
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventRaidMaster___);
        if ( !this )
          goto LABEL_101;
        if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)this, &entity, v19, v20, 0LL) )
          return is_release;
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)TotalEventRaidMaster__TryGetEntity(
                                    (TotalEventRaidMaster_o *)this,
                                    &v51,
                                    v19,
                                    v20,
                                    0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          return is_release;
        if ( !entity || !v51 )
          goto LABEL_101;
        return (entity->fields.maxHp > v51->fields.totalDamage) ^ (qrd->fields.type != 27);
      case 32:
        v47 = qrd->fields.questId;
        v48 = qrd->fields.targetId;
        v49 = QuestReleaseEntity__getValueInt(qrd, 0LL);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v31 = 1;
        v28 = v47;
        v29 = v48;
        v30 = v49;
        return CondType__IsQuestGroupClear(v28, v29, v30, v31, 0LL);
      case 38:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v24 = 38;
        break;
      case 53:
        v34 = qrd;
        v33 = 0;
LABEL_89:
        clsQuestCheck__checkCondTypeItemGet(this, &is_release, v34, v33, method);
        return is_release;
      case 54:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v24 = 54;
        break;
      default:
        if ( type == 58 )
        {
          v25 = qrd->fields.questId;
          v26 = qrd->fields.targetId;
          v27 = QuestReleaseEntity__getValueInt(qrd, 0LL);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v28 = v25;
          v29 = v26;
          v30 = v27;
          v31 = 0;
          return CondType__IsQuestGroupClear(v28, v29, v30, v31, 0LL);
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
        v24 = 64;
        break;
    }
  }
  return CondType__IsOpen(v24, targetId, value, 0, 0LL, 0LL);
}


bool __fastcall clsQuestCheck__IsQuestValid(
        clsQuestCheck_o *this,
        MapControl_QuestInfo_o *questInfo,
        int64_t endTime,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  void *IsQuestReleaseAll; // x0
  __int64 v10; // x1
  Il2CppObject *Master_object; // x21
  clsQuestCheck_o *Time; // x0
  const MethodInfo *v15; // x3
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BFA1E2 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_UserQuestMaster___, questInfo);
    sub_1C2E12C(&DataManager_TypeInfo, v6);
    sub_1C2E12C(&NetworkManager_TypeInfo, v7);
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v8);
    byte_4BFA1E2 = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IsQuestReleaseAll = (void *)TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
  if ( ((unsigned __int8)IsQuestReleaseAll & 1) != 0 )
    return 1;
  if ( !questInfo )
    goto LABEL_28;
  IsQuestReleaseAll = MapControl_QuestInfo__GetMine(questInfo, 0LL);
  if ( !IsQuestReleaseAll )
    goto LABEL_28;
  if ( *((_DWORD *)IsQuestReleaseAll + 20) == 1 )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BF81D5 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, v10);
    byte_4BF81D5 = 1;
  }
  IsQuestReleaseAll = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    IsQuestReleaseAll = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
LABEL_28:
    sub_1C2E388(IsQuestReleaseAll, v10);
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)Master_object,
    &entity,
    *(_QWORD *)(*((_QWORD *)IsQuestReleaseAll + 23) + 64LL),
    questInfo->fields.questId,
    0LL);
  if ( entity && UserQuestEntity__IsNotExpired(entity, 0LL) )
    return 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (clsQuestCheck_o *)NetworkManager__getTime(0LL);
  return (endTime < 1 || endTime - (__int64)Time >= 1)
      && clsQuestCheck__IsEnabledPrivilegePeriod(Time, questInfo->fields.questId, (int64_t)Time, v15);
}


bool __fastcall clsQuestCheck__IsReleasedLoginQuest(
        clsQuestCheck_o *this,
        LoginQuestEntity_o *loginQuestEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  QuestReleaseMaster_o *Master_object; // x0
  __int64 v12; // x1
  clsQuestCheck_Fields *p_fields; // x21
  System_Collections_Generic_List_object__o *qrs; // x9
  int64_t v15; // x21
  _BOOL8 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x4
  int v19; // w19
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BFA1C5 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_QuestReleaseMaster___, loginQuestEnt);
    sub_1C2E12C(&DataManager_TypeInfo, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v9);
    sub_1C2E12C(&NetworkManager_TypeInfo, v10);
    byte_4BFA1C5 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !loginQuestEnt || !Master_object )
    goto LABEL_24;
  p_fields = &this->fields;
  QuestReleaseMaster__getListByQuestID_40874012(Master_object, loginQuestEnt->fields.questId, &this->fields.qrs, 0LL);
  if ( !this->fields.qrs )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (QuestReleaseMaster_o *)NetworkManager__getTime(0LL);
  qrs = (System_Collections_Generic_List_object__o *)p_fields->qrs;
  if ( !p_fields->qrs )
LABEL_24:
    sub_1C2E388(Master_object, v12);
  v15 = (int64_t)Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    qrs,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v16 )
      break;
    if ( !v21.fields._current )
      sub_1C2E388(v16, v17);
    if ( HIDWORD(v21.fields._current[1].klass) == 12 )
    {
      if ( !LoginQuestEntity__IsEnablePeriod(loginQuestEnt, v15, 0LL) )
        goto LABEL_18;
    }
    else if ( !clsQuestCheck__IsQuestRelease_34689960(this, (QuestReleaseEntity_o *)v21.fields._current, -1, 0LL, v18) )
    {
LABEL_18:
      v19 = 6;
      goto LABEL_21;
    }
  }
  v19 = 7;
LABEL_21:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v19 != 6;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsReleasedQuest(clsQuestCheck_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_QuestReleaseEntity__o *qrs; // x0
  const MethodInfo *v13; // x4
  int v14; // w19
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BFA1C4 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_QuestReleaseMaster___, *(_QWORD *)&questId);
    sub_1C2E12C(&DataManager_TypeInfo, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v9);
    byte_4BFA1C4 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object )
    sub_1C2E388(0LL, v11);
  QuestReleaseMaster__getListByQuestID_40874012((QuestReleaseMaster_o *)Master_object, questId, &this->fields.qrs, 0LL);
  qrs = this->fields.qrs;
  if ( qrs )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)qrs,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
    {
      if ( !clsQuestCheck__IsQuestRelease_34689960(this, (QuestReleaseEntity_o *)v16.fields._current, -1, 0LL, v13) )
      {
        v14 = 5;
        goto LABEL_12;
      }
    }
    v14 = 6;
LABEL_12:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    LOBYTE(qrs) = v14 != 5;
  }
  return (char)qrs;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsTapSkipQuestStart(
        clsQuestCheck_o *this,
        int32_t questId,
        int32_t questPhase,
        System_String_o *effectName,
        bool isMyRoomMaterial,
        const MethodInfo *method)
{
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
  __int64 v21; // x19
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int32_t ScriptIntParam; // w22
  int v31; // w8
  clsQuestCheck_c *v33; // x0
  System_String_o *KEY_QUEST_START_EFFECT; // x21
  System_String_o *String; // x21
  System_String_array *v36; // x0
  System_Object_array *v37; // x23
  System_Func_object__bool__o *v38; // x20
  Il2CppObject *object; // x20
  System_String_o *v40; // x0
  char v41; // w8
  System_String_o *v42; // x19
  clsQuestCheck_c *v43; // x0
  System_String_o *v44; // x20
  Il2CppObject *v45; // [xsp+0h] [xbp-50h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BFA1DF & 1) == 0 )
  {
    sub_1C2E12C(&Method_BasicHelper_Find_string___, *(_QWORD *)&questId);
    sub_1C2E12C(&Method_DataManager_GetMaster_QuestMaster___, v10);
    sub_1C2E12C(&Method_DataManager_GetMaster_QuestPhaseMaster___, v11);
    sub_1C2E12C(&DataManager_TypeInfo, v12);
    sub_1C2E12C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v13);
    sub_1C2E12C(&EncryptedPlayerPrefs_TypeInfo, v14);
    sub_1C2E12C(&System_Func_string__bool__TypeInfo, v15);
    sub_1C2E12C(&Method_clsQuestCheck___c__DisplayClass40_0__IsTapSkipQuestStart_b__0__, v16);
    sub_1C2E12C(&clsQuestCheck___c__DisplayClass40_0_TypeInfo, v17);
    sub_1C2E12C(&StringLiteral_23122/*"questStartEffectSkip"*/, v18);
    sub_1C2E12C(&StringLiteral_1102/*"/"*/, v19);
    sub_1C2E12C(&clsQuestCheck_TypeInfo, v20);
    byte_4BFA1DF = 1;
  }
  v45 = 0LL;
  entity = 0LL;
  v21 = sub_1C2E378(clsQuestCheck___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_41;
  *(_QWORD *)(v21 + 16) = effectName;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)effectName, v24, v25, v26, v27, v28, v29);
  if ( isMyRoomMaterial )
    return 0;
  if ( questPhase <= 1 )
    questPhase = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_41;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, questId, questPhase, 0LL) )
    goto LABEL_44;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_41;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_23122/*"questStartEffectSkip"*/, 0, 0LL);
  if ( !ScriptIntParam )
  {
LABEL_44:
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !Master_object )
      goto LABEL_41;
    Master_object = (QuestPhaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            &v45,
                                            questId,
                                            (const MethodInfo_327B1CC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !v45 )
        goto LABEL_41;
      v31 = LODWORD(v45[2].monitor) - 1;
      if ( (unsigned int)v31 > 7 )
        ScriptIntParam = 0;
      else
        ScriptIntParam = dword_C3F490[v31];
      goto LABEL_22;
    }
    return 0;
  }
LABEL_22:
  v33 = clsQuestCheck_TypeInfo;
  if ( !clsQuestCheck_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
    v33 = clsQuestCheck_TypeInfo;
  }
  KEY_QUEST_START_EFFECT = v33->static_fields->KEY_QUEST_START_EFFECT;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  String = EncryptedPlayerPrefs__GetString(KEY_QUEST_START_EFFECT, 0LL);
  Master_object = (QuestPhaseMaster_o *)System_String__IsNullOrEmpty(String, 0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    goto LABEL_31;
  if ( !String )
LABEL_41:
    sub_1C2E388(Master_object, v23);
  v36 = System_String__Split(String, 0x2Fu, 0, 0LL);
  if ( !v36 )
  {
LABEL_31:
    v42 = *(System_String_o **)(v21 + 16);
LABEL_32:
    v43 = clsQuestCheck_TypeInfo;
    if ( !clsQuestCheck_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
      v43 = clsQuestCheck_TypeInfo;
    }
    v44 = v43->static_fields->KEY_QUEST_START_EFFECT;
    if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    EncryptedPlayerPrefs__SetString(v44, v42, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
    v41 = 1;
    goto LABEL_37;
  }
  v37 = (System_Object_array *)v36;
  v38 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v38,
    (Il2CppObject *)v21,
    Method_clsQuestCheck___c__DisplayClass40_0__IsTapSkipQuestStart_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             v37,
             (System_Func_T__bool__o *)v38,
             (const MethodInfo_2FBCE08 *)Method_BasicHelper_Find_string___);
  v40 = System_String__Concat_63246844(
          String,
          (System_String_o *)StringLiteral_1102/*"/"*/,
          *(System_String_o **)(v21 + 16),
          0LL);
  if ( !object )
  {
    v42 = v40;
    goto LABEL_32;
  }
  v41 = 0;
LABEL_37:
  if ( ScriptIntParam == 1 )
    return 1;
  else
    return (ScriptIntParam == 2) & (v41 ^ 1);
}


bool __fastcall clsQuestCheck__IsValidQuestRandomGroup(
        clsQuestCheck_o *this,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  QuestRandomGroupMaster_o *v13; // x21
  QuestRandomGroupEntity_o *EntityFromQuestId; // x0
  QuestRandomGroupEntity_o *v15; // x19
  int32_t randomGroupId; // w20
  TerminalPramsManager_c *v17; // x0
  bool v18; // w0
  uint32_t cctor_finished; // w9
  TerminalPramsManager_c *v20; // x0
  int32_t Item; // w22
  QuestRandomGroupEntity_o *RandomRangeQuest; // x0
  TerminalPramsManager_c *v23; // x0
  QuestRandomGroupEntity_o *v24; // x21
  TerminalPramsManager_c *v25; // x0
  TerminalPramsManager_c *v26; // x0

  if ( (byte_4BFA1C2 & 1) == 0 )
  {
    sub_1C2E12C(&CondType_TypeInfo, questInfo);
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestRandomGroupMaster___, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v8);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v10);
    byte_4BFA1C2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestRandomGroupMaster___);
  if ( !questInfo )
    goto LABEL_53;
  v13 = (QuestRandomGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_53;
  EntityFromQuestId = QuestRandomGroupMaster__GetEntityFromQuestId(
                        (QuestRandomGroupMaster_o *)Instance,
                        questInfo->fields.questId,
                        0LL);
  if ( EntityFromQuestId )
  {
    v15 = EntityFromQuestId;
    randomGroupId = EntityFromQuestId->fields.randomGroupId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__LoadQuestRandomGroupList(0LL);
    if ( !byte_4BFA27E )
    {
      sub_1C2E12C(&TerminalPramsManager_TypeInfo, v12);
      byte_4BFA27E = 1;
    }
    v17 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v17 = TerminalPramsManager_TypeInfo;
    }
    Instance = (Il2CppObject *)v17->static_fields->_QuestRandomGroupList_k__BackingField;
    if ( !Instance )
      goto LABEL_53;
    v18 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
            (System_Collections_Generic_Dictionary_int__int__o *)Instance,
            randomGroupId,
            (const MethodInfo_32CC5F0 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    cctor_finished = TerminalPramsManager_TypeInfo->_2.cctor_finished;
    if ( v18 )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BFA27E )
      {
        sub_1C2E12C(&TerminalPramsManager_TypeInfo, v12);
        byte_4BFA27E = 1;
      }
      v20 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v20 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v20->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_53;
      Item = System_Collections_Generic_Dictionary_int__int___get_Item(
               (System_Collections_Generic_Dictionary_int__int__o *)Instance,
               randomGroupId,
               (const MethodInfo_32CC368 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsQuestClear_38902436(Item, -1, 0, 0LL) )
        goto LABEL_44;
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BFA27E )
      {
        sub_1C2E12C(&TerminalPramsManager_TypeInfo, v12);
        byte_4BFA27E = 1;
      }
      v23 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v23 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v23->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_53;
      System_Collections_Generic_Dictionary_int__int___Add(
        (System_Collections_Generic_Dictionary_int__int__o *)Instance,
        randomGroupId,
        0,
        (const MethodInfo_32CC404 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
    RandomRangeQuest = QuestRandomGroupMaster__GetRandomRangeQuest(v13, randomGroupId, 0LL);
    if ( RandomRangeQuest )
    {
      v24 = RandomRangeQuest;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BFA27E )
      {
        sub_1C2E12C(&TerminalPramsManager_TypeInfo, v12);
        byte_4BFA27E = 1;
      }
      v25 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v25 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v25->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_53;
      System_Collections_Generic_Dictionary_int__int___set_Item(
        (System_Collections_Generic_Dictionary_int__int__o *)Instance,
        randomGroupId,
        v24->fields.questId,
        (const MethodInfo_32CC3F0 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      TerminalPramsManager__SaveQuestRandomGroupList(0LL);
LABEL_44:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BFA27E )
      {
        sub_1C2E12C(&TerminalPramsManager_TypeInfo, v12);
        byte_4BFA27E = 1;
      }
      v26 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v26 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v26->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( Instance )
      {
        LOBYTE(RandomRangeQuest) = System_Collections_Generic_Dictionary_int__int___get_Item(
                                     (System_Collections_Generic_Dictionary_int__int__o *)Instance,
                                     randomGroupId,
                                     (const MethodInfo_32CC368 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) == v15->fields.questId;
        return (char)RandomRangeQuest;
      }
LABEL_53:
      sub_1C2E388(Instance, v12);
    }
  }
  else
  {
    LOBYTE(RandomRangeQuest) = 1;
  }
  return (char)RandomRangeQuest;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsWarClear(clsQuestCheck_o *this, int32_t war_id, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v10; // x3

  if ( (byte_4BFA1C8 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&war_id);
    sub_1C2E12C(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v5);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BFA1C8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1C2E388(Instance, v8);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             war_id,
             (const MethodInfo_327B180 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = clsQuestCheck__IsQuestClear(this, HIDWORD(Entity[6].klass), 0, v10);
  return (char)Entity;
}


void __fastcall clsQuestCheck__OpenQuestTimeOverNoticeDialog(
        clsQuestCheck_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_4BFA1E4 & 1) == 0 )
  {
    sub_1C2E12C(&LocalizationManager_TypeInfo, callback);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C2E12C(&StringLiteral_11117/*"QUEST_TIME_OVER"*/, v5);
    sub_1C2E12C(&StringLiteral_1/*""*/, v6);
    byte_4BFA1E4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11117/*"QUEST_TIME_OVER"*/, 0LL);
  if ( !Instance )
    sub_1C2E388(v8, v9);
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v8,
    callback,
    -1,
    0,
    0,
    0,
    1,
    0,
    1,
    0,
    0LL,
    0.0,
    0LL);
}


void __fastcall clsQuestCheck__PlayQuestStartAction(
        clsQuestCheck_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w20

  if ( (byte_4BFA1DE & 1) == 0 )
  {
    sub_1C2E12C(&ScriptManager_TypeInfo, end_act);
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v4);
    byte_4BFA1DE = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BFA281 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, end_act);
    byte_4BFA281 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v5->static_fields->_WarId_k__BackingField;
  if ( !byte_4BF8444 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, end_act);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4BF8444 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v5->static_fields->_QuestId_k__BackingField;
  if ( clsQuestCheck__mfCheck_IsQuestNew((clsQuestCheck_o *)v5, QuestId_k__BackingField, method) )
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  void *Instance; // x0
  __int64 v17; // x1
  _QWORD *v18; // x19
  __int64 methodPtr_low; // x9
  __int64 v20; // x8
  __int64 v21; // x1
  TerminalPramsManager_c *v22; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w20
  BattleSetupInfo_o *v26; // x23
  Il2CppObject *v27; // x20
  clsQuestCheck_o *v28; // x0
  int32_t v29; // w1
  int64_t v30; // x2
  const MethodInfo *v31; // x3

  if ( (byte_4BFA1E1 & 1) == 0 )
  {
    sub_1C2E12C(&BattleRootComponent_TypeInfo, qinf);
    sub_1C2E12C(&BattleSetupInfo_TypeInfo, v11);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v13);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v14);
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v15);
    byte_4BFA1E1 = 1;
  }
  if ( result == 2 )
  {
    if ( clsQuestCheck__CheckQuestPlayable(this, qinf, endTime, boostId, *(const MethodInfo **)&boostId) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BFA281 )
      {
        sub_1C2E12C(&TerminalPramsManager_TypeInfo, v21);
        byte_4BFA281 = 1;
      }
      v22 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v22 = TerminalPramsManager_TypeInfo;
      }
      WarId_k__BackingField = v22->static_fields->_WarId_k__BackingField;
      if ( !byte_4BF8444 )
      {
        sub_1C2E12C(&TerminalPramsManager_TypeInfo, v21);
        v22 = TerminalPramsManager_TypeInfo;
        byte_4BF8444 = 1;
      }
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = TerminalPramsManager_TypeInfo;
      }
      QuestId_k__BackingField = v22->static_fields->_QuestId_k__BackingField;
      if ( !byte_4BF8443 )
      {
        sub_1C2E12C(&TerminalPramsManager_TypeInfo, v21);
        v22 = TerminalPramsManager_TypeInfo;
        byte_4BF8443 = 1;
      }
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = TerminalPramsManager_TypeInfo;
      }
      PhaseCnt_k__BackingField = v22->static_fields->_PhaseCnt_k__BackingField;
      v26 = (BattleSetupInfo_o *)sub_1C2E378(BattleSetupInfo_TypeInfo);
      BattleSetupInfo___ctor(v26, 0LL);
      if ( !v26 )
        goto LABEL_38;
      Instance = BattleSetupInfo__ConvertBattleSetupInfo(
                   v26,
                   WarId_k__BackingField,
                   QuestId_k__BackingField,
                   PhaseCnt_k__BackingField,
                   0,
                   0,
                   0,
                   0LL);
      v27 = (Il2CppObject *)Instance;
      if ( boostId )
      {
        if ( !Instance )
          goto LABEL_38;
        *((_DWORD *)Instance + 14) = boostId;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance
        || (*((_BYTE *)Instance + 148) = 1,
            (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__)) == 0LL)
        || (*((_DWORD *)Instance + 38) = 1,
            (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
      {
LABEL_38:
        sub_1C2E388(Instance, v17);
      }
      AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 35, 1, v27, 0LL);
    }
LABEL_36:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0LL);
      return;
    }
    goto LABEL_38;
  }
  if ( result )
    goto LABEL_36;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v18 = (_QWORD *)*((_QWORD *)Instance + 4);
  if ( !v18 )
    goto LABEL_38;
  methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*v18 + 304LL) >= (unsigned int)methodPtr_low
    && *(BattleRootComponent_c **)(*(_QWORD *)(*v18 + 200LL) + 8 * methodPtr_low - 8) == BattleRootComponent_TypeInfo )
  {
    Instance = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)Instance + 4), 0LL);
    if ( !Instance )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v20 = v18[10];
    if ( !v20 )
      goto LABEL_38;
    Instance = *(void **)(v20 + 512);
    if ( !Instance )
      goto LABEL_38;
    BattleResultComponent__EndResult((BattleResultComponent_o *)Instance, 0LL);
    goto LABEL_36;
  }
  sub_1C2E648(*((_QWORD *)Instance + 4));
  clsQuestCheck__IsEnabledPrivilegePeriod(v28, v29, v30, v31);
}


void __fastcall clsQuestCheck__RefreshTerminalScene(clsQuestCheck_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BFA1E5 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4BFA1E5 = 1;
  }
  TopLoginRequest__ResetAccesTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v3);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  PartyOrganizationUtility_c *v13; // x21
  TerminalPramsManager_c *v14; // x0
  PartyOrganizationUtility_o *p_ClearEventQuestIds_k__BackingField; // x0
  const MethodInfo *v16; // x2
  System_Collections_Generic_IEnumerable_T__o *v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_String_o *v25; // x19
  TerminalPramsManager_c *v26; // x0
  PartyOrganizationUtility_o *v27; // x0

  if ( (byte_4BFA1DA & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_String_Join_int___, *(_QWORD *)&eventId);
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v10);
    sub_1C2E12C(&StringLiteral_845/*","*/, v11);
    sub_1C2E12C(&StringLiteral_1/*""*/, v12);
    byte_4BFA1DA = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v13 = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
  if ( !byte_4BFA27F )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4BFA27F = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  p_ClearEventQuestIds_k__BackingField = (PartyOrganizationUtility_o *)&v14->static_fields->_ClearEventQuestIds_k__BackingField;
  p_ClearEventQuestIds_k__BackingField->klass = v13;
  sub_1C2E0D0(p_ClearEventQuestIds_k__BackingField, (int64_t)v13, (int64_t)method, v3, v4, v5, v6, v7);
  v17 = (System_Collections_Generic_IEnumerable_T__o *)clsQuestCheck__GetEventQuestIdListPlayable(this, eventId, v16);
  v25 = System_String__Join_int_(
          (System_String_o *)StringLiteral_845/*","*/,
          v17,
          (const MethodInfo_307664C *)Method_System_String_Join_int___);
  if ( !byte_4BFA27F )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v18);
    byte_4BFA27F = 1;
  }
  v26 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
  }
  v27 = (PartyOrganizationUtility_o *)&v26->static_fields->_ClearEventQuestIds_k__BackingField;
  v27->klass = (PartyOrganizationUtility_c *)v25;
  sub_1C2E0D0(v27, (int64_t)v25, v19, v20, v21, v22, v23, v24);
  TerminalPramsManager__ClearEventQuestIds_SaveData(0LL);
}


void __fastcall clsQuestCheck__checkCondTypeItemGet(
        clsQuestCheck_o *this,
        bool *is_release,
        QuestReleaseEntity_o *qrd,
        bool itemGet,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  UserItemMaster_o *v12; // x22
  int32_t targetId; // w23
  int32_t num; // w22
  bool v15; // w8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BFA1CD & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserItemMaster___, is_release);
    sub_1C2E12C(&NetworkManager_TypeInfo, v8);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BFA1CD = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !qrd )
    goto LABEL_17;
  v12 = (UserItemMaster_o *)Instance;
  targetId = qrd->fields.targetId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BF81D5 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, v11);
    byte_4BF81D5 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !v12 )
    goto LABEL_17;
  Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                v12,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                targetId,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v15 = 1;
    goto LABEL_16;
  }
  if ( !entity )
LABEL_17:
    sub_1C2E388(Instance, v11);
  num = entity->fields.num;
  v15 = num < QuestReleaseEntity__getValueInt(qrd, 0LL);
LABEL_16:
  *is_release = (v15 ^ itemGet) & 1;
}


bool __fastcall clsQuestCheck__isPlayQuestStartAction(clsQuestCheck_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  int32_t WarId_k__BackingField; // w20
  int32_t QuestId_k__BackingField; // w19

  if ( (byte_4BFA1DD & 1) == 0 )
  {
    sub_1C2E12C(&ScriptManager_TypeInfo, method);
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v3);
    byte_4BFA1DD = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BFA281 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, method);
    byte_4BFA281 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v4->static_fields->_WarId_k__BackingField;
  if ( !byte_4BF8444 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4BF8444 = 1;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v4->static_fields->_QuestId_k__BackingField;
  if ( !clsQuestCheck__mfCheck_IsQuestNew((clsQuestCheck_o *)v4, QuestId_k__BackingField, v2) )
    return 0;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  return ScriptManager__isPlayQuestStart(WarId_k__BackingField, QuestId_k__BackingField, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__mfCheck_IsQuestNew(clsQuestCheck_o *this, int32_t qid, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BFA1CE & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&qid);
    sub_1C2E12C(&NetworkManager_TypeInfo, v4);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BFA1CE = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BF81D5 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, v7);
    byte_4BF81D5 = 1;
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
    sub_1C2E388(Instance, v7);
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall clsQuestCheck__mfGetQuestPhaseByQuestID(
        clsQuestCheck_o *this,
        int32_t qid,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BFA1CF & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&qid);
    sub_1C2E12C(&NetworkManager_TypeInfo, v4);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BFA1CF = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BF81D5 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, v7);
    byte_4BF81D5 = 1;
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
    sub_1C2E388(Instance, v7);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__mfQuestReleaseCheckAlreadyClear(
        clsQuestCheck_o *this,
        int32_t qid,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  bool v10; // w8
  bool result; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BFA1CB & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&qid);
    sub_1C2E12C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v5);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BFA1CB = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               qid,
                               (const MethodInfo_327B1CC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 1;
  if ( !entity )
LABEL_12:
    sub_1C2E388(Instance, v8);
  if ( (HIDWORD(entity[5].klass) | 4) != 5 )
    return 0;
  v10 = clsQuestCheck__IsQuestClear(this, qid, 0, v9);
  result = 0;
  if ( v10 )
    return 1;
  return result;
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v36; // x1
  const MethodInfo *v37; // x2
  void *Master_object; // x0
  __int64 v39; // x1
  _BOOL8 IsShop; // x0
  const MethodInfo *v41; // x2
  Il2CppObject *v42; // x23
  clsQuestCheck_Fields *p_fields; // x23
  int32_t UseDiceSpotId; // w24
  System_Collections_Generic_List_T__o *qrs; // x24
  clsQuestCheck___c_c *v47; // x0
  System_Func_object__bool__o *_9__5_0; // x25
  Il2CppObject *v49; // x26
  struct clsQuestCheck___c_StaticFields *static_fields; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct BalanceConfig_StaticFields *v57; // x8
  QuestEntity_o *Mine; // x0
  UserEventQuestCooltimeMaster_o *v59; // x24
  UserEventQuestCooltimeEntity_o *v60; // x0
  UserEventQuestCooltimeEntity_o *v61; // x24
  int64_t Time; // x0
  int64_t clearedAt; // x26
  int64_t v64; // x25
  int32_t v65; // w2
  int v66; // w8
  struct System_Collections_Generic_List_QuestReleaseEntity__o *cQuestReleaseListP; // x23
  System_Comparison_T__o *v68; // x24
  Il2CppObject *v69; // x25
  struct clsQuestCheck___c_StaticFields *v70; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  UserQuestEntity_o *v77; // x0
  Il2CppObject *v78; // x23
  bool v79; // w23
  _BOOL8 v80; // x0
  __int64 v81; // x1
  const MethodInfo *v82; // x4
  Il2CppObject *current; // x22
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  int v90; // w19
  int32_t klass; // w24
  System_Collections_Generic_IEnumerable_T__o *v92; // x25
  System_Collections_Generic_List_object__o *v93; // x24
  const MethodInfo *v94; // x2
  BalanceConfig_c *v95; // x0
  const MethodInfo *v96; // x2
  BalanceConfig_c *v97; // x0
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  System_Collections_Generic_List_Enumerator_object__o v104; // [xsp+8h] [xbp-88h] BYREF
  Il2CppObject *v105; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF
  UserQuestEntity_o *v107; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4BFA1C1 & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, *(_QWORD *)&questId);
    sub_1C2E12C(&Method_BasicHelper_Any_QuestReleaseEntity___, v12);
    sub_1C2E12C(&System_Comparison_QuestReleaseEntity__TypeInfo, v13);
    sub_1C2E12C(&CondType_TypeInfo, v14);
    sub_1C2E12C(&Method_DataManager_GetMaster_EventDetailMaster___, v15);
    sub_1C2E12C(&Method_DataManager_GetMaster_QuestReleaseMaster___, v16);
    sub_1C2E12C(&Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___, v17);
    sub_1C2E12C(&Method_DataManager_GetMaster_UserQuestMaster___, v18);
    sub_1C2E12C(&Method_DataManager_GetMaster_WarMaster___, v19);
    sub_1C2E12C(&DataManager_TypeInfo, v20);
    sub_1C2E12C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v21);
    sub_1C2E12C(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v22);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v23);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v24);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v25);
    sub_1C2E12C(&System_Func_QuestReleaseEntity__bool__TypeInfo, v26);
    sub_1C2E12C(&Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__, v27);
    sub_1C2E12C(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__, v28);
    sub_1C2E12C(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v29);
    sub_1C2E12C(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__, v30);
    sub_1C2E12C(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___77712552, v31);
    sub_1C2E12C(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v32);
    sub_1C2E12C(&NetworkManager_TypeInfo, v33);
    sub_1C2E12C(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__, v34);
    sub_1C2E12C(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__, v35);
    sub_1C2E12C(&clsQuestCheck___c_TypeInfo, v36);
    byte_4BFA1C1 = 1;
  }
  v105 = 0LL;
  entity = 0LL;
  memset(&v104, 0, sizeof(v104));
  *questReleaseNG = 0LL;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)questReleaseNG,
    0LL,
    (int64_t)questReleaseNG,
    (int32_t)questInfo,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, v37) )
    return 0;
  v107 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_WarMaster___);
  if ( !questInfo || !Master_object )
    goto LABEL_107;
  IsShop = DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             questInfo->fields.warId,
             (const MethodInfo_327B1CC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
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
      v42 = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BF81D5 )
      {
        sub_1C2E12C(&NetworkManager_TypeInfo, v39);
        byte_4BF81D5 = 1;
      }
      Master_object = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Master_object = NetworkManager_TypeInfo;
      }
      if ( !v42 )
        goto LABEL_107;
      IsShop = UserQuestMaster__TryGetEntity(
                 (UserQuestMaster_o *)v42,
                 &v107,
                 *(_QWORD *)(*((_QWORD *)Master_object + 23) + 64LL),
                 questId,
                 0LL);
      if ( IsShop )
      {
        Master_object = v107;
        if ( !v107 )
          goto LABEL_107;
        IsShop = UserQuestEntity__IsNotExpired(v107, 0LL);
        if ( IsShop )
          return 1;
      }
    }
  }
  if ( !clsQuestCheck__IsValidQuestRandomGroup((clsQuestCheck_o *)IsShop, questInfo, v41) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object )
    goto LABEL_107;
  p_fields = &this->fields;
  QuestReleaseMaster__getListByQuestID_40874012((QuestReleaseMaster_o *)Master_object, questId, &this->fields.qrs, 0LL);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !entity || !Master_object )
    goto LABEL_107;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &v105,
         (int32_t)entity[6].klass,
         (const MethodInfo_327B1CC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Master_object = v105;
    if ( !v105 )
      goto LABEL_107;
    if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v105, 0LL) )
    {
      Master_object = v105;
      if ( !v105 )
        goto LABEL_107;
      UseDiceSpotId = EventDetailEntity__GetUseDiceSpotId((EventDetailEntity_o *)v105, 0LL);
      if ( UseDiceSpotId == MapControl_QuestInfo__GetSpotID(questInfo, 0LL)
        && MapControl_QuestInfo__GetQuestType(questInfo, 0LL) == 1 )
      {
        qrs = (System_Collections_Generic_List_T__o *)p_fields->qrs;
        v47 = clsQuestCheck___c_TypeInfo;
        if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
          v47 = clsQuestCheck___c_TypeInfo;
        }
        _9__5_0 = (System_Func_object__bool__o *)v47->static_fields->__9__5_0;
        if ( !_9__5_0 )
        {
          if ( !v47->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v47);
            v47 = clsQuestCheck___c_TypeInfo;
          }
          v49 = (Il2CppObject *)v47->static_fields->__9;
          _9__5_0 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_QuestReleaseEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__5_0,
            v49,
            Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__,
            0LL);
          static_fields = clsQuestCheck___c_TypeInfo->static_fields;
          static_fields->__9__5_0 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__5_0;
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&static_fields->__9__5_0,
            (int64_t)_9__5_0,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56);
        }
        if ( !BasicHelper__Any_object_(
                qrs,
                (System_Func_T__bool__o *)_9__5_0,
                (const MethodInfo_2FBC23C *)Method_BasicHelper_Any_QuestReleaseEntity___) )
        {
          Master_object = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Master_object = BalanceConfig_TypeInfo;
          }
          v57 = (struct BalanceConfig_StaticFields *)*((_QWORD *)Master_object + 23);
          if ( v57->EventBoardGameNextBoardQuestId != questId )
          {
            if ( !*((_DWORD *)Master_object + 56) )
            {
              j_il2cpp_runtime_class_init_0(Master_object);
              v57 = BalanceConfig_TypeInfo->static_fields;
            }
            if ( v57->EventBoardGameNextRoundQuestId != questId )
            {
              if ( !entity )
                goto LABEL_107;
              klass = (int32_t)entity[6].klass;
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              if ( CondType__IsUserEventStatus(klass, 7, 0LL) )
                return 0;
              v92 = (System_Collections_Generic_IEnumerable_T__o *)p_fields->qrs;
              v93 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor_57061792(
                v93,
                v92,
                (const MethodInfo_366B1A0 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___77712552);
              v95 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v95 = BalanceConfig_TypeInfo;
              }
              if ( clsQuestCheck__CheckQuestPlayableNow(this, v95->static_fields->EventBoardGameNextBoardQuestId, v94) )
                return 0;
              v97 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v97 = BalanceConfig_TypeInfo;
              }
              if ( clsQuestCheck__CheckQuestPlayableNow(this, v97->static_fields->EventBoardGameNextRoundQuestId, v96) )
                return 0;
              p_fields->qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v93;
              sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields, (int64_t)v93, v98, v99, v100, v101, v102, v103);
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___);
    if ( !questInfo->fields._WarInfo_k__BackingField )
      goto LABEL_107;
    v59 = (UserEventQuestCooltimeMaster_o *)Master_object;
    Master_object = (void *)MapControl_WarInfo__GetEventId(questInfo->fields._WarInfo_k__BackingField, 0LL);
    if ( !v59 )
      goto LABEL_107;
    v60 = UserEventQuestCooltimeMaster__getEntity(v59, (int32_t)Master_object, questInfo->fields.questId, 1, 0LL);
    if ( v60 )
    {
      v61 = v60;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      clearedAt = v61->fields.clearedAt;
      v64 = Time;
      Master_object = UserEventQuestCooltimeEntity__GetMasterEntity(v61, 0LL);
      if ( !Master_object )
        goto LABEL_107;
      if ( v64 < clearedAt + *((int *)Master_object + 7) )
        return 0;
    }
  }
  if ( !p_fields->qrs )
    return 0;
  Master_object = this->fields.cQuestReleaseListP;
  if ( !Master_object )
    goto LABEL_107;
  v65 = *((_DWORD *)Master_object + 6);
  v66 = *((_DWORD *)Master_object + 7) + 1;
  *((_DWORD *)Master_object + 6) = 0;
  *((_DWORD *)Master_object + 7) = v66;
  if ( v65 >= 1 )
  {
    System_Array__Clear(*((System_Array_o **)Master_object + 2), 0, v65, 0LL);
    Master_object = this->fields.cQuestReleaseListP;
    if ( !Master_object )
      goto LABEL_107;
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Master_object,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.qrs,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__);
  cQuestReleaseListP = this->fields.cQuestReleaseListP;
  Master_object = clsQuestCheck___c_TypeInfo;
  if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
    Master_object = clsQuestCheck___c_TypeInfo;
  }
  v68 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 16LL);
  if ( !v68 )
  {
    if ( !*((_DWORD *)Master_object + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = clsQuestCheck___c_TypeInfo;
    }
    v69 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
    v68 = (System_Comparison_T__o *)sub_1C2E378(System_Comparison_QuestReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(
      v68,
      v69,
      Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__,
      0LL);
    v70 = clsQuestCheck___c_TypeInfo->static_fields;
    v70->__9__5_1 = (struct System_Comparison_QuestReleaseEntity__o *)v68;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v70->__9__5_1, (int64_t)v68, v71, v72, v73, v74, v75, v76);
  }
  if ( !cQuestReleaseListP )
    goto LABEL_107;
  System_Collections_Generic_List_object___Sort_57070448(
    (System_Collections_Generic_List_object__o *)cQuestReleaseListP,
    v68,
    (const MethodInfo_366D370 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  v77 = v107;
  if ( v107 )
  {
LABEL_82:
    v79 = !UserQuestEntity__HasStatus(v77, 8, 0LL);
    goto LABEL_83;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v78 = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BF81D5 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, v39);
    byte_4BF81D5 = 1;
  }
  Master_object = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = NetworkManager_TypeInfo;
  }
  if ( !v78 )
LABEL_107:
    sub_1C2E388(Master_object, v39);
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)v78,
    &v107,
    *(_QWORD *)(*((_QWORD *)Master_object + 23) + 64LL),
    questId,
    0LL);
  v77 = v107;
  if ( v107 )
    goto LABEL_82;
  v79 = 1;
LABEL_83:
  Master_object = this->fields.cQuestReleaseListP;
  if ( !Master_object )
    goto LABEL_107;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v104,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v80 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v104,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v80 )
      break;
    current = v104.fields._current;
    if ( v79 )
      goto LABEL_89;
    if ( !v104.fields._current )
      sub_1C2E388(v80, v81);
    if ( HIDWORD(v104.fields._current[1].klass) != 12 )
    {
LABEL_89:
      if ( !clsQuestCheck__IsQuestRelease_34689960(
              this,
              (QuestReleaseEntity_o *)v104.fields._current,
              -1,
              questInfo,
              v82) )
      {
        *questReleaseNG = (QuestReleaseEntity_o *)current;
        sub_1C2E0D0((PartyOrganizationUtility_o *)questReleaseNG, (int64_t)current, v84, v85, v86, v87, v88, v89);
        v90 = 19;
        goto LABEL_92;
      }
    }
  }
  v90 = 20;
LABEL_92:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v104,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v90 != 19;
}


void __fastcall clsQuestCheck___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFA1E8 & 1) == 0 )
  {
    sub_1C2E12C(&clsQuestCheck___c_TypeInfo, v1);
    byte_4BFA1E8 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(clsQuestCheck___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  clsQuestCheck___c_TypeInfo->static_fields->__9 = (struct clsQuestCheck___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)clsQuestCheck___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall clsQuestCheck___c___ctor(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_0(
        clsQuestCheck___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x21

  if ( (byte_4BFA1E9 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C2E12C(&Method_clsQuestCheck___c__DisplayClass41_1__CheckQuestPlayable_b__4__, v5);
    sub_1C2E12C(&clsQuestCheck___c__DisplayClass41_1_TypeInfo, v6);
    byte_4BFA1E9 = 1;
  }
  v7 = sub_1C2E378(clsQuestCheck___c__DisplayClass41_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_clsQuestCheck___c__DisplayClass41_1__CheckQuestPlayable_b__4__,
          0LL),
        !Instance) )
  {
    sub_1C2E388(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_1(
        clsQuestCheck___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x21

  if ( (byte_4BFA1EA & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C2E12C(&Method_clsQuestCheck___c__DisplayClass41_2__CheckQuestPlayable_b__5__, v5);
    sub_1C2E12C(&clsQuestCheck___c__DisplayClass41_2_TypeInfo, v6);
    byte_4BFA1EA = 1;
  }
  v7 = sub_1C2E378(clsQuestCheck___c__DisplayClass41_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_clsQuestCheck___c__DisplayClass41_2__CheckQuestPlayable_b__5__,
          0LL),
        !Instance) )
  {
    sub_1C2E388(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v11, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_10(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BFA1EC & 1) == 0 )
  {
    sub_1C2E12C(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4BFA1EC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v4);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2FBAAA8 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_12(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BFA1ED & 1) == 0 )
  {
    sub_1C2E12C(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4BFA1ED = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v4);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2FBAAA8 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_2(
        clsQuestCheck___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BFA1EE & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4BFA1EE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v4);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_3(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_6(
        clsQuestCheck___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x21

  if ( (byte_4BFA1EB & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C2E12C(&Method_clsQuestCheck___c__DisplayClass41_3__CheckQuestPlayable_b__7__, v5);
    sub_1C2E12C(&clsQuestCheck___c__DisplayClass41_3_TypeInfo, v6);
    byte_4BFA1EB = 1;
  }
  v7 = sub_1C2E378(clsQuestCheck___c__DisplayClass41_3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_clsQuestCheck___c__DisplayClass41_3__CheckQuestPlayable_b__7__,
          0LL),
        !Instance) )
  {
    sub_1C2E388(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v11, 0LL);
}


bool __fastcall clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_0(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C2E388(this, 0LL);
  return n->fields.type == 118;
}


int32_t __fastcall clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_1(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *a,
        QuestReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C2E388(this, a);
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
    sub_1C2E388(this, n);
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
    sub_1C2E388(this, n);
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


void __fastcall clsQuestCheck___c__DisplayClass41_0___CheckQuestPlayable_b__11(
        clsQuestCheck___c__DisplayClass41_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( !this->fields.__4__this )
    sub_1C2E388(this, result);
  clsQuestCheck__RecoverItemListDialogCallback(
    this->fields.__4__this,
    this->fields.questInfo,
    this->fields.srcEndTime,
    result,
    this->fields.boostId,
    v3);
}


void __fastcall clsQuestCheck___c__DisplayClass41_0___CheckQuestPlayable_b__8(
        clsQuestCheck___c__DisplayClass41_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( !this->fields.__4__this )
    sub_1C2E388(this, result);
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
    sub_1C2E388(this, result);
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


void __fastcall clsQuestCheck___c__DisplayClass41_1___CheckQuestPlayable_b__4(
        clsQuestCheck___c__DisplayClass41_1_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v8; // x20
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  int32_t v11; // w1
  Il2CppObject *v12; // x3

  if ( (byte_4BFA1EF & 1) == 0 )
  {
    sub_1C2E12C(&SceneJumpInfo_TypeInfo, method);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1C2E12C(&StringLiteral_12842/*"SellServant"*/, v4);
    sub_1C2E12C(&StringLiteral_12879/*"ServantCombine"*/, v5);
    byte_4BFA1EF = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_1C2E378(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39988936(v8, (System_String_o *)StringLiteral_12842/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v11 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1C2E388(v9, v10);
    case 1:
      v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v9 )
      {
        v11 = 71;
        v12 = 0LL;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_1C2E378(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39988848(v8, (System_String_o *)StringLiteral_12879/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v11 = 32;
LABEL_10:
        v9 = Instance;
        v12 = (Il2CppObject *)v8;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v9, v11, 1, v12, 0LL);
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


void __fastcall clsQuestCheck___c__DisplayClass41_2___CheckQuestPlayable_b__5(
        clsQuestCheck___c__DisplayClass41_2_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w1

  if ( (byte_4BFA1F0 & 1) == 0 )
  {
    sub_1C2E12C(&SceneJumpInfo_TypeInfo, method);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1C2E12C(&StringLiteral_12883/*"ServantEquipList"*/, v4);
    sub_1C2E12C(&StringLiteral_12842/*"SellServant"*/, v5);
    sub_1C2E12C(&StringLiteral_12882/*"ServantEQCombine"*/, v6);
    byte_4BFA1F0 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_1C2E378(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39988936(v9, (System_String_o *)StringLiteral_12842/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v12 = 22;
        goto LABEL_12;
      }
LABEL_14:
      sub_1C2E388(v10, v11);
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_1C2E378(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39988848(v9, (System_String_o *)StringLiteral_12883/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v12 = 71;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_1C2E378(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39988848(v9, (System_String_o *)StringLiteral_12882/*"ServantEQCombine"*/, 0LL);
      if ( Instance )
      {
        v12 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v12, 1, (Il2CppObject *)v9, 0LL);
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


void __fastcall clsQuestCheck___c__DisplayClass41_3___CheckQuestPlayable_b__7(
        clsQuestCheck___c__DisplayClass41_3_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4BFA1F1 & 1) == 0 )
  {
    sub_1C2E12C(&SceneJumpInfo_TypeInfo, method);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1C2E12C(&StringLiteral_12842/*"SellServant"*/, v4);
    byte_4BFA1F1 = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v6 = (SceneJumpInfo_o *)sub_1C2E378(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_39988936(v6, (System_String_o *)StringLiteral_12842/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_1C2E388(v7, v8);
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v6, 0LL);
  }
}