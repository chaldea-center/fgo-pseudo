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

  if ( (byte_4213FF3 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_11011/*"QuestStartEffect"*/, v1);
    sub_B0D8A4(&clsQuestCheck_TypeInfo, v8);
    byte_4213FF3 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)clsQuestCheck_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_11011/*"QuestStartEffect"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_11011/*"QuestStartEffect"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall clsQuestCheck___ctor(clsQuestCheck_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_4213FF2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck___ctor__, v5);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v6);
    byte_4213FF2 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v7;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                                                                  v14,
                                                                                                  v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.cQuestReleaseListP = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.cQuestReleaseListP,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2A716D0 *)Method_SingletonTemplate_clsQuestCheck___ctor__);
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
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  MapControl_QuestInfo_o **v59; // x20
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  int32_t v66; // w27
  MapControl_QuestInfo_o *v67; // x8
  int32_t questId; // w19
  int32_t questPhase; // w26
  int32_t v70; // w21
  MapControl_QuestInfo_o *v71; // x8
  int32_t v72; // w25
  int v73; // w21
  bool IsQuestReleaseAll; // w0
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x23
  UserQuestEntity_o *Entity; // x0
  __int64 v77; // x21
  int64_t Time; // x0
  System_String_o *v79; // x19
  System_String_o *v80; // x20
  __int64 v81; // x1
  __int64 v82; // x2
  CommonUI_o *v83; // x21
  clsQuestCheck___c_c *v84; // x8
  struct clsQuestCheck___c_StaticFields *v85; // x9
  System_Action_o *_9__39_4; // x22
  Il2CppObject *v87; // x23
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Int32_array **v94; // x1
  struct clsQuestCheck___c_StaticFields *v95; // x0
  BattleServantConfConponent_o *p__9__39_4; // x0
  UserGameEntity_o *v97; // x26
  QuestEntity_o *v98; // x27
  __int64 v99; // x1
  __int64 v100; // x1
  __int64 v101; // x2
  clsQuestCheck___c_c *v102; // x8
  struct clsQuestCheck___c_StaticFields *static_fields; // x9
  Il2CppObject *v104; // x23
  struct clsQuestCheck___c_StaticFields *v105; // x0
  TerminalPramsManager_c *v106; // x0
  int64_t v107; // x21
  UserServantMaster_o *v108; // x28
  UserCommandCodeMaster_o *v109; // x23
  __int64 v110; // x1
  __int64 v111; // x2
  CommonUI_o *v112; // x19
  int32_t v113; // w20
  int32_t svtKeep; // w21
  struct clsQuestCheck___c_StaticFields *v115; // x8
  ServantFrameShortDlgComponent_CallbackFunc_o *_9__39_1; // x22
  Il2CppObject *v117; // x23
  struct clsQuestCheck___c_StaticFields *v118; // x0
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  CommonUI_o *v125; // x0
  int32_t v126; // w1
  int32_t v127; // w2
  int32_t v128; // w3
  __int64 v129; // x1
  __int64 v130; // x2
  CommonUI_o *v131; // x19
  int32_t v132; // w20
  int32_t svtEquipKeep; // w21
  struct clsQuestCheck___c_StaticFields *v134; // x8
  Il2CppObject *v135; // x23
  struct clsQuestCheck___c_StaticFields *v136; // x0
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  int32_t Count; // w19
  __int64 v144; // x1
  __int64 v145; // x2
  CommonUI_o *v146; // x20
  BalanceConfig_c *v147; // x8
  struct clsQuestCheck___c_StaticFields *v148; // x8
  Il2CppObject *v149; // x23
  struct clsQuestCheck___c_StaticFields *v150; // x0
  System_String_array **v151; // x2
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  bool v157; // w25
  WebViewManager_o *Instance; // x19
  __int64 v160; // x1
  __int64 v161; // x2
  RecoverDlgComponent_CallbackFunc_o *v162; // x20
  CommonUI_o *v163; // x0
  int32_t v164; // w1
  RecoverDlgComponent_CallbackFunc_o *v165; // x2
  bool v166; // w3
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x24
  UserItemMaster_o *v168; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v169; // x27
  System_String_o *v170; // x23
  int32_t v171; // w26
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v173; // x8
  int64_t v174; // x23
  int64_t v175; // x28
  int32_t klass; // w8
  struct System_Int32_array *nums; // x9
  System_String_o *v178; // x0
  System_String_o *v179; // x0
  System_String_o *v180; // x19
  System_String_o *v181; // x0
  System_String_o *v182; // x19
  __int64 v183; // x1
  __int64 v184; // x2
  CommonUI_o *v185; // x20
  clsQuestCheck___c_c *v186; // x8
  struct clsQuestCheck___c_StaticFields *v187; // x9
  System_String_o *v188; // x21
  System_Action_o *_9__39_11; // x22
  Il2CppObject *v190; // x23
  System_String_array **v191; // x2
  System_String_array **v192; // x3
  System_Boolean_array **v193; // x4
  System_Int32_array **v194; // x5
  System_Int32_array *v195; // x6
  System_Int32_array *v196; // x7
  struct clsQuestCheck___c_StaticFields *v197; // x0
  BattleServantConfConponent_o *p__9__39_11; // x0
  WebViewManager_o *v199; // x19
  __int64 v200; // x1
  __int64 v201; // x2
  RecoverDlgComponent_CallbackFunc_o *v202; // x20
  CommonUI_o *v203; // x19
  __int64 v204; // x1
  __int64 v205; // x2
  RecoverDlgComponent_CallbackFunc_o *v206; // x20
  QuestConsumeItemEntity_o *v207; // x24
  UserItemMaster_o *v208; // x27
  System_String_o *v209; // x23
  int32_t v210; // w26
  struct System_Int32_array *v211; // x8
  struct System_Int32_array *v212; // x8
  int64_t v213; // x23
  int64_t v214; // x28
  int32_t qp; // w8
  struct System_Int32_array *v216; // x9
  WarEntity_o *v217; // x0
  __int64 v218; // x1
  TerminalPramsManager_c *v219; // x0
  int v220; // w8
  TerminalPramsManager_c *v221; // x0
  int32_t v222; // w21
  __int64 v223; // x1
  int32_t VaildPayType; // w21
  TerminalPramsManager_c *v225; // x0
  MapControl_QuestInfo_o *v226; // x8
  QuestMessageMaster_o *v227; // x20
  int32_t PhaseMax; // w0
  System_String_o *ValidMessage; // x0
  System_String_o *v230; // x19
  CommonUI_o *v231; // x20
  System_String_o *v232; // x21
  __int64 v233; // x1
  __int64 v234; // x2
  System_String_o *v235; // x22
  clsQuestCheck___c_c *v236; // x8
  struct clsQuestCheck___c_StaticFields *v237; // x9
  CommonConfirmDialog_ClickDelegate_o *_9__39_2; // x24
  System_String_o *v239; // x23
  Il2CppObject *v240; // x25
  struct clsQuestCheck___c_StaticFields *v241; // x0
  System_String_array **v242; // x2
  System_String_array **v243; // x3
  System_Boolean_array **v244; // x4
  System_Int32_array **v245; // x5
  System_Int32_array *v246; // x6
  System_Int32_array *v247; // x7
  System_String_o *v248; // x0
  System_String_o *v249; // x0
  System_String_o *v250; // x19
  System_String_o *v251; // x0
  __int64 v252; // x1
  __int64 v253; // x2
  clsQuestCheck___c_c *v254; // x8
  struct clsQuestCheck___c_StaticFields *v255; // x9
  Il2CppObject *v256; // x23
  struct clsQuestCheck___c_StaticFields *v257; // x0
  __int64 v258; // x0
  char v259; // [xsp+3Ch] [xbp-84h]
  char v260; // [xsp+40h] [xbp-80h]
  UserGameEntity_o *v261; // [xsp+40h] [xbp-80h]
  System_String_o *SelfUserGame; // [xsp+48h] [xbp-78h]
  System_String_o *v263; // [xsp+48h] [xbp-78h]
  System_String_o *str0; // [xsp+50h] [xbp-70h]
  System_String_o *str0a; // [xsp+50h] [xbp-70h]
  int32_t v266; // [xsp+5Ch] [xbp-64h]
  int32_t v267; // [xsp+60h] [xbp-60h]
  int32_t v268; // [xsp+64h] [xbp-5Ch]
  int32_t servantEquipSum[2]; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_4213FF0 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, questInfo);
    sub_B0D8A4(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, v9);
    sub_B0D8A4(&RecoverDlgComponent_CallbackFunc_TypeInfo, v10);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GachaMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMessageMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v15);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v16);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserQuestMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v18);
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarMaster___, v19);
    sub_B0D8A4(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v20);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v21);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v22);
    sub_B0D8A4(&NetworkManager_TypeInfo, v23);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v24);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v26);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v27);
    sub_B0D8A4(&Method_clsQuestCheck___c__CheckQuestPlayable_b__39_0__, v28);
    sub_B0D8A4(&Method_clsQuestCheck___c__CheckQuestPlayable_b__39_11__, v29);
    sub_B0D8A4(&Method_clsQuestCheck___c__CheckQuestPlayable_b__39_13__, v30);
    sub_B0D8A4(&Method_clsQuestCheck___c__CheckQuestPlayable_b__39_1__, v31);
    sub_B0D8A4(&Method_clsQuestCheck___c__CheckQuestPlayable_b__39_2__, v32);
    sub_B0D8A4(&Method_clsQuestCheck___c__CheckQuestPlayable_b__39_3__, v33);
    sub_B0D8A4(&Method_clsQuestCheck___c__CheckQuestPlayable_b__39_4__, v34);
    sub_B0D8A4(&Method_clsQuestCheck___c__CheckQuestPlayable_b__39_7__, v35);
    sub_B0D8A4(&Method_clsQuestCheck___c__DisplayClass39_0__CheckQuestPlayable_b__10__, v36);
    sub_B0D8A4(&Method_clsQuestCheck___c__DisplayClass39_0__CheckQuestPlayable_b__12__, v37);
    sub_B0D8A4(&Method_clsQuestCheck___c__DisplayClass39_0__CheckQuestPlayable_b__9__, v38);
    sub_B0D8A4(&clsQuestCheck___c__DisplayClass39_0_TypeInfo, v39);
    sub_B0D8A4(&clsQuestCheck___c_TypeInfo, v40);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v41);
    sub_B0D8A4(&StringLiteral_10973/*"QUEST_MESSAGE_DLG_DECIDE"*/, v42);
    sub_B0D8A4(&StringLiteral_10972/*"QUEST_MESSAGE_DLG_CANCEL"*/, v43);
    sub_B0D8A4(&StringLiteral_10971/*"QUEST_ITEM_COST_OVER"*/, v44);
    sub_B0D8A4(&StringLiteral_10998/*"QUEST_TIME_OVER"*/, v45);
    sub_B0D8A4(&StringLiteral_12248/*"SHORT_DLG_TITLE"*/, v46);
    sub_B0D8A4(&StringLiteral_27/*"\n\n"*/, v47);
    sub_B0D8A4(&StringLiteral_2521/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, v48);
    sub_B0D8A4(&StringLiteral_1/*""*/, v49);
    sub_B0D8A4(&StringLiteral_10916/*"QUEST_AP_MAX_OVER"*/, v50);
    byte_4213FF0 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  v51 = sub_B0D974(clsQuestCheck___c__DisplayClass39_0_TypeInfo, questInfo, srcEndTime);
  clsQuestCheck___c__DisplayClass39_0___ctor((clsQuestCheck___c__DisplayClass39_0_o *)v51, 0LL);
  if ( !v51 )
    goto LABEL_289;
  *(_QWORD *)(v51 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v51 + 16), (System_Int32_array **)this, v53, v54, v55, v56, v57, v58);
  *(_QWORD *)(v51 + 24) = questInfo;
  v59 = (MapControl_QuestInfo_o **)(v51 + 24);
  sub_B0D840((BattleServantConfConponent_o *)(v51 + 24), (System_Int32_array **)questInfo, v60, v61, v62, v63, v64, v65);
  SpotID = *(_QWORD *)(v51 + 24);
  *(_QWORD *)(v51 + 32) = srcEndTime;
  *(_DWORD *)(v51 + 40) = boostId;
  if ( !SpotID )
    goto LABEL_289;
  v66 = *(_DWORD *)(SpotID + 64);
  SpotID = MapControl_QuestInfo__GetSpotID((MapControl_QuestInfo_o *)SpotID, 0LL);
  v67 = *v59;
  if ( !*v59 )
    goto LABEL_289;
  questId = v67->fields.questId;
  questPhase = v67->fields.questPhase;
  v70 = SpotID;
  SpotID = (int64_t)MapControl_QuestInfo__GetMine(*v59, 0LL);
  if ( !*v59 )
    goto LABEL_289;
  if ( !SpotID )
    goto LABEL_289;
  SpotID = QuestEntity__getActConsume((QuestEntity_o *)SpotID, (*v59)->fields.costCalcVal, 0LL);
  v71 = *v59;
  if ( !*v59 )
    goto LABEL_289;
  v268 = v70;
  v72 = v71->fields._fixedCostVal_k__BackingField >= 0 ? v71->fields._fixedCostVal_k__BackingField : SpotID;
  SpotID = (int64_t)MapControl_QuestInfo__GetMine(v71, 0LL);
  if ( !SpotID )
    goto LABEL_289;
  v73 = *(_DWORD *)(SpotID + 80);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  IsQuestReleaseAll = TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
  if ( v73 == 1 || IsQuestReleaseAll )
    goto LABEL_41;
  SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_289;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)SpotID,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
  v77 = *(_QWORD *)(v51 + 32);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( v77 < 1 || v77 - Time > 0 )
  {
LABEL_41:
    v266 = v66;
    v267 = questPhase;
    SpotID = (int64_t)UserGameMaster__getSelfUserGame(0LL);
    if ( *v59 )
    {
      v97 = (UserGameEntity_o *)SpotID;
      SpotID = (int64_t)MapControl_QuestInfo__GetMine(*v59, 0LL);
      if ( SpotID )
      {
        v98 = (QuestEntity_o *)SpotID;
        SpotID = QuestEntity__GetConsumeType((QuestEntity_o *)SpotID, 0LL);
        if ( (_DWORD)SpotID == 1 )
        {
          if ( !v97 )
            goto LABEL_289;
          if ( v72 > v97->fields.actMax )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v79 = LocalizationManager__Get((System_String_o *)StringLiteral_12248/*"SHORT_DLG_TITLE"*/, 0LL);
            v80 = LocalizationManager__Get((System_String_o *)StringLiteral_10916/*"QUEST_AP_MAX_OVER"*/, 0LL);
            SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v83 = (CommonUI_o *)SpotID;
            v102 = clsQuestCheck___c_TypeInfo;
            if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
              v102 = clsQuestCheck___c_TypeInfo;
            }
            static_fields = v102->static_fields;
            _9__39_4 = static_fields->__9__39_4;
            if ( _9__39_4 )
              goto LABEL_58;
            if ( (BYTE3(v102->vtable._0_Equals.methodPtr) & 4) != 0 && !v102->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v102);
              static_fields = clsQuestCheck___c_TypeInfo->static_fields;
            }
            v104 = (Il2CppObject *)static_fields->__9;
            _9__39_4 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v100, v101);
            System_Action___ctor(_9__39_4, v104, Method_clsQuestCheck___c__CheckQuestPlayable_b__39_4__, 0LL);
            v94 = (System_Int32_array **)_9__39_4;
            v105 = clsQuestCheck___c_TypeInfo->static_fields;
            v105->__9__39_4 = _9__39_4;
            p__9__39_4 = (BattleServantConfConponent_o *)&v105->__9__39_4;
            goto LABEL_57;
          }
        }
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_4210843 )
        {
          sub_B0D8A4(&TerminalPramsManager_TypeInfo, v99);
          byte_4210843 = 1;
        }
        v106 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v106 = TerminalPramsManager_TypeInfo;
        }
        v106->static_fields->_QuestId_k__BackingField = questId;
        v107 = *(_QWORD *)(v51 + 32);
        if ( !byte_421088E )
        {
          sub_B0D8A4(&TerminalPramsManager_TypeInfo, v99);
          v106 = TerminalPramsManager_TypeInfo;
          byte_421088E = 1;
        }
        if ( (BYTE3(v106->vtable._0_Equals.methodPtr) & 4) != 0 && !v106->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v106);
          v106 = TerminalPramsManager_TypeInfo;
        }
        v106->static_fields->_EndTime_k__BackingField = v107;
        v106->static_fields->lastPlayQuestConsumeAp = v72;
        TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(0LL);
        SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( SpotID )
        {
          SpotID = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)SpotID,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( SpotID )
          {
            v108 = (UserServantMaster_o *)SpotID;
            UserServantMaster__getCount((UserServantMaster_o *)SpotID, &servantEquipSum[1], servantEquipSum, 1, 0LL);
            SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( SpotID )
            {
              v109 = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)SpotID,
                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
              if ( !UserServantMaster__CheckServantAdd(v108, 1, 0LL) )
              {
                SpotID = UserServantMaster__CheckEquipAdd(v108, 1, 1, 0LL);
                if ( (SpotID & 1) != 0 )
                {
                  SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !v97 )
                    goto LABEL_289;
                  v131 = (CommonUI_o *)SpotID;
                  v132 = servantEquipSum[0];
                  svtEquipKeep = v97->fields.svtEquipKeep;
                  SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
                  if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
                    SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
                  }
                  v134 = *(struct clsQuestCheck___c_StaticFields **)(SpotID + 184);
                  _9__39_1 = v134->__9__39_1;
                  if ( !_9__39_1 )
                  {
                    if ( (*(_BYTE *)(SpotID + 307) & 4) != 0 && !*(_DWORD *)(SpotID + 224) )
                    {
                      j_il2cpp_runtime_class_init_0(SpotID);
                      v134 = clsQuestCheck___c_TypeInfo->static_fields;
                    }
                    v135 = (Il2CppObject *)v134->__9;
                    _9__39_1 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                                                 ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                                                 v129,
                                                                                 v130);
                    ServantFrameShortDlgComponent_CallbackFunc___ctor(
                      _9__39_1,
                      v135,
                      Method_clsQuestCheck___c__CheckQuestPlayable_b__39_1__,
                      0LL);
                    v136 = clsQuestCheck___c_TypeInfo->static_fields;
                    v136->__9__39_1 = _9__39_1;
                    sub_B0D840(
                      (BattleServantConfConponent_o *)&v136->__9__39_1,
                      (System_Int32_array **)_9__39_1,
                      v137,
                      v138,
                      v139,
                      v140,
                      v141,
                      v142);
                  }
                  if ( !v131 )
                    goto LABEL_289;
                  v128 = 1;
                  v125 = v131;
                  v126 = v132;
                }
                else
                {
                  if ( !v109 )
                    goto LABEL_289;
                  if ( !UserCommandCodeMaster__CheckCommandCodeAdd(v109, 0, 0LL) )
                  {
                    SpotID = QuestEntity__GetConsumeType(v98, 0LL);
                    switch ( (int)SpotID )
                    {
                      case 1:
                        if ( !v97 )
                          goto LABEL_289;
                        if ( v72 <= UserGameEntity__getAct(v97, 0LL) )
                          goto LABEL_205;
                        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v162 = (RecoverDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                                       RecoverDlgComponent_CallbackFunc_TypeInfo,
                                                                       v160,
                                                                       v161);
                        RecoverDlgComponent_CallbackFunc___ctor(
                          v162,
                          (Il2CppObject *)v51,
                          Method_clsQuestCheck___c__DisplayClass39_0__CheckQuestPlayable_b__9__,
                          0LL);
                        if ( !Instance )
                          goto LABEL_289;
                        v163 = (CommonUI_o *)Instance;
                        v164 = v72;
                        v165 = v162;
                        v166 = 0;
                        goto LABEL_172;
                      case 2:
                        if ( !v97 )
                          goto LABEL_289;
                        if ( v72 <= UserGameEntity__getRp(v97, 0LL) )
                          goto LABEL_205;
                        v203 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v206 = (RecoverDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                                       RecoverDlgComponent_CallbackFunc_TypeInfo,
                                                                       v204,
                                                                       v205);
                        RecoverDlgComponent_CallbackFunc___ctor(
                          v206,
                          (Il2CppObject *)v51,
                          Method_clsQuestCheck___c__DisplayClass39_0__CheckQuestPlayable_b__10__,
                          0LL);
                        if ( !v203 )
                          goto LABEL_289;
                        CommonUI__OpenRpRecoverItemListDialog(v203, v72, v206, 0, 0LL);
                        return 0;
                      case 3:
                        ItemConsumeEntity = QuestEntity__getItemConsumeEntity(v98, 0LL);
                        SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !SpotID )
                          goto LABEL_289;
                        v168 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)SpotID,
                                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
                        SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !SpotID )
                          goto LABEL_289;
                        v169 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)SpotID,
                                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
                        SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
                        if ( !ItemConsumeEntity )
                          goto LABEL_205;
                        v170 = (System_String_o *)StringLiteral_1/*""*/;
                        if ( !QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL) )
                          goto LABEL_205;
                        v171 = 0;
                        str0 = v170;
                        v260 = 0;
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
                          if ( v171 >= itemIds->max_length )
                            goto LABEL_290;
                          if ( !v168 )
                            goto LABEL_289;
                          SpotID = (int64_t)UserItemMaster__GetEntity(v168, SpotID, itemIds->m_Items[v171 + 1], 0LL);
                          v173 = ItemConsumeEntity->fields.itemIds;
                          if ( !v173 )
                            goto LABEL_289;
                          if ( v171 >= v173->max_length )
                            goto LABEL_290;
                          if ( !v169 )
                            goto LABEL_289;
                          v174 = SpotID;
                          SpotID = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              v169,
                                              v173->m_Items[v171 + 1],
                                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                          if ( !SpotID )
                            goto LABEL_289;
                          v175 = SpotID;
                          if ( *(_DWORD *)(SpotID + 48) == 1 )
                          {
                            if ( !SelfUserGame )
                              goto LABEL_289;
                            klass = (int32_t)SelfUserGame[4].klass;
                          }
                          else if ( v174
                                 && (SpotID = ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0LL), (SpotID & 1) != 0) )
                          {
                            klass = *(_DWORD *)(v174 + 28);
                          }
                          else
                          {
                            klass = 0;
                          }
                          nums = ItemConsumeEntity->fields.nums;
                          if ( !nums )
                            goto LABEL_289;
                          if ( v171 >= nums->max_length )
                            goto LABEL_290;
                          if ( nums->m_Items[v171 + 1] > klass )
                          {
                            str0 = System_String__Concat_43852188(
                                     str0,
                                     (System_String_o *)StringLiteral_26/*"\n"*/,
                                     *(System_String_o **)(v175 + 24),
                                     0LL);
                            v260 = 1;
                          }
                          ++v171;
                        }
                        while ( QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, v171, 0LL) );
                        if ( (v260 & 1) == 0 )
                          goto LABEL_205;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v178 = LocalizationManager__Get((System_String_o *)StringLiteral_10971/*"QUEST_ITEM_COST_OVER"*/, 0LL);
                        v179 = System_String__Format(v178, (Il2CppObject *)str0, 0LL);
                        v180 = System_String__Concat_43849904(v179, (System_String_o *)StringLiteral_27/*"\n\n"*/, 0LL);
                        v181 = LocalizationManager__Get((System_String_o *)StringLiteral_2521/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
                        v182 = System_String__Concat_43849904(v180, v181, 0LL);
                        SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v185 = (CommonUI_o *)SpotID;
                        v186 = clsQuestCheck___c_TypeInfo;
                        if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
                          v186 = clsQuestCheck___c_TypeInfo;
                        }
                        v187 = v186->static_fields;
                        v188 = (System_String_o *)StringLiteral_1/*""*/;
                        _9__39_11 = v187->__9__39_11;
                        if ( _9__39_11 )
                          goto LABEL_287;
                        if ( (BYTE3(v186->vtable._0_Equals.methodPtr) & 4) != 0 && !v186->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v186);
                          v187 = clsQuestCheck___c_TypeInfo->static_fields;
                        }
                        v190 = (Il2CppObject *)v187->__9;
                        _9__39_11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v183, v184);
                        System_Action___ctor(
                          _9__39_11,
                          v190,
                          Method_clsQuestCheck___c__CheckQuestPlayable_b__39_11__,
                          0LL);
                        v197 = clsQuestCheck___c_TypeInfo->static_fields;
                        v197->__9__39_11 = _9__39_11;
                        p__9__39_11 = (BattleServantConfConponent_o *)&v197->__9__39_11;
                        goto LABEL_286;
                      case 4:
                        if ( !v97 )
                          goto LABEL_289;
                        if ( v72 <= UserGameEntity__getAct(v97, 0LL) )
                        {
                          v207 = QuestEntity__getItemConsumeEntity(v98, 0LL);
                          SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                          if ( SpotID )
                          {
                            v208 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)SpotID,
                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
                            SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                            if ( SpotID )
                            {
                              str0a = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)SpotID,
                                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
                              v261 = UserGameMaster__getSelfUserGame(0LL);
                              if ( !v207 )
                                goto LABEL_205;
                              v209 = (System_String_o *)StringLiteral_1/*""*/;
                              if ( !QuestConsumeItemEntity__IsAvailableAt(v207, 0, 0LL) )
                                goto LABEL_205;
                              v210 = 0;
                              v263 = v209;
                              v259 = 0;
                              do
                              {
                                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                }
                                SpotID = NetworkManager__get_UserId(0LL);
                                v211 = v207->fields.itemIds;
                                if ( !v211 )
                                  goto LABEL_289;
                                if ( v210 >= v211->max_length )
                                  goto LABEL_290;
                                if ( !v208 )
                                  goto LABEL_289;
                                SpotID = (int64_t)UserItemMaster__GetEntity(v208, SpotID, v211->m_Items[v210 + 1], 0LL);
                                v212 = v207->fields.itemIds;
                                if ( !v212 )
                                  goto LABEL_289;
                                if ( v210 >= v212->max_length )
                                  goto LABEL_290;
                                v213 = SpotID;
                                SpotID = (int64_t)str0a;
                                if ( !str0a )
                                  goto LABEL_289;
                                SpotID = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)str0a,
                                                    v212->m_Items[v210 + 1],
                                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                                if ( !SpotID )
                                  goto LABEL_289;
                                v214 = SpotID;
                                if ( *(_DWORD *)(SpotID + 48) == 1 )
                                {
                                  if ( !v261 )
                                    goto LABEL_289;
                                  qp = v261->fields.qp;
                                }
                                else if ( v213
                                       && (SpotID = ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0LL), (SpotID & 1) != 0) )
                                {
                                  qp = *(_DWORD *)(v213 + 28);
                                }
                                else
                                {
                                  qp = 0;
                                }
                                v216 = v207->fields.nums;
                                if ( !v216 )
                                  goto LABEL_289;
                                if ( v210 >= v216->max_length )
                                {
LABEL_290:
                                  v258 = sub_B0D9A8(SpotID);
                                  sub_B0D948(v258, 0LL);
                                }
                                if ( v216->m_Items[v210 + 1] > qp )
                                {
                                  v263 = System_String__Concat_43852188(
                                           v263,
                                           (System_String_o *)StringLiteral_26/*"\n"*/,
                                           *(System_String_o **)(v214 + 24),
                                           0LL);
                                  v259 = 1;
                                }
                                ++v210;
                              }
                              while ( QuestConsumeItemEntity__IsAvailableAt(v207, v210, 0LL) );
                              if ( (v259 & 1) != 0 )
                              {
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v248 = LocalizationManager__Get((System_String_o *)StringLiteral_10971/*"QUEST_ITEM_COST_OVER"*/, 0LL);
                                v249 = System_String__Format(v248, (Il2CppObject *)v263, 0LL);
                                v250 = System_String__Concat_43849904(v249, (System_String_o *)StringLiteral_27/*"\n\n"*/, 0LL);
                                v251 = LocalizationManager__Get((System_String_o *)StringLiteral_2521/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
                                v182 = System_String__Concat_43849904(v250, v251, 0LL);
                                SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                v185 = (CommonUI_o *)SpotID;
                                v254 = clsQuestCheck___c_TypeInfo;
                                if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
                                  v254 = clsQuestCheck___c_TypeInfo;
                                }
                                v255 = v254->static_fields;
                                v188 = (System_String_o *)StringLiteral_1/*""*/;
                                _9__39_11 = v255->__9__39_13;
                                if ( !_9__39_11 )
                                {
                                  if ( (BYTE3(v254->vtable._0_Equals.methodPtr) & 4) != 0 && !v254->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(v254);
                                    v255 = clsQuestCheck___c_TypeInfo->static_fields;
                                  }
                                  v256 = (Il2CppObject *)v255->__9;
                                  _9__39_11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v252, v253);
                                  System_Action___ctor(
                                    _9__39_11,
                                    v256,
                                    Method_clsQuestCheck___c__CheckQuestPlayable_b__39_13__,
                                    0LL);
                                  v257 = clsQuestCheck___c_TypeInfo->static_fields;
                                  v257->__9__39_13 = _9__39_11;
                                  p__9__39_11 = (BattleServantConfConponent_o *)&v257->__9__39_13;
LABEL_286:
                                  sub_B0D840(
                                    p__9__39_11,
                                    (System_Int32_array **)_9__39_11,
                                    v191,
                                    v192,
                                    v193,
                                    v194,
                                    v195,
                                    v196);
                                }
