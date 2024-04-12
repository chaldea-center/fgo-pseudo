void __fastcall clsQuestCheck___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_42AF9DB & 1) == 0 )
  {
    sub_B52984(&StringLiteral_11071/*"QuestStartEffect"*/);
    sub_B52984(&clsQuestCheck_TypeInfo);
    byte_42AF9DB = 1;
  }
  static_fields = (BattleServantConfConponent_o *)clsQuestCheck_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_11071/*"QuestStartEffect"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_11071/*"QuestStartEffect"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall clsQuestCheck___ctor(clsQuestCheck_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42AF9DA & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_B52984(&Method_SingletonTemplate_clsQuestCheck___ctor__);
    sub_B52984(&SingletonTemplate_clsQuestCheck__TypeInfo);
    byte_42AF9DA = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v3;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.cQuestReleaseListP = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v10;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.cQuestReleaseListP,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2B7641C *)Method_SingletonTemplate_clsQuestCheck___ctor__);
}


bool __fastcall clsQuestCheck__CheckQuestPlayable(
        clsQuestCheck_o *this,
        MapControl_QuestInfo_o *questInfo,
        int64_t srcEndTime,
        int32_t boostId,
        const MethodInfo *method)
{
  __int64 v9; // x24
  int64_t SpotID; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  MapControl_QuestInfo_o **v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int32_t v25; // w27
  MapControl_QuestInfo_o *v26; // x8
  int32_t questId; // w19
  int32_t questPhase; // w26
  int32_t v29; // w21
  MapControl_QuestInfo_o *v30; // x8
  int32_t v31; // w25
  int v32; // w21
  bool IsQuestReleaseAll; // w0
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x23
  UserQuestEntity_o *Entity; // x0
  __int64 v36; // x21
  int64_t Time; // x0
  System_String_o *v38; // x19
  System_String_o *v39; // x20
  CommonUI_o *v40; // x21
  clsQuestCheck___c_c *v41; // x8
  struct clsQuestCheck___c_StaticFields *v42; // x9
  System_Action_o *_9__41_4; // x22
  Il2CppObject *v44; // x23
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x1
  struct clsQuestCheck___c_StaticFields *v52; // x0
  BattleServantConfConponent_o *p__9__41_4; // x0
  UserGameEntity_o *v54; // x26
  QuestEntity_o *v55; // x27
  clsQuestCheck___c_c *v56; // x8
  struct clsQuestCheck___c_StaticFields *static_fields; // x9
  Il2CppObject *v58; // x23
  struct clsQuestCheck___c_StaticFields *v59; // x0
  TerminalPramsManager_c *v60; // x0
  int64_t v61; // x21
  UserServantMaster_o *v62; // x28
  UserCommandCodeMaster_o *v63; // x23
  CommonUI_o *v64; // x19
  int32_t v65; // w20
  int32_t svtKeep; // w21
  struct clsQuestCheck___c_StaticFields *v67; // x8
  ServantFrameShortDlgComponent_CallbackFunc_o *_9__41_1; // x22
  Il2CppObject *v69; // x23
  struct clsQuestCheck___c_StaticFields *v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  CommonUI_o *v77; // x0
  int32_t v78; // w1
  int32_t v79; // w2
  int32_t v80; // w3
  CommonUI_o *v81; // x19
  int32_t v82; // w20
  int32_t svtEquipKeep; // w21
  struct clsQuestCheck___c_StaticFields *v84; // x8
  Il2CppObject *v85; // x23
  struct clsQuestCheck___c_StaticFields *v86; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  int32_t Count; // w19
  CommonUI_o *v94; // x20
  BalanceConfig_c *v95; // x8
  struct clsQuestCheck___c_StaticFields *v96; // x8
  Il2CppObject *v97; // x23
  struct clsQuestCheck___c_StaticFields *v98; // x0
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  bool v105; // w25
  WebViewManager_o *Instance; // x19
  RecoverDlgComponent_CallbackFunc_o *v108; // x20
  CommonUI_o *v109; // x0
  int32_t v110; // w1
  RecoverDlgComponent_CallbackFunc_o *v111; // x2
  bool v112; // w3
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x24
  UserItemMaster_o *v114; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v115; // x27
  System_String_o *v116; // x23
  int32_t v117; // w26
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v119; // x8
  int64_t v120; // x23
  int64_t v121; // x28
  int32_t klass; // w8
  struct System_Int32_array *nums; // x9
  System_String_o *v124; // x0
  System_String_o *v125; // x0
  System_String_o *v126; // x19
  System_String_o *v127; // x0
  System_String_o *v128; // x19
  CommonUI_o *v129; // x20
  clsQuestCheck___c_c *v130; // x8
  struct clsQuestCheck___c_StaticFields *v131; // x9
  System_String_o *v132; // x21
  System_Action_o *_9__41_11; // x22
  Il2CppObject *v134; // x23
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  struct clsQuestCheck___c_StaticFields *v141; // x0
  BattleServantConfConponent_o *p__9__41_11; // x0
  WebViewManager_o *v143; // x19
  RecoverDlgComponent_CallbackFunc_o *v144; // x20
  CommonUI_o *v145; // x19
  RecoverDlgComponent_CallbackFunc_o *v146; // x20
  QuestConsumeItemEntity_o *v147; // x24
  UserItemMaster_o *v148; // x27
  System_String_o *v149; // x23
  int32_t v150; // w26
  struct System_Int32_array *v151; // x8
  struct System_Int32_array *v152; // x8
  int64_t v153; // x23
  int64_t v154; // x28
  int32_t qp; // w8
  struct System_Int32_array *v156; // x9
  WarEntity_o *v157; // x0
  TerminalPramsManager_c *v158; // x0
  int v159; // w8
  TerminalPramsManager_c *v160; // x0
  int32_t v161; // w21
  int32_t VaildPayType; // w21
  TerminalPramsManager_c *v163; // x0
  MapControl_QuestInfo_o *v164; // x8
  QuestMessageMaster_o *v165; // x20
  int32_t PhaseMax; // w0
  System_String_o *ValidMessage; // x0
  System_String_o *v168; // x19
  CommonUI_o *v169; // x20
  System_String_o *v170; // x21
  System_String_o *v171; // x22
  clsQuestCheck___c_c *v172; // x8
  struct clsQuestCheck___c_StaticFields *v173; // x9
  CommonConfirmDialog_ClickDelegate_o *_9__41_2; // x24
  System_String_o *v175; // x23
  Il2CppObject *v176; // x25
  struct clsQuestCheck___c_StaticFields *v177; // x0
  System_String_array **v178; // x2
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  System_String_o *v184; // x0
  System_String_o *v185; // x0
  System_String_o *v186; // x19
  System_String_o *v187; // x0
  clsQuestCheck___c_c *v188; // x8
  struct clsQuestCheck___c_StaticFields *v189; // x9
  Il2CppObject *v190; // x23
  struct clsQuestCheck___c_StaticFields *v191; // x0
  __int64 v192; // x0
  char v193; // [xsp+3Ch] [xbp-84h]
  char v194; // [xsp+40h] [xbp-80h]
  UserGameEntity_o *v195; // [xsp+40h] [xbp-80h]
  System_String_o *SelfUserGame; // [xsp+48h] [xbp-78h]
  System_String_o *v197; // [xsp+48h] [xbp-78h]
  System_String_o *str0; // [xsp+50h] [xbp-70h]
  System_String_o *str0a; // [xsp+50h] [xbp-70h]
  int32_t v200; // [xsp+5Ch] [xbp-64h]
  int32_t v201; // [xsp+60h] [xbp-60h]
  int32_t v202; // [xsp+64h] [xbp-5Ch]
  int32_t servantEquipSum[2]; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_42AF9D8 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_B52984(&RecoverDlgComponent_CallbackFunc_TypeInfo);
    sub_B52984(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestMessageMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_WarMaster___);
    sub_B52984(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_0__);
    sub_B52984(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_11__);
    sub_B52984(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_13__);
    sub_B52984(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_1__);
    sub_B52984(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_2__);
    sub_B52984(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_3__);
    sub_B52984(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_4__);
    sub_B52984(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_7__);
    sub_B52984(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__10__);
    sub_B52984(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__12__);
    sub_B52984(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__9__);
    sub_B52984(&clsQuestCheck___c__DisplayClass41_0_TypeInfo);
    sub_B52984(&clsQuestCheck___c_TypeInfo);
    sub_B52984(&StringLiteral_26/*"\n"*/);
    sub_B52984(&StringLiteral_11031/*"QUEST_MESSAGE_DLG_DECIDE"*/);
    sub_B52984(&StringLiteral_11030/*"QUEST_MESSAGE_DLG_CANCEL"*/);
    sub_B52984(&StringLiteral_11029/*"QUEST_ITEM_COST_OVER"*/);
    sub_B52984(&StringLiteral_11058/*"QUEST_TIME_OVER"*/);
    sub_B52984(&StringLiteral_12299/*"SHORT_DLG_TITLE"*/);
    sub_B52984(&StringLiteral_27/*"\n\n"*/);
    sub_B52984(&StringLiteral_2542/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_10974/*"QUEST_AP_MAX_OVER"*/);
    byte_42AF9D8 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  v9 = sub_B52A54(clsQuestCheck___c__DisplayClass41_0_TypeInfo);
  clsQuestCheck___c__DisplayClass41_0___ctor((clsQuestCheck___c__DisplayClass41_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_289;
  *(_QWORD *)(v9 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = questInfo;
  v18 = (MapControl_QuestInfo_o **)(v9 + 24);
  sub_B52920((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)questInfo, v19, v20, v21, v22, v23, v24);
  SpotID = *(_QWORD *)(v9 + 24);
  *(_QWORD *)(v9 + 32) = srcEndTime;
  *(_DWORD *)(v9 + 40) = boostId;
  if ( !SpotID )
    goto LABEL_289;
  v25 = *(_DWORD *)(SpotID + 64);
  SpotID = MapControl_QuestInfo__GetSpotID((MapControl_QuestInfo_o *)SpotID, 0LL);
  v26 = *v18;
  if ( !*v18 )
    goto LABEL_289;
  questId = v26->fields.questId;
  questPhase = v26->fields.questPhase;
  v29 = SpotID;
  SpotID = (int64_t)MapControl_QuestInfo__GetMine(*v18, 0LL);
  if ( !*v18 )
    goto LABEL_289;
  if ( !SpotID )
    goto LABEL_289;
  SpotID = QuestEntity__getActConsume((QuestEntity_o *)SpotID, (*v18)->fields.costCalcVal, 0LL);
  v30 = *v18;
  if ( !*v18 )
    goto LABEL_289;
  v202 = v29;
  v31 = v30->fields._fixedCostVal_k__BackingField >= 0 ? v30->fields._fixedCostVal_k__BackingField : SpotID;
  SpotID = (int64_t)MapControl_QuestInfo__GetMine(v30, 0LL);
  if ( !SpotID )
    goto LABEL_289;
  v32 = *(_DWORD *)(SpotID + 80);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  IsQuestReleaseAll = TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
  if ( v32 == 1 || IsQuestReleaseAll )
    goto LABEL_41;
  SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_289;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)SpotID,
                                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  SpotID = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_289;
  Entity = UserQuestMaster__GetEntity(MasterData_WarQuestSelectionMaster, SpotID, questId, 0LL);
  if ( Entity )
  {
    if ( UserQuestEntity__IsNotExpired(Entity, 0LL) )
      goto LABEL_41;
  }
  v36 = *(_QWORD *)(v9 + 32);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( v36 < 1 || v36 - Time > 0 )
  {
LABEL_41:
    v200 = v25;
    v201 = questPhase;
    SpotID = (int64_t)UserGameMaster__getSelfUserGame(0LL);
    if ( *v18 )
    {
      v54 = (UserGameEntity_o *)SpotID;
      SpotID = (int64_t)MapControl_QuestInfo__GetMine(*v18, 0LL);
      if ( SpotID )
      {
        v55 = (QuestEntity_o *)SpotID;
        SpotID = QuestEntity__GetConsumeType((QuestEntity_o *)SpotID, 0LL);
        if ( (_DWORD)SpotID == 1 )
        {
          if ( !v54 )
            goto LABEL_289;
          if ( v31 > v54->fields.actMax )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v38 = LocalizationManager__Get((System_String_o *)StringLiteral_12299/*"SHORT_DLG_TITLE"*/, 0LL);
            v39 = LocalizationManager__Get((System_String_o *)StringLiteral_10974/*"QUEST_AP_MAX_OVER"*/, 0LL);
            SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v40 = (CommonUI_o *)SpotID;
            v56 = clsQuestCheck___c_TypeInfo;
            if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
              v56 = clsQuestCheck___c_TypeInfo;
            }
            static_fields = v56->static_fields;
            _9__41_4 = static_fields->__9__41_4;
            if ( _9__41_4 )
              goto LABEL_58;
            if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v56);
              static_fields = clsQuestCheck___c_TypeInfo->static_fields;
            }
            v58 = (Il2CppObject *)static_fields->__9;
            _9__41_4 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
            System_Action___ctor(_9__41_4, v58, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_4__, 0LL);
            v51 = (System_Int32_array **)_9__41_4;
            v59 = clsQuestCheck___c_TypeInfo->static_fields;
            v59->__9__41_4 = _9__41_4;
            p__9__41_4 = (BattleServantConfConponent_o *)&v59->__9__41_4;
            goto LABEL_57;
          }
        }
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_42AC2A6 )
        {
          sub_B52984(&TerminalPramsManager_TypeInfo);
          byte_42AC2A6 = 1;
        }
        v60 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v60 = TerminalPramsManager_TypeInfo;
        }
        v60->static_fields->_QuestId_k__BackingField = questId;
        v61 = *(_QWORD *)(v9 + 32);
        if ( !byte_42AC2F4 )
        {
          sub_B52984(&TerminalPramsManager_TypeInfo);
          v60 = TerminalPramsManager_TypeInfo;
          byte_42AC2F4 = 1;
        }
        if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v60);
          v60 = TerminalPramsManager_TypeInfo;
        }
        v60->static_fields->_EndTime_k__BackingField = v61;
        v60->static_fields->lastPlayQuestConsumeAp = v31;
        TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(0LL);
        SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( SpotID )
        {
          SpotID = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)SpotID,
                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( SpotID )
          {
            v62 = (UserServantMaster_o *)SpotID;
            UserServantMaster__getCount((UserServantMaster_o *)SpotID, &servantEquipSum[1], servantEquipSum, 1, 0LL);
            SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( SpotID )
            {
              v63 = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)SpotID,
                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
              if ( !UserServantMaster__CheckServantAdd(v62, 1, 0LL) )
              {
                SpotID = UserServantMaster__CheckEquipAdd(v62, 1, 1, 0LL);
                if ( (SpotID & 1) != 0 )
                {
                  SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !v54 )
                    goto LABEL_289;
                  v81 = (CommonUI_o *)SpotID;
                  v82 = servantEquipSum[0];
                  svtEquipKeep = v54->fields.svtEquipKeep;
                  SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
                  if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
                    SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
                  }
                  v84 = *(struct clsQuestCheck___c_StaticFields **)(SpotID + 184);
                  _9__41_1 = v84->__9__41_1;
                  if ( !_9__41_1 )
                  {
                    if ( (*(_BYTE *)(SpotID + 307) & 4) != 0 && !*(_DWORD *)(SpotID + 224) )
                    {
                      j_il2cpp_runtime_class_init_0(SpotID);
                      v84 = clsQuestCheck___c_TypeInfo->static_fields;
                    }
                    v85 = (Il2CppObject *)v84->__9;
                    _9__41_1 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B52A54(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
                    ServantFrameShortDlgComponent_CallbackFunc___ctor(
                      _9__41_1,
                      v85,
                      Method_clsQuestCheck___c__CheckQuestPlayable_b__41_1__,
                      0LL);
                    v86 = clsQuestCheck___c_TypeInfo->static_fields;
                    v86->__9__41_1 = _9__41_1;
                    sub_B52920(
                      (BattleServantConfConponent_o *)&v86->__9__41_1,
                      (System_Int32_array **)_9__41_1,
                      v87,
                      v88,
                      v89,
                      v90,
                      v91,
                      v92);
                  }
                  if ( !v81 )
                    goto LABEL_289;
                  v80 = 1;
                  v77 = v81;
                  v78 = v82;
                }
                else
                {
                  if ( !v63 )
                    goto LABEL_289;
                  if ( !UserCommandCodeMaster__CheckCommandCodeAdd(v63, 0, 0LL) )
                  {
                    SpotID = QuestEntity__GetConsumeType(v55, 0LL);
                    switch ( (int)SpotID )
                    {
                      case 1:
                        if ( !v54 )
                          goto LABEL_289;
                        if ( v31 <= UserGameEntity__getAct(v54, 0LL) )
                          goto LABEL_205;
                        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v108 = (RecoverDlgComponent_CallbackFunc_o *)sub_B52A54(RecoverDlgComponent_CallbackFunc_TypeInfo);
                        RecoverDlgComponent_CallbackFunc___ctor(
                          v108,
                          (Il2CppObject *)v9,
                          Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__9__,
                          0LL);
                        if ( !Instance )
                          goto LABEL_289;
                        v109 = (CommonUI_o *)Instance;
                        v110 = v31;
                        v111 = v108;
                        v112 = 0;
                        goto LABEL_172;
                      case 2:
                        if ( !v54 )
                          goto LABEL_289;
                        if ( v31 <= UserGameEntity__getRp(v54, 0LL) )
                          goto LABEL_205;
                        v145 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v146 = (RecoverDlgComponent_CallbackFunc_o *)sub_B52A54(RecoverDlgComponent_CallbackFunc_TypeInfo);
                        RecoverDlgComponent_CallbackFunc___ctor(
                          v146,
                          (Il2CppObject *)v9,
                          Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__10__,
                          0LL);
                        if ( !v145 )
                          goto LABEL_289;
                        CommonUI__OpenRpRecoverItemListDialog(v145, v31, v146, 0, 0LL);
                        return 0;
                      case 3:
                        ItemConsumeEntity = QuestEntity__getItemConsumeEntity(v55, 0LL);
                        SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !SpotID )
                          goto LABEL_289;
                        v114 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)SpotID,
                                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
                        SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !SpotID )
                          goto LABEL_289;
                        v115 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)SpotID,
                                                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
                        SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
                        if ( !ItemConsumeEntity )
                          goto LABEL_205;
                        v116 = (System_String_o *)StringLiteral_1/*""*/;
                        if ( !QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL) )
                          goto LABEL_205;
                        v117 = 0;
                        str0 = v116;
                        v194 = 0;
                        do
                        {
                          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !NetworkManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                          }
                          SpotID = NetworkManager__get_UserId(0LL);
                          itemIds = ItemConsumeEntity->fields.itemIds;
                          if ( !itemIds )
                            goto LABEL_289;
                          if ( v117 >= itemIds->max_length )
                            goto LABEL_290;
                          if ( !v114 )
                            goto LABEL_289;
                          SpotID = (int64_t)UserItemMaster__GetEntity(v114, SpotID, itemIds->m_Items[v117 + 1], 0LL);
                          v119 = ItemConsumeEntity->fields.itemIds;
                          if ( !v119 )
                            goto LABEL_289;
                          if ( v117 >= v119->max_length )
                            goto LABEL_290;
                          if ( !v115 )
                            goto LABEL_289;
                          v120 = SpotID;
                          SpotID = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              v115,
                                              v119->m_Items[v117 + 1],
                                              (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                          if ( !SpotID )
                            goto LABEL_289;
                          v121 = SpotID;
                          if ( *(_DWORD *)(SpotID + 48) == 1 )
                          {
                            if ( !SelfUserGame )
                              goto LABEL_289;
                            klass = (int32_t)SelfUserGame[4].klass;
                          }
                          else if ( v120
                                 && (SpotID = ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0LL), (SpotID & 1) != 0) )
                          {
                            klass = *(_DWORD *)(v120 + 28);
                          }
                          else
                          {
                            klass = 0;
                          }
                          nums = ItemConsumeEntity->fields.nums;
                          if ( !nums )
                            goto LABEL_289;
                          if ( v117 >= nums->max_length )
                            goto LABEL_290;
                          if ( nums->m_Items[v117 + 1] > klass )
                          {
                            str0 = System_String__Concat_44570600(
                                     str0,
                                     (System_String_o *)StringLiteral_26/*"\n"*/,
                                     *(System_String_o **)(v121 + 24),
                                     0LL);
                            v194 = 1;
                          }
                          ++v117;
                        }
                        while ( QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, v117, 0LL) );
                        if ( (v194 & 1) == 0 )
                          goto LABEL_205;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v124 = LocalizationManager__Get((System_String_o *)StringLiteral_11029/*"QUEST_ITEM_COST_OVER"*/, 0LL);
                        v125 = System_String__Format(v124, (Il2CppObject *)str0, 0LL);
                        v126 = System_String__Concat_44568316(v125, (System_String_o *)StringLiteral_27/*"\n\n"*/, 0LL);
                        v127 = LocalizationManager__Get((System_String_o *)StringLiteral_2542/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
                        v128 = System_String__Concat_44568316(v126, v127, 0LL);
                        SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v129 = (CommonUI_o *)SpotID;
                        v130 = clsQuestCheck___c_TypeInfo;
                        if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
                          v130 = clsQuestCheck___c_TypeInfo;
                        }
                        v131 = v130->static_fields;
                        v132 = (System_String_o *)StringLiteral_1/*""*/;
                        _9__41_11 = v131->__9__41_11;
                        if ( _9__41_11 )
                          goto LABEL_287;
                        if ( (BYTE3(v130->vtable._0_Equals.methodPtr) & 4) != 0 && !v130->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v130);
                          v131 = clsQuestCheck___c_TypeInfo->static_fields;
                        }
                        v134 = (Il2CppObject *)v131->__9;
                        _9__41_11 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                        System_Action___ctor(
                          _9__41_11,
                          v134,
                          Method_clsQuestCheck___c__CheckQuestPlayable_b__41_11__,
                          0LL);
                        v141 = clsQuestCheck___c_TypeInfo->static_fields;
                        v141->__9__41_11 = _9__41_11;
                        p__9__41_11 = (BattleServantConfConponent_o *)&v141->__9__41_11;
                        goto LABEL_286;
                      case 4:
                        if ( !v54 )
                          goto LABEL_289;
                        if ( v31 <= UserGameEntity__getAct(v54, 0LL) )
                        {
                          v147 = QuestEntity__getItemConsumeEntity(v55, 0LL);
                          SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                          if ( SpotID )
                          {
                            v148 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)SpotID,
                                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
                            SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                            if ( SpotID )
                            {
                              str0a = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)SpotID,
                                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
                              v195 = UserGameMaster__getSelfUserGame(0LL);
                              if ( !v147 )
                                goto LABEL_205;
                              v149 = (System_String_o *)StringLiteral_1/*""*/;
                              if ( !QuestConsumeItemEntity__IsAvailableAt(v147, 0, 0LL) )
                                goto LABEL_205;
                              v150 = 0;
                              v197 = v149;
                              v193 = 0;
                              do
                              {
                                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                }
                                SpotID = NetworkManager__get_UserId(0LL);
                                v151 = v147->fields.itemIds;
                                if ( !v151 )
                                  goto LABEL_289;
                                if ( v150 >= v151->max_length )
                                  goto LABEL_290;
                                if ( !v148 )
                                  goto LABEL_289;
                                SpotID = (int64_t)UserItemMaster__GetEntity(v148, SpotID, v151->m_Items[v150 + 1], 0LL);
                                v152 = v147->fields.itemIds;
                                if ( !v152 )
                                  goto LABEL_289;
                                if ( v150 >= v152->max_length )
                                  goto LABEL_290;
                                v153 = SpotID;
                                SpotID = (int64_t)str0a;
                                if ( !str0a )
                                  goto LABEL_289;
                                SpotID = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)str0a,
                                                    v152->m_Items[v150 + 1],
                                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                                if ( !SpotID )
                                  goto LABEL_289;
                                v154 = SpotID;
                                if ( *(_DWORD *)(SpotID + 48) == 1 )
                                {
                                  if ( !v195 )
                                    goto LABEL_289;
                                  qp = v195->fields.qp;
                                }
                                else if ( v153
                                       && (SpotID = ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0LL), (SpotID & 1) != 0) )
                                {
                                  qp = *(_DWORD *)(v153 + 28);
                                }
                                else
                                {
                                  qp = 0;
                                }
                                v156 = v147->fields.nums;
                                if ( !v156 )
                                  goto LABEL_289;
                                if ( v150 >= v156->max_length )
                                {
LABEL_290:
                                  v192 = sub_B52A88(SpotID);
                                  sub_B52A28(v192, 0LL);
                                }
                                if ( v156->m_Items[v150 + 1] > qp )
                                {
                                  v197 = System_String__Concat_44570600(
                                           v197,
                                           (System_String_o *)StringLiteral_26/*"\n"*/,
                                           *(System_String_o **)(v154 + 24),
                                           0LL);
                                  v193 = 1;
                                }
                                ++v150;
                              }
                              while ( QuestConsumeItemEntity__IsAvailableAt(v147, v150, 0LL) );
                              if ( (v193 & 1) != 0 )
                              {
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v184 = LocalizationManager__Get((System_String_o *)StringLiteral_11029/*"QUEST_ITEM_COST_OVER"*/, 0LL);
                                v185 = System_String__Format(v184, (Il2CppObject *)v197, 0LL);
                                v186 = System_String__Concat_44568316(v185, (System_String_o *)StringLiteral_27/*"\n\n"*/, 0LL);
                                v187 = LocalizationManager__Get((System_String_o *)StringLiteral_2542/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
                                v128 = System_String__Concat_44568316(v186, v187, 0LL);
                                SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                v129 = (CommonUI_o *)SpotID;
                                v188 = clsQuestCheck___c_TypeInfo;
                                if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
                                  v188 = clsQuestCheck___c_TypeInfo;
                                }
                                v189 = v188->static_fields;
                                v132 = (System_String_o *)StringLiteral_1/*""*/;
                                _9__41_11 = v189->__9__41_13;
                                if ( !_9__41_11 )
                                {
                                  if ( (BYTE3(v188->vtable._0_Equals.methodPtr) & 4) != 0 && !v188->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(v188);
                                    v189 = clsQuestCheck___c_TypeInfo->static_fields;
                                  }
                                  v190 = (Il2CppObject *)v189->__9;
                                  _9__41_11 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    _9__41_11,
                                    v190,
                                    Method_clsQuestCheck___c__CheckQuestPlayable_b__41_13__,
                                    0LL);
                                  v191 = clsQuestCheck___c_TypeInfo->static_fields;
                                  v191->__9__41_13 = _9__41_11;
                                  p__9__41_11 = (BattleServantConfConponent_o *)&v191->__9__41_13;
LABEL_286:
                                  sub_B52920(
                                    p__9__41_11,
                                    (System_Int32_array **)_9__41_11,
                                    v135,
                                    v136,
                                    v137,
                                    v138,
                                    v139,
                                    v140);
                                }
