void __fastcall clsQuestCheck___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E73F7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_11117/*"QuestStartEffect"*/, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&clsQuestCheck_TypeInfo, v8, v9, v10);
    byte_42E73F7 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)clsQuestCheck_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_11117/*"QuestStartEffect"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_11117/*"QuestStartEffect"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall clsQuestCheck___ctor(clsQuestCheck_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42E73F6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck___ctor__, v8, v9, v10);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v11, v12, v13);
    byte_42E73F6 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v14;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.cQuestReleaseListP = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.cQuestReleaseListP,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2A304CC *)Method_SingletonTemplate_clsQuestCheck___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__CheckQuestPlayable(
        clsQuestCheck_o *this,
        MapControl_QuestInfo_o *questInfo,
        int64_t srcEndTime,
        int32_t boostId,
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
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  int v96; // w1
  int v97; // w2
  __int64 v98; // x3
  int v99; // w1
  int v100; // w2
  __int64 v101; // x3
  int v102; // w1
  int v103; // w2
  __int64 v104; // x3
  int v105; // w1
  int v106; // w2
  __int64 v107; // x3
  int v108; // w1
  int v109; // w2
  __int64 v110; // x3
  int v111; // w1
  int v112; // w2
  __int64 v113; // x3
  int v114; // w1
  int v115; // w2
  __int64 v116; // x3
  int v117; // w1
  int v118; // w2
  __int64 v119; // x3
  int v120; // w1
  int v121; // w2
  __int64 v122; // x3
  int v123; // w1
  int v124; // w2
  __int64 v125; // x3
  int v126; // w1
  int v127; // w2
  __int64 v128; // x3
  int v129; // w1
  int v130; // w2
  __int64 v131; // x3
  int v132; // w1
  int v133; // w2
  __int64 v134; // x3
  __int64 v135; // x24
  int64_t SpotID; // x0
  __int64 v137; // x1
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  MapControl_QuestInfo_o **v144; // x20
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  int32_t questId; // w19
  MapControl_QuestInfo_o *v152; // x8
  int32_t v153; // w25
  int v154; // w21
  bool IsQuestReleaseAll; // w0
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x23
  UserQuestEntity_o *Entity; // x0
  __int64 v158; // x21
  int64_t Time; // x0
  System_String_o *v160; // x19
  System_String_o *v161; // x20
  CommonUI_o *v162; // x21
  clsQuestCheck___c_c *v163; // x8
  struct clsQuestCheck___c_StaticFields *static_fields; // x9
  System_Action_o *_9__41_3; // x22
  Il2CppObject *v166; // x23
  System_String_array **v167; // x2
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  System_Int32_array **v173; // x1
  struct clsQuestCheck___c_StaticFields *v174; // x0
  BattleServantConfConponent_o *p__9__41_3; // x0
  UserGameEntity_o *v176; // x26
  QuestEntity_o *v177; // x27
  int v178; // w2
  __int64 v179; // x3
  clsQuestCheck___c_c *v180; // x8
  struct clsQuestCheck___c_StaticFields *v181; // x9
  Il2CppObject *v182; // x23
  struct clsQuestCheck___c_StaticFields *v183; // x0
  TerminalPramsManager_c *v184; // x0
  int64_t v185; // x21
  UserServantMaster_o *v186; // x28
  UserCommandCodeMaster_o *v187; // x23
  CommonUI_o *v188; // x19
  int32_t v189; // w20
  int32_t svtKeep; // w21
  struct clsQuestCheck___c_StaticFields *v191; // x8
  ServantFrameShortDlgComponent_CallbackFunc_o *_9__41_0; // x22
  Il2CppObject *v193; // x23
  struct clsQuestCheck___c_StaticFields *v194; // x0
  System_String_array **v195; // x2
  System_String_array **v196; // x3
  System_Boolean_array **v197; // x4
  System_Int32_array **v198; // x5
  System_Int32_array *v199; // x6
  System_Int32_array *v200; // x7
  CommonUI_o *v201; // x0
  int32_t v202; // w1
  int32_t v203; // w2
  int32_t v204; // w3
  CommonUI_o *v205; // x19
  int32_t v206; // w20
  int32_t svtEquipKeep; // w21
  struct clsQuestCheck___c_StaticFields *v208; // x8
  Il2CppObject *v209; // x23
  struct clsQuestCheck___c_StaticFields *v210; // x0
  System_String_array **v211; // x2
  System_String_array **v212; // x3
  System_Boolean_array **v213; // x4
  System_Int32_array **v214; // x5
  System_Int32_array *v215; // x6
  System_Int32_array *v216; // x7
  int32_t Count; // w19
  int v218; // w2
  __int64 v219; // x3
  CommonUI_o *v220; // x20
  BalanceConfig_c *v221; // x8
  struct clsQuestCheck___c_StaticFields *v222; // x8
  Il2CppObject *v223; // x23
  struct clsQuestCheck___c_StaticFields *v224; // x0
  System_String_array **v225; // x2
  System_String_array **v226; // x3
  System_Boolean_array **v227; // x4
  System_Int32_array **v228; // x5
  System_Int32_array *v229; // x6
  System_Int32_array *v230; // x7
  WebViewManager_o *Instance; // x19
  RecoverDlgComponent_CallbackFunc_o *v233; // x20
  CommonUI_o *v234; // x0
  int32_t v235; // w1
  RecoverDlgComponent_CallbackFunc_o *v236; // x2
  bool v237; // w3
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x24
  UserItemMaster_o *v239; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v240; // x27
  System_String_o *v241; // x23
  int32_t v242; // w26
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v244; // x8
  int64_t v245; // x23
  int64_t v246; // x28
  int32_t klass; // w8
  struct System_Int32_array *nums; // x9
  System_String_o *v249; // x0
  System_String_o *v250; // x0
  System_String_o *v251; // x19
  System_String_o *v252; // x0
  System_String_o *v253; // x19
  CommonUI_o *v254; // x20
  clsQuestCheck___c_c *v255; // x8
  struct clsQuestCheck___c_StaticFields *v256; // x9
  System_String_o *v257; // x21
  System_Action_o *_9__41_11; // x22
  Il2CppObject *v259; // x23
  System_String_array **v260; // x2
  System_String_array **v261; // x3
  System_Boolean_array **v262; // x4
  System_Int32_array **v263; // x5
  System_Int32_array *v264; // x6
  System_Int32_array *v265; // x7
  struct clsQuestCheck___c_StaticFields *v266; // x0
  BattleServantConfConponent_o *p__9__41_11; // x0
  WebViewManager_o *v268; // x19
  RecoverDlgComponent_CallbackFunc_o *v269; // x20
  CommonUI_o *v270; // x19
  RecoverDlgComponent_CallbackFunc_o *v271; // x20
  QuestConsumeItemEntity_o *v272; // x24
  UserItemMaster_o *v273; // x27
  System_String_o *v274; // x23
  int32_t v275; // w26
  struct System_Int32_array *v276; // x8
  struct System_Int32_array *v277; // x8
  int64_t v278; // x23
  int64_t v279; // x28
  int32_t qp; // w8
  struct System_Int32_array *v281; // x9
  System_String_o *v282; // x0
  System_String_o *v283; // x0
  System_String_o *v284; // x19
  System_String_o *v285; // x0
  clsQuestCheck___c_c *v286; // x8
  struct clsQuestCheck___c_StaticFields *v287; // x9
  Il2CppObject *v288; // x23
  struct clsQuestCheck___c_StaticFields *v289; // x0
  __int64 v290; // x0
  char v291; // [xsp+3Ch] [xbp-84h]
  char v292; // [xsp+40h] [xbp-80h]
  UserGameEntity_o *v293; // [xsp+40h] [xbp-80h]
  System_String_o *SelfUserGame; // [xsp+48h] [xbp-78h]
  System_String_o *v295; // [xsp+48h] [xbp-78h]
  System_String_o *str0; // [xsp+50h] [xbp-70h]
  System_String_o *str0a; // [xsp+50h] [xbp-70h]
  int32_t servantEquipSum[2]; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_42E73F4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)questInfo, srcEndTime, *(_QWORD *)&boostId);
    sub_B5D5C4(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&RecoverDlgComponent_CallbackFunc_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GachaMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMessageMaster___, v24, v25, v26);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v27, v28, v29);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v30, v31, v32);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, v33, v34, v35);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v36, v37, v38);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarMaster___, v39, v40, v41);
    sub_B5D5C4(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v42, v43, v44);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v45, v46, v47);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&NetworkManager_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v54, v55, v56);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v57, v58, v59);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v60, v61, v62);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v63, v64, v65);
    sub_B5D5C4(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_0__, v66, v67, v68);
    sub_B5D5C4(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_11__, v69, v70, v71);
    sub_B5D5C4(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_13__, v72, v73, v74);
    sub_B5D5C4(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_1__, v75, v76, v77);
    sub_B5D5C4(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_2__, v78, v79, v80);
    sub_B5D5C4(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_3__, v81, v82, v83);
    sub_B5D5C4(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_4__, v84, v85, v86);
    sub_B5D5C4(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_7__, v87, v88, v89);
    sub_B5D5C4(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__10__, v90, v91, v92);
    sub_B5D5C4(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__12__, v93, v94, v95);
    sub_B5D5C4(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__9__, v96, v97, v98);
    sub_B5D5C4(&clsQuestCheck___c__DisplayClass41_0_TypeInfo, v99, v100, v101);
    sub_B5D5C4(&clsQuestCheck___c_TypeInfo, v102, v103, v104);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v105, v106, v107);
    sub_B5D5C4(&StringLiteral_11077/*"QUEST_MESSAGE_DLG_DECIDE"*/, v108, v109, v110);
    sub_B5D5C4(&StringLiteral_11076/*"QUEST_MESSAGE_DLG_CANCEL"*/, v111, v112, v113);
    sub_B5D5C4(&StringLiteral_11075/*"QUEST_ITEM_COST_OVER"*/, v114, v115, v116);
    sub_B5D5C4(&StringLiteral_11104/*"QUEST_TIME_OVER"*/, v117, v118, v119);
    sub_B5D5C4(&StringLiteral_12357/*"SHORT_DLG_TITLE"*/, v120, v121, v122);
    sub_B5D5C4(&StringLiteral_27/*"\n\n"*/, v123, v124, v125);
    sub_B5D5C4(&StringLiteral_2564/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, v126, v127, v128);
    sub_B5D5C4(&StringLiteral_1/*""*/, v129, v130, v131);
    sub_B5D5C4(&StringLiteral_11020/*"QUEST_AP_MAX_OVER"*/, v132, v133, v134);
    byte_42E73F4 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  v135 = sub_B5D694(clsQuestCheck___c__DisplayClass41_0_TypeInfo);
  clsQuestCheck___c__DisplayClass41_0___ctor((clsQuestCheck___c__DisplayClass41_0_o *)v135, 0LL);
  if ( !v135 )
    goto LABEL_222;
  *(_QWORD *)(v135 + 16) = this;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v135 + 16),
    (System_Int32_array **)this,
    v138,
    v139,
    v140,
    v141,
    v142,
    v143);
  *(_QWORD *)(v135 + 24) = questInfo;
  v144 = (MapControl_QuestInfo_o **)(v135 + 24);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v135 + 24),
    (System_Int32_array **)questInfo,
    v145,
    v146,
    v147,
    v148,
    v149,
    v150);
  SpotID = *(_QWORD *)(v135 + 24);
  *(_QWORD *)(v135 + 32) = srcEndTime;
  *(_DWORD *)(v135 + 40) = boostId;
  if ( !SpotID )
    goto LABEL_222;
  SpotID = MapControl_QuestInfo__GetSpotID((MapControl_QuestInfo_o *)SpotID, 0LL);
  if ( !*v144 )
    goto LABEL_222;
  questId = (*v144)->fields.questId;
  SpotID = (int64_t)MapControl_QuestInfo__GetMine(*v144, 0LL);
  if ( !*v144 )
    goto LABEL_222;
  if ( !SpotID )
    goto LABEL_222;
  SpotID = QuestEntity__getActConsume((QuestEntity_o *)SpotID, (*v144)->fields.costCalcVal, 0LL);
  v152 = *v144;
  if ( !*v144 )
    goto LABEL_222;
  v153 = v152->fields._fixedCostVal_k__BackingField >= 0 ? v152->fields._fixedCostVal_k__BackingField : SpotID;
  SpotID = (int64_t)MapControl_QuestInfo__GetMine(v152, 0LL);
  if ( !SpotID )
    goto LABEL_222;
  v154 = *(_DWORD *)(SpotID + 80);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  IsQuestReleaseAll = TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
  if ( v154 != 1 && !IsQuestReleaseAll )
  {
    SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SpotID )
      goto LABEL_222;
    MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)SpotID,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    SpotID = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_222;
    Entity = UserQuestMaster__GetEntity(MasterData_WarQuestSelectionMaster, SpotID, questId, 0LL);
    if ( !Entity || !UserQuestEntity__IsNotExpired(Entity, 0LL) )
    {
      v158 = *(_QWORD *)(v135 + 32);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      if ( v158 >= 1 && v158 - Time <= 0 )
      {
        v160 = (System_String_o *)StringLiteral_1/*""*/;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v161 = LocalizationManager__Get((System_String_o *)StringLiteral_11104/*"QUEST_TIME_OVER"*/, 0LL);
        SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v162 = (CommonUI_o *)SpotID;
        v163 = clsQuestCheck___c_TypeInfo;
        if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
          v163 = clsQuestCheck___c_TypeInfo;
        }
        static_fields = v163->static_fields;
        _9__41_3 = static_fields->__9__41_3;
        if ( _9__41_3 )
          goto LABEL_58;
        if ( (BYTE3(v163->vtable._0_Equals.methodPtr) & 4) != 0 && !v163->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v163);
          static_fields = clsQuestCheck___c_TypeInfo->static_fields;
        }
        v166 = (Il2CppObject *)static_fields->__9;
        _9__41_3 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(_9__41_3, v166, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_3__, 0LL);
        v173 = (System_Int32_array **)_9__41_3;
        v174 = clsQuestCheck___c_TypeInfo->static_fields;
        v174->__9__41_3 = _9__41_3;
        p__9__41_3 = (BattleServantConfConponent_o *)&v174->__9__41_3;
