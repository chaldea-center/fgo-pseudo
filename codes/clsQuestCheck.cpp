void clsQuestCheck___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_5934D66 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11390/*"QuestStartEffect"*/);
    sub_21FFC50(&clsQuestCheck_TypeInfo);
    byte_5934D66 = 1;
  }
  v7 = StringLiteral_11390/*"QuestStartEffect"*/;
  clsQuestCheck_TypeInfo->static_fields->KEY_QUEST_START_EFFECT = (struct System_String_o *)StringLiteral_11390/*"QuestStartEffect"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)clsQuestCheck_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
}


void clsQuestCheck___ctor(clsQuestCheck_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5934D65 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_clsQuestCheck___ctor__);
    byte_5934D65 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.cQuestReleaseListP = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cQuestReleaseListP,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_476EF14 *)Method_SingletonTemplate_clsQuestCheck___ctor__);
}


bool clsQuestCheck__CheckQuestPlayable(
        clsQuestCheck_o *this,
        MapControl_QuestInfo_o *questInfo,
        int64_t srcEndTime,
        int32_t boostId,
        const MethodInfo *method)
{
  __int64 v9; // x24
  void *SpotID; // x0
  MapControl_QuestInfo_o *v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  MapControl_QuestInfo_o **v18; // x19
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t v25; // w28
  MapControl_QuestInfo_o *v26; // x8
  int32_t v27; // w23
  int32_t v28; // w20
  int32_t questPhase; // w29
  const MethodInfo *v30; // x3
  int32_t v31; // w25
  _BOOL4 isNotItemConsume; // w21
  UserGameEntity_o *v33; // x26
  QuestEntity_o *v34; // x27
  __int64 v35; // x2
  System_String_o *v36; // x19
  System_String_o *v37; // x20
  __int64 v38; // x2
  CommonUI_o *v39; // x21
  clsQuestCheck___c_c *v40; // x8
  struct clsQuestCheck___c_StaticFields *static_fields; // x9
  System_Action_o *_9__43_3; // x22
  Il2CppObject *v43; // x23
  struct clsQuestCheck___c_StaticFields *v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  System_Action_o *v51; // x19
  clsQuestCheck_o *v52; // x0
  const MethodInfo *v53; // x2
  TerminalPramsManager_c *v54; // x0
  int32_t v55; // w22
  __int64 v56; // x1
  __int64 v57; // x2
  int64_t v58; // x28
  TerminalPramsManager_c *v59; // x0
  struct TerminalPramsManager_StaticFields *v60; // x8
  UserServantMaster_o *v61; // x28
  Il2CppObject *MasterData_object; // x29
  __int64 v63; // x2
  CommonUI_o *v64; // x19
  int32_t v65; // w20
  int32_t svtKeep; // w21
  struct clsQuestCheck___c_StaticFields *v67; // x8
  ServantFrameShortDlgComponent_CallbackFunc_o *_9__43_0; // x22
  Il2CppObject *v69; // x23
  struct clsQuestCheck___c_StaticFields *v70; // x0
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  CommonUI_o *v77; // x0
  int32_t v78; // w1
  int32_t v79; // w2
  int32_t v80; // w3
  __int64 v81; // x2
  CommonUI_o *v82; // x19
  int32_t v83; // w20
  int32_t svtEquipKeep; // w21
  struct clsQuestCheck___c_StaticFields *v85; // x8
  Il2CppObject *v86; // x23
  struct clsQuestCheck___c_StaticFields *v87; // x0
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  int32_t Count; // w19
  __int64 v95; // x2
  CommonUI_o *v96; // x20
  BalanceConfig_c *v97; // x8
  int32_t CommandCodeFrameMax; // w21
  struct clsQuestCheck___c_StaticFields *v99; // x8
  Il2CppObject *v100; // x23
  struct clsQuestCheck___c_StaticFields *v101; // x0
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  bool v108; // w20
  int32_t v110; // w28
  Il2CppObject *v111; // x19
  RecoverDlgComponent_CallbackFunc_o *v112; // x20
  Il2CppObject *Instance; // x19
  RecoverDlgComponent_CallbackFunc_o *v114; // x20
  CommonUI_o *v115; // x0
  int32_t v116; // w1
  RecoverDlgComponent_CallbackFunc_o *v117; // x2
  bool v118; // w3
  Il2CppObject *v119; // x19
  RecoverDlgComponent_CallbackFunc_o *v120; // x20
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x24
  Il2CppObject *v122; // x25
  Il2CppObject *v123; // x27
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v125; // x23
  __int64 v126; // x2
  int32_t v127; // w29
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v129; // x8
  int *v130; // x26
  System_String_o **v131; // x28
  int64_t qp; // x8
  struct System_Int32_array *nums; // x9
  System_String_o *v134; // x0
  System_String_o *v135; // x0
  System_String_o *v136; // x19
  System_String_o *v137; // x0
  System_String_o *v138; // x19
  __int64 v139; // x2
  CommonUI_o *v140; // x20
  clsQuestCheck___c_c *v141; // x8
  struct clsQuestCheck___c_StaticFields *v142; // x9
  System_Action_o *_9__43_10; // x22
  System_String_o *v144; // x21
  Il2CppObject *v145; // x23
  System_String_o *v146; // x2
  System_String_o *v147; // x3
  int32_t v148; // w4
  int32_t v149; // w5
  bool v150; // w6
  bool v151; // w7
  struct clsQuestCheck___c_StaticFields *v152; // x0
  MissionNaviTransitionBoardItem_o *p__9__43_10; // x0
  QuestConsumeItemEntity_o *v154; // x24
  Il2CppObject *v155; // x25
  Il2CppObject *v156; // x27
  UserGameEntity_o *v157; // x0
  UserGameEntity_o *v158; // x23
  __int64 v159; // x2
  int32_t v160; // w29
  struct System_Int32_array *v161; // x8
  struct System_Int32_array *v162; // x8
  int *v163; // x26
  System_String_o **v164; // x28
  int64_t v165; // x8
  struct System_Int32_array *v166; // x9
  System_String_o *v167; // x0
  System_String_o *v168; // x0
  System_String_o *v169; // x19
  System_String_o *v170; // x0
  __int64 v171; // x2
  clsQuestCheck___c_c *v172; // x8
  struct clsQuestCheck___c_StaticFields *v173; // x9
  Il2CppObject *v174; // x23
  struct clsQuestCheck___c_StaticFields *v175; // x0
  Il2CppObject *Entity; // x0
  __int64 v177; // x1
  __int64 v178; // x2
  long double v179; // q0
  TerminalPramsManager_c *v180; // x0
  unsigned int v181; // w24
  __int64 v182; // x1
  __int64 v183; // x2
  TerminalPramsManager_c *v184; // x0
  int v185; // w9
  int v186; // w9
  int v187; // w9
  struct TerminalPramsManager_StaticFields *v188; // x8
  const MethodInfo_476E8C0 *v189; // x0
  __int64 v190; // x1
  __int64 v191; // x2
  int32_t VaildPayType; // w21
  TerminalPramsManager_c *v193; // x0
  struct TerminalPramsManager_StaticFields *v194; // x8
  const MethodInfo_476E8C0 *v195; // x0
  MapControl_QuestInfo_o *v196; // x8
  QuestMessageMaster_o *v197; // x19
  int32_t v198; // w2
  System_String_o *ValidMessage; // x0
  System_String_o *v200; // x19
  __int64 v201; // x1
  __int64 v202; // x2
  Il2CppObject *v203; // x20
  System_String_o *v204; // x21
  __int64 v205; // x2
  System_String_o *v206; // x22
  clsQuestCheck___c_c *v207; // x8
  struct clsQuestCheck___c_StaticFields *v208; // x9
  CommonConfirmDialog_ClickDelegate_o *_9__43_2; // x24
  System_String_o *v210; // x23
  Il2CppObject *v211; // x25
  struct clsQuestCheck___c_StaticFields *v212; // x0
  System_String_o *v213; // x2
  System_String_o *v214; // x3
  int32_t v215; // w4
  int32_t v216; // w5
  bool v217; // w6
  bool v218; // w7
  CommonUI_o *v219; // x0
  char v220; // [xsp+40h] [xbp-80h]
  char v221; // [xsp+40h] [xbp-80h]
  int32_t questId; // [xsp+44h] [xbp-7Ch]
  System_String_o *str0; // [xsp+48h] [xbp-78h]
  System_String_o *str0a; // [xsp+48h] [xbp-78h]
  int32_t v225; // [xsp+50h] [xbp-70h]
  int32_t key; // [xsp+54h] [xbp-6Ch]
  int32_t servantEquipSum[2]; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_5934D5E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&RecoverDlgComponent_CallbackFunc_TypeInfo);
    sub_21FFC50(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_21FFC50(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMessageMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_WarMaster___);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_clsQuestCheck___c__CheckQuestPlayable_b__43_0__);
    sub_21FFC50(&Method_clsQuestCheck___c__CheckQuestPlayable_b__43_10__);
    sub_21FFC50(&Method_clsQuestCheck___c__CheckQuestPlayable_b__43_12__);
    sub_21FFC50(&Method_clsQuestCheck___c__CheckQuestPlayable_b__43_1__);
    sub_21FFC50(&Method_clsQuestCheck___c__CheckQuestPlayable_b__43_2__);
    sub_21FFC50(&Method_clsQuestCheck___c__CheckQuestPlayable_b__43_3__);
    sub_21FFC50(&Method_clsQuestCheck___c__CheckQuestPlayable_b__43_6__);
    sub_21FFC50(&Method_clsQuestCheck___c__DisplayClass43_0__CheckQuestPlayable_b__11__);
    sub_21FFC50(&Method_clsQuestCheck___c__DisplayClass43_0__CheckQuestPlayable_b__8__);
    sub_21FFC50(&Method_clsQuestCheck___c__DisplayClass43_0__CheckQuestPlayable_b__9__);
    sub_21FFC50(&clsQuestCheck___c__DisplayClass43_0_TypeInfo);
    sub_21FFC50(&clsQuestCheck___c_TypeInfo);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_11338/*"QUEST_MESSAGE_DLG_DECIDE"*/);
    sub_21FFC50(&StringLiteral_11337/*"QUEST_MESSAGE_DLG_CANCEL"*/);
    sub_21FFC50(&StringLiteral_11336/*"QUEST_ITEM_COST_OVER"*/);
    sub_21FFC50(&StringLiteral_12675/*"SHORT_DLG_TITLE"*/);
    sub_21FFC50(&StringLiteral_44/*"\n\n"*/);
    sub_21FFC50(&StringLiteral_2976/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_11276/*"QUEST_AP_MAX_OVER"*/);
    sub_21FFC50(&Method_clsQuestCheck_RefreshTerminalScene__);
    byte_5934D5E = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  v9 = sub_21FFEBC(clsQuestCheck___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_225;
  *(_QWORD *)(v9 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = questInfo;
  v18 = (MapControl_QuestInfo_o **)(v9 + 24);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)questInfo, v19, v20, v21, v22, v23, v24);
  SpotID = *(void **)(v9 + 24);
  *(_QWORD *)(v9 + 32) = srcEndTime;
  *(_DWORD *)(v9 + 40) = boostId;
  if ( !SpotID )
    goto LABEL_225;
  v25 = *((_DWORD *)SpotID + 16);
  SpotID = (void *)MapControl_QuestInfo__GetSpotID((MapControl_QuestInfo_o *)SpotID, 0);
  v26 = *v18;
  if ( !*v18 )
    goto LABEL_225;
  v27 = (int)SpotID;
  v28 = v26->fields.questId;
  questPhase = v26->fields.questPhase;
  SpotID = (void *)MapControl_QuestInfo__GetActConsumeCost(*v18, 0);
  v11 = *v18;
  if ( !*v18 )
    goto LABEL_225;
  v31 = (int)SpotID;
  isNotItemConsume = v11->fields.isNotItemConsume;
  if ( !clsQuestCheck__IsQuestValid(this, v11, *(_QWORD *)(v9 + 32), v30) )
  {
    v51 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v51, (Il2CppObject *)this, Method_clsQuestCheck_RefreshTerminalScene__, 0);
    clsQuestCheck__OpenQuestTimeOverNoticeDialog(v52, v51, v53);
    goto LABEL_73;
  }
  SpotID = UserGameMaster__getSelfUserGame(0);
  if ( !*v18 )
    goto LABEL_225;
  v33 = (UserGameEntity_o *)SpotID;
  SpotID = MapControl_QuestInfo__GetMine(*v18, 0);
  if ( !SpotID )
    goto LABEL_225;
  v34 = (QuestEntity_o *)SpotID;
  SpotID = (void *)QuestEntity__GetConsumeType((QuestEntity_o *)SpotID, 0);
  if ( (_DWORD)SpotID == 1 )
  {
    if ( !v33 )
      goto LABEL_225;
    if ( v31 > v33->fields.actMax )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v35);
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12675/*"SHORT_DLG_TITLE"*/, 0);
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_11276/*"QUEST_AP_MAX_OVER"*/, 0);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v39 = (CommonUI_o *)SpotID;
      v40 = clsQuestCheck___c_TypeInfo;
      if ( !*(&clsQuestCheck___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo, v11, v38);
        v40 = clsQuestCheck___c_TypeInfo;
      }
      static_fields = v40->static_fields;
      _9__43_3 = static_fields->__9__43_3;
      if ( !_9__43_3 )
      {
        if ( !*(&v40->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v40, v11, v38);
          static_fields = clsQuestCheck___c_TypeInfo->static_fields;
        }
        v43 = (Il2CppObject *)static_fields->__9;
        _9__43_3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(_9__43_3, v43, Method_clsQuestCheck___c__CheckQuestPlayable_b__43_3__, 0);
        v44 = clsQuestCheck___c_TypeInfo->static_fields;
        v44->__9__43_3 = _9__43_3;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v44->__9__43_3,
          (int32_t)_9__43_3,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
      }
      if ( !v39 )
        goto LABEL_225;
      CommonUI__OpenNotificationDialog(v39, v36, v37, _9__43_3, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
      goto LABEL_73;
    }
  }
  key = v25;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v35);
  v225 = v27;
  if ( !byte_5932DF7 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932DF7 = 1;
  }
  v54 = TerminalPramsManager_TypeInfo;
  v55 = questPhase;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v35);
    v54 = TerminalPramsManager_TypeInfo;
  }
  v54->static_fields->_QuestId_k__BackingField = v28;
  TerminalPramsManager__SaveJobLevelSnapshot(v28, 0);
  v58 = *(_QWORD *)(v9 + 32);
  if ( !byte_5932DF8 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932DF8 = 1;
  }
  v59 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v56, v57);
    v59 = TerminalPramsManager_TypeInfo;
  }
  v60 = v59->static_fields;
  v60->_EndTime_k__BackingField = v58;
  v60->lastPlayQuestConsumeAp = v31;
  TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(0);
  SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_225;
  SpotID = DataManager__GetMasterData_object_(
             (DataManager_o *)SpotID,
             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SpotID )
    goto LABEL_225;
  v61 = (UserServantMaster_o *)SpotID;
  UserServantMaster__getCount((UserServantMaster_o *)SpotID, &servantEquipSum[1], servantEquipSum, 1, 0);
  SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_225;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)SpotID,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v61, 1, 0) )
  {
    SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v33 )
      goto LABEL_225;
    v64 = (CommonUI_o *)SpotID;
    v65 = servantEquipSum[1];
    svtKeep = v33->fields.svtKeep;
    SpotID = clsQuestCheck___c_TypeInfo;
    if ( !*(&clsQuestCheck___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo, v11, v63);
      SpotID = clsQuestCheck___c_TypeInfo;
    }
    v67 = (struct clsQuestCheck___c_StaticFields *)*((_QWORD *)SpotID + 23);
    _9__43_0 = v67->__9__43_0;
    if ( !_9__43_0 )
    {
      if ( !*((_DWORD *)SpotID + 57) )
      {
        j_il2cpp_runtime_class_init_0(SpotID, v11, v63);
        v67 = clsQuestCheck___c_TypeInfo->static_fields;
      }
      v69 = (Il2CppObject *)v67->__9;
      _9__43_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_21FFEBC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__43_0,
        v69,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__43_0__,
        0);
      v70 = clsQuestCheck___c_TypeInfo->static_fields;
      v70->__9__43_0 = _9__43_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v70->__9__43_0, (int32_t)_9__43_0, v71, v72, v73, v74, v75, v76);
    }
    if ( !v64 )
      goto LABEL_225;
    v77 = v64;
    v78 = v65;
    v79 = svtKeep;
    v80 = 0;
LABEL_72:
    CommonUI__OpenSvtFrameShortDlg(v77, v78, v79, v80, 1, _9__43_0, 0, 0);