LABEL_287:
                                if ( v129 )
                                {
                                  CommonUI__OpenNotificationDialog(
                                    v129,
                                    v132,
                                    v128,
                                    _9__41_11,
                                    -1,
                                    0,
                                    0,
                                    0,
                                    0,
                                    0,
                                    1,
                                    0,
                                    0LL,
                                    0LL);
                                  goto LABEL_120;
                                }
                              }
                              else
                              {
LABEL_205:
                                SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                if ( SpotID )
                                {
                                  SpotID = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)SpotID,
                                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_WarMaster___);
                                  if ( SpotID )
                                  {
                                    v157 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)SpotID,
                                             v200,
                                             (const MethodInfo_23E22D8 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
                                    if ( v157 && WarEntity__IsFolder(v157, 0LL) )
                                    {
                                      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                      }
                                      if ( !byte_42AC2AA )
                                      {
                                        sub_B52984(&TerminalPramsManager_TypeInfo);
                                        byte_42AC2AA = 1;
                                      }
                                      v158 = TerminalPramsManager_TypeInfo;
                                      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                        v158 = TerminalPramsManager_TypeInfo;
                                      }
                                      v159 = 3;
                                    }
                                    else
                                    {
                                      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                      }
                                      if ( !byte_42AC2AA )
                                      {
                                        sub_B52984(&TerminalPramsManager_TypeInfo);
                                        byte_42AC2AA = 1;
                                      }
                                      v158 = TerminalPramsManager_TypeInfo;
                                      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                        v158 = TerminalPramsManager_TypeInfo;
                                      }
                                      v159 = 2;
                                    }
                                    v158->static_fields->_DispState_k__BackingField = v159;
                                    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                    }
                                    if ( !byte_42AC2AD )
                                    {
                                      sub_B52984(&TerminalPramsManager_TypeInfo);
                                      byte_42AC2AD = 1;
                                    }
                                    v160 = TerminalPramsManager_TypeInfo;
                                    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                      v160 = TerminalPramsManager_TypeInfo;
                                    }
                                    v160->static_fields->_IsDoneShortcut_k__BackingField = 0;
                                    if ( !byte_42AC2A7 )
                                    {
                                      sub_B52984(&TerminalPramsManager_TypeInfo);
                                      v160 = TerminalPramsManager_TypeInfo;
                                      byte_42AC2A7 = 1;
                                    }
                                    if ( (BYTE3(v160->vtable._0_Equals.methodPtr) & 4) != 0 && !v160->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(v160);
                                      v160 = TerminalPramsManager_TypeInfo;
                                    }
                                    v160->static_fields->_PhaseCnt_k__BackingField = v201;
                                    if ( !byte_42AC2D7 )
                                    {
                                      sub_B52984(&TerminalPramsManager_TypeInfo);
                                      v160 = TerminalPramsManager_TypeInfo;
                                      byte_42AC2D7 = 1;
                                    }
                                    if ( (BYTE3(v160->vtable._0_Equals.methodPtr) & 4) != 0 )
                                    {
                                      v161 = v202;
                                      if ( !v160->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(v160);
                                        v160 = TerminalPramsManager_TypeInfo;
                                      }
                                    }
                                    else
                                    {
                                      v161 = v202;
                                    }
                                    v160->static_fields->_SpotId_k__BackingField = v161;
                                    if ( !byte_42AC2A4 )
                                    {
                                      sub_B52984(&TerminalPramsManager_TypeInfo);
                                      v160 = TerminalPramsManager_TypeInfo;
                                      byte_42AC2A4 = 1;
                                    }
                                    if ( (BYTE3(v160->vtable._0_Equals.methodPtr) & 4) != 0 && !v160->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(v160);
                                      v160 = TerminalPramsManager_TypeInfo;
                                    }
                                    v160->static_fields->_WarId_k__BackingField = v200;
                                    SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                    if ( SpotID )
                                    {
                                      SpotID = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)SpotID,
                                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_GachaMaster___);
                                      if ( SpotID )
                                      {
                                        VaildPayType = GachaMaster__getVaildPayType((GachaMaster_o *)SpotID, 0LL);
                                        if ( !byte_42AC2D8 )
                                        {
                                          sub_B52984(&TerminalPramsManager_TypeInfo);
                                          byte_42AC2D8 = 1;
                                        }
                                        v163 = TerminalPramsManager_TypeInfo;
                                        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                        {
                                          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                          v163 = TerminalPramsManager_TypeInfo;
                                        }
                                        v163->static_fields->_SummonType_k__BackingField = VaildPayType;
                                        SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                        if ( SpotID )
                                        {
                                          SpotID = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)SpotID,
                                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMessageMaster___);
                                          v164 = *v18;
                                          if ( *v18 )
                                          {
                                            v165 = (QuestMessageMaster_o *)SpotID;
                                            PhaseMax = MapControl_QuestInfo__GetPhaseMax(v164, 0LL);
                                            SpotID = UnityEngine_Mathf__Min_41525188(v201 + 1, PhaseMax, 0LL);
                                            if ( v165 )
                                            {
                                              v105 = 1;
                                              ValidMessage = QuestMessageMaster__GetValidMessage(
                                                               v165,
                                                               questId,
                                                               SpotID,
                                                               1,
                                                               0LL);
                                              if ( !ValidMessage )
                                                return v105;
                                              v168 = ValidMessage;
                                              v169 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                              {
                                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                              }
                                              v170 = LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11031/*"QUEST_MESSAGE_DLG_DECIDE"*/,
                                                       0LL);
                                              SpotID = (int64_t)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_11030/*"QUEST_MESSAGE_DLG_CANCEL"*/,
                                                                  0LL);
                                              v171 = (System_String_o *)SpotID;
                                              v172 = clsQuestCheck___c_TypeInfo;
                                              if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
                                              {
                                                j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
                                                v172 = clsQuestCheck___c_TypeInfo;
                                              }
                                              v173 = v172->static_fields;
                                              _9__41_2 = v173->__9__41_2;
                                              v175 = (System_String_o *)StringLiteral_1/*""*/;
                                              if ( !_9__41_2 )
                                              {
                                                if ( (BYTE3(v172->vtable._0_Equals.methodPtr) & 4) != 0
                                                  && !v172->_2.cctor_finished )
                                                {
                                                  j_il2cpp_runtime_class_init_0(v172);
                                                  v173 = clsQuestCheck___c_TypeInfo->static_fields;
                                                }
                                                v176 = (Il2CppObject *)v173->__9;
                                                _9__41_2 = (CommonConfirmDialog_ClickDelegate_o *)sub_B52A54(CommonConfirmDialog_ClickDelegate_TypeInfo);
                                                CommonConfirmDialog_ClickDelegate___ctor(
                                                  _9__41_2,
                                                  v176,
                                                  Method_clsQuestCheck___c__CheckQuestPlayable_b__41_2__,
                                                  0LL);
                                                v177 = clsQuestCheck___c_TypeInfo->static_fields;
                                                v177->__9__41_2 = _9__41_2;
                                                sub_B52920(
                                                  (BattleServantConfConponent_o *)&v177->__9__41_2,
                                                  (System_Int32_array **)_9__41_2,
                                                  v178,
                                                  v179,
                                                  v180,
                                                  v181,
                                                  v182,
                                                  v183);
                                              }
                                              if ( v169 )
                                              {
                                                v105 = 1;
                                                CommonUI__OpenConfirmDialog_18157444(
                                                  v169,
                                                  v175,
                                                  v168,
                                                  v170,
                                                  v171,
                                                  _9__41_2,
                                                  0,
                                                  1,
                                                  0,
                                                  0LL);
                                                return v105;
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
                          }
                        }
                        else
                        {
                          v143 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          v144 = (RecoverDlgComponent_CallbackFunc_o *)sub_B52A54(RecoverDlgComponent_CallbackFunc_TypeInfo);
                          RecoverDlgComponent_CallbackFunc___ctor(
                            v144,
                            (Il2CppObject *)v9,
                            Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__12__,
                            0LL);
                          if ( v143 )
                          {
                            v112 = 1;
                            v109 = (CommonUI_o *)v143;
                            v110 = v31;
                            v111 = v144;
LABEL_172:
                            CommonUI__OpenApRecoverItemListDialog(v109, v110, v111, v112, 0LL);
                            return 0;
                          }
                        }
                        break;
                      default:
                        goto LABEL_205;
                    }
                    goto LABEL_289;
                  }
                  Count = UserCommandCodeMaster__getCount(v63, 0LL);
                  SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !v54 )
                    goto LABEL_289;
                  v94 = (CommonUI_o *)SpotID;
                  if ( !byte_42AC2F5 )
                  {
                    sub_B52984(&BalanceConfig_TypeInfo);
                    byte_42AC2F5 = 1;
                  }
                  v95 = BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v95 = BalanceConfig_TypeInfo;
                  }
                  SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
                  svtEquipKeep = v95->static_fields->CommandCodeFrameMax;
                  if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
                    SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
                  }
                  v96 = *(struct clsQuestCheck___c_StaticFields **)(SpotID + 184);
                  _9__41_1 = v96->__9__41_7;
                  if ( !_9__41_1 )
                  {
                    if ( (*(_BYTE *)(SpotID + 307) & 4) != 0 && !*(_DWORD *)(SpotID + 224) )
                    {
                      j_il2cpp_runtime_class_init_0(SpotID);
                      v96 = clsQuestCheck___c_TypeInfo->static_fields;
                    }
                    v97 = (Il2CppObject *)v96->__9;
                    _9__41_1 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B52A54(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
                    ServantFrameShortDlgComponent_CallbackFunc___ctor(
                      _9__41_1,
                      v97,
                      Method_clsQuestCheck___c__CheckQuestPlayable_b__41_7__,
                      0LL);
                    v98 = clsQuestCheck___c_TypeInfo->static_fields;
                    v98->__9__41_7 = _9__41_1;
                    sub_B52920(
                      (BattleServantConfConponent_o *)&v98->__9__41_7,
                      (System_Int32_array **)_9__41_1,
                      v99,
                      v100,
                      v101,
                      v102,
                      v103,
                      v104);
                  }
                  if ( !v94 )
                    goto LABEL_289;
                  v80 = 2;
                  v77 = v94;
                  v78 = Count;
                }
                v79 = svtEquipKeep;
                goto LABEL_119;
              }
              SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( v54 )
              {
                v64 = (CommonUI_o *)SpotID;
                v65 = servantEquipSum[1];
                svtKeep = v54->fields.svtKeep;
                SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
                if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
                  SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
                }
                v67 = *(struct clsQuestCheck___c_StaticFields **)(SpotID + 184);
                _9__41_1 = v67->__9__41_0;
                if ( !_9__41_1 )
                {
                  if ( (*(_BYTE *)(SpotID + 307) & 4) != 0 && !*(_DWORD *)(SpotID + 224) )
                  {
                    j_il2cpp_runtime_class_init_0(SpotID);
                    v67 = clsQuestCheck___c_TypeInfo->static_fields;
                  }
                  v69 = (Il2CppObject *)v67->__9;
                  _9__41_1 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B52A54(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
                  ServantFrameShortDlgComponent_CallbackFunc___ctor(
                    _9__41_1,
                    v69,
                    Method_clsQuestCheck___c__CheckQuestPlayable_b__41_0__,
                    0LL);
                  v70 = clsQuestCheck___c_TypeInfo->static_fields;
                  v70->__9__41_0 = _9__41_1;
                  sub_B52920(
                    (BattleServantConfConponent_o *)&v70->__9__41_0,
                    (System_Int32_array **)_9__41_1,
                    v71,
                    v72,
                    v73,
                    v74,
                    v75,
                    v76);
                }
                if ( v64 )
                {
                  v77 = v64;
                  v78 = v65;
                  v79 = svtKeep;
                  v80 = 0;
LABEL_119:
                  CommonUI__OpenSvtFrameShortDlg(v77, v78, v79, v80, 1, _9__41_1, 0, 0LL);
                  goto LABEL_120;
                }
              }
            }
          }
        }
      }
    }