LABEL_57:
        sub_B5D560(p__9__41_3, v173, v167, v168, v169, v170, v171, v172);
LABEL_58:
        if ( !v162 )
          goto LABEL_222;
        CommonUI__OpenNotificationDialog(v162, v160, v161, _9__41_3, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
        goto LABEL_121;
      }
    }
  }
  SpotID = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !*v144 )
    goto LABEL_222;
  v176 = (UserGameEntity_o *)SpotID;
  SpotID = (int64_t)MapControl_QuestInfo__GetMine(*v144, 0LL);
  if ( !SpotID )
    goto LABEL_222;
  v177 = (QuestEntity_o *)SpotID;
  SpotID = QuestEntity__GetConsumeType((QuestEntity_o *)SpotID, 0LL);
  if ( (_DWORD)SpotID == 1 )
  {
    if ( !v176 )
      goto LABEL_222;
    if ( v153 > v176->fields.actMax )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v160 = LocalizationManager__Get((System_String_o *)StringLiteral_12357/*"SHORT_DLG_TITLE"*/, 0LL);
      v161 = LocalizationManager__Get((System_String_o *)StringLiteral_11020/*"QUEST_AP_MAX_OVER"*/, 0LL);
      SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v162 = (CommonUI_o *)SpotID;
      v180 = clsQuestCheck___c_TypeInfo;
      if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
        v180 = clsQuestCheck___c_TypeInfo;
      }
      v181 = v180->static_fields;
      _9__41_3 = v181->__9__41_4;
      if ( _9__41_3 )
        goto LABEL_58;
      if ( (BYTE3(v180->vtable._0_Equals.methodPtr) & 4) != 0 && !v180->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v180);
        v181 = clsQuestCheck___c_TypeInfo->static_fields;
      }
      v182 = (Il2CppObject *)v181->__9;
      _9__41_3 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(_9__41_3, v182, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_4__, 0LL);
      v173 = (System_Int32_array **)_9__41_3;
      v183 = clsQuestCheck___c_TypeInfo->static_fields;
      v183->__9__41_4 = _9__41_3;
      p__9__41_3 = (BattleServantConfConponent_o *)&v183->__9__41_4;
      goto LABEL_57;
    }
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B24 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v137, v178, v179);
    byte_42E4B24 = 1;
  }
  v184 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v184 = TerminalPramsManager_TypeInfo;
  }
  v184->static_fields->_QuestId_k__BackingField = questId;
  v185 = *(_QWORD *)(v135 + 32);
  if ( !byte_42E4B72 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v137, v178, v179);
    v184 = TerminalPramsManager_TypeInfo;
    byte_42E4B72 = 1;
  }
  if ( (BYTE3(v184->vtable._0_Equals.methodPtr) & 4) != 0 && !v184->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v184);
    v184 = TerminalPramsManager_TypeInfo;
  }
  v184->static_fields->_EndTime_k__BackingField = v185;
  v184->static_fields->lastPlayQuestConsumeAp = v153;
  TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(0LL);
  SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_222;
  SpotID = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)SpotID,
                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SpotID )
    goto LABEL_222;
  v186 = (UserServantMaster_o *)SpotID;
  UserServantMaster__getCount((UserServantMaster_o *)SpotID, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_222;
  v187 = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)SpotID,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v186, 1, 0LL) )
  {
    SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v176 )
      goto LABEL_222;
    v188 = (CommonUI_o *)SpotID;
    v189 = servantEquipSum[1];
    svtKeep = v176->fields.svtKeep;
    SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
      SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    }
    v191 = *(struct clsQuestCheck___c_StaticFields **)(SpotID + 184);
    _9__41_0 = v191->__9__41_0;
    if ( !_9__41_0 )
    {
      if ( (*(_BYTE *)(SpotID + 307) & 4) != 0 && !*(_DWORD *)(SpotID + 224) )
      {
        j_il2cpp_runtime_class_init_0(SpotID);
        v191 = clsQuestCheck___c_TypeInfo->static_fields;
      }
      v193 = (Il2CppObject *)v191->__9;
      _9__41_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B5D694(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__41_0,
        v193,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__41_0__,
        0LL);
      v194 = clsQuestCheck___c_TypeInfo->static_fields;
      v194->__9__41_0 = _9__41_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v194->__9__41_0,
        (System_Int32_array **)_9__41_0,
        v195,
        v196,
        v197,
        v198,
        v199,
        v200);
    }
    if ( !v188 )
      goto LABEL_222;
    v201 = v188;
    v202 = v189;
    v203 = svtKeep;
    v204 = 0;
    goto LABEL_120;
  }
  SpotID = UserServantMaster__CheckEquipAdd(v186, 1, 1, 0LL);
  if ( (SpotID & 1) != 0 )
  {
    SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v176 )
      goto LABEL_222;
    v205 = (CommonUI_o *)SpotID;
    v206 = servantEquipSum[0];
    svtEquipKeep = v176->fields.svtEquipKeep;
    SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
      SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    }
    v208 = *(struct clsQuestCheck___c_StaticFields **)(SpotID + 184);
    _9__41_0 = v208->__9__41_1;
    if ( !_9__41_0 )
    {
      if ( (*(_BYTE *)(SpotID + 307) & 4) != 0 && !*(_DWORD *)(SpotID + 224) )
      {
        j_il2cpp_runtime_class_init_0(SpotID);
        v208 = clsQuestCheck___c_TypeInfo->static_fields;
      }
      v209 = (Il2CppObject *)v208->__9;
      _9__41_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B5D694(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__41_0,
        v209,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__41_1__,
        0LL);
      v210 = clsQuestCheck___c_TypeInfo->static_fields;
      v210->__9__41_1 = _9__41_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v210->__9__41_1,
        (System_Int32_array **)_9__41_0,
        v211,
        v212,
        v213,
        v214,
        v215,
        v216);
    }
    if ( !v205 )
      goto LABEL_222;
    v204 = 1;
    v201 = v205;
    v202 = v206;
LABEL_119:
    v203 = svtEquipKeep;
LABEL_120:
    CommonUI__OpenSvtFrameShortDlg(v201, v202, v203, v204, 1, _9__41_0, 0, 0LL);
    goto LABEL_121;
  }
  if ( !v187 )
    goto LABEL_222;
  if ( UserCommandCodeMaster__CheckCommandCodeAdd(v187, 0, 0LL) )
  {
    Count = UserCommandCodeMaster__getCount(v187, 0LL);
    SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v176 )
      goto LABEL_222;
    v220 = (CommonUI_o *)SpotID;
    if ( !byte_42E4B73 )
    {
      sub_B5D5C4(&BalanceConfig_TypeInfo, v137, v218, v219);
      byte_42E4B73 = 1;
    }
    v221 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v221 = BalanceConfig_TypeInfo;
    }
    SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    svtEquipKeep = v221->static_fields->CommandCodeFrameMax;
    if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
      SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    }
    v222 = *(struct clsQuestCheck___c_StaticFields **)(SpotID + 184);
    _9__41_0 = v222->__9__41_7;
    if ( !_9__41_0 )
    {
      if ( (*(_BYTE *)(SpotID + 307) & 4) != 0 && !*(_DWORD *)(SpotID + 224) )
      {
        j_il2cpp_runtime_class_init_0(SpotID);
        v222 = clsQuestCheck___c_TypeInfo->static_fields;
      }
      v223 = (Il2CppObject *)v222->__9;
      _9__41_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B5D694(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__41_0,
        v223,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__41_7__,
        0LL);
      v224 = clsQuestCheck___c_TypeInfo->static_fields;
      v224->__9__41_7 = _9__41_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v224->__9__41_7,
        (System_Int32_array **)_9__41_0,
        v225,
        v226,
        v227,
        v228,
        v229,
        v230);
    }
    if ( !v220 )
      goto LABEL_222;
    v204 = 2;
    v201 = v220;
    v202 = Count;
    goto LABEL_119;
  }
  SpotID = QuestEntity__GetConsumeType(v177, 0LL);
  switch ( (int)SpotID )
  {
    case 1:
      if ( !v176 )
        goto LABEL_222;
      if ( v153 <= UserGameEntity__getAct(v176, 0LL) )
        goto LABEL_205;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v233 = (RecoverDlgComponent_CallbackFunc_o *)sub_B5D694(RecoverDlgComponent_CallbackFunc_TypeInfo);
      RecoverDlgComponent_CallbackFunc___ctor(
        v233,
        (Il2CppObject *)v135,
        Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__9__,
        0LL);
      if ( !Instance )
        goto LABEL_222;
      v234 = (CommonUI_o *)Instance;
      v235 = v153;
      v236 = v233;
      v237 = 0;
      goto LABEL_172;
    case 2:
      if ( !v176 )
        goto LABEL_222;
      if ( v153 <= UserGameEntity__getRp(v176, 0LL) )
        goto LABEL_205;
      v270 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v271 = (RecoverDlgComponent_CallbackFunc_o *)sub_B5D694(RecoverDlgComponent_CallbackFunc_TypeInfo);
      RecoverDlgComponent_CallbackFunc___ctor(
        v271,
        (Il2CppObject *)v135,
        Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__10__,
        0LL);
      if ( !v270 )
        goto LABEL_222;
      CommonUI__OpenRpRecoverItemListDialog(v270, v153, v271, 0, 0LL);
      return 0;
    case 3:
      ItemConsumeEntity = QuestEntity__getItemConsumeEntity(v177, 0LL);
      SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_222;
      v239 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)SpotID,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
      SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_222;
      v240 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)SpotID,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
      SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( !ItemConsumeEntity )
        goto LABEL_205;
      v241 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL) )
        goto LABEL_205;
      v242 = 0;
      str0 = v241;
      v292 = 0;
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
          goto LABEL_222;
        if ( v242 >= itemIds->max_length )
          goto LABEL_223;
        if ( !v239 )
          goto LABEL_222;
        SpotID = (int64_t)UserItemMaster__GetEntity(v239, SpotID, itemIds->m_Items[v242 + 1], 0LL);
        v244 = ItemConsumeEntity->fields.itemIds;
        if ( !v244 )
          goto LABEL_222;
        if ( v242 >= v244->max_length )
          goto LABEL_223;
        if ( !v240 )
          goto LABEL_222;
        v245 = SpotID;
        SpotID = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v240,
                            v244->m_Items[v242 + 1],
                            (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !SpotID )
          goto LABEL_222;
        v246 = SpotID;
        if ( *(_DWORD *)(SpotID + 48) == 1 )
        {
          if ( !SelfUserGame )
            goto LABEL_222;
          klass = (int32_t)SelfUserGame[4].klass;
        }
        else if ( v245 && (SpotID = ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0LL), (SpotID & 1) != 0) )
        {
          klass = *(_DWORD *)(v245 + 28);
        }
        else
        {
          klass = 0;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_222;
        if ( v242 >= nums->max_length )
          goto LABEL_223;
        if ( nums->m_Items[v242 + 1] > klass )
        {
          str0 = System_String__Concat_44580072(
                   str0,
                   (System_String_o *)StringLiteral_26/*"\n"*/,
                   *(System_String_o **)(v246 + 24),
                   0LL);
          v292 = 1;
        }
        ++v242;
      }
      while ( QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, v242, 0LL) );
      if ( (v292 & 1) == 0 )
        goto LABEL_205;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v249 = LocalizationManager__Get((System_String_o *)StringLiteral_11075/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v250 = System_String__Format(v249, (Il2CppObject *)str0, 0LL);
      v251 = System_String__Concat_44577788(v250, (System_String_o *)StringLiteral_27/*"\n\n"*/, 0LL);
      v252 = LocalizationManager__Get((System_String_o *)StringLiteral_2564/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v253 = System_String__Concat_44577788(v251, v252, 0LL);
      SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v254 = (CommonUI_o *)SpotID;
      v255 = clsQuestCheck___c_TypeInfo;
      if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
        v255 = clsQuestCheck___c_TypeInfo;
      }
      v256 = v255->static_fields;
      v257 = (System_String_o *)StringLiteral_1/*""*/;
      _9__41_11 = v256->__9__41_11;
      if ( _9__41_11 )
        goto LABEL_220;
      if ( (BYTE3(v255->vtable._0_Equals.methodPtr) & 4) != 0 && !v255->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v255);
        v256 = clsQuestCheck___c_TypeInfo->static_fields;
      }
      v259 = (Il2CppObject *)v256->__9;
      _9__41_11 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(_9__41_11, v259, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_11__, 0LL);
      v266 = clsQuestCheck___c_TypeInfo->static_fields;
      v266->__9__41_11 = _9__41_11;
      p__9__41_11 = (BattleServantConfConponent_o *)&v266->__9__41_11;
      goto LABEL_219;
    case 4:
      if ( !v176 )
        goto LABEL_222;
      if ( v153 <= UserGameEntity__getAct(v176, 0LL) )
      {
        v272 = QuestEntity__getItemConsumeEntity(v177, 0LL);
        SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SpotID )
          goto LABEL_222;
        v273 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)SpotID,
                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
        SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SpotID )
          goto LABEL_222;
        str0a = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)SpotID,
                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
        v293 = UserGameMaster__getSelfUserGame(0LL);
        if ( !v272 )
          goto LABEL_205;
        v274 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !QuestConsumeItemEntity__IsAvailableAt(v272, 0, 0LL) )
          goto LABEL_205;
        v275 = 0;
        v295 = v274;
        v291 = 0;
        do
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          SpotID = NetworkManager__get_UserId(0LL);
          v276 = v272->fields.itemIds;
          if ( !v276 )
            goto LABEL_222;
          if ( v275 >= v276->max_length )
            goto LABEL_223;
          if ( !v273 )
            goto LABEL_222;
          SpotID = (int64_t)UserItemMaster__GetEntity(v273, SpotID, v276->m_Items[v275 + 1], 0LL);
          v277 = v272->fields.itemIds;
          if ( !v277 )
            goto LABEL_222;
          if ( v275 >= v277->max_length )
            goto LABEL_223;
          v278 = SpotID;
          SpotID = (int64_t)str0a;
          if ( !str0a )
            goto LABEL_222;
          SpotID = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)str0a,
                              v277->m_Items[v275 + 1],
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( !SpotID )
            goto LABEL_222;
          v279 = SpotID;
          if ( *(_DWORD *)(SpotID + 48) == 1 )
          {
            if ( !v293 )
              goto LABEL_222;
            qp = v293->fields.qp;
          }
          else if ( v278 && (SpotID = ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0LL), (SpotID & 1) != 0) )
          {
            qp = *(_DWORD *)(v278 + 28);
          }
          else
          {
            qp = 0;
          }
          v281 = v272->fields.nums;
          if ( !v281 )
            goto LABEL_222;
          if ( v275 >= v281->max_length )
          {
LABEL_223:
            v290 = sub_B5D6C8(SpotID);
            sub_B5D668(v290, 0LL);
          }
          if ( v281->m_Items[v275 + 1] > qp )
          {
            v295 = System_String__Concat_44580072(
                     v295,
                     (System_String_o *)StringLiteral_26/*"\n"*/,
                     *(System_String_o **)(v279 + 24),
                     0LL);
            v291 = 1;
          }
          ++v275;
        }
        while ( QuestConsumeItemEntity__IsAvailableAt(v272, v275, 0LL) );
        if ( (v291 & 1) == 0 )
        {
LABEL_205:
          SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( SpotID )
          {
            SpotID = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)SpotID,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarMaster___);
            if ( SpotID )
              JUMPOUT(0x15B9A10LL);
          }
          goto LABEL_222;
        }
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v282 = LocalizationManager__Get((System_String_o *)StringLiteral_11075/*"QUEST_ITEM_COST_OVER"*/, 0LL);
        v283 = System_String__Format(v282, (Il2CppObject *)v295, 0LL);
        v284 = System_String__Concat_44577788(v283, (System_String_o *)StringLiteral_27/*"\n\n"*/, 0LL);
        v285 = LocalizationManager__Get((System_String_o *)StringLiteral_2564/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
        v253 = System_String__Concat_44577788(v284, v285, 0LL);
        SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v254 = (CommonUI_o *)SpotID;
        v286 = clsQuestCheck___c_TypeInfo;
        if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
          v286 = clsQuestCheck___c_TypeInfo;
        }
        v287 = v286->static_fields;
        v257 = (System_String_o *)StringLiteral_1/*""*/;
        _9__41_11 = v287->__9__41_13;
        if ( !_9__41_11 )
        {
          if ( (BYTE3(v286->vtable._0_Equals.methodPtr) & 4) != 0 && !v286->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v286);
            v287 = clsQuestCheck___c_TypeInfo->static_fields;
          }
          v288 = (Il2CppObject *)v287->__9;
          _9__41_11 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(_9__41_11, v288, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_13__, 0LL);
          v289 = clsQuestCheck___c_TypeInfo->static_fields;
          v289->__9__41_13 = _9__41_11;
          p__9__41_11 = (BattleServantConfConponent_o *)&v289->__9__41_13;