LABEL_287:
                                if ( v185 )
                                {
                                  CommonUI__OpenNotificationDialog(
                                    v185,
                                    v188,
                                    v182,
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
                                SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                if ( SpotID )
                                {
                                  SpotID = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)SpotID,
                                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarMaster___);
                                  if ( SpotID )
                                  {
                                    v217 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)SpotID,
                                             v266,
                                             (const MethodInfo_2669BD4 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
                                    if ( v217 && WarEntity__IsFolder(v217, 0LL) )
                                    {
                                      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                      }
                                      if ( !byte_4210847 )
                                      {
                                        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v218);
                                        byte_4210847 = 1;
                                      }
                                      v219 = TerminalPramsManager_TypeInfo;
                                      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                        v219 = TerminalPramsManager_TypeInfo;
                                      }
                                      v220 = 3;
                                    }
                                    else
                                    {
                                      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                      }
                                      if ( !byte_4210847 )
                                      {
                                        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v218);
                                        byte_4210847 = 1;
                                      }
                                      v219 = TerminalPramsManager_TypeInfo;
                                      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                        v219 = TerminalPramsManager_TypeInfo;
                                      }
                                      v220 = 2;
                                    }
                                    v219->static_fields->_DispState_k__BackingField = v220;
                                    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                    }
                                    if ( !byte_421084A )
                                    {
                                      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v218);
                                      byte_421084A = 1;
                                    }
                                    v221 = TerminalPramsManager_TypeInfo;
                                    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                      v221 = TerminalPramsManager_TypeInfo;
                                    }
                                    v221->static_fields->_IsDoneShortcut_k__BackingField = 0;
                                    if ( !byte_4210844 )
                                    {
                                      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v218);
                                      v221 = TerminalPramsManager_TypeInfo;
                                      byte_4210844 = 1;
                                    }
                                    if ( (BYTE3(v221->vtable._0_Equals.methodPtr) & 4) != 0 && !v221->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(v221);
                                      v221 = TerminalPramsManager_TypeInfo;
                                    }
                                    v221->static_fields->_PhaseCnt_k__BackingField = v267;
                                    if ( !byte_4210874 )
                                    {
                                      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v218);
                                      v221 = TerminalPramsManager_TypeInfo;
                                      byte_4210874 = 1;
                                    }
                                    if ( (BYTE3(v221->vtable._0_Equals.methodPtr) & 4) != 0 )
                                    {
                                      v222 = v268;
                                      if ( !v221->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(v221);
                                        v221 = TerminalPramsManager_TypeInfo;
                                      }
                                    }
                                    else
                                    {
                                      v222 = v268;
                                    }
                                    v221->static_fields->_SpotId_k__BackingField = v222;
                                    if ( !byte_4210841 )
                                    {
                                      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v218);
                                      v221 = TerminalPramsManager_TypeInfo;
                                      byte_4210841 = 1;
                                    }
                                    if ( (BYTE3(v221->vtable._0_Equals.methodPtr) & 4) != 0 && !v221->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(v221);
                                      v221 = TerminalPramsManager_TypeInfo;
                                    }
                                    v221->static_fields->_WarId_k__BackingField = v266;
                                    SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                    if ( SpotID )
                                    {
                                      SpotID = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)SpotID,
                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GachaMaster___);
                                      if ( SpotID )
                                      {
                                        VaildPayType = GachaMaster__getVaildPayType((GachaMaster_o *)SpotID, 0LL);
                                        if ( !byte_4210875 )
                                        {
                                          sub_B0D8A4(&TerminalPramsManager_TypeInfo, v223);
                                          byte_4210875 = 1;
                                        }
                                        v225 = TerminalPramsManager_TypeInfo;
                                        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                        {
                                          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                          v225 = TerminalPramsManager_TypeInfo;
                                        }
                                        v225->static_fields->_SummonType_k__BackingField = VaildPayType;
                                        SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                        if ( SpotID )
                                        {
                                          SpotID = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)SpotID,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMessageMaster___);
                                          v226 = *v59;
                                          if ( *v59 )
                                          {
                                            v227 = (QuestMessageMaster_o *)SpotID;
                                            PhaseMax = MapControl_QuestInfo__GetPhaseMax(v226, 0LL);
                                            SpotID = UnityEngine_Mathf__Min_40819044(v267 + 1, PhaseMax, 0LL);
                                            if ( v227 )
                                            {
                                              v157 = 1;
                                              ValidMessage = QuestMessageMaster__GetValidMessage(
                                                               v227,
                                                               questId,
                                                               SpotID,
                                                               1,
                                                               0LL);
                                              if ( !ValidMessage )
                                                return v157;
                                              v230 = ValidMessage;
                                              v231 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                              {
                                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                              }
                                              v232 = LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10973/*"QUEST_MESSAGE_DLG_DECIDE"*/,
                                                       0LL);
                                              SpotID = (int64_t)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_10972/*"QUEST_MESSAGE_DLG_CANCEL"*/,
                                                                  0LL);
                                              v235 = (System_String_o *)SpotID;
                                              v236 = clsQuestCheck___c_TypeInfo;
                                              if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
                                              {
                                                j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
                                                v236 = clsQuestCheck___c_TypeInfo;
                                              }
                                              v237 = v236->static_fields;
                                              _9__39_2 = v237->__9__39_2;
                                              v239 = (System_String_o *)StringLiteral_1/*""*/;
                                              if ( !_9__39_2 )
                                              {
                                                if ( (BYTE3(v236->vtable._0_Equals.methodPtr) & 4) != 0
                                                  && !v236->_2.cctor_finished )
                                                {
                                                  j_il2cpp_runtime_class_init_0(v236);
                                                  v237 = clsQuestCheck___c_TypeInfo->static_fields;
                                                }
                                                v240 = (Il2CppObject *)v237->__9;
                                                _9__39_2 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(
                                                                                                    CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                                                    v233,
                                                                                                    v234);
                                                CommonConfirmDialog_ClickDelegate___ctor(
                                                  _9__39_2,
                                                  v240,
                                                  Method_clsQuestCheck___c__CheckQuestPlayable_b__39_2__,
                                                  0LL);
                                                v241 = clsQuestCheck___c_TypeInfo->static_fields;
                                                v241->__9__39_2 = _9__39_2;
                                                sub_B0D840(
                                                  (BattleServantConfConponent_o *)&v241->__9__39_2,
                                                  (System_Int32_array **)_9__39_2,
                                                  v242,
                                                  v243,
                                                  v244,
                                                  v245,
                                                  v246,
                                                  v247);
                                              }
                                              if ( v231 )
                                              {
                                                v157 = 1;
                                                CommonUI__OpenConfirmDialog_17016196(
                                                  v231,
                                                  v239,
                                                  v230,
                                                  v232,
                                                  v235,
                                                  _9__39_2,
                                                  0,
                                                  1,
                                                  0,
                                                  0LL);
                                                return v157;
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
                          v199 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          v202 = (RecoverDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                                         RecoverDlgComponent_CallbackFunc_TypeInfo,
                                                                         v200,
                                                                         v201);
                          RecoverDlgComponent_CallbackFunc___ctor(
                            v202,
                            (Il2CppObject *)v51,
                            Method_clsQuestCheck___c__DisplayClass39_0__CheckQuestPlayable_b__12__,
                            0LL);
                          if ( v199 )
                          {
                            v166 = 1;
                            v163 = (CommonUI_o *)v199;
                            v164 = v72;
                            v165 = v202;
LABEL_172:
                            CommonUI__OpenApRecoverItemListDialog(v163, v164, v165, v166, 0LL);
                            return 0;
                          }
                        }
                        break;
                      default:
                        goto LABEL_205;
                    }
                    goto LABEL_289;
                  }
                  Count = UserCommandCodeMaster__getCount(v109, 0LL);
                  SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !v97 )
                    goto LABEL_289;
                  v146 = (CommonUI_o *)SpotID;
                  if ( !byte_421088F )
                  {
                    sub_B0D8A4(&BalanceConfig_TypeInfo, v144);
                    byte_421088F = 1;
                  }
                  v147 = BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v147 = BalanceConfig_TypeInfo;
                  }
                  SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
                  svtEquipKeep = v147->static_fields->CommandCodeFrameMax;
                  if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
                    SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
                  }
                  v148 = *(struct clsQuestCheck___c_StaticFields **)(SpotID + 184);
                  _9__39_1 = v148->__9__39_7;
                  if ( !_9__39_1 )
                  {
                    if ( (*(_BYTE *)(SpotID + 307) & 4) != 0 && !*(_DWORD *)(SpotID + 224) )
                    {
                      j_il2cpp_runtime_class_init_0(SpotID);
                      v148 = clsQuestCheck___c_TypeInfo->static_fields;
                    }
                    v149 = (Il2CppObject *)v148->__9;
                    _9__39_1 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                                                 ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                                                 v144,
                                                                                 v145);
                    ServantFrameShortDlgComponent_CallbackFunc___ctor(
                      _9__39_1,
                      v149,
                      Method_clsQuestCheck___c__CheckQuestPlayable_b__39_7__,
                      0LL);
                    v150 = clsQuestCheck___c_TypeInfo->static_fields;
                    v150->__9__39_7 = _9__39_1;
                    sub_B0D840(
                      (BattleServantConfConponent_o *)&v150->__9__39_7,
                      (System_Int32_array **)_9__39_1,
                      v151,
                      v152,
                      v153,
                      v154,
                      v155,
                      v156);
                  }
                  if ( !v146 )
                    goto LABEL_289;
                  v128 = 2;
                  v125 = v146;
                  v126 = Count;
                }
                v127 = svtEquipKeep;
                goto LABEL_119;
              }
              SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( v97 )
              {
                v112 = (CommonUI_o *)SpotID;
                v113 = servantEquipSum[1];
                svtKeep = v97->fields.svtKeep;
                SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
                if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
                  SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
                }
                v115 = *(struct clsQuestCheck___c_StaticFields **)(SpotID + 184);
                _9__39_1 = v115->__9__39_0;
                if ( !_9__39_1 )
                {
                  if ( (*(_BYTE *)(SpotID + 307) & 4) != 0 && !*(_DWORD *)(SpotID + 224) )
                  {
                    j_il2cpp_runtime_class_init_0(SpotID);
                    v115 = clsQuestCheck___c_TypeInfo->static_fields;
                  }
                  v117 = (Il2CppObject *)v115->__9;
                  _9__39_1 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                                               ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                                               v110,
                                                                               v111);
                  ServantFrameShortDlgComponent_CallbackFunc___ctor(
                    _9__39_1,
                    v117,
                    Method_clsQuestCheck___c__CheckQuestPlayable_b__39_0__,
                    0LL);
                  v118 = clsQuestCheck___c_TypeInfo->static_fields;
                  v118->__9__39_0 = _9__39_1;
                  sub_B0D840(
                    (BattleServantConfConponent_o *)&v118->__9__39_0,
                    (System_Int32_array **)_9__39_1,
                    v119,
                    v120,
                    v121,
                    v122,
                    v123,
                    v124);
                }
                if ( v112 )
                {
                  v125 = v112;
                  v126 = v113;
                  v127 = svtKeep;
                  v128 = 0;
LABEL_119:
                  CommonUI__OpenSvtFrameShortDlg(v125, v126, v127, v128, 1, _9__39_1, 0, 0LL);
                  goto LABEL_120;
                }
              }
            }
          }
        }
      }
    }