LABEL_289:
    sub_B52A5C(SpotID, v11);
  }
  v38 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_11058/*"QUEST_TIME_OVER"*/, 0LL);
  SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v40 = (CommonUI_o *)SpotID;
  v41 = clsQuestCheck___c_TypeInfo;
  if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
    v41 = clsQuestCheck___c_TypeInfo;
  }
  v42 = v41->static_fields;
  _9__41_4 = v42->__9__41_3;
  if ( _9__41_4 )
    goto LABEL_58;
  if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v41);
    v42 = clsQuestCheck___c_TypeInfo->static_fields;
  }
  v44 = (Il2CppObject *)v42->__9;
  _9__41_4 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(_9__41_4, v44, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_3__, 0LL);
  v51 = (System_Int32_array **)_9__41_4;
  v52 = clsQuestCheck___c_TypeInfo->static_fields;
  v52->__9__41_3 = _9__41_4;
  p__9__41_4 = (BattleServantConfConponent_o *)&v52->__9__41_3;
LABEL_57:
  sub_B52920(p__9__41_4, v51, v45, v46, v47, v48, v49, v50);
LABEL_58:
  if ( !v40 )
    goto LABEL_289;
  CommonUI__OpenNotificationDialog(v40, v38, v39, _9__41_4, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
LABEL_120:
  SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_289;
  ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)SpotID, 0LL);
  return 0;
}


bool __fastcall clsQuestCheck__CheckQuestPlayableNow(clsQuestCheck_o *this, int32_t questId, const MethodInfo *method)
{
  UserQuestMaster_o *Master_WarQuestSelectionMaster; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *UserId; // x0
  __int64 v7; // x1
  bool v8; // w0
  const MethodInfo *v9; // x2
  bool IsOpenByTime; // w8
  QuestEntity_o *v12; // [xsp+0h] [xbp-30h] BYREF
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42AF9BB & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_QuestMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42AF9BB = 1;
  }
  v12 = 0LL;
  entity = 0LL;
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, method) )
    return 0;
  v12 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = (DataMasterBase_WarMaster__WarEntity__int__o *)NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_25;
  if ( UserQuestMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, (int64_t)UserId, questId, 0LL) )
  {
    UserId = (DataMasterBase_WarMaster__WarEntity__int__o *)entity;
    if ( !entity )
      goto LABEL_25;
    if ( UserQuestEntity__IsNotExpired(entity, 0LL) )
      return 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserId = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !UserId )
LABEL_25:
    sub_B52A5C(UserId, v7);
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          UserId,
          (WarEntity_o **)&v12,
          questId,
          (const MethodInfo_23E2334 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  UserId = (DataMasterBase_WarMaster__WarEntity__int__o *)v12;
  if ( !v12 )
    goto LABEL_25;
  IsOpenByTime = QuestEntity__IsOpenByTime(v12, 0, 0LL);
  v8 = 0;
  if ( IsOpenByTime )
    return clsQuestCheck__IsReleasedQuest(this, questId, v9);
  return v8;
}