LABEL_219:
          sub_B5D560(p__9__41_11, (System_Int32_array **)_9__41_11, v260, v261, v262, v263, v264, v265);
        }
LABEL_220:
        if ( !v254 )
LABEL_222:
          sub_B5D69C(SpotID, v137);
        CommonUI__OpenNotificationDialog(v254, v257, v253, _9__41_11, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
LABEL_121:
        SpotID = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( SpotID )
        {
          ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)SpotID, 0LL);
          return 0;
        }
        goto LABEL_222;
      }
      v268 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v269 = (RecoverDlgComponent_CallbackFunc_o *)sub_B5D694(RecoverDlgComponent_CallbackFunc_TypeInfo);
      RecoverDlgComponent_CallbackFunc___ctor(
        v269,
        (Il2CppObject *)v135,
        Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__12__,
        0LL);
      if ( !v268 )
        goto LABEL_222;
      v237 = 1;
      v234 = (CommonUI_o *)v268;
      v235 = v153;
      v236 = v269;
LABEL_172:
      CommonUI__OpenApRecoverItemListDialog(v234, v235, v236, v237, 0LL);
      return 0;
    default:
      goto LABEL_205;
  }
}


bool __fastcall clsQuestCheck__CheckQuestPlayableNow(clsQuestCheck_o *this, int32_t questId, const MethodInfo *method)
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
  UserQuestMaster_o *Master_WarQuestSelectionMaster; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *UserId; // x0
  __int64 v20; // x1
  bool v21; // w0
  const MethodInfo *v22; // x2
  bool IsOpenByTime; // w8
  QuestEntity_o *v25; // [xsp+0h] [xbp-30h] BYREF
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E73D7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestMaster___, questId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserQuestMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v12, v13, v14);
    sub_B5D5C4(&NetworkManager_TypeInfo, v15, v16, v17);
    byte_42E73D7 = 1;
  }
  v25 = 0LL;
  entity = 0LL;
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, method) )
    return 0;
  v25 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserQuestMaster___);
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
  UserId = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !UserId )
LABEL_25:
    sub_B5D69C(UserId, v20);
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          UserId,
          (WarEntity_o **)&v25,
          questId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  UserId = (DataMasterBase_WarMaster__WarEntity__int__o *)v25;
  if ( !v25 )
    goto LABEL_25;
  IsOpenByTime = QuestEntity__IsOpenByTime(v25, 0, 0LL);
  v21 = 0;
  if ( IsOpenByTime )
    return clsQuestCheck__IsReleasedQuest(this, questId, v22);
  return v21;
}


void __fastcall clsQuestCheck__DeleteContinueData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  clsQuestCheck_c *v7; // x0
  System_String_o *KEY_QUEST_START_EFFECT; // x19

  if ( (byte_42E73D4 & 1) == 0 )
  {
    sub_B5D5C4(&EncryptedPlayerPrefs_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&clsQuestCheck_TypeInfo, v4, v5, v6);
    byte_42E73D4 = 1;
  }
  v7 = clsQuestCheck_TypeInfo;
  if ( (BYTE3(clsQuestCheck_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !clsQuestCheck_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
    v7 = clsQuestCheck_TypeInfo;
  }
  KEY_QUEST_START_EFFECT = v7->static_fields->KEY_QUEST_START_EFFECT;
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
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v12; // x1
  bool v13; // w8
  int32_t result; // w0
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  TerminalPramsManager_c *v18; // x0

  if ( (byte_42E73E7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__,
      is_quest_after_action,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v8, v9, v10);
    byte_42E73E7 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v13 = AvalonSceneManager__checkNowScene(Instance, 34, 0LL);
  result = -1;
  if ( !v13 || !is_quest_after_action )
    return result;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
LABEL_19:
    sub_B5D69C(Instance, v12);
  if ( !QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0LL) )
    return -1;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v15, v16, v17);
    byte_42E4B33 = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  return v18->static_fields->_QuestId_k__BackingField;
}


System_Int32_array *__fastcall clsQuestCheck__GetEventQuestIdListPlayable(
        clsQuestCheck_o *this,
        int32_t eventId,
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
  System_Collections_Generic_List_int__o *v24; // x20
  QuestGroupMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  struct System_String_o *MasterName_k__BackingField; // x8
  QuestGroupMaster_o *v29; // x21
  unsigned __int64 v30; // x23
  int32_t v31; // w22
  __int64 v33; // x0

  if ( (byte_42E73F0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestGroupMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&int___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v21, v22, v23);
    byte_42E73F0 = 1;
  }
  if ( eventId <= 0 )
    return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  v24 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_20;
  Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)QuestGroupMaster__GetQuestIdListByEventId(
                                                           Master_WarQuestSelectionMaster,
                                                           eventId,
                                                           0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_20;
  MasterName_k__BackingField = Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
  v29 = Master_WarQuestSelectionMaster;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v30 = 0LL;
    do
    {
      if ( v30 >= (unsigned int)MasterName_k__BackingField )
      {
        v33 = sub_B5D6C8(Master_WarQuestSelectionMaster);
        sub_B5D668(v33, 0LL);
      }
      v31 = *((_DWORD *)&v29->fields.list + v30);
      Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)clsQuestCheck__CheckQuestPlayableNow(this, v31, v27);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        if ( !v24 )
          goto LABEL_20;
        System_Collections_Generic_List_int___Add(
          v24,
          v31,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(MasterName_k__BackingField) = v29->fields._MasterName_k__BackingField;
      ++v30;
    }
    while ( (__int64)v30 < (int)MasterName_k__BackingField );
  }
  if ( !v24 )
LABEL_20:
    sub_B5D69C(Master_WarQuestSelectionMaster, v26);
  return System_Collections_Generic_List_int___ToArray(
           v24,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall clsQuestCheck__GetNewPlayableEventQuestId(
        clsQuestCheck_o *this,
        int32_t eventId,
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
  TerminalPramsManager_c *v33; // x0
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  TerminalPramsManager_c *v37; // x0
  System_String_o *ClearEventQuestIds_k__BackingField; // x21
  System_Char_array *v39; // x0
  System_Char_array *v40; // x1
  System_String_array *v41; // x21
  System_Converter_BattleActionData_HealData__int__o *v42; // x22
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  int v52; // w1
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array *v59; // x19
  System_Int32_array **v60; // x20
  TerminalPramsManager_c *v61; // x0
  BattleServantConfConponent_o *v62; // x0
  System_Int32_array **v63; // x19
  TerminalPramsManager_c *v64; // x0
  BattleServantConfConponent_o *p_ClearEventQuestIds_k__BackingField; // x0
  __int64 v67; // x0

  if ( (byte_42E73EF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_ConvertAll_string__int___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&char___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Converter_string__int___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Converter_string__int__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Except_int___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v18, v19, v20);
    sub_B5D5C4(&int___TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_System_Int32_Parse__, v24, v25, v26);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_1/*""*/, v30, v31, v32);
    byte_42E73EF = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CD7 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, eventId, (_DWORD)method, v3);
    byte_42E5CD7 = 1;
  }
  v33 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v33 = TerminalPramsManager_TypeInfo;
  }
  if ( System_String__IsNullOrEmpty(v33->static_fields->_ClearEventQuestIds_k__BackingField, 0LL) )
    return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CD7 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v34, v35, v36);
    byte_42E5CD7 = 1;
  }
  v37 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v37 = TerminalPramsManager_TypeInfo;
  }
  ClearEventQuestIds_k__BackingField = v37->static_fields->_ClearEventQuestIds_k__BackingField;
  v39 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v39 )
    goto LABEL_45;
  v40 = v39;
  if ( !v39->max_length )
  {
    v67 = sub_B5D6C8(v39);
    sub_B5D668(v67, 0LL);
  }
  v39->m_Items[2] = 44;
  if ( !ClearEventQuestIds_k__BackingField
    || (v41 = System_String__Split(ClearEventQuestIds_k__BackingField, v39, 0LL),
        v42 = (System_Converter_BattleActionData_HealData__int__o *)sub_B5D694(System_Converter_string__int__TypeInfo),
        System_Converter_BattleActionData_HealData__int____ctor(
          v42,
          0LL,
          Method_System_Int32_Parse__,
          (const MethodInfo_23F6FAC *)Method_System_Converter_string__int___ctor__),
        (v39 = (System_Char_array *)System_Array__ConvertAll_string__int_(
                                      v41,
                                      (System_Converter_TInput__TOutput__o *)v42,
                                      (const MethodInfo_1FBF43C *)Method_System_Array_ConvertAll_string__int___)) == 0LL) )
  {
LABEL_45:
    sub_B5D69C(v39, v40);
  }
  v49 = (System_Collections_Generic_IEnumerable_TSource__o *)v39;
  if ( !*(_QWORD *)&v39->max_length )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    v63 = (System_Int32_array **)StringLiteral_1/*""*/;
    if ( !byte_42E5CCD )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)v40, (_DWORD)v43, v44);
      byte_42E5CCD = 1;
    }
    v64 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v64 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (BattleServantConfConponent_o *)&v64->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = (BattleServantConfConponent_c *)v63;
    sub_B5D560(p_ClearEventQuestIds_k__BackingField, v63, v43, v44, v45, v46, v47, v48);
    TerminalPramsManager__ClearEventQuestIds_SaveData(0LL);
    return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  }
  v50 = (System_Collections_Generic_IEnumerable_TSource__o *)clsQuestCheck__GetEventQuestIdListPlayable(
                                                               this,
                                                               eventId,
                                                               (const MethodInfo *)v43);
  v51 = System_Linq_Enumerable__Except_int_(
          v50,
          v49,
          (const MethodInfo_1CAA2C8 *)Method_System_Linq_Enumerable_Except_int___);
  v59 = System_Linq_Enumerable__ToArray_int_(
          v51,
          (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  v60 = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( !byte_42E5CCD )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v52, (_DWORD)v53, v54);
    byte_42E5CCD = 1;
  }
  v61 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v61 = TerminalPramsManager_TypeInfo;
  }
  v62 = (BattleServantConfConponent_o *)&v61->static_fields->_ClearEventQuestIds_k__BackingField;
  v62->klass = (BattleServantConfConponent_c *)v60;
  sub_B5D560(v62, v60, v53, v54, v55, v56, v57, v58);
  TerminalPramsManager__ClearEventQuestIds_SaveData(0LL);
  return v59;
}