LABEL_289:
    sub_B0D97C(SpotID);
  }
  v79 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v80 = LocalizationManager__Get((System_String_o *)StringLiteral_10998/*"QUEST_TIME_OVER"*/, 0LL);
  SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v83 = (CommonUI_o *)SpotID;
  v84 = clsQuestCheck___c_TypeInfo;
  if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
    v84 = clsQuestCheck___c_TypeInfo;
  }
  v85 = v84->static_fields;
  _9__39_4 = v85->__9__39_3;
  if ( _9__39_4 )
    goto LABEL_58;
  if ( (BYTE3(v84->vtable._0_Equals.methodPtr) & 4) != 0 && !v84->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v84);
    v85 = clsQuestCheck___c_TypeInfo->static_fields;
  }
  v87 = (Il2CppObject *)v85->__9;
  _9__39_4 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v81, v82);
  System_Action___ctor(_9__39_4, v87, Method_clsQuestCheck___c__CheckQuestPlayable_b__39_3__, 0LL);
  v94 = (System_Int32_array **)_9__39_4;
  v95 = clsQuestCheck___c_TypeInfo->static_fields;
  v95->__9__39_3 = _9__39_4;
  p__9__39_4 = (BattleServantConfConponent_o *)&v95->__9__39_3;
LABEL_57:
  sub_B0D840(p__9__39_4, v94, v88, v89, v90, v91, v92, v93);
