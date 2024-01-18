void __fastcall clsQuestCheck___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_418746F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_10985/*"QuestStartEffect"*/, v1);
    sub_B2C35C(&clsQuestCheck_TypeInfo, v8);
    byte_418746F = 1;
  }
  static_fields = (BattleServantConfConponent_o *)clsQuestCheck_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_10985/*"QuestStartEffect"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_10985/*"QuestStartEffect"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall clsQuestCheck___ctor(clsQuestCheck_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_418746E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v3);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck___ctor__, v4);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v5);
    byte_418746E = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v6;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v6, v7, v8, v9, v10, v11, v12);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.cQuestReleaseListP = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.cQuestReleaseListP,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2841CD4 *)Method_SingletonTemplate_clsQuestCheck___ctor__);
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
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x24
  int64_t SpotID; // x0
  __int64 v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  MapControl_QuestInfo_o **v60; // x20
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  int32_t v67; // w27
  MapControl_QuestInfo_o *v68; // x8
  int32_t questId; // w19
  int32_t questPhase; // w26
  int32_t v71; // w21
  MapControl_QuestInfo_o *v72; // x8
  int32_t v73; // w25
  int v74; // w21
  bool IsQuestReleaseAll; // w0
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x23
  UserQuestEntity_o *Entity; // x0
  __int64 v78; // x21
  int64_t Time; // x0
  System_String_o *v80; // x19
  System_String_o *v81; // x20
  CommonUI_o *v82; // x21
  clsQuestCheck___c_c *v83; // x8
  struct clsQuestCheck___c_StaticFields *v84; // x9
  System_Action_o *_9__39_4; // x22
  Il2CppObject *v86; // x23
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Int32_array **v93; // x1
  struct clsQuestCheck___c_StaticFields *v94; // x0
  BattleServantConfConponent_o *p__9__39_4; // x0
  UserGameEntity_o *v96; // x26
  QuestEntity_o *v97; // x27
  clsQuestCheck___c_c *v98; // x8
  struct clsQuestCheck___c_StaticFields *static_fields; // x9
  Il2CppObject *v100; // x23
  struct clsQuestCheck___c_StaticFields *v101; // x0
  TerminalPramsManager_c *v102; // x0
  int64_t v103; // x21
  UserServantMaster_o *v104; // x28
  UserCommandCodeMaster_o *v105; // x23
  CommonUI_o *v106; // x19
  int32_t v107; // w20
  int32_t svtKeep; // w21
  struct clsQuestCheck___c_StaticFields *v109; // x8
  ServantFrameShortDlgComponent_CallbackFunc_o *_9__39_1; // x22
  Il2CppObject *v111; // x23
  struct clsQuestCheck___c_StaticFields *v112; // x0
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  CommonUI_o *v119; // x0
  int32_t v120; // w1
  int32_t v121; // w2
  int32_t v122; // w3
  CommonUI_o *v123; // x19
  int32_t v124; // w20
  int32_t svtEquipKeep; // w21
  struct clsQuestCheck___c_StaticFields *v126; // x8
  Il2CppObject *v127; // x23
  struct clsQuestCheck___c_StaticFields *v128; // x0
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  int32_t Count; // w19
  CommonUI_o *v136; // x20
  BalanceConfig_c *v137; // x8
  struct clsQuestCheck___c_StaticFields *v138; // x8
  Il2CppObject *v139; // x23
  struct clsQuestCheck___c_StaticFields *v140; // x0
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  bool v147; // w25
  WebViewManager_o *Instance; // x19
  RecoverDlgComponent_CallbackFunc_o *v150; // x20
  CommonUI_o *v151; // x0
  int32_t v152; // w1
  RecoverDlgComponent_CallbackFunc_o *v153; // x2
  bool v154; // w3
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x24
  UserItemMaster_o *v156; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v157; // x27
  System_String_o *v158; // x23
  int32_t v159; // w26
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v161; // x8
  int64_t v162; // x23
  int64_t v163; // x28
  int32_t klass; // w8
  struct System_Int32_array *nums; // x9
  System_String_o *v166; // x0
  System_String_o *v167; // x0
  System_String_o *v168; // x19
  System_String_o *v169; // x0
  System_String_o *v170; // x19
  CommonUI_o *v171; // x20
  clsQuestCheck___c_c *v172; // x8
  struct clsQuestCheck___c_StaticFields *v173; // x9
  System_String_o *v174; // x21
  System_Action_o *_9__39_11; // x22
  Il2CppObject *v176; // x23
  System_String_array **v177; // x2
  System_String_array **v178; // x3
  System_Boolean_array **v179; // x4
  System_Int32_array **v180; // x5
  System_Int32_array *v181; // x6
  System_Int32_array *v182; // x7
  struct clsQuestCheck___c_StaticFields *v183; // x0
  BattleServantConfConponent_o *p__9__39_11; // x0
  WebViewManager_o *v185; // x19
  RecoverDlgComponent_CallbackFunc_o *v186; // x20
  CommonUI_o *v187; // x19
  RecoverDlgComponent_CallbackFunc_o *v188; // x20
  QuestConsumeItemEntity_o *v189; // x24
  UserItemMaster_o *v190; // x27
  System_String_o *v191; // x23
  int32_t v192; // w26
  struct System_Int32_array *v193; // x8
  struct System_Int32_array *v194; // x8
  int64_t v195; // x23
  int64_t v196; // x28
  int32_t qp; // w8
  struct System_Int32_array *v198; // x9
  WarEntity_o *v199; // x0
  __int64 v200; // x1
  TerminalPramsManager_c *v201; // x0
  int v202; // w8
  TerminalPramsManager_c *v203; // x0
  int32_t v204; // w21
  __int64 v205; // x1
  int32_t VaildPayType; // w21
  TerminalPramsManager_c *v207; // x0
  MapControl_QuestInfo_o *v208; // x8
  QuestMessageMaster_o *v209; // x20
  int32_t PhaseMax; // w0
  System_String_o *ValidMessage; // x0
  System_String_o *v212; // x19
  CommonUI_o *v213; // x20
  System_String_o *v214; // x21
  System_String_o *v215; // x22
  clsQuestCheck___c_c *v216; // x8
  struct clsQuestCheck___c_StaticFields *v217; // x9
  CommonConfirmDialog_ClickDelegate_o *_9__39_2; // x24
  System_String_o *v219; // x23
  Il2CppObject *v220; // x25
  struct clsQuestCheck___c_StaticFields *v221; // x0
  System_String_array **v222; // x2
  System_String_array **v223; // x3
  System_Boolean_array **v224; // x4
  System_Int32_array **v225; // x5
  System_Int32_array *v226; // x6
  System_Int32_array *v227; // x7
  System_String_o *v228; // x0
  System_String_o *v229; // x0
  System_String_o *v230; // x19
  System_String_o *v231; // x0
  clsQuestCheck___c_c *v232; // x8
  struct clsQuestCheck___c_StaticFields *v233; // x9
  Il2CppObject *v234; // x23
  struct clsQuestCheck___c_StaticFields *v235; // x0
  __int64 v236; // x0
  char v237; // [xsp+3Ch] [xbp-84h]
  char v238; // [xsp+40h] [xbp-80h]
  UserGameEntity_o *v239; // [xsp+40h] [xbp-80h]
  System_String_o *SelfUserGame; // [xsp+48h] [xbp-78h]
  System_String_o *v241; // [xsp+48h] [xbp-78h]
  System_String_o *str0; // [xsp+50h] [xbp-70h]
  System_String_o *str0a; // [xsp+50h] [xbp-70h]
  int32_t v244; // [xsp+5Ch] [xbp-64h]
  int32_t v245; // [xsp+60h] [xbp-60h]
  int32_t v246; // [xsp+64h] [xbp-5Ch]
  int32_t servantEquipSum[2]; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_418746C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, questInfo);
    sub_B2C35C(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, v9);
    sub_B2C35C(&RecoverDlgComponent_CallbackFunc_TypeInfo, v10);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_GachaMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMessageMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v16);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v18);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarMaster___, v19);
    sub_B2C35C(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v20);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v21);
    sub_B2C35C(&LocalizationManager_TypeInfo, v22);
    sub_B2C35C(&NetworkManager_TypeInfo, v23);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v24);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v26);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v27);
    sub_B2C35C(&Method_clsQuestCheck___c__CheckQuestPlayable_b__39_0__, v28);
    sub_B2C35C(&Method_clsQuestCheck___c__CheckQuestPlayable_b__39_11__, v29);
    sub_B2C35C(&Method_clsQuestCheck___c__CheckQuestPlayable_b__39_13__, v30);
    sub_B2C35C(&Method_clsQuestCheck___c__CheckQuestPlayable_b__39_1__, v31);
    sub_B2C35C(&Method_clsQuestCheck___c__CheckQuestPlayable_b__39_2__, v32);
    sub_B2C35C(&Method_clsQuestCheck___c__CheckQuestPlayable_b__39_3__, v33);
    sub_B2C35C(&Method_clsQuestCheck___c__CheckQuestPlayable_b__39_4__, v34);
    sub_B2C35C(&Method_clsQuestCheck___c__CheckQuestPlayable_b__39_7__, v35);
    sub_B2C35C(&Method_clsQuestCheck___c__DisplayClass39_0__CheckQuestPlayable_b__10__, v36);
    sub_B2C35C(&Method_clsQuestCheck___c__DisplayClass39_0__CheckQuestPlayable_b__12__, v37);
    sub_B2C35C(&Method_clsQuestCheck___c__DisplayClass39_0__CheckQuestPlayable_b__9__, v38);
    sub_B2C35C(&clsQuestCheck___c__DisplayClass39_0_TypeInfo, v39);
    sub_B2C35C(&clsQuestCheck___c_TypeInfo, v40);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v41);
    sub_B2C35C(&StringLiteral_10947/*"QUEST_MESSAGE_DLG_DECIDE"*/, v42);
    sub_B2C35C(&StringLiteral_10946/*"QUEST_MESSAGE_DLG_CANCEL"*/, v43);
    sub_B2C35C(&StringLiteral_10945/*"QUEST_ITEM_COST_OVER"*/, v44);
    sub_B2C35C(&StringLiteral_10972/*"QUEST_TIME_OVER"*/, v45);
    sub_B2C35C(&StringLiteral_12210/*"SHORT_DLG_TITLE"*/, v46);
    sub_B2C35C(&StringLiteral_27/*"\n\n"*/, v47);
    sub_B2C35C(&StringLiteral_2510/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, v48);
    sub_B2C35C(&StringLiteral_1/*""*/, v49);
    sub_B2C35C(&StringLiteral_10890/*"QUEST_AP_MAX_OVER"*/, v50);
    byte_418746C = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  v51 = sub_B2C42C(clsQuestCheck___c__DisplayClass39_0_TypeInfo);
  clsQuestCheck___c__DisplayClass39_0___ctor((clsQuestCheck___c__DisplayClass39_0_o *)v51, 0LL);
  if ( !v51 )
    goto LABEL_289;
  *(_QWORD *)(v51 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v51 + 16), (System_Int32_array **)this, v54, v55, v56, v57, v58, v59);
  *(_QWORD *)(v51 + 24) = questInfo;
  v60 = (MapControl_QuestInfo_o **)(v51 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v51 + 24), (System_Int32_array **)questInfo, v61, v62, v63, v64, v65, v66);
  SpotID = *(_QWORD *)(v51 + 24);
  *(_QWORD *)(v51 + 32) = srcEndTime;
  *(_DWORD *)(v51 + 40) = boostId;
  if ( !SpotID )
    goto LABEL_289;
  v67 = *(_DWORD *)(SpotID + 64);
  SpotID = MapControl_QuestInfo__GetSpotID((MapControl_QuestInfo_o *)SpotID, 0LL);
  v68 = *v60;
  if ( !*v60 )
    goto LABEL_289;
  questId = v68->fields.questId;
  questPhase = v68->fields.questPhase;
  v71 = SpotID;
  SpotID = (int64_t)MapControl_QuestInfo__GetMine(*v60, 0LL);
  if ( !*v60 )
    goto LABEL_289;
  if ( !SpotID )
    goto LABEL_289;
  SpotID = QuestEntity__getActConsume((QuestEntity_o *)SpotID, (*v60)->fields.costCalcVal, 0LL);
  v72 = *v60;
  if ( !*v60 )
    goto LABEL_289;
  v246 = v71;
  v73 = v72->fields._fixedCostVal_k__BackingField >= 0 ? v72->fields._fixedCostVal_k__BackingField : SpotID;
  SpotID = (int64_t)MapControl_QuestInfo__GetMine(v72, 0LL);
  if ( !SpotID )
    goto LABEL_289;
  v74 = *(_DWORD *)(SpotID + 80);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  IsQuestReleaseAll = TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
  if ( v74 == 1 || IsQuestReleaseAll )
    goto LABEL_41;
  SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_289;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)SpotID,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
  v78 = *(_QWORD *)(v51 + 32);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( v78 < 1 || v78 - Time > 0 )
  {
LABEL_41:
    v244 = v67;
    v245 = questPhase;
    SpotID = (int64_t)UserGameMaster__getSelfUserGame(0LL);
    if ( *v60 )
    {
      v96 = (UserGameEntity_o *)SpotID;
      SpotID = (int64_t)MapControl_QuestInfo__GetMine(*v60, 0LL);
      if ( SpotID )
      {
        v97 = (QuestEntity_o *)SpotID;
        SpotID = QuestEntity__GetConsumeType((QuestEntity_o *)SpotID, 0LL);
        if ( (_DWORD)SpotID == 1 )
        {
          if ( !v96 )
            goto LABEL_289;
          if ( v73 > v96->fields.actMax )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v80 = LocalizationManager__Get((System_String_o *)StringLiteral_12210/*"SHORT_DLG_TITLE"*/, 0LL);
            v81 = LocalizationManager__Get((System_String_o *)StringLiteral_10890/*"QUEST_AP_MAX_OVER"*/, 0LL);
            SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v82 = (CommonUI_o *)SpotID;
            v98 = clsQuestCheck___c_TypeInfo;
            if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
              v98 = clsQuestCheck___c_TypeInfo;
            }
            static_fields = v98->static_fields;
            _9__39_4 = static_fields->__9__39_4;
            if ( _9__39_4 )
              goto LABEL_58;
            if ( (BYTE3(v98->vtable._0_Equals.methodPtr) & 4) != 0 && !v98->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v98);
              static_fields = clsQuestCheck___c_TypeInfo->static_fields;
            }
            v100 = (Il2CppObject *)static_fields->__9;
            _9__39_4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(_9__39_4, v100, Method_clsQuestCheck___c__CheckQuestPlayable_b__39_4__, 0LL);
            v93 = (System_Int32_array **)_9__39_4;
            v101 = clsQuestCheck___c_TypeInfo->static_fields;
            v101->__9__39_4 = _9__39_4;
            p__9__39_4 = (BattleServantConfConponent_o *)&v101->__9__39_4;
            goto LABEL_57;
          }
        }
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_4183C6B )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, v53);
          byte_4183C6B = 1;
        }
        v102 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v102 = TerminalPramsManager_TypeInfo;
        }
        v102->static_fields->_QuestId_k__BackingField = questId;
        v103 = *(_QWORD *)(v51 + 32);
        if ( !byte_4183CB6 )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, v53);
          v102 = TerminalPramsManager_TypeInfo;
          byte_4183CB6 = 1;
        }
        if ( (BYTE3(v102->vtable._0_Equals.methodPtr) & 4) != 0 && !v102->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v102);
          v102 = TerminalPramsManager_TypeInfo;
        }
        v102->static_fields->_EndTime_k__BackingField = v103;
        v102->static_fields->lastPlayQuestConsumeAp = v73;
        TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(0LL);
        SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( SpotID )
        {
          SpotID = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)SpotID,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( SpotID )
          {
            v104 = (UserServantMaster_o *)SpotID;
            UserServantMaster__getCount((UserServantMaster_o *)SpotID, &servantEquipSum[1], servantEquipSum, 1, 0LL);
            SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( SpotID )
            {
              v105 = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)SpotID,
                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
              if ( !UserServantMaster__CheckServantAdd(v104, 1, 0LL) )
              {
                SpotID = UserServantMaster__CheckEquipAdd(v104, 1, 1, 0LL);
                if ( (SpotID & 1) != 0 )
                {
                  SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !v96 )
                    goto LABEL_289;
                  v123 = (CommonUI_o *)SpotID;
                  v124 = servantEquipSum[0];
                  svtEquipKeep = v96->fields.svtEquipKeep;
                  SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
                  if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
                    SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
                  }
                  v126 = *(struct clsQuestCheck___c_StaticFields **)(SpotID + 184);
                  _9__39_1 = v126->__9__39_1;
                  if ( !_9__39_1 )
                  {
                    if ( (*(_BYTE *)(SpotID + 307) & 4) != 0 && !*(_DWORD *)(SpotID + 224) )
                    {
                      j_il2cpp_runtime_class_init_0(SpotID);
                      v126 = clsQuestCheck___c_TypeInfo->static_fields;
                    }
                    v127 = (Il2CppObject *)v126->__9;
                    _9__39_1 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B2C42C(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
                    ServantFrameShortDlgComponent_CallbackFunc___ctor(
                      _9__39_1,
                      v127,
                      Method_clsQuestCheck___c__CheckQuestPlayable_b__39_1__,
                      0LL);
                    v128 = clsQuestCheck___c_TypeInfo->static_fields;
                    v128->__9__39_1 = _9__39_1;
                    sub_B2C2F8(
                      (BattleServantConfConponent_o *)&v128->__9__39_1,
                      (System_Int32_array **)_9__39_1,
                      v129,
                      v130,
                      v131,
                      v132,
                      v133,
                      v134);
                  }
                  if ( !v123 )
                    goto LABEL_289;
                  v122 = 1;
                  v119 = v123;
                  v120 = v124;
                }
                else
                {
                  if ( !v105 )
                    goto LABEL_289;
                  if ( !UserCommandCodeMaster__CheckCommandCodeAdd(v105, 0, 0LL) )
                  {
                    SpotID = QuestEntity__GetConsumeType(v97, 0LL);
                    switch ( (int)SpotID )
                    {
                      case 1:
                        if ( !v96 )
                          goto LABEL_289;
                        if ( v73 <= UserGameEntity__getAct(v96, 0LL) )
                          goto LABEL_205;
                        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v150 = (RecoverDlgComponent_CallbackFunc_o *)sub_B2C42C(RecoverDlgComponent_CallbackFunc_TypeInfo);
                        RecoverDlgComponent_CallbackFunc___ctor(
                          v150,
                          (Il2CppObject *)v51,
                          Method_clsQuestCheck___c__DisplayClass39_0__CheckQuestPlayable_b__9__,
                          0LL);
                        if ( !Instance )
                          goto LABEL_289;
                        v151 = (CommonUI_o *)Instance;
                        v152 = v73;
                        v153 = v150;
                        v154 = 0;
                        goto LABEL_172;
                      case 2:
                        if ( !v96 )
                          goto LABEL_289;
                        if ( v73 <= UserGameEntity__getRp(v96, 0LL) )
                          goto LABEL_205;
                        v187 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v188 = (RecoverDlgComponent_CallbackFunc_o *)sub_B2C42C(RecoverDlgComponent_CallbackFunc_TypeInfo);
                        RecoverDlgComponent_CallbackFunc___ctor(
                          v188,
                          (Il2CppObject *)v51,
                          Method_clsQuestCheck___c__DisplayClass39_0__CheckQuestPlayable_b__10__,
                          0LL);
                        if ( !v187 )
                          goto LABEL_289;
                        CommonUI__OpenRpRecoverItemListDialog(v187, v73, v188, 0, 0LL);
                        return 0;
                      case 3:
                        ItemConsumeEntity = QuestEntity__getItemConsumeEntity(v97, 0LL);
                        SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !SpotID )
                          goto LABEL_289;
                        v156 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)SpotID,
                                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
                        SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !SpotID )
                          goto LABEL_289;
                        v157 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)SpotID,
                                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
                        SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
                        if ( !ItemConsumeEntity )
                          goto LABEL_205;
                        v158 = (System_String_o *)StringLiteral_1/*""*/;
                        if ( !QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL) )
                          goto LABEL_205;
                        v159 = 0;
                        str0 = v158;
                        v238 = 0;
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
                          if ( v159 >= itemIds->max_length )
                            goto LABEL_290;
                          if ( !v156 )
                            goto LABEL_289;
                          SpotID = (int64_t)UserItemMaster__GetEntity(v156, SpotID, itemIds->m_Items[v159 + 1], 0LL);
                          v161 = ItemConsumeEntity->fields.itemIds;
                          if ( !v161 )
                            goto LABEL_289;
                          if ( v159 >= v161->max_length )
                            goto LABEL_290;
                          if ( !v157 )
                            goto LABEL_289;
                          v162 = SpotID;
                          SpotID = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              v157,
                                              v161->m_Items[v159 + 1],
                                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                          if ( !SpotID )
                            goto LABEL_289;
                          v163 = SpotID;
                          if ( *(_DWORD *)(SpotID + 48) == 1 )
                          {
                            if ( !SelfUserGame )
                              goto LABEL_289;
                            klass = (int32_t)SelfUserGame[4].klass;
                          }
                          else if ( v162
                                 && (SpotID = ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0LL), (SpotID & 1) != 0) )
                          {
                            klass = *(_DWORD *)(v162 + 28);
                          }
                          else
                          {
                            klass = 0;
                          }
                          nums = ItemConsumeEntity->fields.nums;
                          if ( !nums )
                            goto LABEL_289;
                          if ( v159 >= nums->max_length )
                            goto LABEL_290;
                          if ( nums->m_Items[v159 + 1] > klass )
                          {
                            str0 = System_String__Concat_44307816(
                                     str0,
                                     (System_String_o *)StringLiteral_26/*"\n"*/,
                                     *(System_String_o **)(v163 + 24),
                                     0LL);
                            v238 = 1;
                          }
                          ++v159;
                        }
                        while ( QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, v159, 0LL) );
                        if ( (v238 & 1) == 0 )
                          goto LABEL_205;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v166 = LocalizationManager__Get((System_String_o *)StringLiteral_10945/*"QUEST_ITEM_COST_OVER"*/, 0LL);
                        v167 = System_String__Format(v166, (Il2CppObject *)str0, 0LL);
                        v168 = System_String__Concat_44305532(v167, (System_String_o *)StringLiteral_27/*"\n\n"*/, 0LL);
                        v169 = LocalizationManager__Get((System_String_o *)StringLiteral_2510/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
                        v170 = System_String__Concat_44305532(v168, v169, 0LL);
                        SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v171 = (CommonUI_o *)SpotID;
                        v172 = clsQuestCheck___c_TypeInfo;
                        if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
                          v172 = clsQuestCheck___c_TypeInfo;
                        }
                        v173 = v172->static_fields;
                        v174 = (System_String_o *)StringLiteral_1/*""*/;
                        _9__39_11 = v173->__9__39_11;
                        if ( _9__39_11 )
                          goto LABEL_287;
                        if ( (BYTE3(v172->vtable._0_Equals.methodPtr) & 4) != 0 && !v172->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v172);
                          v173 = clsQuestCheck___c_TypeInfo->static_fields;
                        }
                        v176 = (Il2CppObject *)v173->__9;
                        _9__39_11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                        System_Action___ctor(
                          _9__39_11,
                          v176,
                          Method_clsQuestCheck___c__CheckQuestPlayable_b__39_11__,
                          0LL);
                        v183 = clsQuestCheck___c_TypeInfo->static_fields;
                        v183->__9__39_11 = _9__39_11;
                        p__9__39_11 = (BattleServantConfConponent_o *)&v183->__9__39_11;
                        goto LABEL_286;
                      case 4:
                        if ( !v96 )
                          goto LABEL_289;
                        if ( v73 <= UserGameEntity__getAct(v96, 0LL) )
                        {
                          v189 = QuestEntity__getItemConsumeEntity(v97, 0LL);
                          SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                          if ( SpotID )
                          {
                            v190 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)SpotID,
                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
                            SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                            if ( SpotID )
                            {
                              str0a = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)SpotID,
                                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
                              v239 = UserGameMaster__getSelfUserGame(0LL);
                              if ( !v189 )
                                goto LABEL_205;
                              v191 = (System_String_o *)StringLiteral_1/*""*/;
                              if ( !QuestConsumeItemEntity__IsAvailableAt(v189, 0, 0LL) )
                                goto LABEL_205;
                              v192 = 0;
                              v241 = v191;
                              v237 = 0;
                              do
                              {
                                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                }
                                SpotID = NetworkManager__get_UserId(0LL);
                                v193 = v189->fields.itemIds;
                                if ( !v193 )
                                  goto LABEL_289;
                                if ( v192 >= v193->max_length )
                                  goto LABEL_290;
                                if ( !v190 )
                                  goto LABEL_289;
                                SpotID = (int64_t)UserItemMaster__GetEntity(v190, SpotID, v193->m_Items[v192 + 1], 0LL);
                                v194 = v189->fields.itemIds;
                                if ( !v194 )
                                  goto LABEL_289;
                                if ( v192 >= v194->max_length )
                                  goto LABEL_290;
                                v195 = SpotID;
                                SpotID = (int64_t)str0a;
                                if ( !str0a )
                                  goto LABEL_289;
                                SpotID = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)str0a,
                                                    v194->m_Items[v192 + 1],
                                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                                if ( !SpotID )
                                  goto LABEL_289;
                                v196 = SpotID;
                                if ( *(_DWORD *)(SpotID + 48) == 1 )
                                {
                                  if ( !v239 )
                                    goto LABEL_289;
                                  qp = v239->fields.qp;
                                }
                                else if ( v195
                                       && (SpotID = ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0LL), (SpotID & 1) != 0) )
                                {
                                  qp = *(_DWORD *)(v195 + 28);
                                }
                                else
                                {
                                  qp = 0;
                                }
                                v198 = v189->fields.nums;
                                if ( !v198 )
                                  goto LABEL_289;
                                if ( v192 >= v198->max_length )
                                {
LABEL_290:
                                  v236 = sub_B2C460(SpotID);
                                  sub_B2C400(v236, 0LL);
                                }
                                if ( v198->m_Items[v192 + 1] > qp )
                                {
                                  v241 = System_String__Concat_44307816(
                                           v241,
                                           (System_String_o *)StringLiteral_26/*"\n"*/,
                                           *(System_String_o **)(v196 + 24),
                                           0LL);
                                  v237 = 1;
                                }
                                ++v192;
                              }
                              while ( QuestConsumeItemEntity__IsAvailableAt(v189, v192, 0LL) );
                              if ( (v237 & 1) != 0 )
                              {
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v228 = LocalizationManager__Get((System_String_o *)StringLiteral_10945/*"QUEST_ITEM_COST_OVER"*/, 0LL);
                                v229 = System_String__Format(v228, (Il2CppObject *)v241, 0LL);
                                v230 = System_String__Concat_44305532(v229, (System_String_o *)StringLiteral_27/*"\n\n"*/, 0LL);
                                v231 = LocalizationManager__Get((System_String_o *)StringLiteral_2510/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
                                v170 = System_String__Concat_44305532(v230, v231, 0LL);
                                SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                v171 = (CommonUI_o *)SpotID;
                                v232 = clsQuestCheck___c_TypeInfo;
                                if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
                                  v232 = clsQuestCheck___c_TypeInfo;
                                }
                                v233 = v232->static_fields;
                                v174 = (System_String_o *)StringLiteral_1/*""*/;
                                _9__39_11 = v233->__9__39_13;
                                if ( !_9__39_11 )
                                {
                                  if ( (BYTE3(v232->vtable._0_Equals.methodPtr) & 4) != 0 && !v232->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(v232);
                                    v233 = clsQuestCheck___c_TypeInfo->static_fields;
                                  }
                                  v234 = (Il2CppObject *)v233->__9;
                                  _9__39_11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    _9__39_11,
                                    v234,
                                    Method_clsQuestCheck___c__CheckQuestPlayable_b__39_13__,
                                    0LL);
                                  v235 = clsQuestCheck___c_TypeInfo->static_fields;
                                  v235->__9__39_13 = _9__39_11;
                                  p__9__39_11 = (BattleServantConfConponent_o *)&v235->__9__39_13;
LABEL_286:
                                  sub_B2C2F8(
                                    p__9__39_11,
                                    (System_Int32_array **)_9__39_11,
                                    v177,
                                    v178,
                                    v179,
                                    v180,
                                    v181,
                                    v182);
                                }