LABEL_73:
    SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( SpotID )
    {
      ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)SpotID, 0);
      return 0;
    }
    goto LABEL_225;
  }
  SpotID = (void *)UserServantMaster__CheckEquipAdd(v61, 1, 1, 0);
  if ( ((unsigned __int8)SpotID & 1) != 0 )
  {
    SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v33 )
      goto LABEL_225;
    v82 = (CommonUI_o *)SpotID;
    v83 = servantEquipSum[0];
    svtEquipKeep = v33->fields.svtEquipKeep;
    SpotID = clsQuestCheck___c_TypeInfo;
    if ( !*(&clsQuestCheck___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo, v11, v81);
      SpotID = clsQuestCheck___c_TypeInfo;
    }
    v85 = (struct clsQuestCheck___c_StaticFields *)*((_QWORD *)SpotID + 23);
    _9__43_0 = v85->__9__43_1;
    if ( !_9__43_0 )
    {
      if ( !*((_DWORD *)SpotID + 57) )
      {
        j_il2cpp_runtime_class_init_0(SpotID, v11, v81);
        v85 = clsQuestCheck___c_TypeInfo->static_fields;
      }
      v86 = (Il2CppObject *)v85->__9;
      _9__43_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_21FFEBC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__43_0,
        v86,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__43_1__,
        0);
      v87 = clsQuestCheck___c_TypeInfo->static_fields;
      v87->__9__43_1 = _9__43_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v87->__9__43_1, (int32_t)_9__43_0, v88, v89, v90, v91, v92, v93);
    }
    if ( !v82 )
      goto LABEL_225;
    v77 = v82;
    v78 = v83;
    v79 = svtEquipKeep;
    v80 = 1;
    goto LABEL_72;
  }
  if ( !MasterData_object )
    goto LABEL_225;
  if ( UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)MasterData_object, 0, 0) )
  {
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)MasterData_object, 0);
    SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v33 )
      goto LABEL_225;
    v96 = (CommonUI_o *)SpotID;
    if ( !byte_59324C8 )
    {
      sub_21FFC50(&BalanceConfig_TypeInfo);
      byte_59324C8 = 1;
    }
    v97 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v11, v95);
      v97 = BalanceConfig_TypeInfo;
    }
    SpotID = clsQuestCheck___c_TypeInfo;
    CommandCodeFrameMax = v97->static_fields->CommandCodeFrameMax;
    if ( !*(&clsQuestCheck___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo, v11, v95);
      SpotID = clsQuestCheck___c_TypeInfo;
    }
    v99 = (struct clsQuestCheck___c_StaticFields *)*((_QWORD *)SpotID + 23);
    _9__43_0 = v99->__9__43_6;
    if ( !_9__43_0 )
    {
      if ( !*((_DWORD *)SpotID + 57) )
      {
        j_il2cpp_runtime_class_init_0(SpotID, v11, v95);
        v99 = clsQuestCheck___c_TypeInfo->static_fields;
      }
      v100 = (Il2CppObject *)v99->__9;
      _9__43_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_21FFEBC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__43_0,
        v100,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__43_6__,
        0);
      v101 = clsQuestCheck___c_TypeInfo->static_fields;
      v101->__9__43_6 = _9__43_0;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v101->__9__43_6,
        (int32_t)_9__43_0,
        v102,
        v103,
        v104,
        v105,
        v106,
        v107);
    }
    if ( !v96 )
      goto LABEL_225;
    v77 = v96;
    v78 = Count;
    v79 = CommandCodeFrameMax;
    v80 = 2;
    goto LABEL_72;
  }
  SpotID = (void *)QuestEntity__GetConsumeType(v34, 0);
  questId = v28;
  if ( (int)SpotID > 2 )
  {
    v110 = v55;
    if ( (_DWORD)SpotID == 3 )
    {
      ItemConsumeEntity = QuestEntity__getItemConsumeEntity(v34, isNotItemConsume, 0);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_225;
      v122 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_225;
      v123 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
      SelfUserGame = UserGameMaster__getSelfUserGame(0);
      if ( !ItemConsumeEntity )
        goto LABEL_176;
      v125 = SelfUserGame;
      str0 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0) )
        goto LABEL_176;
      v220 = 0;
      v127 = 0;
      do
      {
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v126);
        if ( !byte_5931D52 )
        {
          sub_21FFC50(&NetworkManager_TypeInfo);
          byte_5931D52 = 1;
        }
        SpotID = NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v126);
          SpotID = NetworkManager_TypeInfo;
        }
        itemIds = ItemConsumeEntity->fields.itemIds;
        if ( !itemIds )
          goto LABEL_225;
        if ( (unsigned int)v127 >= LODWORD(itemIds->max_length) )
          goto LABEL_226;
        if ( !v122 )
          goto LABEL_225;
        SpotID = UserItemMaster__GetEntity(
                   (UserItemMaster_o *)v122,
                   *(_QWORD *)(*((_QWORD *)SpotID + 23) + 64LL),
                   itemIds->m_Items[v127],
                   0);
        v129 = ItemConsumeEntity->fields.itemIds;
        if ( !v129 )
          goto LABEL_225;
        if ( (unsigned int)v127 >= LODWORD(v129->max_length) )
          goto LABEL_226;
        if ( !v123 )
          goto LABEL_225;
        v130 = (int *)SpotID;
        SpotID = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)v123,
                   v129->m_Items[v127],
                   (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !SpotID )
          goto LABEL_225;
        v131 = (System_String_o **)SpotID;
        if ( *((_DWORD *)SpotID + 12) == 1 )
        {
          if ( !v125 )
            goto LABEL_225;
          qp = v125->fields.qp;
        }
        else if ( v130 )
        {
          SpotID = (void *)ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0);
          qp = 0;
          if ( ((unsigned __int8)SpotID & 1) != 0 )
            qp = v130[7];
        }
        else
        {
          qp = 0;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_225;
        if ( (unsigned int)v127 >= LODWORD(nums->max_length) )
LABEL_226:
          sub_21FFED4(SpotID);
        if ( qp < nums->m_Items[v127] )
        {
          str0 = System_String__Concat_75481624(str0, (System_String_o *)StringLiteral_43/*"\n"*/, v131[3], 0);
          v220 = 1;
        }
        ++v127;
      }
      while ( QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, v127, 0) );
      v110 = v55;
      if ( (v220 & 1) == 0 )
        goto LABEL_176;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v126);
      v134 = LocalizationManager__Get((System_String_o *)StringLiteral_11336/*"QUEST_ITEM_COST_OVER"*/, 0);
      v135 = System_String__Format(v134, (Il2CppObject *)str0, 0);
      v136 = System_String__Concat_75438412(v135, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0);
      v137 = LocalizationManager__Get((System_String_o *)StringLiteral_2976/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0);
      v138 = System_String__Concat_75438412(v136, v137, 0);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v140 = (CommonUI_o *)SpotID;
      v141 = clsQuestCheck___c_TypeInfo;
      if ( !*(&clsQuestCheck___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo, v11, v139);
        v141 = clsQuestCheck___c_TypeInfo;
      }
      v142 = v141->static_fields;
      _9__43_10 = v142->__9__43_10;
      v144 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__43_10 )
      {
        if ( !*(&v141->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v141, v11, v139);
          v142 = clsQuestCheck___c_TypeInfo->static_fields;
        }
        v145 = (Il2CppObject *)v142->__9;
        _9__43_10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(_9__43_10, v145, Method_clsQuestCheck___c__CheckQuestPlayable_b__43_10__, 0);
        v152 = clsQuestCheck___c_TypeInfo->static_fields;
        v152->__9__43_10 = _9__43_10;
        p__9__43_10 = (MissionNaviTransitionBoardItem_o *)&v152->__9__43_10;
        goto LABEL_173;
      }
    }
    else
    {
      if ( (_DWORD)SpotID != 4 )
        goto LABEL_176;
      if ( !v33 )
        goto LABEL_225;
      if ( v31 > UserGameEntity__getAct(v33, 0) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v114 = (RecoverDlgComponent_CallbackFunc_o *)sub_21FFEBC(RecoverDlgComponent_CallbackFunc_TypeInfo);
        RecoverDlgComponent_CallbackFunc___ctor(
          v114,
          (Il2CppObject *)v9,
          Method_clsQuestCheck___c__DisplayClass43_0__CheckQuestPlayable_b__11__,
          0);
        if ( !Instance )
          goto LABEL_225;
        v115 = (CommonUI_o *)Instance;
        v116 = v31;
        v117 = v114;
        v118 = 1;
        goto LABEL_94;
      }
      v154 = QuestEntity__getItemConsumeEntity(v34, isNotItemConsume, 0);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_225;
      v155 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_225;
      v156 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
      v157 = UserGameMaster__getSelfUserGame(0);
      if ( !v154 )
        goto LABEL_176;
      v158 = v157;
      str0a = (System_String_o *)StringLiteral_1/*""*/;
      if ( !QuestConsumeItemEntity__IsAvailableAt(v154, 0, 0) )
        goto LABEL_176;
      v221 = 0;
      v160 = 0;
      do
      {
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v159);
        if ( !byte_5931D52 )
        {
          sub_21FFC50(&NetworkManager_TypeInfo);
          byte_5931D52 = 1;
        }
        SpotID = NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v159);
          SpotID = NetworkManager_TypeInfo;
        }
        v161 = v154->fields.itemIds;
        if ( !v161 )
          goto LABEL_225;
        if ( (unsigned int)v160 >= LODWORD(v161->max_length) )
          goto LABEL_226;
        if ( !v155 )
          goto LABEL_225;
        SpotID = UserItemMaster__GetEntity(
                   (UserItemMaster_o *)v155,
                   *(_QWORD *)(*((_QWORD *)SpotID + 23) + 64LL),
                   v161->m_Items[v160],
                   0);
        v162 = v154->fields.itemIds;
        if ( !v162 )
          goto LABEL_225;
        if ( (unsigned int)v160 >= LODWORD(v162->max_length) )
          goto LABEL_226;
        if ( !v156 )
          goto LABEL_225;
        v163 = (int *)SpotID;
        SpotID = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)v156,
                   v162->m_Items[v160],
                   (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !SpotID )
          goto LABEL_225;
        v164 = (System_String_o **)SpotID;
        if ( *((_DWORD *)SpotID + 12) == 1 )
        {
          if ( !v158 )
            goto LABEL_225;
          v165 = v158->fields.qp;
        }
        else if ( v163 )
        {
          SpotID = (void *)ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0);
          v165 = 0;
          if ( ((unsigned __int8)SpotID & 1) != 0 )
            v165 = v163[7];
        }
        else
        {
          v165 = 0;
        }
        v166 = v154->fields.nums;
        if ( !v166 )
          goto LABEL_225;
        if ( (unsigned int)v160 >= LODWORD(v166->max_length) )
          goto LABEL_226;
        if ( v165 < v166->m_Items[v160] )
        {
          str0a = System_String__Concat_75481624(str0a, (System_String_o *)StringLiteral_43/*"\n"*/, v164[3], 0);
          v221 = 1;
        }
        ++v160;
      }
      while ( QuestConsumeItemEntity__IsAvailableAt(v154, v160, 0) );
      v110 = v55;
      if ( (v221 & 1) == 0 )
        goto LABEL_176;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v159);
      v167 = LocalizationManager__Get((System_String_o *)StringLiteral_11336/*"QUEST_ITEM_COST_OVER"*/, 0);
      v168 = System_String__Format(v167, (Il2CppObject *)str0a, 0);
      v169 = System_String__Concat_75438412(v168, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0);
      v170 = LocalizationManager__Get((System_String_o *)StringLiteral_2976/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0);
      v138 = System_String__Concat_75438412(v169, v170, 0);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v140 = (CommonUI_o *)SpotID;
      v172 = clsQuestCheck___c_TypeInfo;
      if ( !*(&clsQuestCheck___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo, v11, v171);
        v172 = clsQuestCheck___c_TypeInfo;
      }
      v173 = v172->static_fields;
      _9__43_10 = v173->__9__43_12;
      v144 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__43_10 )
      {
        if ( !*(&v172->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v172, v11, v171);
          v173 = clsQuestCheck___c_TypeInfo->static_fields;
        }
        v174 = (Il2CppObject *)v173->__9;
        _9__43_10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(_9__43_10, v174, Method_clsQuestCheck___c__CheckQuestPlayable_b__43_12__, 0);
        v175 = clsQuestCheck___c_TypeInfo->static_fields;
        v175->__9__43_12 = _9__43_10;
        p__9__43_10 = (MissionNaviTransitionBoardItem_o *)&v175->__9__43_12;
LABEL_173:
        sub_21FFBF4(p__9__43_10, (int32_t)_9__43_10, v146, v147, v148, v149, v150, v151);
      }
    }
    if ( !v140 )
      goto LABEL_225;
    CommonUI__OpenNotificationDialog(v140, v144, v138, _9__43_10, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
    goto LABEL_73;
  }
  v110 = v55;
  if ( (_DWORD)SpotID == 1 )
  {
    if ( !v33 )
      goto LABEL_225;
    if ( v31 <= UserGameEntity__getAct(v33, 0) )
      goto LABEL_176;
    v119 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v120 = (RecoverDlgComponent_CallbackFunc_o *)sub_21FFEBC(RecoverDlgComponent_CallbackFunc_TypeInfo);
    RecoverDlgComponent_CallbackFunc___ctor(
      v120,
      (Il2CppObject *)v9,
      Method_clsQuestCheck___c__DisplayClass43_0__CheckQuestPlayable_b__8__,
      0);
    if ( !v119 )
      goto LABEL_225;
    v115 = (CommonUI_o *)v119;
    v116 = v31;
    v117 = v120;
    v118 = 0;
LABEL_94:
    CommonUI__OpenApRecoverItemListDialog(v115, v116, v117, v118, 0);
    return 0;
  }
  if ( (_DWORD)SpotID == 2 )
  {
    if ( !v33 )
      goto LABEL_225;
    if ( v31 > UserGameEntity__getRp(v33, 0) )
    {
      v111 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v112 = (RecoverDlgComponent_CallbackFunc_o *)sub_21FFEBC(RecoverDlgComponent_CallbackFunc_TypeInfo);
      RecoverDlgComponent_CallbackFunc___ctor(
        v112,
        (Il2CppObject *)v9,
        Method_clsQuestCheck___c__DisplayClass43_0__CheckQuestPlayable_b__9__,
        0);
      if ( v111 )
      {
        CommonUI__OpenRpRecoverItemListDialog((CommonUI_o *)v111, v31, v112, 0, 0);
        return 0;
      }
LABEL_225:
      sub_21FFECC(SpotID, v11);
    }
  }
LABEL_176:
  SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_225;
  SpotID = DataManager__GetMasterData_object_(
             (DataManager_o *)SpotID,
             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !SpotID )
    goto LABEL_225;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)SpotID,
             key,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity && WarEntity__IsFolder((WarEntity_o *)Entity, 0) )
  {
    v180 = TerminalPramsManager_TypeInfo;
    v181 = 3;
  }
  else
  {
    v180 = TerminalPramsManager_TypeInfo;
    v181 = 2;
  }
  if ( !*(&v180->_2.cctor_finished + 1) )
    *(__n128 *)&v179 = j_il2cpp_runtime_class_init_0(v180, v177, v178);
  sub_28C0240(v181, 0, v179);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v182, v183);
  if ( !byte_5934D86 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934D86 = 1;
  }
  v184 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v182, v183);
    v184 = TerminalPramsManager_TypeInfo;
  }
  v185 = (unsigned __int8)byte_5932DF9;
  v184->static_fields->_IsDoneShortcut_k__BackingField = 0;
  if ( !v185 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    v184 = TerminalPramsManager_TypeInfo;
    byte_5932DF9 = 1;
  }
  if ( !*(&v184->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v184, v182, v183);
    v184 = TerminalPramsManager_TypeInfo;
  }
  v186 = (unsigned __int8)byte_5931FBA;
  v184->static_fields->_PhaseCnt_k__BackingField = v110;
  if ( !v186 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    v184 = TerminalPramsManager_TypeInfo;
    byte_5931FBA = 1;
  }
  if ( !*(&v184->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v184, v182, v183);
    v184 = TerminalPramsManager_TypeInfo;
  }
  v187 = (unsigned __int8)byte_5932DFA;
  v184->static_fields->_SpotId_k__BackingField = v225;
  if ( !v187 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    v184 = TerminalPramsManager_TypeInfo;
    byte_5932DFA = 1;
  }
  if ( !*(&v184->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v184, v182, v183);
    v184 = TerminalPramsManager_TypeInfo;
  }
  v188 = v184->static_fields;
  v189 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  v188->_WarId_k__BackingField = key;
  SpotID = SingletonMonoBehaviour_object___get_Instance(v189);
  if ( !SpotID )
    goto LABEL_225;
  SpotID = DataManager__GetMasterData_object_(
             (DataManager_o *)SpotID,
             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_GachaMaster___);
  if ( !SpotID )
    goto LABEL_225;
  VaildPayType = GachaMaster__getVaildPayType((GachaMaster_o *)SpotID, 0);
  if ( !byte_5931FB8 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5931FB8 = 1;
  }
  v193 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v190, v191);
    v193 = TerminalPramsManager_TypeInfo;
  }
  v194 = v193->static_fields;
  v195 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  v194->_SummonType_k__BackingField = VaildPayType;
  SpotID = SingletonMonoBehaviour_object___get_Instance(v195);
  if ( !SpotID )
    goto LABEL_225;
  SpotID = DataManager__GetMasterData_object_(
             (DataManager_o *)SpotID,
             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMessageMaster___);
  v196 = *v18;
  if ( !*v18 )
    goto LABEL_225;
  v197 = (QuestMessageMaster_o *)SpotID;
  SpotID = (void *)MapControl_QuestInfo__GetPhaseMax(v196, 0);
  if ( !v197 )
    goto LABEL_225;
  v108 = 1;
  if ( v110 + 1 < (int)SpotID )
    v198 = v110 + 1;
  else
    v198 = (int)SpotID;
  ValidMessage = QuestMessageMaster__GetValidMessage(v197, questId, v198, 1, 0);
  if ( ValidMessage )
  {
    v200 = ValidMessage;
    v203 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v201, v202);
    v204 = LocalizationManager__Get((System_String_o *)StringLiteral_11338/*"QUEST_MESSAGE_DLG_DECIDE"*/, 0);
    SpotID = LocalizationManager__Get((System_String_o *)StringLiteral_11337/*"QUEST_MESSAGE_DLG_CANCEL"*/, 0);
    v206 = (System_String_o *)SpotID;
    v207 = clsQuestCheck___c_TypeInfo;
    if ( !*(&clsQuestCheck___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo, v11, v205);
      v207 = clsQuestCheck___c_TypeInfo;
    }
    v208 = v207->static_fields;
    _9__43_2 = v208->__9__43_2;
    v210 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__43_2 )
    {
      if ( !*(&v207->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v207, v11, v205);
        v208 = clsQuestCheck___c_TypeInfo->static_fields;
      }
      v211 = (Il2CppObject *)v208->__9;
      _9__43_2 = (CommonConfirmDialog_ClickDelegate_o *)sub_21FFEBC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        _9__43_2,
        v211,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__43_2__,
        0);
      v212 = clsQuestCheck___c_TypeInfo->static_fields;
      v212->__9__43_2 = _9__43_2;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v212->__9__43_2,
        (int32_t)_9__43_2,
        v213,
        v214,
        v215,
        v216,
        v217,
        v218);
    }
    if ( v203 )
    {
      v219 = (CommonUI_o *)v203;
      v108 = 1;
      CommonUI__OpenConfirmDialog_37291728(v219, v210, v200, v204, v206, _9__43_2, 0, 1, 0, 0);
      return v108;
    }
    goto LABEL_225;
  }
  return v108;
}