System_Collections_Generic_List_QuestEntity__o *__fastcall clsQuestCheck__GetQuestEntityByQuestId(
        clsQuestCheck_o *this,
        System_Collections_Generic_List_int__o *qids,
        const MethodInfo *method)
{
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
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x19
  DataManager_o *Instance; // x0
  __int64 v34; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v35; // x21
  _BOOL8 v36; // x0
  __int64 v37; // x1
  WarEntity_o *Entity; // x0
  System_Collections_Generic_List_Enumerator_int__o v40; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v41; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E73ED & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, (_DWORD)qids, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestEntity__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_QuestEntity__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    byte_42E73ED = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___),
        !qids) )
  {
    sub_B5D69C(Instance, v34);
  }
  v35 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    qids,
    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v41 = v40;
  while ( 1 )
  {
    v36 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v41,
            (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v36 )
      break;
    if ( !v35 )
      sub_B5D69C(v36, v37);
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v35,
               v41.fields.current,
               (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    if ( !v32 )
      sub_B5D69C(Entity, Entity);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v32,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v41,
    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return (System_Collections_Generic_List_QuestEntity__o *)v32;
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
  System_Collections_Generic_List_int__o *v51; // x19
  DataManager_o *Instance; // x0
  __int64 v53; // x1
  QuestReleaseEntity_array *ListByType; // x24
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v56; // x25
  unsigned int v57; // w28
  QuestReleaseEntity_o *v58; // x8
  int32_t questId; // w26
  const MethodInfo *v60; // x4
  System_Collections_Generic_List_int__o *v61; // x23
  const MethodInfo *v62; // x4
  unsigned int datalist; // w8
  int v64; // w25
  unsigned __int64 v65; // x20
  int32_t v66; // w26
  int v67; // w8
  __int64 v69; // x0
  _BYTE v70[32]; // [xsp+8h] [xbp-98h] BYREF
  int v71; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_int__o v72; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42E73EC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, svt_id, oldFriendShipRank, *(_QWORD *)&type_flag);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__RemoveAt__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v42, v43, v44);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v45, v46, v47);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v48, v49, v50);
    byte_42E73EC = 1;
  }
  memset(&v72, 0, sizeof(v72));
  v71 = 0;
  v51 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v51,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_36;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 9, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_36;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v56 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v57 = 0;
    while ( 1 )
    {
      if ( v57 >= max_length )
      {
        v69 = sub_B5D6C8(Instance);
        sub_B5D668(v69, 0LL);
      }
      v58 = ListByType->m_Items[v57];
      if ( !v58 )
        break;
      if ( v58->fields.targetId == svt_id )
      {
        if ( !v56 )
          break;
        questId = v58->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v56,
                                      questId,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, questId, oldFriendShipRank, 9, v60);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v51 )
              break;
            System_Collections_Generic_List_int___Add(
              v51,
              questId,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v57 >= max_length )
        goto LABEL_19;
    }
LABEL_36:
    sub_B5D69C(Instance, v53);
  }
LABEL_19:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v61 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_50870440(
      v61,
      (System_Collections_Generic_IEnumerable_T__o *)v51,
      (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
    Instance = (DataManager_o *)clsQuestCheck__GetReleaseQuestIdByServantFriendShip(this, svt_id, -1, type_flag, v62);
    if ( !Instance )
      goto LABEL_36;
    datalist = (unsigned int)Instance->fields.datalist;
    v51 = (System_Collections_Generic_List_int__o *)Instance;
    if ( (int)(datalist - 1) >= 0 )
    {
      v64 = 0;
      v65 = (int)(datalist - 1);
      while ( 1 )
      {
        if ( v65 >= datalist )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !v61 )
          goto LABEL_36;
        v66 = v51->fields._items->m_Items[v65 + 1];
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v70,
          v61,
          (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v72 = *(System_Collections_Generic_List_Enumerator_int__o *)v70;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v72,
                  (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v66 == v72.fields.current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v51,
              v65,
              (const MethodInfo_30860C4 *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        *(_DWORD *)&v70[4 * v64 + 24] = 226;
        v64 = ++v71;
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v72,
          (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( v64 )
        {
          v67 = v64 - 1;
          if ( *(_DWORD *)&v70[4 * v64 + 20] == 226 )
          {
            --v64;
            v71 = v67;
          }
        }
        if ( (--v65 & 0x80000000) != 0 )
          return v51;
        datalist = v51->fields._size;
      }
    }
  }
  return v51;
}


System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLimitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__GetReleaseQuestIdByServantLimit_22765100(this, svt_id, oldLimitCount, 238, v4);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit_22765100(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLimitCount,
        int32_t type_flag,
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
  System_Collections_Generic_List_int__o *v51; // x19
  DataManager_o *Instance; // x0
  __int64 v53; // x1
  QuestReleaseEntity_array *ListByType; // x24
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v56; // x25
  unsigned int v57; // w28
  QuestReleaseEntity_o *v58; // x8
  int32_t questId; // w26
  const MethodInfo *v60; // x4
  System_Collections_Generic_List_int__o *v61; // x23
  const MethodInfo *v62; // x4
  unsigned int datalist; // w8
  int v64; // w25
  unsigned __int64 v65; // x20
  int32_t v66; // w26
  int v67; // w8
  __int64 v69; // x0
  _BYTE v70[32]; // [xsp+8h] [xbp-98h] BYREF
  int v71; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_int__o v72; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42E73E9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, svt_id, oldLimitCount, *(_QWORD *)&type_flag);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__RemoveAt__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v42, v43, v44);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v45, v46, v47);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v48, v49, v50);
    byte_42E73E9 = 1;
  }
  memset(&v72, 0, sizeof(v72));
  v71 = 0;
  v51 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v51,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_36;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_36;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v56 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v57 = 0;
    while ( 1 )
    {
      if ( v57 >= max_length )
      {
        v69 = sub_B5D6C8(Instance);
        sub_B5D668(v69, 0LL);
      }
      v58 = ListByType->m_Items[v57];
      if ( !v58 )
        break;
      if ( v58->fields.targetId == svt_id )
      {
        if ( !v56 )
          break;
        questId = v58->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v56,
                                      questId,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, questId, oldLimitCount, 7, v60);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v51 )
              break;
            System_Collections_Generic_List_int___Add(
              v51,
              questId,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v57 >= max_length )
        goto LABEL_19;
    }
LABEL_36:
    sub_B5D69C(Instance, v53);
  }
LABEL_19:
  if ( (oldLimitCount & 0x80000000) == 0 )
  {
    v61 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_50870440(
      v61,
      (System_Collections_Generic_IEnumerable_T__o *)v51,
      (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
    Instance = (DataManager_o *)clsQuestCheck__GetReleaseQuestIdByServantLimit_22765100(
                                  this,
                                  svt_id,
                                  -1,
                                  type_flag,
                                  v62);
    if ( !Instance )
      goto LABEL_36;
    datalist = (unsigned int)Instance->fields.datalist;
    v51 = (System_Collections_Generic_List_int__o *)Instance;
    if ( (int)(datalist - 1) >= 0 )
    {
      v64 = 0;
      v65 = (int)(datalist - 1);
      while ( 1 )
      {
        if ( v65 >= datalist )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !v61 )
          goto LABEL_36;
        v66 = v51->fields._items->m_Items[v65 + 1];
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v70,
          v61,
          (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v72 = *(System_Collections_Generic_List_Enumerator_int__o *)v70;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v72,
                  (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v66 == v72.fields.current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v51,
              v65,
              (const MethodInfo_30860C4 *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        *(_DWORD *)&v70[4 * v64 + 24] = 225;
        v64 = ++v71;
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v72,
          (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( v64 )
        {
          v67 = v64 - 1;
          if ( *(_DWORD *)&v70[4 * v64 + 20] == 225 )
          {
            --v64;
            v71 = v67;
          }
        }
        if ( (--v65 & 0x80000000) != 0 )
          return v51;
        datalist = v51->fields._size;
      }
    }
  }
  return v51;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit_22766084(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLimitCount,
        int32_t newLimitCount,
        int32_t type_flag,
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
  System_Collections_Generic_List_int__o *v48; // x19
  DataManager_o *Instance; // x0
  __int64 v50; // x1
  QuestReleaseEntity_array *ListByType; // x25
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v53; // x26
  unsigned int v54; // w21
  QuestReleaseEntity_o *v55; // x8
  int32_t questId; // w27
  const MethodInfo *v57; // x4
  System_Collections_Generic_List_int__o *v58; // x24
  int v59; // w8
  __int64 v60; // x28
  QuestReleaseEntity_o *v61; // x8
  int32_t v62; // w27
  const MethodInfo *v63; // x4
  unsigned int size; // w8
  int v65; // w26
  unsigned __int64 v66; // x20
  int32_t v67; // w25
  int v68; // w8
  __int64 v70; // x0
  _BYTE v73[32]; // [xsp+18h] [xbp-98h] BYREF
  int v74; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_int__o v75; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_42E73EA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, svt_id, oldLimitCount, *(_QWORD *)&newLimitCount);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__RemoveAt__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v39, v40, v41);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45, v46, v47);
    byte_42E73EA = 1;
  }
  memset(&v75, 0, sizeof(v75));
  v74 = 0;
  v48 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v48,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_47;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_47;
  max_length = ListByType->max_length;
  v53 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  if ( max_length >= 1 )
  {
    v54 = 0;
    while ( v54 < max_length )
    {
      v55 = ListByType->m_Items[v54];
      if ( !v55 )
        goto LABEL_47;
      if ( v55->fields.targetId == svt_id )
      {
        if ( !v53 )
          goto LABEL_47;
        questId = v55->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v53,
                                      questId,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_47;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, questId, oldLimitCount, 7, v57);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v48 )
              goto LABEL_47;
            System_Collections_Generic_List_int___Add(
              v48,
              questId,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v54 >= max_length )
        goto LABEL_19;
    }
LABEL_48:
    v70 = sub_B5D6C8(Instance);
    sub_B5D668(v70, 0LL);
  }
LABEL_19:
  v58 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v58,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v59 = ListByType->max_length;
  if ( v59 >= 1 )
  {
    v60 = 0LL;
    while ( (unsigned int)v60 < v59 )
    {
      v61 = ListByType->m_Items[v60];
      if ( !v61 )
        goto LABEL_47;
      if ( v61->fields.targetId == svt_id )
      {
        if ( !v53 )
          goto LABEL_47;
        v62 = v61->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v53,
                                      v62,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_47;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, v62, newLimitCount, 7, v63);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v58 )
              goto LABEL_47;
            System_Collections_Generic_List_int___Add(
              v58,
              v62,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      v59 = ListByType->max_length;
      if ( (int)++v60 >= v59 )
        goto LABEL_31;
    }
    goto LABEL_48;
  }
LABEL_31:
  if ( !v58 )
LABEL_47:
    sub_B5D69C(Instance, v50);
  size = v58->fields._size;
  if ( (int)(size - 1) >= 0 )
  {
    v65 = 0;
    v66 = (int)(size - 1);
    while ( 1 )
    {
      if ( v66 >= size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( !v48 )
        goto LABEL_47;
      v67 = v58->fields._items->m_Items[v66 + 1];
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v73,
        v48,
        (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v75 = *(System_Collections_Generic_List_Enumerator_int__o *)v73;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v75,
                (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        if ( v67 == v75.fields.current )
        {
          System_Collections_Generic_List_int___RemoveAt(
            v58,
            v66,
            (const MethodInfo_30860C4 *)Method_System_Collections_Generic_List_int__RemoveAt__);
          break;
        }
      }
      *(_DWORD *)&v73[4 * v65 + 24] = 309;
      v65 = ++v74;
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v75,
        (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      if ( v65 )
      {
        v68 = v65 - 1;
        if ( *(_DWORD *)&v73[4 * v65 + 20] == 309 )
        {
          --v65;
          v74 = v68;
        }
      }
      if ( (--v66 & 0x80000000) != 0 )
        return v58;
      size = v58->fields._size;
    }
  }
  return v58;
}


System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLv(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLv,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__GetReleaseQuestIdByServantLv_22764596(this, svt_id, oldLv, 238, v4);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLv_22764596(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLv,
        int32_t type_flag,
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
  System_Collections_Generic_List_int__o *v27; // x23
  DataManager_o *Instance; // x0
  __int64 v29; // x1
  QuestReleaseEntity_array *ListByType; // x24
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v32; // x25
  unsigned int v33; // w27
  QuestReleaseEntity_o *v34; // x8
  int32_t questId; // w26
  const MethodInfo *v36; // x4
  __int64 v38; // x0

  if ( (byte_42E73E8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, svt_id, oldLv, *(_QWORD *)&type_flag);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    byte_42E73E8 = 1;
  }
  v27 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_20;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 6, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_20;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v32 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v33 = 0;
    while ( 1 )
    {
      if ( v33 >= max_length )
      {
        v38 = sub_B5D6C8(Instance);
        sub_B5D668(v38, 0LL);
      }
      v34 = ListByType->m_Items[v33];
      if ( !v34 )
        break;
      if ( v34->fields.targetId == svt_id )
      {
        if ( !v32 )
          break;
        questId = v34->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v32,
                                      questId,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, questId, oldLv, 6, v36);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v27 )
              break;
            System_Collections_Generic_List_int___Add(
              v27,
              questId,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v33 >= max_length )
        return v27;
    }
LABEL_20:
    sub_B5D69C(Instance, v29);
  }
  return v27;
}


System_Collections_Generic_List_QuestEntity__o *__fastcall clsQuestCheck__GetReleasedQuestEntityListByServantGet(
        clsQuestCheck_o *this,
        int32_t servantId,
        int32_t typeFlag,
        const MethodInfo *method)
{
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
  DataManager_o *Instance; // x0
  __int64 v48; // x1
  DataManager_o *v49; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  QuestReleaseMaster_o *v51; // x20
  int datalist; // w8
  DataManager_o *v53; // x26
  unsigned int v54; // w19
  __int64 v55; // x24
  __int64 v56; // x28
  int32_t v57; // w27
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  EventMissionProgressRequest_Argument_ProgressData_o **v64; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v65; // x24
  const MethodInfo *v66; // x4
  ServantGroupEntity_array *ListByServantID; // x19
  __int64 v68; // x8
  DataManager_o *v69; // x24
  unsigned __int64 v70; // x20
  int v71; // w8
  unsigned int v72; // w22
  __int64 v73; // x19
  __int64 v74; // x25
  __int64 v75; // x27
  int32_t v76; // w25
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  EventMissionProgressRequest_Argument_ProgressData_o **v83; // x26
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v84; // x28
  const MethodInfo *v85; // x4
  __int64 v87; // x0
  DataManager_o *v88; // [xsp+10h] [xbp-70h]
  DataManager_o *v89; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_T__o *list; // [xsp+28h] [xbp-58h]

  if ( (byte_42E73EB & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_QuestEntity___, servantId, typeFlag, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantGroupMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Func_QuestEntity__bool___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Func_QuestEntity__bool__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestEntity__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_QuestEntity__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33, v34);
    sub_B5D5C4(
      &Method_clsQuestCheck___c__DisplayClass31_0__GetReleasedQuestEntityListByServantGet_b__0__,
      v35,
      v36,
      v37);
    sub_B5D5C4(&clsQuestCheck___c__DisplayClass31_0_TypeInfo, v38, v39, v40);
    sub_B5D5C4(
      &Method_clsQuestCheck___c__DisplayClass31_1__GetReleasedQuestEntityListByServantGet_b__1__,
      v41,
      v42,
      v43);
    sub_B5D5C4(&clsQuestCheck___c__DisplayClass31_1_TypeInfo, v44, v45, v46);
    byte_42E73EB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  v49 = Instance;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  v51 = (QuestReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  v49,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  list = (System_Collections_Generic_List_T__o *)sub_B5D694(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  if ( !v51 )
    goto LABEL_43;
  v88 = v49;
  Instance = (DataManager_o *)QuestReleaseMaster__getListByType(v51, 8, 0LL);
  if ( !Instance )
    goto LABEL_43;
  datalist = (int)Instance->fields.datalist;
  v53 = Instance;
  if ( datalist >= 1 )
  {
    v54 = 0;
    while ( v54 < datalist )
    {
      v55 = *((_QWORD *)&v53->fields.lookup + (int)v54);
      v56 = sub_B5D694(clsQuestCheck___c__DisplayClass31_0_TypeInfo);
      clsQuestCheck___c__DisplayClass31_0___ctor((clsQuestCheck___c__DisplayClass31_0_o *)v56, 0LL);
      if ( !v55 )
        goto LABEL_43;
      if ( *(_DWORD *)(v55 + 24) == servantId )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_43;
        v57 = *(_DWORD *)(v55 + 16);
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      v57,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v56 )
          goto LABEL_43;
        *(_QWORD *)(v56 + 16) = Instance;
        v64 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v56 + 16);
        sub_B5D560(
          (BattleServantConfConponent_o *)(v56 + 16),
          (System_Int32_array **)Instance,
          v58,
          v59,
          v60,
          v61,
          v62,
          v63);
        v65 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_QuestEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v65,
          (Il2CppObject *)v56,
          Method_clsQuestCheck___c__DisplayClass31_0__GetReleasedQuestEntityListByServantGet_b__0__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_QuestEntity__bool___ctor__);
        Instance = (DataManager_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                      list,
                                      (System_Func_T__bool__o *)v65,
                                      (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)*v64;
          if ( !*v64 )
            goto LABEL_43;
          Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
          if ( ((unsigned int)Instance & typeFlag) != 0 )
          {
            Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, v57, -1, 0, v66);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (DataManager_o *)list;
              if ( !list )
                goto LABEL_43;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
                *v64,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestEntity__Add__);
            }
          }
        }
      }
      datalist = (int)v53->fields.datalist;
      if ( (int)++v54 >= datalist )
        goto LABEL_20;
    }