LABEL_287:
                                if ( v171 )
                                {
                                  CommonUI__OpenNotificationDialog(
                                    v171,
                                    v174,
                                    v170,
                                    _9__39_11,
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
                                SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                if ( SpotID )
                                {
                                  SpotID = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)SpotID,
                                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarMaster___);
                                  if ( SpotID )
                                  {
                                    v199 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)SpotID,
                                             v244,
                                             (const MethodInfo_24E40D0 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
                                    if ( v199 && WarEntity__IsFolder(v199, 0LL) )
                                    {
                                      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                      }
                                      if ( !byte_4183C6F )
                                      {
                                        sub_B2C35C(&TerminalPramsManager_TypeInfo, v200);
                                        byte_4183C6F = 1;
                                      }
                                      v201 = TerminalPramsManager_TypeInfo;
                                      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                        v201 = TerminalPramsManager_TypeInfo;
                                      }
                                      v202 = 3;
                                    }
                                    else
                                    {
                                      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                      }
                                      if ( !byte_4183C6F )
                                      {
                                        sub_B2C35C(&TerminalPramsManager_TypeInfo, v200);
                                        byte_4183C6F = 1;
                                      }
                                      v201 = TerminalPramsManager_TypeInfo;
                                      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                        v201 = TerminalPramsManager_TypeInfo;
                                      }
                                      v202 = 2;
                                    }
                                    v201->static_fields->_DispState_k__BackingField = v202;
                                    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                    }
                                    if ( !byte_4183C72 )
                                    {
                                      sub_B2C35C(&TerminalPramsManager_TypeInfo, v200);
                                      byte_4183C72 = 1;
                                    }
                                    v203 = TerminalPramsManager_TypeInfo;
                                    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                      v203 = TerminalPramsManager_TypeInfo;
                                    }
                                    v203->static_fields->_IsDoneShortcut_k__BackingField = 0;
                                    if ( !byte_4183C6C )
                                    {
                                      sub_B2C35C(&TerminalPramsManager_TypeInfo, v200);
                                      v203 = TerminalPramsManager_TypeInfo;
                                      byte_4183C6C = 1;
                                    }
                                    if ( (BYTE3(v203->vtable._0_Equals.methodPtr) & 4) != 0 && !v203->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(v203);
                                      v203 = TerminalPramsManager_TypeInfo;
                                    }
                                    v203->static_fields->_PhaseCnt_k__BackingField = v245;
                                    if ( !byte_4183C9C )
                                    {
                                      sub_B2C35C(&TerminalPramsManager_TypeInfo, v200);
                                      v203 = TerminalPramsManager_TypeInfo;
                                      byte_4183C9C = 1;
                                    }
                                    if ( (BYTE3(v203->vtable._0_Equals.methodPtr) & 4) != 0 )
                                    {
                                      v204 = v246;
                                      if ( !v203->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(v203);
                                        v203 = TerminalPramsManager_TypeInfo;
                                      }
                                    }
                                    else
                                    {
                                      v204 = v246;
                                    }
                                    v203->static_fields->_SpotId_k__BackingField = v204;
                                    if ( !byte_4183C69 )
                                    {
                                      sub_B2C35C(&TerminalPramsManager_TypeInfo, v200);
                                      v203 = TerminalPramsManager_TypeInfo;
                                      byte_4183C69 = 1;
                                    }
                                    if ( (BYTE3(v203->vtable._0_Equals.methodPtr) & 4) != 0 && !v203->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(v203);
                                      v203 = TerminalPramsManager_TypeInfo;
                                    }
                                    v203->static_fields->_WarId_k__BackingField = v244;
                                    SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                    if ( SpotID )
                                    {
                                      SpotID = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)SpotID,
                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GachaMaster___);
                                      if ( SpotID )
                                      {
                                        VaildPayType = GachaMaster__getVaildPayType((GachaMaster_o *)SpotID, 0LL);
                                        if ( !byte_4183C9D )
                                        {
                                          sub_B2C35C(&TerminalPramsManager_TypeInfo, v205);
                                          byte_4183C9D = 1;
                                        }
                                        v207 = TerminalPramsManager_TypeInfo;
                                        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                        {
                                          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                          v207 = TerminalPramsManager_TypeInfo;
                                        }
                                        v207->static_fields->_SummonType_k__BackingField = VaildPayType;
                                        SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                        if ( SpotID )
                                        {
                                          SpotID = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)SpotID,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMessageMaster___);
                                          v208 = *v60;
                                          if ( *v60 )
                                          {
                                            v209 = (QuestMessageMaster_o *)SpotID;
                                            PhaseMax = MapControl_QuestInfo__GetPhaseMax(v208, 0LL);
                                            SpotID = UnityEngine_Mathf__Min_40694704(v245 + 1, PhaseMax, 0LL);
                                            if ( v209 )
                                            {
                                              v147 = 1;
                                              ValidMessage = QuestMessageMaster__GetValidMessage(
                                                               v209,
                                                               questId,
                                                               SpotID,
                                                               1,
                                                               0LL);
                                              if ( !ValidMessage )
                                                return v147;
                                              v212 = ValidMessage;
                                              v213 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                              {
                                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                              }
                                              v214 = LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10947/*"QUEST_MESSAGE_DLG_DECIDE"*/,
                                                       0LL);
                                              SpotID = (int64_t)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_10946/*"QUEST_MESSAGE_DLG_CANCEL"*/,
                                                                  0LL);
                                              v215 = (System_String_o *)SpotID;
                                              v216 = clsQuestCheck___c_TypeInfo;
                                              if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
                                              {
                                                j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
                                                v216 = clsQuestCheck___c_TypeInfo;
                                              }
                                              v217 = v216->static_fields;
                                              _9__39_2 = v217->__9__39_2;
                                              v219 = (System_String_o *)StringLiteral_1/*""*/;
                                              if ( !_9__39_2 )
                                              {
                                                if ( (BYTE3(v216->vtable._0_Equals.methodPtr) & 4) != 0
                                                  && !v216->_2.cctor_finished )
                                                {
                                                  j_il2cpp_runtime_class_init_0(v216);
                                                  v217 = clsQuestCheck___c_TypeInfo->static_fields;
                                                }
                                                v220 = (Il2CppObject *)v217->__9;
                                                _9__39_2 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
                                                CommonConfirmDialog_ClickDelegate___ctor(
                                                  _9__39_2,
                                                  v220,
                                                  Method_clsQuestCheck___c__CheckQuestPlayable_b__39_2__,
                                                  0LL);
                                                v221 = clsQuestCheck___c_TypeInfo->static_fields;
                                                v221->__9__39_2 = _9__39_2;
                                                sub_B2C2F8(
                                                  (BattleServantConfConponent_o *)&v221->__9__39_2,
                                                  (System_Int32_array **)_9__39_2,
                                                  v222,
                                                  v223,
                                                  v224,
                                                  v225,
                                                  v226,
                                                  v227);
                                              }
                                              if ( v213 )
                                              {
                                                v147 = 1;
                                                CommonUI__OpenConfirmDialog_17970624(
                                                  v213,
                                                  v219,
                                                  v212,
                                                  v214,
                                                  v215,
                                                  _9__39_2,
                                                  0,
                                                  1,
                                                  0,
                                                  0LL);
                                                return v147;
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
                          v185 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          v186 = (RecoverDlgComponent_CallbackFunc_o *)sub_B2C42C(RecoverDlgComponent_CallbackFunc_TypeInfo);
                          RecoverDlgComponent_CallbackFunc___ctor(
                            v186,
                            (Il2CppObject *)v51,
                            Method_clsQuestCheck___c__DisplayClass39_0__CheckQuestPlayable_b__12__,
                            0LL);
                          if ( v185 )
                          {
                            v154 = 1;
                            v151 = (CommonUI_o *)v185;
                            v152 = v73;
                            v153 = v186;
LABEL_172:
                            CommonUI__OpenApRecoverItemListDialog(v151, v152, v153, v154, 0LL);
                            return 0;
                          }
                        }
                        break;
                      default:
                        goto LABEL_205;
                    }
                    goto LABEL_289;
                  }
                  Count = UserCommandCodeMaster__getCount(v105, 0LL);
                  SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !v96 )
                    goto LABEL_289;
                  v136 = (CommonUI_o *)SpotID;
                  if ( !byte_4183CB7 )
                  {
                    sub_B2C35C(&BalanceConfig_TypeInfo, v53);
                    byte_4183CB7 = 1;
                  }
                  v137 = BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v137 = BalanceConfig_TypeInfo;
                  }
                  SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
                  svtEquipKeep = v137->static_fields->CommandCodeFrameMax;
                  if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
                    SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
                  }
                  v138 = *(struct clsQuestCheck___c_StaticFields **)(SpotID + 184);
                  _9__39_1 = v138->__9__39_7;
                  if ( !_9__39_1 )
                  {
                    if ( (*(_BYTE *)(SpotID + 307) & 4) != 0 && !*(_DWORD *)(SpotID + 224) )
                    {
                      j_il2cpp_runtime_class_init_0(SpotID);
                      v138 = clsQuestCheck___c_TypeInfo->static_fields;
                    }
                    v139 = (Il2CppObject *)v138->__9;
                    _9__39_1 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B2C42C(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
                    ServantFrameShortDlgComponent_CallbackFunc___ctor(
                      _9__39_1,
                      v139,
                      Method_clsQuestCheck___c__CheckQuestPlayable_b__39_7__,
                      0LL);
                    v140 = clsQuestCheck___c_TypeInfo->static_fields;
                    v140->__9__39_7 = _9__39_1;
                    sub_B2C2F8(
                      (BattleServantConfConponent_o *)&v140->__9__39_7,
                      (System_Int32_array **)_9__39_1,
                      v141,
                      v142,
                      v143,
                      v144,
                      v145,
                      v146);
                  }
                  if ( !v136 )
                    goto LABEL_289;
                  v122 = 2;
                  v119 = v136;
                  v120 = Count;
                }
                v121 = svtEquipKeep;
                goto LABEL_119;
              }
              SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( v96 )
              {
                v106 = (CommonUI_o *)SpotID;
                v107 = servantEquipSum[1];
                svtKeep = v96->fields.svtKeep;
                SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
                if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
                  SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
                }
                v109 = *(struct clsQuestCheck___c_StaticFields **)(SpotID + 184);
                _9__39_1 = v109->__9__39_0;
                if ( !_9__39_1 )
                {
                  if ( (*(_BYTE *)(SpotID + 307) & 4) != 0 && !*(_DWORD *)(SpotID + 224) )
                  {
                    j_il2cpp_runtime_class_init_0(SpotID);
                    v109 = clsQuestCheck___c_TypeInfo->static_fields;
                  }
                  v111 = (Il2CppObject *)v109->__9;
                  _9__39_1 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B2C42C(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
                  ServantFrameShortDlgComponent_CallbackFunc___ctor(
                    _9__39_1,
                    v111,
                    Method_clsQuestCheck___c__CheckQuestPlayable_b__39_0__,
                    0LL);
                  v112 = clsQuestCheck___c_TypeInfo->static_fields;
                  v112->__9__39_0 = _9__39_1;
                  sub_B2C2F8(
                    (BattleServantConfConponent_o *)&v112->__9__39_0,
                    (System_Int32_array **)_9__39_1,
                    v113,
                    v114,
                    v115,
                    v116,
                    v117,
                    v118);
                }
                if ( v106 )
                {
                  v119 = v106;
                  v120 = v107;
                  v121 = svtKeep;
                  v122 = 0;
LABEL_119:
                  CommonUI__OpenSvtFrameShortDlg(v119, v120, v121, v122, 1, _9__39_1, 0, 0LL);
                  goto LABEL_120;
                }
              }
            }
          }
        }
      }
    }