LABEL_58:
  if ( !v83 )
    goto LABEL_289;
  CommonUI__OpenNotificationDialog(v83, v79, v80, _9__39_4, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
LABEL_120:
  SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
  struct System_Collections_Generic_List_QuestReleaseEntity__o *qrs; // x0
  bool IsOpenByTime; // w8
  const MethodInfo *v18; // x4
  int v19; // w19
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-48h] BYREF
  WarEntity_o *v22; // [xsp+20h] [xbp-30h] BYREF
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4213FD5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestMaster___, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestReleaseMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserQuestMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v12);
    sub_B0D8A4(&NetworkManager_TypeInfo, v13);
    byte_4213FD5 = 1;
  }
  v22 = 0LL;
  entity = 0LL;
  memset(&v21, 0, sizeof(v21));
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, method) )
    goto LABEL_31;
  v22 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserQuestMaster___);
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
  UserId = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !UserId )
LABEL_35:
    sub_B0D97C(UserId);
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          UserId,
          &v22,
          questId,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
LABEL_31:
    LOBYTE(qrs) = 0;
    return (char)qrs;
  }
  UserId = (DataMasterBase_WarMaster__WarEntity__int__o *)v22;
  if ( !v22 )
    goto LABEL_35;
  IsOpenByTime = QuestEntity__IsOpenByTime((QuestEntity_o *)v22, 0, 0LL);
  LOBYTE(qrs) = 0;
  if ( !IsOpenByTime )
    return (char)qrs;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserId = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !UserId )
    goto LABEL_35;
  QuestReleaseMaster__getListByQuestID_30578992((QuestReleaseMaster_o *)UserId, questId, &this->fields.qrs, 0LL);
  qrs = this->fields.qrs;
  if ( qrs )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)qrs,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
    {
      if ( !clsQuestCheck__IsQuestRelease_23800788(this, (QuestReleaseEntity_o *)v21.fields.current, -1, 0LL, v18) )
      {
        v19 = 4;
        goto LABEL_34;
      }
    }
    v19 = 2;
LABEL_34:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    LOBYTE(qrs) = v19 != 4;
  }
  return (char)qrs;
}


void __fastcall clsQuestCheck__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  clsQuestCheck_c *v3; // x0
  System_String_o *KEY_QUEST_START_EFFECT; // x19

  if ( (byte_4213FD2 & 1) == 0 )
  {
    sub_B0D8A4(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_B0D8A4(&clsQuestCheck_TypeInfo, v2);
    byte_4213FD2 = 1;
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
  bool v7; // w8
  int32_t result; // w0
  __int64 v9; // x1
  TerminalPramsManager_c *v10; // x0

  if ( (byte_4213FE3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, is_quest_after_action);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v5);
    byte_4213FE3 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v7 = AvalonSceneManager__checkNowScene(Instance, 34, 0LL);
  result = -1;
  if ( !v7 || !is_quest_after_action )
    return result;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
LABEL_19:
    sub_B0D97C(Instance);
  if ( !QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0LL) )
    return -1;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v9);
    byte_4210852 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  return v10->static_fields->_QuestId_k__BackingField;
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
  const MethodInfo *v13; // x2
  struct System_String_o *MasterName_k__BackingField; // x8
  QuestGroupMaster_o *v15; // x21
  unsigned __int64 v16; // x23
  int32_t v17; // w22
  __int64 v19; // x0

  if ( (byte_4213FEC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestGroupMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&int___TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4213FEC = 1;
  }
  if ( eventId <= 0 )
    return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  v11 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&eventId,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_20;
  Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)QuestGroupMaster__GetQuestIdListByEventId(
                                                           Master_WarQuestSelectionMaster,
                                                           eventId,
                                                           0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_20;
  MasterName_k__BackingField = Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
  v15 = Master_WarQuestSelectionMaster;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v16 = 0LL;
    do
    {
      if ( v16 >= (unsigned int)MasterName_k__BackingField )
      {
        v19 = sub_B0D9A8(Master_WarQuestSelectionMaster);
        sub_B0D948(v19, 0LL);
      }
      v17 = *((_DWORD *)&v15->fields.list + v16);
      Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)clsQuestCheck__CheckQuestPlayableNow(this, v17, v13);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        if ( !v11 )
          goto LABEL_20;
        System_Collections_Generic_List_int___Add(
          v11,
          v17,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(MasterName_k__BackingField) = v15->fields._MasterName_k__BackingField;
      ++v16;
    }
    while ( (__int64)v16 < (int)MasterName_k__BackingField );
  }
  if ( !v11 )
LABEL_20:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_String_array *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  System_Converter_BattleActionData_HealData__int__o *v22; // x22
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array *v40; // x19
  System_Int32_array **v41; // x20
  TerminalPramsManager_c *v42; // x0
  BattleServantConfConponent_o *v43; // x0
  System_Int32_array **v44; // x19
  TerminalPramsManager_c *v45; // x0
  BattleServantConfConponent_o *p_ClearEventQuestIds_k__BackingField; // x0
  __int64 v48; // x0

  if ( (byte_4213FEB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_ConvertAll_string__int___, *(_QWORD *)&eventId);
    sub_B0D8A4(&char___TypeInfo, v5);
    sub_B0D8A4(&Method_System_Converter_string__int___ctor__, v6);
    sub_B0D8A4(&System_Converter_string__int__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Except_int___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_B0D8A4(&int___TypeInfo, v10);
    sub_B0D8A4(&Method_System_Int32_Parse__, v11);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_1/*""*/, v13);
    byte_4213FEB = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AD6 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4211AD6 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  if ( System_String__IsNullOrEmpty(v14->static_fields->_ClearEventQuestIds_k__BackingField, 0LL) )
    return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AD6 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v15);
    byte_4211AD6 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  ClearEventQuestIds_k__BackingField = v16->static_fields->_ClearEventQuestIds_k__BackingField;
  v18 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !v18 )
    goto LABEL_45;
  if ( !v18->max_length )
  {
    v48 = sub_B0D9A8(v18);
    sub_B0D948(v48, 0LL);
  }
  v18->m_Items[2] = 44;
  if ( !ClearEventQuestIds_k__BackingField
    || (v19 = System_String__Split(ClearEventQuestIds_k__BackingField, v18, 0LL),
        v22 = (System_Converter_BattleActionData_HealData__int__o *)sub_B0D974(
                                                                      System_Converter_string__int__TypeInfo,
                                                                      v20,
                                                                      v21),
        System_Converter_BattleActionData_HealData__int____ctor(
          v22,
          0LL,
          Method_System_Int32_Parse__,
          (const MethodInfo_2665D70 *)Method_System_Converter_string__int___ctor__),
        (v18 = (System_Char_array *)System_Array__ConvertAll_string__int_(
                                      v19,
                                      (System_Converter_TInput__TOutput__o *)v22,
                                      (const MethodInfo_1F677F0 *)Method_System_Array_ConvertAll_string__int___)) == 0LL) )
  {
LABEL_45:
    sub_B0D97C(v18);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)v18;
  if ( !*(_QWORD *)&v18->max_length )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    v44 = (System_Int32_array **)StringLiteral_1/*""*/;
    if ( !byte_4211ACC )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v23);
      byte_4211ACC = 1;
    }
    v45 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v45 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (BattleServantConfConponent_o *)&v45->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = (BattleServantConfConponent_c *)v44;
    sub_B0D840(p_ClearEventQuestIds_k__BackingField, v44, v24, v25, v26, v27, v28, v29);
    TerminalPramsManager__ClearEventQuestIds_SaveData(0LL);
    return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)clsQuestCheck__GetEventQuestIdListPlayable(
                                                               this,
                                                               eventId,
                                                               (const MethodInfo *)v24);
  v32 = System_Linq_Enumerable__Except_int_(
          v31,
          v30,
          (const MethodInfo_1B49E80 *)Method_System_Linq_Enumerable_Except_int___);
  v40 = System_Linq_Enumerable__ToArray_int_(
          v32,
          (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  v41 = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( !byte_4211ACC )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v33);
    byte_4211ACC = 1;
  }
  v42 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v42 = TerminalPramsManager_TypeInfo;
  }
  v43 = (BattleServantConfConponent_o *)&v42->static_fields->_ClearEventQuestIds_k__BackingField;
  v43->klass = (BattleServantConfConponent_c *)v41;
  sub_B0D840(v43, v41, v34, v35, v36, v37, v38, v39);
  TerminalPramsManager__ClearEventQuestIds_SaveData(0LL);
  return v40;
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
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x21
  _BOOL8 v16; // x0
  WarEntity_o *Entity; // x0
  System_Collections_Generic_List_Enumerator_int__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4213FE9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, qids);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestEntity__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_QuestEntity__TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4213FE9 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_QuestEntity__TypeInfo,
                                                                                                  qids,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___),
        !qids) )
  {
    sub_B0D97C(Instance);
  }
  v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    qids,
    (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v20,
            (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v16 )
      break;
    if ( !v15 )
      sub_B0D97C(v16);
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v15,
               v20.fields.current,
               (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    if ( !v13 )
      sub_B0D97C(Entity);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v13,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_QuestEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v20,
    (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  QuestReleaseEntity_array *ListByType; // x24
  __int64 v26; // x1
  __int64 v27; // x2
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v29; // x25
  unsigned int v30; // w28
  QuestReleaseEntity_o *v31; // x8
  int32_t questId; // w26
  const MethodInfo *v33; // x4
  System_Collections_Generic_List_int__o *v34; // x23
  const MethodInfo *v35; // x4
  unsigned int datalist; // w8
  int v37; // w25
  unsigned __int64 v38; // x20
  int32_t v39; // w26
  int v40; // w8
  __int64 v42; // x0
  _BYTE v43[32]; // [xsp+8h] [xbp-98h] BYREF
  int v44; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_int__o v45; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4213FE8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__RemoveAt__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor___67884944, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4213FE8 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  v44 = 0;
  v23 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&svt_id,
                                                    *(_QWORD *)&oldFriendShipRank);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_36;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 9, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_36;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v29 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v30 = 0;
    while ( 1 )
    {
      if ( v30 >= max_length )
      {
        v42 = sub_B0D9A8(Instance);
        sub_B0D948(v42, 0LL);
      }
      v31 = ListByType->m_Items[v30];
      if ( !v31 )
        break;
      if ( v31->fields.targetId == svt_id )
      {
        if ( !v29 )
          break;
        questId = v31->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v29,
                                      questId,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, questId, oldFriendShipRank, 9, v33);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v23 )
              break;
            System_Collections_Generic_List_int___Add(
              v23,
              questId,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v30 >= max_length )
        goto LABEL_19;
    }
LABEL_36:
    sub_B0D97C(Instance);
  }