LABEL_44:
    v87 = sub_B5D6C8(Instance);
    sub_B5D668(v87, 0LL);
  }
LABEL_20:
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v88,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantGroupMaster___);
  if ( !Instance
    || (ListByServantID = ServantGroupMaster__getListByServantID((ServantGroupMaster_o *)Instance, servantId, 0LL),
        Instance = (DataManager_o *)QuestReleaseMaster__getListByType(v51, 10, 0LL),
        !ListByServantID) )
  {
LABEL_43:
    sub_B5D69C(Instance, v48);
  }
  v68 = *(_QWORD *)&ListByServantID->max_length;
  if ( (int)v68 >= 1 )
  {
    v69 = Instance;
    v70 = 0LL;
    v89 = (DataManager_o *)ListByServantID;
    while ( 1 )
    {
      if ( v70 >= (unsigned int)v68 )
        goto LABEL_44;
      if ( !v69 )
        goto LABEL_43;
      v71 = (int)v69->fields.datalist;
      if ( v71 >= 1 )
        break;
LABEL_41:
      ++v70;
      LODWORD(v68) = v89->fields.datalist;
      if ( (__int64)v70 >= (int)v68 )
        return (System_Collections_Generic_List_QuestEntity__o *)list;
    }
    v72 = 0;
    v73 = *((_QWORD *)&v89->fields.lookup + v70);
    while ( v72 < v71 )
    {
      v74 = *((_QWORD *)&v69->fields.lookup + (int)v72);
      v75 = sub_B5D694(clsQuestCheck___c__DisplayClass31_1_TypeInfo);
      clsQuestCheck___c__DisplayClass31_1___ctor((clsQuestCheck___c__DisplayClass31_1_o *)v75, 0LL);
      if ( !v73 || !v74 )
        goto LABEL_43;
      if ( *(_DWORD *)(v73 + 16) == *(_DWORD *)(v74 + 24) )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_43;
        v76 = *(_DWORD *)(v74 + 16);
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      v76,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v75 )
          goto LABEL_43;
        *(_QWORD *)(v75 + 16) = Instance;
        v83 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v75 + 16);
        sub_B5D560(
          (BattleServantConfConponent_o *)(v75 + 16),
          (System_Int32_array **)Instance,
          v77,
          v78,
          v79,
          v80,
          v81,
          v82);
        v84 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_QuestEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v84,
          (Il2CppObject *)v75,
          Method_clsQuestCheck___c__DisplayClass31_1__GetReleasedQuestEntityListByServantGet_b__1__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_QuestEntity__bool___ctor__);
        Instance = (DataManager_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                      list,
                                      (System_Func_T__bool__o *)v84,
                                      (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)*v83;
          if ( !*v83 )
            goto LABEL_43;
          Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
          if ( ((unsigned int)Instance & typeFlag) != 0 )
          {
            Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, v76, -1, 0, v85);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (DataManager_o *)list;
              if ( !list )
                goto LABEL_43;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
                *v83,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestEntity__Add__);
            }
          }
        }
      }
      v71 = (int)v69->fields.datalist;
      if ( (int)++v72 >= v71 )
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  EventRaidMaster_o *v18; // x22
  int32_t RaidDeadQuestId; // w23
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x4
  const MethodInfo *v22; // x4
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v24; // x20
  unsigned __int64 v25; // x21
  __int64 v27; // x0

  if ( (byte_42E73DB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaidMaster___, eventId, day, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v10, v11, v12);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v13, v14, v15);
    byte_42E73DB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_19;
  v18 = (EventRaidMaster_o *)Instance;
  RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId((EventRaidMaster_o *)Instance, eventId, day, 0LL);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, RaidDeadQuestId, 0, v20)
    || clsQuestCheck__IsQuestRelease(this, RaidDeadQuestId, -1, 0, v21) )
  {
    return 1;
  }
  Instance = (DataManager_o *)EventRaidMaster__GetRaidAliveQuestIds(v18, eventId, day, 0LL);
  if ( !Instance )
LABEL_19:
    sub_B5D69C(Instance, v17);
  datalist = Instance->fields.datalist;
  v24 = Instance;
  if ( (int)datalist < 1 )
    return 0;
  v25 = 0LL;
  while ( 1 )
  {
    if ( v25 >= (unsigned int)datalist )
    {
      v27 = sub_B5D6C8(Instance);
      sub_B5D668(v27, 0LL);
    }
    Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, *((_DWORD *)&v24->fields.lookup + v25), -1, 0, v22);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      break;
    LODWORD(datalist) = v24->fields.datalist;
    if ( (__int64)++v25 >= (int)datalist )
      return 0;
  }
  return 1;
}


bool __fastcall clsQuestCheck__IsLastWarClear(clsQuestCheck_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t Value; // w1
  const MethodInfo *v6; // x2

  if ( (byte_42E73DD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8453/*"LAST_WAR_ID"*/, (_DWORD)method, v2, v3);
    byte_42E73DD = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8453/*"LAST_WAR_ID"*/, 0LL);
  return clsQuestCheck__IsWarClear(this, Value, v6);
}


bool __fastcall clsQuestCheck__IsMainInterlude(clsQuestCheck_o *this, int32_t war_id, const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  WarEntity_o *Entity; // x0

  if ( (byte_42E73DE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarMaster___, war_id, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E73DE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             war_id,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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

  if ( (byte_42E73E4 & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_B5D5C4(&CondType_TypeInfo, qid, is_quest_after_action, method);
    byte_42E73E4 = 1;
  }
  v6 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25877652(qid, v6, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsQuestClearRaw(
        clsQuestCheck_o *this,
        int32_t qid,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  int32_t v6; // w20

  if ( (byte_42E73E5 & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_B5D5C4(&CondType_TypeInfo, qid, is_quest_after_action, method);
    byte_42E73E5 = 1;
  }
  v6 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25877652(qid, v6, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsQuestPhaseClear(
        clsQuestCheck_o *this,
        int32_t qid,
        int32_t phase,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t v11; // w21
  int64_t UserId; // x22

  if ( (byte_42E73E6 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, qid, phase, is_quest_after_action);
    this = (clsQuestCheck_o *)sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    byte_42E73E6 = 1;
  }
  v11 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, *(const MethodInfo **)&phase);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestPhaseClear(UserId, qid, phase, v11, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsQuestRelease(
        clsQuestCheck_o *this,
        int32_t quest_id,
        int32_t old_val,
        int32_t old_val_qr_type,
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
  DataManager_o *Instance; // x0
  __int64 v31; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v32; // x20
  bool v33; // w19
  __int64 v34; // x1
  __int64 v35; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v38; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0
  QuestReleaseEntity_o *v45; // x0
  __int64 v46; // x1
  const MethodInfo *v47; // x4
  __int64 v48; // x10
  int32_t v49; // w2
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  unsigned __int64 v51; // x10
  int32_t *v52; // x11
  __int64 v53; // x0

  if ( (byte_42E73DA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      quest_id,
      old_val,
      *(_QWORD *)&old_val_qr_type);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_getEntityList_QuestReleaseMaster___, v12, v13, v14);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&QuestReleaseEntity_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28, v29);
    byte_42E73DA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__getEntityList_QuestReleaseMaster_(
                                      Instance,
                                      (const MethodInfo_1AE4468 *)Method_DataManager_getEntityList_QuestReleaseMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v31);
  }
  v32 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance;
  v33 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
          (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) > 0;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 v32,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v34);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v38 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v38;
        p_offset += 4;
        if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v35);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v41 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v42 = 0LL;
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v43 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v44 = (__int64)&v41->vtable[*v43].method;
    }
    else
    {
LABEL_17:
      v44 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v35);
    }
    v45 = (QuestReleaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                                    Enumerator,
                                    *(_QWORD *)(v44 + 8));
    if ( !v45 )
      goto LABEL_38;
    v48 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v45->klass->_2.bitflags2 + 1) < (unsigned int)v48
      || (QuestReleaseEntity_c *)v45->klass->_2.typeHierarchy[v48 - 1] != QuestReleaseEntity_TypeInfo )
    {
      v45 = (QuestReleaseEntity_o *)sub_B5D990(v45);
LABEL_38:
      sub_B5D69C(v45, v46);
    }
    if ( v45->fields.questId == quest_id )
    {
      if ( (old_val & 0x80000000) != 0 )
        v49 = -1;
      else
        v49 = v45->fields.type == old_val_qr_type ? old_val : -1;
      if ( !clsQuestCheck__IsQuestRelease_22761388(this, v45, v49, 0LL, v47) )
      {
        v33 = 0;
        break;
      }
    }
  }
  v50 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v51 = 0LL;
    v52 = &v50->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      ++v51;
      v52 += 4;
      if ( v51 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_34;
    }
    v53 = (__int64)&v50->vtable[*v52].method;
  }
  else
  {
LABEL_34:
    v53 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v35);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(Enumerator, *(_QWORD *)(v53 + 8));
  return v33;
}


bool __fastcall clsQuestCheck__IsQuestRelease_22758528(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        MapControl_QuestInfo_o *qinf,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_22761388(this, qrd, -1, qinf, v4);
}


bool __fastcall clsQuestCheck__IsQuestRelease_22760388(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        int32_t old_val,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_22761388(this, qrd, old_val, 0LL, v4);
}


bool __fastcall clsQuestCheck__IsQuestRelease_22761388(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        int32_t old_val,
        MapControl_QuestInfo_o *qinf,
        const MethodInfo *method)
{
  char v5; // cf
  char v6; // zf
  clsQuestCheck_o *v10; // x22
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
  int32_t type; // w23
  int32_t v30; // w20
  int32_t v31; // w21
  int32_t targetId; // w20
  int64_t value; // x19
  int32_t v35; // w0
  int32_t v36; // w20
  int32_t v37; // w21
  int32_t v38; // w19
  int32_t v39; // w0
  int32_t v40; // w1
  int32_t v41; // w2
  bool v42; // w3
  QuestEntity_o *v44; // x0
  int32_t v45; // w20
  int32_t v46; // w21
  int32_t v47; // w19
  bool v48; // w3
  QuestReleaseEntity_o *v49; // x2
  WarEntity_o *v50; // x0
  QuestEntity_o *v51; // x19
  int64_t Time; // x20
  int32_t v53; // w19
  int32_t v54; // w20
  int32_t questId; // w22
  int32_t ValueInt; // w19
  TotalEventRaidEntity_o *v58; // [xsp+8h] [xbp-48h] BYREF
  EventRaidEntity_o *entity; // [xsp+10h] [xbp-40h] BYREF
  System_Int32_array *sameGroupQuestIds; // [xsp+18h] [xbp-38h] BYREF
  bool is_release; // [xsp+2Ch] [xbp-24h] BYREF

  v10 = this;
  if ( (byte_42E73E0 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)qrd, old_val, qinf);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaidMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v20, v21, v22);
    sub_B5D5C4(&NetworkManager_TypeInfo, v23, v24, v25);
    this = (clsQuestCheck_o *)sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27, v28);
    byte_42E73E0 = 1;
  }
  entity = 0LL;
  sameGroupQuestIds = 0LL;
  v58 = 0LL;
  is_release = 0;
  if ( !qrd )