LABEL_289:
    sub_B2C434(SpotID, v53);
  }
  v80 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v81 = LocalizationManager__Get((System_String_o *)StringLiteral_10972/*"QUEST_TIME_OVER"*/, 0LL);
  SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v82 = (CommonUI_o *)SpotID;
  v83 = clsQuestCheck___c_TypeInfo;
  if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
    v83 = clsQuestCheck___c_TypeInfo;
  }
  v84 = v83->static_fields;
  _9__39_4 = v84->__9__39_3;
  if ( _9__39_4 )
    goto LABEL_58;
  if ( (BYTE3(v83->vtable._0_Equals.methodPtr) & 4) != 0 && !v83->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v83);
    v84 = clsQuestCheck___c_TypeInfo->static_fields;
  }
  v86 = (Il2CppObject *)v84->__9;
  _9__39_4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(_9__39_4, v86, Method_clsQuestCheck___c__CheckQuestPlayable_b__39_3__, 0LL);
  v93 = (System_Int32_array **)_9__39_4;
  v94 = clsQuestCheck___c_TypeInfo->static_fields;
  v94->__9__39_3 = _9__39_4;
  p__9__39_4 = (BattleServantConfConponent_o *)&v94->__9__39_3;
LABEL_57:
  sub_B2C2F8(p__9__39_4, v93, v87, v88, v89, v90, v91, v92);
LABEL_58:
  if ( !v82 )
    goto LABEL_289;
  CommonUI__OpenNotificationDialog(v82, v80, v81, _9__39_4, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
LABEL_120:
  SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_289;
  ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)SpotID, 0LL);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__CheckQuestPlayableNow(clsQuestCheck_o *this, int32_t questId, const MethodInfo *method)
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
  UserQuestMaster_o *Master_WarQuestSelectionMaster; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *UserId; // x0
  __int64 v16; // x1
  struct System_Collections_Generic_List_QuestReleaseEntity__o *qrs; // x0
  bool IsOpenByTime; // w8
  const MethodInfo *v19; // x4
  int v20; // w19
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-48h] BYREF
  WarEntity_o *v23; // [xsp+20h] [xbp-30h] BYREF
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4187451 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_QuestMaster___, *(_QWORD *)&questId);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestReleaseMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_UserQuestMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v12);
    sub_B2C35C(&NetworkManager_TypeInfo, v13);
    byte_4187451 = 1;
  }
  v23 = 0LL;
  entity = 0LL;
  memset(&v22, 0, sizeof(v22));
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, method) )
    goto LABEL_31;
  v23 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = (DataMasterBase_WarMaster__WarEntity__int__o *)NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_35;
  if ( UserQuestMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, (int64_t)UserId, questId, 0LL) )
  {
    UserId = (DataMasterBase_WarMaster__WarEntity__int__o *)entity;
    if ( !entity )
      goto LABEL_35;
    if ( UserQuestEntity__IsNotExpired(entity, 0LL) )
    {
      LOBYTE(qrs) = 1;
      return (char)qrs;
    }
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserId = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !UserId )
LABEL_35:
    sub_B2C434(UserId, v16);
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          UserId,
          &v23,
          questId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
LABEL_31:
    LOBYTE(qrs) = 0;
    return (char)qrs;
  }
  UserId = (DataMasterBase_WarMaster__WarEntity__int__o *)v23;
  if ( !v23 )
    goto LABEL_35;
  IsOpenByTime = QuestEntity__IsOpenByTime((QuestEntity_o *)v23, 0, 0LL);
  LOBYTE(qrs) = 0;
  if ( !IsOpenByTime )
    return (char)qrs;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserId = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !UserId )
    goto LABEL_35;
  QuestReleaseMaster__getListByQuestID_31194596((QuestReleaseMaster_o *)UserId, questId, &this->fields.qrs, 0LL);
  qrs = this->fields.qrs;
  if ( qrs )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)qrs,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
    {
      if ( !clsQuestCheck__IsQuestRelease_24556048(this, (QuestReleaseEntity_o *)v22.fields.current, -1, 0LL, v19) )
      {
        v20 = 4;
        goto LABEL_34;
      }
    }
    v20 = 2;
LABEL_34:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    LOBYTE(qrs) = v20 != 4;
  }
  return (char)qrs;
}