// local variable allocation has failed, the output may be wrong!
bool clsQuestCheck__CheckQuestPlayableNow(
        clsQuestCheck_o *this,
        int32_t questId,
        bool isIncludeTempData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  int v9; // w8
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Master_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x0
  __int64 v14; // x2
  bool v15; // w0
  const MethodInfo *v16; // x3
  bool IsOpenByTime; // w8
  QuestEntity_o *v19; // [xsp+0h] [xbp-50h] BYREF
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5934D3F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_QuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5934D3F = 1;
  }
  v19 = 0;
  entity = 0;
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, (const MethodInfo *)isIncludeTempData) )
    return 0;
  v9 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v19 = 0;
  entity = 0;
  if ( !v9 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v11);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v11);
    v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_26;
  if ( UserQuestMaster__TryGetEntity(
         (UserQuestMaster_o *)Master_object,
         &entity,
         (int64_t)v13[2].fields.list[1].monitor,
         questId,
         0) )
  {
    v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_26;
    if ( UserQuestEntity__IsNotExpired(entity, 0) )
      return 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v14);
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !v13 )
LABEL_26:
    sub_21FFECC(v13, v10);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v13,
          (Il2CppObject **)&v19,
          questId,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)v19;
  if ( !v19 )
    goto LABEL_26;
  IsOpenByTime = QuestEntity__IsOpenByTime(v19, 0, 0);
  v15 = 0;
  if ( IsOpenByTime )
    return clsQuestCheck__IsReleasedQuest(this, questId, isIncludeTempData, v16);
  return v15;
}


void clsQuestCheck__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  clsQuestCheck_c *v3; // x0
  System_String_o *KEY_QUEST_START_EFFECT; // x19

  if ( (byte_5934D3C & 1) == 0 )
  {
    sub_21FFC50(&EncryptedPlayerPrefs_TypeInfo);
    sub_21FFC50(&clsQuestCheck_TypeInfo);
    byte_5934D3C = 1;
  }
  v3 = clsQuestCheck_TypeInfo;
  if ( !*(&clsQuestCheck_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo, v1, v2);
    v3 = clsQuestCheck_TypeInfo;
  }
  KEY_QUEST_START_EFFECT = v3->static_fields->KEY_QUEST_START_EFFECT;
  if ( !*(&EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v1, v2);
  EncryptedPlayerPrefs__DeleteKey(KEY_QUEST_START_EFFECT, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


int32_t clsQuestCheck__GetBeforeClearQuestId(
        clsQuestCheck_o *this,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  bool v6; // w8
  int32_t result; // w0
  __int64 v8; // x1
  __int64 v9; // x2
  TerminalPramsManager_c *v10; // x0

  if ( (byte_5934D51 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934D51 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v6 = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0);
  result = -1;
  if ( !v6 || !is_quest_after_action )
    return result;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
LABEL_17:
    sub_21FFECC(Instance, v5);
  if ( !QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0) )
    return -1;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8, v9);
  if ( !byte_593205C )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593205C = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8, v9);
    v10 = TerminalPramsManager_TypeInfo;
  }
  return v10->static_fields->_QuestId_k__BackingField;
}


System_Int32_array *clsQuestCheck__GetEventQuestIdListPlayable(
        clsQuestCheck_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  System_Int32_array *Master_object; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v12; // x21
  unsigned __int64 v13; // x23
  int32_t v14; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10

  if ( (byte_5934D5A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_5934D5A = 1;
  }
  if ( eventId <= 0 )
    return (System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  v5 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Master_object )
    goto LABEL_21;
  Master_object = QuestGroupMaster__GetQuestIdListByEventId((QuestGroupMaster_o *)Master_object, eventId, 0);
  if ( !Master_object )
    goto LABEL_21;
  max_length = Master_object->max_length;
  v12 = Master_object;
  if ( (int)max_length >= 1 )
  {
    v13 = 0;
    do
    {
      if ( v13 >= (unsigned int)max_length )
        sub_21FFED4(Master_object);
      v14 = v12->m_Items[v13];
      Master_object = (System_Int32_array *)clsQuestCheck__CheckQuestPlayableNow(this, v14, 0, v10);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v5 )
          goto LABEL_21;
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_int__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v5,
            v14,
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v5->fields._size = size + 1;
          items->m_Items[size] = v14;
        }
      }
      LODWORD(max_length) = v12->max_length;
    }
    while ( (__int64)++v13 < (int)max_length );
  }
  if ( !v5 )
LABEL_21:
    sub_21FFECC(Master_object, v9);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *clsQuestCheck__GetNewPlayableEventQuestId(
        clsQuestCheck_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  TerminalPramsManager_c *v8; // x0
  System_String_o *ClearEventQuestIds_k__BackingField; // x0
  System_String_array *v10; // x21
  System_Converter_object__int__o *v11; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Int32_array *v28; // x19
  MissionNaviTransitionBoardItem_c *v29; // x20
  TerminalPramsManager_c *v30; // x0
  MissionNaviTransitionBoardItem_o *v31; // x0
  MissionNaviTransitionBoardItem_c *v33; // x19
  TerminalPramsManager_c *v34; // x0
  MissionNaviTransitionBoardItem_o *p_ClearEventQuestIds_k__BackingField; // x0

  if ( (byte_5934D59 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_ConvertAll_string__int___);
    sub_21FFC50(&System_Converter_string__int__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Except_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Int32_Parse__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5934D59 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&eventId, method);
  if ( !byte_5934D84 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934D84 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&eventId, method);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( System_String__IsNullOrEmpty(v5->static_fields->_ClearEventQuestIds_k__BackingField, 0) )
    return (System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v7);
  if ( !byte_5934D84 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934D84 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v7);
    v8 = TerminalPramsManager_TypeInfo;
  }
  ClearEventQuestIds_k__BackingField = v8->static_fields->_ClearEventQuestIds_k__BackingField;
  if ( !ClearEventQuestIds_k__BackingField
    || (v10 = System_String__Split(ClearEventQuestIds_k__BackingField, 0x2Cu, 0, 0),
        v11 = (System_Converter_object__int__o *)sub_21FFEBC(System_Converter_string__int__TypeInfo),
        System_Converter_object__int____ctor(v11, 0, Method_System_Int32_Parse__, 0),
        (ClearEventQuestIds_k__BackingField = (System_String_o *)System_Array__ConvertAll_object__int_(
                                                                   (System_Object_array *)v10,
                                                                   (System_Converter_TInput__TOutput__o *)v11,
                                                                   (const MethodInfo_3974B98 *)Method_System_Array_ConvertAll_string__int___)) == 0) )
  {
    sub_21FFECC(ClearEventQuestIds_k__BackingField, v6);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)ClearEventQuestIds_k__BackingField;
  if ( !ClearEventQuestIds_k__BackingField[1].klass )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v12);
    v33 = (MissionNaviTransitionBoardItem_c *)StringLiteral_1/*""*/;
    if ( !byte_5934D83 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5934D83 = 1;
    }
    v34 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v12);
      v34 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v34->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = v33;
    sub_21FFBF4(p_ClearEventQuestIds_k__BackingField, (int32_t)v33, v12, v13, v14, v15, v16, v17);
    TerminalPramsManager__ClearEventQuestIds_SaveData(0);
    return (System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)clsQuestCheck__GetEventQuestIdListPlayable(
                                                               this,
                                                               eventId,
                                                               (const MethodInfo *)v12);
  v20 = System_Linq_Enumerable__Except_int_(
          v19,
          v18,
          (const MethodInfo_384B728 *)Method_System_Linq_Enumerable_Except_int___);
  v28 = System_Linq_Enumerable__ToArray_int_(
          v20,
          (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v21, v22);
  v29 = (MissionNaviTransitionBoardItem_c *)StringLiteral_1/*""*/;
  if ( !byte_5934D83 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934D83 = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v21, v22);
    v30 = TerminalPramsManager_TypeInfo;
  }
  v31 = (MissionNaviTransitionBoardItem_o *)&v30->static_fields->_ClearEventQuestIds_k__BackingField;
  v31->klass = v29;
  sub_21FFBF4(v31, (int32_t)v29, v22, v23, v24, v25, v26, v27);
  TerminalPramsManager__ClearEventQuestIds_SaveData(0);
  return v28;
}


System_Collections_Generic_List_QuestEntity__o *clsQuestCheck__GetQuestEntityByQuestId(
        clsQuestCheck_o *this,
        System_Collections_Generic_List_int__o *qids,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *Entity; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  __int64 v23; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_int__o *v24; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_int__o v25; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5934D57 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_QuestEntity__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934D57 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___),
        !qids) )
  {
    sub_21FFECC(Instance, v6);
  }
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    qids,
    (const MethodInfo_4433BE8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v23 = 0;
  v24 = &v25;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_int___MoveNext(
           &v25,
           (const MethodInfo_40C2130 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v8 )
      break;
    if ( !v7 )
      sub_21FFECC(v8, v9);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v7,
               v25.fields._current,
               (const MethodInfo_3EDD388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    v17 = Entity;
    if ( !v4
      || (items = v4->fields._items,
          v19 = Method_System_Collections_Generic_List_QuestEntity__Add__,
          ++v4->fields._version,
          !items) )
    {
      sub_21FFECC(Entity, Entity);
    }
    size = v4->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v4,
        Entity,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &items->obj.klass + size;
      v4->fields._size = size + 1;
      v21[4] = (Il2CppClass *)v17;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v17, v11, v12, v13, v14, v15, v16);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v25,
    (const MethodInfo_40C212C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return (System_Collections_Generic_List_QuestEntity__o *)v4;
}


System_Collections_Generic_List_QuestEntity__o *clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
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


System_Collections_Generic_List_int__o *clsQuestCheck__GetReleaseQuestIdByServantFriendShip(
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
  unsigned int v15; // w27
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
  __int128 v26; // q0
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v30; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_5934D56 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor___91427360);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934D56 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v9 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_33;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 9, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_33;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_21FFED4(Instance);
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
                                      (const MethodInfo_3EDD388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0);
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
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v9,
                questId,
                *(const MethodInfo_4433138 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v9->fields._size = size + 1;
              items->m_Items[size] = questId;
            }
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_22;
    }
LABEL_33:
    sub_21FFECC(Instance, v11);
  }
LABEL_22:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v22 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_71510500(
      v22,
      (System_Collections_Generic_IEnumerable_T__o *)v9,
      (const MethodInfo_44329E4 *)Method_System_Collections_Generic_List_int___ctor___91427360);
    Instance = (DataManager_o *)clsQuestCheck__GetReleaseQuestIdByServantFriendShip(this, svt_id, -1, type_flag, v23);
    if ( !Instance )
      goto LABEL_33;
    v9 = (System_Collections_Generic_List_int__o *)Instance;
    v24 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v24 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_int___get_Item(
                                      v9,
                                      v24,
                                      (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v22 )
          goto LABEL_33;
        v25 = (int)Instance;
        System_Collections_Generic_List_int___GetEnumerator(
          &v29,
          v22,
          (const MethodInfo_4433BE8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v26 = *(_OWORD *)&v29.fields._list;
        v29.fields._list = 0;
        *(_QWORD *)&v29.fields._index = &v30;
        *(_OWORD *)&v30.fields._list = v26;
        *(_QWORD *)&v30.fields._current = v29.fields._current;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v30,
                  (const MethodInfo_40C2130 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v25 == v30.fields._current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v9,
              v24,
              (const MethodInfo_443487C *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v30,
          (const MethodInfo_40C212C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( v24-- <= 0 )
          return v9;
      }
    }
  }
  return v9;
}


System_Collections_Generic_List_int__o *clsQuestCheck__GetReleaseQuestIdByServantLimit(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLimitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__GetReleaseQuestIdByServantLimit_42707360(this, svt_id, oldLimitCount, 494, v4);
}


System_Collections_Generic_List_int__o *clsQuestCheck__GetReleaseQuestIdByServantLimit_42707360(
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
  unsigned int v15; // w27
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
  __int128 v26; // q0
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v30; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_5934D53 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor___91427360);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934D53 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v9 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_33;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_33;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_21FFED4(Instance);
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
                                      (const MethodInfo_3EDD388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0);
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
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v9,
                questId,
                *(const MethodInfo_4433138 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v9->fields._size = size + 1;
              items->m_Items[size] = questId;
            }
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_22;
    }
LABEL_33:
    sub_21FFECC(Instance, v11);
  }