LABEL_19:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v34 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v26, v27);
    System_Collections_Generic_List_int____ctor_50000796(
      v34,
      (System_Collections_Generic_IEnumerable_T__o *)v23,
      (const MethodInfo_2FAF39C *)Method_System_Collections_Generic_List_int___ctor___67884944);
    Instance = (DataManager_o *)clsQuestCheck__GetReleaseQuestIdByServantFriendShip(this, svt_id, -1, type_flag, v35);
    if ( !Instance )
      goto LABEL_36;
    datalist = (unsigned int)Instance->fields.datalist;
    v23 = (System_Collections_Generic_List_int__o *)Instance;
    if ( (int)(datalist - 1) >= 0 )
    {
      v37 = 0;
      v38 = (int)(datalist - 1);
      while ( 1 )
      {
        if ( v38 >= datalist )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( !v34 )
          goto LABEL_36;
        v39 = v23->fields._items->m_Items[v38 + 1];
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v43,
          v34,
          (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v45 = *(System_Collections_Generic_List_Enumerator_int__o *)v43;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v45,
                  (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v39 == v45.fields.current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v23,
              v38,
              (const MethodInfo_2FB1BB8 *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        *(_DWORD *)&v43[4 * v37 + 24] = 226;
        v37 = ++v44;
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v45,
          (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( v37 )
        {
          v40 = v37 - 1;
          if ( *(_DWORD *)&v43[4 * v37 + 20] == 226 )
          {
            --v37;
            v44 = v40;
          }
        }
        if ( (--v38 & 0x80000000) != 0 )
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

  return clsQuestCheck__GetReleaseQuestIdByServantLimit_23804500(this, svt_id, oldLimitCount, 238, v4);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit_23804500(
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
  QuestReleaseEntity_array *ListByType; // x24
  __int64 v26; // x1
  __int64 v27; // x2
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v29; // x25
  unsigned int v30; // w28
  QuestReleaseEntity_o *v31; // x8
  int32_t questId; // w26
  const MethodInfo *v33; // x4
  System_Collections_Generic_List_int__o *v34; // x23
  const MethodInfo *v35; // x4
  unsigned int datalist; // w8
  int v37; // w25
  unsigned __int64 v38; // x20
  int32_t v39; // w26
  int v40; // w8
  __int64 v42; // x0
  _BYTE v43[32]; // [xsp+8h] [xbp-98h] BYREF
  int v44; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_int__o v45; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4213FE5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__RemoveAt__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor___67884944, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4213FE5 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  v44 = 0;
  v23 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&svt_id,
                                                    *(_QWORD *)&oldLimitCount);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_36;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_36;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v29 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v30 = 0;
    while ( 1 )
    {
      if ( v30 >= max_length )
      {
        v42 = sub_B0D9A8(Instance);
        sub_B0D948(v42, 0LL);
      }
      v31 = ListByType->m_Items[v30];
      if ( !v31 )
        break;
      if ( v31->fields.targetId == svt_id )
      {
        if ( !v29 )
          break;
        questId = v31->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v29,
                                      questId,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, questId, oldLimitCount, 7, v33);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v23 )
              break;
            System_Collections_Generic_List_int___Add(
              v23,
              questId,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v30 >= max_length )
        goto LABEL_19;
    }
LABEL_36:
    sub_B0D97C(Instance);
  }
LABEL_19:
  if ( (oldLimitCount & 0x80000000) == 0 )
  {
    v34 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v26, v27);
    System_Collections_Generic_List_int____ctor_50000796(
      v34,
      (System_Collections_Generic_IEnumerable_T__o *)v23,
      (const MethodInfo_2FAF39C *)Method_System_Collections_Generic_List_int___ctor___67884944);
    Instance = (DataManager_o *)clsQuestCheck__GetReleaseQuestIdByServantLimit_23804500(
                                  this,
                                  svt_id,
                                  -1,
                                  type_flag,
                                  v35);
    if ( !Instance )
      goto LABEL_36;
    datalist = (unsigned int)Instance->fields.datalist;
    v23 = (System_Collections_Generic_List_int__o *)Instance;
    if ( (int)(datalist - 1) >= 0 )
    {
      v37 = 0;
      v38 = (int)(datalist - 1);
      while ( 1 )
      {
        if ( v38 >= datalist )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( !v34 )
          goto LABEL_36;
        v39 = v23->fields._items->m_Items[v38 + 1];
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v43,
          v34,
          (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v45 = *(System_Collections_Generic_List_Enumerator_int__o *)v43;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v45,
                  (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v39 == v45.fields.current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v23,
              v38,
              (const MethodInfo_2FB1BB8 *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        *(_DWORD *)&v43[4 * v37 + 24] = 225;
        v37 = ++v44;
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v45,
          (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( v37 )
        {
          v40 = v37 - 1;
          if ( *(_DWORD *)&v43[4 * v37 + 20] == 225 )
          {
            --v37;
            v44 = v40;
          }
        }
        if ( (--v38 & 0x80000000) != 0 )
          return v23;
        datalist = v23->fields._size;
      }
    }
  }
  return v23;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit_23805484(
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
  QuestReleaseEntity_array *ListByType; // x25
  __int64 v25; // x1
  __int64 v26; // x2
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x26
  unsigned int v29; // w21
  QuestReleaseEntity_o *v30; // x8
  int32_t questId; // w27
  const MethodInfo *v32; // x4
  System_Collections_Generic_List_int__o *v33; // x24
  int v34; // w8
  __int64 v35; // x28
  QuestReleaseEntity_o *v36; // x8
  int32_t v37; // w27
  const MethodInfo *v38; // x4
  unsigned int size; // w8
  int v40; // w26
  unsigned __int64 v41; // x20
  int32_t v42; // w25
  int v43; // w8
  __int64 v45; // x0
  _BYTE v48[32]; // [xsp+18h] [xbp-98h] BYREF
  int v49; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_int__o v50; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4213FE6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__RemoveAt__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v19);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v20);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4213FE6 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  v49 = 0;
  v22 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&svt_id,
                                                    *(_QWORD *)&oldLimitCount);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_47;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_47;
  max_length = ListByType->max_length;
  v28 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  if ( max_length >= 1 )
  {
    v29 = 0;
    while ( v29 < max_length )
    {
      v30 = ListByType->m_Items[v29];
      if ( !v30 )
        goto LABEL_47;
      if ( v30->fields.targetId == svt_id )
      {
        if ( !v28 )
          goto LABEL_47;
        questId = v30->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v28,
                                      questId,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_47;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, questId, oldLimitCount, 7, v32);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v22 )
              goto LABEL_47;
            System_Collections_Generic_List_int___Add(
              v22,
              questId,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v29 >= max_length )
        goto LABEL_19;
    }
LABEL_48:
    v45 = sub_B0D9A8(Instance);
    sub_B0D948(v45, 0LL);
  }
LABEL_19:
  v33 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v25, v26);
  System_Collections_Generic_List_int____ctor(
    v33,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v34 = ListByType->max_length;
  if ( v34 >= 1 )
  {
    v35 = 0LL;
    while ( (unsigned int)v35 < v34 )
    {
      v36 = ListByType->m_Items[v35];
      if ( !v36 )
        goto LABEL_47;
      if ( v36->fields.targetId == svt_id )
      {
        if ( !v28 )
          goto LABEL_47;
        v37 = v36->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v28,
                                      v37,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_47;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, v37, newLimitCount, 7, v38);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v33 )
              goto LABEL_47;
            System_Collections_Generic_List_int___Add(
              v33,
              v37,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      v34 = ListByType->max_length;
      if ( (int)++v35 >= v34 )
        goto LABEL_31;
    }
    goto LABEL_48;
  }
LABEL_31:
  if ( !v33 )
LABEL_47:
    sub_B0D97C(Instance);
  size = v33->fields._size;
  if ( (int)(size - 1) >= 0 )
  {
    v40 = 0;
    v41 = (int)(size - 1);
    while ( 1 )
    {
      if ( v41 >= size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( !v22 )
        goto LABEL_47;
      v42 = v33->fields._items->m_Items[v41 + 1];
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v48,
        v22,
        (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v50 = *(System_Collections_Generic_List_Enumerator_int__o *)v48;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v50,
                (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        if ( v42 == v50.fields.current )
        {
          System_Collections_Generic_List_int___RemoveAt(
            v33,
            v41,
            (const MethodInfo_2FB1BB8 *)Method_System_Collections_Generic_List_int__RemoveAt__);
          break;
        }
      }
      *(_DWORD *)&v48[4 * v40 + 24] = 309;
      v40 = ++v49;
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v50,
        (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      if ( v40 )
      {
        v43 = v40 - 1;
        if ( *(_DWORD *)&v48[4 * v40 + 20] == 309 )
        {
          --v40;
          v49 = v43;
        }
      }
      if ( (--v41 & 0x80000000) != 0 )
        return v33;
      size = v33->fields._size;
    }
  }
  return v33;
}


System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLv(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLv,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__GetReleaseQuestIdByServantLv_23803996(this, svt_id, oldLv, 238, v4);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLv_23803996(
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
  QuestReleaseEntity_array *ListByType; // x24
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x25
  unsigned int v20; // w27
  QuestReleaseEntity_o *v21; // x8
  int32_t questId; // w26
  const MethodInfo *v23; // x4
  __int64 v25; // x0

  if ( (byte_4213FE4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4213FE4 = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&svt_id,
                                                    *(_QWORD *)&oldLv);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_20;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 6, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_20;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= max_length )
      {
        v25 = sub_B0D9A8(Instance);
        sub_B0D948(v25, 0LL);
      }
      v21 = ListByType->m_Items[v20];
      if ( !v21 )
        break;
      if ( v21->fields.targetId == svt_id )
      {
        if ( !v19 )
          break;
        questId = v21->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v19,
                                      questId,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, questId, oldLv, 6, v23);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v15 )
              break;
            System_Collections_Generic_List_int___Add(
              v15,
              questId,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v20 >= max_length )
        return v15;
    }
LABEL_20:
    sub_B0D97C(Instance);
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
  DataManager_o *v20; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  QuestReleaseMaster_o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  int datalist; // w8
  DataManager_o *v28; // x26
  unsigned int v29; // w19
  __int64 v30; // x24
  __int64 v31; // x28
  int32_t v32; // w27
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  EventMissionProgressRequest_Argument_ProgressData_o **v39; // x25
  __int64 v40; // x1
  __int64 v41; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v42; // x24
  const MethodInfo *v43; // x4
  ServantGroupEntity_array *ListByServantID; // x19
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x8
  DataManager_o *v48; // x24
  unsigned __int64 v49; // x20
  int v50; // w8
  unsigned int v51; // w22
  __int64 v52; // x19
  __int64 v53; // x25
  __int64 v54; // x27
  int32_t v55; // w25
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  EventMissionProgressRequest_Argument_ProgressData_o **v62; // x26
  __int64 v63; // x1
  __int64 v64; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v65; // x28
  const MethodInfo *v66; // x4
  __int64 v68; // x0
  DataManager_o *v69; // [xsp+10h] [xbp-70h]
  DataManager_o *v70; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_T__o *list; // [xsp+28h] [xbp-58h]

  if ( (byte_4213FE7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_QuestEntity___, *(_QWORD *)&servantId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantGroupMaster___, v7);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v8);
    sub_B0D8A4(&Method_System_Func_QuestEntity__bool___ctor__, v9);
    sub_B0D8A4(&System_Func_QuestEntity__bool__TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestEntity__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_QuestEntity__TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B0D8A4(&Method_clsQuestCheck___c__DisplayClass29_0__GetReleasedQuestEntityListByServantGet_b__0__, v15);
    sub_B0D8A4(&clsQuestCheck___c__DisplayClass29_0_TypeInfo, v16);
    sub_B0D8A4(&Method_clsQuestCheck___c__DisplayClass29_1__GetReleasedQuestEntityListByServantGet_b__1__, v17);
    sub_B0D8A4(&clsQuestCheck___c__DisplayClass29_1_TypeInfo, v18);
    byte_4213FE7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  v20 = Instance;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
  v22 = (QuestReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  v20,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  list = (System_Collections_Generic_List_T__o *)sub_B0D974(
                                                   System_Collections_Generic_List_QuestEntity__TypeInfo,
                                                   v23,
                                                   v24);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  if ( !v22 )
    goto LABEL_43;
  v69 = v20;
  Instance = (DataManager_o *)QuestReleaseMaster__getListByType(v22, 8, 0LL);
  if ( !Instance )
    goto LABEL_43;
  datalist = (int)Instance->fields.datalist;
  v28 = Instance;
  if ( datalist >= 1 )
  {
    v29 = 0;
    while ( v29 < datalist )
    {
      v30 = *((_QWORD *)&v28->fields.lookup + (int)v29);
      v31 = sub_B0D974(clsQuestCheck___c__DisplayClass29_0_TypeInfo, v25, v26);
      clsQuestCheck___c__DisplayClass29_0___ctor((clsQuestCheck___c__DisplayClass29_0_o *)v31, 0LL);
      if ( !v30 )
        goto LABEL_43;
      if ( *(_DWORD *)(v30 + 24) == servantId )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_43;
        v32 = *(_DWORD *)(v30 + 16);
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      v32,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v31 )
          goto LABEL_43;
        *(_QWORD *)(v31 + 16) = Instance;
        v39 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v31 + 16);
        sub_B0D840(
          (BattleServantConfConponent_o *)(v31 + 16),
          (System_Int32_array **)Instance,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
        v42 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                   System_Func_QuestEntity__bool__TypeInfo,
                                                                                   v40,
                                                                                   v41);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v42,
          (Il2CppObject *)v31,
          Method_clsQuestCheck___c__DisplayClass29_0__GetReleasedQuestEntityListByServantGet_b__0__,
          (const MethodInfo_26189B8 *)Method_System_Func_QuestEntity__bool___ctor__);
        Instance = (DataManager_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                      list,
                                      (System_Func_T__bool__o *)v42,
                                      (const MethodInfo_1707138 *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)*v39;
          if ( !*v39 )
            goto LABEL_43;
          Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
          if ( ((unsigned int)Instance & typeFlag) != 0 )
          {
            Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, v32, -1, 0, v43);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (DataManager_o *)list;
              if ( !list )
                goto LABEL_43;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
                *v39,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_QuestEntity__Add__);
            }
          }
        }
      }
      datalist = (int)v28->fields.datalist;
      if ( (int)++v29 >= datalist )
        goto LABEL_20;
    }
LABEL_44:
    v68 = sub_B0D9A8(Instance);
    sub_B0D948(v68, 0LL);
  }
LABEL_20:
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v69,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantGroupMaster___);
  if ( !Instance
    || (ListByServantID = ServantGroupMaster__getListByServantID((ServantGroupMaster_o *)Instance, servantId, 0LL),
        Instance = (DataManager_o *)QuestReleaseMaster__getListByType(v22, 10, 0LL),
        !ListByServantID) )
  {
LABEL_43:
    sub_B0D97C(Instance);
  }
  v47 = *(_QWORD *)&ListByServantID->max_length;
  if ( (int)v47 >= 1 )
  {
    v48 = Instance;
    v49 = 0LL;
    v70 = (DataManager_o *)ListByServantID;
    while ( 1 )
    {
      if ( v49 >= (unsigned int)v47 )
        goto LABEL_44;
      if ( !v48 )
        goto LABEL_43;
      v50 = (int)v48->fields.datalist;
      if ( v50 >= 1 )
        break;
LABEL_41:
      ++v49;
      LODWORD(v47) = v70->fields.datalist;
      if ( (__int64)v49 >= (int)v47 )
        return (System_Collections_Generic_List_QuestEntity__o *)list;
    }
    v51 = 0;
    v52 = *((_QWORD *)&v70->fields.lookup + v49);
    while ( v51 < v50 )
    {
      v53 = *((_QWORD *)&v48->fields.lookup + (int)v51);
      v54 = sub_B0D974(clsQuestCheck___c__DisplayClass29_1_TypeInfo, v45, v46);
      clsQuestCheck___c__DisplayClass29_1___ctor((clsQuestCheck___c__DisplayClass29_1_o *)v54, 0LL);
      if ( !v52 || !v53 )
        goto LABEL_43;
      if ( *(_DWORD *)(v52 + 16) == *(_DWORD *)(v53 + 24) )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_43;
        v55 = *(_DWORD *)(v53 + 16);
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      v55,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v54 )
          goto LABEL_43;
        *(_QWORD *)(v54 + 16) = Instance;
        v62 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v54 + 16);
        sub_B0D840(
          (BattleServantConfConponent_o *)(v54 + 16),
          (System_Int32_array **)Instance,
          v56,
          v57,
          v58,
          v59,
          v60,
          v61);
        v65 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                   System_Func_QuestEntity__bool__TypeInfo,
                                                                                   v63,
                                                                                   v64);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v65,
          (Il2CppObject *)v54,
          Method_clsQuestCheck___c__DisplayClass29_1__GetReleasedQuestEntityListByServantGet_b__1__,
          (const MethodInfo_26189B8 *)Method_System_Func_QuestEntity__bool___ctor__);
        Instance = (DataManager_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                      list,
                                      (System_Func_T__bool__o *)v65,
                                      (const MethodInfo_1707138 *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)*v62;
          if ( !*v62 )
            goto LABEL_43;
          Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
          if ( ((unsigned int)Instance & typeFlag) != 0 )
          {
            Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, v55, -1, 0, v66);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (DataManager_o *)list;
              if ( !list )
                goto LABEL_43;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
                *v62,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_QuestEntity__Add__);
            }
          }
        }
      }
      v50 = (int)v48->fields.datalist;
      if ( (int)++v51 >= v50 )
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
  EventRaidMaster_o *v11; // x22
  int32_t RaidDeadQuestId; // w23
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x4
  const MethodInfo *v15; // x4
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v17; // x20
  unsigned __int64 v18; // x21
  __int64 v20; // x0

  if ( (byte_4213FD7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v8);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v9);
    byte_4213FD7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_19;
  v11 = (EventRaidMaster_o *)Instance;
  RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId((EventRaidMaster_o *)Instance, eventId, day, 0LL);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, RaidDeadQuestId, 0, v13)
    || clsQuestCheck__IsQuestRelease(this, RaidDeadQuestId, -1, 0, v14) )
  {
    return 1;
  }
  Instance = (DataManager_o *)EventRaidMaster__GetRaidAliveQuestIds(v11, eventId, day, 0LL);
  if ( !Instance )