void __fastcall clsQuestCheck__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  clsQuestCheck_c *v3; // x0
  System_String_o *KEY_QUEST_START_EFFECT; // x19

  if ( (byte_418744E & 1) == 0 )
  {
    sub_B2C35C(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_B2C35C(&clsQuestCheck_TypeInfo, v2);
    byte_418744E = 1;
  }
  v3 = clsQuestCheck_TypeInfo;
  if ( (BYTE3(clsQuestCheck_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !clsQuestCheck_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
    v3 = clsQuestCheck_TypeInfo;
  }
  KEY_QUEST_START_EFFECT = v3->static_fields->KEY_QUEST_START_EFFECT;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
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
  AvalonSceneManager_o *Instance; // x0
  __int64 v7; // x1
  bool v8; // w8
  int32_t result; // w0
  __int64 v10; // x1
  TerminalPramsManager_c *v11; // x0

  if ( (byte_418745F & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, is_quest_after_action);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
    byte_418745F = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v8 = AvalonSceneManager__checkNowScene(Instance, 34, 0LL);
  result = -1;
  if ( !v8 || !is_quest_after_action )
    return result;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
LABEL_19:
    sub_B2C434(Instance, v7);
  if ( !QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0LL) )
    return -1;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v10);
    byte_4183C7A = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  QuestGroupMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  struct System_String_o *MasterName_k__BackingField; // x8
  QuestGroupMaster_o *v16; // x21
  unsigned __int64 v17; // x23
  int32_t v18; // w22
  __int64 v20; // x0

  if ( (byte_4187468 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_QuestGroupMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&int___TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4187468 = 1;
  }
  if ( eventId <= 0 )
    return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  v11 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_20;
  Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)QuestGroupMaster__GetQuestIdListByEventId(
                                                           Master_WarQuestSelectionMaster,
                                                           eventId,
                                                           0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_20;
  MasterName_k__BackingField = Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
  v16 = Master_WarQuestSelectionMaster;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v17 = 0LL;
    do
    {
      if ( v17 >= (unsigned int)MasterName_k__BackingField )
      {
        v20 = sub_B2C460(Master_WarQuestSelectionMaster);
        sub_B2C400(v20, 0LL);
      }
      v18 = *((_DWORD *)&v16->fields.list + v17);
      Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)clsQuestCheck__CheckQuestPlayableNow(this, v18, v14);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        if ( !v11 )
          goto LABEL_20;
        System_Collections_Generic_List_int___Add(
          v11,
          v18,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(MasterName_k__BackingField) = v16->fields._MasterName_k__BackingField;
      ++v17;
    }
    while ( (__int64)v17 < (int)MasterName_k__BackingField );
  }
  if ( !v11 )
LABEL_20:
    sub_B2C434(Master_WarQuestSelectionMaster, v13);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v12; // x1
  __int64 v13; // x1
  TerminalPramsManager_c *v14; // x0
  __int64 v15; // x1
  TerminalPramsManager_c *v16; // x0
  System_String_o *ClearEventQuestIds_k__BackingField; // x21
  System_Char_array *v18; // x0
  System_Char_array *v19; // x1
  System_String_array *v20; // x21
  System_Converter_BattleActionData_HealData__int__o *v21; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  __int64 v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array *v38; // x19
  System_Int32_array **v39; // x20
  TerminalPramsManager_c *v40; // x0
  BattleServantConfConponent_o *v41; // x0
  System_Int32_array **v42; // x19
  TerminalPramsManager_c *v43; // x0
  BattleServantConfConponent_o *p_ClearEventQuestIds_k__BackingField; // x0
  __int64 v46; // x0

  if ( (byte_4187467 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_ConvertAll_string__int___, *(_QWORD *)&eventId);
    sub_B2C35C(&char___TypeInfo, v5);
    sub_B2C35C(&Method_System_Converter_string__int___ctor__, v6);
    sub_B2C35C(&System_Converter_string__int__TypeInfo, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_Except_int___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_B2C35C(&int___TypeInfo, v10);
    sub_B2C35C(&Method_System_Int32_Parse__, v11);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    byte_4187467 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_418472A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, *(_QWORD *)&eventId);
    byte_418472A = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  if ( System_String__IsNullOrEmpty(v14->static_fields->_ClearEventQuestIds_k__BackingField, 0LL) )
    return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_418472A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v15);
    byte_418472A = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  ClearEventQuestIds_k__BackingField = v16->static_fields->_ClearEventQuestIds_k__BackingField;
  v18 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !v18 )
    goto LABEL_45;
  v19 = v18;
  if ( !v18->max_length )
  {
    v46 = sub_B2C460(v18);
    sub_B2C400(v46, 0LL);
  }
  v18->m_Items[2] = 44;
  if ( !ClearEventQuestIds_k__BackingField
    || (v20 = System_String__Split(ClearEventQuestIds_k__BackingField, v18, 0LL),
        v21 = (System_Converter_BattleActionData_HealData__int__o *)sub_B2C42C(System_Converter_string__int__TypeInfo),
        System_Converter_BattleActionData_HealData__int____ctor(
          v21,
          0LL,
          Method_System_Int32_Parse__,
          (const MethodInfo_24E026C *)Method_System_Converter_string__int___ctor__),
        (v18 = (System_Char_array *)System_Array__ConvertAll_string__int_(
                                      v20,
                                      (System_Converter_TInput__TOutput__o *)v21,
                                      (const MethodInfo_1FFB1FC *)Method_System_Array_ConvertAll_string__int___)) == 0LL) )
  {
LABEL_45:
    sub_B2C434(v18, v19);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)v18;
  if ( !*(_QWORD *)&v18->max_length )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    v42 = (System_Int32_array **)StringLiteral_1/*""*/;
    if ( !byte_418471F )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v19);
      byte_418471F = 1;
    }
    v43 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v43 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (BattleServantConfConponent_o *)&v43->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = (BattleServantConfConponent_c *)v42;
    sub_B2C2F8(p_ClearEventQuestIds_k__BackingField, v42, v22, v23, v24, v25, v26, v27);
    TerminalPramsManager__ClearEventQuestIds_SaveData(0LL);
    return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)clsQuestCheck__GetEventQuestIdListPlayable(
                                                               this,
                                                               eventId,
                                                               (const MethodInfo *)v22);
  v30 = System_Linq_Enumerable__Except_int_(
          v29,
          v28,
          (const MethodInfo_1A8EBB4 *)Method_System_Linq_Enumerable_Except_int___);
  v38 = System_Linq_Enumerable__ToArray_int_(
          v30,
          (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  v39 = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( !byte_418471F )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v31);
    byte_418471F = 1;
  }
  v40 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v40 = TerminalPramsManager_TypeInfo;
  }
  v41 = (BattleServantConfConponent_o *)&v40->static_fields->_ClearEventQuestIds_k__BackingField;
  v41->klass = (BattleServantConfConponent_c *)v39;
  sub_B2C2F8(v41, v39, v32, v33, v34, v35, v36, v37);
  TerminalPramsManager__ClearEventQuestIds_SaveData(0LL);
  return v38;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x21
  _BOOL8 v17; // x0
  __int64 v18; // x1
  WarEntity_o *Entity; // x0
  System_Collections_Generic_List_Enumerator_int__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v22; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4187465 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, qids);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_QuestEntity__TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4187465 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___),
        !qids) )
  {
    sub_B2C434(Instance, v15);
  }
  v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    qids,
    (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v22,
            (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v17 )
      break;
    if ( !v16 )
      sub_B2C434(v17, v18);
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v16,
               v22.fields.current,
               (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    if ( !v13 )
      sub_B2C434(Entity, Entity);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v13,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v22,
    (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x25
  unsigned int v29; // w28
  QuestReleaseEntity_o *v30; // x8
  int32_t questId; // w26
  const MethodInfo *v32; // x4
  System_Collections_Generic_List_int__o *v33; // x23
  const MethodInfo *v34; // x4
  unsigned int datalist; // w8
  int v36; // w25
  unsigned __int64 v37; // x20
  int32_t v38; // w26
  int v39; // w8
  __int64 v41; // x0
  _BYTE v42[32]; // [xsp+8h] [xbp-98h] BYREF
  int v43; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_int__o v44; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4187464 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__RemoveAt__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311384, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4187464 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v43 = 0;
  v23 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_36;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 9, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_36;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v28 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v29 = 0;
    while ( 1 )
    {
      if ( v29 >= max_length )
      {
        v41 = sub_B2C460(Instance);
        sub_B2C400(v41, 0LL);
      }
      v30 = ListByType->m_Items[v29];
      if ( !v30 )
        break;
      if ( v30->fields.targetId == svt_id )
      {
        if ( !v28 )
          break;
        questId = v30->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v28,
                                      questId,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
            System_Collections_Generic_List_int___Add(
              v23,
              questId,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v29 >= max_length )
        goto LABEL_19;
    }
LABEL_36:
    sub_B2C434(Instance, v25);
  }
LABEL_19:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v33 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_49702036(
      v33,
      (System_Collections_Generic_IEnumerable_T__o *)v23,
      (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
    Instance = (DataManager_o *)clsQuestCheck__GetReleaseQuestIdByServantFriendShip(this, svt_id, -1, type_flag, v34);
    if ( !Instance )
      goto LABEL_36;
    datalist = (unsigned int)Instance->fields.datalist;
    v23 = (System_Collections_Generic_List_int__o *)Instance;
    if ( (int)(datalist - 1) >= 0 )
    {
      v36 = 0;
      v37 = (int)(datalist - 1);
      while ( 1 )
      {
        if ( v37 >= datalist )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( !v33 )
          goto LABEL_36;
        v38 = v23->fields._items->m_Items[v37 + 1];
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v42,
          v33,
          (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v44 = *(System_Collections_Generic_List_Enumerator_int__o *)v42;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v44,
                  (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v38 == v44.fields.current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v23,
              v37,
              (const MethodInfo_2F68CB0 *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        *(_DWORD *)&v42[4 * v36 + 24] = 226;
        v36 = ++v43;
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v44,
          (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( v36 )
        {
          v39 = v36 - 1;
          if ( *(_DWORD *)&v42[4 * v36 + 20] == 226 )
          {
            --v36;
            v43 = v39;
          }
        }
        if ( (--v37 & 0x80000000) != 0 )
          return v23;
        datalist = v23->fields._size;
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

  return clsQuestCheck__GetReleaseQuestIdByServantLimit_24559760(this, svt_id, oldLimitCount, 238, v4);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit_24559760(
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
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x25
  unsigned int v29; // w28
  QuestReleaseEntity_o *v30; // x8
  int32_t questId; // w26
  const MethodInfo *v32; // x4
  System_Collections_Generic_List_int__o *v33; // x23
  const MethodInfo *v34; // x4
  unsigned int datalist; // w8
  int v36; // w25
  unsigned __int64 v37; // x20
  int32_t v38; // w26
  int v39; // w8
  __int64 v41; // x0
  _BYTE v42[32]; // [xsp+8h] [xbp-98h] BYREF
  int v43; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_int__o v44; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4187461 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__RemoveAt__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311384, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4187461 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v43 = 0;
  v23 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_36;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_36;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v28 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v29 = 0;
    while ( 1 )
    {
      if ( v29 >= max_length )
      {
        v41 = sub_B2C460(Instance);
        sub_B2C400(v41, 0LL);
      }
      v30 = ListByType->m_Items[v29];
      if ( !v30 )
        break;
      if ( v30->fields.targetId == svt_id )
      {
        if ( !v28 )
          break;
        questId = v30->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v28,
                                      questId,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
            System_Collections_Generic_List_int___Add(
              v23,
              questId,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v29 >= max_length )
        goto LABEL_19;
    }
LABEL_36:
    sub_B2C434(Instance, v25);
  }
LABEL_19:
  if ( (oldLimitCount & 0x80000000) == 0 )
  {
    v33 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_49702036(
      v33,
      (System_Collections_Generic_IEnumerable_T__o *)v23,
      (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
    Instance = (DataManager_o *)clsQuestCheck__GetReleaseQuestIdByServantLimit_24559760(
                                  this,
                                  svt_id,
                                  -1,
                                  type_flag,
                                  v34);
    if ( !Instance )
      goto LABEL_36;
    datalist = (unsigned int)Instance->fields.datalist;
    v23 = (System_Collections_Generic_List_int__o *)Instance;
    if ( (int)(datalist - 1) >= 0 )
    {
      v36 = 0;
      v37 = (int)(datalist - 1);
      while ( 1 )
      {
        if ( v37 >= datalist )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( !v33 )
          goto LABEL_36;
        v38 = v23->fields._items->m_Items[v37 + 1];
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v42,
          v33,
          (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v44 = *(System_Collections_Generic_List_Enumerator_int__o *)v42;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v44,
                  (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v38 == v44.fields.current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v23,
              v37,
              (const MethodInfo_2F68CB0 *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        *(_DWORD *)&v42[4 * v36 + 24] = 225;
        v36 = ++v43;
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v44,
          (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( v36 )
        {
          v39 = v36 - 1;
          if ( *(_DWORD *)&v42[4 * v36 + 20] == 225 )
          {
            --v36;
            v43 = v39;
          }
        }
        if ( (--v37 & 0x80000000) != 0 )
          return v23;
        datalist = v23->fields._size;
      }
    }
  }
  return v23;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit_24560744(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLimitCount,
        int32_t newLimitCount,
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
  System_Collections_Generic_List_int__o *v22; // x19
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  QuestReleaseEntity_array *ListByType; // x25
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v27; // x26
  unsigned int v28; // w21
  QuestReleaseEntity_o *v29; // x8
  int32_t questId; // w27
  const MethodInfo *v31; // x4
  System_Collections_Generic_List_int__o *v32; // x24
  int v33; // w8
  __int64 v34; // x28
  QuestReleaseEntity_o *v35; // x8
  int32_t v36; // w27
  const MethodInfo *v37; // x4
  unsigned int size; // w8
  int v39; // w26
  unsigned __int64 v40; // x20
  int32_t v41; // w25
  int v42; // w8
  __int64 v44; // x0
  _BYTE v47[32]; // [xsp+18h] [xbp-98h] BYREF
  int v48; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_int__o v49; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4187462 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__RemoveAt__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v19);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4187462 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  v48 = 0;
  v22 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_47;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_47;
  max_length = ListByType->max_length;
  v27 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  if ( max_length >= 1 )
  {
    v28 = 0;
    while ( v28 < max_length )
    {
      v29 = ListByType->m_Items[v28];
      if ( !v29 )
        goto LABEL_47;
      if ( v29->fields.targetId == svt_id )
      {
        if ( !v27 )
          goto LABEL_47;
        questId = v29->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v27,
                                      questId,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_47;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, questId, oldLimitCount, 7, v31);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v22 )
              goto LABEL_47;
            System_Collections_Generic_List_int___Add(
              v22,
              questId,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v28 >= max_length )
        goto LABEL_19;
    }
LABEL_48:
    v44 = sub_B2C460(Instance);
    sub_B2C400(v44, 0LL);
  }
LABEL_19:
  v32 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v32,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v33 = ListByType->max_length;
  if ( v33 >= 1 )
  {
    v34 = 0LL;
    while ( (unsigned int)v34 < v33 )
    {
      v35 = ListByType->m_Items[v34];
      if ( !v35 )
        goto LABEL_47;
      if ( v35->fields.targetId == svt_id )
      {
        if ( !v27 )
          goto LABEL_47;
        v36 = v35->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v27,
                                      v36,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_47;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, v36, newLimitCount, 7, v37);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v32 )
              goto LABEL_47;
            System_Collections_Generic_List_int___Add(
              v32,
              v36,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      v33 = ListByType->max_length;
      if ( (int)++v34 >= v33 )
        goto LABEL_31;
    }
    goto LABEL_48;
  }
LABEL_31:
  if ( !v32 )
LABEL_47:
    sub_B2C434(Instance, v24);
  size = v32->fields._size;
  if ( (int)(size - 1) >= 0 )
  {
    v39 = 0;
    v40 = (int)(size - 1);
    while ( 1 )
    {
      if ( v40 >= size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( !v22 )
        goto LABEL_47;
      v41 = v32->fields._items->m_Items[v40 + 1];
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v47,
        v22,
        (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v49 = *(System_Collections_Generic_List_Enumerator_int__o *)v47;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v49,
                (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        if ( v41 == v49.fields.current )
        {
          System_Collections_Generic_List_int___RemoveAt(
            v32,
            v40,
            (const MethodInfo_2F68CB0 *)Method_System_Collections_Generic_List_int__RemoveAt__);
          break;
        }
      }
      *(_DWORD *)&v47[4 * v39 + 24] = 309;
      v39 = ++v48;
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v49,
        (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      if ( v39 )
      {
        v42 = v39 - 1;
        if ( *(_DWORD *)&v47[4 * v39 + 20] == 309 )
        {
          --v39;
          v48 = v42;
        }
      }
      if ( (--v40 & 0x80000000) != 0 )
        return v32;
      size = v32->fields._size;
    }
  }
  return v32;
}


System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLv(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLv,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__GetReleaseQuestIdByServantLv_24559256(this, svt_id, oldLv, 238, v4);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLv_24559256(
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
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  QuestReleaseEntity_array *ListByType; // x24
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x25
  unsigned int v21; // w27
  QuestReleaseEntity_o *v22; // x8
  int32_t questId; // w26
  const MethodInfo *v24; // x4
  __int64 v26; // x0

  if ( (byte_4187460 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4187460 = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_20;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 6, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_20;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length )
      {
        v26 = sub_B2C460(Instance);
        sub_B2C400(v26, 0LL);
      }
      v22 = ListByType->m_Items[v21];
      if ( !v22 )
        break;
      if ( v22->fields.targetId == svt_id )
      {
        if ( !v20 )
          break;
        questId = v22->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v20,
                                      questId,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, questId, oldLv, 6, v24);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v15 )
              break;
            System_Collections_Generic_List_int___Add(
              v15,
              questId,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v21 >= max_length )
        return v15;
    }
LABEL_20:
    sub_B2C434(Instance, v17);
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
  __int64 v18; // x1
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  DataManager_o *v21; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  QuestReleaseMaster_o *v23; // x20
  int datalist; // w8
  DataManager_o *v25; // x26
  unsigned int v26; // w19
  __int64 v27; // x24
  __int64 v28; // x28
  int32_t v29; // w27
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  EventMissionProgressRequest_Argument_ProgressData_o **v36; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v37; // x24
  const MethodInfo *v38; // x4
  ServantGroupEntity_array *ListByServantID; // x19
  __int64 v40; // x8
  DataManager_o *v41; // x24
  unsigned __int64 v42; // x20
  int v43; // w8
  unsigned int v44; // w22
  __int64 v45; // x19
  __int64 v46; // x25
  __int64 v47; // x27
  int32_t v48; // w25
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  EventMissionProgressRequest_Argument_ProgressData_o **v55; // x26
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v56; // x28
  const MethodInfo *v57; // x4
  __int64 v59; // x0
  DataManager_o *v60; // [xsp+10h] [xbp-70h]
  DataManager_o *v61; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_T__o *list; // [xsp+28h] [xbp-58h]

  if ( (byte_4187463 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_QuestEntity___, *(_QWORD *)&servantId);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantGroupMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v8);
    sub_B2C35C(&Method_System_Func_QuestEntity__bool___ctor__, v9);
    sub_B2C35C(&System_Func_QuestEntity__bool__TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_QuestEntity__TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&Method_clsQuestCheck___c__DisplayClass29_0__GetReleasedQuestEntityListByServantGet_b__0__, v15);
    sub_B2C35C(&clsQuestCheck___c__DisplayClass29_0_TypeInfo, v16);
    sub_B2C35C(&Method_clsQuestCheck___c__DisplayClass29_1__GetReleasedQuestEntityListByServantGet_b__1__, v17);
    sub_B2C35C(&clsQuestCheck___c__DisplayClass29_1_TypeInfo, v18);
    byte_4187463 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  v21 = Instance;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  v23 = (QuestReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  v21,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  list = (System_Collections_Generic_List_T__o *)sub_B2C42C(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  if ( !v23 )
    goto LABEL_43;
  v60 = v21;
  Instance = (DataManager_o *)QuestReleaseMaster__getListByType(v23, 8, 0LL);
  if ( !Instance )
    goto LABEL_43;
  datalist = (int)Instance->fields.datalist;
  v25 = Instance;
  if ( datalist >= 1 )
  {
    v26 = 0;
    while ( v26 < datalist )
    {
      v27 = *((_QWORD *)&v25->fields.lookup + (int)v26);
      v28 = sub_B2C42C(clsQuestCheck___c__DisplayClass29_0_TypeInfo);
      clsQuestCheck___c__DisplayClass29_0___ctor((clsQuestCheck___c__DisplayClass29_0_o *)v28, 0LL);
      if ( !v27 )
        goto LABEL_43;
      if ( *(_DWORD *)(v27 + 24) == servantId )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_43;
        v29 = *(_DWORD *)(v27 + 16);
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      v29,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v28 )
          goto LABEL_43;
        *(_QWORD *)(v28 + 16) = Instance;
        v36 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v28 + 16);
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v28 + 16),
          (System_Int32_array **)Instance,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
        v37 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_QuestEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v37,
          (Il2CppObject *)v28,
          Method_clsQuestCheck___c__DisplayClass29_0__GetReleasedQuestEntityListByServantGet_b__0__,
          (const MethodInfo_2711C04 *)Method_System_Func_QuestEntity__bool___ctor__);
        Instance = (DataManager_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                      list,
                                      (System_Func_T__bool__o *)v37,
                                      (const MethodInfo_17266AC *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)*v36;
          if ( !*v36 )
            goto LABEL_43;
          Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
          if ( ((unsigned int)Instance & typeFlag) != 0 )
          {
            Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, v29, -1, 0, v38);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (DataManager_o *)list;
              if ( !list )
                goto LABEL_43;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
                *v36,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestEntity__Add__);
            }
          }
        }
      }
      datalist = (int)v25->fields.datalist;
      if ( (int)++v26 >= datalist )
        goto LABEL_20;
    }
LABEL_44:
    v59 = sub_B2C460(Instance);
    sub_B2C400(v59, 0LL);
  }
LABEL_20:
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v60,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantGroupMaster___);
  if ( !Instance
    || (ListByServantID = ServantGroupMaster__getListByServantID((ServantGroupMaster_o *)Instance, servantId, 0LL),
        Instance = (DataManager_o *)QuestReleaseMaster__getListByType(v23, 10, 0LL),
        !ListByServantID) )
  {
LABEL_43:
    sub_B2C434(Instance, v20);
  }
  v40 = *(_QWORD *)&ListByServantID->max_length;
  if ( (int)v40 >= 1 )
  {
    v41 = Instance;
    v42 = 0LL;
    v61 = (DataManager_o *)ListByServantID;
    while ( 1 )
    {
      if ( v42 >= (unsigned int)v40 )
        goto LABEL_44;
      if ( !v41 )
        goto LABEL_43;
      v43 = (int)v41->fields.datalist;
      if ( v43 >= 1 )
        break;
LABEL_41:
      ++v42;
      LODWORD(v40) = v61->fields.datalist;
      if ( (__int64)v42 >= (int)v40 )
        return (System_Collections_Generic_List_QuestEntity__o *)list;
    }
    v44 = 0;
    v45 = *((_QWORD *)&v61->fields.lookup + v42);
    while ( v44 < v43 )
    {
      v46 = *((_QWORD *)&v41->fields.lookup + (int)v44);
      v47 = sub_B2C42C(clsQuestCheck___c__DisplayClass29_1_TypeInfo);
      clsQuestCheck___c__DisplayClass29_1___ctor((clsQuestCheck___c__DisplayClass29_1_o *)v47, 0LL);
      if ( !v45 || !v46 )
        goto LABEL_43;
      if ( *(_DWORD *)(v45 + 16) == *(_DWORD *)(v46 + 24) )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_43;
        v48 = *(_DWORD *)(v46 + 16);
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      v48,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v47 )
          goto LABEL_43;
        *(_QWORD *)(v47 + 16) = Instance;
        v55 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v47 + 16);
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v47 + 16),
          (System_Int32_array **)Instance,
          v49,
          v50,
          v51,
          v52,
          v53,
          v54);
        v56 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_QuestEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v56,
          (Il2CppObject *)v47,
          Method_clsQuestCheck___c__DisplayClass29_1__GetReleasedQuestEntityListByServantGet_b__1__,
          (const MethodInfo_2711C04 *)Method_System_Func_QuestEntity__bool___ctor__);
        Instance = (DataManager_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                      list,
                                      (System_Func_T__bool__o *)v56,
                                      (const MethodInfo_17266AC *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)*v55;
          if ( !*v55 )
            goto LABEL_43;
          Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
          if ( ((unsigned int)Instance & typeFlag) != 0 )
          {
            Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, v48, -1, 0, v57);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (DataManager_o *)list;
              if ( !list )
                goto LABEL_43;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
                *v55,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestEntity__Add__);
            }
          }
        }
      }
      v43 = (int)v41->fields.datalist;
      if ( (int)++v44 >= v43 )
        goto LABEL_41;
    }
    goto LABEL_44;
  }
  return (System_Collections_Generic_List_QuestEntity__o *)list;
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
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  EventRaidMaster_o *v12; // x22
  int32_t RaidDeadQuestId; // w23
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x4
  const MethodInfo *v16; // x4
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v18; // x20
  unsigned __int64 v19; // x21
  __int64 v21; // x0

  if ( (byte_4187453 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v8);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v9);
    byte_4187453 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_19;
  v12 = (EventRaidMaster_o *)Instance;
  RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId((EventRaidMaster_o *)Instance, eventId, day, 0LL);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, RaidDeadQuestId, 0, v14)
    || clsQuestCheck__IsQuestRelease(this, RaidDeadQuestId, -1, 0, v15) )
  {
    return 1;
  }
  Instance = (DataManager_o *)EventRaidMaster__GetRaidAliveQuestIds(v12, eventId, day, 0LL);
  if ( !Instance )
LABEL_19:
    sub_B2C434(Instance, v11);
  datalist = Instance->fields.datalist;
  v18 = Instance;
  if ( (int)datalist < 1 )
    return 0;
  v19 = 0LL;
  while ( 1 )
  {
    if ( v19 >= (unsigned int)datalist )
    {
      v21 = sub_B2C460(Instance);
      sub_B2C400(v21, 0LL);
    }
    Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, *((_DWORD *)&v18->fields.lookup + v19), -1, 0, v16);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      break;
    LODWORD(datalist) = v18->fields.datalist;
    if ( (__int64)++v19 >= (int)datalist )
      return 0;
  }
  return 1;
}