LABEL_22:
  if ( (oldLimitCount & 0x80000000) == 0 )
  {
    v22 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_71510500(
      v22,
      (System_Collections_Generic_IEnumerable_T__o *)v9,
      (const MethodInfo_44329E4 *)Method_System_Collections_Generic_List_int___ctor___91427360);
    Instance = (DataManager_o *)clsQuestCheck__GetReleaseQuestIdByServantLimit_42707360(
                                  this,
                                  svt_id,
                                  -1,
                                  type_flag,
                                  v23);
    if ( !Instance )
      goto LABEL_33;
    v9 = (System_Collections_Generic_List_int__o *)Instance;
    v24 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v24 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_int___get_Item(
                                      v9,
                                      v24,
                                      (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v22 )
          goto LABEL_33;
        v25 = (int)Instance;
        System_Collections_Generic_List_int___GetEnumerator(
          &v29,
          v22,
          (const MethodInfo_4433BE8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v26 = *(_OWORD *)&v29.fields._list;
        v29.fields._list = 0;
        *(_QWORD *)&v29.fields._index = &v30;
        *(_OWORD *)&v30.fields._list = v26;
        *(_QWORD *)&v30.fields._current = v29.fields._current;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v30,
                  (const MethodInfo_40C2130 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v25 == v30.fields._current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v9,
              v24,
              (const MethodInfo_443487C *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v30,
          (const MethodInfo_40C212C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( v24-- <= 0 )
          return v9;
      }
    }
  }
  return v9;
}


System_Collections_Generic_List_int__o *clsQuestCheck__GetReleaseQuestIdByServantLimit_42708368(
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
  QuestReleaseEntity_array *ListByType; // x24
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x26
  unsigned int v16; // w21
  QuestReleaseEntity_o *v17; // x8
  int32_t questId; // w27
  const MethodInfo *v19; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v23; // x25
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
  __int128 v34; // q0
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v39; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_5934D54 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934D54 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  v10 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_47;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_47;
  max_length = ListByType->max_length;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( v16 < max_length )
    {
      v17 = ListByType->m_Items[v16];
      if ( !v17 )
        goto LABEL_47;
      if ( v17->fields.targetId == svt_id )
      {
        if ( !v15 )
          goto LABEL_47;
        questId = v17->fields.questId;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v15,
                     questId,
                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_47;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (Il2CppObject *)clsQuestCheck__IsQuestRelease(this, questId, oldLimitCount, 7, v19);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v10 )
              goto LABEL_47;
            items = v10->fields._items;
            v21 = Method_System_Collections_Generic_List_int__Add__;
            ++v10->fields._version;
            if ( !items )
              goto LABEL_47;
            size = v10->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v10,
                questId,
                *(const MethodInfo_4433138 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v10->fields._size = size + 1;
              items->m_Items[size] = questId;
            }
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_22;
    }
LABEL_48:
    sub_21FFED4(Instance);
  }
LABEL_22:
  v23 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  v24 = ListByType->max_length;
  if ( v24 >= 1 )
  {
    v25 = 0;
    while ( (unsigned int)v25 < v24 )
    {
      v26 = ListByType->m_Items[v25];
      if ( !v26 )
        goto LABEL_47;
      if ( v26->fields.targetId == svt_id )
      {
        if ( !v15 )
          goto LABEL_47;
        v27 = v26->fields.questId;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v15,
                     v27,
                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_47;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (Il2CppObject *)clsQuestCheck__IsQuestRelease(this, v27, newLimitCount, 7, v28);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v23 )
              goto LABEL_47;
            v29 = v23->fields._items;
            v30 = Method_System_Collections_Generic_List_int__Add__;
            ++v23->fields._version;
            if ( !v29 )
              goto LABEL_47;
            v31 = v23->fields._size;
            if ( (unsigned int)v31 >= LODWORD(v29->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v23,
                v27,
                *(const MethodInfo_4433138 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
            }
            else
            {
              v23->fields._size = v31 + 1;
              v29->m_Items[v31] = v27;
            }
          }
        }
      }
      v24 = ListByType->max_length;
      if ( (int)++v25 >= v24 )
        goto LABEL_37;
    }
    goto LABEL_48;
  }
LABEL_37:
  if ( !v23 )
LABEL_47:
    sub_21FFECC(Instance, v12);
  v32 = v23->fields._size - 1;
  if ( v32 >= 0 )
  {
    while ( 1 )
    {
      Instance = (Il2CppObject *)System_Collections_Generic_List_int___get_Item(
                                   v23,
                                   v32,
                                   (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v10 )
        goto LABEL_47;
      v33 = (int)Instance;
      System_Collections_Generic_List_int___GetEnumerator(
        &v38,
        v10,
        (const MethodInfo_4433BE8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v34 = *(_OWORD *)&v38.fields._list;
      v38.fields._list = 0;
      *(_QWORD *)&v38.fields._index = &v39;
      *(_OWORD *)&v39.fields._list = v34;
      *(_QWORD *)&v39.fields._current = v38.fields._current;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v39,
                (const MethodInfo_40C2130 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        if ( v33 == v39.fields._current )
        {
          System_Collections_Generic_List_int___RemoveAt(
            v23,
            v32,
            (const MethodInfo_443487C *)Method_System_Collections_Generic_List_int__RemoveAt__);
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v39,
        (const MethodInfo_40C212C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      if ( v32-- <= 0 )
        return v23;
    }
  }
  return v23;
}


System_Collections_Generic_List_int__o *clsQuestCheck__GetReleaseQuestIdByServantLv(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLv,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__GetReleaseQuestIdByServantLv_42706800(this, svt_id, oldLv, 494, v4);
}


System_Collections_Generic_List_int__o *clsQuestCheck__GetReleaseQuestIdByServantLv_42706800(
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
  unsigned int v15; // w29
  QuestReleaseEntity_o *v16; // x8
  int32_t questId; // w26
  const MethodInfo *v18; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10

  if ( (byte_5934D52 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934D52 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_23;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 6, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___);
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
        sub_21FFED4(Instance);
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
                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0);
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
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v9,
                questId,
                *(const MethodInfo_4433138 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v9->fields._size = size + 1;
              items->m_Items[size] = questId;
            }
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v15 >= max_length )
        return v9;
    }
LABEL_23:
    sub_21FFECC(Instance, v11);
  }
  return v9;
}


System_Collections_Generic_List_QuestEntity__o *clsQuestCheck__GetReleasedQuestEntityListByServantGet(
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
  unsigned int v13; // w23
  QuestReleaseEntity_o *v14; // x25
  __int64 v15; // x29
  int32_t questId; // w28
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  QuestReleaseEntity_array **v23; // x27
  System_Func_object__bool__o *v24; // x25
  const MethodInfo *v25; // x4
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  ServantGroupEntity_array *ListByServantID; // x19
  il2cpp_array_size_t v37; // x8
  QuestReleaseEntity_array *v38; // x24
  unsigned __int64 v39; // x29
  int v40; // w8
  unsigned int v41; // w23
  __int64 v42; // x19
  QuestReleaseEntity_o *v43; // x25
  __int64 v44; // x27
  int32_t v45; // w26
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  QuestReleaseEntity_array **v52; // x25
  System_Func_object__bool__o *v53; // x28
  const MethodInfo *v54; // x4
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass **v64; // x0
  QuestReleaseMaster_o *v66; // [xsp+0h] [xbp-80h]
  DataManager_o *v67; // [xsp+8h] [xbp-78h]
  DataManager_o *v68; // [xsp+8h] [xbp-78h]

  if ( (byte_5934D55 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_QuestEntity___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantGroupMaster___);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_21FFC50(&System_Func_QuestEntity__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_QuestEntity__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_clsQuestCheck___c__DisplayClass33_0__GetReleasedQuestEntityListByServantGet_b__0__);
    sub_21FFC50(&clsQuestCheck___c__DisplayClass33_0_TypeInfo);
    sub_21FFC50(&Method_clsQuestCheck___c__DisplayClass33_1__GetReleasedQuestEntityListByServantGet_b__1__);
    sub_21FFC50(&clsQuestCheck___c__DisplayClass33_1_TypeInfo);
    byte_5934D55 = 1;
  }
  Instance = (QuestReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  v7 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___);
  v9 = DataManager__GetMasterData_object_(
         v7,
         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  if ( !v9 )
    goto LABEL_49;
  v66 = (QuestReleaseMaster_o *)v9;
  v67 = v7;
  Instance = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)v9, 8, 0);
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
      v15 = sub_21FFEBC(clsQuestCheck___c__DisplayClass33_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v15, 0);
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
                                                 (const MethodInfo_3EDD388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v15 )
          goto LABEL_49;
        *(_QWORD *)(v15 + 16) = Instance;
        v23 = (QuestReleaseEntity_array **)(v15 + 16);
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 16), (int32_t)Instance, v17, v18, v19, v20, v21, v22);
        v24 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_QuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v24,
          (Il2CppObject *)v15,
          Method_clsQuestCheck___c__DisplayClass33_0__GetReleasedQuestEntityListByServantGet_b__0__,
          0);
        Instance = (QuestReleaseEntity_array *)BasicHelper__Any_object_(
                                                 (System_Collections_Generic_List_T__o *)v10,
                                                 (System_Func_T__bool__o *)v24,
                                                 (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = *v23;
          if ( !*v23 )
            goto LABEL_49;
          Instance = (QuestReleaseEntity_array *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0);
          if ( ((unsigned int)Instance & typeFlag) != 0 )
          {
            Instance = (QuestReleaseEntity_array *)clsQuestCheck__IsQuestRelease(this, questId, -1, 0, v25);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v10 )
                goto LABEL_49;
              items = v10->fields._items;
              v6 = (Il2CppObject *)*v23;
              v33 = Method_System_Collections_Generic_List_QuestEntity__Add__;
              ++v10->fields._version;
              if ( !items )
                goto LABEL_49;
              size = v10->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v10,
                  v6,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
              }
              else
              {
                v35 = &items->obj.klass + size;
                v10->fields._size = size + 1;
                v35[4] = (Il2CppClass *)v6;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v35 + 4), (int32_t)v6, v26, v27, v28, v29, v30, v31);
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
    sub_21FFED4(Instance);
  }
LABEL_23:
  Instance = (QuestReleaseEntity_array *)DataManager__GetMasterData_object_(
                                           v67,
                                           (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantGroupMaster___);
  if ( !Instance
    || (ListByServantID = ServantGroupMaster__getListByServantID((ServantGroupMaster_o *)Instance, servantId, 0),
        Instance = QuestReleaseMaster__getListByType(v66, 10, 0),
        !ListByServantID) )
  {
LABEL_49:
    sub_21FFECC(Instance, v6);
  }
  v37 = ListByServantID->max_length;
  if ( (int)v37 >= 1 )
  {
    v38 = Instance;
    v39 = 0;
    v68 = (DataManager_o *)ListByServantID;
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
      LODWORD(v37) = v68->fields.m_CancellationTokenSource;
      if ( (__int64)v39 >= (int)v37 )
        return (System_Collections_Generic_List_QuestEntity__o *)v10;
    }
    v41 = 0;
    v42 = *((_QWORD *)&v68->fields._DispLog + v39);
    while ( v41 < v40 )
    {
      v43 = v38->m_Items[v41];
      v44 = sub_21FFEBC(clsQuestCheck___c__DisplayClass33_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v44, 0);
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
                                                 (const MethodInfo_3EDD388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v44 )
          goto LABEL_49;
        *(_QWORD *)(v44 + 16) = Instance;
        v52 = (QuestReleaseEntity_array **)(v44 + 16);
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v44 + 16), (int32_t)Instance, v46, v47, v48, v49, v50, v51);
        v53 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_QuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v53,
          (Il2CppObject *)v44,
          Method_clsQuestCheck___c__DisplayClass33_1__GetReleasedQuestEntityListByServantGet_b__1__,
          0);
        Instance = (QuestReleaseEntity_array *)BasicHelper__Any_object_(
                                                 (System_Collections_Generic_List_T__o *)v10,
                                                 (System_Func_T__bool__o *)v53,
                                                 (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = *v52;
          if ( !*v52 )
            goto LABEL_49;
          Instance = (QuestReleaseEntity_array *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0);
          if ( ((unsigned int)Instance & typeFlag) != 0 )
          {
            Instance = (QuestReleaseEntity_array *)clsQuestCheck__IsQuestRelease(this, v45, -1, 0, v54);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v10 )
                goto LABEL_49;
              v61 = v10->fields._items;
              v6 = (Il2CppObject *)*v52;
              v62 = Method_System_Collections_Generic_List_QuestEntity__Add__;
              ++v10->fields._version;
              if ( !v61 )
                goto LABEL_49;
              v63 = v10->fields._size;
              if ( (unsigned int)v63 >= LODWORD(v61->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v10,
                  v6,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
              }
              else
              {
                v64 = &v61->obj.klass + v63;
                v10->fields._size = v63 + 1;
                v64[4] = (Il2CppClass *)v6;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v64 + 4), (int32_t)v6, v55, v56, v57, v58, v59, v60);
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


// local variable allocation has failed, the output may be wrong!
bool clsQuestCheck__IsConsumeStormPod(clsQuestCheck_o *this, int32_t questId, const MethodInfo *method)
{
  int v4; // w8
  QuestMaster_o *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x19
  Il2CppObject *v10; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x20
  bool v12; // w22
  unsigned int v13; // w21
  struct System_Int32_array *itemIds; // x8
  __int64 v15; // x2
  QuestMaster_o *v16; // x8
  BalanceConfig_c *v17; // x0
  int32_t MasterKind_k__BackingField; // w22
  QuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5934D64 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    byte_5934D64 = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId, method);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_26;
  if ( !QuestMaster__TryGetQuestEntity(Master_object, &entity, questId, 0) )
    return 0;
  Master_object = (QuestMaster_o *)entity;
  if ( !entity )
    goto LABEL_26;
  if ( (unsigned int)(QuestEntity__GetConsumeType(entity, 0) - 3) > 1 )
    return 0;
  Master_object = (QuestMaster_o *)entity;
  if ( !entity )
    goto LABEL_26;
  ItemConsumeEntity = QuestEntity__getItemConsumeEntity(entity, 0, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
  v10 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !ItemConsumeEntity )
    return 0;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)v10;
  Master_object = (QuestMaster_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0);
  v12 = 0;
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v13 = 0;
    while ( 1 )
    {
      itemIds = ItemConsumeEntity->fields.itemIds;
      if ( !itemIds )
        break;
      if ( v13 >= LODWORD(itemIds->max_length) )
        sub_21FFED4(Master_object);
      if ( !v11 )
        break;
      Master_object = (QuestMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                         v11,
                                         itemIds->m_Items[v13],
                                         (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Master_object )
        break;
      v16 = Master_object;
      v17 = BalanceConfig_TypeInfo;
      MasterKind_k__BackingField = v16->fields._MasterKind_k__BackingField;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6, v15);
        v17 = BalanceConfig_TypeInfo;
      }
      v12 = MasterKind_k__BackingField == v17->static_fields->stormPodItemId;
      if ( !v12 )
      {
        Master_object = (QuestMaster_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v13, 0);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          continue;
      }
      return v12;
    }
LABEL_26:
    sub_21FFECC(Master_object, v6);
  }
  return v12;
}


// local variable allocation has failed, the output may be wrong!
bool clsQuestCheck__IsEnabledPrivilegePeriod(
        clsQuestCheck_o *this,
        int32_t questId,
        int64_t nowTime,
        const MethodInfo *method)
{
  int v6; // w8
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v8; // x1
  int32_t OpenedPeriodPrivilegeId; // w0
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t v12; // w20
  __int64 v13; // x2
  Il2CppObject *v14; // x21
  int64_t v16; // [xsp+0h] [xbp-50h] BYREF
  int64_t startAt; // [xsp+8h] [xbp-48h] BYREF
  UserPrivilegeEntity_o *v18; // [xsp+10h] [xbp-40h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5934D61 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserPrivilegeMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5934D61 = 1;
  }
  v18 = 0;
  entity = 0;
  v6 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v16 = 0;
  startAt = 0;
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId, nowTime);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_24;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, questId, 1, 0) )
    return 0;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_24;
  OpenedPeriodPrivilegeId = QuestPhaseEntity__GetOpenedPeriodPrivilegeId(entity, 0);
  if ( OpenedPeriodPrivilegeId < 1 )
    return 1;
  v12 = OpenedPeriodPrivilegeId;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v11);
  v14 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserPrivilegeMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v13);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Master_object = (QuestPhaseMaster_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v13);
    Master_object = (QuestPhaseMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v14 )
    goto LABEL_24;
  if ( !UserPrivilegeMaster__TryGetEntity(
          (UserPrivilegeMaster_o *)v14,
          &v18,
          *((_QWORD *)Master_object[2].monitor + 8),
          v12,
          0) )
    return 0;
  Master_object = (QuestPhaseMaster_o *)v18;
  if ( !v18 )
LABEL_24:
    sub_21FFECC(Master_object, v8);
  return UserPrivilegeEntity__IsValidPeriod(v18, &startAt, &v16, nowTime, 0);
}


bool clsQuestCheck__IsEncountRaidBoss(clsQuestCheck_o *this, int32_t eventId, int32_t day, const MethodInfo *method)
{
  System_Int32_array *Instance; // x0
  __int64 v8; // x1
  EventRaidMaster_o *v9; // x22
  int32_t RaidDeadQuestId; // w23
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4
  const MethodInfo *v14; // x4
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v16; // x20
  unsigned __int64 v17; // x21

  if ( (byte_5934D45 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_5934D45 = 1;
  }
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_18;
  v9 = (EventRaidMaster_o *)Instance;
  RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId((EventRaidMaster_o *)Instance, eventId, day, 0);
  Instance = (System_Int32_array *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, RaidDeadQuestId, 0, v11)
    || clsQuestCheck__IsQuestRelease(this, RaidDeadQuestId, -1, 0, v12) )
  {
    LOBYTE(Instance) = 1;
    return (unsigned __int8)Instance & 1;
  }
  Instance = EventRaidMaster__GetRaidAliveQuestIds(v9, eventId, day, 0);
  if ( !Instance )
LABEL_18:
    sub_21FFECC(Instance, v8);
  max_length = Instance->max_length;
  v16 = Instance;
  if ( (int)max_length < 1 )
  {
    LOBYTE(Instance) = 0;
  }
  else
  {
    v17 = 0;
    do
    {
      if ( v17 >= (unsigned int)max_length )
        sub_21FFED4(Instance);
      Instance = (System_Int32_array *)clsQuestCheck__IsQuestRelease(this, v16->m_Items[v17], -1, 0, v14);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      LODWORD(max_length) = v16->max_length;
      ++v17;
    }
    while ( (__int64)v17 < (int)max_length );
  }
  return (unsigned __int8)Instance & 1;
}


bool clsQuestCheck__IsLastWarClear(clsQuestCheck_o *this, const MethodInfo *method)
{
  clsQuestCheck_o *Value; // x0
  const MethodInfo *v3; // x2

  if ( (byte_5934D47 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8590/*"LAST_WAR_ID"*/);
    byte_5934D47 = 1;
  }
  Value = (clsQuestCheck_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8590/*"LAST_WAR_ID"*/, 0);
  return clsQuestCheck__IsWarClear(Value, (int32_t)Value, v3);
}


bool clsQuestCheck__IsMainInterlude(clsQuestCheck_o *this, int32_t war_id, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_5934D48 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_WarMaster___);
    sub_21FFC50(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934D48 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v5);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             war_id,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = WarEntity__IsMainInterlude((WarEntity_o *)Entity, 0);
  return (char)Entity;
}