LABEL_112:
    sub_B5D69C(this, qrd);
  type = qrd->fields.type;
  if ( !v6 & v5 )
  {
LABEL_20:
    targetId = qrd->fields.targetId;
    value = qrd->fields.value;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v35 = type;
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
        v48 = 1;
        v49 = qrd;
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
        v35 = 6;
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
        v35 = 7;
        break;
      case 8:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v35 = 8;
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
        v35 = 9;
        break;
      case 10:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v35 = 10;
        break;
      case 11:
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v35 = 11;
        break;
      case 12:
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_112;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_112;
        v50 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                qrd->fields.questId,
                (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v50 )
          return is_release;
        v51 = (QuestEntity_o *)v50;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Time = NetworkManager__getTime(0LL);
        if ( QuestEntity__getOpenedAt(v51, 0LL) > Time || QuestEntity__getClosedAt(v51, 0LL) <= Time )
          return is_release;
        return 1;
      case 13:
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_112;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_112;
        v44 = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                 qrd->fields.questId,
                                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v44 )
          return is_release;
        return QuestEntity__IsOpenByTime(v44, 1, 0LL);
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
        v53 = qrd->fields.targetId;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return CondType__IsMissionAchive(v53, 0LL);
      case 26:
        v54 = qrd->fields.targetId;
        questId = qrd->fields.questId;
        ValueInt = QuestReleaseEntity__getValueInt(qrd, 0LL);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        is_release = CondType__IsNotQuestGroupClear(questId, v54, ValueInt, &sameGroupQuestIds, 1, 0LL);
        if ( qinf )
        {
          qinf->fields._GroupId_k__BackingField = v54;
          MapControl_QuestInfo__AddSameGroupQuestIds(qinf, sameGroupQuestIds, 0LL);
        }
        return is_release;
      case 27:
      case 28:
        v30 = qrd->fields.targetId;
        v31 = QuestReleaseEntity__getValueInt(qrd, 0LL);
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_112;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaidMaster___);
        if ( !this )
          goto LABEL_112;
        if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)this, &entity, v30, v31, 0LL) )
          return is_release;
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_112;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
        if ( !this )
          goto LABEL_112;
        this = (clsQuestCheck_o *)TotalEventRaidMaster__TryGetEntity(
                                    (TotalEventRaidMaster_o *)this,
                                    &v58,
                                    v30,
                                    v31,
                                    0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          return is_release;
        if ( !entity || !v58 )
          goto LABEL_112;
        return (entity->fields.maxHp > v58->fields.totalDamage) ^ (qrd->fields.type != 27);
      case 32:
        v45 = qrd->fields.questId;
        v46 = qrd->fields.targetId;
        v47 = QuestReleaseEntity__getValueInt(qrd, 0LL);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v42 = 1;
        v39 = v45;
        v40 = v46;
        v41 = v47;
        return CondType__IsQuestGroupClear(v39, v40, v41, v42, 0LL);
      case 38:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v35 = 38;
        break;
      case 53:
        v49 = qrd;
        v48 = 0;
LABEL_103:
        clsQuestCheck__checkCondTypeItemGet(this, &is_release, v49, v48, method);
        return is_release;
      case 54:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v35 = 54;
        break;
      default:
        if ( type == 58 )
        {
          v36 = qrd->fields.questId;
          v37 = qrd->fields.targetId;
          v38 = QuestReleaseEntity__getValueInt(qrd, 0LL);
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v39 = v36;
          v40 = v37;
          v41 = v38;
          v42 = 0;
          return CondType__IsQuestGroupClear(v39, v40, v41, v42, 0LL);
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
        v35 = 64;
        break;
    }
  }
  return CondType__IsOpen(v35, targetId, value, 0, 0LL);
}


bool __fastcall clsQuestCheck__IsReleasedLoginQuest(
        clsQuestCheck_o *this,
        LoginQuestEntity_o *loginQuestEnt,
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
  QuestReleaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v25; // x1
  clsQuestCheck_Fields *p_fields; // x21
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *qrs; // x9
  int64_t v28; // x21
  _BOOL8 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x4
  int v32; // w19
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E73D9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestReleaseMaster___, (_DWORD)loginQuestEnt, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v18, v19, v20);
    sub_B5D5C4(&NetworkManager_TypeInfo, v21, v22, v23);
    byte_42E73D9 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !loginQuestEnt || !Master_WarQuestSelectionMaster )
    goto LABEL_26;
  p_fields = &this->fields;
  QuestReleaseMaster__getListByQuestID_34232208(
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
    sub_B5D69C(Master_WarQuestSelectionMaster, v25);
  v28 = (int64_t)Master_WarQuestSelectionMaster;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v34,
    qrs,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v34,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v29 )
      break;
    if ( !v34.fields.current )
      sub_B5D69C(v29, v30);
    if ( HIDWORD(v34.fields.current[1].klass) == 12 )
    {
      if ( !LoginQuestEntity__IsEnablePeriod(loginQuestEnt, v28, 0LL) )
        goto LABEL_20;
    }
    else if ( !clsQuestCheck__IsQuestRelease_22761388(this, (QuestReleaseEntity_o *)v34.fields.current, -1, 0LL, v31) )
    {
LABEL_20:
      v32 = 4;
      goto LABEL_23;
    }
  }
  v32 = 2;
LABEL_23:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v34,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v32 != 4;
}


bool __fastcall clsQuestCheck__IsReleasedQuest(clsQuestCheck_o *this, int32_t questId, const MethodInfo *method)
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
  QuestReleaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v22; // x1
  struct System_Collections_Generic_List_QuestReleaseEntity__o *qrs; // x0
  const MethodInfo *v24; // x4
  int v25; // w19
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E73D8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestReleaseMaster___, questId, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v18, v19, v20);
    byte_42E73D8 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v22);
  QuestReleaseMaster__getListByQuestID_34232208(Master_WarQuestSelectionMaster, questId, &this->fields.qrs, 0LL);
  qrs = this->fields.qrs;
  if ( qrs )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v27,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)qrs,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v27,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
    {
      if ( !clsQuestCheck__IsQuestRelease_22761388(this, (QuestReleaseEntity_o *)v27.fields.current, -1, 0LL, v24) )
      {
        v25 = 2;
        goto LABEL_13;
      }
    }
    v25 = 0;
LABEL_13:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v27,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    LOBYTE(qrs) = v25 != 2;
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
  int v8; // w21
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
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  __int64 v49; // x19
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  int32_t ScriptIntParam; // w21
  int v59; // w8
  clsQuestCheck_c *v61; // x0
  System_String_o *KEY_QUEST_START_EFFECT; // x22
  System_String_o *String; // x22
  System_String_array *v64; // x0
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v65; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v66; // x20
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x20
  System_String_o *v68; // x0
  char v69; // w8
  System_String_o *v70; // x19
  clsQuestCheck_c *v71; // x0
  System_String_o *v72; // x20
  __int64 v73; // x0
  WarEntity_o *v74; // [xsp+8h] [xbp-48h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  v8 = questPhase;
  if ( (byte_42E73F3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Find_string___, questId, questPhase, effectName);
    sub_B5D5C4(&char___TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v16, v17, v18);
    sub_B5D5C4(&DataManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v22, v23, v24);
    sub_B5D5C4(&EncryptedPlayerPrefs_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_System_Func_string__bool___ctor__, v28, v29, v30);
    sub_B5D5C4(&System_Func_string__bool__TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_clsQuestCheck___c__DisplayClass40_0__IsTapSkipQuestStart_b__0__, v34, v35, v36);
    sub_B5D5C4(&clsQuestCheck___c__DisplayClass40_0_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_21907/*"questStartEffectSkip"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v43, v44, v45);
    sub_B5D5C4(&clsQuestCheck_TypeInfo, v46, v47, v48);
    byte_42E73F3 = 1;
  }
  entity = 0LL;
  v74 = 0LL;
  v49 = sub_B5D694(clsQuestCheck___c__DisplayClass40_0_TypeInfo);
  clsQuestCheck___c__DisplayClass40_0___ctor((clsQuestCheck___c__DisplayClass40_0_o *)v49, 0LL);
  if ( !v49 )
    goto LABEL_49;
  *(_QWORD *)(v49 + 16) = effectName;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v49 + 16),
    (System_Int32_array **)effectName,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  if ( isMyRoomMaterial )
    return 0;
  if ( v8 <= 1 )
    v8 = 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_49;
  if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_WarQuestSelectionMaster, &entity, questId, v8, 0LL) )
    goto LABEL_53;
  Master_WarQuestSelectionMaster = (__int64)entity;
  if ( !entity )
    goto LABEL_49;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_21907/*"questStartEffectSkip"*/, 0, 0LL);
  if ( !ScriptIntParam )
  {
LABEL_53:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_49;
    Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                       &v74,
                                       questId,
                                       (const MethodInfo_23FAE6C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    if ( (Master_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( !v74 )
        goto LABEL_49;
      v59 = LODWORD(v74->fields.longName) - 1;
      if ( (unsigned int)v59 > 4 )
        ScriptIntParam = 0;
      else
        ScriptIntParam = dword_32A19F0[v59];
      goto LABEL_24;
    }
    return 0;
  }
LABEL_24:
  v61 = clsQuestCheck_TypeInfo;
  if ( (BYTE3(clsQuestCheck_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !clsQuestCheck_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
    v61 = clsQuestCheck_TypeInfo;
  }
  KEY_QUEST_START_EFFECT = v61->static_fields->KEY_QUEST_START_EFFECT;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  String = EncryptedPlayerPrefs__GetString(KEY_QUEST_START_EFFECT, 0LL);
  if ( System_String__IsNullOrEmpty(String, 0LL) )
    goto LABEL_37;
  Master_WarQuestSelectionMaster = sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_49;
  v51 = Master_WarQuestSelectionMaster;
  if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
  {
    v73 = sub_B5D6C8(Master_WarQuestSelectionMaster);
    sub_B5D668(v73, 0LL);
  }
  *(_WORD *)(Master_WarQuestSelectionMaster + 32) = 47;
  if ( !String )
LABEL_49:
    sub_B5D69C(Master_WarQuestSelectionMaster, v51);
  v64 = System_String__Split(String, (System_Char_array *)Master_WarQuestSelectionMaster, 0LL);
  if ( !v64 )
  {
LABEL_37:
    v70 = *(System_String_o **)(v49 + 16);
    goto LABEL_38;
  }
  v65 = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)v64;
  v66 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_string__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v66,
    (Il2CppObject *)v49,
    Method_clsQuestCheck___c__DisplayClass40_0__IsTapSkipQuestStart_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_string__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                     v65,
                                                                     (System_Func_T__bool__o *)v66,
                                                                     (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_string___);
  v68 = System_String__Concat_44580072(
          String,
          (System_String_o *)StringLiteral_885/*"/"*/,
          *(System_String_o **)(v49 + 16),
          0LL);
  if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
  {
    v70 = v68;
LABEL_38:
    v71 = clsQuestCheck_TypeInfo;
    if ( (BYTE3(clsQuestCheck_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !clsQuestCheck_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
      v71 = clsQuestCheck_TypeInfo;
    }
    v72 = v71->static_fields->KEY_QUEST_START_EFFECT;
    if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    }
    EncryptedPlayerPrefs__SetString(v72, v70, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
    v69 = 1;
    goto LABEL_45;
  }
  v69 = 0;
LABEL_45:
  if ( ScriptIntParam == 1 )
    return 1;
  else
    return (ScriptIntParam == 2) & (v69 ^ 1);
}


bool __fastcall clsQuestCheck__IsValidQuestRandomGroup(
        clsQuestCheck_o *this,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
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
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  DataManager_o *Instance; // x0
  __int64 v27; // x1
  QuestRandomGroupMaster_o *v28; // x21
  QuestRandomGroupEntity_o *EntityFromQuestId; // x0
  QuestRandomGroupEntity_o *v30; // x19
  int32_t randomGroupId; // w20
  int v32; // w2
  __int64 v33; // x3
  TerminalPramsManager_c *v34; // x0
  int v35; // w2
  __int64 v36; // x3
  TerminalPramsManager_c *v37; // x0
  int32_t Item; // w22
  int v39; // w2
  __int64 v40; // x3
  QuestRandomGroupEntity_o *RandomRangeQuest; // x0
  TerminalPramsManager_c *v42; // x0
  int v43; // w2
  __int64 v44; // x3
  QuestRandomGroupEntity_o *v45; // x21
  TerminalPramsManager_c *v46; // x0
  TerminalPramsManager_c *v47; // x0

  if ( (byte_42E73D6 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)questInfo, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestRandomGroupMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v23, v24, v25);
    byte_42E73D6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestRandomGroupMaster___);
  if ( !questInfo )
    goto LABEL_64;
  v28 = (QuestRandomGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_64;
  EntityFromQuestId = QuestRandomGroupMaster__GetEntityFromQuestId(
                        (QuestRandomGroupMaster_o *)Instance,
                        questInfo->fields.questId,
                        0LL);
  if ( EntityFromQuestId )
  {
    v30 = EntityFromQuestId;
    randomGroupId = EntityFromQuestId->fields.randomGroupId;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    TerminalPramsManager__LoadQuestRandomGroupList(0LL);
    if ( !byte_42E5CEE )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v27, v32, v33);
      byte_42E5CEE = 1;
    }
    v34 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v34 = TerminalPramsManager_TypeInfo;
    }
    Instance = (DataManager_o *)v34->static_fields->_QuestRandomGroupList_k__BackingField;
    if ( !Instance )
      goto LABEL_64;
    if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
           (System_Collections_Generic_Dictionary_int__int__o *)Instance,
           randomGroupId,
           (const MethodInfo_2F0B0BC *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    {
      if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E5CEE )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v27, v35, v36);
        byte_42E5CEE = 1;
      }
      v37 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v37 = TerminalPramsManager_TypeInfo;
      }
      Instance = (DataManager_o *)v37->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_64;
      Item = System_Collections_Generic_Dictionary_int__int___get_Item(
               (System_Collections_Generic_Dictionary_int__int__o *)Instance,
               randomGroupId,
               (const MethodInfo_2F0AD98 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsQuestClear_25877652(Item, -1, 0, 0LL) )
        goto LABEL_53;
    }
    else
    {
      if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E5CEE )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v27, v35, v36);
        byte_42E5CEE = 1;
      }
      v42 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v42 = TerminalPramsManager_TypeInfo;
      }
      Instance = (DataManager_o *)v42->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_64;
      System_Collections_Generic_Dictionary_int__int___Add(
        (System_Collections_Generic_Dictionary_int__int__o *)Instance,
        randomGroupId,
        0,
        (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
    RandomRangeQuest = QuestRandomGroupMaster__GetRandomRangeQuest(v28, randomGroupId, 0LL);
    if ( RandomRangeQuest )
    {
      v45 = RandomRangeQuest;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E5CEE )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v27, v43, v44);
        byte_42E5CEE = 1;
      }
      v46 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v46 = TerminalPramsManager_TypeInfo;
      }
      Instance = (DataManager_o *)v46->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_64;
      System_Collections_Generic_Dictionary_int__int___set_Item(
        (System_Collections_Generic_Dictionary_int__int__o *)Instance,
        randomGroupId,
        v45->fields.questId,
        (const MethodInfo_2F0AE30 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      TerminalPramsManager__SaveQuestRandomGroupList(0LL);
LABEL_53:
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E5CEE )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v27, v39, v40);
        byte_42E5CEE = 1;
      }
      v47 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v47 = TerminalPramsManager_TypeInfo;
      }
      Instance = (DataManager_o *)v47->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( Instance )
      {
        LOBYTE(RandomRangeQuest) = System_Collections_Generic_Dictionary_int__int___get_Item(
                                     (System_Collections_Generic_Dictionary_int__int__o *)Instance,
                                     randomGroupId,
                                     (const MethodInfo_2F0AD98 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) == v30->fields.questId;
        return (char)RandomRangeQuest;
      }
LABEL_64:
      sub_B5D69C(Instance, v27);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  WarEntity_o *Entity; // x0
  const MethodInfo *v15; // x3

  if ( (byte_42E73DC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarMaster___, war_id, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E73DC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v13);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             war_id,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = clsQuestCheck__IsQuestClear(this, Entity->fields.lastQuestId, 0, v15);
  return (char)Entity;
}


void __fastcall clsQuestCheck__PlayQuestStartAction(
        clsQuestCheck_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  TerminalPramsManager_c *v8; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w20

  if ( (byte_42E73F2 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptManager_TypeInfo, (_DWORD)end_act, (_DWORD)method, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v5, v6, v7);
    byte_42E73F2 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B20 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)end_act, (_DWORD)method, v3);
    byte_42E4B20 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v8->static_fields->_WarId_k__BackingField;
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)end_act, (_DWORD)method, v3);
    v8 = TerminalPramsManager_TypeInfo;
    byte_42E4B33 = 1;
  }
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v8->static_fields->_QuestId_k__BackingField;
  if ( clsQuestCheck__mfCheck_IsQuestNew((clsQuestCheck_o *)v8, QuestId_k__BackingField, method) )
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
  void *Instance; // x0
  __int64 v27; // x1
  _QWORD *v28; // x19
  __int64 v29; // x9
  __int64 v30; // x8
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  TerminalPramsManager_c *v34; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w20
  BattleSetupInfo_o *v38; // x23
  Il2CppObject *v39; // x20
  clsQuestCheck_o *v40; // x0
  const MethodInfo *v41; // x1

  if ( (byte_42E73F5 & 1) == 0 )
  {
    sub_B5D5C4(&BattleRootComponent_TypeInfo, (_DWORD)qinf, endTime, *(_QWORD *)&result);
    sub_B5D5C4(&BattleSetupInfo_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v23, v24, v25);
    byte_42E73F5 = 1;
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
      if ( !byte_42E4B20 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v31, v32, v33);
        byte_42E4B20 = 1;
      }
      v34 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v34 = TerminalPramsManager_TypeInfo;
      }
      WarId_k__BackingField = v34->static_fields->_WarId_k__BackingField;
      if ( !byte_42E4B33 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v31, v32, v33);
        v34 = TerminalPramsManager_TypeInfo;
        byte_42E4B33 = 1;
      }
      if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34);
        v34 = TerminalPramsManager_TypeInfo;
      }
      QuestId_k__BackingField = v34->static_fields->_QuestId_k__BackingField;
      if ( !byte_42E4B34 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v31, v32, v33);
        v34 = TerminalPramsManager_TypeInfo;
        byte_42E4B34 = 1;
      }
      if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34);
        v34 = TerminalPramsManager_TypeInfo;
      }
      PhaseCnt_k__BackingField = v34->static_fields->_PhaseCnt_k__BackingField;
      v38 = (BattleSetupInfo_o *)sub_B5D694(BattleSetupInfo_TypeInfo);
      BattleSetupInfo___ctor(v38, 0LL);
      if ( !v38 )
        goto LABEL_42;
      Instance = BattleSetupInfo__ConvertBattleSetupInfo(
                   v38,
                   WarId_k__BackingField,
                   QuestId_k__BackingField,
                   PhaseCnt_k__BackingField,
                   0,
                   0,
                   0,
                   0LL);
      v39 = (Il2CppObject *)Instance;
      if ( boostId )
      {
        if ( !Instance )
          goto LABEL_42;
        *((_DWORD *)Instance + 14) = boostId;
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance
        || (*((_BYTE *)Instance + 140) = 1,
            (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__)) == 0LL)
        || (*((_DWORD *)Instance + 36) = 1,
            (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
      {
LABEL_42:
        sub_B5D69C(Instance, v27);
      }
      AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 35, 1, v39, 0LL);
    }