void __fastcall clsQuestCheck__DeleteContinueData(const MethodInfo *method)
{
  clsQuestCheck_c *v1; // x0
  System_String_o *KEY_QUEST_START_EFFECT; // x19

  if ( (byte_42AF9B8 & 1) == 0 )
  {
    sub_B52984(&EncryptedPlayerPrefs_TypeInfo);
    sub_B52984(&clsQuestCheck_TypeInfo);
    byte_42AF9B8 = 1;
  }
  v1 = clsQuestCheck_TypeInfo;
  if ( (BYTE3(clsQuestCheck_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !clsQuestCheck_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
    v1 = clsQuestCheck_TypeInfo;
  }
  KEY_QUEST_START_EFFECT = v1->static_fields->KEY_QUEST_START_EFFECT;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__DeleteKey(KEY_QUEST_START_EFFECT, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


int32_t __fastcall clsQuestCheck__GetBeforeClearQuestId(
        clsQuestCheck_o *this,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v5; // x1
  bool v6; // w8
  int32_t result; // w0
  TerminalPramsManager_c *v8; // x0

  if ( (byte_42AF9CB & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AF9CB = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v6 = AvalonSceneManager__checkNowScene(Instance, 34, 0LL);
  result = -1;
  if ( !v6 || !is_quest_after_action )
    return result;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
LABEL_19:
    sub_B52A5C(Instance, v5);
  if ( !QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0LL) )
    return -1;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2B5 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2B5 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  QuestGroupMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct System_String_o *MasterName_k__BackingField; // x8
  QuestGroupMaster_o *v10; // x21
  unsigned __int64 v11; // x23
  int32_t v12; // w22
  __int64 v14; // x0

  if ( (byte_42AF9D4 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42AF9D4 = 1;
  }
  if ( eventId <= 0 )
    return (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  v5 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_20;
  Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)QuestGroupMaster__GetQuestIdListByEventId(
                                                           Master_WarQuestSelectionMaster,
                                                           eventId,
                                                           0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_20;
  MasterName_k__BackingField = Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
  v10 = Master_WarQuestSelectionMaster;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v11 = 0LL;
    do
    {
      if ( v11 >= (unsigned int)MasterName_k__BackingField )
      {
        v14 = sub_B52A88(Master_WarQuestSelectionMaster);
        sub_B52A28(v14, 0LL);
      }
      v12 = *((_DWORD *)&v10->fields.list + v11);
      Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)clsQuestCheck__CheckQuestPlayableNow(this, v12, v8);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        if ( !v5 )
          goto LABEL_20;
        System_Collections_Generic_List_int___Add(
          v5,
          v12,
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(MasterName_k__BackingField) = v10->fields._MasterName_k__BackingField;
      ++v11;
    }
    while ( (__int64)v11 < (int)MasterName_k__BackingField );
  }
  if ( !v5 )
LABEL_20:
    sub_B52A5C(Master_WarQuestSelectionMaster, v7);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall clsQuestCheck__GetNewPlayableEventQuestId(
        clsQuestCheck_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  TerminalPramsManager_c *v6; // x0
  System_String_o *ClearEventQuestIds_k__BackingField; // x21
  System_Char_array *v8; // x0
  System_Char_array *v9; // x1
  System_String_array *v10; // x21
  System_Converter_BattleActionData_HealData__int__o *v11; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array *v27; // x19
  System_Int32_array **v28; // x20
  TerminalPramsManager_c *v29; // x0
  BattleServantConfConponent_o *v30; // x0
  System_Int32_array **v31; // x19
  TerminalPramsManager_c *v32; // x0
  BattleServantConfConponent_o *p_ClearEventQuestIds_k__BackingField; // x0
  __int64 v35; // x0

  if ( (byte_42AF9D3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_ConvertAll_string__int___);
    sub_B52984(&char___TypeInfo);
    sub_B52984(&Method_System_Converter_string__int___ctor__);
    sub_B52984(&System_Converter_string__int__TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Except_int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Int32_Parse__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AF9D3 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AD19E )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AD19E = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( System_String__IsNullOrEmpty(v5->static_fields->_ClearEventQuestIds_k__BackingField, 0LL) )
    return (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AD19E )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AD19E = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  ClearEventQuestIds_k__BackingField = v6->static_fields->_ClearEventQuestIds_k__BackingField;
  v8 = (System_Char_array *)sub_B5299C(char___TypeInfo, 1LL);
  if ( !v8 )
    goto LABEL_45;
  v9 = v8;
  if ( !v8->max_length )
  {
    v35 = sub_B52A88(v8);
    sub_B52A28(v35, 0LL);
  }
  v8->m_Items[2] = 44;
  if ( !ClearEventQuestIds_k__BackingField
    || (v10 = System_String__Split(ClearEventQuestIds_k__BackingField, v8, 0LL),
        v11 = (System_Converter_BattleActionData_HealData__int__o *)sub_B52A54(System_Converter_string__int__TypeInfo),
        System_Converter_BattleActionData_HealData__int____ctor(
          v11,
          0LL,
          Method_System_Int32_Parse__,
          (const MethodInfo_23DE474 *)Method_System_Converter_string__int___ctor__),
        (v8 = (System_Char_array *)System_Array__ConvertAll_string__int_(
                                     v10,
                                     (System_Converter_TInput__TOutput__o *)v11,
                                     (const MethodInfo_2019898 *)Method_System_Array_ConvertAll_string__int___)) == 0LL) )
  {
LABEL_45:
    sub_B52A5C(v8, v9);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)v8;
  if ( !*(_QWORD *)&v8->max_length )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    v31 = (System_Int32_array **)StringLiteral_1/*""*/;
    if ( !byte_42AD194 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AD194 = 1;
    }
    v32 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v32 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (BattleServantConfConponent_o *)&v32->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = (BattleServantConfConponent_c *)v31;
    sub_B52920(p_ClearEventQuestIds_k__BackingField, v31, v12, v13, v14, v15, v16, v17);
    TerminalPramsManager__ClearEventQuestIds_SaveData(0LL);
    return (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)clsQuestCheck__GetEventQuestIdListPlayable(
                                                               this,
                                                               eventId,
                                                               (const MethodInfo *)v12);
  v20 = System_Linq_Enumerable__Except_int_(
          v19,
          v18,
          (const MethodInfo_1B613F0 *)Method_System_Linq_Enumerable_Except_int___);
  v27 = System_Linq_Enumerable__ToArray_int_(
          v20,
          (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  v28 = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( !byte_42AD194 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AD194 = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v30 = (BattleServantConfConponent_o *)&v29->static_fields->_ClearEventQuestIds_k__BackingField;
  v30->klass = (BattleServantConfConponent_c *)v28;
  sub_B52920(v30, v28, v21, v22, v23, v24, v25, v26);
  TerminalPramsManager__ClearEventQuestIds_SaveData(0LL);
  return v27;
}


System_Collections_Generic_List_QuestEntity__o *__fastcall clsQuestCheck__GetQuestEntityByQuestId(
        clsQuestCheck_o *this,
        System_Collections_Generic_List_int__o *qids,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x19
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v7; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  WarEntity_o *Entity; // x0
  System_Collections_Generic_List_Enumerator_int__o v12; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v13; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42AF9D1 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestEntity__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF9D1 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___),
        !qids) )
  {
    sub_B52A5C(Instance, v6);
  }
  v7 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    qids,
    (const MethodInfo_3057DF4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v13 = v12;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_int___MoveNext(
           &v13,
           (const MethodInfo_200F3F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v8 )
      break;
    if ( !v7 )
      sub_B52A5C(v8, v9);
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v7,
               v13.fields.current,
               (const MethodInfo_23E22D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    if ( !v4 )
      sub_B52A5C(Entity, Entity);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v4,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v13,
    (const MethodInfo_200F3EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x25
  unsigned int v15; // w28
  QuestReleaseEntity_o *v16; // x8
  int32_t questId; // w26
  const MethodInfo *v18; // x4
  System_Collections_Generic_List_int__o *v19; // x23
  const MethodInfo *v20; // x4
  unsigned int datalist; // w8
  int v22; // w25
  unsigned __int64 v23; // x20
  int32_t v24; // w26
  int v25; // w8
  __int64 v27; // x0
  _BYTE v28[32]; // [xsp+8h] [xbp-98h] BYREF
  int v29; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_int__o v30; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42AF9D0 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor___68512808);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF9D0 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v29 = 0;
  v9 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_36;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 9, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_36;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
      {
        v27 = sub_B52A88(Instance);
        sub_B52A28(v27, 0LL);
      }
      v16 = ListByType->m_Items[v15];
      if ( !v16 )
        break;
      if ( v16->fields.targetId == svt_id )
      {
        if ( !v14 )
          break;
        questId = v16->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v14,
                                      questId,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
            System_Collections_Generic_List_int___Add(
              v9,
              questId,
              (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_19;
    }
LABEL_36:
    sub_B52A5C(Instance, v11);
  }
LABEL_19:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v19 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_50685004(
      v19,
      (System_Collections_Generic_IEnumerable_T__o *)v9,
      (const MethodInfo_305644C *)Method_System_Collections_Generic_List_int___ctor___68512808);
    Instance = (DataManager_o *)clsQuestCheck__GetReleaseQuestIdByServantFriendShip(this, svt_id, -1, type_flag, v20);
    if ( !Instance )
      goto LABEL_36;
    datalist = (unsigned int)Instance->fields.datalist;
    v9 = (System_Collections_Generic_List_int__o *)Instance;
    if ( (int)(datalist - 1) >= 0 )
    {
      v22 = 0;
      v23 = (int)(datalist - 1);
      while ( 1 )
      {
        if ( v23 >= datalist )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        if ( !v19 )
          goto LABEL_36;
        v24 = v9->fields._items->m_Items[v23 + 1];
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v28,
          v19,
          (const MethodInfo_3057DF4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v30 = *(System_Collections_Generic_List_Enumerator_int__o *)v28;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v30,
                  (const MethodInfo_200F3F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v24 == v30.fields.current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v9,
              v23,
              (const MethodInfo_3058C68 *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        *(_DWORD *)&v28[4 * v22 + 24] = 226;
        v22 = ++v29;
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v30,
          (const MethodInfo_200F3EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( v22 )
        {
          v25 = v22 - 1;
          if ( *(_DWORD *)&v28[4 * v22 + 20] == 226 )
          {
            --v22;
            v29 = v25;
          }
        }
        if ( (--v23 & 0x80000000) != 0 )
          return v9;
        datalist = v9->fields._size;
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

  return clsQuestCheck__GetReleaseQuestIdByServantLimit_24442704(this, svt_id, oldLimitCount, 238, v4);
}


System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit_24442704(
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
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x25
  unsigned int v15; // w28
  QuestReleaseEntity_o *v16; // x8
  int32_t questId; // w26
  const MethodInfo *v18; // x4
  System_Collections_Generic_List_int__o *v19; // x23
  const MethodInfo *v20; // x4
  unsigned int datalist; // w8
  int v22; // w25
  unsigned __int64 v23; // x20
  int32_t v24; // w26
  int v25; // w8
  __int64 v27; // x0
  _BYTE v28[32]; // [xsp+8h] [xbp-98h] BYREF
  int v29; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_int__o v30; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42AF9CD & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor___68512808);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF9CD = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v29 = 0;
  v9 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_36;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_36;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
      {
        v27 = sub_B52A88(Instance);
        sub_B52A28(v27, 0LL);
      }
      v16 = ListByType->m_Items[v15];
      if ( !v16 )
        break;
      if ( v16->fields.targetId == svt_id )
      {
        if ( !v14 )
          break;
        questId = v16->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v14,
                                      questId,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
            System_Collections_Generic_List_int___Add(
              v9,
              questId,
              (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_19;
    }
LABEL_36:
    sub_B52A5C(Instance, v11);
  }
LABEL_19:
  if ( (oldLimitCount & 0x80000000) == 0 )
  {
    v19 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_50685004(
      v19,
      (System_Collections_Generic_IEnumerable_T__o *)v9,
      (const MethodInfo_305644C *)Method_System_Collections_Generic_List_int___ctor___68512808);
    Instance = (DataManager_o *)clsQuestCheck__GetReleaseQuestIdByServantLimit_24442704(
                                  this,
                                  svt_id,
                                  -1,
                                  type_flag,
                                  v20);
    if ( !Instance )
      goto LABEL_36;
    datalist = (unsigned int)Instance->fields.datalist;
    v9 = (System_Collections_Generic_List_int__o *)Instance;
    if ( (int)(datalist - 1) >= 0 )
    {
      v22 = 0;
      v23 = (int)(datalist - 1);
      while ( 1 )
      {
        if ( v23 >= datalist )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        if ( !v19 )
          goto LABEL_36;
        v24 = v9->fields._items->m_Items[v23 + 1];
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v28,
          v19,
          (const MethodInfo_3057DF4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v30 = *(System_Collections_Generic_List_Enumerator_int__o *)v28;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v30,
                  (const MethodInfo_200F3F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v24 == v30.fields.current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v9,
              v23,
              (const MethodInfo_3058C68 *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        *(_DWORD *)&v28[4 * v22 + 24] = 225;
        v22 = ++v29;
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v30,
          (const MethodInfo_200F3EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( v22 )
        {
          v25 = v22 - 1;
          if ( *(_DWORD *)&v28[4 * v22 + 20] == 225 )
          {
            --v22;
            v29 = v25;
          }
        }
        if ( (--v23 & 0x80000000) != 0 )
          return v9;
        datalist = v9->fields._size;
      }
    }
  }
  return v9;
}


System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit_24443688(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLimitCount,
        int32_t newLimitCount,
        int32_t type_flag,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v9; // x19
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  QuestReleaseEntity_array *ListByType; // x25
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x26
  unsigned int v15; // w21
  QuestReleaseEntity_o *v16; // x8
  int32_t questId; // w27
  const MethodInfo *v18; // x4
  System_Collections_Generic_List_int__o *v19; // x24
  int v20; // w8
  __int64 v21; // x28
  QuestReleaseEntity_o *v22; // x8
  int32_t v23; // w27
  const MethodInfo *v24; // x4
  unsigned int size; // w8
  int v26; // w26
  unsigned __int64 v27; // x20
  int32_t v28; // w25
  int v29; // w8
  __int64 v31; // x0
  _BYTE v34[32]; // [xsp+18h] [xbp-98h] BYREF
  int v35; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_int__o v36; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_42AF9CE & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF9CE = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v35 = 0;
  v9 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_47;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_47;
  max_length = ListByType->max_length;
  v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( v15 < max_length )
    {
      v16 = ListByType->m_Items[v15];
      if ( !v16 )
        goto LABEL_47;
      if ( v16->fields.targetId == svt_id )
      {
        if ( !v14 )
          goto LABEL_47;
        questId = v16->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v14,
                                      questId,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_47;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, questId, oldLimitCount, 7, v18);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v9 )
              goto LABEL_47;
            System_Collections_Generic_List_int___Add(
              v9,
              questId,
              (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_19;
    }
LABEL_48:
    v31 = sub_B52A88(Instance);
    sub_B52A28(v31, 0LL);
  }
LABEL_19:
  v19 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  v20 = ListByType->max_length;
  if ( v20 >= 1 )
  {
    v21 = 0LL;
    while ( (unsigned int)v21 < v20 )
    {
      v22 = ListByType->m_Items[v21];
      if ( !v22 )
        goto LABEL_47;
      if ( v22->fields.targetId == svt_id )
      {
        if ( !v14 )
          goto LABEL_47;
        v23 = v22->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v14,
                                      v23,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_47;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, v23, newLimitCount, 7, v24);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v19 )
              goto LABEL_47;
            System_Collections_Generic_List_int___Add(
              v19,
              v23,
              (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      v20 = ListByType->max_length;
      if ( (int)++v21 >= v20 )
        goto LABEL_31;
    }
    goto LABEL_48;
  }
LABEL_31:
  if ( !v19 )
LABEL_47:
    sub_B52A5C(Instance, v11);
  size = v19->fields._size;
  if ( (int)(size - 1) >= 0 )
  {
    v26 = 0;
    v27 = (int)(size - 1);
    while ( 1 )
    {
      if ( v27 >= size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      if ( !v9 )
        goto LABEL_47;
      v28 = v19->fields._items->m_Items[v27 + 1];
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v34,
        v9,
        (const MethodInfo_3057DF4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v36 = *(System_Collections_Generic_List_Enumerator_int__o *)v34;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v36,
                (const MethodInfo_200F3F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        if ( v28 == v36.fields.current )
        {
          System_Collections_Generic_List_int___RemoveAt(
            v19,
            v27,
            (const MethodInfo_3058C68 *)Method_System_Collections_Generic_List_int__RemoveAt__);
          break;
        }
      }
      *(_DWORD *)&v34[4 * v26 + 24] = 309;
      v26 = ++v35;
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v36,
        (const MethodInfo_200F3EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      if ( v26 )
      {
        v29 = v26 - 1;
        if ( *(_DWORD *)&v34[4 * v26 + 20] == 309 )
        {
          --v26;
          v35 = v29;
        }
      }
      if ( (--v27 & 0x80000000) != 0 )
        return v19;
      size = v19->fields._size;
    }
  }
  return v19;
}


System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLv(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLv,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__GetReleaseQuestIdByServantLv_24442200(this, svt_id, oldLv, 238, v4);
}


System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLv_24442200(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLv,
        int32_t type_flag,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v9; // x23
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  QuestReleaseEntity_array *ListByType; // x24
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x25
  unsigned int v15; // w27
  QuestReleaseEntity_o *v16; // x8
  int32_t questId; // w26
  const MethodInfo *v18; // x4
  __int64 v20; // x0

  if ( (byte_42AF9CC & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF9CC = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_20;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 6, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_20;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
      {
        v20 = sub_B52A88(Instance);
        sub_B52A28(v20, 0LL);
      }
      v16 = ListByType->m_Items[v15];
      if ( !v16 )
        break;
      if ( v16->fields.targetId == svt_id )
      {
        if ( !v14 )
          break;
        questId = v16->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v14,
                                      questId,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, questId, oldLv, 6, v18);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v9 )
              break;
            System_Collections_Generic_List_int___Add(
              v9,
              questId,
              (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v15 >= max_length )
        return v9;
    }
LABEL_20:
    sub_B52A5C(Instance, v11);
  }
  return v9;
}


System_Collections_Generic_List_QuestEntity__o *__fastcall clsQuestCheck__GetReleasedQuestEntityListByServantGet(
        clsQuestCheck_o *this,
        int32_t servantId,
        int32_t typeFlag,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  DataManager_o *v7; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  QuestReleaseMaster_o *v9; // x20
  int datalist; // w8
  DataManager_o *v11; // x26
  unsigned int v12; // w19
  __int64 v13; // x24
  __int64 v14; // x28
  int32_t v15; // w27
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  EventMissionProgressRequest_Argument_ProgressData_o **v22; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v23; // x24
  const MethodInfo *v24; // x4
  ServantGroupEntity_array *ListByServantID; // x19
  __int64 v26; // x8
  DataManager_o *v27; // x24
  unsigned __int64 v28; // x20
  int v29; // w8
  unsigned int v30; // w22
  __int64 v31; // x19
  __int64 v32; // x25
  __int64 v33; // x27
  int32_t v34; // w25
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  EventMissionProgressRequest_Argument_ProgressData_o **v41; // x26
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v42; // x28
  const MethodInfo *v43; // x4
  __int64 v45; // x0
  DataManager_o *v46; // [xsp+10h] [xbp-70h]
  DataManager_o *v47; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_T__o *list; // [xsp+28h] [xbp-58h]

  if ( (byte_42AF9CF & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_QuestEntity___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantGroupMaster___);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B52984(&Method_System_Func_QuestEntity__bool___ctor__);
    sub_B52984(&System_Func_QuestEntity__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_QuestEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestEntity__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_clsQuestCheck___c__DisplayClass31_0__GetReleasedQuestEntityListByServantGet_b__0__);
    sub_B52984(&clsQuestCheck___c__DisplayClass31_0_TypeInfo);
    sub_B52984(&Method_clsQuestCheck___c__DisplayClass31_1__GetReleasedQuestEntityListByServantGet_b__1__);
    sub_B52984(&clsQuestCheck___c__DisplayClass31_1_TypeInfo);
    byte_42AF9CF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  v7 = Instance;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
  v9 = (QuestReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 v7,
                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  list = (System_Collections_Generic_List_T__o *)sub_B52A54(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  if ( !v9 )
    goto LABEL_43;
  v46 = v7;
  Instance = (DataManager_o *)QuestReleaseMaster__getListByType(v9, 8, 0LL);
  if ( !Instance )
    goto LABEL_43;
  datalist = (int)Instance->fields.datalist;
  v11 = Instance;
  if ( datalist >= 1 )
  {
    v12 = 0;
    while ( v12 < datalist )
    {
      v13 = *((_QWORD *)&v11->fields.lookup + (int)v12);
      v14 = sub_B52A54(clsQuestCheck___c__DisplayClass31_0_TypeInfo);
      clsQuestCheck___c__DisplayClass31_0___ctor((clsQuestCheck___c__DisplayClass31_0_o *)v14, 0LL);
      if ( !v13 )
        goto LABEL_43;
      if ( *(_DWORD *)(v13 + 24) == servantId )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_43;
        v15 = *(_DWORD *)(v13 + 16);
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      v15,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v14 )
          goto LABEL_43;
        *(_QWORD *)(v14 + 16) = Instance;
        v22 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v14 + 16);
        sub_B52920(
          (BattleServantConfConponent_o *)(v14 + 16),
          (System_Int32_array **)Instance,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21);
        v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_QuestEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v23,
          (Il2CppObject *)v14,
          Method_clsQuestCheck___c__DisplayClass31_0__GetReleasedQuestEntityListByServantGet_b__0__,
          (const MethodInfo_2BC90BC *)Method_System_Func_QuestEntity__bool___ctor__);
        Instance = (DataManager_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                      list,
                                      (System_Func_T__bool__o *)v23,
                                      (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)*v22;
          if ( !*v22 )
            goto LABEL_43;
          Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
          if ( ((unsigned int)Instance & typeFlag) != 0 )
          {
            Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, v15, -1, 0, v24);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (DataManager_o *)list;
              if ( !list )
                goto LABEL_43;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
                *v22,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestEntity__Add__);
            }
          }
        }
      }
      datalist = (int)v11->fields.datalist;
      if ( (int)++v12 >= datalist )
        goto LABEL_20;
    }
LABEL_44:
    v45 = sub_B52A88(Instance);
    sub_B52A28(v45, 0LL);
  }
LABEL_20:
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v46,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantGroupMaster___);
  if ( !Instance
    || (ListByServantID = ServantGroupMaster__getListByServantID((ServantGroupMaster_o *)Instance, servantId, 0LL),
        Instance = (DataManager_o *)QuestReleaseMaster__getListByType(v9, 10, 0LL),
        !ListByServantID) )
  {
LABEL_43:
    sub_B52A5C(Instance, v6);
  }
  v26 = *(_QWORD *)&ListByServantID->max_length;
  if ( (int)v26 >= 1 )
  {
    v27 = Instance;
    v28 = 0LL;
    v47 = (DataManager_o *)ListByServantID;
    while ( 1 )
    {
      if ( v28 >= (unsigned int)v26 )
        goto LABEL_44;
      if ( !v27 )
        goto LABEL_43;
      v29 = (int)v27->fields.datalist;
      if ( v29 >= 1 )
        break;
LABEL_41:
      ++v28;
      LODWORD(v26) = v47->fields.datalist;
      if ( (__int64)v28 >= (int)v26 )
        return (System_Collections_Generic_List_QuestEntity__o *)list;
    }
    v30 = 0;
    v31 = *((_QWORD *)&v47->fields.lookup + v28);
    while ( v30 < v29 )
    {
      v32 = *((_QWORD *)&v27->fields.lookup + (int)v30);
      v33 = sub_B52A54(clsQuestCheck___c__DisplayClass31_1_TypeInfo);
      clsQuestCheck___c__DisplayClass31_1___ctor((clsQuestCheck___c__DisplayClass31_1_o *)v33, 0LL);
      if ( !v31 || !v32 )
        goto LABEL_43;
      if ( *(_DWORD *)(v31 + 16) == *(_DWORD *)(v32 + 24) )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_43;
        v34 = *(_DWORD *)(v32 + 16);
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      v34,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v33 )
          goto LABEL_43;
        *(_QWORD *)(v33 + 16) = Instance;
        v41 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v33 + 16);
        sub_B52920(
          (BattleServantConfConponent_o *)(v33 + 16),
          (System_Int32_array **)Instance,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
        v42 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_QuestEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v42,
          (Il2CppObject *)v33,
          Method_clsQuestCheck___c__DisplayClass31_1__GetReleasedQuestEntityListByServantGet_b__1__,
          (const MethodInfo_2BC90BC *)Method_System_Func_QuestEntity__bool___ctor__);
        Instance = (DataManager_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                      list,
                                      (System_Func_T__bool__o *)v42,
                                      (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)*v41;
          if ( !*v41 )
            goto LABEL_43;
          Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
          if ( ((unsigned int)Instance & typeFlag) != 0 )
          {
            Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, v34, -1, 0, v43);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (DataManager_o *)list;
              if ( !list )
                goto LABEL_43;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
                *v41,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestEntity__Add__);
            }
          }
        }
      }
      v29 = (int)v27->fields.datalist;
      if ( (int)++v30 >= v29 )
        goto LABEL_41;
    }
    goto LABEL_44;
  }
  return (System_Collections_Generic_List_QuestEntity__o *)list;
}


bool __fastcall clsQuestCheck__IsEncountRaidBoss(
        clsQuestCheck_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  EventRaidMaster_o *v9; // x22
  int32_t RaidDeadQuestId; // w23
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4
  const MethodInfo *v13; // x4
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v15; // x20
  unsigned __int64 v16; // x21
  __int64 v18; // x0

  if ( (byte_42AF9BF & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B52984(&SingletonTemplate_clsQuestCheck__TypeInfo);
    byte_42AF9BF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_19;
  v9 = (EventRaidMaster_o *)Instance;
  RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId((EventRaidMaster_o *)Instance, eventId, day, 0LL);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, RaidDeadQuestId, 0, v11)
    || clsQuestCheck__IsQuestRelease(this, RaidDeadQuestId, -1, 0, v12) )
  {
    return 1;
  }
  Instance = (DataManager_o *)EventRaidMaster__GetRaidAliveQuestIds(v9, eventId, day, 0LL);
  if ( !Instance )
LABEL_19:
    sub_B52A5C(Instance, v8);
  datalist = Instance->fields.datalist;
  v15 = Instance;
  if ( (int)datalist < 1 )
    return 0;
  v16 = 0LL;
  while ( 1 )
  {
    if ( v16 >= (unsigned int)datalist )
    {
      v18 = sub_B52A88(Instance);
      sub_B52A28(v18, 0LL);
    }
    Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, *((_DWORD *)&v15->fields.lookup + v16), -1, 0, v13);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      break;
    LODWORD(datalist) = v15->fields.datalist;
    if ( (__int64)++v16 >= (int)datalist )
      return 0;
  }
  return 1;
}


bool __fastcall clsQuestCheck__IsLastWarClear(clsQuestCheck_o *this, const MethodInfo *method)
{
  int32_t Value; // w1
  const MethodInfo *v4; // x2

  if ( (byte_42AF9C1 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_8416/*"LAST_WAR_ID"*/);
    byte_42AF9C1 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8416/*"LAST_WAR_ID"*/, 0LL);
  return clsQuestCheck__IsWarClear(this, Value, v4);
}


bool __fastcall clsQuestCheck__IsMainInterlude(clsQuestCheck_o *this, int32_t war_id, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  WarEntity_o *Entity; // x0

  if ( (byte_42AF9C2 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_WarMaster___);
    sub_B52984(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF9C2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v5);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             war_id,
             (const MethodInfo_23E22D8 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = WarEntity__IsMainInterlude(Entity, 0LL);
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

  if ( (byte_42AF9C8 & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_B52984(&CondType_TypeInfo);
    byte_42AF9C8 = 1;
  }
  v6 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25987760(qid, v6, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsQuestClearRaw(
        clsQuestCheck_o *this,
        int32_t qid,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  int32_t v6; // w20

  if ( (byte_42AF9C9 & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_B52984(&CondType_TypeInfo);
    byte_42AF9C9 = 1;
  }
  v6 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25987760(qid, v6, 0, 0LL);
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
  int64_t UserId; // x22

  if ( (byte_42AF9CA & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    this = (clsQuestCheck_o *)sub_B52984(&NetworkManager_TypeInfo);
    byte_42AF9CA = 1;
  }
  v8 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, *(const MethodInfo **)&phase);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestPhaseClear(UserId, qid, phase, v8, 0, 0LL);
}


bool __fastcall clsQuestCheck__IsQuestRelease(
        clsQuestCheck_o *this,
        int32_t quest_id,
        int32_t old_val,
        int32_t old_val_qr_type,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v11; // x20
  bool v12; // w19
  __int64 v13; // x1
  __int64 v14; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  QuestReleaseEntity_o *v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x4
  __int64 v27; // x10
  int32_t v28; // w2
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0

  if ( (byte_42AF9BE & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_DataManager_getEntityList_QuestReleaseMaster___);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&QuestReleaseEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF9BE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__getEntityList_QuestReleaseMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F3A0 *)Method_DataManager_getEntityList_QuestReleaseMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v10);
  }
  v11 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance;
  v12 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
          (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) > 0;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 v11,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v17;
        p_offset += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v14);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_17:
      v23 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v14);
    }
    v24 = (QuestReleaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                                    Enumerator,
                                    *(_QWORD *)(v23 + 8));
    if ( !v24 )
      goto LABEL_38;
    v27 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v24->klass->_2.bitflags2 + 1) < (unsigned int)v27
      || (QuestReleaseEntity_c *)v24->klass->_2.typeHierarchy[v27 - 1] != QuestReleaseEntity_TypeInfo )
    {
      v24 = (QuestReleaseEntity_o *)sub_B52D50(v24);
LABEL_38:
      sub_B52A5C(v24, v25);
    }
    if ( v24->fields.questId == quest_id )
    {
      if ( (old_val & 0x80000000) != 0 )
        v28 = -1;
      else
        v28 = v24->fields.type == old_val_qr_type ? old_val : -1;
      if ( !clsQuestCheck__IsQuestRelease_24438992(this, v24, v28, 0LL, v26) )
      {
        v12 = 0;
        break;
      }
    }
  }
  v29 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      v31 += 4;
      if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_34;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_34:
    v32 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v14);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  return v12;
}


bool __fastcall clsQuestCheck__IsQuestRelease_24436132(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        MapControl_QuestInfo_o *qinf,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_24438992(this, qrd, -1, qinf, v4);
}


bool __fastcall clsQuestCheck__IsQuestRelease_24437992(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        int32_t old_val,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_24438992(this, qrd, old_val, 0LL, v4);
}


bool __fastcall clsQuestCheck__IsQuestRelease_24438992(
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
  QuestEntity_o *v26; // x0
  int32_t v27; // w20
  int32_t v28; // w21
  int32_t v29; // w19
  bool v30; // w3
  QuestReleaseEntity_o *v31; // x2
  WarEntity_o *v32; // x0
  QuestEntity_o *v33; // x19
  int64_t Time; // x20
  int32_t v35; // w19
  int32_t v36; // w20
  int32_t questId; // w22
  int32_t ValueInt; // w19
  TotalEventRaidEntity_o *v40; // [xsp+8h] [xbp-48h] BYREF
  EventRaidEntity_o *entity; // [xsp+10h] [xbp-40h] BYREF
  System_Int32_array *sameGroupQuestIds; // [xsp+18h] [xbp-38h] BYREF
  bool is_release; // [xsp+2Ch] [xbp-24h] BYREF

  v10 = this;
  if ( (byte_42AF9C4 & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B52984(&NetworkManager_TypeInfo);
    this = (clsQuestCheck_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF9C4 = 1;
  }
  entity = 0LL;
  sameGroupQuestIds = 0LL;
  v40 = 0LL;
  is_release = 0;
  if ( !qrd )
LABEL_112:
    sub_B52A5C(this, qrd);
  type = qrd->fields.type;
  if ( !v6 & v5 )
  {
LABEL_20:
    targetId = qrd->fields.targetId;
    value = qrd->fields.value;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
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
        v30 = 1;
        v31 = qrd;
        goto LABEL_103;
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
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
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
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v17 = 7;
        break;
      case 8:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
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
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v17 = 9;
        break;
      case 10:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v17 = 10;
        break;
      case 11:
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v17 = 11;
        break;
      case 12:
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_112;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_112;
        v32 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                qrd->fields.questId,
                (const MethodInfo_23E22D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v32 )
          return is_release;
        v33 = (QuestEntity_o *)v32;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Time = NetworkManager__getTime(0LL);
        if ( QuestEntity__getOpenedAt(v33, 0LL) > Time || QuestEntity__getClosedAt(v33, 0LL) <= Time )
          return is_release;
        return 1;
      case 13:
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_112;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_112;
        v26 = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                 qrd->fields.questId,
                                 (const MethodInfo_23E22D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v26 )
          return is_release;
        return QuestEntity__IsOpenByTime(v26, 1, 0LL);
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
        v35 = qrd->fields.targetId;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return CondType__IsMissionAchive(v35, 0LL);
      case 26:
        v36 = qrd->fields.targetId;
        questId = qrd->fields.questId;
        ValueInt = QuestReleaseEntity__getValueInt(qrd, 0LL);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        is_release = CondType__IsNotQuestGroupClear(questId, v36, ValueInt, &sameGroupQuestIds, 1, 0LL);
        if ( qinf )
        {
          qinf->fields._GroupId_k__BackingField = v36;
          MapControl_QuestInfo__AddSameGroupQuestIds(qinf, sameGroupQuestIds, 0LL);
        }
        return is_release;
      case 27:
      case 28:
        v12 = qrd->fields.targetId;
        v13 = QuestReleaseEntity__getValueInt(qrd, 0LL);
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_112;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventRaidMaster___);
        if ( !this )
          goto LABEL_112;
        if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)this, &entity, v12, v13, 0LL) )
          return is_release;
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_112;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
        if ( !this )
          goto LABEL_112;
        this = (clsQuestCheck_o *)TotalEventRaidMaster__TryGetEntity(
                                    (TotalEventRaidMaster_o *)this,
                                    &v40,
                                    v12,
                                    v13,
                                    0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          return is_release;
        if ( !entity || !v40 )
          goto LABEL_112;
        return (entity->fields.maxHp > v40->fields.totalDamage) ^ (qrd->fields.type != 27);
      case 32:
        v27 = qrd->fields.questId;
        v28 = qrd->fields.targetId;
        v29 = QuestReleaseEntity__getValueInt(qrd, 0LL);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v24 = 1;
        v21 = v27;
        v22 = v28;
        v23 = v29;
        return CondType__IsQuestGroupClear(v21, v22, v23, v24, 0LL);
      case 38:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v17 = 38;
        break;
      case 53:
        v31 = qrd;
        v30 = 0;
LABEL_103:
        clsQuestCheck__checkCondTypeItemGet(this, &is_release, v31, v30, method);
        return is_release;
      case 54:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v17 = 54;
        break;
      default:
        if ( type == 58 )
        {
          v18 = qrd->fields.questId;
          v19 = qrd->fields.targetId;
          v20 = QuestReleaseEntity__getValueInt(qrd, 0LL);
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
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
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v17 = 64;
        break;
    }
  }
  return CondType__IsOpen(v17, targetId, value, 0, 0LL);
}


bool __fastcall clsQuestCheck__IsReleasedLoginQuest(
        clsQuestCheck_o *this,
        LoginQuestEntity_o *loginQuestEnt,
        const MethodInfo *method)
{
  QuestReleaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  clsQuestCheck_Fields *p_fields; // x21
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *qrs; // x9
  int64_t v9; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  int v13; // w19
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42AF9BD & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42AF9BD = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !loginQuestEnt || !Master_WarQuestSelectionMaster )
    goto LABEL_26;
  p_fields = &this->fields;
  QuestReleaseMaster__getListByQuestID_34120444(
    Master_WarQuestSelectionMaster,
    loginQuestEnt->fields.questId,
    &this->fields.qrs,
    0LL);
  if ( !this->fields.qrs )
    return 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (QuestReleaseMaster_o *)NetworkManager__getTime(0LL);
  qrs = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)p_fields->qrs;
  if ( !p_fields->qrs )
LABEL_26:
    sub_B52A5C(Master_WarQuestSelectionMaster, v6);
  v9 = (int64_t)Master_WarQuestSelectionMaster;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    qrs,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v15,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v10 )
      break;
    if ( !v15.fields.current )
      sub_B52A5C(v10, v11);
    if ( HIDWORD(v15.fields.current[1].klass) == 12 )
    {
      if ( !LoginQuestEntity__IsEnablePeriod(loginQuestEnt, v9, 0LL) )
        goto LABEL_20;
    }
    else if ( !clsQuestCheck__IsQuestRelease_24438992(this, (QuestReleaseEntity_o *)v15.fields.current, -1, 0LL, v12) )
    {
LABEL_20:
      v13 = 4;
      goto LABEL_23;
    }
  }
  v13 = 2;
LABEL_23:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v13 != 4;
}


bool __fastcall clsQuestCheck__IsReleasedQuest(clsQuestCheck_o *this, int32_t questId, const MethodInfo *method)
{
  QuestReleaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_QuestReleaseEntity__o *qrs; // x0
  const MethodInfo *v8; // x4
  int v9; // w19
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42AF9BC & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    byte_42AF9BC = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B52A5C(0LL, v6);
  QuestReleaseMaster__getListByQuestID_34120444(Master_WarQuestSelectionMaster, questId, &this->fields.qrs, 0LL);
  qrs = this->fields.qrs;
  if ( qrs )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v11,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)qrs,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v11,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
    {
      if ( !clsQuestCheck__IsQuestRelease_24438992(this, (QuestReleaseEntity_o *)v11.fields.current, -1, 0LL, v8) )
      {
        v9 = 2;
        goto LABEL_13;
      }
    }
    v9 = 0;
LABEL_13:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v11,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    LOBYTE(qrs) = v9 != 2;
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
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int32_t ScriptIntParam; // w21
  int v20; // w8
  clsQuestCheck_c *v22; // x0
  System_String_o *KEY_QUEST_START_EFFECT; // x22
  System_String_o *String; // x22
  System_String_array *v25; // x0
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v26; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v27; // x20
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x20
  System_String_o *v29; // x0
  char v30; // w8
  System_String_o *v31; // x19
  clsQuestCheck_c *v32; // x0
  System_String_o *v33; // x20
  __int64 v34; // x0
  WarEntity_o *v35; // [xsp+8h] [xbp-48h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42AF9D7 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Find_string___);
    sub_B52984(&char___TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_QuestMaster___);
    sub_B52984(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_B52984(&EncryptedPlayerPrefs_TypeInfo);
    sub_B52984(&Method_System_Func_string__bool___ctor__);
    sub_B52984(&System_Func_string__bool__TypeInfo);
    sub_B52984(&Method_clsQuestCheck___c__DisplayClass40_0__IsTapSkipQuestStart_b__0__);
    sub_B52984(&clsQuestCheck___c__DisplayClass40_0_TypeInfo);
    sub_B52984(&StringLiteral_21794/*"questStartEffectSkip"*/);
    sub_B52984(&StringLiteral_886/*"/"*/);
    sub_B52984(&clsQuestCheck_TypeInfo);
    byte_42AF9D7 = 1;
  }
  entity = 0LL;
  v35 = 0LL;
  v10 = sub_B52A54(clsQuestCheck___c__DisplayClass40_0_TypeInfo);
  clsQuestCheck___c__DisplayClass40_0___ctor((clsQuestCheck___c__DisplayClass40_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_49;
  *(_QWORD *)(v10 + 16) = effectName;
  sub_B52920(
    (BattleServantConfConponent_o *)(v10 + 16),
    (System_Int32_array **)effectName,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( isMyRoomMaterial )
    return 0;
  if ( questPhase <= 1 )
    questPhase = 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_49;
  if ( !QuestPhaseMaster__TryGetEntity(
          (QuestPhaseMaster_o *)Master_WarQuestSelectionMaster,
          &entity,
          questId,
          questPhase,
          0LL) )
    goto LABEL_53;
  Master_WarQuestSelectionMaster = (__int64)entity;
  if ( !entity )
    goto LABEL_49;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_21794/*"questStartEffectSkip"*/, 0, 0LL);
  if ( !ScriptIntParam )
  {
LABEL_53:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_49;
    Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                       &v35,
                                       questId,
                                       (const MethodInfo_23E2334 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    if ( (Master_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( !v35 )
        goto LABEL_49;
      v20 = LODWORD(v35->fields.longName) - 1;
      if ( (unsigned int)v20 > 4 )
        ScriptIntParam = 0;
      else
        ScriptIntParam = dword_327BA50[v20];
      goto LABEL_24;
    }
    return 0;
  }
LABEL_24:
  v22 = clsQuestCheck_TypeInfo;
  if ( (BYTE3(clsQuestCheck_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !clsQuestCheck_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
    v22 = clsQuestCheck_TypeInfo;
  }
  KEY_QUEST_START_EFFECT = v22->static_fields->KEY_QUEST_START_EFFECT;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  String = EncryptedPlayerPrefs__GetString(KEY_QUEST_START_EFFECT, 0LL);
  if ( System_String__IsNullOrEmpty(String, 0LL) )
    goto LABEL_37;
  Master_WarQuestSelectionMaster = sub_B5299C(char___TypeInfo, 1LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_49;
  v12 = Master_WarQuestSelectionMaster;
  if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
  {
    v34 = sub_B52A88(Master_WarQuestSelectionMaster);
    sub_B52A28(v34, 0LL);
  }
  *(_WORD *)(Master_WarQuestSelectionMaster + 32) = 47;
  if ( !String )
LABEL_49:
    sub_B52A5C(Master_WarQuestSelectionMaster, v12);
  v25 = System_String__Split(String, (System_Char_array *)Master_WarQuestSelectionMaster, 0LL);
  if ( !v25 )
  {
LABEL_37:
    v31 = *(System_String_o **)(v10 + 16);
    goto LABEL_38;
  }
  v26 = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)v25;
  v27 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_string__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v27,
    (Il2CppObject *)v10,
    Method_clsQuestCheck___c__DisplayClass40_0__IsTapSkipQuestStart_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_string__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                     v26,
                                                                     (System_Func_T__bool__o *)v27,
                                                                     (const MethodInfo_1A421B0 *)Method_BasicHelper_Find_string___);
  v29 = System_String__Concat_44570600(
          String,
          (System_String_o *)StringLiteral_886/*"/"*/,
          *(System_String_o **)(v10 + 16),
          0LL);
  if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
  {
    v31 = v29;
LABEL_38:
    v32 = clsQuestCheck_TypeInfo;
    if ( (BYTE3(clsQuestCheck_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !clsQuestCheck_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
      v32 = clsQuestCheck_TypeInfo;
    }
    v33 = v32->static_fields->KEY_QUEST_START_EFFECT;
    if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    }
    EncryptedPlayerPrefs__SetString(v33, v31, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
    v30 = 1;
    goto LABEL_45;
  }
  v30 = 0;
LABEL_45:
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
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  QuestRandomGroupMaster_o *v6; // x21
  QuestRandomGroupEntity_o *EntityFromQuestId; // x0
  QuestRandomGroupEntity_o *v8; // x19
  int32_t randomGroupId; // w20
  TerminalPramsManager_c *v10; // x0
  TerminalPramsManager_c *v11; // x0
  int32_t Item; // w22
  QuestRandomGroupEntity_o *RandomRangeQuest; // x0
  TerminalPramsManager_c *v14; // x0
  QuestRandomGroupEntity_o *v15; // x21
  TerminalPramsManager_c *v16; // x0
  TerminalPramsManager_c *v17; // x0

  if ( (byte_42AF9BA & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_QuestRandomGroupMaster___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AF9BA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestRandomGroupMaster___);
  if ( !questInfo )
    goto LABEL_64;
  v6 = (QuestRandomGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_64;
  EntityFromQuestId = QuestRandomGroupMaster__GetEntityFromQuestId(
                        (QuestRandomGroupMaster_o *)Instance,
                        questInfo->fields.questId,
                        0LL);
  if ( EntityFromQuestId )
  {
    v8 = EntityFromQuestId;
    randomGroupId = EntityFromQuestId->fields.randomGroupId;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    TerminalPramsManager__LoadQuestRandomGroupList(0LL);
    if ( !byte_42AD1B7 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AD1B7 = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    Instance = (DataManager_o *)v10->static_fields->_QuestRandomGroupList_k__BackingField;
    if ( !Instance )
      goto LABEL_64;
    if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
           (System_Collections_Generic_Dictionary_int__int__o *)Instance,
           randomGroupId,
           (const MethodInfo_2EFFD00 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    {
      if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42AD1B7 )
      {
        sub_B52984(&TerminalPramsManager_TypeInfo);
        byte_42AD1B7 = 1;
      }
      v11 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v11 = TerminalPramsManager_TypeInfo;
      }
      Instance = (DataManager_o *)v11->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_64;
      Item = System_Collections_Generic_Dictionary_int__int___get_Item(
               (System_Collections_Generic_Dictionary_int__int__o *)Instance,
               randomGroupId,
               (const MethodInfo_2EFF9DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsQuestClear_25987760(Item, -1, 0, 0LL) )
        goto LABEL_53;
    }
    else
    {
      if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42AD1B7 )
      {
        sub_B52984(&TerminalPramsManager_TypeInfo);
        byte_42AD1B7 = 1;
      }
      v14 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v14 = TerminalPramsManager_TypeInfo;
      }
      Instance = (DataManager_o *)v14->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_64;
      System_Collections_Generic_Dictionary_int__int___Add(
        (System_Collections_Generic_Dictionary_int__int__o *)Instance,
        randomGroupId,
        0,
        (const MethodInfo_2EFFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
    RandomRangeQuest = QuestRandomGroupMaster__GetRandomRangeQuest(v6, randomGroupId, 0LL);
    if ( RandomRangeQuest )
    {
      v15 = RandomRangeQuest;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42AD1B7 )
      {
        sub_B52984(&TerminalPramsManager_TypeInfo);
        byte_42AD1B7 = 1;
      }
      v16 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
      }
      Instance = (DataManager_o *)v16->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_64;
      System_Collections_Generic_Dictionary_int__int___set_Item(
        (System_Collections_Generic_Dictionary_int__int__o *)Instance,
        randomGroupId,
        v15->fields.questId,
        (const MethodInfo_2EFFA74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      TerminalPramsManager__SaveQuestRandomGroupList(0LL);
LABEL_53:
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42AD1B7 )
      {
        sub_B52984(&TerminalPramsManager_TypeInfo);
        byte_42AD1B7 = 1;
      }
      v17 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v17 = TerminalPramsManager_TypeInfo;
      }
      Instance = (DataManager_o *)v17->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( Instance )
      {
        LOBYTE(RandomRangeQuest) = System_Collections_Generic_Dictionary_int__int___get_Item(
                                     (System_Collections_Generic_Dictionary_int__int__o *)Instance,
                                     randomGroupId,
                                     (const MethodInfo_2EFF9DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) == v8->fields.questId;
        return (char)RandomRangeQuest;
      }
LABEL_64:
      sub_B52A5C(Instance, v5);
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
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  WarEntity_o *Entity; // x0
  const MethodInfo *v8; // x3

  if ( (byte_42AF9C0 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_WarMaster___);
    sub_B52984(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF9C0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v6);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             war_id,
             (const MethodInfo_23E22D8 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = clsQuestCheck__IsQuestClear(this, Entity->fields.lastQuestId, 0, v8);
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

  if ( (byte_42AF9D6 & 1) == 0 )
  {
    sub_B52984(&ScriptManager_TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AF9D6 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2A2 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2A2 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v4->static_fields->_WarId_k__BackingField;
  if ( !byte_42AC2B5 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_42AC2B5 = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v4->static_fields->_QuestId_k__BackingField;
  if ( clsQuestCheck__mfCheck_IsQuestNew((clsQuestCheck_o *)v4, QuestId_k__BackingField, method) )
  {
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
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
  __int64 v14; // x9
  __int64 v15; // x8
  TerminalPramsManager_c *v16; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w20
  BattleSetupInfo_o *v20; // x23
  Il2CppObject *v21; // x20
  clsQuestCheck_o *v22; // x0
  const MethodInfo *v23; // x1

  if ( (byte_42AF9D9 & 1) == 0 )
  {
    sub_B52984(&BattleRootComponent_TypeInfo);
    sub_B52984(&BattleSetupInfo_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AF9D9 = 1;
  }
  if ( result == 2 )
  {
    if ( clsQuestCheck__CheckQuestPlayable(this, qinf, endTime, boostId, *(const MethodInfo **)&boostId) )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42AC2A2 )
      {
        sub_B52984(&TerminalPramsManager_TypeInfo);
        byte_42AC2A2 = 1;
      }
      v16 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
      }
      WarId_k__BackingField = v16->static_fields->_WarId_k__BackingField;
      if ( !byte_42AC2B5 )
      {
        sub_B52984(&TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
        byte_42AC2B5 = 1;
      }
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = TerminalPramsManager_TypeInfo;
      }
      QuestId_k__BackingField = v16->static_fields->_QuestId_k__BackingField;
      if ( !byte_42AC2B6 )
      {
        sub_B52984(&TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
        byte_42AC2B6 = 1;
      }
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = TerminalPramsManager_TypeInfo;
      }
      PhaseCnt_k__BackingField = v16->static_fields->_PhaseCnt_k__BackingField;
      v20 = (BattleSetupInfo_o *)sub_B52A54(BattleSetupInfo_TypeInfo);
      BattleSetupInfo___ctor(v20, 0LL);
      if ( !v20 )
        goto LABEL_42;
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
          goto LABEL_42;
        *((_DWORD *)Instance + 14) = boostId;
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance
        || (*((_BYTE *)Instance + 140) = 1,
            (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__)) == 0LL)
        || (*((_DWORD *)Instance + 36) = 1,
            (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
      {
LABEL_42:
        sub_B52A5C(Instance, v12);
      }
      AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 35, 1, v21, 0LL);
    }
LABEL_40:
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0LL);
      return;
    }
    goto LABEL_42;
  }
  if ( result )
    goto LABEL_40;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  v13 = (_QWORD *)*((_QWORD *)Instance + 3);
  if ( !v13 )
    goto LABEL_42;
  v14 = *(&BattleRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*v13 + 300LL) >= (unsigned int)v14
    && *(BattleRootComponent_c **)(*(_QWORD *)(*v13 + 200LL) + 8 * v14 - 8) == BattleRootComponent_TypeInfo )
  {
    Instance = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)Instance + 3), 0LL);
    if ( !Instance )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v15 = v13[9];
    if ( !v15 )
      goto LABEL_42;
    Instance = *(void **)(v15 + 456);
    if ( !Instance )
      goto LABEL_42;
    BattleResultComponent__EndResult((BattleResultComponent_o *)Instance, 0LL);
    goto LABEL_40;
  }
  v22 = (clsQuestCheck_o *)sub_B52D50(*((_QWORD *)Instance + 3));
  clsQuestCheck___ctor(v22, v23);
}


void __fastcall clsQuestCheck__SaveEventQuestIdListPlayable(
        clsQuestCheck_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v10; // x21
  TerminalPramsManager_c *v11; // x0
  BattleServantConfConponent_o *p_ClearEventQuestIds_k__BackingField; // x0
  const MethodInfo *v13; // x2
  System_Collections_Generic_IEnumerable_T__o *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x19
  TerminalPramsManager_c *v22; // x0
  BattleServantConfConponent_o *v23; // x0

  if ( (byte_42AF9D2 & 1) == 0 )
  {
    sub_B52984(&Method_System_String_Join_int___);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&StringLiteral_709/*","*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AF9D2 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( !byte_42AD194 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AD194 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  p_ClearEventQuestIds_k__BackingField = (BattleServantConfConponent_o *)&v11->static_fields->_ClearEventQuestIds_k__BackingField;
  p_ClearEventQuestIds_k__BackingField->klass = (BattleServantConfConponent_c *)v10;
  sub_B52920(p_ClearEventQuestIds_k__BackingField, v10, (System_String_array **)method, v3, v4, v5, v6, v7);
  v14 = (System_Collections_Generic_IEnumerable_T__o *)clsQuestCheck__GetEventQuestIdListPlayable(this, eventId, v13);
  v21 = (System_Int32_array **)System_String__Join_int_(
                                 (System_String_o *)StringLiteral_709/*","*/,
                                 v14,
                                 (const MethodInfo_1F77C24 *)Method_System_String_Join_int___);
  if ( !byte_42AD194 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AD194 = 1;
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = TerminalPramsManager_TypeInfo;
  }
  v23 = (BattleServantConfConponent_o *)&v22->static_fields->_ClearEventQuestIds_k__BackingField;
  v23->klass = (BattleServantConfConponent_c *)v21;
  sub_B52920(v23, v21, v15, v16, v17, v18, v19, v20);
  TerminalPramsManager__ClearEventQuestIds_SaveData(0LL);
}


void __fastcall clsQuestCheck__checkCondTypeItemGet(
        clsQuestCheck_o *this,
        bool *is_release,
        QuestReleaseEntity_o *qrd,
        bool itemGet,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v9; // x1
  UserItemMaster_o *v10; // x22
  int32_t targetId; // w23
  int32_t num; // w22
  char v13; // w8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42AF9C5 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF9C5 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !qrd )
    goto LABEL_14;
  v10 = (UserItemMaster_o *)Instance;
  targetId = qrd->fields.targetId;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v10 )
    goto LABEL_14;
  Instance = UserItemMaster__TryGetEntity(v10, &entity, Instance, targetId, 0LL);
  if ( (Instance & 1) == 0 )
  {
    v13 = !itemGet;
    goto LABEL_13;
  }
  if ( !entity )
LABEL_14:
    sub_B52A5C(Instance, v9);
  num = entity->fields.num;
  v13 = (num >= QuestReleaseEntity__getValueInt(qrd, 0LL)) ^ itemGet ^ 1;
LABEL_13:
  *is_release = v13 & 1;
}


bool __fastcall clsQuestCheck__isPlayQuestStartAction(clsQuestCheck_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalPramsManager_c *v3; // x0
  int32_t WarId_k__BackingField; // w20
  int32_t QuestId_k__BackingField; // w19

  if ( (byte_42AF9D5 & 1) == 0 )
  {
    sub_B52984(&ScriptManager_TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AF9D5 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2A2 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2A2 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v3->static_fields->_WarId_k__BackingField;
  if ( !byte_42AC2B5 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_42AC2B5 = 1;
  }
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v3->static_fields->_QuestId_k__BackingField;
  if ( !clsQuestCheck__mfCheck_IsQuestNew((clsQuestCheck_o *)v3, QuestId_k__BackingField, v2) )
    return 0;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  return ScriptManager__isPlayQuestStart(WarId_k__BackingField, QuestId_k__BackingField, 0LL);
}


bool __fastcall clsQuestCheck__mfCheck_IsQuestNew(clsQuestCheck_o *this, int32_t qid, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v5; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42AF9C6 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF9C6 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  Instance = UserQuestMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, qid, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.challengeNum == 0;
LABEL_13:
    sub_B52A5C(Instance, v5);
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
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42AF9C7 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF9C7 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  if ( UserQuestMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, (int64_t)Instance, qid, 0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserQuestEntity__getQuestPhase(entity, 0LL);
LABEL_13:
    sub_B52A5C(Instance, v5);
  }
  return 0;
}


bool __fastcall clsQuestCheck__mfQuestReleaseCheckAlreadyClear(
        clsQuestCheck_o *this,
        int32_t qid,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  bool v8; // w8
  bool result; // w0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42AF9C3 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF9C3 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                qid,
                                (const MethodInfo_23E2334 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 1;
  if ( !entity )
LABEL_12:
    sub_B52A5C(Instance, v6);
  if ( (*(&entity->fields.startType + 1) | 4) != 5 )
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
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v12; // x2
  int64_t Master_WarQuestSelectionMaster; // x0
  __int64 v14; // x1
  _BOOL8 IsShop; // x0
  const MethodInfo *v16; // x2
  UserQuestMaster_o *v17; // x23
  clsQuestCheck_Fields *p_fields; // x23
  int32_t UseDiceSpotId; // w24
  System_Collections_Generic_List_T__o *qrs; // x24
  clsQuestCheck___c_c *v22; // x0
  struct clsQuestCheck___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__5_0; // x25
  Il2CppObject *v25; // x26
  struct clsQuestCheck___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct BalanceConfig_StaticFields *v33; // x8
  QuestEntity_o *Mine; // x0
  UserEventQuestCooltimeMaster_o *v35; // x24
  UserEventQuestCooltimeEntity_o *v36; // x0
  UserEventQuestCooltimeEntity_o *v37; // x24
  int64_t Time; // x0
  int64_t clearedAt; // x26
  int64_t v40; // x25
  struct System_Collections_Generic_List_QuestReleaseEntity__o *cQuestReleaseListP; // x23
  struct clsQuestCheck___c_StaticFields *v42; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_1; // x24
  Il2CppObject *v44; // x25
  struct clsQuestCheck___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  UserQuestMaster_o *v52; // x23
  const MethodInfo *v53; // x4
  QuestReleaseEntity_o *current; // x22
  _BOOL8 HasStatus; // x0
  __int64 v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  int v63; // w19
  int32_t eventId; // w24
  System_Collections_Generic_IEnumerable_T__o *v65; // x25
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v66; // x24
  const MethodInfo *v67; // x2
  BalanceConfig_c *v68; // x0
  const MethodInfo *v69; // x2
  BalanceConfig_c *v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Collections_Generic_List_Enumerator_T__o v77; // [xsp+0h] [xbp-80h] BYREF
  WarEntity_o *v78; // [xsp+18h] [xbp-68h] BYREF
  WarEntity_o *entity; // [xsp+20h] [xbp-60h] BYREF
  UserQuestEntity_o *v80; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_42AF9B9 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_BasicHelper_Any_QuestReleaseEntity___);
    sub_B52984(&Method_System_Comparison_QuestReleaseEntity___ctor__);
    sub_B52984(&System_Comparison_QuestReleaseEntity__TypeInfo);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_B52984(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_B52984(&Method_DataManager_GetMaster_WarMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B52984(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_B52984(&Method_System_Func_QuestReleaseEntity__bool___ctor__);
    sub_B52984(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___68517016);
    sub_B52984(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__);
    sub_B52984(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__);
    sub_B52984(&clsQuestCheck___c_TypeInfo);
    byte_42AF9B9 = 1;
  }
  entity = 0LL;
  v80 = 0LL;
  v78 = 0LL;
  memset(&v77, 0, sizeof(v77));
  *questReleaseNG = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)questReleaseNG,
    0LL,
    (System_String_array **)questReleaseNG,
    (System_String_array **)questInfo,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, v12) )
    return 0;
  v80 = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !questInfo || !Master_WarQuestSelectionMaster )
    goto LABEL_114;
  IsShop = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
             &entity,
             questInfo->fields.warId,
             (const MethodInfo_23E2334 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( IsShop )
  {
    Master_WarQuestSelectionMaster = (int64_t)entity;
    if ( !entity )
      goto LABEL_114;
    IsShop = WarEntity__IsShop(entity, 0LL);
    if ( !IsShop )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v17 = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserQuestMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = NetworkManager__get_UserId(0LL);
      if ( !v17 )
        goto LABEL_114;
      IsShop = UserQuestMaster__TryGetEntity(v17, &v80, Master_WarQuestSelectionMaster, questId, 0LL);
      if ( IsShop )
      {
        Master_WarQuestSelectionMaster = (int64_t)v80;
        if ( !v80 )
          goto LABEL_114;
        IsShop = UserQuestEntity__IsNotExpired(v80, 0LL);
        if ( IsShop )
          return 1;
      }
    }
  }
  if ( !clsQuestCheck__IsValidQuestRandomGroup((clsQuestCheck_o *)IsShop, questInfo, v16) )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_114;
  p_fields = &this->fields;
  QuestReleaseMaster__getListByQuestID_34120444(
    (QuestReleaseMaster_o *)Master_WarQuestSelectionMaster,
    questId,
    &this->fields.qrs,
    0LL);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !entity || !Master_WarQuestSelectionMaster )
    goto LABEL_114;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
         &v78,
         entity->fields.eventId,
         (const MethodInfo_23E2334 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Master_WarQuestSelectionMaster = (int64_t)v78;
    if ( !v78 )
      goto LABEL_114;
    if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v78, 0LL) )
    {
      Master_WarQuestSelectionMaster = (int64_t)v78;
      if ( !v78 )
        goto LABEL_114;
      UseDiceSpotId = EventDetailEntity__GetUseDiceSpotId((EventDetailEntity_o *)v78, 0LL);
      if ( UseDiceSpotId == MapControl_QuestInfo__GetSpotID(questInfo, 0LL)
        && MapControl_QuestInfo__GetQuestType(questInfo, 0LL) == 1 )
      {
        qrs = (System_Collections_Generic_List_T__o *)p_fields->qrs;
        v22 = clsQuestCheck___c_TypeInfo;
        if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
          v22 = clsQuestCheck___c_TypeInfo;
        }
        static_fields = v22->static_fields;
        _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__5_0;
        if ( !_9__5_0 )
        {
          if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v22);
            static_fields = clsQuestCheck___c_TypeInfo->static_fields;
          }
          v25 = (Il2CppObject *)static_fields->__9;
          _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_QuestReleaseEntity__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__5_0,
            v25,
            Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__,
            (const MethodInfo_2BC90BC *)Method_System_Func_QuestReleaseEntity__bool___ctor__);
          v26 = clsQuestCheck___c_TypeInfo->static_fields;
          v26->__9__5_0 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__5_0;
          sub_B52920(
            (BattleServantConfConponent_o *)&v26->__9__5_0,
            (System_Int32_array **)_9__5_0,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32);
        }
        if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                qrs,
                (System_Func_T__bool__o *)_9__5_0,
                (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_QuestReleaseEntity___) )
        {
          Master_WarQuestSelectionMaster = (int64_t)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Master_WarQuestSelectionMaster = (int64_t)BalanceConfig_TypeInfo;
          }
          v33 = *(struct BalanceConfig_StaticFields **)(Master_WarQuestSelectionMaster + 184);
          if ( v33->EventBoardGameNextBoardQuestId != questId )
          {
            if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
              && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
            {
              j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
              v33 = BalanceConfig_TypeInfo->static_fields;
            }
            if ( v33->EventBoardGameNextRoundQuestId != questId )
            {
              if ( !entity )
                goto LABEL_114;
              eventId = entity->fields.eventId;
              if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CondType_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              }
              if ( CondType__IsUserEventStatus(eventId, 7, 0LL) )
                return 0;
              v65 = (System_Collections_Generic_IEnumerable_T__o *)p_fields->qrs;
              v66 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
              System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
                v66,
                v65,
                (const MethodInfo_2FF0B38 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___68517016);
              v68 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v68 = BalanceConfig_TypeInfo;
              }
              if ( clsQuestCheck__CheckQuestPlayableNow(this, v68->static_fields->EventBoardGameNextBoardQuestId, v67) )
                return 0;
              v70 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v70 = BalanceConfig_TypeInfo;
              }
              if ( clsQuestCheck__CheckQuestPlayableNow(this, v70->static_fields->EventBoardGameNextRoundQuestId, v69) )
                return 0;
              p_fields->qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v66;
              sub_B52920(
                (BattleServantConfConponent_o *)&this->fields,
                (System_Int32_array **)v66,
                v71,
                v72,
                v73,
                v74,
                v75,
                v76);
            }
          }
        }
      }
    }
  }
  Mine = MapControl_QuestInfo__GetMine(questInfo, 0LL);
  if ( Mine && QuestEntity__HasFlag(Mine, 0x10000000000000LL, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___);
    if ( !questInfo->fields._WarInfo_k__BackingField )
      goto LABEL_114;
    v35 = (UserEventQuestCooltimeMaster_o *)Master_WarQuestSelectionMaster;
    Master_WarQuestSelectionMaster = MapControl_WarInfo__GetEventId(questInfo->fields._WarInfo_k__BackingField, 0LL);
    if ( !v35 )
      goto LABEL_114;
    v36 = UserEventQuestCooltimeMaster__getEntity(
            v35,
            Master_WarQuestSelectionMaster,
            questInfo->fields.questId,
            1,
            0LL);
    if ( v36 )
    {
      v37 = v36;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      clearedAt = v37->fields.clearedAt;
      v40 = Time;
      Master_WarQuestSelectionMaster = (int64_t)UserEventQuestCooltimeEntity__GetMasterEntity(v37, 0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_114;
      if ( v40 < clearedAt + *(int *)(Master_WarQuestSelectionMaster + 28) )
        return 0;
    }
  }
  if ( !p_fields->qrs )
    return 0;
  Master_WarQuestSelectionMaster = (int64_t)this->fields.cQuestReleaseListP;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_114;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.cQuestReleaseListP;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_114;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)Master_WarQuestSelectionMaster,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.qrs,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__);
  cQuestReleaseListP = this->fields.cQuestReleaseListP;
  Master_WarQuestSelectionMaster = (int64_t)clsQuestCheck___c_TypeInfo;
  if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
    Master_WarQuestSelectionMaster = (int64_t)clsQuestCheck___c_TypeInfo;
  }
  v42 = *(struct clsQuestCheck___c_StaticFields **)(Master_WarQuestSelectionMaster + 184);
  _9__5_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v42->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      v42 = clsQuestCheck___c_TypeInfo->static_fields;
    }
    v44 = (Il2CppObject *)v42->__9;
    _9__5_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_QuestReleaseEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_1,
      v44,
      Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__,
      (const MethodInfo_2483370 *)Method_System_Comparison_QuestReleaseEntity___ctor__);
    v45 = clsQuestCheck___c_TypeInfo->static_fields;
    v45->__9__5_1 = (struct System_Comparison_QuestReleaseEntity__o *)_9__5_1;
    sub_B52920(
      (BattleServantConfConponent_o *)&v45->__9__5_1,
      (System_Int32_array **)_9__5_1,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  if ( !cQuestReleaseListP )
    goto LABEL_114;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)cQuestReleaseListP,
    (System_Comparison_T__o *)_9__5_1,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  if ( v80 )
    goto LABEL_87;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v52 = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = NetworkManager__get_UserId(0LL);
  if ( !v52 )