// local variable allocation has failed, the output may be wrong!
bool clsQuestCheck__IsQuestClear(
        clsQuestCheck_o *this,
        int32_t qid,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t v8; // w20

  if ( (byte_5934D4E & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_21FFC50(&CondType_TypeInfo);
    byte_5934D4E = 1;
  }
  v8 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6, v7);
  return CondType__IsQuestClear_47254560(qid, v8, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
bool clsQuestCheck__IsQuestClearRaw(
        clsQuestCheck_o *this,
        int32_t qid,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t v8; // w20

  if ( (byte_5934D4F & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_21FFC50(&CondType_TypeInfo);
    byte_5934D4F = 1;
  }
  v8 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6, v7);
  return CondType__IsQuestClear_47254560(qid, v8, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
bool clsQuestCheck__IsQuestPhaseClear(
        clsQuestCheck_o *this,
        int32_t qid,
        int32_t phase,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t v10; // w21
  NetworkManager_c *v11; // x0
  int64_t userIdNumber; // x22

  if ( (byte_5934D50 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    this = (clsQuestCheck_o *)sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5934D50 = 1;
  }
  v10 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, *(const MethodInfo **)&phase);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v11 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
    v11 = NetworkManager_TypeInfo;
  }
  userIdNumber = v11->static_fields->userIdNumber;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v8, v9);
  return CondType__IsQuestPhaseClear(userIdNumber, qid, phase, v10, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
bool clsQuestCheck__IsQuestRelease(
        clsQuestCheck_o *this,
        int32_t quest_id,
        int32_t old_val,
        int32_t old_val_qr_type,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *monitor; // x24
  bool v12; // w19
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  QuestReleaseEntity_o *v26; // x0
  const MethodInfo *v27; // x4
  int32_t v28; // w2
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  System_Collections_Generic_IEnumerator_T__o *v34; // [xsp+18h] [xbp-48h]

  if ( (byte_5934D44 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__getEntityList__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_QuestReleaseEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_5934D44 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&quest_id, *(_QWORD *)&old_val);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object || (monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor) == 0 )
    sub_21FFECC(Master_object, v10);
  v12 = System_Collections_ObjectModel_Collection_object___get_Count(
          (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor,
          (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__) > 0;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 monitor,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__GetEnumerator__);
  v34 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(0, v14);
  for ( i = Enumerator; ; i = v34 )
  {
    klass = i->klass;
    v17 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_13;
      }
      v19 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_13:
      v19 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            i,
            *(_QWORD *)(v19 + 8));
    if ( (v20 & 1) == 0 )
      break;
    if ( !v34 )
      sub_21FFECC(v20, v21);
    v22 = v34->klass;
    v23 = *(unsigned __int16 *)&v34->klass->_2.rank;
    if ( *(_WORD *)&v34->klass->_2.rank )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestReleaseEntity__c **)v24 - 1) != System_Collections_Generic_IEnumerator_QuestReleaseEntity__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_21;
      }
      v25 = (__int64)&v22->vtable[*v24];
    }
    else
    {
LABEL_21:
      v25 = sub_2237E2C(v34, System_Collections_Generic_IEnumerator_QuestReleaseEntity__TypeInfo, 0);
    }
    v26 = (QuestReleaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                    v34,
                                    *(_QWORD *)(v25 + 8));
    if ( !v26 )
      sub_21FFECC(0, 0);
    if ( v26->fields.questId == quest_id )
    {
      if ( old_val < 0 )
        v28 = -1;
      else
        v28 = v26->fields.type == old_val_qr_type ? old_val : -1;
      if ( !clsQuestCheck__IsQuestRelease_42703840(this, v26, v28, 0, v27) )
      {
        v12 = 0;
        break;
      }
    }
  }
  if ( v34 )
  {
    v29 = v34->klass;
    v30 = *(unsigned __int16 *)&v34->klass->_2.rank;
    if ( *(_WORD *)&v34->klass->_2.rank )
    {
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_40;
      }
      v32 = (__int64)&v29->vtable[*v31];
    }
    else
    {
LABEL_40:
      v32 = sub_2237E2C(v34, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(v34, *(_QWORD *)(v32 + 8));
  }
  return v12;
}


bool clsQuestCheck__IsQuestRelease_42699040(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        MapControl_QuestInfo_o *qinf,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_42703840(this, qrd, -1, qinf, v4);
}


bool clsQuestCheck__IsQuestRelease_42702948(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        int32_t old_val,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_42703840(this, qrd, old_val, 0, v4);
}


// local variable allocation has failed, the output may be wrong!
bool clsQuestCheck__IsQuestRelease_42703840(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        int32_t old_val,
        MapControl_QuestInfo_o *qinf,
        const MethodInfo *method)
{
  char v5; // cf
  char v6; // zf
  int32_t type; // w22
  int32_t v11; // w20
  int32_t v12; // w21
  int32_t targetId; // w20
  int64_t value; // x19
  int32_t v16; // w0
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t v19; // w20
  int32_t v20; // w21
  __int64 v21; // x1
  __int64 v22; // x2
  int32_t v23; // w19
  int32_t v24; // w0
  int32_t v25; // w1
  int32_t v26; // w2
  bool v27; // w3
  int32_t v29; // w20
  int32_t v30; // w21
  __int64 v31; // x1
  __int64 v32; // x2
  int32_t v33; // w19
  __int64 v34; // x1
  __int64 v35; // x2
  Il2CppObject *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  Il2CppObject *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  int32_t *v42; // x19
  int64_t Time; // x20
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_openedAt; // x8
  int32_t *p_closedAt; // x9
  int64_t v47; // x9
  __int64 v49; // x1
  __int64 v50; // x2
  QuestReleaseEntity_o *v51; // x2
  bool v52; // w3
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  int32_t v57; // w19
  int32_t v58; // w20
  int32_t questId; // w22
  __int64 v60; // x1
  __int64 v61; // x2
  int32_t ValueInt; // w19
  System_Int32_array *v63; // x1
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  TotalEventRaidEntity_o *v69; // [xsp+8h] [xbp-48h] BYREF
  EventRaidEntity_o *entity; // [xsp+10h] [xbp-40h] BYREF
  System_Int32_array *sameGroupQuestIds; // [xsp+18h] [xbp-38h] BYREF
  bool is_release; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_5934D4A & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    this = (clsQuestCheck_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934D4A = 1;
  }
  is_release = 0;
  entity = 0;
  sameGroupQuestIds = 0;
  v69 = 0;
  if ( !qrd )
LABEL_105:
    sub_21FFECC(this, qrd);
  type = qrd->fields.type;
  if ( !v6 & v5 )
  {
LABEL_20:
    targetId = qrd->fields.targetId;
    value = qrd->fields.value;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, qrd, *(_QWORD *)&old_val);
    v16 = type;
  }
  else
  {
    switch ( type )
    {
      case 0:
        return 1;
      case 1:
        return clsQuestCheck__IsQuestClear(this, qrd->fields.targetId, 0, (const MethodInfo *)qinf);
      case 2:
        v51 = qrd;
        v52 = 1;
        goto LABEL_97;
      case 3:
      case 4:
      case 5:
        return is_release;
      case 6:
        if ( clsQuestCheck__IsQuestClear(this, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        if ( (old_val & 0x80000000) == 0 )
          return QuestReleaseEntity__getValueInt(qrd, 0) <= old_val;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v53, v54);
        v16 = 6;
        break;
      case 7:
        if ( clsQuestCheck__IsQuestClear(this, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        if ( (old_val & 0x80000000) == 0 )
          return QuestReleaseEntity__getValueInt(qrd, 0) <= old_val;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v55, v56);
        v16 = 7;
        break;
      case 8:
        if ( clsQuestCheck__IsQuestClear(this, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v66, v67);
        v16 = 8;
        break;
      case 9:
        if ( clsQuestCheck__IsQuestClear(this, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        if ( (old_val & 0x80000000) == 0 )
          return QuestReleaseEntity__getValueInt(qrd, 0) <= old_val;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v64, v65);
        v16 = 9;
        break;
      case 10:
        if ( clsQuestCheck__IsQuestClear(this, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v37, v38);
        v16 = 10;
        break;
      case 11:
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, qrd, *(_QWORD *)&old_val);
        v16 = 11;
        break;
      case 12:
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_105;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_105;
        v39 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                qrd->fields.questId,
                (const MethodInfo_3EDD388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v39 )
          return is_release;
        v42 = (int32_t *)v39;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40, v41);
        Time = NetworkManager__getTime(0);
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_105;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestAddMaster___);
        if ( !this )
          goto LABEL_105;
        ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)this, v42[4], 0);
        p_openedAt = v42 + 39;
        if ( ReplaceDataByQuestId )
        {
          p_openedAt = &ReplaceDataByQuestId->fields.openedAt;
          p_closedAt = &ReplaceDataByQuestId->fields.closedAt;
        }
        else
        {
          p_closedAt = v42 + 40;
        }
        v47 = *p_closedAt;
        return Time >= *p_openedAt && Time < v47;
      case 13:
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_105;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_105;
        v36 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                qrd->fields.questId,
                (const MethodInfo_3EDD388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v36 )
          return is_release;
        return QuestEntity__IsOpenByTime((QuestEntity_o *)v36, 1, 0);
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
        v57 = qrd->fields.targetId;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, qrd, *(_QWORD *)&old_val);
        return CondType__IsMissionAchive(v57, 0);
      case 26:
        v58 = qrd->fields.targetId;
        questId = qrd->fields.questId;
        ValueInt = QuestReleaseEntity__getValueInt(qrd, 0);
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v60, v61);
        is_release = CondType__IsNotQuestGroupClear(questId, v58, ValueInt, &sameGroupQuestIds, 1, 0);
        if ( qinf )
        {
          v63 = sameGroupQuestIds;
          qinf->fields._GroupId_k__BackingField = v58;
          MapControl_QuestInfo__AddSameGroupQuestIds(qinf, v63, 0);
        }
        return is_release;
      case 27:
      case 28:
        v11 = qrd->fields.targetId;
        v12 = QuestReleaseEntity__getValueInt(qrd, 0);
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_105;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventRaidMaster___);
        if ( !this )
          goto LABEL_105;
        if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)this, &entity, v11, v12, 0) )
          return is_release;
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_105;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
        if ( !this )
          goto LABEL_105;
        this = (clsQuestCheck_o *)TotalEventRaidMaster__TryGetEntity((TotalEventRaidMaster_o *)this, &v69, v11, v12, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
          return is_release;
        if ( !entity || !v69 )
          goto LABEL_105;
        return (entity->fields.maxHp > v69->fields.totalDamage) ^ (qrd->fields.type != 27);
      case 32:
        v29 = qrd->fields.questId;
        v30 = qrd->fields.targetId;
        v33 = QuestReleaseEntity__getValueInt(qrd, 0);
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v31, v32);
        v24 = v29;
        v25 = v30;
        v26 = v33;
        v27 = 1;
        return CondType__IsQuestGroupClear(v24, v25, v26, v27, 0);
      case 38:
        if ( clsQuestCheck__IsQuestClear(this, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v49, v50);
        v16 = 38;
        break;
      case 53:
        v51 = qrd;
        v52 = 0;
LABEL_97:
        clsQuestCheck__checkCondTypeItemGet(this, &is_release, v51, v52, method);
        return is_release;
      case 54:
        if ( clsQuestCheck__IsQuestClear(this, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v34, v35);
        v16 = 54;
        break;
      default:
        if ( type == 58 )
        {
          v19 = qrd->fields.questId;
          v20 = qrd->fields.targetId;
          v23 = QuestReleaseEntity__getValueInt(qrd, 0);
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v21, v22);
          v24 = v19;
          v25 = v20;
          v26 = v23;
          v27 = 0;
          return CondType__IsQuestGroupClear(v24, v25, v26, v27, 0);
        }
        if ( type != 64 )
        {
          if ( type != 92 )
            goto LABEL_20;
          return 0;
        }
        if ( clsQuestCheck__IsQuestClear(this, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v17, v18);
        v16 = 64;
        break;
    }
  }
  return CondType__IsOpen(v16, targetId, value, 0, 0, 0);
}


bool clsQuestCheck__IsQuestValid(
        clsQuestCheck_o *this,
        MapControl_QuestInfo_o *questInfo,
        int64_t endTime,
        const MethodInfo *method)
{
  void *IsQuestReleaseAll; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x2
  Il2CppObject *Master_object; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  clsQuestCheck_o *Time; // x0
  const MethodInfo *v16; // x3
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5934D60 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934D60 = 1;
  }
  entity = 0;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, questInfo, endTime);
  IsQuestReleaseAll = (void *)TerminalPramsManager__get_Debug_IsQuestReleaseAll(0);
  if ( ((unsigned __int8)IsQuestReleaseAll & 1) != 0 )
    return 1;
  if ( !questInfo )
    goto LABEL_28;
  IsQuestReleaseAll = MapControl_QuestInfo__GetMine(questInfo, 0);
  if ( !IsQuestReleaseAll )
    goto LABEL_28;
  if ( *((_DWORD *)IsQuestReleaseAll + 20) == 1 )
    return 1;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v9);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  IsQuestReleaseAll = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v9);
    IsQuestReleaseAll = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
LABEL_28:
    sub_21FFECC(IsQuestReleaseAll, v7);
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)Master_object,
    &entity,
    *(_QWORD *)(*((_QWORD *)IsQuestReleaseAll + 23) + 64LL),
    questInfo->fields.questId,
    0);
  if ( entity && UserQuestEntity__IsNotExpired(entity, 0) )
    return 1;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
  Time = (clsQuestCheck_o *)NetworkManager__getTime(0);
  return (endTime < 1 || endTime - (__int64)Time >= 1)
      && clsQuestCheck__IsEnabledPrivilegePeriod(Time, questInfo->fields.questId, (int64_t)Time, v16);
}


bool clsQuestCheck__IsReleasedLoginQuest(
        clsQuestCheck_o *this,
        LoginQuestEntity_o *loginQuestEnt,
        const MethodInfo *method)
{
  int v5; // w8
  QuestReleaseMaster_o *Master_object; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  int64_t v10; // x21
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x4
  bool v13; // w22
  bool v15; // w19
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5934D43 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5934D43 = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v17, 0, sizeof(v17));
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, loginQuestEnt, method);
  Master_object = (QuestReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !loginQuestEnt || !Master_object )
    goto LABEL_22;
  QuestReleaseMaster__getListByQuestID_49496888(Master_object, loginQuestEnt->fields.questId, &this->fields.qrs, 0);
  if ( !this->fields.qrs )
    return 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
  Master_object = (QuestReleaseMaster_o *)NetworkManager__getTime(0);
  if ( !this->fields.qrs )
LABEL_22:
    sub_21FFECC(Master_object, v7);
  v10 = (int64_t)Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)this->fields.qrs,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  do
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    v13 = v11;
    if ( !v11 )
      break;
    if ( !v17.fields._current )
      sub_21FFECC(v11, 0);
  }
  while ( *(_DWORD *)((char *)&v17.fields._current->klass + (unsigned __int64)&dword_14) == 12
        ? LoginQuestEntity__IsEnablePeriod(loginQuestEnt, v10, 0)
        : clsQuestCheck__IsQuestRelease_42703840(this, (QuestReleaseEntity_o *)v17.fields._current, -1, 0, v12) );
  v15 = !v13;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v15;
}


// local variable allocation has failed, the output may be wrong!
bool clsQuestCheck__IsReleasedQuest(
        clsQuestCheck_o *this,
        int32_t questId,
        bool isIncludeTempData,
        const MethodInfo *method)
{
  int v7; // w8
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_List_QuestReleaseEntity__o *qrs; // x0
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x4
  bool v14; // w21
  int klass_high; // w8
  int32_t monitor; // w23
  Il2CppClass *klass; // x22
  int v18; // w9
  bool v19; // w0
  bool v20; // w19
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_5934D40 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_21FFC50(&clsQuestCheck_TypeInfo);
    byte_5934D40 = 1;
  }
  v7 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v23, 0, sizeof(v23));
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId, isIncludeTempData);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v9);
  QuestReleaseMaster__getListByQuestID_49496888((QuestReleaseMaster_o *)Master_object, questId, &this->fields.qrs, 0);
  qrs = this->fields.qrs;
  if ( !qrs )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)qrs,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v23 = v22;
  v22.fields._list = 0;
  *(_QWORD *)&v22.fields._index = &v23;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    v14 = v11;
    if ( !v11 )
      break;
    if ( !v23.fields._current )
      sub_21FFECC(v11, 0);
    klass_high = HIDWORD(v23.fields._current[1].klass);
    if ( (unsigned int)(klass_high - 101) <= 1 && isIncludeTempData )
    {
      monitor = (int32_t)v23.fields._current[1].monitor;
      klass = v23.fields._current[2].klass;
      v18 = *(&clsQuestCheck_TypeInfo->_2.cctor_finished + 1);
      if ( klass_high == 101 )
      {
        if ( !v18 )
          j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo, v23.fields._current, v12);
        v19 = clsQuestCheck__IsRouteSelectIncludeTempData(monitor, (int32_t)klass, v12);
        goto LABEL_17;
      }
      if ( !v18 )
        j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo, v23.fields._current, v12);
      if ( clsQuestCheck__IsRouteSelectIncludeTempData(monitor, (int32_t)klass, v12) )
        break;
    }
    else
    {
      v19 = clsQuestCheck__IsQuestRelease_42703840(this, (QuestReleaseEntity_o *)v23.fields._current, -1, 0, v13);
LABEL_17:
      if ( !v19 )
        break;
    }
  }
  v20 = !v14;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v20;
}