LABEL_19:
    sub_B0D97C(Instance);
  datalist = Instance->fields.datalist;
  v17 = Instance;
  if ( (int)datalist < 1 )
    return 0;
  v18 = 0LL;
  while ( 1 )
  {
    if ( v18 >= (unsigned int)datalist )
    {
      v20 = sub_B0D9A8(Instance);
      sub_B0D948(v20, 0LL);
    }
    Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, *((_DWORD *)&v17->fields.lookup + v18), -1, 0, v15);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      break;
    LODWORD(datalist) = v17->fields.datalist;
    if ( (__int64)++v18 >= (int)datalist )
      return 0;
  }
  return 1;
}


bool __fastcall clsQuestCheck__IsLastWarClear(clsQuestCheck_o *this, const MethodInfo *method)
{
  int32_t Value; // w1
  const MethodInfo *v4; // x2

  if ( (byte_4213FD9 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8390/*"LAST_WAR_ID"*/, method);
    byte_4213FD9 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8390/*"LAST_WAR_ID"*/, 0LL);
  return clsQuestCheck__IsWarClear(this, Value, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsMainInterlude(clsQuestCheck_o *this, int32_t war_id, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  WarEntity_o *Entity; // x0

  if ( (byte_4213FDA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&war_id);
    sub_B0D8A4(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4213FDA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             war_id,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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

  if ( (byte_4213FE0 & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_B0D8A4(&CondType_TypeInfo, *(_QWORD *)&qid);
    byte_4213FE0 = 1;
  }
  v6 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25410236(qid, v6, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsQuestClearRaw(
        clsQuestCheck_o *this,
        int32_t qid,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  int32_t v6; // w20

  if ( (byte_4213FE1 & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_B0D8A4(&CondType_TypeInfo, *(_QWORD *)&qid);
    byte_4213FE1 = 1;
  }
  v6 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25410236(qid, v6, 0, 0LL);
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

  if ( (byte_4213FE2 & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, *(_QWORD *)&qid);
    this = (clsQuestCheck_o *)sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    byte_4213FE2 = 1;
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v17; // x20
  bool v18; // w19
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  QuestReleaseEntity_o *v28; // x0
  const MethodInfo *v29; // x4
  __int64 v30; // x10
  int32_t v31; // w2
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0

  if ( (byte_4213FD6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&quest_id);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v9);
    sub_B0D8A4(&Method_DataManager_getEntityList_QuestReleaseMaster___, v10);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v11);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_B0D8A4(&QuestReleaseEntity_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4213FD6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__getEntityList_QuestReleaseMaster_(
                                      Instance,
                                      (const MethodInfo_17147C4 *)Method_DataManager_getEntityList_QuestReleaseMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  v17 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance;
  v18 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
          (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) > 0;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 v17,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v21;
        p_offset += 4;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_17:
      v27 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v28 = (QuestReleaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                                    Enumerator,
                                    *(_QWORD *)(v27 + 8));
    if ( !v28 )
      goto LABEL_38;
    v30 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v28->klass->_2.bitflags2 + 1) < (unsigned int)v30
      || (QuestReleaseEntity_c *)v28->klass->_2.typeHierarchy[v30 - 1] != QuestReleaseEntity_TypeInfo )
    {
      v28 = (QuestReleaseEntity_o *)sub_B0DC70(v28);
LABEL_38:
      sub_B0D97C(v28);
    }
    if ( v28->fields.questId == quest_id )
    {
      if ( (old_val & 0x80000000) != 0 )
        v31 = -1;
      else
        v31 = v28->fields.type == old_val_qr_type ? old_val : -1;
      if ( !clsQuestCheck__IsQuestRelease_23800788(this, v28, v31, 0LL, v29) )
      {
        v18 = 0;
        break;
      }
    }
  }
  v32 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      ++v33;
      v34 += 4;
      if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_34;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_34:
    v35 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  return v18;
}


bool __fastcall clsQuestCheck__IsQuestRelease_23798888(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        MapControl_QuestInfo_o *qinf,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_23800788(this, qrd, -1, qinf, v4);
}


bool __fastcall clsQuestCheck__IsQuestRelease_23799788(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        int32_t old_val,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_23800788(this, qrd, old_val, 0LL, v4);
}


bool __fastcall clsQuestCheck__IsQuestRelease_23800788(
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
  if ( (byte_4213FDC & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, qrd);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRaidMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v13);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v14);
    sub_B0D8A4(&NetworkManager_TypeInfo, v15);
    this = (clsQuestCheck_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4213FDC = 1;
  }
  entity = 0LL;
  sameGroupQuestIds = 0LL;
  v46 = 0LL;
  is_release = 0;
  if ( !qrd )
LABEL_112:
    sub_B0D97C(this);
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
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_112;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_112;
        v38 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                qrd->fields.questId,
                (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_112;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_112;
        v32 = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                 qrd->fields.questId,
                                 (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_112;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRaidMaster___);
        if ( !this )
          goto LABEL_112;
        if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)this, &entity, v18, v19, 0LL) )
          return is_release;
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_112;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
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
  int v8; // w21
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
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  int32_t ScriptIntParam; // w21
  int v32; // w8
  clsQuestCheck_c *v34; // x0
  System_String_o *KEY_QUEST_START_EFFECT; // x22
  System_String_o *String; // x22
  System_String_array *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v40; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v41; // x20
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x20
  System_String_o *v43; // x0
  char v44; // w8
  System_String_o *v45; // x19
  clsQuestCheck_c *v46; // x0
  System_String_o *v47; // x20
  __int64 v48; // x0
  WarEntity_o *v49; // [xsp+8h] [xbp-48h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  v8 = questPhase;
  if ( (byte_4213FEF & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Find_string___, *(_QWORD *)&questId);
    sub_B0D8A4(&char___TypeInfo, v10);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v12);
    sub_B0D8A4(&DataManager_TypeInfo, v13);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v14);
    sub_B0D8A4(&EncryptedPlayerPrefs_TypeInfo, v15);
    sub_B0D8A4(&Method_System_Func_string__bool___ctor__, v16);
    sub_B0D8A4(&System_Func_string__bool__TypeInfo, v17);
    sub_B0D8A4(&Method_clsQuestCheck___c__DisplayClass38_0__IsTapSkipQuestStart_b__0__, v18);
    sub_B0D8A4(&clsQuestCheck___c__DisplayClass38_0_TypeInfo, v19);
    sub_B0D8A4(&StringLiteral_21686/*"questStartEffectSkip"*/, v20);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v21);
    sub_B0D8A4(&clsQuestCheck_TypeInfo, v22);
    byte_4213FEF = 1;
  }
  entity = 0LL;
  v49 = 0LL;
  v23 = sub_B0D974(clsQuestCheck___c__DisplayClass38_0_TypeInfo, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
  clsQuestCheck___c__DisplayClass38_0___ctor((clsQuestCheck___c__DisplayClass38_0_o *)v23, 0LL);
  if ( !v23 )
    goto LABEL_49;
  *(_QWORD *)(v23 + 16) = effectName;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v23 + 16),
    (System_Int32_array **)effectName,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( isMyRoomMaterial )
    return 0;
  if ( v8 <= 1 )
    v8 = 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_49;
  if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_WarQuestSelectionMaster, &entity, questId, v8, 0LL) )
    goto LABEL_53;
  Master_WarQuestSelectionMaster = (__int64)entity;
  if ( !entity )
    goto LABEL_49;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_21686/*"questStartEffectSkip"*/, 0, 0LL);
  if ( !ScriptIntParam )
  {
LABEL_53:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_49;
    Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                       &v49,
                                       questId,
                                       (const MethodInfo_2669C30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    if ( (Master_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( !v49 )
        goto LABEL_49;
      v32 = LODWORD(v49->fields.longName) - 1;
      if ( (unsigned int)v32 > 4 )
        ScriptIntParam = 0;
      else
        ScriptIntParam = dword_3203340[v32];
      goto LABEL_24;
    }
    return 0;
  }
LABEL_24:
  v34 = clsQuestCheck_TypeInfo;
  if ( (BYTE3(clsQuestCheck_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !clsQuestCheck_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
    v34 = clsQuestCheck_TypeInfo;
  }
  KEY_QUEST_START_EFFECT = v34->static_fields->KEY_QUEST_START_EFFECT;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  String = EncryptedPlayerPrefs__GetString(KEY_QUEST_START_EFFECT, 0LL);
  if ( System_String__IsNullOrEmpty(String, 0LL) )
    goto LABEL_37;
  Master_WarQuestSelectionMaster = sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_49;
  if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
  {
    v48 = sub_B0D9A8(Master_WarQuestSelectionMaster);
    sub_B0D948(v48, 0LL);
  }
  *(_WORD *)(Master_WarQuestSelectionMaster + 32) = 47;
  if ( !String )
LABEL_49:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  v37 = System_String__Split(String, (System_Char_array *)Master_WarQuestSelectionMaster, 0LL);
  if ( !v37 )
  {
LABEL_37:
    v45 = *(System_String_o **)(v23 + 16);
    goto LABEL_38;
  }
  v40 = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)v37;
  v41 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_string__bool__TypeInfo,
                                                                             v38,
                                                                             v39);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v41,
    (Il2CppObject *)v23,
    Method_clsQuestCheck___c__DisplayClass38_0__IsTapSkipQuestStart_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_string__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                     v40,
                                                                     (System_Func_T__bool__o *)v41,
                                                                     (const MethodInfo_170767C *)Method_BasicHelper_Find_string___);
  v43 = System_String__Concat_43852188(
          String,
          (System_String_o *)StringLiteral_879/*"/"*/,
          *(System_String_o **)(v23 + 16),
          0LL);
  if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
  {
    v45 = v43;
LABEL_38:
    v46 = clsQuestCheck_TypeInfo;
    if ( (BYTE3(clsQuestCheck_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !clsQuestCheck_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
      v46 = clsQuestCheck_TypeInfo;
    }
    v47 = v46->static_fields->KEY_QUEST_START_EFFECT;
    if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    }
    EncryptedPlayerPrefs__SetString(v47, v45, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
    v44 = 1;
    goto LABEL_45;
  }
  v44 = 0;
LABEL_45:
  if ( ScriptIntParam == 1 )
    return 1;
  else
    return (ScriptIntParam == 2) & (v44 ^ 1);
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
  QuestRandomGroupMaster_o *v12; // x21
  QuestRandomGroupEntity_o *EntityFromQuestId; // x0
  QuestRandomGroupEntity_o *v14; // x19
  int32_t randomGroupId; // w20
  __int64 v16; // x1
  TerminalPramsManager_c *v17; // x0
  __int64 v18; // x1
  TerminalPramsManager_c *v19; // x0
  int32_t Item; // w22
  __int64 v21; // x1
  QuestRandomGroupEntity_o *RandomRangeQuest; // x0
  TerminalPramsManager_c *v23; // x0
  __int64 v24; // x1
  QuestRandomGroupEntity_o *v25; // x21
  TerminalPramsManager_c *v26; // x0
  TerminalPramsManager_c *v27; // x0

  if ( (byte_4213FD4 & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, questInfo);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestRandomGroupMaster___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v10);
    byte_4213FD4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestRandomGroupMaster___);
  if ( !questInfo )
    goto LABEL_64;
  v12 = (QuestRandomGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_64;
  EntityFromQuestId = QuestRandomGroupMaster__GetEntityFromQuestId(
                        (QuestRandomGroupMaster_o *)Instance,
                        questInfo->fields.questId,
                        0LL);
  if ( EntityFromQuestId )
  {
    v14 = EntityFromQuestId;
    randomGroupId = EntityFromQuestId->fields.randomGroupId;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    TerminalPramsManager__LoadQuestRandomGroupList(0LL);
    if ( !byte_4211AED )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v16);
      byte_4211AED = 1;
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
           (const MethodInfo_2E69AB8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    {
      if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4211AED )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v18);
        byte_4211AED = 1;
      }
      v19 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v19 = TerminalPramsManager_TypeInfo;
      }
      Instance = (DataManager_o *)v19->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_64;
      Item = System_Collections_Generic_Dictionary_int__int___get_Item(
               (System_Collections_Generic_Dictionary_int__int__o *)Instance,
               randomGroupId,
               (const MethodInfo_2E69794 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsQuestClear_25410236(Item, -1, 0, 0LL) )
        goto LABEL_53;
    }
    else
    {
      if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4211AED )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v18);
        byte_4211AED = 1;
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
      System_Collections_Generic_Dictionary_int__int___Add(
        (System_Collections_Generic_Dictionary_int__int__o *)Instance,
        randomGroupId,
        0,
        (const MethodInfo_2E69854 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
    RandomRangeQuest = QuestRandomGroupMaster__GetRandomRangeQuest(v12, randomGroupId, 0LL);
    if ( RandomRangeQuest )
    {
      v25 = RandomRangeQuest;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4211AED )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v24);
        byte_4211AED = 1;
      }
      v26 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v26 = TerminalPramsManager_TypeInfo;
      }
      Instance = (DataManager_o *)v26->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_64;
      System_Collections_Generic_Dictionary_int__int___set_Item(
        (System_Collections_Generic_Dictionary_int__int__o *)Instance,
        randomGroupId,
        v25->fields.questId,
        (const MethodInfo_2E6982C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      TerminalPramsManager__SaveQuestRandomGroupList(0LL);
LABEL_53:
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4211AED )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v21);
        byte_4211AED = 1;
      }
      v27 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v27 = TerminalPramsManager_TypeInfo;
      }
      Instance = (DataManager_o *)v27->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( Instance )
      {
        LOBYTE(RandomRangeQuest) = System_Collections_Generic_Dictionary_int__int___get_Item(
                                     (System_Collections_Generic_Dictionary_int__int__o *)Instance,
                                     randomGroupId,
                                     (const MethodInfo_2E69794 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) == v14->fields.questId;
        return (char)RandomRangeQuest;
      }
LABEL_64:
      sub_B0D97C(Instance);
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
  WarEntity_o *Entity; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4213FD8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&war_id);
    sub_B0D8A4(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4213FD8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             war_id,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = clsQuestCheck__IsQuestClear(this, Entity->fields.lastQuestId, 0, v9);
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

  if ( (byte_4213FEE & 1) == 0 )
  {
    sub_B0D8A4(&ScriptManager_TypeInfo, end_act);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v4);
    byte_4213FEE = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_421083F )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, end_act);
    byte_421083F = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v5->static_fields->_WarId_k__BackingField;
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, end_act);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4210852 = 1;
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
  _QWORD *v17; // x19
  __int64 v18; // x9
  __int64 v19; // x8
  __int64 v20; // x1
  __int64 v21; // x2
  TerminalPramsManager_c *v22; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w20
  BattleSetupInfo_o *v26; // x23
  Il2CppObject *v27; // x20
  clsQuestCheck_o *v28; // x0
  const MethodInfo *v29; // x1

  if ( (byte_4213FF1 & 1) == 0 )
  {
    sub_B0D8A4(&BattleRootComponent_TypeInfo, qinf);
    sub_B0D8A4(&BattleSetupInfo_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v15);
    byte_4213FF1 = 1;
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
      if ( !byte_421083F )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v20);
        byte_421083F = 1;
      }
      v22 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v22 = TerminalPramsManager_TypeInfo;
      }
      WarId_k__BackingField = v22->static_fields->_WarId_k__BackingField;
      if ( !byte_4210852 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v20);
        v22 = TerminalPramsManager_TypeInfo;
        byte_4210852 = 1;
      }
      if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = TerminalPramsManager_TypeInfo;
      }
      QuestId_k__BackingField = v22->static_fields->_QuestId_k__BackingField;
      if ( !byte_4210853 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v20);
        v22 = TerminalPramsManager_TypeInfo;
        byte_4210853 = 1;
      }
      if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = TerminalPramsManager_TypeInfo;
      }
      PhaseCnt_k__BackingField = v22->static_fields->_PhaseCnt_k__BackingField;
      v26 = (BattleSetupInfo_o *)sub_B0D974(BattleSetupInfo_TypeInfo, v20, v21);
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance
        || (*((_BYTE *)Instance + 140) = 1,
            (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__)) == 0LL)
        || (*((_DWORD *)Instance + 36) = 1,
            (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
      {
LABEL_42:
        sub_B0D97C(Instance);
      }
      AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 35, 1, v27, 0LL);
    }