LABEL_114:
    sub_B52A5C(Master_WarQuestSelectionMaster, v14);
  UserQuestMaster__TryGetEntity(v52, &v80, Master_WarQuestSelectionMaster, questId, 0LL);
LABEL_87:
  Master_WarQuestSelectionMaster = (int64_t)this->fields.cQuestReleaseListP;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_114;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v77,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v77,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
  {
    current = (QuestReleaseEntity_o *)v77.fields.current;
    if ( !v80 )
      goto LABEL_94;
    HasStatus = UserQuestEntity__HasStatus(v80, 8, 0LL);
    if ( !HasStatus )
      goto LABEL_94;
    if ( !current )
      sub_B52A5C(HasStatus, v56);
    if ( current->fields.type != 12 )
    {
LABEL_94:
      if ( !clsQuestCheck__IsQuestRelease_24438992(this, current, -1, questInfo, v53) )
      {
        *questReleaseNG = current;
        sub_B52920(
          (BattleServantConfConponent_o *)questReleaseNG,
          (System_Int32_array **)current,
          v57,
          v58,
          v59,
          v60,
          v61,
          v62);
        v63 = 64;
        goto LABEL_97;
      }
    }
  }
  v63 = 62;
LABEL_97:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v77,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v63 != 64;
}


void __fastcall clsQuestCheck___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct clsQuestCheck___c_StaticFields *static_fields; // x0

  if ( (byte_42AD786 & 1) == 0 )
  {
    sub_B52984(&clsQuestCheck___c_TypeInfo);
    byte_42AD786 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(clsQuestCheck___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = clsQuestCheck___c_TypeInfo->static_fields;
  static_fields->__9 = (struct clsQuestCheck___c_o *)v1;
  sub_B52920(static_fields);
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
  CommonUI_o *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_42AD788 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_clsQuestCheck___c__DisplayClass41_1__CheckQuestPlayable_b__5__);
    sub_B52984(&clsQuestCheck___c__DisplayClass41_1_TypeInfo);
    byte_42AD788 = 1;
  }
  v4 = sub_B52A54(clsQuestCheck___c__DisplayClass41_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_clsQuestCheck___c__DisplayClass41_1__CheckQuestPlayable_b__5__,
          0LL),
        !Instance) )
  {
    sub_B52A5C(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v8, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_1(
        clsQuestCheck___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_42AD789 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_clsQuestCheck___c__DisplayClass41_2__CheckQuestPlayable_b__6__);
    sub_B52984(&clsQuestCheck___c__DisplayClass41_2_TypeInfo);
    byte_42AD789 = 1;
  }
  v4 = sub_B52A54(clsQuestCheck___c__DisplayClass41_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_clsQuestCheck___c__DisplayClass41_2__CheckQuestPlayable_b__6__,
          0LL),
        !Instance) )
  {
    sub_B52A5C(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v8, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_11(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_42AD78B & 1) == 0 )
  {
    sub_B52984(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_42AD78B = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v3);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    0,
    (const MethodInfo_1A406E4 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_13(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_42AD78C & 1) == 0 )
  {
    sub_B52984(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_42AD78C = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v3);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    0,
    (const MethodInfo_1A406E4 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_2(
        clsQuestCheck___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42AD78D & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD78D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_3(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_42AD787 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&TopLoginRequest_TypeInfo);
    byte_42AD787 = 1;
  }
  if ( (BYTE3(TopLoginRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopLoginRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopLoginRequest_TypeInfo);
  }
  TopLoginRequest__ResetAccesTime(0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v3);
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
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
  CommonUI_o *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_42AD78A & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_clsQuestCheck___c__DisplayClass41_3__CheckQuestPlayable_b__8__);
    sub_B52984(&clsQuestCheck___c__DisplayClass41_3_TypeInfo);
    byte_42AD78A = 1;
  }
  v4 = sub_B52A54(clsQuestCheck___c__DisplayClass41_3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_clsQuestCheck___c__DisplayClass41_3__CheckQuestPlayable_b__8__,
          0LL),
        !Instance) )
  {
    sub_B52A5C(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v8, 0LL);
}


bool __fastcall clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_0(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B52A5C(this, 0LL);
  return n->fields.type == 118;
}


int32_t __fastcall clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_1(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *a,
        QuestReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B52A5C(this, a);
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
    sub_B52A5C(this, n);
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
    sub_B52A5C(this, n);
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
  clsQuestCheck_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, result);
  clsQuestCheck__RecoverItemListDialogCallback(
    _4__this,
    this->fields.questInfo,
    this->fields.srcEndTime,
    result,
    this->fields.boostId,
    0LL);
}