LABEL_40:
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0LL);
      return;
    }
    goto LABEL_42;
  }
  if ( result )
    goto LABEL_40;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  v28 = (_QWORD *)*((_QWORD *)Instance + 3);
  if ( !v28 )
    goto LABEL_42;
  v29 = *(&BattleRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*v28 + 300LL) >= (unsigned int)v29
    && *(BattleRootComponent_c **)(*(_QWORD *)(*v28 + 200LL) + 8 * v29 - 8) == BattleRootComponent_TypeInfo )
  {
    Instance = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)Instance + 3), 0LL);
    if ( !Instance )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v30 = v28[9];
    if ( !v30 )
      goto LABEL_42;
    Instance = *(void **)(v30 + 456);
    if ( !Instance )
      goto LABEL_42;
    BattleResultComponent__EndResult((BattleResultComponent_o *)Instance, 0LL);
    goto LABEL_40;
  }
  v40 = (clsQuestCheck_o *)sub_B5D990(*((_QWORD *)Instance + 3));
  clsQuestCheck___ctor(v40, v41);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  System_Int32_array **v19; // x21
  TerminalPramsManager_c *v20; // x0
  BattleServantConfConponent_o *p_ClearEventQuestIds_k__BackingField; // x0
  const MethodInfo *v22; // x2
  System_Collections_Generic_IEnumerable_T__o *v23; // x0
  int v24; // w1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x19
  TerminalPramsManager_c *v32; // x0
  BattleServantConfConponent_o *v33; // x0

  if ( (byte_42E73EE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_String_Join_int___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_707/*","*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_1/*""*/, v16, v17, v18);
    byte_42E73EE = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  v19 = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( !byte_42E5CCD )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, eventId, (_DWORD)method, v3);
    byte_42E5CCD = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  p_ClearEventQuestIds_k__BackingField = (BattleServantConfConponent_o *)&v20->static_fields->_ClearEventQuestIds_k__BackingField;
  p_ClearEventQuestIds_k__BackingField->klass = (BattleServantConfConponent_c *)v19;
  sub_B5D560(p_ClearEventQuestIds_k__BackingField, v19, (System_String_array **)method, v3, v4, v5, v6, v7);
  v23 = (System_Collections_Generic_IEnumerable_T__o *)clsQuestCheck__GetEventQuestIdListPlayable(this, eventId, v22);
  v31 = (System_Int32_array **)System_String__Join_int_(
                                 (System_String_o *)StringLiteral_707/*","*/,
                                 v23,
                                 (const MethodInfo_1E6CD44 *)Method_System_String_Join_int___);
  if ( !byte_42E5CCD )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v24, (_DWORD)v25, v26);
    byte_42E5CCD = 1;
  }
  v32 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v32 = TerminalPramsManager_TypeInfo;
  }
  v33 = (BattleServantConfConponent_o *)&v32->static_fields->_ClearEventQuestIds_k__BackingField;
  v33->klass = (BattleServantConfConponent_c *)v31;
  sub_B5D560(v33, v31, v25, v26, v27, v28, v29, v30);
  TerminalPramsManager__ClearEventQuestIds_SaveData(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall clsQuestCheck__checkCondTypeItemGet(
        clsQuestCheck_o *this,
        bool *is_release,
        QuestReleaseEntity_o *qrd,
        bool itemGet,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int64_t Instance; // x0
  __int64 v15; // x1
  UserItemMaster_o *v16; // x22
  int32_t targetId; // w23
  int32_t num; // w22
  char v19; // w8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E73E1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, (_DWORD)is_release, (_DWORD)qrd, itemGet);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E73E1 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !qrd )
    goto LABEL_14;
  v16 = (UserItemMaster_o *)Instance;
  targetId = qrd->fields.targetId;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v16 )
    goto LABEL_14;
  Instance = UserItemMaster__TryGetEntity(v16, &entity, Instance, targetId, 0LL);
  if ( (Instance & 1) == 0 )
  {
    v19 = !itemGet;
    goto LABEL_13;
  }
  if ( !entity )
LABEL_14:
    sub_B5D69C(Instance, v15);
  num = entity->fields.num;
  v19 = (num >= QuestReleaseEntity__getValueInt(qrd, 0LL)) ^ itemGet ^ 1;
LABEL_13:
  *is_release = v19 & 1;
}


bool __fastcall clsQuestCheck__isPlayQuestStartAction(clsQuestCheck_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TerminalPramsManager_c *v7; // x0
  int32_t WarId_k__BackingField; // w20
  int32_t QuestId_k__BackingField; // w19

  if ( (byte_42E73F1 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v4, v5, v6);
    byte_42E73F1 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B20 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E4B20 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v7->static_fields->_WarId_k__BackingField;
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    v7 = TerminalPramsManager_TypeInfo;
    byte_42E4B33 = 1;
  }
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v7->static_fields->_QuestId_k__BackingField;
  if ( !clsQuestCheck__mfCheck_IsQuestNew((clsQuestCheck_o *)v7, QuestId_k__BackingField, v2) )
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int64_t Instance; // x0
  __int64 v12; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E73E2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, qid, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E73E2 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
    sub_B5D69C(Instance, v12);
  }
  return 1;
}


int32_t __fastcall clsQuestCheck__mfGetQuestPhaseByQuestID(
        clsQuestCheck_o *this,
        int32_t qid,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E73E3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, qid, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E73E3 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
    sub_B5D69C(Instance, v12);
  }
  return 0;
}