bool clsQuestCheck__IsRouteSelectIncludeTempData(int32_t questId, int32_t routeId, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x20
  Il2CppClass *v8; // x0
  __int64 v9; // x2
  const MethodInfo *v10; // x4
  System_Collections_Generic_IList_int__o *v11; // x21

  if ( (byte_5934D41 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&clsQuestCheck_TypeInfo);
    byte_5934D41 = 1;
  }
  v5 = sub_21FFD10(int___TypeInfo, 1);
  if ( !v5 )
    goto LABEL_10;
  v7 = v5;
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_11;
  v8 = int___TypeInfo;
  *(_DWORD *)(v7 + 32) = questId;
  v5 = sub_21FFD10(v8, 1);
  if ( !v5 )
LABEL_10:
    sub_21FFECC(v5, v6);
  v11 = (System_Collections_Generic_IList_int__o *)v5;
  if ( !*(_DWORD *)(v5 + 24) )
LABEL_11:
    sub_21FFED4(v5);
  *(_DWORD *)(v5 + 32) = routeId;
  if ( !*(&clsQuestCheck_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo, v6, v9);
  return clsQuestCheck__IsRouteSelectIncludeTempData_42699860(
           (System_Collections_Generic_IList_int__o *)v7,
           v11,
           1,
           0,
           v10);
}


bool clsQuestCheck__IsRouteSelectIncludeTempData_42699860(
        System_Collections_Generic_IList_int__o *questIds,
        System_Collections_Generic_IList_int__o *routeIds,
        int32_t count,
        int32_t checkType,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v7; // x23
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_IList_int__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 i; // x25
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  System_Collections_Generic_IList_int__c *v30; // x8
  int v31; // w25
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x26
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  int32_t v50; // w26
  ScriptManager_c *v51; // x0
  System_Collections_ICollection_o *SelectRouteArray; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  System_Int32_array *v55; // x0
  __int64 v56; // x1
  int max_length; // w8
  int v58; // w10
  __int64 v59; // x8
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  __int64 v63; // x8
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0
  __int64 v70; // [xsp+30h] [xbp-70h]
  __int64 v71; // [xsp+38h] [xbp-68h]

  if ( (byte_5934D42 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&ScriptManager_TypeInfo);
    byte_5934D42 = 1;
  }
  v7 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v7,
    (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !questIds )
    sub_21FFECC(v8, v9);
  klass = questIds->klass;
  v11 = *(unsigned __int16 *)&questIds->klass->_2.rank;
  if ( *(_WORD *)&questIds->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_8;
    }
    v13 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v13 = sub_2237E2C(questIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v13)(
          questIds,
          *(_QWORD *)(v13 + 8));
  v71 = v14;
  if ( !v14 )
    sub_21FFECC(v14, v15);
  for ( i = v14; ; i = v71 )
  {
    v17 = *(_QWORD *)i;
    v18 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_16;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_16:
      v20 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(i, *(_QWORD *)(v20 + 8));
    if ( (v21 & 1) == 0 )
      break;
    if ( !v71 )
      sub_21FFECC(v21, v22);
    v24 = *(_QWORD *)v71;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v71 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v71 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v26 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_24;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_24:
      v27 = sub_2237E2C(v71, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v71, *(_QWORD *)(v27 + 8));
    if ( !routeIds )
      sub_21FFECC(v28, v29);
    v30 = routeIds->klass;
    v31 = v28;
    v32 = *(unsigned __int16 *)&routeIds->klass->_2.rank;
    if ( *(_WORD *)&routeIds->klass->_2.rank )
    {
      v33 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)v33 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_31;
      }
      v34 = (__int64)&v30->vtable[*v33];
    }
    else
    {
LABEL_31:
      v34 = sub_2237E2C(routeIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
    }
    v35 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v34)(
            routeIds,
            *(_QWORD *)(v34 + 8));
    v37 = v35;
    v70 = v35;
    if ( !v35 )
      sub_21FFECC(0, v36);
    while ( 1 )
    {
      v38 = *(_QWORD *)v37;
      v39 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
      {
        v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v40 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v39;
          v40 += 4;
          if ( !v39 )
            goto LABEL_38;
        }
        v41 = v38 + 16LL * *v40 + 312;
      }
      else
      {
LABEL_38:
        v41 = sub_2237E2C(v37, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v42 = (*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v37, *(_QWORD *)(v41 + 8));
      if ( (v42 & 1) == 0 )
        break;
      if ( !v70 )
        sub_21FFECC(v42, v43);
      v44 = *(_QWORD *)v70;
      v45 = *(unsigned __int16 *)(*(_QWORD *)v70 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v70 + 302LL) )
      {
        v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_int__c **)v46 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
        {
          --v45;
          v46 += 4;
          if ( !v45 )
            goto LABEL_46;
        }
        v47 = v44 + 16LL * *v46 + 312;
      }
      else
      {
LABEL_46:
        v47 = sub_2237E2C(v70, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
      }
      v50 = (*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v70, *(_QWORD *)(v47 + 8));
      if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v48, v49);
      if ( !byte_5934D82 )
      {
        sub_21FFC50(&ScriptManager_TypeInfo);
        byte_5934D82 = 1;
      }
      v51 = ScriptManager_TypeInfo;
      if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v48, v49);
        v51 = ScriptManager_TypeInfo;
      }
      if ( v51->static_fields->questId == v31 )
      {
        if ( !*(&v51->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v51, v48, v49);
        SelectRouteArray = (System_Collections_ICollection_o *)ScriptManager__GetSelectRouteArray(0);
        if ( !BasicHelper__IsNullOrEmpty(SelectRouteArray, 0) )
        {
          if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v53, v54);
          v55 = ScriptManager__GetSelectRouteArray(0);
          if ( !v55 )
            sub_21FFECC(0, v56);
          max_length = v55->max_length;
          if ( max_length >= 1 )
          {
            v58 = 0;
            while ( 1 )
            {
              if ( max_length == v58 )
                sub_21FFED4(v55);
              if ( v50 == v55->m_Items[v58] )
                break;
              if ( (max_length & ~(max_length >> 31)) == ++v58 )
                goto LABEL_69;
            }
            if ( !v7 )
              sub_21FFECC(v55, v56);
            System_Collections_Generic_HashSet_int___Add(
              v7,
              v50,
              (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
        }
      }
LABEL_69:
      v37 = v70;
    }
    if ( v70 )
    {
      v59 = *(_QWORD *)v70;
      v60 = *(unsigned __int16 *)(*(_QWORD *)v70 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v70 + 302LL) )
      {
        v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
        {
          --v60;
          v61 += 4;
          if ( !v60 )
            goto LABEL_76;
        }
        v62 = v59 + 16LL * *v61 + 312;
      }
      else
      {
LABEL_76:
        v62 = sub_2237E2C(v70, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v62)(v70, *(_QWORD *)(v62 + 8));
    }
  }
  if ( v71 )
  {
    v63 = *(_QWORD *)v71;
    v64 = *(unsigned __int16 *)(*(_QWORD *)v71 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v71 + 302LL) )
    {
      v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
      {
        --v64;
        v65 += 4;
        if ( !v64 )
          goto LABEL_89;
      }
      v66 = v63 + 16LL * *v65 + 312;
    }
    else
    {
LABEL_89:
      v66 = sub_2237E2C(v71, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v66)(v71, *(_QWORD *)(v66 + 8));
  }
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v22, v23);
  return CondType__IsRouteSelect_47321516(questIds, routeIds, count, checkType, v7, 0);
}


bool clsQuestCheck__IsTapSkipQuestStart(
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x2
  int32_t ScriptIntParam; // w22
  unsigned int v23; // w8
  clsQuestCheck_c *v25; // x0
  System_String_o *KEY_QUEST_START_EFFECT; // x21
  System_String_o *String; // x21
  __int64 v28; // x2
  System_String_array *v29; // x0
  System_Object_array *v30; // x23
  System_Func_object__bool__o *v31; // x20
  Il2CppObject *object; // x20
  System_String_o *v33; // x0
  char v34; // w8
  System_String_o *v35; // x19
  clsQuestCheck_c *v36; // x0
  System_String_o *v37; // x20
  char v38; // w8
  Il2CppObject *v39; // [xsp+0h] [xbp-50h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5934D5D & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Find_string___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_21FFC50(&EncryptedPlayerPrefs_TypeInfo);
    sub_21FFC50(&System_Func_string__bool__TypeInfo);
    sub_21FFC50(&Method_clsQuestCheck___c__DisplayClass42_0__IsTapSkipQuestStart_b__0__);
    sub_21FFC50(&clsQuestCheck___c__DisplayClass42_0_TypeInfo);
    sub_21FFC50(&StringLiteral_24010/*"questStartEffectSkip"*/);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    sub_21FFC50(&clsQuestCheck_TypeInfo);
    byte_5934D5D = 1;
  }
  v39 = 0;
  entity = 0;
  v10 = sub_21FFEBC(clsQuestCheck___c__DisplayClass42_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !v10 )
    goto LABEL_43;
  *(_QWORD *)(v10 + 16) = effectName;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v10 + 16), (int32_t)effectName, v13, v14, v15, v16, v17, v18);
  if ( isMyRoomMaterial )
    return 0;
  if ( questPhase <= 1 )
    questPhase = 1;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19, v20);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_43;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, questId, questPhase, 0) )
    goto LABEL_46;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_43;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_24010/*"questStartEffectSkip"*/, 0, 0);
  if ( !ScriptIntParam )
  {
LABEL_46:
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v21);
    Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !Master_object )
      goto LABEL_43;
    Master_object = (QuestPhaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            &v39,
                                            questId,
                                            (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !v39 )
        goto LABEL_43;
      v23 = LODWORD(v39[2].monitor) - 1;
      if ( v23 > 7 )
        ScriptIntParam = 0;
      else
        ScriptIntParam = dword_ECFF24[v23];
      goto LABEL_22;
    }
    return 0;
  }
LABEL_22:
  v25 = clsQuestCheck_TypeInfo;
  if ( !*(&clsQuestCheck_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo, v12, v21);
    v25 = clsQuestCheck_TypeInfo;
  }
  KEY_QUEST_START_EFFECT = v25->static_fields->KEY_QUEST_START_EFFECT;
  if ( !*(&EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v12, v21);
  String = EncryptedPlayerPrefs__GetString(KEY_QUEST_START_EFFECT, 0);
  Master_object = (QuestPhaseMaster_o *)System_String__IsNullOrEmpty(String, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    goto LABEL_31;
  if ( !String )
LABEL_43:
    sub_21FFECC(Master_object, v12);
  v29 = System_String__Split(String, 0x2Fu, 0, 0);
  if ( !v29 )
  {
LABEL_31:
    v35 = *(System_String_o **)(v10 + 16);
LABEL_32:
    v36 = clsQuestCheck_TypeInfo;
    if ( !*(&clsQuestCheck_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo, v12, v28);
      v36 = clsQuestCheck_TypeInfo;
    }
    v37 = v36->static_fields->KEY_QUEST_START_EFFECT;
    if ( !*(&EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v12, v28);
    EncryptedPlayerPrefs__SetString(v37, v35, 0);
    UnityEngine_PlayerPrefs__Save(0);
    v34 = 1;
    goto LABEL_37;
  }
  v30 = (System_Object_array *)v29;
  v31 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v31,
    (Il2CppObject *)v10,
    Method_clsQuestCheck___c__DisplayClass42_0__IsTapSkipQuestStart_b__0__,
    0);
  object = BasicHelper__Find_object_(
             v30,
             (System_Func_T__bool__o *)v31,
             (const MethodInfo_37DD66C *)Method_BasicHelper_Find_string___);
  v33 = System_String__Concat_75481624(
          String,
          (System_String_o *)StringLiteral_1123/*"/"*/,
          *(System_String_o **)(v10 + 16),
          0);
  if ( !object )
  {
    v35 = v33;
    goto LABEL_32;
  }
  v34 = 0;
LABEL_37:
  if ( ScriptIntParam == 1 )
    return 1;
  v38 = v34 ^ 1;
  if ( ScriptIntParam == 2 )
    return v38;
  else
    return 0;
}


bool clsQuestCheck__IsValidQuestRandomGroup(
        clsQuestCheck_o *this,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  QuestRandomGroupMaster_o *v6; // x21
  QuestRandomGroupEntity_o *EntityFromQuestId; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  QuestRandomGroupEntity_o *v10; // x19
  int32_t randomGroupId; // w20
  __int64 v12; // x2
  TerminalPramsManager_c *v13; // x0
  __int64 v14; // x2
  bool v15; // w8
  int v16; // w9
  TerminalPramsManager_c *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  int32_t Item; // w22
  __int64 v21; // x2
  QuestRandomGroupEntity_o *RandomRangeQuest; // x0
  TerminalPramsManager_c *v23; // x0
  __int64 v24; // x2
  QuestRandomGroupEntity_o *v25; // x21
  TerminalPramsManager_c *v26; // x0
  TerminalPramsManager_c *v27; // x0

  if ( (byte_5934D3E & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestRandomGroupMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934D3E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestRandomGroupMaster___);
  if ( !questInfo )
    goto LABEL_53;
  v6 = (QuestRandomGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_53;
  EntityFromQuestId = QuestRandomGroupMaster__GetEntityFromQuestId(
                        (QuestRandomGroupMaster_o *)Instance,
                        questInfo->fields.questId,
                        0);
  if ( EntityFromQuestId )
  {
    v10 = EntityFromQuestId;
    randomGroupId = EntityFromQuestId->fields.randomGroupId;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8, v9);
    TerminalPramsManager__LoadQuestRandomGroupList(0);
    if ( !byte_5934D81 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5934D81 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v12);
      v13 = TerminalPramsManager_TypeInfo;
    }
    Instance = (Il2CppObject *)v13->static_fields->_QuestRandomGroupList_k__BackingField;
    if ( !Instance )
      goto LABEL_53;
    v15 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
            (System_Collections_Generic_Dictionary_int__int__o *)Instance,
            randomGroupId,
            (const MethodInfo_3F5F664 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    v16 = *(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1);
    if ( v15 )
    {
      if ( !v16 )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v14);
      if ( !byte_5934D81 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_5934D81 = 1;
      }
      v17 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v14);
        v17 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v17->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_53;
      Item = System_Collections_Generic_Dictionary_int__int___get_Item(
               (System_Collections_Generic_Dictionary_int__int__o *)Instance,
               randomGroupId,
               (const MethodInfo_3F5F3DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v18, v19);
      if ( !CondType__IsQuestClear_47254560(Item, -1, 0, 0) )
        goto LABEL_44;
    }
    else
    {
      if ( !v16 )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v14);
      if ( !byte_5934D81 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_5934D81 = 1;
      }
      v23 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v14);
        v23 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v23->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_53;
      System_Collections_Generic_Dictionary_int__int___Add(
        (System_Collections_Generic_Dictionary_int__int__o *)Instance,
        randomGroupId,
        0,
        (const MethodInfo_3F5F478 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
    RandomRangeQuest = QuestRandomGroupMaster__GetRandomRangeQuest(v6, randomGroupId, 0);
    if ( RandomRangeQuest )
    {
      v25 = RandomRangeQuest;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v24);
      if ( !byte_5934D81 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_5934D81 = 1;
      }
      v26 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v24);
        v26 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v26->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_53;
      System_Collections_Generic_Dictionary_int__int___set_Item(
        (System_Collections_Generic_Dictionary_int__int__o *)Instance,
        randomGroupId,
        v25->fields.questId,
        (const MethodInfo_3F5F464 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      TerminalPramsManager__SaveQuestRandomGroupList(0);
LABEL_44:
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v21);
      if ( !byte_5934D81 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_5934D81 = 1;
      }
      v27 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v21);
        v27 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v27->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( Instance )
      {
        LOBYTE(RandomRangeQuest) = System_Collections_Generic_Dictionary_int__int___get_Item(
                                     (System_Collections_Generic_Dictionary_int__int__o *)Instance,
                                     randomGroupId,
                                     (const MethodInfo_3F5F3DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) == v10->fields.questId;
        return (char)RandomRangeQuest;
      }
LABEL_53:
      sub_21FFECC(Instance, v5);
    }
  }
  else
  {
    LOBYTE(RandomRangeQuest) = 1;
  }
  return (char)RandomRangeQuest;
}


bool clsQuestCheck__IsWarClear(clsQuestCheck_o *this, int32_t war_id, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v7; // x3

  if ( (byte_5934D46 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_WarMaster___);
    sub_21FFC50(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934D46 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v5);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             war_id,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Entity, HIDWORD(Entity[6].klass), 0, v7);
  return (char)Entity;
}


void clsQuestCheck__OpenQuestTimeOverNoticeDialog(
        clsQuestCheck_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_5934D62 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_11366/*"QUEST_TIME_OVER"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5934D62 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_11366/*"QUEST_TIME_OVER"*/, 0);
  if ( !Instance )
    sub_21FFECC(v7, v8);
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v7,
    callback,
    -1,
    0,
    0,
    0,
    1,
    0,
    1,
    0,
    0,
    0.0,
    0,
    0);
}