bool __fastcall clsQuestCheck__IsLastWarClear(clsQuestCheck_o *this, const MethodInfo *method)
{
  int32_t Value; // w1
  const MethodInfo *v4; // x2

  if ( (byte_4187455 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8369/*"LAST_WAR_ID"*/, method);
    byte_4187455 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8369/*"LAST_WAR_ID"*/, 0LL);
  return clsQuestCheck__IsWarClear(this, Value, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsMainInterlude(clsQuestCheck_o *this, int32_t war_id, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  WarEntity_o *Entity; // x0

  if ( (byte_4187456 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&war_id);
    sub_B2C35C(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4187456 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v7);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             war_id,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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

  if ( (byte_418745C & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&qid);
    byte_418745C = 1;
  }
  v6 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25746984(qid, v6, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsQuestClearRaw(
        clsQuestCheck_o *this,
        int32_t qid,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  int32_t v6; // w20

  if ( (byte_418745D & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&qid);
    byte_418745D = 1;
  }
  v6 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25746984(qid, v6, 0, 0LL);
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
  int32_t v9; // w21
  int64_t UserId; // x22

  if ( (byte_418745E & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&qid);
    this = (clsQuestCheck_o *)sub_B2C35C(&NetworkManager_TypeInfo, v8);
    byte_418745E = 1;
  }
  v9 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, *(const MethodInfo **)&phase);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestPhaseClear(UserId, qid, phase, v9, 0, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v18; // x20
  bool v19; // w19
  __int64 v20; // x1
  __int64 v21; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  QuestReleaseEntity_o *v31; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x4
  __int64 v34; // x10
  int32_t v35; // w2
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0

  if ( (byte_4187452 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&quest_id);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v9);
    sub_B2C35C(&Method_DataManager_getEntityList_QuestReleaseMaster___, v10);
    sub_B2C35C(&System_IDisposable_TypeInfo, v11);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_B2C35C(&QuestReleaseEntity_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4187452 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__getEntityList_QuestReleaseMaster_(
                                      Instance,
                                      (const MethodInfo_1733C08 *)Method_DataManager_getEntityList_QuestReleaseMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v17);
  }
  v18 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance;
  v19 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
          (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) > 0;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 v18,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v20);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v24;
        p_offset += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v21);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v27 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v29 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_17:
      v30 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v21);
    }
    v31 = (QuestReleaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                                    Enumerator,
                                    *(_QWORD *)(v30 + 8));
    if ( !v31 )
      goto LABEL_38;
    v34 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v31->klass->_2.bitflags2 + 1) < (unsigned int)v34
      || (QuestReleaseEntity_c *)v31->klass->_2.typeHierarchy[v34 - 1] != QuestReleaseEntity_TypeInfo )
    {
      v31 = (QuestReleaseEntity_o *)sub_B2C728(v31);
LABEL_38:
      sub_B2C434(v31, v32);
    }
    if ( v31->fields.questId == quest_id )
    {
      if ( (old_val & 0x80000000) != 0 )
        v35 = -1;
      else
        v35 = v31->fields.type == old_val_qr_type ? old_val : -1;
      if ( !clsQuestCheck__IsQuestRelease_24556048(this, v31, v35, 0LL, v33) )
      {
        v19 = 0;
        break;
      }
    }
  }
  v36 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v37 = 0LL;
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      ++v37;
      v38 += 4;
      if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_34;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_34:
    v39 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v21);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  return v19;
}