bool __fastcall clsQuestCheck__mfQuestReleaseCheckAlreadyClear(
        clsQuestCheck_o *this,
        int32_t qid,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  bool v15; // w8
  bool result; // w0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E73DF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, qid, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E73DF = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                qid,
                                (const MethodInfo_23FAE6C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 1;
  if ( !entity )
LABEL_12:
    sub_B5D69C(Instance, v13);
  if ( (*(&entity->fields.startType + 1) | 4) != 5 )
    return 0;
  v15 = clsQuestCheck__IsQuestClear(this, qid, 0, v14);
  result = 0;
  if ( v15 )
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
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  const MethodInfo *v93; // x2
  int64_t Master_WarQuestSelectionMaster; // x0
  __int64 v95; // x1
  _BOOL8 IsShop; // x0
  const MethodInfo *v97; // x2
  UserQuestMaster_o *v98; // x23
  clsQuestCheck_Fields *p_fields; // x23
  int32_t UseDiceSpotId; // w24
  System_Collections_Generic_List_T__o *qrs; // x24
  clsQuestCheck___c_c *v103; // x0
  struct clsQuestCheck___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__5_0; // x25
  Il2CppObject *v106; // x26
  struct clsQuestCheck___c_StaticFields *v107; // x0
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  struct BalanceConfig_StaticFields *v114; // x8
  QuestEntity_o *Mine; // x0
  UserEventQuestCooltimeMaster_o *v116; // x24
  UserEventQuestCooltimeEntity_o *v117; // x0
  UserEventQuestCooltimeEntity_o *v118; // x24
  int64_t Time; // x0
  int64_t clearedAt; // x26
  int64_t v121; // x25
  struct System_Collections_Generic_List_QuestReleaseEntity__o *cQuestReleaseListP; // x23
  struct clsQuestCheck___c_StaticFields *v123; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_1; // x24
  Il2CppObject *v125; // x25
  struct clsQuestCheck___c_StaticFields *v126; // x0
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  UserQuestMaster_o *v133; // x23
  const MethodInfo *v134; // x4
  QuestReleaseEntity_o *current; // x22
  _BOOL8 HasStatus; // x0
  __int64 v137; // x1
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  int v144; // w19
  int32_t eventId; // w24
  System_Collections_Generic_IEnumerable_T__o *v146; // x25
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v147; // x24
  const MethodInfo *v148; // x2
  BalanceConfig_c *v149; // x0
  const MethodInfo *v150; // x2
  BalanceConfig_c *v151; // x0
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  System_Collections_Generic_List_Enumerator_T__o v158; // [xsp+0h] [xbp-80h] BYREF
  WarEntity_o *v159; // [xsp+18h] [xbp-68h] BYREF
  WarEntity_o *entity; // [xsp+20h] [xbp-60h] BYREF
  UserQuestEntity_o *v161; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_42E73D5 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, questId, (_DWORD)questReleaseNG, questInfo);
    sub_B5D5C4(&Method_BasicHelper_Any_QuestReleaseEntity___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Comparison_QuestReleaseEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Comparison_QuestReleaseEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&CondType_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventDetailMaster___, v24, v25, v26);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestReleaseMaster___, v27, v28, v29);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___, v30, v31, v32);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserQuestMaster___, v33, v34, v35);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarMaster___, v36, v37, v38);
    sub_B5D5C4(&DataManager_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v42, v43, v44);
    sub_B5D5C4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v48, v49, v50);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v51, v52, v53);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v54, v55, v56);
    sub_B5D5C4(&Method_System_Func_QuestReleaseEntity__bool___ctor__, v57, v58, v59);
    sub_B5D5C4(&System_Func_QuestReleaseEntity__bool__TypeInfo, v60, v61, v62);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__, v63, v64, v65);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__, v66, v67, v68);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v69, v70, v71);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__, v72, v73, v74);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___68744400, v75, v76, v77);
    sub_B5D5C4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v78, v79, v80);
    sub_B5D5C4(&NetworkManager_TypeInfo, v81, v82, v83);
    sub_B5D5C4(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__, v84, v85, v86);
    sub_B5D5C4(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__, v87, v88, v89);
    sub_B5D5C4(&clsQuestCheck___c_TypeInfo, v90, v91, v92);
    byte_42E73D5 = 1;
  }
  entity = 0LL;
  v161 = 0LL;
  v159 = 0LL;
  memset(&v158, 0, sizeof(v158));
  *questReleaseNG = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)questReleaseNG,
    0LL,
    (System_String_array **)questReleaseNG,
    (System_String_array **)questInfo,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, v93) )
    return 0;
  v161 = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarMaster___);
  if ( !questInfo || !Master_WarQuestSelectionMaster )
    goto LABEL_114;
  IsShop = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
             &entity,
             questInfo->fields.warId,
             (const MethodInfo_23FAE6C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
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
      v98 = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserQuestMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = NetworkManager__get_UserId(0LL);
      if ( !v98 )
        goto LABEL_114;
      IsShop = UserQuestMaster__TryGetEntity(v98, &v161, Master_WarQuestSelectionMaster, questId, 0LL);
      if ( IsShop )
      {
        Master_WarQuestSelectionMaster = (int64_t)v161;
        if ( !v161 )
          goto LABEL_114;
        IsShop = UserQuestEntity__IsNotExpired(v161, 0LL);
        if ( IsShop )
          return 1;
      }
    }
  }
  if ( !clsQuestCheck__IsValidQuestRandomGroup((clsQuestCheck_o *)IsShop, questInfo, v97) )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_114;
  p_fields = &this->fields;
  QuestReleaseMaster__getListByQuestID_34232208(
    (QuestReleaseMaster_o *)Master_WarQuestSelectionMaster,
    questId,
    &this->fields.qrs,
    0LL);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !entity || !Master_WarQuestSelectionMaster )
    goto LABEL_114;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
         &v159,
         entity->fields.eventId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Master_WarQuestSelectionMaster = (int64_t)v159;
    if ( !v159 )
      goto LABEL_114;
    if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v159, 0LL) )
    {
      Master_WarQuestSelectionMaster = (int64_t)v159;
      if ( !v159 )
        goto LABEL_114;
      UseDiceSpotId = EventDetailEntity__GetUseDiceSpotId((EventDetailEntity_o *)v159, 0LL);
      if ( UseDiceSpotId == MapControl_QuestInfo__GetSpotID(questInfo, 0LL)
        && MapControl_QuestInfo__GetQuestType(questInfo, 0LL) == 1 )
      {
        qrs = (System_Collections_Generic_List_T__o *)p_fields->qrs;
        v103 = clsQuestCheck___c_TypeInfo;
        if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
          v103 = clsQuestCheck___c_TypeInfo;
        }
        static_fields = v103->static_fields;
        _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__5_0;
        if ( !_9__5_0 )
        {
          if ( (BYTE3(v103->vtable._0_Equals.methodPtr) & 4) != 0 && !v103->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v103);
            static_fields = clsQuestCheck___c_TypeInfo->static_fields;
          }
          v106 = (Il2CppObject *)static_fields->__9;
          _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_QuestReleaseEntity__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__5_0,
            v106,
            Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__,
            (const MethodInfo_2C2ECD0 *)Method_System_Func_QuestReleaseEntity__bool___ctor__);
          v107 = clsQuestCheck___c_TypeInfo->static_fields;
          v107->__9__5_0 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__5_0;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v107->__9__5_0,
            (System_Int32_array **)_9__5_0,
            v108,
            v109,
            v110,
            v111,
            v112,
            v113);
        }
        if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                qrs,
                (System_Func_T__bool__o *)_9__5_0,
                (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_QuestReleaseEntity___) )
        {
          Master_WarQuestSelectionMaster = (int64_t)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Master_WarQuestSelectionMaster = (int64_t)BalanceConfig_TypeInfo;
          }
          v114 = *(struct BalanceConfig_StaticFields **)(Master_WarQuestSelectionMaster + 184);
          if ( v114->EventBoardGameNextBoardQuestId != questId )
          {
            if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
              && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
            {
              j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
              v114 = BalanceConfig_TypeInfo->static_fields;
            }
            if ( v114->EventBoardGameNextRoundQuestId != questId )
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
              v146 = (System_Collections_Generic_IEnumerable_T__o *)p_fields->qrs;
              v147 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
              System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
                v147,
                v146,
                (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___68744400);
              v149 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v149 = BalanceConfig_TypeInfo;
              }
              if ( clsQuestCheck__CheckQuestPlayableNow(this, v149->static_fields->EventBoardGameNextBoardQuestId, v148) )
                return 0;
              v151 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v151 = BalanceConfig_TypeInfo;
              }
              if ( clsQuestCheck__CheckQuestPlayableNow(this, v151->static_fields->EventBoardGameNextRoundQuestId, v150) )
                return 0;
              p_fields->qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v147;
              sub_B5D560(
                (BattleServantConfConponent_o *)&this->fields,
                (System_Int32_array **)v147,
                v152,
                v153,
                v154,
                v155,
                v156,
                v157);
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
    Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___);
    if ( !questInfo->fields._WarInfo_k__BackingField )
      goto LABEL_114;
    v116 = (UserEventQuestCooltimeMaster_o *)Master_WarQuestSelectionMaster;
    Master_WarQuestSelectionMaster = MapControl_WarInfo__GetEventId(questInfo->fields._WarInfo_k__BackingField, 0LL);
    if ( !v116 )
      goto LABEL_114;
    v117 = UserEventQuestCooltimeMaster__getEntity(
             v116,
             Master_WarQuestSelectionMaster,
             questInfo->fields.questId,
             1,
             0LL);
    if ( v117 )
    {
      v118 = v117;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      clearedAt = v118->fields.clearedAt;
      v121 = Time;
      Master_WarQuestSelectionMaster = (int64_t)UserEventQuestCooltimeEntity__GetMasterEntity(v118, 0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_114;
      if ( v121 < clearedAt + *(int *)(Master_WarQuestSelectionMaster + 28) )
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
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.cQuestReleaseListP;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_114;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)Master_WarQuestSelectionMaster,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.qrs,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__);
  cQuestReleaseListP = this->fields.cQuestReleaseListP;
  Master_WarQuestSelectionMaster = (int64_t)clsQuestCheck___c_TypeInfo;
  if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
    Master_WarQuestSelectionMaster = (int64_t)clsQuestCheck___c_TypeInfo;
  }
  v123 = *(struct clsQuestCheck___c_StaticFields **)(Master_WarQuestSelectionMaster + 184);
  _9__5_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v123->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      v123 = clsQuestCheck___c_TypeInfo->static_fields;
    }
    v125 = (Il2CppObject *)v123->__9;
    _9__5_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_QuestReleaseEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_1,
      v125,
      Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_QuestReleaseEntity___ctor__);
    v126 = clsQuestCheck___c_TypeInfo->static_fields;
    v126->__9__5_1 = (struct System_Comparison_QuestReleaseEntity__o *)_9__5_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v126->__9__5_1,
      (System_Int32_array **)_9__5_1,
      v127,
      v128,
      v129,
      v130,
      v131,
      v132);
  }
  if ( !cQuestReleaseListP )
    goto LABEL_114;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)cQuestReleaseListP,
    (System_Comparison_T__o *)_9__5_1,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  if ( v161 )
    goto LABEL_87;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v133 = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = NetworkManager__get_UserId(0LL);
  if ( !v133 )
LABEL_114:
    sub_B5D69C(Master_WarQuestSelectionMaster, v95);
  UserQuestMaster__TryGetEntity(v133, &v161, Master_WarQuestSelectionMaster, questId, 0LL);
LABEL_87:
  Master_WarQuestSelectionMaster = (int64_t)this->fields.cQuestReleaseListP;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_114;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v158,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v158,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
  {
    current = (QuestReleaseEntity_o *)v158.fields.current;
    if ( !v161 )
      goto LABEL_94;
    HasStatus = UserQuestEntity__HasStatus(v161, 8, 0LL);
    if ( !HasStatus )
      goto LABEL_94;
    if ( !current )
      sub_B5D69C(HasStatus, v137);
    if ( current->fields.type != 12 )
    {
LABEL_94:
      if ( !clsQuestCheck__IsQuestRelease_22761388(this, current, -1, questInfo, v134) )
      {
        *questReleaseNG = current;
        sub_B5D560(
          (BattleServantConfConponent_o *)questReleaseNG,
          (System_Int32_array **)current,
          v138,
          v139,
          v140,
          v141,
          v142,
          v143);
        v144 = 64;
        goto LABEL_97;
      }
    }
  }
  v144 = 62;
LABEL_97:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v158,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v144 != 64;
}


void __fastcall clsQuestCheck___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct clsQuestCheck___c_StaticFields *static_fields; // x0

  if ( (byte_42E6008 & 1) == 0 )
  {
    sub_B5D5C4(&clsQuestCheck___c_TypeInfo, v1, v2, v3);
    byte_42E6008 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(clsQuestCheck___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = clsQuestCheck___c_TypeInfo->static_fields;
  static_fields->__9 = (struct clsQuestCheck___c_o *)v4;
  sub_B5D560(static_fields);
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
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v18; // x21

  if ( (byte_42E600A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_clsQuestCheck___c__DisplayClass41_1__CheckQuestPlayable_b__5__, v8, v9, v10);
    sub_B5D5C4(&clsQuestCheck___c__DisplayClass41_1_TypeInfo, v11, v12, v13);
    byte_42E600A = 1;
  }
  v14 = sub_B5D694(clsQuestCheck___c__DisplayClass41_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14
    || (*(_DWORD *)(v14 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v14,
          Method_clsQuestCheck___c__DisplayClass41_1__CheckQuestPlayable_b__5__,
          0LL),
        !Instance) )
  {
    sub_B5D69C(v15, v16);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v18, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_1(
        clsQuestCheck___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
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
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v18; // x21

  if ( (byte_42E600B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_clsQuestCheck___c__DisplayClass41_2__CheckQuestPlayable_b__6__, v8, v9, v10);
    sub_B5D5C4(&clsQuestCheck___c__DisplayClass41_2_TypeInfo, v11, v12, v13);
    byte_42E600B = 1;
  }
  v14 = sub_B5D694(clsQuestCheck___c__DisplayClass41_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14
    || (*(_DWORD *)(v14 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v14,
          Method_clsQuestCheck___c__DisplayClass41_2__CheckQuestPlayable_b__6__,
          0LL),
        !Instance) )
  {
    sub_B5D69C(v15, v16);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v18, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_11(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E600D & 1) == 0 )
  {
    sub_B5D5C4(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5, v6);
    byte_42E600D = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    0,
    (const MethodInfo_1AD57AC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_13(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E600E & 1) == 0 )
  {
    sub_B5D5C4(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5, v6);
    byte_42E600E = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    0,
    (const MethodInfo_1AD57AC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_2(
        clsQuestCheck___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E600F & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E600F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_3(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E6009 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TopLoginRequest_TypeInfo, v4, v5, v6);
    byte_42E6009 = 1;
  }
  if ( (BYTE3(TopLoginRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopLoginRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopLoginRequest_TypeInfo);
  }
  TopLoginRequest__ResetAccesTime(0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
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
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v18; // x21

  if ( (byte_42E600C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_clsQuestCheck___c__DisplayClass41_3__CheckQuestPlayable_b__8__, v8, v9, v10);
    sub_B5D5C4(&clsQuestCheck___c__DisplayClass41_3_TypeInfo, v11, v12, v13);
    byte_42E600C = 1;
  }
  v14 = sub_B5D694(clsQuestCheck___c__DisplayClass41_3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14
    || (*(_DWORD *)(v14 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v14,
          Method_clsQuestCheck___c__DisplayClass41_3__CheckQuestPlayable_b__8__,
          0LL),
        !Instance) )
  {
    sub_B5D69C(v15, v16);
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v18, 0LL);
}


bool __fastcall clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_0(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B5D69C(this, 0LL);
  return n->fields.type == 118;
}


int32_t __fastcall clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_1(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *a,
        QuestReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B5D69C(this, a);
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
    sub_B5D69C(this, n);
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
    sub_B5D69C(this, n);
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
    sub_B5D69C(0LL, result);
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
    sub_B5D69C(0LL, result);
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
    sub_B5D69C(0LL, result);
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
  int32_t result; // w8
  WebViewManager_o *Instance; // x19
  SceneJumpInfo_o *v16; // x20
  AvalonSceneManager_o *v17; // x0
  __int64 v18; // x1
  int32_t v19; // w1
  Il2CppObject *v20; // x3

  if ( (byte_42E6010 & 1) == 0 )
  {
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_12818/*"SellServant"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12858/*"ServantCombine"*/, v11, v12, v13);
    byte_42E6010 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v16 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17509080(v16, (System_String_o *)StringLiteral_12818/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v19 = 22;
        goto LABEL_12;
      }
LABEL_15:
      sub_B5D69C(v17, v18);
    case 1:
      v17 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v17 )
      {
        v19 = 71;
        v20 = 0LL;
LABEL_13:
        AvalonSceneManager__transitionScene(v17, v19, 1, v20, 0LL);
        return;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v16 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17508984(v16, (System_String_o *)StringLiteral_12858/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v19 = 32;
LABEL_12:
        v17 = (AvalonSceneManager_o *)Instance;
        v20 = (Il2CppObject *)v16;
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
  int32_t result; // w8
  AvalonSceneManager_o *Instance; // x19
  SceneJumpInfo_o *v19; // x20
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w1

  if ( (byte_42E6011 & 1) == 0 )
  {
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_12862/*"ServantEquipList"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12818/*"SellServant"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_12861/*"ServantEQCombine"*/, v14, v15, v16);
    byte_42E6011 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v19 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17509080(v19, (System_String_o *)StringLiteral_12818/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v22 = 22;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 1:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v19 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17508984(v19, (System_String_o *)StringLiteral_12862/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v22 = 71;
        goto LABEL_12;
      }
LABEL_14:
      sub_B5D69C(v20, v21);
    case 0:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v19 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17508984(v19, (System_String_o *)StringLiteral_12861/*"ServantEQCombine"*/, 0LL);
      if ( Instance )
      {
        v22 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene(Instance, v22, 1, (Il2CppObject *)v19, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  AvalonSceneManager_o *Instance; // x19
  SceneJumpInfo_o *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E6012 & 1) == 0 )
  {
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_12818/*"SellServant"*/, v8, v9, v10);
    byte_42E6012 = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v12 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_17509080(v12, (System_String_o *)StringLiteral_12818/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_B5D69C(v13, v14);
    AvalonSceneManager__transitionScene(Instance, 22, 1, (Il2CppObject *)v12, 0LL);
  }
}