LABEL_40:
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0LL);
      return;
    }
    goto LABEL_42;
  }
  if ( result )
    goto LABEL_40;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  v17 = (_QWORD *)*((_QWORD *)Instance + 3);
  if ( !v17 )
    goto LABEL_42;
  v18 = *(&BattleRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*v17 + 300LL) >= (unsigned int)v18
    && *(BattleRootComponent_c **)(*(_QWORD *)(*v17 + 200LL) + 8 * v18 - 8) == BattleRootComponent_TypeInfo )
  {
    Instance = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)Instance + 3), 0LL);
    if ( !Instance )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v19 = v17[9];
    if ( !v19 )
      goto LABEL_42;
    Instance = *(void **)(v19 + 456);
    if ( !Instance )
      goto LABEL_42;
    BattleResultComponent__EndResult((BattleResultComponent_o *)Instance, 0LL);
    goto LABEL_40;
  }
  v28 = (clsQuestCheck_o *)sub_B0DC70(*((_QWORD *)Instance + 3));
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

  if ( (byte_4213FEA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_String_Join_int___, *(_QWORD *)&eventId);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_705/*","*/, v11);
    sub_B0D8A4(&StringLiteral_1/*""*/, v12);
    byte_4213FEA = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  v13 = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( !byte_4211ACC )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4211ACC = 1;
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
  sub_B0D840(p_ClearEventQuestIds_k__BackingField, v13, (System_String_array **)method, v3, v4, v5, v6, v7);
  v17 = (System_Collections_Generic_IEnumerable_T__o *)clsQuestCheck__GetEventQuestIdListPlayable(this, eventId, v16);
  v25 = (System_Int32_array **)System_String__Join_int_(
                                 (System_String_o *)StringLiteral_705/*","*/,
                                 v17,
                                 (const MethodInfo_20513F0 *)Method_System_String_Join_int___);
  if ( !byte_4211ACC )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v18);
    byte_4211ACC = 1;
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
  sub_B0D840(v27, v25, v19, v20, v21, v22, v23, v24);
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
  UserItemMaster_o *v11; // x22
  int32_t targetId; // w23
  int32_t num; // w22
  char v14; // w8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4213FDD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, is_release);
    sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4213FDD = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !qrd )
    goto LABEL_14;
  v11 = (UserItemMaster_o *)Instance;
  targetId = qrd->fields.targetId;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v11 )
    goto LABEL_14;
  Instance = UserItemMaster__TryGetEntity(v11, &entity, Instance, targetId, 0LL);
  if ( (Instance & 1) == 0 )
  {
    v14 = !itemGet;
    goto LABEL_13;
  }
  if ( !entity )
LABEL_14:
    sub_B0D97C(Instance);
  num = entity->fields.num;
  v14 = (num >= QuestReleaseEntity__getValueInt(qrd, 0LL)) ^ itemGet ^ 1;
LABEL_13:
  *is_release = v14 & 1;
}