bool __fastcall clsQuestCheck__IsQuestRelease_24554148(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        MapControl_QuestInfo_o *qinf,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_24556048(this, qrd, -1, qinf, v4);
}


bool __fastcall clsQuestCheck__IsQuestRelease_24555048(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        int32_t old_val,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_24556048(this, qrd, old_val, 0LL, v4);
}


bool __fastcall clsQuestCheck__IsQuestRelease_24556048(
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
  int32_t type; // w23
  int32_t v18; // w20
  int32_t v19; // w21
  int32_t targetId; // w20
  int64_t value; // x19
  int32_t v23; // w0
  int32_t v24; // w20
  int32_t v25; // w21
  int32_t v26; // w19
  int32_t v27; // w0
  int32_t v28; // w1
  int32_t v29; // w2
  bool v30; // w3
  QuestEntity_o *v32; // x0
  int32_t v33; // w20
  int32_t v34; // w21
  int32_t v35; // w19
  bool v36; // w3
  QuestReleaseEntity_o *v37; // x2
  WarEntity_o *v38; // x0
  QuestEntity_o *v39; // x19
  int64_t Time; // x20
  int32_t v41; // w19
  int32_t v42; // w20
  int32_t questId; // w22
  int32_t ValueInt; // w19
  TotalEventRaidEntity_o *v46; // [xsp+8h] [xbp-48h] BYREF
  EventRaidEntity_o *entity; // [xsp+10h] [xbp-40h] BYREF
  System_Int32_array *sameGroupQuestIds; // [xsp+18h] [xbp-38h] BYREF
  bool is_release; // [xsp+2Ch] [xbp-24h] BYREF

  v10 = this;
  if ( (byte_4187458 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, qrd);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaidMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v13);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v14);
    sub_B2C35C(&NetworkManager_TypeInfo, v15);
    this = (clsQuestCheck_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4187458 = 1;
  }
  entity = 0LL;
  sameGroupQuestIds = 0LL;
  v46 = 0LL;
  is_release = 0;
  if ( !qrd )
LABEL_112:
    sub_B2C434(this, qrd);
  type = qrd->fields.type;
  if ( !v6 & v5 )
  {
LABEL_20:
    targetId = qrd->fields.targetId;
    value = qrd->fields.value;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v23 = type;
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
        v36 = 1;
        v37 = qrd;
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
        v23 = 6;
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
        v23 = 7;
        break;
      case 8:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v23 = 8;
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
        v23 = 9;
        break;
      case 10:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v23 = 10;
        break;
      case 11:
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v23 = 11;
        break;
      case 12:
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_112;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_112;
        v38 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                qrd->fields.questId,
                (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v38 )
          return is_release;
        v39 = (QuestEntity_o *)v38;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Time = NetworkManager__getTime(0LL);
        if ( QuestEntity__getOpenedAt(v39, 0LL) > Time || QuestEntity__getClosedAt(v39, 0LL) <= Time )
          return is_release;
        return 1;
      case 13:
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_112;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_112;
        v32 = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                 qrd->fields.questId,
                                 (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v32 )
          return is_release;
        return QuestEntity__IsOpenByTime(v32, 1, 0LL);
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
        v41 = qrd->fields.targetId;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return CondType__IsMissionAchive(v41, 0LL);
      case 26:
        v42 = qrd->fields.targetId;
        questId = qrd->fields.questId;
        ValueInt = QuestReleaseEntity__getValueInt(qrd, 0LL);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        is_release = CondType__IsNotQuestGroupClear(questId, v42, ValueInt, &sameGroupQuestIds, 1, 0LL);
        if ( qinf )
        {
          qinf->fields._GroupId_k__BackingField = v42;
          MapControl_QuestInfo__AddSameGroupQuestIds(qinf, sameGroupQuestIds, 0LL);
        }
        return is_release;
      case 27:
      case 28:
        v18 = qrd->fields.targetId;
        v19 = QuestReleaseEntity__getValueInt(qrd, 0LL);
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_112;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaidMaster___);
        if ( !this )
          goto LABEL_112;
        if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)this, &entity, v18, v19, 0LL) )
          return is_release;
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_112;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
        if ( !this )
          goto LABEL_112;
        this = (clsQuestCheck_o *)TotalEventRaidMaster__TryGetEntity(
                                    (TotalEventRaidMaster_o *)this,
                                    &v46,
                                    v18,
                                    v19,
                                    0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          return is_release;
        if ( !entity || !v46 )
          goto LABEL_112;
        return (entity->fields.maxHp > v46->fields.totalDamage) ^ (qrd->fields.type != 27);
      case 32:
        v33 = qrd->fields.questId;
        v34 = qrd->fields.targetId;
        v35 = QuestReleaseEntity__getValueInt(qrd, 0LL);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v30 = 1;
        v27 = v33;
        v28 = v34;
        v29 = v35;
        return CondType__IsQuestGroupClear(v27, v28, v29, v30, 0LL);
      case 38:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v23 = 38;
        break;
      case 53:
        v37 = qrd;
        v36 = 0;
LABEL_103:
        clsQuestCheck__checkCondTypeItemGet(this, &is_release, v37, v36, method);
        return is_release;
      case 54:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v23 = 54;
        break;
      default:
        if ( type == 58 )
        {
          v24 = qrd->fields.questId;
          v25 = qrd->fields.targetId;
          v26 = QuestReleaseEntity__getValueInt(qrd, 0LL);
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v27 = v24;
          v28 = v25;
          v29 = v26;
          v30 = 0;
          return CondType__IsQuestGroupClear(v27, v28, v29, v30, 0LL);
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
        v23 = 64;
        break;
    }
  }
  return CondType__IsOpen(v23, targetId, value, 0, 0LL);
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x19
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  int32_t ScriptIntParam; // w21
  int v33; // w8
  clsQuestCheck_c *v35; // x0
  System_String_o *KEY_QUEST_START_EFFECT; // x22
  System_String_o *String; // x22
  System_String_array *v38; // x0
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v39; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v40; // x20
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x20
  System_String_o *v42; // x0
  char v43; // w8
  System_String_o *v44; // x19
  clsQuestCheck_c *v45; // x0
  System_String_o *v46; // x20
  __int64 v47; // x0
  WarEntity_o *v48; // [xsp+8h] [xbp-48h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_418746B & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Find_string___, *(_QWORD *)&questId);
    sub_B2C35C(&char___TypeInfo, v10);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestPhaseMaster___, v12);
    sub_B2C35C(&DataManager_TypeInfo, v13);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v14);
    sub_B2C35C(&EncryptedPlayerPrefs_TypeInfo, v15);
    sub_B2C35C(&Method_System_Func_string__bool___ctor__, v16);
    sub_B2C35C(&System_Func_string__bool__TypeInfo, v17);
    sub_B2C35C(&Method_clsQuestCheck___c__DisplayClass38_0__IsTapSkipQuestStart_b__0__, v18);
    sub_B2C35C(&clsQuestCheck___c__DisplayClass38_0_TypeInfo, v19);
    sub_B2C35C(&StringLiteral_21616/*"questStartEffectSkip"*/, v20);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v21);
    sub_B2C35C(&clsQuestCheck_TypeInfo, v22);
    byte_418746B = 1;
  }
  entity = 0LL;
  v48 = 0LL;
  v23 = sub_B2C42C(clsQuestCheck___c__DisplayClass38_0_TypeInfo);
  clsQuestCheck___c__DisplayClass38_0___ctor((clsQuestCheck___c__DisplayClass38_0_o *)v23, 0LL);
  if ( !v23 )
    goto LABEL_49;
  *(_QWORD *)(v23 + 16) = effectName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v23 + 16),
    (System_Int32_array **)effectName,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( isMyRoomMaterial )
    return 0;
  if ( questPhase <= 1 )
    questPhase = 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_21616/*"questStartEffectSkip"*/, 0, 0LL);
  if ( !ScriptIntParam )
  {
LABEL_53:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_49;
    Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                       &v48,
                                       questId,
                                       (const MethodInfo_24E412C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    if ( (Master_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( !v48 )
        goto LABEL_49;
      v33 = LODWORD(v48->fields.longName) - 1;
      if ( (unsigned int)v33 > 4 )
        ScriptIntParam = 0;
      else
        ScriptIntParam = dword_31A1740[v33];
      goto LABEL_24;
    }
    return 0;
  }
LABEL_24:
  v35 = clsQuestCheck_TypeInfo;
  if ( (BYTE3(clsQuestCheck_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !clsQuestCheck_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
    v35 = clsQuestCheck_TypeInfo;
  }
  KEY_QUEST_START_EFFECT = v35->static_fields->KEY_QUEST_START_EFFECT;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  String = EncryptedPlayerPrefs__GetString(KEY_QUEST_START_EFFECT, 0LL);
  if ( System_String__IsNullOrEmpty(String, 0LL) )
    goto LABEL_37;
  Master_WarQuestSelectionMaster = sub_B2C374(char___TypeInfo, 1LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_49;
  v25 = Master_WarQuestSelectionMaster;
  if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
  {
    v47 = sub_B2C460(Master_WarQuestSelectionMaster);
    sub_B2C400(v47, 0LL);
  }
  *(_WORD *)(Master_WarQuestSelectionMaster + 32) = 47;
  if ( !String )
LABEL_49:
    sub_B2C434(Master_WarQuestSelectionMaster, v25);
  v38 = System_String__Split(String, (System_Char_array *)Master_WarQuestSelectionMaster, 0LL);
  if ( !v38 )
  {
LABEL_37:
    v44 = *(System_String_o **)(v23 + 16);
    goto LABEL_38;
  }
  v39 = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)v38;
  v40 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_string__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v40,
    (Il2CppObject *)v23,
    Method_clsQuestCheck___c__DisplayClass38_0__IsTapSkipQuestStart_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_string__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                     v39,
                                                                     (System_Func_T__bool__o *)v40,
                                                                     (const MethodInfo_1726BF0 *)Method_BasicHelper_Find_string___);
  v42 = System_String__Concat_44307816(
          String,
          (System_String_o *)StringLiteral_872/*"/"*/,
          *(System_String_o **)(v23 + 16),
          0LL);
  if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
  {
    v44 = v42;
LABEL_38:
    v45 = clsQuestCheck_TypeInfo;
    if ( (BYTE3(clsQuestCheck_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !clsQuestCheck_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
      v45 = clsQuestCheck_TypeInfo;
    }
    v46 = v45->static_fields->KEY_QUEST_START_EFFECT;
    if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    }
    EncryptedPlayerPrefs__SetString(v46, v44, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
    v43 = 1;
    goto LABEL_45;
  }
  v43 = 0;
LABEL_45:
  if ( ScriptIntParam == 1 )
    return 1;
  else
    return (ScriptIntParam == 2) & (v43 ^ 1);
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
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  QuestRandomGroupMaster_o *v13; // x21
  QuestRandomGroupEntity_o *EntityFromQuestId; // x0
  QuestRandomGroupEntity_o *v15; // x19
  int32_t randomGroupId; // w20
  TerminalPramsManager_c *v17; // x0
  TerminalPramsManager_c *v18; // x0
  int32_t Item; // w22
  QuestRandomGroupEntity_o *RandomRangeQuest; // x0
  TerminalPramsManager_c *v21; // x0
  QuestRandomGroupEntity_o *v22; // x21
  TerminalPramsManager_c *v23; // x0
  TerminalPramsManager_c *v24; // x0

  if ( (byte_4187450 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, questInfo);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestRandomGroupMaster___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v10);
    byte_4187450 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestRandomGroupMaster___);
  if ( !questInfo )
    goto LABEL_64;
  v13 = (QuestRandomGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_64;
  EntityFromQuestId = QuestRandomGroupMaster__GetEntityFromQuestId(
                        (QuestRandomGroupMaster_o *)Instance,
                        questInfo->fields.questId,
                        0LL);
  if ( EntityFromQuestId )
  {
    v15 = EntityFromQuestId;
    randomGroupId = EntityFromQuestId->fields.randomGroupId;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    TerminalPramsManager__LoadQuestRandomGroupList(0LL);
    if ( !byte_418474B )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v12);
      byte_418474B = 1;
    }
    v17 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v17 = TerminalPramsManager_TypeInfo;
    }
    Instance = (DataManager_o *)v17->static_fields->_QuestRandomGroupList_k__BackingField;
    if ( !Instance )
      goto LABEL_64;
    if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
           (System_Collections_Generic_Dictionary_int__int__o *)Instance,
           randomGroupId,
           (const MethodInfo_2E247A4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    {
      if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_418474B )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v12);
        byte_418474B = 1;
      }
      v18 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v18 = TerminalPramsManager_TypeInfo;
      }
      Instance = (DataManager_o *)v18->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_64;
      Item = System_Collections_Generic_Dictionary_int__int___get_Item(
               (System_Collections_Generic_Dictionary_int__int__o *)Instance,
               randomGroupId,
               (const MethodInfo_2E24480 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsQuestClear_25746984(Item, -1, 0, 0LL) )
        goto LABEL_53;
    }
    else
    {
      if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_418474B )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v12);
        byte_418474B = 1;
      }
      v21 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v21 = TerminalPramsManager_TypeInfo;
      }
      Instance = (DataManager_o *)v21->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_64;
      System_Collections_Generic_Dictionary_int__int___Add(
        (System_Collections_Generic_Dictionary_int__int__o *)Instance,
        randomGroupId,
        0,
        (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
    RandomRangeQuest = QuestRandomGroupMaster__GetRandomRangeQuest(v13, randomGroupId, 0LL);
    if ( RandomRangeQuest )
    {
      v22 = RandomRangeQuest;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_418474B )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v12);
        byte_418474B = 1;
      }
      v23 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v23 = TerminalPramsManager_TypeInfo;
      }
      Instance = (DataManager_o *)v23->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_64;
      System_Collections_Generic_Dictionary_int__int___set_Item(
        (System_Collections_Generic_Dictionary_int__int__o *)Instance,
        randomGroupId,
        v22->fields.questId,
        (const MethodInfo_2E24518 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      TerminalPramsManager__SaveQuestRandomGroupList(0LL);
LABEL_53:
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_418474B )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v12);
        byte_418474B = 1;
      }
      v24 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v24 = TerminalPramsManager_TypeInfo;
      }
      Instance = (DataManager_o *)v24->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( Instance )
      {
        LOBYTE(RandomRangeQuest) = System_Collections_Generic_Dictionary_int__int___get_Item(
                                     (System_Collections_Generic_Dictionary_int__int__o *)Instance,
                                     randomGroupId,
                                     (const MethodInfo_2E24480 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) == v15->fields.questId;
        return (char)RandomRangeQuest;
      }
LABEL_64:
      sub_B2C434(Instance, v12);
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
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  WarEntity_o *Entity; // x0
  const MethodInfo *v10; // x3

  if ( (byte_4187454 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&war_id);
    sub_B2C35C(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4187454 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v8);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             war_id,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = clsQuestCheck__IsQuestClear(this, Entity->fields.lastQuestId, 0, v10);
  return (char)Entity;
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

  if ( (byte_418746A & 1) == 0 )
  {
    sub_B2C35C(&ScriptManager_TypeInfo, end_act);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v4);
    byte_418746A = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C67 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, end_act);
    byte_4183C67 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v5->static_fields->_WarId_k__BackingField;
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, end_act);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4183C7A = 1;
  }
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v5->static_fields->_QuestId_k__BackingField;
  if ( clsQuestCheck__mfCheck_IsQuestNew((clsQuestCheck_o *)v5, QuestId_k__BackingField, method) )
  {
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__PlayQuestStart(WarId_k__BackingField, QuestId_k__BackingField, 0, 0, end_act, 0LL, 0, 0LL, 0LL);
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
  __int64 v19; // x9
  __int64 v20; // x8
  __int64 v21; // x1
  TerminalPramsManager_c *v22; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w20
  BattleSetupInfo_o *v26; // x23
  Il2CppObject *v27; // x20
  clsQuestCheck_o *v28; // x0
  const MethodInfo *v29; // x1

  if ( (byte_418746D & 1) == 0 )
  {
    sub_B2C35C(&BattleRootComponent_TypeInfo, qinf);
    sub_B2C35C(&BattleSetupInfo_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v15);
    byte_418746D = 1;
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
      if ( !byte_4183C67 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v21);
        byte_4183C67 = 1;
      }
      v22 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v22 = TerminalPramsManager_TypeInfo;
      }
      WarId_k__BackingField = v22->static_fields->_WarId_k__BackingField;
      if ( !byte_4183C7A )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v21);
        v22 = TerminalPramsManager_TypeInfo;
        byte_4183C7A = 1;
      }
      if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = TerminalPramsManager_TypeInfo;
      }
      QuestId_k__BackingField = v22->static_fields->_QuestId_k__BackingField;
      if ( !byte_4183C7B )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v21);
        v22 = TerminalPramsManager_TypeInfo;
        byte_4183C7B = 1;
      }
      if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = TerminalPramsManager_TypeInfo;
      }
      PhaseCnt_k__BackingField = v22->static_fields->_PhaseCnt_k__BackingField;
      v26 = (BattleSetupInfo_o *)sub_B2C42C(BattleSetupInfo_TypeInfo);
      BattleSetupInfo___ctor(v26, 0LL);
      if ( !v26 )
        goto LABEL_42;
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
          goto LABEL_42;
        *((_DWORD *)Instance + 14) = boostId;
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance
        || (*((_BYTE *)Instance + 140) = 1,
            (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__)) == 0LL)
        || (*((_DWORD *)Instance + 36) = 1,
            (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
      {
LABEL_42:
        sub_B2C434(Instance, v17);
      }
      AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 35, 1, v27, 0LL);
    }