void clsQuestCheck__PlayQuestStartAction(clsQuestCheck_o *this, System_Action_o *end_act, const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w20
  __int64 v7; // x1
  __int64 v8; // x2

  if ( (byte_5934D5C & 1) == 0 )
  {
    sub_21FFC50(&ScriptManager_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934D5C = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, end_act, method);
  if ( !byte_5932644 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932644 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, end_act, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v4->static_fields->_WarId_k__BackingField;
  if ( !byte_593205C )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_593205C = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, end_act, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v4->static_fields->_QuestId_k__BackingField;
  if ( clsQuestCheck__mfCheck_IsQuestNew((clsQuestCheck_o *)v4, QuestId_k__BackingField, method) )
  {
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v7, v8);
    ScriptManager__PlayQuestStart(WarId_k__BackingField, QuestId_k__BackingField, 0, 0, end_act, 0, 0, 0, 0, 0);
  }
  else
  {
    ActionExtensions__Call(end_act, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void clsQuestCheck__RecoverItemListDialogCallback(
        clsQuestCheck_o *this,
        MapControl_QuestInfo_o *qinf,
        int64_t endTime,
        int32_t result,
        int32_t boostId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  _QWORD *v15; // x19
  __int64 naturalAligment; // x9
  __int64 v17; // x8
  __int64 v18; // x1
  __int64 v19; // x2
  TerminalPramsManager_c *v20; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w20
  BattleSetupInfo_o *v24; // x23
  Il2CppObject *v25; // x20
  const MethodInfo_476E8C0 *v26; // x8
  clsQuestCheck_o *v27; // x0
  int32_t v28; // w1
  int64_t v29; // x2
  const MethodInfo *v30; // x3

  if ( (byte_5934D5F & 1) == 0 )
  {
    sub_21FFC50(&BattleRootComponent_TypeInfo);
    sub_21FFC50(&BattleSetupInfo_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934D5F = 1;
  }
  if ( result == 2 )
  {
    if ( clsQuestCheck__CheckQuestPlayable(this, qinf, endTime, boostId, *(const MethodInfo **)&boostId) )
    {
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18, v19);
      if ( !byte_5932644 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_5932644 = 1;
      }
      v20 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18, v19);
        v20 = TerminalPramsManager_TypeInfo;
      }
      WarId_k__BackingField = v20->static_fields->_WarId_k__BackingField;
      if ( !byte_593205C )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        v20 = TerminalPramsManager_TypeInfo;
        byte_593205C = 1;
      }
      if ( !*(&v20->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v20, v18, v19);
        v20 = TerminalPramsManager_TypeInfo;
      }
      QuestId_k__BackingField = v20->static_fields->_QuestId_k__BackingField;
      if ( !byte_5932720 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        v20 = TerminalPramsManager_TypeInfo;
        byte_5932720 = 1;
      }
      if ( !*(&v20->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v20, v18, v19);
        v20 = TerminalPramsManager_TypeInfo;
      }
      PhaseCnt_k__BackingField = v20->static_fields->_PhaseCnt_k__BackingField;
      v24 = (BattleSetupInfo_o *)sub_21FFEBC(BattleSetupInfo_TypeInfo);
      BattleSetupInfo___ctor(v24, 0);
      if ( !v24 )
        goto LABEL_38;
      Instance = BattleSetupInfo__ConvertBattleSetupInfo(
                   v24,
                   WarId_k__BackingField,
                   QuestId_k__BackingField,
                   PhaseCnt_k__BackingField,
                   0,
                   0,
                   0,
                   0);
      v25 = (Il2CppObject *)Instance;
      if ( boostId )
      {
        if ( !Instance )
          goto LABEL_38;
        *((_DWORD *)Instance + 15) = boostId;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance
        || (v26 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
            *((_BYTE *)Instance + 148) = 1,
            (Instance = SingletonMonoBehaviour_object___get_Instance(v26)) == 0)
        || (*((_DWORD *)Instance + 38) = 1,
            (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
      {
LABEL_38:
        sub_21FFECC(Instance, v12);
      }
      AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 35, 1, v25, 0);
    }
LABEL_36:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0);
      return;
    }
    goto LABEL_38;
  }
  if ( result )
    goto LABEL_36;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v15 = (_QWORD *)*((_QWORD *)Instance + 4);
  if ( !v15 )
    goto LABEL_38;
  naturalAligment = BattleRootComponent_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*v15 + 304LL) >= (unsigned int)naturalAligment
    && *(BattleRootComponent_c **)(*(_QWORD *)(*v15 + 200LL) + 8 * naturalAligment - 8) == BattleRootComponent_TypeInfo )
  {
    Instance = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)Instance + 4), 0);
    if ( !Instance )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    v17 = v15[10];
    if ( !v17 )
      goto LABEL_38;
    Instance = *(void **)(v17 + 536);
    if ( !Instance )
      goto LABEL_38;
    BattleResultComponent__EndResult((BattleResultComponent_o *)Instance, 0);
    goto LABEL_36;
  }
  sub_220024C(*((_QWORD *)Instance + 4), BattleRootComponent_TypeInfo, v13, v14);
  clsQuestCheck__IsEnabledPrivilegePeriod(v27, v28, v29, v30);
}


void clsQuestCheck__RefreshTerminalScene(clsQuestCheck_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_5934D63 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5934D63 = 1;
  }
  TopLoginRequest__ResetAccesTime(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v3);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void clsQuestCheck__SaveEventQuestIdListPlayable(clsQuestCheck_o *this, int32_t eventId, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_c *v10; // x21
  TerminalPramsManager_c *v11; // x0
  MissionNaviTransitionBoardItem_o *p_ClearEventQuestIds_k__BackingField; // x0
  const MethodInfo *v13; // x2
  System_Collections_Generic_IEnumerable_T__o *v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x19
  TerminalPramsManager_c *v23; // x0
  MissionNaviTransitionBoardItem_o *v24; // x0

  if ( (byte_5934D58 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_String_Join_int___);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&StringLiteral_869/*","*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5934D58 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&eventId, method);
  v10 = (MissionNaviTransitionBoardItem_c *)StringLiteral_1/*""*/;
  if ( !byte_5934D83 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934D83 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&eventId, method);
    v11 = TerminalPramsManager_TypeInfo;
  }
  p_ClearEventQuestIds_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v11->static_fields->_ClearEventQuestIds_k__BackingField;
  p_ClearEventQuestIds_k__BackingField->klass = v10;
  sub_21FFBF4(p_ClearEventQuestIds_k__BackingField, (int32_t)v10, (System_String_o *)method, v3, v4, v5, v6, v7);
  v14 = (System_Collections_Generic_IEnumerable_T__o *)clsQuestCheck__GetEventQuestIdListPlayable(this, eventId, v13);
  v22 = System_String__Join_int_(
          (System_String_o *)StringLiteral_869/*","*/,
          v14,
          (const MethodInfo_3957568 *)Method_System_String_Join_int___);
  if ( !byte_5934D83 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934D83 = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v15, v16);
    v23 = TerminalPramsManager_TypeInfo;
  }
  v24 = (MissionNaviTransitionBoardItem_o *)&v23->static_fields->_ClearEventQuestIds_k__BackingField;
  v24->klass = (MissionNaviTransitionBoardItem_c *)v22;
  sub_21FFBF4(v24, (int32_t)v22, v16, v17, v18, v19, v20, v21);
  TerminalPramsManager__ClearEventQuestIds_SaveData(0);
}


void clsQuestCheck__checkCondTypeItemGet(
        clsQuestCheck_o *this,
        bool *is_release,
        QuestReleaseEntity_o *qrd,
        bool itemGet,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  UserItemMaster_o *v11; // x22
  int32_t targetId; // w23
  int32_t num; // w22
  char v14; // w8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5934D4B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934D4B = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !qrd )
    goto LABEL_17;
  v11 = (UserItemMaster_o *)Instance;
  targetId = qrd->fields.targetId;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v10);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v10);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !v11 )
    goto LABEL_17;
  Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                v11,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                targetId,
                                0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v14 = !itemGet;
    goto LABEL_16;
  }
  if ( !entity )
LABEL_17:
    sub_21FFECC(Instance, v9);
  num = entity->fields.num;
  v14 = (num < QuestReleaseEntity__getValueInt(qrd, 0)) ^ itemGet;
LABEL_16:
  *is_release = v14 & 1;
}


bool clsQuestCheck__isPlayQuestStartAction(clsQuestCheck_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalPramsManager_c *v3; // x0
  int32_t WarId_k__BackingField; // w20
  int32_t QuestId_k__BackingField; // w19
  __int64 v6; // x1
  __int64 v7; // x2

  if ( (byte_5934D5B & 1) == 0 )
  {
    sub_21FFC50(&ScriptManager_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934D5B = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  if ( !byte_5932644 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932644 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v3->static_fields->_WarId_k__BackingField;
  if ( !byte_593205C )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_593205C = 1;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, method, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v3->static_fields->_QuestId_k__BackingField;
  if ( !clsQuestCheck__mfCheck_IsQuestNew((clsQuestCheck_o *)v3, QuestId_k__BackingField, v2) )
    return 0;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v6, v7);
  return ScriptManager__isPlayQuestStart(WarId_k__BackingField, QuestId_k__BackingField, 0);
}


bool clsQuestCheck__mfCheck_IsQuestNew(clsQuestCheck_o *this, int32_t qid, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5934D4C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934D4C = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_15;
  Instance = (DataManager_o *)UserQuestMaster__TryGetEntity(
                                (UserQuestMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                qid,
                                0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.challengeNum == 0;
LABEL_15:
    sub_21FFECC(Instance, v5);
  }
  return 1;
}


int32_t clsQuestCheck__mfGetQuestPhaseByQuestID(clsQuestCheck_o *this, int32_t qid, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5934D4D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934D4D = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_15;
  if ( UserQuestMaster__TryGetEntity(
         (UserQuestMaster_o *)MasterData_object,
         &entity,
         *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
         qid,
         0) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserQuestEntity__getQuestPhase(entity, 0);
LABEL_15:
    sub_21FFECC(Instance, v5);
  }
  return 0;
}


bool clsQuestCheck__mfQuestReleaseCheckAlreadyClear(clsQuestCheck_o *this, int32_t qid, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  bool v7; // w8
  bool result; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5934D49 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934D49 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               qid,
                               (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 1;
  if ( !entity )
LABEL_12:
    sub_21FFECC(Instance, v5);
  if ( (HIDWORD(entity[5].klass) | 4) != 5 )
    return 0;
  v7 = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, qid, 0, v6);
  result = 0;
  if ( v7 )
    return 1;
  return result;
}


bool clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(
        clsQuestCheck_o *this,
        int32_t questId,
        QuestReleaseEntity_o **questReleaseNG,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int v15; // w8
  void *Master_object; // x0
  __int64 v17; // x1
  _BOOL8 IsShop; // x0
  const MethodInfo *v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  Il2CppObject *v22; // x23
  char v23; // w24
  __int64 v24; // x1
  __int64 v25; // x2
  int32_t UseDiceSpotId; // w23
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_T__o *qrs; // x23
  clsQuestCheck___c_c *v30; // x0
  struct clsQuestCheck___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__5_0; // x24
  Il2CppObject *v33; // x25
  struct clsQuestCheck___c_StaticFields *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  __int64 v41; // x2
  struct BalanceConfig_StaticFields *v42; // x8
  QuestEntity_o *Mine; // x0
  __int64 v44; // x2
  UserEventQuestCooltimeMaster_o *v45; // x23
  UserEventQuestCooltimeEntity_o *v46; // x0
  __int64 v47; // x2
  UserEventQuestCooltimeEntity_o *v48; // x23
  int64_t Time; // x0
  int64_t clearedAt; // x25
  int64_t v51; // x24
  int32_t v52; // w2
  int v53; // w8
  __int64 v54; // x2
  struct System_Collections_Generic_List_QuestReleaseEntity__o *cQuestReleaseListP; // x23
  struct clsQuestCheck___c_StaticFields *v56; // x8
  System_Comparison_T__o *_9__5_1; // x24
  Il2CppObject *v58; // x25
  struct clsQuestCheck___c_StaticFields *v59; // x0
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  __int64 v66; // x1
  __int64 v67; // x2
  UserQuestEntity_o *v68; // x0
  __int64 v69; // x2
  Il2CppObject *v70; // x23
  bool v71; // w24
  _BOOL8 v72; // x0
  __int64 v73; // x1
  const MethodInfo *v74; // x4
  bool v75; // w22
  Il2CppObject *current; // x23
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  int32_t klass; // w23
  System_Collections_Generic_IEnumerable_T__o *v85; // x24
  System_Collections_Generic_List_object__o *v86; // x23
  __int64 v87; // x1
  __int64 v88; // x2
  const MethodInfo *v89; // x3
  BalanceConfig_c *v90; // x0
  __int64 v91; // x1
  __int64 v92; // x2
  const MethodInfo *v93; // x3
  BalanceConfig_c *v94; // x0
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  System_Collections_Generic_List_Enumerator_object__o v101; // [xsp+10h] [xbp-80h] BYREF
  Il2CppObject *v102; // [xsp+28h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+30h] [xbp-60h] BYREF
  UserQuestEntity_o *v104; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_5934D3D & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_BasicHelper_Any_QuestReleaseEntity___);
    sub_21FFC50(&System_Comparison_QuestReleaseEntity__TypeInfo);
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_21FFC50(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___91432736);
    sub_21FFC50(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__);
    sub_21FFC50(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__);
    sub_21FFC50(&clsQuestCheck___c_TypeInfo);
    byte_5934D3D = 1;
  }
  entity = 0;
  v104 = 0;
  v102 = 0;
  memset(&v101, 0, sizeof(v101));
  *questReleaseNG = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)questReleaseNG,
    0,
    (System_String_o *)questReleaseNG,
    (System_String_o *)questInfo,
    (int32_t)method,
    v5,
    v6,
    v7);
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, v12) )
    goto LABEL_97;
  v15 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v104 = 0;
  if ( !v15 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13, v14);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !questInfo || !Master_object )
    goto LABEL_106;
  IsShop = DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             questInfo->fields.warId,
             (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( IsShop )
  {
    Master_object = entity;
    if ( !entity )
      goto LABEL_106;
    IsShop = WarEntity__IsShop((WarEntity_o *)entity, 0);
    if ( !IsShop )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v20, v19);
      v22 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserQuestMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17, v21);
      if ( !byte_5931D52 )
      {
        sub_21FFC50(&NetworkManager_TypeInfo);
        byte_5931D52 = 1;
      }
      Master_object = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17, v21);
        Master_object = NetworkManager_TypeInfo;
      }
      if ( !v22 )
        goto LABEL_106;
      IsShop = UserQuestMaster__TryGetEntity(
                 (UserQuestMaster_o *)v22,
                 &v104,
                 *(_QWORD *)(*((_QWORD *)Master_object + 23) + 64LL),
                 questId,
                 0);
      if ( IsShop )
      {
        Master_object = v104;
        if ( !v104 )
          goto LABEL_106;
        IsShop = UserQuestEntity__IsNotExpired(v104, 0);
        if ( IsShop )
        {
          v23 = 1;
          return v23 & 1;
        }
      }
    }
  }
  if ( !clsQuestCheck__IsValidQuestRandomGroup((clsQuestCheck_o *)IsShop, questInfo, v19) )
    goto LABEL_97;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24, v25);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object )
    goto LABEL_106;
  QuestReleaseMaster__getListByQuestID_49496888((QuestReleaseMaster_o *)Master_object, questId, &this->fields.qrs, 0);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !entity || !Master_object )
    goto LABEL_106;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &v102,
         (int32_t)entity[6].klass,
         (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Master_object = v102;
    if ( !v102 )
      goto LABEL_106;
    if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v102, 0) )
    {
      Master_object = v102;
      if ( !v102 )
        goto LABEL_106;
      UseDiceSpotId = EventDetailEntity__GetUseDiceSpotId((EventDetailEntity_o *)v102, 0);
      if ( UseDiceSpotId == MapControl_QuestInfo__GetSpotID(questInfo, 0)
        && MapControl_QuestInfo__GetQuestType(questInfo, 0) == 1 )
      {
        qrs = (System_Collections_Generic_List_T__o *)this->fields.qrs;
        v30 = clsQuestCheck___c_TypeInfo;
        if ( !*(&clsQuestCheck___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo, v27, v28);
          v30 = clsQuestCheck___c_TypeInfo;
        }
        static_fields = v30->static_fields;
        _9__5_0 = (System_Func_object__bool__o *)static_fields->__9__5_0;
        if ( !_9__5_0 )
        {
          if ( !*(&v30->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v30, v27, v28);
            static_fields = clsQuestCheck___c_TypeInfo->static_fields;
          }
          v33 = (Il2CppObject *)static_fields->__9;
          _9__5_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_QuestReleaseEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__5_0,
            v33,
            Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__,
            0);
          v34 = clsQuestCheck___c_TypeInfo->static_fields;
          v34->__9__5_0 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__5_0;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v34->__9__5_0,
            (int32_t)_9__5_0,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40);
        }
        if ( !BasicHelper__Any_object_(
                qrs,
                (System_Func_T__bool__o *)_9__5_0,
                (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_QuestReleaseEntity___) )
        {
          Master_object = BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v17, v41);
            Master_object = BalanceConfig_TypeInfo;
          }
          v42 = (struct BalanceConfig_StaticFields *)*((_QWORD *)Master_object + 23);
          if ( v42->EventBoardGameNextBoardQuestId != questId )
          {
            if ( !*((_DWORD *)Master_object + 57) )
            {
              j_il2cpp_runtime_class_init_0(Master_object, v17, v41);
              v42 = BalanceConfig_TypeInfo->static_fields;
            }
            if ( v42->EventBoardGameNextRoundQuestId != questId )
            {
              if ( !entity )
                goto LABEL_106;
              klass = (int32_t)entity[6].klass;
              if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v17, v41);
              if ( CondType__IsUserEventStatus(klass, 7, 0) )
                goto LABEL_97;
              v85 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.qrs;
              v86 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor_71627776(
                v86,
                v85,
                (const MethodInfo_444F400 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___91432736);
              v90 = BalanceConfig_TypeInfo;
              if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v87, v88);
                v90 = BalanceConfig_TypeInfo;
              }
              v23 = 0;
              if ( clsQuestCheck__CheckQuestPlayableNow(
                     this,
                     v90->static_fields->EventBoardGameNextBoardQuestId,
                     0,
                     v89) )
              {
                return v23 & 1;
              }
              v94 = BalanceConfig_TypeInfo;
              if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v91, v92);
                v94 = BalanceConfig_TypeInfo;
              }
              v23 = 0;
              if ( clsQuestCheck__CheckQuestPlayableNow(
                     this,
                     v94->static_fields->EventBoardGameNextRoundQuestId,
                     0,
                     v93) )
              {
                return v23 & 1;
              }
              this->fields.qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v86;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&this->fields,
                (int32_t)v86,
                v95,
                v96,
                v97,
                v98,
                v99,
                v100);
            }
          }
        }
      }
    }
  }
  Mine = MapControl_QuestInfo__GetMine(questInfo, 0);
  if ( Mine && QuestEntity__HasFlag(Mine, 0x10000000000000LL, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17, v44);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___);
    if ( !questInfo->fields._WarInfo_k__BackingField )
      goto LABEL_106;
    v45 = (UserEventQuestCooltimeMaster_o *)Master_object;
    Master_object = (void *)MapControl_WarInfo__GetEventId(questInfo->fields._WarInfo_k__BackingField, 0);
    if ( !v45 )
      goto LABEL_106;
    v46 = UserEventQuestCooltimeMaster__getEntity(v45, (int32_t)Master_object, questInfo->fields.questId, 1, 0);
    if ( v46 )
    {
      v48 = v46;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17, v47);
      Time = NetworkManager__getTime(0);
      clearedAt = v48->fields.clearedAt;
      v51 = Time;
      Master_object = UserEventQuestCooltimeEntity__GetMasterEntity(v48, 0);
      if ( !Master_object )
        goto LABEL_106;
      if ( v51 < clearedAt + *((int *)Master_object + 7) )
        goto LABEL_97;
    }
  }
  if ( !this->fields.qrs )
  {
LABEL_97:
    v23 = 0;
    return v23 & 1;
  }
  Master_object = this->fields.cQuestReleaseListP;
  if ( !Master_object )
    goto LABEL_106;
  v52 = *((_DWORD *)Master_object + 6);
  v53 = *((_DWORD *)Master_object + 7) + 1;
  *((_DWORD *)Master_object + 6) = 0;
  *((_DWORD *)Master_object + 7) = v53;
  if ( v52 >= 1 )
  {
    System_Array__Clear(*((System_Array_o **)Master_object + 2), 0, v52, 0);
    Master_object = this->fields.cQuestReleaseListP;
    if ( !Master_object )
      goto LABEL_106;
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Master_object,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.qrs,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__);
  cQuestReleaseListP = this->fields.cQuestReleaseListP;
  Master_object = clsQuestCheck___c_TypeInfo;
  if ( !*(&clsQuestCheck___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo, v17, v54);
    Master_object = clsQuestCheck___c_TypeInfo;
  }
  v56 = (struct clsQuestCheck___c_StaticFields *)*((_QWORD *)Master_object + 23);
  _9__5_1 = (System_Comparison_T__o *)v56->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( !*((_DWORD *)Master_object + 57) )
    {
      j_il2cpp_runtime_class_init_0(Master_object, v17, v54);
      v56 = clsQuestCheck___c_TypeInfo->static_fields;
    }
    v58 = (Il2CppObject *)v56->__9;
    _9__5_1 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_QuestReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__5_1,
      v58,
      Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__,
      0);
    v59 = clsQuestCheck___c_TypeInfo->static_fields;
    v59->__9__5_1 = (struct System_Comparison_QuestReleaseEntity__o *)_9__5_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v59->__9__5_1, (int32_t)_9__5_1, v60, v61, v62, v63, v64, v65);
  }
  if ( !cQuestReleaseListP )
    goto LABEL_106;
  System_Collections_Generic_List_object___Sort_71636404(
    (System_Collections_Generic_List_object__o *)cQuestReleaseListP,
    _9__5_1,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  v68 = v104;
  if ( v104 )
  {
LABEL_82:
    v71 = !UserQuestEntity__HasStatus(v68, 8, 0);
    goto LABEL_83;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v66, v67);
  v70 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17, v69);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Master_object = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17, v69);
    Master_object = NetworkManager_TypeInfo;
  }
  if ( !v70 )