bool __fastcall clsQuestCheck__isPlayQuestStartAction(clsQuestCheck_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  int32_t WarId_k__BackingField; // w20
  int32_t QuestId_k__BackingField; // w19

  if ( (byte_4213FED & 1) == 0 )
  {
    sub_B0D8A4(&ScriptManager_TypeInfo, method);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v3);
    byte_4213FED = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_421083F )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_421083F = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v4->static_fields->_WarId_k__BackingField;
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4210852 = 1;
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
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4213FDE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&qid);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4213FDE = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
    sub_B0D97C(Instance);
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
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4213FDF & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&qid);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4213FDF = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
    sub_B0D97C(Instance);
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
  const MethodInfo *v8; // x3
  bool v9; // w8
  bool result; // w0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4213FDB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&qid);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4213FDB = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                qid,
                                (const MethodInfo_2669C30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 1;
  if ( !entity )
LABEL_12:
    sub_B0D97C(Instance);
  if ( (*(&entity->fields.startType + 1) | 4) != 5 )
    return 0;
  v9 = clsQuestCheck__IsQuestClear(this, qid, 0, v8);
  result = 0;
  if ( v9 )
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
  _BOOL8 IsShop; // x0
  const MethodInfo *v42; // x2
  UserQuestMaster_o *v43; // x23
  clsQuestCheck_Fields *p_fields; // x23
  int32_t UseDiceSpotId; // w24
  __int64 v47; // x1
  __int64 v48; // x2
  System_Collections_Generic_List_T__o *qrs; // x24
  clsQuestCheck___c_c *v50; // x0
  struct clsQuestCheck___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__5_0; // x25
  Il2CppObject *v53; // x26
  struct clsQuestCheck___c_StaticFields *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct BalanceConfig_StaticFields *v61; // x8
  QuestEntity_o *Mine; // x0
  UserEventQuestCooltimeMaster_o *v63; // x24
  UserEventQuestCooltimeEntity_o *v64; // x0
  UserEventQuestCooltimeEntity_o *v65; // x24
  int64_t Time; // x0
  int64_t clearedAt; // x26
  int64_t v68; // x25
  __int64 v69; // x1
  __int64 v70; // x2
  struct System_Collections_Generic_List_QuestReleaseEntity__o *cQuestReleaseListP; // x23
  struct clsQuestCheck___c_StaticFields *v72; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_1; // x24
  Il2CppObject *v74; // x25
  struct clsQuestCheck___c_StaticFields *v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  UserQuestMaster_o *v82; // x23
  const MethodInfo *v83; // x4
  QuestReleaseEntity_o *current; // x22
  _BOOL8 HasStatus; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  int v92; // w19
  int32_t eventId; // w24
  __int64 v94; // x1
  __int64 v95; // x2
  System_Collections_Generic_IEnumerable_T__o *v96; // x25
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v97; // x24
  const MethodInfo *v98; // x2
  BalanceConfig_c *v99; // x0
  const MethodInfo *v100; // x2
  BalanceConfig_c *v101; // x0
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_Collections_Generic_List_Enumerator_T__o v108; // [xsp+0h] [xbp-80h] BYREF
  WarEntity_o *v109; // [xsp+18h] [xbp-68h] BYREF
  WarEntity_o *entity; // [xsp+20h] [xbp-60h] BYREF
  UserQuestEntity_o *v111; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4213FD3 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_BasicHelper_Any_QuestReleaseEntity___, v12);
    sub_B0D8A4(&Method_System_Comparison_QuestReleaseEntity___ctor__, v13);
    sub_B0D8A4(&System_Comparison_QuestReleaseEntity__TypeInfo, v14);
    sub_B0D8A4(&CondType_TypeInfo, v15);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventDetailMaster___, v16);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestReleaseMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___, v18);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserQuestMaster___, v19);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarMaster___, v20);
    sub_B0D8A4(&DataManager_TypeInfo, v21);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v22);
    sub_B0D8A4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v26);
    sub_B0D8A4(&Method_System_Func_QuestReleaseEntity__bool___ctor__, v27);
    sub_B0D8A4(&System_Func_QuestReleaseEntity__bool__TypeInfo, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__, v30);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v31);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__, v32);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___67889112, v33);
    sub_B0D8A4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v34);
    sub_B0D8A4(&NetworkManager_TypeInfo, v35);
    sub_B0D8A4(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__, v36);
    sub_B0D8A4(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__, v37);
    sub_B0D8A4(&clsQuestCheck___c_TypeInfo, v38);
    byte_4213FD3 = 1;
  }
  entity = 0LL;
  v111 = 0LL;
  v109 = 0LL;
  memset(&v108, 0, sizeof(v108));
  *questReleaseNG = 0LL;
  sub_B0D840(
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
  v111 = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !questInfo || !Master_WarQuestSelectionMaster )
    goto LABEL_114;
  IsShop = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
             &entity,
             questInfo->fields.warId,
             (const MethodInfo_2669C30 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
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
      v43 = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserQuestMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = NetworkManager__get_UserId(0LL);
      if ( !v43 )
        goto LABEL_114;
      IsShop = UserQuestMaster__TryGetEntity(v43, &v111, Master_WarQuestSelectionMaster, questId, 0LL);
      if ( IsShop )
      {
        Master_WarQuestSelectionMaster = (int64_t)v111;
        if ( !v111 )
          goto LABEL_114;
        IsShop = UserQuestEntity__IsNotExpired(v111, 0LL);
        if ( IsShop )
          return 1;
      }
    }
  }
  if ( !clsQuestCheck__IsValidQuestRandomGroup((clsQuestCheck_o *)IsShop, questInfo, v42) )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_114;
  p_fields = &this->fields;
  QuestReleaseMaster__getListByQuestID_30578992(
    (QuestReleaseMaster_o *)Master_WarQuestSelectionMaster,
    questId,
    &this->fields.qrs,
    0LL);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !entity || !Master_WarQuestSelectionMaster )
    goto LABEL_114;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
         &v109,
         entity->fields.eventId,
         (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Master_WarQuestSelectionMaster = (int64_t)v109;
    if ( !v109 )
      goto LABEL_114;
    if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v109, 0LL) )
    {
      Master_WarQuestSelectionMaster = (int64_t)v109;
      if ( !v109 )
        goto LABEL_114;
      UseDiceSpotId = EventDetailEntity__GetUseDiceSpotId((EventDetailEntity_o *)v109, 0LL);
      if ( UseDiceSpotId == MapControl_QuestInfo__GetSpotID(questInfo, 0LL)
        && MapControl_QuestInfo__GetQuestType(questInfo, 0LL) == 1 )
      {
        qrs = (System_Collections_Generic_List_T__o *)p_fields->qrs;
        v50 = clsQuestCheck___c_TypeInfo;
        if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
          v50 = clsQuestCheck___c_TypeInfo;
        }
        static_fields = v50->static_fields;
        _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__5_0;
        if ( !_9__5_0 )
        {
          if ( (BYTE3(v50->vtable._0_Equals.methodPtr) & 4) != 0 && !v50->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v50);
            static_fields = clsQuestCheck___c_TypeInfo->static_fields;
          }
          v53 = (Il2CppObject *)static_fields->__9;
          _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                         System_Func_QuestReleaseEntity__bool__TypeInfo,
                                                                                         v47,
                                                                                         v48);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__5_0,
            v53,
            Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__,
            (const MethodInfo_26189B8 *)Method_System_Func_QuestReleaseEntity__bool___ctor__);
          v54 = clsQuestCheck___c_TypeInfo->static_fields;
          v54->__9__5_0 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__5_0;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v54->__9__5_0,
            (System_Int32_array **)_9__5_0,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60);
        }
        if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                qrs,
                (System_Func_T__bool__o *)_9__5_0,
                (const MethodInfo_1707138 *)Method_BasicHelper_Any_QuestReleaseEntity___) )
        {
          Master_WarQuestSelectionMaster = (int64_t)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Master_WarQuestSelectionMaster = (int64_t)BalanceConfig_TypeInfo;
          }
          v61 = *(struct BalanceConfig_StaticFields **)(Master_WarQuestSelectionMaster + 184);
          if ( v61->EventBoardGameNextBoardQuestId != questId )
          {
            if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
              && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
            {
              j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
              v61 = BalanceConfig_TypeInfo->static_fields;
            }
            if ( v61->EventBoardGameNextRoundQuestId != questId )
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
              v96 = (System_Collections_Generic_IEnumerable_T__o *)p_fields->qrs;
              v97 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                                      System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                                                      v94,
                                                                                      v95);
              System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
                v97,
                v96,
                (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___67889112);
              v99 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v99 = BalanceConfig_TypeInfo;
              }
              if ( clsQuestCheck__CheckQuestPlayableNow(this, v99->static_fields->EventBoardGameNextBoardQuestId, v98) )
                return 0;
              v101 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v101 = BalanceConfig_TypeInfo;
              }
              if ( clsQuestCheck__CheckQuestPlayableNow(this, v101->static_fields->EventBoardGameNextRoundQuestId, v100) )
                return 0;
              p_fields->qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v97;
              sub_B0D840(
                (BattleServantConfConponent_o *)&this->fields,
                (System_Int32_array **)v97,
                v102,
                v103,
                v104,
                v105,
                v106,
                v107);
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
    Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___);
    if ( !questInfo->fields._WarInfo_k__BackingField )
      goto LABEL_114;
    v63 = (UserEventQuestCooltimeMaster_o *)Master_WarQuestSelectionMaster;
    Master_WarQuestSelectionMaster = MapControl_WarInfo__GetEventId(questInfo->fields._WarInfo_k__BackingField, 0LL);
    if ( !v63 )
      goto LABEL_114;
    v64 = UserEventQuestCooltimeMaster__getEntity(
            v63,
            Master_WarQuestSelectionMaster,
            questInfo->fields.questId,
            1,
            0LL);
    if ( v64 )
    {
      v65 = v64;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      clearedAt = v65->fields.clearedAt;
      v68 = Time;
      Master_WarQuestSelectionMaster = (int64_t)UserEventQuestCooltimeEntity__GetMasterEntity(v65, 0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_114;
      if ( v68 < clearedAt + *(int *)(Master_WarQuestSelectionMaster + 28) )
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
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.cQuestReleaseListP;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_114;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)Master_WarQuestSelectionMaster,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.qrs,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__);
  cQuestReleaseListP = this->fields.cQuestReleaseListP;
  Master_WarQuestSelectionMaster = (int64_t)clsQuestCheck___c_TypeInfo;
  if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
    Master_WarQuestSelectionMaster = (int64_t)clsQuestCheck___c_TypeInfo;
  }
  v72 = *(struct clsQuestCheck___c_StaticFields **)(Master_WarQuestSelectionMaster + 184);
  _9__5_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v72->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      v72 = clsQuestCheck___c_TypeInfo->static_fields;
    }
    v74 = (Il2CppObject *)v72->__9;
    _9__5_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_QuestReleaseEntity__TypeInfo,
                                                                          v69,
                                                                          v70);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_1,
      v74,
      Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_QuestReleaseEntity___ctor__);
    v75 = clsQuestCheck___c_TypeInfo->static_fields;
    v75->__9__5_1 = (struct System_Comparison_QuestReleaseEntity__o *)_9__5_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v75->__9__5_1,
      (System_Int32_array **)_9__5_1,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81);
  }
  if ( !cQuestReleaseListP )
    goto LABEL_114;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)cQuestReleaseListP,
    (System_Comparison_T__o *)_9__5_1,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  if ( v111 )
    goto LABEL_87;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v82 = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = NetworkManager__get_UserId(0LL);
  if ( !v82 )
LABEL_114:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  UserQuestMaster__TryGetEntity(v82, &v111, Master_WarQuestSelectionMaster, questId, 0LL);
LABEL_87:
  Master_WarQuestSelectionMaster = (int64_t)this->fields.cQuestReleaseListP;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_114;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v108,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v108,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
  {
    current = (QuestReleaseEntity_o *)v108.fields.current;
    if ( !v111 )
      goto LABEL_94;
    HasStatus = UserQuestEntity__HasStatus(v111, 8, 0LL);
    if ( !HasStatus )
      goto LABEL_94;
    if ( !current )
      sub_B0D97C(HasStatus);
    if ( current->fields.type != 12 )
    {
LABEL_94:
      if ( !clsQuestCheck__IsQuestRelease_23800788(this, current, -1, questInfo, v83) )
      {
        *questReleaseNG = current;
        sub_B0D840(
          (BattleServantConfConponent_o *)questReleaseNG,
          (System_Int32_array **)current,
          v86,
          v87,
          v88,
          v89,
          v90,
          v91);
        v92 = 64;
        goto LABEL_97;
      }
    }
  }
  v92 = 62;
LABEL_97:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v108,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v92 != 64;
}


void __fastcall clsQuestCheck___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct clsQuestCheck___c_StaticFields *static_fields; // x0

  if ( (byte_4211F40 & 1) == 0 )
  {
    sub_B0D8A4(&clsQuestCheck___c_TypeInfo, v1);
    byte_4211F40 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(clsQuestCheck___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = clsQuestCheck___c_TypeInfo->static_fields;
  static_fields->__9 = (struct clsQuestCheck___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
  CommonUI_o *Instance; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21

  if ( (byte_4211F42 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_clsQuestCheck___c__DisplayClass39_1__CheckQuestPlayable_b__5__, v5);
    sub_B0D8A4(&clsQuestCheck___c__DisplayClass39_1_TypeInfo, v6);
    byte_4211F42 = 1;
  }
  v7 = sub_B0D974(clsQuestCheck___c__DisplayClass39_1_TypeInfo, *(_QWORD *)&result, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v7,
          Method_clsQuestCheck___c__DisplayClass39_1__CheckQuestPlayable_b__5__,
          0LL),
        !Instance) )
  {
    sub_B0D97C(v8);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v12, 0LL);
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
  CommonUI_o *Instance; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21

  if ( (byte_4211F43 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_clsQuestCheck___c__DisplayClass39_2__CheckQuestPlayable_b__6__, v5);
    sub_B0D8A4(&clsQuestCheck___c__DisplayClass39_2_TypeInfo, v6);
    byte_4211F43 = 1;
  }
  v7 = sub_B0D974(clsQuestCheck___c__DisplayClass39_2_TypeInfo, *(_QWORD *)&result, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v7,
          Method_clsQuestCheck___c__DisplayClass39_2__CheckQuestPlayable_b__6__,
          0LL),
        !Instance) )
  {
    sub_B0D97C(v8);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v12, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__39_11(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_4211F45 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4211F45 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    0,
    (const MethodInfo_1705BB0 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__39_13(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_4211F46 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4211F46 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    0,
    (const MethodInfo_1705BB0 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__39_2(
        clsQuestCheck___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4211F47 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4211F47 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__39_3(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_4211F41 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B0D8A4(&TopLoginRequest_TypeInfo, v2);
    byte_4211F41 = 1;
  }
  if ( (BYTE3(TopLoginRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopLoginRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopLoginRequest_TypeInfo);
  }
  TopLoginRequest__ResetAccesTime(0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
  CommonUI_o *Instance; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21

  if ( (byte_4211F44 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_clsQuestCheck___c__DisplayClass39_3__CheckQuestPlayable_b__8__, v5);
    sub_B0D8A4(&clsQuestCheck___c__DisplayClass39_3_TypeInfo, v6);
    byte_4211F44 = 1;
  }
  v7 = sub_B0D974(clsQuestCheck___c__DisplayClass39_3_TypeInfo, *(_QWORD *)&result, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v7,
          Method_clsQuestCheck___c__DisplayClass39_3__CheckQuestPlayable_b__8__,
          0LL),
        !Instance) )
  {
    sub_B0D97C(v8);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v12, 0LL);
}


bool __fastcall clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_0(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B0D97C(this);
  return n->fields.type == 118;
}


int32_t __fastcall clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_1(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *a,
        QuestReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
  __int64 v8; // x1
  __int64 v9; // x2
  SceneJumpInfo_o *v10; // x20
  AvalonSceneManager_o *v11; // x0
  int32_t v12; // w1
  Il2CppObject *v13; // x3
  __int64 v14; // x1
  __int64 v15; // x2

  if ( (byte_4211F48 & 1) == 0 )
  {
    sub_B0D8A4(&SceneJumpInfo_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B0D8A4(&StringLiteral_12706/*"SellServant"*/, v4);
    sub_B0D8A4(&StringLiteral_12746/*"ServantCombine"*/, v5);
    byte_4211F48 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v10 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v14, v15);
      SceneJumpInfo___ctor_16651652(v10, (System_String_o *)StringLiteral_12706/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v12 = 22;
        goto LABEL_12;
      }
LABEL_15:
      sub_B0D97C(v11);
    case 1:
      v11 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v11 )
      {
        v12 = 71;
        v13 = 0LL;
LABEL_13:
        AvalonSceneManager__transitionScene(v11, v12, 1, v13, 0LL);
        return;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v10 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v8, v9);
      SceneJumpInfo___ctor_16651556(v10, (System_String_o *)StringLiteral_12746/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v12 = 32;
LABEL_12:
        v11 = (AvalonSceneManager_o *)Instance;
        v13 = (Il2CppObject *)v10;
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
  __int64 v9; // x1
  __int64 v10; // x2
  SceneJumpInfo_o *v11; // x20
  __int64 v12; // x0
  int32_t v13; // w1
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2

  if ( (byte_4211F49 & 1) == 0 )
  {
    sub_B0D8A4(&SceneJumpInfo_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B0D8A4(&StringLiteral_12750/*"ServantEquipList"*/, v4);
    sub_B0D8A4(&StringLiteral_12706/*"SellServant"*/, v5);
    sub_B0D8A4(&StringLiteral_12749/*"ServantEQCombine"*/, v6);
    byte_4211F49 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v11 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v16, v17);
      SceneJumpInfo___ctor_16651652(v11, (System_String_o *)StringLiteral_12706/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v13 = 22;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 1:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v11 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v14, v15);
      SceneJumpInfo___ctor_16651556(v11, (System_String_o *)StringLiteral_12750/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v13 = 71;
        goto LABEL_12;
      }
LABEL_14:
      sub_B0D97C(v12);
    case 0:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v11 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v9, v10);
      SceneJumpInfo___ctor_16651556(v11, (System_String_o *)StringLiteral_12749/*"ServantEQCombine"*/, 0LL);
      if ( Instance )
      {
        v13 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene(Instance, v13, 1, (Il2CppObject *)v11, 0LL);
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
  __int64 v6; // x1
  __int64 v7; // x2
  SceneJumpInfo_o *v8; // x20
  __int64 v9; // x0

  if ( (byte_4211F4A & 1) == 0 )
  {
    sub_B0D8A4(&SceneJumpInfo_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B0D8A4(&StringLiteral_12706/*"SellServant"*/, v4);
    byte_4211F4A = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v8 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v6, v7);
    SceneJumpInfo___ctor_16651652(v8, (System_String_o *)StringLiteral_12706/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_B0D97C(v9);
    AvalonSceneManager__transitionScene(Instance, 22, 1, (Il2CppObject *)v8, 0LL);
  }
}