LABEL_40:
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0LL);
      return;
    }
    goto LABEL_42;
  }
  if ( result )
    goto LABEL_40;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  v18 = (_QWORD *)*((_QWORD *)Instance + 3);
  if ( !v18 )
    goto LABEL_42;
  v19 = *(&BattleRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*v18 + 300LL) >= (unsigned int)v19
    && *(BattleRootComponent_c **)(*(_QWORD *)(*v18 + 200LL) + 8 * v19 - 8) == BattleRootComponent_TypeInfo )
  {
    Instance = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)Instance + 3), 0LL);
    if ( !Instance )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v20 = v18[9];
    if ( !v20 )
      goto LABEL_42;
    Instance = *(void **)(v20 + 456);
    if ( !Instance )
      goto LABEL_42;
    BattleResultComponent__EndResult((BattleResultComponent_o *)Instance, 0LL);
    goto LABEL_40;
  }
  v28 = (clsQuestCheck_o *)sub_B2C728(*((_QWORD *)Instance + 3));
  clsQuestCheck___ctor(v28, v29);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Int32_array **v13; // x21
  TerminalPramsManager_c *v14; // x0
  BattleServantConfConponent_o *p_ClearEventQuestIds_k__BackingField; // x0
  const MethodInfo *v16; // x2
  System_Collections_Generic_IEnumerable_T__o *v17; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x19
  TerminalPramsManager_c *v26; // x0
  BattleServantConfConponent_o *v27; // x0

  if ( (byte_4187466 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_String_Join_int___, *(_QWORD *)&eventId);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_699/*","*/, v11);
    sub_B2C35C(&StringLiteral_1/*""*/, v12);
    byte_4187466 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  v13 = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( !byte_418471F )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, *(_QWORD *)&eventId);
    byte_418471F = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  p_ClearEventQuestIds_k__BackingField = (BattleServantConfConponent_o *)&v14->static_fields->_ClearEventQuestIds_k__BackingField;
  p_ClearEventQuestIds_k__BackingField->klass = (BattleServantConfConponent_c *)v13;
  sub_B2C2F8(p_ClearEventQuestIds_k__BackingField, v13, (System_String_array **)method, v3, v4, v5, v6, v7);
  v17 = (System_Collections_Generic_IEnumerable_T__o *)clsQuestCheck__GetEventQuestIdListPlayable(this, eventId, v16);
  v25 = (System_Int32_array **)System_String__Join_int_(
                                 (System_String_o *)StringLiteral_699/*","*/,
                                 v17,
                                 (const MethodInfo_209C7C0 *)Method_System_String_Join_int___);
  if ( !byte_418471F )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v18);
    byte_418471F = 1;
  }
  v26 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
  }
  v27 = (BattleServantConfConponent_o *)&v26->static_fields->_ClearEventQuestIds_k__BackingField;
  v27->klass = (BattleServantConfConponent_c *)v25;
  sub_B2C2F8(v27, v25, v19, v20, v21, v22, v23, v24);
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
  int64_t Instance; // x0
  __int64 v11; // x1
  UserItemMaster_o *v12; // x22
  int32_t targetId; // w23
  int32_t num; // w22
  char v15; // w8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187459 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, is_release);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4187459 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !qrd )
    goto LABEL_14;
  v12 = (UserItemMaster_o *)Instance;
  targetId = qrd->fields.targetId;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v12 )
    goto LABEL_14;
  Instance = UserItemMaster__TryGetEntity(v12, &entity, Instance, targetId, 0LL);
  if ( (Instance & 1) == 0 )
  {
    v15 = !itemGet;
    goto LABEL_13;
  }
  if ( !entity )
LABEL_14:
    sub_B2C434(Instance, v11);
  num = entity->fields.num;
  v15 = (num >= QuestReleaseEntity__getValueInt(qrd, 0LL)) ^ itemGet ^ 1;
LABEL_13:
  *is_release = v15 & 1;
}


bool __fastcall clsQuestCheck__isPlayQuestStartAction(clsQuestCheck_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  int32_t WarId_k__BackingField; // w20
  int32_t QuestId_k__BackingField; // w19

  if ( (byte_4187469 & 1) == 0 )
  {
    sub_B2C35C(&ScriptManager_TypeInfo, method);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v3);
    byte_4187469 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C67 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4183C67 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v4->static_fields->_WarId_k__BackingField;
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4183C7A = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v4->static_fields->_QuestId_k__BackingField;
  if ( !clsQuestCheck__mfCheck_IsQuestNew((clsQuestCheck_o *)v4, QuestId_k__BackingField, v2) )
    return 0;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  return ScriptManager__isPlayQuestStart(WarId_k__BackingField, QuestId_k__BackingField, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__mfCheck_IsQuestNew(clsQuestCheck_o *this, int32_t qid, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t Instance; // x0
  __int64 v7; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418745A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&qid);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418745A = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
    sub_B2C434(Instance, v7);
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
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418745B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&qid);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418745B = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
    sub_B2C434(Instance, v7);
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
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  bool v10; // w8
  bool result; // w0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4187457 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&qid);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4187457 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                qid,
                                (const MethodInfo_24E412C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 1;
  if ( !entity )
LABEL_12:
    sub_B2C434(Instance, v8);
  if ( (*(&entity->fields.startType + 1) | 4) != 5 )
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
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  const MethodInfo *v39; // x2
  int64_t Master_WarQuestSelectionMaster; // x0
  __int64 v41; // x1
  _BOOL8 IsShop; // x0
  const MethodInfo *v43; // x2
  UserQuestMaster_o *v44; // x23
  clsQuestCheck_Fields *p_fields; // x23
  int32_t UseDiceSpotId; // w24
  System_Collections_Generic_List_T__o *qrs; // x24
  clsQuestCheck___c_c *v49; // x0
  struct clsQuestCheck___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__5_0; // x25
  Il2CppObject *v52; // x26
  struct clsQuestCheck___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct BalanceConfig_StaticFields *v60; // x8
  QuestEntity_o *Mine; // x0
  UserEventQuestCooltimeMaster_o *v62; // x24
  UserEventQuestCooltimeEntity_o *v63; // x0
  UserEventQuestCooltimeEntity_o *v64; // x24
  int64_t Time; // x0
  int64_t clearedAt; // x26
  int64_t v67; // x25
  struct System_Collections_Generic_List_QuestReleaseEntity__o *cQuestReleaseListP; // x23
  struct clsQuestCheck___c_StaticFields *v69; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_1; // x24
  Il2CppObject *v71; // x25
  struct clsQuestCheck___c_StaticFields *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  UserQuestMaster_o *v79; // x23
  const MethodInfo *v80; // x4
  QuestReleaseEntity_o *current; // x22
  _BOOL8 HasStatus; // x0
  __int64 v83; // x1
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  int v90; // w19
  int32_t eventId; // w24
  System_Collections_Generic_IEnumerable_T__o *v92; // x25
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v93; // x24
  const MethodInfo *v94; // x2
  BalanceConfig_c *v95; // x0
  const MethodInfo *v96; // x2
  BalanceConfig_c *v97; // x0
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Collections_Generic_List_Enumerator_T__o v104; // [xsp+0h] [xbp-80h] BYREF
  WarEntity_o *v105; // [xsp+18h] [xbp-68h] BYREF
  WarEntity_o *entity; // [xsp+20h] [xbp-60h] BYREF
  UserQuestEntity_o *v107; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_418744F & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&questId);
    sub_B2C35C(&Method_BasicHelper_Any_QuestReleaseEntity___, v12);
    sub_B2C35C(&Method_System_Comparison_QuestReleaseEntity___ctor__, v13);
    sub_B2C35C(&System_Comparison_QuestReleaseEntity__TypeInfo, v14);
    sub_B2C35C(&CondType_TypeInfo, v15);
    sub_B2C35C(&Method_DataManager_GetMaster_EventDetailMaster___, v16);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestReleaseMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___, v18);
    sub_B2C35C(&Method_DataManager_GetMaster_UserQuestMaster___, v19);
    sub_B2C35C(&Method_DataManager_GetMaster_WarMaster___, v20);
    sub_B2C35C(&DataManager_TypeInfo, v21);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v22);
    sub_B2C35C(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v26);
    sub_B2C35C(&Method_System_Func_QuestReleaseEntity__bool___ctor__, v27);
    sub_B2C35C(&System_Func_QuestReleaseEntity__bool__TypeInfo, v28);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__, v29);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__, v30);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v31);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__, v32);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___67315544, v33);
    sub_B2C35C(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v34);
    sub_B2C35C(&NetworkManager_TypeInfo, v35);
    sub_B2C35C(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__, v36);
    sub_B2C35C(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__, v37);
    sub_B2C35C(&clsQuestCheck___c_TypeInfo, v38);
    byte_418744F = 1;
  }
  entity = 0LL;
  v107 = 0LL;
  v105 = 0LL;
  memset(&v104, 0, sizeof(v104));
  *questReleaseNG = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)questReleaseNG,
    0LL,
    (System_String_array **)questReleaseNG,
    (System_String_array **)questInfo,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, v39) )
    return 0;
  v107 = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarMaster___);
  if ( !questInfo || !Master_WarQuestSelectionMaster )
    goto LABEL_114;
  IsShop = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
             &entity,
             questInfo->fields.warId,
             (const MethodInfo_24E412C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
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
      v44 = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserQuestMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = NetworkManager__get_UserId(0LL);
      if ( !v44 )
        goto LABEL_114;
      IsShop = UserQuestMaster__TryGetEntity(v44, &v107, Master_WarQuestSelectionMaster, questId, 0LL);
      if ( IsShop )
      {
        Master_WarQuestSelectionMaster = (int64_t)v107;
        if ( !v107 )
          goto LABEL_114;
        IsShop = UserQuestEntity__IsNotExpired(v107, 0LL);
        if ( IsShop )
          return 1;
      }
    }
  }
  if ( !clsQuestCheck__IsValidQuestRandomGroup((clsQuestCheck_o *)IsShop, questInfo, v43) )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_114;
  p_fields = &this->fields;
  QuestReleaseMaster__getListByQuestID_31194596(
    (QuestReleaseMaster_o *)Master_WarQuestSelectionMaster,
    questId,
    &this->fields.qrs,
    0LL);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !entity || !Master_WarQuestSelectionMaster )
    goto LABEL_114;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
         &v105,
         entity->fields.eventId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Master_WarQuestSelectionMaster = (int64_t)v105;
    if ( !v105 )
      goto LABEL_114;
    if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v105, 0LL) )
    {
      Master_WarQuestSelectionMaster = (int64_t)v105;
      if ( !v105 )
        goto LABEL_114;
      UseDiceSpotId = EventDetailEntity__GetUseDiceSpotId((EventDetailEntity_o *)v105, 0LL);
      if ( UseDiceSpotId == MapControl_QuestInfo__GetSpotID(questInfo, 0LL)
        && MapControl_QuestInfo__GetQuestType(questInfo, 0LL) == 1 )
      {
        qrs = (System_Collections_Generic_List_T__o *)p_fields->qrs;
        v49 = clsQuestCheck___c_TypeInfo;
        if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
          v49 = clsQuestCheck___c_TypeInfo;
        }
        static_fields = v49->static_fields;
        _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__5_0;
        if ( !_9__5_0 )
        {
          if ( (BYTE3(v49->vtable._0_Equals.methodPtr) & 4) != 0 && !v49->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v49);
            static_fields = clsQuestCheck___c_TypeInfo->static_fields;
          }
          v52 = (Il2CppObject *)static_fields->__9;
          _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_QuestReleaseEntity__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__5_0,
            v52,
            Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__,
            (const MethodInfo_2711C04 *)Method_System_Func_QuestReleaseEntity__bool___ctor__);
          v53 = clsQuestCheck___c_TypeInfo->static_fields;
          v53->__9__5_0 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__5_0;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v53->__9__5_0,
            (System_Int32_array **)_9__5_0,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59);
        }
        if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                qrs,
                (System_Func_T__bool__o *)_9__5_0,
                (const MethodInfo_17266AC *)Method_BasicHelper_Any_QuestReleaseEntity___) )
        {
          Master_WarQuestSelectionMaster = (int64_t)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Master_WarQuestSelectionMaster = (int64_t)BalanceConfig_TypeInfo;
          }
          v60 = *(struct BalanceConfig_StaticFields **)(Master_WarQuestSelectionMaster + 184);
          if ( v60->EventBoardGameNextBoardQuestId != questId )
          {
            if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
              && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
            {
              j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
              v60 = BalanceConfig_TypeInfo->static_fields;
            }
            if ( v60->EventBoardGameNextRoundQuestId != questId )
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
              v92 = (System_Collections_Generic_IEnumerable_T__o *)p_fields->qrs;
              v93 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
              System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
                v93,
                v92,
                (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___67315544);
              v95 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v95 = BalanceConfig_TypeInfo;
              }
              if ( clsQuestCheck__CheckQuestPlayableNow(this, v95->static_fields->EventBoardGameNextBoardQuestId, v94) )
                return 0;
              v97 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v97 = BalanceConfig_TypeInfo;
              }
              if ( clsQuestCheck__CheckQuestPlayableNow(this, v97->static_fields->EventBoardGameNextRoundQuestId, v96) )
                return 0;
              p_fields->qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v93;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&this->fields,
                (System_Int32_array **)v93,
                v98,
                v99,
                v100,
                v101,
                v102,
                v103);
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
    Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___);
    if ( !questInfo->fields._WarInfo_k__BackingField )
      goto LABEL_114;
    v62 = (UserEventQuestCooltimeMaster_o *)Master_WarQuestSelectionMaster;
    Master_WarQuestSelectionMaster = MapControl_WarInfo__GetEventId(questInfo->fields._WarInfo_k__BackingField, 0LL);
    if ( !v62 )
      goto LABEL_114;
    v63 = UserEventQuestCooltimeMaster__getEntity(
            v62,
            Master_WarQuestSelectionMaster,
            questInfo->fields.questId,
            1,
            0LL);
    if ( v63 )
    {
      v64 = v63;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      clearedAt = v64->fields.clearedAt;
      v67 = Time;
      Master_WarQuestSelectionMaster = (int64_t)UserEventQuestCooltimeEntity__GetMasterEntity(v64, 0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_114;
      if ( v67 < clearedAt + *(int *)(Master_WarQuestSelectionMaster + 28) )
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
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.cQuestReleaseListP;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_114;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)Master_WarQuestSelectionMaster,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.qrs,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__);
  cQuestReleaseListP = this->fields.cQuestReleaseListP;
  Master_WarQuestSelectionMaster = (int64_t)clsQuestCheck___c_TypeInfo;
  if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
    Master_WarQuestSelectionMaster = (int64_t)clsQuestCheck___c_TypeInfo;
  }
  v69 = *(struct clsQuestCheck___c_StaticFields **)(Master_WarQuestSelectionMaster + 184);
  _9__5_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v69->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      v69 = clsQuestCheck___c_TypeInfo->static_fields;
    }
    v71 = (Il2CppObject *)v69->__9;
    _9__5_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_QuestReleaseEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_1,
      v71,
      Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_QuestReleaseEntity___ctor__);
    v72 = clsQuestCheck___c_TypeInfo->static_fields;
    v72->__9__5_1 = (struct System_Comparison_QuestReleaseEntity__o *)_9__5_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v72->__9__5_1,
      (System_Int32_array **)_9__5_1,
      v73,
      v74,
      v75,
      v76,
      v77,
      v78);
  }
  if ( !cQuestReleaseListP )
    goto LABEL_114;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)cQuestReleaseListP,
    (System_Comparison_T__o *)_9__5_1,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  if ( v107 )
    goto LABEL_87;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v79 = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = NetworkManager__get_UserId(0LL);
  if ( !v79 )