LABEL_106:
    sub_21FFECC(Master_object, v17);
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)v70,
    &v104,
    *(_QWORD *)(*((_QWORD *)Master_object + 23) + 64LL),
    questId,
    0);
  v68 = v104;
  if ( v104 )
    goto LABEL_82;
  v71 = 1;
LABEL_83:
  Master_object = this->fields.cQuestReleaseListP;
  if ( !Master_object )
    goto LABEL_106;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v101,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v72 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v101,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    v75 = v72;
    if ( !v72 )
      break;
    current = v101.fields._current;
    if ( v71 )
      goto LABEL_89;
    if ( !v101.fields._current )
      sub_21FFECC(v72, v73);
    if ( HIDWORD(v101.fields._current[1].klass) != 12 )
    {
LABEL_89:
      if ( !clsQuestCheck__IsQuestRelease_42703840(
              this,
              (QuestReleaseEntity_o *)v101.fields._current,
              -1,
              questInfo,
              v74) )
      {
        *questReleaseNG = (QuestReleaseEntity_o *)current;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)questReleaseNG, (int32_t)current, v77, v78, v79, v80, v81, v82);
        break;
      }
    }
  }
  v23 = !v75;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v101,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v23 & 1;
}


void clsQuestCheck___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5934D67 & 1) == 0 )
  {
    sub_21FFC50(&clsQuestCheck___c_TypeInfo);
    byte_5934D67 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(clsQuestCheck___c_TypeInfo);
  System_Object___ctor(v1, 0);
  clsQuestCheck___c_TypeInfo->static_fields->__9 = (struct clsQuestCheck___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)clsQuestCheck___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void clsQuestCheck___c___ctor(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void clsQuestCheck___c___CheckQuestPlayable_b__43_0(
        clsQuestCheck___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_5934D68 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_clsQuestCheck___c__DisplayClass43_1__CheckQuestPlayable_b__4__);
    sub_21FFC50(&clsQuestCheck___c__DisplayClass43_1_TypeInfo);
    byte_5934D68 = 1;
  }
  v4 = sub_21FFEBC(clsQuestCheck___c__DisplayClass43_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_clsQuestCheck___c__DisplayClass43_1__CheckQuestPlayable_b__4__,
          0),
        !Instance) )
  {
    sub_21FFECC(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0);
}


void clsQuestCheck___c___CheckQuestPlayable_b__43_1(
        clsQuestCheck___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_5934D69 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_clsQuestCheck___c__DisplayClass43_2__CheckQuestPlayable_b__5__);
    sub_21FFC50(&clsQuestCheck___c__DisplayClass43_2_TypeInfo);
    byte_5934D69 = 1;
  }
  v4 = sub_21FFEBC(clsQuestCheck___c__DisplayClass43_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_clsQuestCheck___c__DisplayClass43_2__CheckQuestPlayable_b__5__,
          0),
        !Instance) )
  {
    sub_21FFECC(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0);
}


void clsQuestCheck___c___CheckQuestPlayable_b__43_10(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_5934D6B & 1) == 0 )
  {
    sub_21FFC50(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5934D6B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v3);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_37DB02C *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void clsQuestCheck___c___CheckQuestPlayable_b__43_12(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_5934D6C & 1) == 0 )
  {
    sub_21FFC50(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5934D6C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v3);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_37DB02C *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void clsQuestCheck___c___CheckQuestPlayable_b__43_2(clsQuestCheck___c_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5934D6D & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5934D6D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void clsQuestCheck___c___CheckQuestPlayable_b__43_3(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  ;
}


void clsQuestCheck___c___CheckQuestPlayable_b__43_6(
        clsQuestCheck___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_5934D6A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_clsQuestCheck___c__DisplayClass43_3__CheckQuestPlayable_b__7__);
    sub_21FFC50(&clsQuestCheck___c__DisplayClass43_3_TypeInfo);
    byte_5934D6A = 1;
  }
  v4 = sub_21FFEBC(clsQuestCheck___c__DisplayClass43_3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_clsQuestCheck___c__DisplayClass43_3__CheckQuestPlayable_b__7__,
          0),
        !Instance) )
  {
    sub_21FFECC(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0);
}


bool clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_0(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_21FFECC(this, 0);
  return n->fields.type == 118;
}


int32_t clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_1(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *a,
        QuestReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_21FFECC(this, a);
  return b->fields.imagePriority - a->fields.imagePriority;
}


void clsQuestCheck___c__DisplayClass33_0___ctor(clsQuestCheck___c__DisplayClass33_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool clsQuestCheck___c__DisplayClass33_0___GetReleasedQuestEntityListByServantGet_b__0(
        clsQuestCheck___c__DisplayClass33_0_o *this,
        QuestEntity_o *n,
        const MethodInfo *method)
{
  struct QuestEntity_o *questEnt; // x8

  if ( !n || (questEnt = this->fields.questEnt) == 0 )
    sub_21FFECC(this, n);
  return n->fields.id == questEnt->fields.id;
}


void clsQuestCheck___c__DisplayClass33_1___ctor(clsQuestCheck___c__DisplayClass33_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool clsQuestCheck___c__DisplayClass33_1___GetReleasedQuestEntityListByServantGet_b__1(
        clsQuestCheck___c__DisplayClass33_1_o *this,
        QuestEntity_o *n,
        const MethodInfo *method)
{
  struct QuestEntity_o *questEnt; // x8

  if ( !n || (questEnt = this->fields.questEnt) == 0 )
    sub_21FFECC(this, n);
  return n->fields.id == questEnt->fields.id;
}


void clsQuestCheck___c__DisplayClass42_0___ctor(clsQuestCheck___c__DisplayClass42_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool clsQuestCheck___c__DisplayClass42_0___IsTapSkipQuestStart_b__0(
        clsQuestCheck___c__DisplayClass42_0_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_String__op_Equality(a, this->fields.effectName, 0);
}


void clsQuestCheck___c__DisplayClass43_0___ctor(clsQuestCheck___c__DisplayClass43_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void clsQuestCheck___c__DisplayClass43_0___CheckQuestPlayable_b__11(
        clsQuestCheck___c__DisplayClass43_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( !this->fields.__4__this )
    sub_21FFECC(this, *(_QWORD *)&result);
  clsQuestCheck__RecoverItemListDialogCallback(
    this->fields.__4__this,
    this->fields.questInfo,
    this->fields.srcEndTime,
    result,
    this->fields.boostId,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void clsQuestCheck___c__DisplayClass43_0___CheckQuestPlayable_b__8(
        clsQuestCheck___c__DisplayClass43_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( !this->fields.__4__this )
    sub_21FFECC(this, *(_QWORD *)&result);
  clsQuestCheck__RecoverItemListDialogCallback(
    this->fields.__4__this,
    this->fields.questInfo,
    this->fields.srcEndTime,
    result,
    this->fields.boostId,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void clsQuestCheck___c__DisplayClass43_0___CheckQuestPlayable_b__9(
        clsQuestCheck___c__DisplayClass43_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( !this->fields.__4__this )
    sub_21FFECC(this, *(_QWORD *)&result);
  clsQuestCheck__RecoverItemListDialogCallback(
    this->fields.__4__this,
    this->fields.questInfo,
    this->fields.srcEndTime,
    result,
    this->fields.boostId,
    v3);
}


void clsQuestCheck___c__DisplayClass43_1___ctor(clsQuestCheck___c__DisplayClass43_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void clsQuestCheck___c__DisplayClass43_1___CheckQuestPlayable_b__4(
        clsQuestCheck___c__DisplayClass43_1_o *this,
        const MethodInfo *method)
{
  int32_t result; // w8
  Il2CppObject *v4; // x19
  SceneJumpInfo_o *v5; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1
  Il2CppObject *v9; // x3
  Il2CppObject *Instance; // x19

  if ( (byte_5934D6E & 1) == 0 )
  {
    sub_21FFC50(&SceneJumpInfo_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&StringLiteral_13198/*"SellServant"*/);
    sub_21FFC50(&StringLiteral_13235/*"ServantCombine"*/);
    byte_5934D6E = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48427172(v5, (System_String_o *)StringLiteral_13198/*"SellServant"*/, 0, 0);
      if ( Instance )
      {
        v6 = Instance;
        v8 = 22;
        goto LABEL_12;
      }
LABEL_15:
      sub_21FFECC(v6, v7);
    case 1:
      v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v6 )
      {
        v8 = 71;
        v9 = 0;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v6, v8, 1, v9, 0);
        return;
      }
      goto LABEL_15;
    case 0:
      v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48427084(v5, (System_String_o *)StringLiteral_13235/*"ServantCombine"*/, 0);
      if ( v4 )
      {
        v6 = v4;
        v8 = 32;
LABEL_12:
        v9 = (Il2CppObject *)v5;
        goto LABEL_13;
      }
      goto LABEL_15;
  }
}


void clsQuestCheck___c__DisplayClass43_2___ctor(clsQuestCheck___c__DisplayClass43_2_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void clsQuestCheck___c__DisplayClass43_2___CheckQuestPlayable_b__5(
        clsQuestCheck___c__DisplayClass43_2_o *this,
        const MethodInfo *method)
{
  int32_t result; // w8
  Il2CppObject *v4; // x19
  SceneJumpInfo_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  AvalonSceneManager_o *v8; // x0
  int32_t v9; // w1
  Il2CppObject *v10; // x19
  Il2CppObject *Instance; // x19

  if ( (byte_5934D6F & 1) == 0 )
  {
    sub_21FFC50(&SceneJumpInfo_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&StringLiteral_13240/*"ServantEquipList"*/);
    sub_21FFC50(&StringLiteral_13198/*"SellServant"*/);
    sub_21FFC50(&StringLiteral_13239/*"ServantEQCombine"*/);
    byte_5934D6F = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48427172(v5, (System_String_o *)StringLiteral_13198/*"SellServant"*/, 1, 0);
      if ( Instance )
      {
        v8 = (AvalonSceneManager_o *)Instance;
        v9 = 22;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 1:
      v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48427084(v5, (System_String_o *)StringLiteral_13240/*"ServantEquipList"*/, 0);
      if ( v10 )
      {
        v8 = (AvalonSceneManager_o *)v10;
        v9 = 71;
        goto LABEL_12;
      }
LABEL_14:
      sub_21FFECC(v6, v7);
    case 0:
      v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48427084(v5, (System_String_o *)StringLiteral_13239/*"ServantEQCombine"*/, 0);
      if ( v4 )
      {
        v8 = (AvalonSceneManager_o *)v4;
        v9 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene(v8, v9, 1, (Il2CppObject *)v5, 0);
        return;
      }
      goto LABEL_14;
  }
}


void clsQuestCheck___c__DisplayClass43_3___ctor(clsQuestCheck___c__DisplayClass43_3_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void clsQuestCheck___c__DisplayClass43_3___CheckQuestPlayable_b__7(
        clsQuestCheck___c__DisplayClass43_3_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_5934D70 & 1) == 0 )
  {
    sub_21FFC50(&SceneJumpInfo_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&StringLiteral_13198/*"SellServant"*/);
    byte_5934D70 = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v4 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_48427172(v4, (System_String_o *)StringLiteral_13198/*"SellServant"*/, 2, 0);
    if ( !Instance )
      sub_21FFECC(v5, v6);
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v4, 0);
  }
}