void __fastcall clsQuestCheck___c__DisplayClass41_0___CheckQuestPlayable_b__12(
        clsQuestCheck___c__DisplayClass41_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  clsQuestCheck_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, result);
  clsQuestCheck__RecoverItemListDialogCallback(
    _4__this,
    this->fields.questInfo,
    this->fields.srcEndTime,
    result,
    this->fields.boostId,
    0LL);
}


void __fastcall clsQuestCheck___c__DisplayClass41_0___CheckQuestPlayable_b__9(
        clsQuestCheck___c__DisplayClass41_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  clsQuestCheck_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, result);
  clsQuestCheck__RecoverItemListDialogCallback(
    _4__this,
    this->fields.questInfo,
    this->fields.srcEndTime,
    result,
    this->fields.boostId,
    0LL);
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
  WebViewManager_o *Instance; // x19
  SceneJumpInfo_o *v5; // x20
  AvalonSceneManager_o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1
  Il2CppObject *v9; // x3

  if ( (byte_42AD78E & 1) == 0 )
  {
    sub_B52984(&SceneJumpInfo_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&StringLiteral_12759/*"SellServant"*/);
    sub_B52984(&StringLiteral_12799/*"ServantCombine"*/);
    byte_42AD78E = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_B52A54(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17466224(v5, (System_String_o *)StringLiteral_12759/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_12;
      }
LABEL_15:
      sub_B52A5C(v6, v7);
    case 1:
      v6 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v6 )
      {
        v8 = 71;
        v9 = 0LL;
LABEL_13:
        AvalonSceneManager__transitionScene(v6, v8, 1, v9, 0LL);
        return;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_B52A54(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17466128(v5, (System_String_o *)StringLiteral_12799/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v8 = 32;
LABEL_12:
        v6 = (AvalonSceneManager_o *)Instance;
        v9 = (Il2CppObject *)v5;
        goto LABEL_13;
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
  AvalonSceneManager_o *Instance; // x19
  SceneJumpInfo_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1

  if ( (byte_42AD78F & 1) == 0 )
  {
    sub_B52984(&SceneJumpInfo_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&StringLiteral_12803/*"ServantEquipList"*/);
    sub_B52984(&StringLiteral_12759/*"SellServant"*/);
    sub_B52984(&StringLiteral_12802/*"ServantEQCombine"*/);
    byte_42AD78F = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_B52A54(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17466224(v5, (System_String_o *)StringLiteral_12759/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 1:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_B52A54(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17466128(v5, (System_String_o *)StringLiteral_12803/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v8 = 71;
        goto LABEL_12;
      }
LABEL_14:
      sub_B52A5C(v6, v7);
    case 0:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_B52A54(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17466128(v5, (System_String_o *)StringLiteral_12802/*"ServantEQCombine"*/, 0LL);
      if ( Instance )
      {
        v8 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene(Instance, v8, 1, (Il2CppObject *)v5, 0LL);
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
  AvalonSceneManager_o *Instance; // x19
  SceneJumpInfo_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_42AD790 & 1) == 0 )
  {
    sub_B52984(&SceneJumpInfo_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&StringLiteral_12759/*"SellServant"*/);
    byte_42AD790 = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v4 = (SceneJumpInfo_o *)sub_B52A54(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_17466224(v4, (System_String_o *)StringLiteral_12759/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_B52A5C(v5, v6);
    AvalonSceneManager__transitionScene(Instance, 22, 1, (Il2CppObject *)v4, 0LL);
  }
}