LABEL_114:
    sub_B2C434(Master_WarQuestSelectionMaster, v41);
  UserQuestMaster__TryGetEntity(v79, &v107, Master_WarQuestSelectionMaster, questId, 0LL);
LABEL_87:
  Master_WarQuestSelectionMaster = (int64_t)this->fields.cQuestReleaseListP;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_114;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v104,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v104,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
  {
    current = (QuestReleaseEntity_o *)v104.fields.current;
    if ( !v107 )
      goto LABEL_94;
    HasStatus = UserQuestEntity__HasStatus(v107, 8, 0LL);
    if ( !HasStatus )
      goto LABEL_94;
    if ( !current )
      sub_B2C434(HasStatus, v83);
    if ( current->fields.type != 12 )
    {
LABEL_94:
      if ( !clsQuestCheck__IsQuestRelease_24556048(this, current, -1, questInfo, v80) )
      {
        *questReleaseNG = current;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)questReleaseNG,
          (System_Int32_array **)current,
          v84,
          v85,
          v86,
          v87,
          v88,
          v89);
        v90 = 64;
        goto LABEL_97;
      }
    }
  }
  v90 = 62;
LABEL_97:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v104,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v90 != 64;
}


void __fastcall clsQuestCheck___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct clsQuestCheck___c_StaticFields *static_fields; // x0

  if ( (byte_4185569 & 1) == 0 )
  {
    sub_B2C35C(&clsQuestCheck___c_TypeInfo, v1);
    byte_4185569 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(clsQuestCheck___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = clsQuestCheck___c_TypeInfo->static_fields;
  static_fields->__9 = (struct clsQuestCheck___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall clsQuestCheck___c___ctor(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__39_0(
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
  CommonUI_o *Instance; // x19
  System_Action_o *v11; // x21

  if ( (byte_418556B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_clsQuestCheck___c__DisplayClass39_1__CheckQuestPlayable_b__5__, v5);
    sub_B2C35C(&clsQuestCheck___c__DisplayClass39_1_TypeInfo, v6);
    byte_418556B = 1;
  }
  v7 = sub_B2C42C(clsQuestCheck___c__DisplayClass39_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_clsQuestCheck___c__DisplayClass39_1__CheckQuestPlayable_b__5__,
          0LL),
        !Instance) )
  {
    sub_B2C434(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__39_1(
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
  CommonUI_o *Instance; // x19
  System_Action_o *v11; // x21

  if ( (byte_418556C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_clsQuestCheck___c__DisplayClass39_2__CheckQuestPlayable_b__6__, v5);
    sub_B2C35C(&clsQuestCheck___c__DisplayClass39_2_TypeInfo, v6);
    byte_418556C = 1;
  }
  v7 = sub_B2C42C(clsQuestCheck___c__DisplayClass39_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_clsQuestCheck___c__DisplayClass39_2__CheckQuestPlayable_b__6__,
          0LL),
        !Instance) )
  {
    sub_B2C434(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v11, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__39_11(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_418556E & 1) == 0 )
  {
    sub_B2C35C(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_418556E = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    0,
    (const MethodInfo_1725124 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__39_13(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_418556F & 1) == 0 )
  {
    sub_B2C35C(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_418556F = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    0,
    (const MethodInfo_1725124 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__39_2(
        clsQuestCheck___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4185570 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4185570 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__39_3(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_418556A & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B2C35C(&TopLoginRequest_TypeInfo, v2);
    byte_418556A = 1;
  }
  if ( (BYTE3(TopLoginRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopLoginRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopLoginRequest_TypeInfo);
  }
  TopLoginRequest__ResetAccesTime(0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__39_4(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__39_7(
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
  CommonUI_o *Instance; // x19
  System_Action_o *v11; // x21

  if ( (byte_418556D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_clsQuestCheck___c__DisplayClass39_3__CheckQuestPlayable_b__8__, v5);
    sub_B2C35C(&clsQuestCheck___c__DisplayClass39_3_TypeInfo, v6);
    byte_418556D = 1;
  }
  v7 = sub_B2C42C(clsQuestCheck___c__DisplayClass39_3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_clsQuestCheck___c__DisplayClass39_3__CheckQuestPlayable_b__8__,
          0LL),
        !Instance) )
  {
    sub_B2C434(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v11, 0LL);
}


bool __fastcall clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_0(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B2C434(this, 0LL);
  return n->fields.type == 118;
}


int32_t __fastcall clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_1(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *a,
        QuestReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.imagePriority - a->fields.imagePriority;
}


void __fastcall clsQuestCheck___c__DisplayClass29_0___ctor(
        clsQuestCheck___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall clsQuestCheck___c__DisplayClass29_0___GetReleasedQuestEntityListByServantGet_b__0(
        clsQuestCheck___c__DisplayClass29_0_o *this,
        QuestEntity_o *n,
        const MethodInfo *method)
{
  struct QuestEntity_o *questEnt; // x8

  if ( !n || (questEnt = this->fields.questEnt) == 0LL )
    sub_B2C434(this, n);
  return n->fields.id == questEnt->fields.id;
}


void __fastcall clsQuestCheck___c__DisplayClass29_1___ctor(
        clsQuestCheck___c__DisplayClass29_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall clsQuestCheck___c__DisplayClass29_1___GetReleasedQuestEntityListByServantGet_b__1(
        clsQuestCheck___c__DisplayClass29_1_o *this,
        QuestEntity_o *n,
        const MethodInfo *method)
{
  struct QuestEntity_o *questEnt; // x8

  if ( !n || (questEnt = this->fields.questEnt) == 0LL )
    sub_B2C434(this, n);
  return n->fields.id == questEnt->fields.id;
}


void __fastcall clsQuestCheck___c__DisplayClass38_0___ctor(
        clsQuestCheck___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall clsQuestCheck___c__DisplayClass38_0___IsTapSkipQuestStart_b__0(
        clsQuestCheck___c__DisplayClass38_0_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_String__op_Equality(a, this->fields.effectName, 0LL);
}


void __fastcall clsQuestCheck___c__DisplayClass39_0___ctor(
        clsQuestCheck___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall clsQuestCheck___c__DisplayClass39_0___CheckQuestPlayable_b__10(
        clsQuestCheck___c__DisplayClass39_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  clsQuestCheck_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, result);
  clsQuestCheck__RecoverItemListDialogCallback(
    _4__this,
    this->fields.questInfo,
    this->fields.srcEndTime,
    result,
    this->fields.boostId,
    0LL);
}


void __fastcall clsQuestCheck___c__DisplayClass39_0___CheckQuestPlayable_b__12(
        clsQuestCheck___c__DisplayClass39_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  clsQuestCheck_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, result);
  clsQuestCheck__RecoverItemListDialogCallback(
    _4__this,
    this->fields.questInfo,
    this->fields.srcEndTime,
    result,
    this->fields.boostId,
    0LL);
}


void __fastcall clsQuestCheck___c__DisplayClass39_0___CheckQuestPlayable_b__9(
        clsQuestCheck___c__DisplayClass39_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  clsQuestCheck_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, result);
  clsQuestCheck__RecoverItemListDialogCallback(
    _4__this,
    this->fields.questInfo,
    this->fields.srcEndTime,
    result,
    this->fields.boostId,
    0LL);
}


void __fastcall clsQuestCheck___c__DisplayClass39_1___ctor(
        clsQuestCheck___c__DisplayClass39_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall clsQuestCheck___c__DisplayClass39_1___CheckQuestPlayable_b__5(
        clsQuestCheck___c__DisplayClass39_1_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t result; // w8
  WebViewManager_o *Instance; // x19
  SceneJumpInfo_o *v8; // x20
  AvalonSceneManager_o *v9; // x0
  __int64 v10; // x1
  int32_t v11; // w1
  Il2CppObject *v12; // x3

  if ( (byte_4185571 & 1) == 0 )
  {
    sub_B2C35C(&SceneJumpInfo_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B2C35C(&StringLiteral_12668/*"SellServant"*/, v4);
    sub_B2C35C(&StringLiteral_12707/*"ServantCombine"*/, v5);
    byte_4185571 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17292968(v8, (System_String_o *)StringLiteral_12668/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v11 = 22;
        goto LABEL_12;
      }
LABEL_15:
      sub_B2C434(v9, v10);
    case 1:
      v9 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v9 )
      {
        v11 = 71;
        v12 = 0LL;
LABEL_13:
        AvalonSceneManager__transitionScene(v9, v11, 1, v12, 0LL);
        return;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17292872(v8, (System_String_o *)StringLiteral_12707/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v11 = 32;
LABEL_12:
        v9 = (AvalonSceneManager_o *)Instance;
        v12 = (Il2CppObject *)v8;
        goto LABEL_13;
      }
      goto LABEL_15;
  }
}


void __fastcall clsQuestCheck___c__DisplayClass39_2___ctor(
        clsQuestCheck___c__DisplayClass39_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall clsQuestCheck___c__DisplayClass39_2___CheckQuestPlayable_b__6(
        clsQuestCheck___c__DisplayClass39_2_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t result; // w8
  AvalonSceneManager_o *Instance; // x19
  SceneJumpInfo_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w1

  if ( (byte_4185572 & 1) == 0 )
  {
    sub_B2C35C(&SceneJumpInfo_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B2C35C(&StringLiteral_12711/*"ServantEquipList"*/, v4);
    sub_B2C35C(&StringLiteral_12668/*"SellServant"*/, v5);
    sub_B2C35C(&StringLiteral_12710/*"ServantEQCombine"*/, v6);
    byte_4185572 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17292968(v9, (System_String_o *)StringLiteral_12668/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v12 = 22;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 1:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17292872(v9, (System_String_o *)StringLiteral_12711/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v12 = 71;
        goto LABEL_12;
      }
LABEL_14:
      sub_B2C434(v10, v11);
    case 0:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17292872(v9, (System_String_o *)StringLiteral_12710/*"ServantEQCombine"*/, 0LL);
      if ( Instance )
      {
        v12 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene(Instance, v12, 1, (Il2CppObject *)v9, 0LL);
        return;
      }
      goto LABEL_14;
  }
}


void __fastcall clsQuestCheck___c__DisplayClass39_3___ctor(
        clsQuestCheck___c__DisplayClass39_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall clsQuestCheck___c__DisplayClass39_3___CheckQuestPlayable_b__8(
        clsQuestCheck___c__DisplayClass39_3_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  AvalonSceneManager_o *Instance; // x19
  SceneJumpInfo_o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4185573 & 1) == 0 )
  {
    sub_B2C35C(&SceneJumpInfo_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B2C35C(&StringLiteral_12668/*"SellServant"*/, v4);
    byte_4185573 = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v6 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_17292968(v6, (System_String_o *)StringLiteral_12668/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_B2C434(v7, v8);
    AvalonSceneManager__transitionScene(Instance, 22, 1, (Il2CppObject *)v6, 0LL);
  }
}