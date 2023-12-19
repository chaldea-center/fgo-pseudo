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

  if ( (byte_40F67CD & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_10949, v1);
    sub_B16FFC(&clsQuestCheck_TypeInfo, v8);
    byte_40F67CD = 1;
  }
  static_fields = (BattleServantConfConponent_o *)clsQuestCheck_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_10949;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_10949;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall clsQuestCheck___ctor(clsQuestCheck_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40F67CC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v6);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck___ctor__, v7);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v8);
    byte_40F67CC = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v9;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                                                                  v16,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.cQuestReleaseListP = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.cQuestReleaseListP,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2A555A4 *)Method_SingletonTemplate_clsQuestCheck___ctor__);
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  MapControl_QuestInfo_o **v58; // x20
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  MapControl_QuestInfo_o *v65; // x0
  int32_t warId; // w27
  int32_t SpotID; // w0
  MapControl_QuestInfo_o *v68; // x8
  int32_t questId; // w19
  int32_t questPhase; // w26
  int32_t v71; // w21
  QuestEntity_o *Mine; // x0
  int32_t ActConsume; // w0
  MapControl_QuestInfo_o *v74; // x8
  int32_t v75; // w25
  QuestEntity_o *v76; // x0
  int32_t forceOperation; // w21
  bool IsQuestReleaseAll; // w0
  WebViewManager_o *Instance; // x0
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x23
  int64_t UserId; // x0
  UserQuestEntity_o *Entity; // x0
  __int64 v83; // x21
  int64_t Time; // x0
  System_String_o *v85; // x19
  System_String_o *v86; // x20
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  __int64 v90; // x4
  CommonUI_o *v91; // x21
  clsQuestCheck___c_c *v92; // x8
  struct clsQuestCheck___c_StaticFields *v93; // x9
  System_Action_o *_9__39_4; // x22
  Il2CppObject *v95; // x23
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_Int32_array **v102; // x1
  struct clsQuestCheck___c_StaticFields *v103; // x0
  BattleServantConfConponent_o *p__9__39_4; // x0
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v106; // x26
  QuestEntity_o *v107; // x0
  QuestEntity_o *v108; // x27
  __int64 v109; // x1
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x3
  __int64 v113; // x4
  clsQuestCheck___c_c *v114; // x8
  struct clsQuestCheck___c_StaticFields *static_fields; // x9
  Il2CppObject *v116; // x23
  struct clsQuestCheck___c_StaticFields *v117; // x0
  TerminalPramsManager_c *v118; // x0
  int64_t v119; // x21
  WebViewManager_o *v120; // x0
  UserServantMaster_o *v121; // x0
  UserServantMaster_o *v122; // x28
  WebViewManager_o *v123; // x0
  UserCommandCodeMaster_o *v124; // x23
  WebViewManager_o *v125; // x0
  __int64 v126; // x1
  __int64 v127; // x2
  __int64 v128; // x3
  __int64 v129; // x4
  CommonUI_o *v130; // x19
  int32_t v131; // w20
  int32_t svtKeep; // w21
  clsQuestCheck___c_c *v133; // x0
  struct clsQuestCheck___c_StaticFields *v134; // x8
  ServantFrameShortDlgComponent_CallbackFunc_o *_9__39_1; // x22
  Il2CppObject *v136; // x23
  struct clsQuestCheck___c_StaticFields *v137; // x0
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  CommonUI_o *v144; // x0
  int32_t v145; // w1
  int32_t v146; // w2
  int32_t v147; // w3
  WebViewManager_o *v148; // x0
  __int64 v149; // x1
  __int64 v150; // x2
  __int64 v151; // x3
  __int64 v152; // x4
  CommonUI_o *v153; // x19
  int32_t v154; // w20
  int32_t svtEquipKeep; // w21
  clsQuestCheck___c_c *v156; // x0
  struct clsQuestCheck___c_StaticFields *v157; // x8
  Il2CppObject *v158; // x23
  struct clsQuestCheck___c_StaticFields *v159; // x0
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  int32_t Count; // w19
  WebViewManager_o *v167; // x0
  __int64 v168; // x1
  __int64 v169; // x2
  __int64 v170; // x3
  __int64 v171; // x4
  CommonUI_o *v172; // x20
  BalanceConfig_c *v173; // x8
  clsQuestCheck___c_c *v174; // x0
  struct clsQuestCheck___c_StaticFields *v175; // x8
  Il2CppObject *v176; // x23
  struct clsQuestCheck___c_StaticFields *v177; // x0
  System_String_array **v178; // x2
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  ServantAssetLoadManager_o *v184; // x0
  bool v185; // w25
  WebViewManager_o *v187; // x19
  __int64 v188; // x1
  __int64 v189; // x2
  __int64 v190; // x3
  __int64 v191; // x4
  RecoverDlgComponent_CallbackFunc_o *v192; // x20
  CommonUI_o *v193; // x0
  int32_t v194; // w1
  RecoverDlgComponent_CallbackFunc_o *v195; // x2
  bool v196; // w3
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x24
  WebViewManager_o *v198; // x0
  UserItemMaster_o *v199; // x25
  WebViewManager_o *v200; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v201; // x27
  System_String_o *v202; // x23
  int32_t v203; // w26
  int64_t IsEnable; // x0
  __int64 v205; // x1
  __int64 v206; // x2
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v208; // x8
  int64_t v209; // x23
  int64_t v210; // x28
  int32_t klass; // w8
  struct System_Int32_array *nums; // x9
  System_String_o *v213; // x0
  System_String_o *v214; // x0
  System_String_o *v215; // x19
  System_String_o *v216; // x0
  System_String_o *v217; // x19
  __int64 v218; // x1
  __int64 v219; // x2
  __int64 v220; // x3
  __int64 v221; // x4
  CommonUI_o *v222; // x20
  clsQuestCheck___c_c *v223; // x8
  struct clsQuestCheck___c_StaticFields *v224; // x9
  System_String_o *v225; // x21
  System_Action_o *_9__39_11; // x22
  Il2CppObject *v227; // x23
  System_String_array **v228; // x2
  System_String_array **v229; // x3
  System_Boolean_array **v230; // x4
  System_Int32_array **v231; // x5
  System_Int32_array *v232; // x6
  System_Int32_array *v233; // x7
  struct clsQuestCheck___c_StaticFields *v234; // x0
  BattleServantConfConponent_o *p__9__39_11; // x0
  WebViewManager_o *v236; // x19
  __int64 v237; // x1
  __int64 v238; // x2
  __int64 v239; // x3
  __int64 v240; // x4
  RecoverDlgComponent_CallbackFunc_o *v241; // x20
  CommonUI_o *v242; // x19
  __int64 v243; // x1
  __int64 v244; // x2
  __int64 v245; // x3
  __int64 v246; // x4
  RecoverDlgComponent_CallbackFunc_o *v247; // x20
  QuestConsumeItemEntity_o *v248; // x24
  WebViewManager_o *v249; // x0
  UserItemMaster_o *v250; // x27
  WebViewManager_o *v251; // x0
  System_String_o *v252; // x23
  int32_t v253; // w26
  struct System_Int32_array *v254; // x8
  struct System_Int32_array *v255; // x8
  int64_t v256; // x23
  int64_t v257; // x28
  int32_t qp; // w8
  struct System_Int32_array *v259; // x9
  WebViewManager_o *v260; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v261; // x0
  WarEntity_o *v262; // x0
  __int64 v263; // x1
  TerminalPramsManager_c *v264; // x0
  int v265; // w8
  TerminalPramsManager_c *v266; // x0
  int32_t v267; // w21
  WebViewManager_o *v268; // x0
  GachaMaster_o *v269; // x0
  __int64 v270; // x1
  int32_t VaildPayType; // w21
  TerminalPramsManager_c *v272; // x0
  WebViewManager_o *v273; // x0
  WarQuestSelectionMaster_o *v274; // x0
  MapControl_QuestInfo_o *v275; // x8
  QuestMessageMaster_o *v276; // x20
  int32_t PhaseMax; // w0
  int32_t v278; // w0
  System_String_o *ValidMessage; // x0
  System_String_o *v280; // x19
  CommonUI_o *v281; // x20
  System_String_o *v282; // x21
  __int64 v283; // x1
  __int64 v284; // x2
  __int64 v285; // x3
  __int64 v286; // x4
  System_String_o *v287; // x22
  clsQuestCheck___c_c *v288; // x8
  struct clsQuestCheck___c_StaticFields *v289; // x9
  CommonConfirmDialog_ClickDelegate_o *_9__39_2; // x24
  System_String_o *v291; // x23
  Il2CppObject *v292; // x25
  struct clsQuestCheck___c_StaticFields *v293; // x0
  System_String_array **v294; // x2
  System_String_array **v295; // x3
  System_Boolean_array **v296; // x4
  System_Int32_array **v297; // x5
  System_Int32_array *v298; // x6
  System_Int32_array *v299; // x7
  System_String_o *v300; // x0
  System_String_o *v301; // x0
  System_String_o *v302; // x19
  System_String_o *v303; // x0
  __int64 v304; // x1
  __int64 v305; // x2
  __int64 v306; // x3
  __int64 v307; // x4
  clsQuestCheck___c_c *v308; // x8
  struct clsQuestCheck___c_StaticFields *v309; // x9
  Il2CppObject *v310; // x23
  struct clsQuestCheck___c_StaticFields *v311; // x0
  char v312; // [xsp+3Ch] [xbp-84h]
  char v313; // [xsp+40h] [xbp-80h]
  UserGameEntity_o *v314; // [xsp+40h] [xbp-80h]
  System_String_o *v315; // [xsp+48h] [xbp-78h]
  System_String_o *v316; // [xsp+48h] [xbp-78h]
  System_String_o *str0; // [xsp+50h] [xbp-70h]
  System_String_o *str0a; // [xsp+50h] [xbp-70h]
  int32_t v319; // [xsp+5Ch] [xbp-64h]
  int32_t v320; // [xsp+60h] [xbp-60h]
  int32_t v321; // [xsp+64h] [xbp-5Ch]
  int32_t servantEquipSum[2]; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_40F67CA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, questInfo);
    sub_B16FFC(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, v9);
    sub_B16FFC(&RecoverDlgComponent_CallbackFunc_TypeInfo, v10);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_GachaMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMessageMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v18);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarMaster___, v19);
    sub_B16FFC(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v20);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v21);
    sub_B16FFC(&LocalizationManager_TypeInfo, v22);
    sub_B16FFC(&NetworkManager_TypeInfo, v23);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v24);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v26);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v27);
    sub_B16FFC(&Method_clsQuestCheck___c__CheckQuestPlayable_b__39_0__, v28);
    sub_B16FFC(&Method_clsQuestCheck___c__CheckQuestPlayable_b__39_11__, v29);
    sub_B16FFC(&Method_clsQuestCheck___c__CheckQuestPlayable_b__39_13__, v30);
    sub_B16FFC(&Method_clsQuestCheck___c__CheckQuestPlayable_b__39_1__, v31);
    sub_B16FFC(&Method_clsQuestCheck___c__CheckQuestPlayable_b__39_2__, v32);
    sub_B16FFC(&Method_clsQuestCheck___c__CheckQuestPlayable_b__39_3__, v33);
    sub_B16FFC(&Method_clsQuestCheck___c__CheckQuestPlayable_b__39_4__, v34);
    sub_B16FFC(&Method_clsQuestCheck___c__CheckQuestPlayable_b__39_7__, v35);
    sub_B16FFC(&Method_clsQuestCheck___c__DisplayClass39_0__CheckQuestPlayable_b__10__, v36);
    sub_B16FFC(&Method_clsQuestCheck___c__DisplayClass39_0__CheckQuestPlayable_b__12__, v37);
    sub_B16FFC(&Method_clsQuestCheck___c__DisplayClass39_0__CheckQuestPlayable_b__9__, v38);
    sub_B16FFC(&clsQuestCheck___c__DisplayClass39_0_TypeInfo, v39);
    sub_B16FFC(&clsQuestCheck___c_TypeInfo, v40);
    sub_B16FFC(&StringLiteral_26, v41);
    sub_B16FFC(&StringLiteral_10911, v42);
    sub_B16FFC(&StringLiteral_10910, v43);
    sub_B16FFC(&StringLiteral_10909, v44);
    sub_B16FFC(&StringLiteral_10936, v45);
    sub_B16FFC(&StringLiteral_12157, v46);
    sub_B16FFC(&StringLiteral_27, v47);
    sub_B16FFC(&StringLiteral_2500, v48);
    sub_B16FFC(&StringLiteral_1, v49);
    sub_B16FFC(&StringLiteral_10854, v50);
    byte_40F67CA = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  v51 = sub_B170CC(clsQuestCheck___c__DisplayClass39_0_TypeInfo, questInfo, srcEndTime, *(_QWORD *)&boostId, method);
  clsQuestCheck___c__DisplayClass39_0___ctor((clsQuestCheck___c__DisplayClass39_0_o *)v51, 0LL);
  if ( !v51 )
    goto LABEL_289;
  *(_QWORD *)(v51 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v51 + 16), (System_Int32_array **)this, v52, v53, v54, v55, v56, v57);
  *(_QWORD *)(v51 + 24) = questInfo;
  v58 = (MapControl_QuestInfo_o **)(v51 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v51 + 24), (System_Int32_array **)questInfo, v59, v60, v61, v62, v63, v64);
  v65 = *(MapControl_QuestInfo_o **)(v51 + 24);
  *(_QWORD *)(v51 + 32) = srcEndTime;
  *(_DWORD *)(v51 + 40) = boostId;
  if ( !v65 )
    goto LABEL_289;
  warId = v65->fields.warId;
  SpotID = MapControl_QuestInfo__GetSpotID(v65, 0LL);
  v68 = *v58;
  if ( !*v58 )
    goto LABEL_289;
  questId = v68->fields.questId;
  questPhase = v68->fields.questPhase;
  v71 = SpotID;
  Mine = MapControl_QuestInfo__GetMine(*v58, 0LL);
  if ( !*v58 )
    goto LABEL_289;
  if ( !Mine )
    goto LABEL_289;
  ActConsume = QuestEntity__getActConsume(Mine, (*v58)->fields.costCalcVal, 0LL);
  v74 = *v58;
  if ( !*v58 )
    goto LABEL_289;
  v321 = v71;
  v75 = v74->fields._fixedCostVal_k__BackingField >= 0 ? v74->fields._fixedCostVal_k__BackingField : ActConsume;
  v76 = MapControl_QuestInfo__GetMine(v74, 0LL);
  if ( !v76 )
    goto LABEL_289;
  forceOperation = v76->fields.forceOperation;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  IsQuestReleaseAll = TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
  if ( forceOperation == 1 || IsQuestReleaseAll )
    goto LABEL_41;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_289;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_289;
  Entity = UserQuestMaster__GetEntity(MasterData_WarQuestSelectionMaster, UserId, questId, 0LL);
  if ( Entity )
  {
    if ( UserQuestEntity__IsNotExpired(Entity, 0LL) )
      goto LABEL_41;
  }
  v83 = *(_QWORD *)(v51 + 32);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( v83 < 1 || v83 - Time > 0 )
  {
LABEL_41:
    v319 = warId;
    v320 = questPhase;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( *v58 )
    {
      v106 = SelfUserGame;
      v107 = MapControl_QuestInfo__GetMine(*v58, 0LL);
      if ( v107 )
      {
        v108 = v107;
        if ( QuestEntity__GetConsumeType(v107, 0LL) == 1 )
        {
          if ( !v106 )
            goto LABEL_289;
          if ( v75 > v106->fields.actMax )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v85 = LocalizationManager__Get((System_String_o *)StringLiteral_12157, 0LL);
            v86 = LocalizationManager__Get((System_String_o *)StringLiteral_10854, 0LL);
            v91 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v114 = clsQuestCheck___c_TypeInfo;
            if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
              v114 = clsQuestCheck___c_TypeInfo;
            }
            static_fields = v114->static_fields;
            _9__39_4 = static_fields->__9__39_4;
            if ( _9__39_4 )
              goto LABEL_58;
            if ( (BYTE3(v114->vtable._0_Equals.methodPtr) & 4) != 0 && !v114->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v114);
              static_fields = clsQuestCheck___c_TypeInfo->static_fields;
            }
            v116 = (Il2CppObject *)static_fields->__9;
            _9__39_4 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v110, v111, v112, v113);
            System_Action___ctor(_9__39_4, v116, Method_clsQuestCheck___c__CheckQuestPlayable_b__39_4__, 0LL);
            v102 = (System_Int32_array **)_9__39_4;
            v117 = clsQuestCheck___c_TypeInfo->static_fields;
            v117->__9__39_4 = _9__39_4;
            p__9__39_4 = (BattleServantConfConponent_o *)&v117->__9__39_4;
            goto LABEL_57;
          }
        }
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_40F6048 )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, v109);
          byte_40F6048 = 1;
        }
        v118 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v118 = TerminalPramsManager_TypeInfo;
        }
        v118->static_fields->_QuestId_k__BackingField = questId;
        v119 = *(_QWORD *)(v51 + 32);
        if ( !byte_40F6093 )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, v109);
          v118 = TerminalPramsManager_TypeInfo;
          byte_40F6093 = 1;
        }
        if ( (BYTE3(v118->vtable._0_Equals.methodPtr) & 4) != 0 && !v118->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v118);
          v118 = TerminalPramsManager_TypeInfo;
        }
        v118->static_fields->_EndTime_k__BackingField = v119;
        v118->static_fields->lastPlayQuestConsumeAp = v75;
        TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(0LL);
        v120 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( v120 )
        {
          v121 = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)v120,
                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( v121 )
          {
            v122 = v121;
            UserServantMaster__getCount(v121, &servantEquipSum[1], servantEquipSum, 1, 0LL);
            v123 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( v123 )
            {
              v124 = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)v123,
                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
              if ( !UserServantMaster__CheckServantAdd(v122, 1, 0LL) )
              {
                if ( UserServantMaster__CheckEquipAdd(v122, 1, 1, 0LL) )
                {
                  v148 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !v106 )
                    goto LABEL_289;
                  v153 = (CommonUI_o *)v148;
                  v154 = servantEquipSum[0];
                  svtEquipKeep = v106->fields.svtEquipKeep;
                  v156 = clsQuestCheck___c_TypeInfo;
                  if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
                    v156 = clsQuestCheck___c_TypeInfo;
                  }
                  v157 = v156->static_fields;
                  _9__39_1 = v157->__9__39_1;
                  if ( !_9__39_1 )
                  {
                    if ( (BYTE3(v156->vtable._0_Equals.methodPtr) & 4) != 0 && !v156->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(v156);
                      v157 = clsQuestCheck___c_TypeInfo->static_fields;
                    }
                    v158 = (Il2CppObject *)v157->__9;
                    _9__39_1 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                                                 ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                                                 v149,
                                                                                 v150,
                                                                                 v151,
                                                                                 v152);
                    ServantFrameShortDlgComponent_CallbackFunc___ctor(
                      _9__39_1,
                      v158,
                      Method_clsQuestCheck___c__CheckQuestPlayable_b__39_1__,
                      0LL);
                    v159 = clsQuestCheck___c_TypeInfo->static_fields;
                    v159->__9__39_1 = _9__39_1;
                    sub_B16F98(
                      (BattleServantConfConponent_o *)&v159->__9__39_1,
                      (System_Int32_array **)_9__39_1,
                      v160,
                      v161,
                      v162,
                      v163,
                      v164,
                      v165);
                  }
                  if ( !v153 )
                    goto LABEL_289;
                  v147 = 1;
                  v144 = v153;
                  v145 = v154;
                }
                else
                {
                  if ( !v124 )
                    goto LABEL_289;
                  if ( !UserCommandCodeMaster__CheckCommandCodeAdd(v124, 0, 0LL) )
                  {
                    switch ( QuestEntity__GetConsumeType(v108, 0LL) )
                    {
                      case 1:
                        if ( !v106 )
                          goto LABEL_289;
                        if ( v75 <= UserGameEntity__getAct(v106, 0LL) )
                          goto LABEL_205;
                        v187 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v192 = (RecoverDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                                       RecoverDlgComponent_CallbackFunc_TypeInfo,
                                                                       v188,
                                                                       v189,
                                                                       v190,
                                                                       v191);
                        RecoverDlgComponent_CallbackFunc___ctor(
                          v192,
                          (Il2CppObject *)v51,
                          Method_clsQuestCheck___c__DisplayClass39_0__CheckQuestPlayable_b__9__,
                          0LL);
                        if ( !v187 )
                          goto LABEL_289;
                        v193 = (CommonUI_o *)v187;
                        v194 = v75;
                        v195 = v192;
                        v196 = 0;
                        goto LABEL_172;
                      case 2:
                        if ( !v106 )
                          goto LABEL_289;
                        if ( v75 <= UserGameEntity__getRp(v106, 0LL) )
                          goto LABEL_205;
                        v242 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v247 = (RecoverDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                                       RecoverDlgComponent_CallbackFunc_TypeInfo,
                                                                       v243,
                                                                       v244,
                                                                       v245,
                                                                       v246);
                        RecoverDlgComponent_CallbackFunc___ctor(
                          v247,
                          (Il2CppObject *)v51,
                          Method_clsQuestCheck___c__DisplayClass39_0__CheckQuestPlayable_b__10__,
                          0LL);
                        if ( !v242 )
                          goto LABEL_289;
                        CommonUI__OpenRpRecoverItemListDialog(v242, v75, v247, 0, 0LL);
                        return 0;
                      case 3:
                        ItemConsumeEntity = QuestEntity__getItemConsumeEntity(v108, 0LL);
                        v198 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !v198 )
                          goto LABEL_289;
                        v199 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)v198,
                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
                        v200 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( !v200 )
                          goto LABEL_289;
                        v201 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)v200,
                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
                        v315 = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
                        if ( !ItemConsumeEntity )
                          goto LABEL_205;
                        v202 = (System_String_o *)StringLiteral_1;
                        if ( !QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL) )
                          goto LABEL_205;
                        v203 = 0;
                        str0 = v202;
                        v313 = 0;
                        do
                        {
                          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !NetworkManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                          }
                          IsEnable = NetworkManager__get_UserId(0LL);
                          itemIds = ItemConsumeEntity->fields.itemIds;
                          if ( !itemIds )
                            goto LABEL_289;
                          if ( v203 >= itemIds->max_length )
                            goto LABEL_290;
                          if ( !v199 )
                            goto LABEL_289;
                          IsEnable = (int64_t)UserItemMaster__GetEntity(v199, IsEnable, itemIds->m_Items[v203 + 1], 0LL);
                          v208 = ItemConsumeEntity->fields.itemIds;
                          if ( !v208 )
                            goto LABEL_289;
                          if ( v203 >= v208->max_length )
                            goto LABEL_290;
                          if ( !v201 )
                            goto LABEL_289;
                          v209 = IsEnable;
                          IsEnable = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                v201,
                                                v208->m_Items[v203 + 1],
                                                (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                          if ( !IsEnable )
                            goto LABEL_289;
                          v210 = IsEnable;
                          if ( *(_DWORD *)(IsEnable + 48) == 1 )
                          {
                            if ( !v315 )
                              goto LABEL_289;
                            klass = (int32_t)v315[4].klass;
                          }
                          else if ( v209
                                 && (IsEnable = ItemEntity__IsEnable((ItemEntity_o *)IsEnable, 0LL), (IsEnable & 1) != 0) )
                          {
                            klass = *(_DWORD *)(v209 + 28);
                          }
                          else
                          {
                            klass = 0;
                          }
                          nums = ItemConsumeEntity->fields.nums;
                          if ( !nums )
                            goto LABEL_289;
                          if ( v203 >= nums->max_length )
                            goto LABEL_290;
                          if ( nums->m_Items[v203 + 1] > klass )
                          {
                            str0 = System_String__Concat_43746016(
                                     str0,
                                     (System_String_o *)StringLiteral_26,
                                     *(System_String_o **)(v210 + 24),
                                     0LL);
                            v313 = 1;
                          }
                          ++v203;
                        }
                        while ( QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, v203, 0LL) );
                        if ( (v313 & 1) == 0 )
                          goto LABEL_205;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v213 = LocalizationManager__Get((System_String_o *)StringLiteral_10909, 0LL);
                        v214 = System_String__Format(v213, (Il2CppObject *)str0, 0LL);
                        v215 = System_String__Concat_43743732(v214, (System_String_o *)StringLiteral_27, 0LL);
                        v216 = LocalizationManager__Get((System_String_o *)StringLiteral_2500, 0LL);
                        v217 = System_String__Concat_43743732(v215, v216, 0LL);
                        v222 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v223 = clsQuestCheck___c_TypeInfo;
                        if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
                          v223 = clsQuestCheck___c_TypeInfo;
                        }
                        v224 = v223->static_fields;
                        v225 = (System_String_o *)StringLiteral_1;
                        _9__39_11 = v224->__9__39_11;
                        if ( _9__39_11 )
                          goto LABEL_287;
                        if ( (BYTE3(v223->vtable._0_Equals.methodPtr) & 4) != 0 && !v223->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v223);
                          v224 = clsQuestCheck___c_TypeInfo->static_fields;
                        }
                        v227 = (Il2CppObject *)v224->__9;
                        _9__39_11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v218, v219, v220, v221);
                        System_Action___ctor(
                          _9__39_11,
                          v227,
                          Method_clsQuestCheck___c__CheckQuestPlayable_b__39_11__,
                          0LL);
                        v234 = clsQuestCheck___c_TypeInfo->static_fields;
                        v234->__9__39_11 = _9__39_11;
                        p__9__39_11 = (BattleServantConfConponent_o *)&v234->__9__39_11;
                        goto LABEL_286;
                      case 4:
                        if ( !v106 )
                          goto LABEL_289;
                        if ( v75 <= UserGameEntity__getAct(v106, 0LL) )
                        {
                          v248 = QuestEntity__getItemConsumeEntity(v108, 0LL);
                          v249 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                          if ( v249 )
                          {
                            v250 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v249,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
                            v251 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                            if ( v251 )
                            {
                              str0a = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)v251,
                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
                              v314 = UserGameMaster__getSelfUserGame(0LL);
                              if ( !v248 )
                                goto LABEL_205;
                              v252 = (System_String_o *)StringLiteral_1;
                              if ( !QuestConsumeItemEntity__IsAvailableAt(v248, 0, 0LL) )
                                goto LABEL_205;
                              v253 = 0;
                              v316 = v252;
                              v312 = 0;
                              do
                              {
                                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                }
                                IsEnable = NetworkManager__get_UserId(0LL);
                                v254 = v248->fields.itemIds;
                                if ( !v254 )
                                  goto LABEL_289;
                                if ( v253 >= v254->max_length )
                                  goto LABEL_290;
                                if ( !v250 )
                                  goto LABEL_289;
                                IsEnable = (int64_t)UserItemMaster__GetEntity(
                                                      v250,
                                                      IsEnable,
                                                      v254->m_Items[v253 + 1],
                                                      0LL);
                                v255 = v248->fields.itemIds;
                                if ( !v255 )
                                  goto LABEL_289;
                                if ( v253 >= v255->max_length )
                                  goto LABEL_290;
                                v256 = IsEnable;
                                if ( !str0a )
                                  goto LABEL_289;
                                IsEnable = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                      (DataMasterBase_WarMaster__WarEntity__int__o *)str0a,
                                                      v255->m_Items[v253 + 1],
                                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                                if ( !IsEnable )
                                  goto LABEL_289;
                                v257 = IsEnable;
                                if ( *(_DWORD *)(IsEnable + 48) == 1 )
                                {
                                  if ( !v314 )
                                    goto LABEL_289;
                                  qp = v314->fields.qp;
                                }
                                else if ( v256
                                       && (IsEnable = ItemEntity__IsEnable((ItemEntity_o *)IsEnable, 0LL),
                                           (IsEnable & 1) != 0) )
                                {
                                  qp = *(_DWORD *)(v256 + 28);
                                }
                                else
                                {
                                  qp = 0;
                                }
                                v259 = v248->fields.nums;
                                if ( !v259 )
                                  goto LABEL_289;
                                if ( v253 >= v259->max_length )
                                {
LABEL_290:
                                  sub_B17100(IsEnable, v205, v206);
                                  sub_B170A0();
                                }
                                if ( v259->m_Items[v253 + 1] > qp )
                                {
                                  v316 = System_String__Concat_43746016(
                                           v316,
                                           (System_String_o *)StringLiteral_26,
                                           *(System_String_o **)(v257 + 24),
                                           0LL);
                                  v312 = 1;
                                }
                                ++v253;
                              }
                              while ( QuestConsumeItemEntity__IsAvailableAt(v248, v253, 0LL) );
                              if ( (v312 & 1) != 0 )
                              {
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v300 = LocalizationManager__Get((System_String_o *)StringLiteral_10909, 0LL);
                                v301 = System_String__Format(v300, (Il2CppObject *)v316, 0LL);
                                v302 = System_String__Concat_43743732(v301, (System_String_o *)StringLiteral_27, 0LL);
                                v303 = LocalizationManager__Get((System_String_o *)StringLiteral_2500, 0LL);
                                v217 = System_String__Concat_43743732(v302, v303, 0LL);
                                v222 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                v308 = clsQuestCheck___c_TypeInfo;
                                if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
                                  v308 = clsQuestCheck___c_TypeInfo;
                                }
                                v309 = v308->static_fields;
                                v225 = (System_String_o *)StringLiteral_1;
                                _9__39_11 = v309->__9__39_13;
                                if ( !_9__39_11 )
                                {
                                  if ( (BYTE3(v308->vtable._0_Equals.methodPtr) & 4) != 0 && !v308->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(v308);
                                    v309 = clsQuestCheck___c_TypeInfo->static_fields;
                                  }
                                  v310 = (Il2CppObject *)v309->__9;
                                  _9__39_11 = (System_Action_o *)sub_B170CC(
                                                                   System_Action_TypeInfo,
                                                                   v304,
                                                                   v305,
                                                                   v306,
                                                                   v307);
                                  System_Action___ctor(
                                    _9__39_11,
                                    v310,
                                    Method_clsQuestCheck___c__CheckQuestPlayable_b__39_13__,
                                    0LL);
                                  v311 = clsQuestCheck___c_TypeInfo->static_fields;
                                  v311->__9__39_13 = _9__39_11;
                                  p__9__39_11 = (BattleServantConfConponent_o *)&v311->__9__39_13;
LABEL_286:
                                  sub_B16F98(
                                    p__9__39_11,
                                    (System_Int32_array **)_9__39_11,
                                    v228,
                                    v229,
                                    v230,
                                    v231,
                                    v232,
                                    v233);
                                }
LABEL_287:
                                if ( v222 )
                                {
                                  CommonUI__OpenNotificationDialog(
                                    v222,
                                    v225,
                                    v217,
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
                                v260 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                if ( v260 )
                                {
                                  v261 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)v260,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarMaster___);
                                  if ( v261 )
                                  {
                                    v262 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             v261,
                                             v319,
                                             (const MethodInfo_266F388 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
                                    if ( v262 && WarEntity__IsFolder(v262, 0LL) )
                                    {
                                      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                      }
                                      if ( !byte_40F604C )
                                      {
                                        sub_B16FFC(&TerminalPramsManager_TypeInfo, v263);
                                        byte_40F604C = 1;
                                      }
                                      v264 = TerminalPramsManager_TypeInfo;
                                      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                        v264 = TerminalPramsManager_TypeInfo;
                                      }
                                      v265 = 3;
                                    }
                                    else
                                    {
                                      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                      }
                                      if ( !byte_40F604C )
                                      {
                                        sub_B16FFC(&TerminalPramsManager_TypeInfo, v263);
                                        byte_40F604C = 1;
                                      }
                                      v264 = TerminalPramsManager_TypeInfo;
                                      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                        v264 = TerminalPramsManager_TypeInfo;
                                      }
                                      v265 = 2;
                                    }
                                    v264->static_fields->_DispState_k__BackingField = v265;
                                    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                    }
                                    if ( !byte_40F604F )
                                    {
                                      sub_B16FFC(&TerminalPramsManager_TypeInfo, v263);
                                      byte_40F604F = 1;
                                    }
                                    v266 = TerminalPramsManager_TypeInfo;
                                    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                      v266 = TerminalPramsManager_TypeInfo;
                                    }
                                    v266->static_fields->_IsDoneShortcut_k__BackingField = 0;
                                    if ( !byte_40F6049 )
                                    {
                                      sub_B16FFC(&TerminalPramsManager_TypeInfo, v263);
                                      v266 = TerminalPramsManager_TypeInfo;
                                      byte_40F6049 = 1;
                                    }
                                    if ( (BYTE3(v266->vtable._0_Equals.methodPtr) & 4) != 0 && !v266->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(v266);
                                      v266 = TerminalPramsManager_TypeInfo;
                                    }
                                    v266->static_fields->_PhaseCnt_k__BackingField = v320;
                                    if ( !byte_40F6079 )
                                    {
                                      sub_B16FFC(&TerminalPramsManager_TypeInfo, v263);
                                      v266 = TerminalPramsManager_TypeInfo;
                                      byte_40F6079 = 1;
                                    }
                                    if ( (BYTE3(v266->vtable._0_Equals.methodPtr) & 4) != 0 )
                                    {
                                      v267 = v321;
                                      if ( !v266->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(v266);
                                        v266 = TerminalPramsManager_TypeInfo;
                                      }
                                    }
                                    else
                                    {
                                      v267 = v321;
                                    }
                                    v266->static_fields->_SpotId_k__BackingField = v267;
                                    if ( !byte_40F6046 )
                                    {
                                      sub_B16FFC(&TerminalPramsManager_TypeInfo, v263);
                                      v266 = TerminalPramsManager_TypeInfo;
                                      byte_40F6046 = 1;
                                    }
                                    if ( (BYTE3(v266->vtable._0_Equals.methodPtr) & 4) != 0 && !v266->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(v266);
                                      v266 = TerminalPramsManager_TypeInfo;
                                    }
                                    v266->static_fields->_WarId_k__BackingField = v319;
                                    v268 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                    if ( v268 )
                                    {
                                      v269 = (GachaMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)v268,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GachaMaster___);
                                      if ( v269 )
                                      {
                                        VaildPayType = GachaMaster__getVaildPayType(v269, 0LL);
                                        if ( !byte_40F607A )
                                        {
                                          sub_B16FFC(&TerminalPramsManager_TypeInfo, v270);
                                          byte_40F607A = 1;
                                        }
                                        v272 = TerminalPramsManager_TypeInfo;
                                        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                                        {
                                          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                          v272 = TerminalPramsManager_TypeInfo;
                                        }
                                        v272->static_fields->_SummonType_k__BackingField = VaildPayType;
                                        v273 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                                        if ( v273 )
                                        {
                                          v274 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)v273,
                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMessageMaster___);
                                          v275 = *v58;
                                          if ( *v58 )
                                          {
                                            v276 = (QuestMessageMaster_o *)v274;
                                            PhaseMax = MapControl_QuestInfo__GetPhaseMax(v275, 0LL);
                                            v278 = UnityEngine_Mathf__Min_40727532(v320 + 1, PhaseMax, 0LL);
                                            if ( v276 )
                                            {
                                              v185 = 1;
                                              ValidMessage = QuestMessageMaster__GetValidMessage(
                                                               v276,
                                                               questId,
                                                               v278,
                                                               1,
                                                               0LL);
                                              if ( !ValidMessage )
                                                return v185;
                                              v280 = ValidMessage;
                                              v281 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                              {
                                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                              }
                                              v282 = LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10911,
                                                       0LL);
                                              v287 = LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10910,
                                                       0LL);
                                              v288 = clsQuestCheck___c_TypeInfo;
                                              if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
                                              {
                                                j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
                                                v288 = clsQuestCheck___c_TypeInfo;
                                              }
                                              v289 = v288->static_fields;
                                              _9__39_2 = v289->__9__39_2;
                                              v291 = (System_String_o *)StringLiteral_1;
                                              if ( !_9__39_2 )
                                              {
                                                if ( (BYTE3(v288->vtable._0_Equals.methodPtr) & 4) != 0
                                                  && !v288->_2.cctor_finished )
                                                {
                                                  j_il2cpp_runtime_class_init_0(v288);
                                                  v289 = clsQuestCheck___c_TypeInfo->static_fields;
                                                }
                                                v292 = (Il2CppObject *)v289->__9;
                                                _9__39_2 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                                                                    CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                                                    v283,
                                                                                                    v284,
                                                                                                    v285,
                                                                                                    v286);
                                                CommonConfirmDialog_ClickDelegate___ctor(
                                                  _9__39_2,
                                                  v292,
                                                  Method_clsQuestCheck___c__CheckQuestPlayable_b__39_2__,
                                                  0LL);
                                                v293 = clsQuestCheck___c_TypeInfo->static_fields;
                                                v293->__9__39_2 = _9__39_2;
                                                sub_B16F98(
                                                  (BattleServantConfConponent_o *)&v293->__9__39_2,
                                                  (System_Int32_array **)_9__39_2,
                                                  v294,
                                                  v295,
                                                  v296,
                                                  v297,
                                                  v298,
                                                  v299);
                                              }
                                              if ( v281 )
                                              {
                                                v185 = 1;
                                                CommonUI__OpenConfirmDialog_18236860(
                                                  v281,
                                                  v291,
                                                  v280,
                                                  v282,
                                                  v287,
                                                  _9__39_2,
                                                  0,
                                                  1,
                                                  0,
                                                  0LL);
                                                return v185;
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
                          v236 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          v241 = (RecoverDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                                         RecoverDlgComponent_CallbackFunc_TypeInfo,
                                                                         v237,
                                                                         v238,
                                                                         v239,
                                                                         v240);
                          RecoverDlgComponent_CallbackFunc___ctor(
                            v241,
                            (Il2CppObject *)v51,
                            Method_clsQuestCheck___c__DisplayClass39_0__CheckQuestPlayable_b__12__,
                            0LL);
                          if ( v236 )
                          {
                            v196 = 1;
                            v193 = (CommonUI_o *)v236;
                            v194 = v75;
                            v195 = v241;
LABEL_172:
                            CommonUI__OpenApRecoverItemListDialog(v193, v194, v195, v196, 0LL);
                            return 0;
                          }
                        }
                        break;
                      default:
                        goto LABEL_205;
                    }
                    goto LABEL_289;
                  }
                  Count = UserCommandCodeMaster__getCount(v124, 0LL);
                  v167 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !v106 )
                    goto LABEL_289;
                  v172 = (CommonUI_o *)v167;
                  if ( !byte_40F6094 )
                  {
                    sub_B16FFC(&BalanceConfig_TypeInfo, v168);
                    byte_40F6094 = 1;
                  }
                  v173 = BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v173 = BalanceConfig_TypeInfo;
                  }
                  v174 = clsQuestCheck___c_TypeInfo;
                  svtEquipKeep = v173->static_fields->CommandCodeFrameMax;
                  if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
                    v174 = clsQuestCheck___c_TypeInfo;
                  }
                  v175 = v174->static_fields;
                  _9__39_1 = v175->__9__39_7;
                  if ( !_9__39_1 )
                  {
                    if ( (BYTE3(v174->vtable._0_Equals.methodPtr) & 4) != 0 && !v174->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(v174);
                      v175 = clsQuestCheck___c_TypeInfo->static_fields;
                    }
                    v176 = (Il2CppObject *)v175->__9;
                    _9__39_1 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                                                 ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                                                 v168,
                                                                                 v169,
                                                                                 v170,
                                                                                 v171);
                    ServantFrameShortDlgComponent_CallbackFunc___ctor(
                      _9__39_1,
                      v176,
                      Method_clsQuestCheck___c__CheckQuestPlayable_b__39_7__,
                      0LL);
                    v177 = clsQuestCheck___c_TypeInfo->static_fields;
                    v177->__9__39_7 = _9__39_1;
                    sub_B16F98(
                      (BattleServantConfConponent_o *)&v177->__9__39_7,
                      (System_Int32_array **)_9__39_1,
                      v178,
                      v179,
                      v180,
                      v181,
                      v182,
                      v183);
                  }
                  if ( !v172 )
                    goto LABEL_289;
                  v147 = 2;
                  v144 = v172;
                  v145 = Count;
                }
                v146 = svtEquipKeep;
                goto LABEL_119;
              }
              v125 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( v106 )
              {
                v130 = (CommonUI_o *)v125;
                v131 = servantEquipSum[1];
                svtKeep = v106->fields.svtKeep;
                v133 = clsQuestCheck___c_TypeInfo;
                if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
                  v133 = clsQuestCheck___c_TypeInfo;
                }
                v134 = v133->static_fields;
                _9__39_1 = v134->__9__39_0;
                if ( !_9__39_1 )
                {
                  if ( (BYTE3(v133->vtable._0_Equals.methodPtr) & 4) != 0 && !v133->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(v133);
                    v134 = clsQuestCheck___c_TypeInfo->static_fields;
                  }
                  v136 = (Il2CppObject *)v134->__9;
                  _9__39_1 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                                               ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                                               v126,
                                                                               v127,
                                                                               v128,
                                                                               v129);
                  ServantFrameShortDlgComponent_CallbackFunc___ctor(
                    _9__39_1,
                    v136,
                    Method_clsQuestCheck___c__CheckQuestPlayable_b__39_0__,
                    0LL);
                  v137 = clsQuestCheck___c_TypeInfo->static_fields;
                  v137->__9__39_0 = _9__39_1;
                  sub_B16F98(
                    (BattleServantConfConponent_o *)&v137->__9__39_0,
                    (System_Int32_array **)_9__39_1,
                    v138,
                    v139,
                    v140,
                    v141,
                    v142,
                    v143);
                }
                if ( v130 )
                {
                  v144 = v130;
                  v145 = v131;
                  v146 = svtKeep;
                  v147 = 0;
LABEL_119:
                  CommonUI__OpenSvtFrameShortDlg(v144, v145, v146, v147, 1, _9__39_1, 0, 0LL);
                  goto LABEL_120;
                }
              }
            }
          }
        }
      }
    }
LABEL_289:
    sub_B170D4();
  }
  v85 = (System_String_o *)StringLiteral_1;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v86 = LocalizationManager__Get((System_String_o *)StringLiteral_10936, 0LL);
  v91 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v92 = clsQuestCheck___c_TypeInfo;
  if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
    v92 = clsQuestCheck___c_TypeInfo;
  }
  v93 = v92->static_fields;
  _9__39_4 = v93->__9__39_3;
  if ( _9__39_4 )
    goto LABEL_58;
  if ( (BYTE3(v92->vtable._0_Equals.methodPtr) & 4) != 0 && !v92->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v92);
    v93 = clsQuestCheck___c_TypeInfo->static_fields;
  }
  v95 = (Il2CppObject *)v93->__9;
  _9__39_4 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v87, v88, v89, v90);
  System_Action___ctor(_9__39_4, v95, Method_clsQuestCheck___c__CheckQuestPlayable_b__39_3__, 0LL);
  v102 = (System_Int32_array **)_9__39_4;
  v103 = clsQuestCheck___c_TypeInfo->static_fields;
  v103->__9__39_3 = _9__39_4;
  p__9__39_4 = (BattleServantConfConponent_o *)&v103->__9__39_3;
LABEL_57:
  sub_B16F98(p__9__39_4, v102, v96, v97, v98, v99, v100, v101);
LABEL_58:
  if ( !v91 )
    goto LABEL_289;
  CommonUI__OpenNotificationDialog(v91, v85, v86, _9__39_4, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
LABEL_120:
  v184 = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !v184 )
    goto LABEL_289;
  ServantAssetLoadManager__EndRetryTransition(v184, 0LL);
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
  int64_t UserId; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *qrs; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x0
  bool IsOpenByTime; // w8
  QuestReleaseMaster_o *v19; // x0
  const MethodInfo *v20; // x4
  int v21; // w19
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-48h] BYREF
  WarEntity_o *v24; // [xsp+20h] [xbp-30h] BYREF
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_40F67AF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_QuestMaster___, *(_QWORD *)&questId);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestReleaseMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_UserQuestMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    byte_40F67AF = 1;
  }
  v24 = 0LL;
  entity = 0LL;
  memset(&v23, 0, sizeof(v23));
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, method) )
    goto LABEL_31;
  v24 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_35;
  if ( UserQuestMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, UserId, questId, 0LL) )
  {
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
  v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !v17 )
LABEL_35:
    sub_B170D4();
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v17,
          &v24,
          questId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
LABEL_31:
    LOBYTE(qrs) = 0;
    return (char)qrs;
  }
  if ( !v24 )
    goto LABEL_35;
  IsOpenByTime = QuestEntity__IsOpenByTime((QuestEntity_o *)v24, 0, 0LL);
  LOBYTE(qrs) = 0;
  if ( !IsOpenByTime )
    return (char)qrs;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v19 = (QuestReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !v19 )
    goto LABEL_35;
  QuestReleaseMaster__getListByQuestID_31211884(v19, questId, &this->fields.qrs, 0LL);
  qrs = this->fields.qrs;
  if ( qrs )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)qrs,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
    {
      if ( !clsQuestCheck__IsQuestRelease_18391580(this, (QuestReleaseEntity_o *)v23.fields.current, -1, 0LL, v20) )
      {
        v21 = 4;
        goto LABEL_34;
      }
    }
    v21 = 2;
LABEL_34:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    LOBYTE(qrs) = v21 != 4;
  }
  return (char)qrs;
}


void __fastcall clsQuestCheck__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  clsQuestCheck_c *v3; // x0
  System_String_o *KEY_QUEST_START_EFFECT; // x19

  if ( (byte_40F67AC & 1) == 0 )
  {
    sub_B16FFC(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_B16FFC(&clsQuestCheck_TypeInfo, v2);
    byte_40F67AC = 1;
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
  WebViewManager_o *v9; // x0
  __int64 v10; // x1
  TerminalPramsManager_c *v11; // x0

  if ( (byte_40F67BD & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, is_quest_after_action);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
    byte_40F67BD = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v7 = AvalonSceneManager__checkNowScene(Instance, 34, 0LL);
  result = -1;
  if ( !v7 || !is_quest_after_action )
    return result;
  v9 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !v9 )
LABEL_19:
    sub_B170D4();
  if ( !QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)v9, 0LL) )
    return -1;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v10);
    byte_40F6057 = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_int__o *v13; // x20
  QuestGroupMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Int32_array *QuestIdListByEventId; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  __int64 v18; // x8
  System_Int32_array *v19; // x21
  unsigned __int64 v20; // x23
  int32_t v21; // w22

  if ( (byte_40F67C6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_QuestGroupMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&int___TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v12);
    byte_40F67C6 = 1;
  }
  if ( eventId <= 0 )
    return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, method);
  v13 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&eventId,
                                                    method,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_20;
  QuestIdListByEventId = QuestGroupMaster__GetQuestIdListByEventId(Master_WarQuestSelectionMaster, eventId, 0LL);
  if ( !QuestIdListByEventId )
    goto LABEL_20;
  v18 = *(_QWORD *)&QuestIdListByEventId->max_length;
  v19 = QuestIdListByEventId;
  if ( (int)v18 >= 1 )
  {
    v20 = 0LL;
    do
    {
      if ( v20 >= (unsigned int)v18 )
      {
        sub_B17100(QuestIdListByEventId, v16, v17);
        sub_B170A0();
      }
      v21 = v19->m_Items[v20 + 1];
      QuestIdListByEventId = (System_Int32_array *)clsQuestCheck__CheckQuestPlayableNow(this, v21, v17);
      if ( ((unsigned __int8)QuestIdListByEventId & 1) != 0 )
      {
        if ( !v13 )
          goto LABEL_20;
        System_Collections_Generic_List_int___Add(
          v13,
          v21,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v18) = v19->max_length;
      ++v20;
    }
    while ( (__int64)v20 < (int)v18 );
  }
  if ( !v13 )
LABEL_20:
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v16; // x2
  TerminalPramsManager_c *v17; // x0
  System_String_o *ClearEventQuestIds_k__BackingField; // x21
  System_Char_array *v19; // x0
  __int64 v20; // x2
  System_String_array *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Converter_BattleActionData_HealData__int__o *v26; // x22
  System_Int32_array *v27; // x0
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  __int64 v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array *v45; // x19
  System_Int32_array **v46; // x20
  TerminalPramsManager_c *v47; // x0
  BattleServantConfConponent_o *v48; // x0
  System_Int32_array **v49; // x19
  TerminalPramsManager_c *v50; // x0
  BattleServantConfConponent_o *p_ClearEventQuestIds_k__BackingField; // x0

  if ( (byte_40F67C5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_ConvertAll_string__int___, *(_QWORD *)&eventId);
    sub_B16FFC(&char___TypeInfo, v5);
    sub_B16FFC(&Method_System_Converter_string__int___ctor__, v6);
    sub_B16FFC(&System_Converter_string__int__TypeInfo, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Except_int___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_B16FFC(&int___TypeInfo, v10);
    sub_B16FFC(&Method_System_Int32_Parse__, v11);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_1, v13);
    byte_40F67C5 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F68A3 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, *(_QWORD *)&eventId);
    byte_40F68A3 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  if ( System_String__IsNullOrEmpty(v14->static_fields->_ClearEventQuestIds_k__BackingField, 0LL) )
    return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v16);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F68A3 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v15);
    byte_40F68A3 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  ClearEventQuestIds_k__BackingField = v17->static_fields->_ClearEventQuestIds_k__BackingField;
  v19 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v16);
  if ( !v19 )
    goto LABEL_45;
  if ( !v19->max_length )
  {
    sub_B17100(v19, v19, v20);
    sub_B170A0();
  }
  v19->m_Items[2] = 44;
  if ( !ClearEventQuestIds_k__BackingField
    || (v21 = System_String__Split(ClearEventQuestIds_k__BackingField, v19, 0LL),
        v26 = (System_Converter_BattleActionData_HealData__int__o *)sub_B170CC(
                                                                      System_Converter_string__int__TypeInfo,
                                                                      v22,
                                                                      v23,
                                                                      v24,
                                                                      v25),
        System_Converter_BattleActionData_HealData__int____ctor(
          v26,
          0LL,
          Method_System_Int32_Parse__,
          (const MethodInfo_266B524 *)Method_System_Converter_string__int___ctor__),
        (v27 = System_Array__ConvertAll_string__int_(
                 v21,
                 (System_Converter_TInput__TOutput__o *)v26,
                 (const MethodInfo_2043230 *)Method_System_Array_ConvertAll_string__int___)) == 0LL) )
  {
LABEL_45:
    sub_B170D4();
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)v27;
  if ( !*(_QWORD *)&v27->max_length )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    v49 = (System_Int32_array **)StringLiteral_1;
    if ( !byte_40F68A2 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v28);
      byte_40F68A2 = 1;
    }
    v50 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v50 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (BattleServantConfConponent_o *)&v50->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = (BattleServantConfConponent_c *)v49;
    sub_B16F98(p_ClearEventQuestIds_k__BackingField, v49, v29, v30, v31, v32, v33, v34);
    TerminalPramsManager__ClearEventQuestIds_SaveData(0LL);
    return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v16);
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)clsQuestCheck__GetEventQuestIdListPlayable(
                                                               this,
                                                               eventId,
                                                               (const MethodInfo *)v29);
  v37 = System_Linq_Enumerable__Except_int_(
          v36,
          v35,
          (const MethodInfo_18D62FC *)Method_System_Linq_Enumerable_Except_int___);
  v45 = System_Linq_Enumerable__ToArray_int_(
          v37,
          (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  v46 = (System_Int32_array **)StringLiteral_1;
  if ( !byte_40F68A2 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v38);
    byte_40F68A2 = 1;
  }
  v47 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v47 = TerminalPramsManager_TypeInfo;
  }
  v48 = (BattleServantConfConponent_o *)&v47->static_fields->_ClearEventQuestIds_k__BackingField;
  v48->klass = (BattleServantConfConponent_c *)v46;
  sub_B16F98(v48, v46, v39, v40, v41, v42, v43, v44);
  TerminalPramsManager__ClearEventQuestIds_SaveData(0LL);
  return v45;
}


System_Collections_Generic_List_QuestEntity__o *__fastcall clsQuestCheck__GetQuestEntityByQuestId(
        clsQuestCheck_o *this,
        System_Collections_Generic_List_int__o *qids,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x21
  WarEntity_o *Entity; // x1
  System_Collections_Generic_List_Enumerator_int__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v22; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40F67C3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, qids);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_QuestEntity__TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40F67C3 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_QuestEntity__TypeInfo,
                                                                                                  qids,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___),
        !qids) )
  {
    sub_B170D4();
  }
  v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    qids,
    (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v22,
            (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( !v18 )
      sub_B170D4();
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v18,
               v22.fields.current,
               (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    if ( !v15 )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v15,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v22,
    (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return (System_Collections_Generic_List_QuestEntity__o *)v15;
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
  WebViewManager_o *Instance; // x0
  QuestReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  QuestReleaseEntity_array *ListByType; // x24
  WebViewManager_o *v27; // x0
  WarQuestSelectionMaster_o *TypeFlag; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  const MethodInfo *v32; // x4
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v34; // x25
  unsigned int v35; // w28
  QuestReleaseEntity_o *v36; // x8
  int32_t questId; // w26
  QuestEntity_o *Entity; // x0
  System_Collections_Generic_List_int__o *v39; // x23
  const MethodInfo *v40; // x4
  System_Collections_Generic_List_int__o *v41; // x0
  unsigned int size; // w8
  int v43; // w25
  unsigned __int64 v44; // x20
  int32_t v45; // w26
  int v46; // w8
  _BYTE v48[32]; // [xsp+8h] [xbp-98h] BYREF
  int v49; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_int__o v50; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_40F67C2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__RemoveAt__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_40F67C2 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  v49 = 0;
  v23 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&svt_id,
                                                    *(_QWORD *)&oldFriendShipRank,
                                                    *(_QWORD *)&type_flag,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (QuestReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_36;
  ListByType = QuestReleaseMaster__getListByType(MasterData_WarQuestSelectionMaster, 9, 0LL);
  v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v27 )
    goto LABEL_36;
  TypeFlag = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)v27,
               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_36;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v34 = (DataMasterBase_WarMaster__WarEntity__int__o *)TypeFlag;
    v35 = 0;
    while ( 1 )
    {
      if ( v35 >= max_length )
      {
        sub_B17100(TypeFlag, v29, v30);
        sub_B170A0();
      }
      v36 = ListByType->m_Items[v35];
      if ( !v36 )
        break;
      if ( v36->fields.targetId == svt_id )
      {
        if ( !v34 )
          break;
        questId = v36->fields.questId;
        Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v34,
                                    questId,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Entity )
          break;
        TypeFlag = (WarQuestSelectionMaster_o *)QuestEntity__GetTypeFlag(Entity, 0LL);
        if ( ((unsigned int)TypeFlag & type_flag) != 0 )
        {
          TypeFlag = (WarQuestSelectionMaster_o *)clsQuestCheck__IsQuestRelease(
                                                    this,
                                                    questId,
                                                    oldFriendShipRank,
                                                    9,
                                                    v32);
          if ( ((unsigned __int8)TypeFlag & 1) != 0 )
          {
            if ( !v23 )
              break;
            System_Collections_Generic_List_int___Add(
              v23,
              questId,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v35 >= max_length )
        goto LABEL_19;
    }
LABEL_36:
    sub_B170D4();
  }
LABEL_19:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v39 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v29,
                                                      v30,
                                                      v31,
                                                      v32);
    System_Collections_Generic_List_int____ctor_49346956(
      v39,
      (System_Collections_Generic_IEnumerable_T__o *)v23,
      (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
    v41 = clsQuestCheck__GetReleaseQuestIdByServantFriendShip(this, svt_id, -1, type_flag, v40);
    if ( !v41 )
      goto LABEL_36;
    size = v41->fields._size;
    v23 = v41;
    if ( (int)(size - 1) >= 0 )
    {
      v43 = 0;
      v44 = (int)(size - 1);
      while ( 1 )
      {
        if ( v44 >= size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( !v39 )
          goto LABEL_36;
        v45 = v23->fields._items->m_Items[v44 + 1];
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v48,
          v39,
          (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v50 = *(System_Collections_Generic_List_Enumerator_int__o *)v48;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v50,
                  (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v45 == v50.fields.current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v23,
              v44,
              (const MethodInfo_2F121A8 *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        *(_DWORD *)&v48[4 * v43 + 24] = 226;
        v43 = ++v49;
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v50,
          (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( v43 )
        {
          v46 = v43 - 1;
          if ( *(_DWORD *)&v48[4 * v43 + 20] == 226 )
          {
            --v43;
            v49 = v46;
          }
        }
        if ( (--v44 & 0x80000000) != 0 )
          return v23;
        size = v23->fields._size;
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

  return clsQuestCheck__GetReleaseQuestIdByServantLimit_18395292(this, svt_id, oldLimitCount, 238, v4);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit_18395292(
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
  WebViewManager_o *Instance; // x0
  QuestReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  QuestReleaseEntity_array *ListByType; // x24
  WebViewManager_o *v27; // x0
  WarQuestSelectionMaster_o *TypeFlag; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  const MethodInfo *v32; // x4
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v34; // x25
  unsigned int v35; // w28
  QuestReleaseEntity_o *v36; // x8
  int32_t questId; // w26
  QuestEntity_o *Entity; // x0
  System_Collections_Generic_List_int__o *v39; // x23
  const MethodInfo *v40; // x4
  System_Collections_Generic_List_int__o *v41; // x0
  unsigned int size; // w8
  int v43; // w25
  unsigned __int64 v44; // x20
  int32_t v45; // w26
  int v46; // w8
  _BYTE v48[32]; // [xsp+8h] [xbp-98h] BYREF
  int v49; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_int__o v50; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_40F67BF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__RemoveAt__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_40F67BF = 1;
  }
  memset(&v50, 0, sizeof(v50));
  v49 = 0;
  v23 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&svt_id,
                                                    *(_QWORD *)&oldLimitCount,
                                                    *(_QWORD *)&type_flag,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (QuestReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_36;
  ListByType = QuestReleaseMaster__getListByType(MasterData_WarQuestSelectionMaster, 7, 0LL);
  v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v27 )
    goto LABEL_36;
  TypeFlag = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)v27,
               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_36;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v34 = (DataMasterBase_WarMaster__WarEntity__int__o *)TypeFlag;
    v35 = 0;
    while ( 1 )
    {
      if ( v35 >= max_length )
      {
        sub_B17100(TypeFlag, v29, v30);
        sub_B170A0();
      }
      v36 = ListByType->m_Items[v35];
      if ( !v36 )
        break;
      if ( v36->fields.targetId == svt_id )
      {
        if ( !v34 )
          break;
        questId = v36->fields.questId;
        Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v34,
                                    questId,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Entity )
          break;
        TypeFlag = (WarQuestSelectionMaster_o *)QuestEntity__GetTypeFlag(Entity, 0LL);
        if ( ((unsigned int)TypeFlag & type_flag) != 0 )
        {
          TypeFlag = (WarQuestSelectionMaster_o *)clsQuestCheck__IsQuestRelease(this, questId, oldLimitCount, 7, v32);
          if ( ((unsigned __int8)TypeFlag & 1) != 0 )
          {
            if ( !v23 )
              break;
            System_Collections_Generic_List_int___Add(
              v23,
              questId,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v35 >= max_length )
        goto LABEL_19;
    }
LABEL_36:
    sub_B170D4();
  }
LABEL_19:
  if ( (oldLimitCount & 0x80000000) == 0 )
  {
    v39 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v29,
                                                      v30,
                                                      v31,
                                                      v32);
    System_Collections_Generic_List_int____ctor_49346956(
      v39,
      (System_Collections_Generic_IEnumerable_T__o *)v23,
      (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
    v41 = clsQuestCheck__GetReleaseQuestIdByServantLimit_18395292(this, svt_id, -1, type_flag, v40);
    if ( !v41 )
      goto LABEL_36;
    size = v41->fields._size;
    v23 = v41;
    if ( (int)(size - 1) >= 0 )
    {
      v43 = 0;
      v44 = (int)(size - 1);
      while ( 1 )
      {
        if ( v44 >= size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( !v39 )
          goto LABEL_36;
        v45 = v23->fields._items->m_Items[v44 + 1];
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v48,
          v39,
          (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v50 = *(System_Collections_Generic_List_Enumerator_int__o *)v48;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v50,
                  (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v45 == v50.fields.current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v23,
              v44,
              (const MethodInfo_2F121A8 *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        *(_DWORD *)&v48[4 * v43 + 24] = 225;
        v43 = ++v49;
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v50,
          (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( v43 )
        {
          v46 = v43 - 1;
          if ( *(_DWORD *)&v48[4 * v43 + 20] == 225 )
          {
            --v43;
            v49 = v46;
          }
        }
        if ( (--v44 & 0x80000000) != 0 )
          return v23;
        size = v23->fields._size;
      }
    }
  }
  return v23;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit_18396276(
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
  WebViewManager_o *Instance; // x0
  QuestReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  QuestReleaseEntity_array *ListByType; // x25
  WebViewManager_o *v26; // x0
  WarQuestSelectionMaster_o *TypeFlag; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  const MethodInfo *v31; // x4
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v33; // x26
  unsigned int v34; // w21
  QuestReleaseEntity_o *v35; // x8
  int32_t questId; // w27
  QuestEntity_o *Entity; // x0
  System_Collections_Generic_List_int__o *v38; // x24
  int v39; // w8
  __int64 v40; // x28
  QuestReleaseEntity_o *v41; // x8
  int32_t v42; // w27
  QuestEntity_o *v43; // x0
  const MethodInfo *v44; // x4
  unsigned int size; // w8
  int v46; // w26
  unsigned __int64 v47; // x20
  int32_t v48; // w25
  int v49; // w8
  _BYTE v53[32]; // [xsp+18h] [xbp-98h] BYREF
  int v54; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_int__o v55; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_40F67C0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__RemoveAt__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v19);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_40F67C0 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  v54 = 0;
  v22 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&svt_id,
                                                    *(_QWORD *)&oldLimitCount,
                                                    *(_QWORD *)&newLimitCount,
                                                    *(_QWORD *)&type_flag);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_WarQuestSelectionMaster = (QuestReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_47;
  ListByType = QuestReleaseMaster__getListByType(MasterData_WarQuestSelectionMaster, 7, 0LL);
  v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v26 )
    goto LABEL_47;
  TypeFlag = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)v26,
               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_47;
  max_length = ListByType->max_length;
  v33 = (DataMasterBase_WarMaster__WarEntity__int__o *)TypeFlag;
  if ( max_length >= 1 )
  {
    v34 = 0;
    while ( v34 < max_length )
    {
      v35 = ListByType->m_Items[v34];
      if ( !v35 )
        goto LABEL_47;
      if ( v35->fields.targetId == svt_id )
      {
        if ( !v33 )
          goto LABEL_47;
        questId = v35->fields.questId;
        Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v33,
                                    questId,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Entity )
          goto LABEL_47;
        TypeFlag = (WarQuestSelectionMaster_o *)QuestEntity__GetTypeFlag(Entity, 0LL);
        if ( ((unsigned int)TypeFlag & type_flag) != 0 )
        {
          TypeFlag = (WarQuestSelectionMaster_o *)clsQuestCheck__IsQuestRelease(this, questId, oldLimitCount, 7, v31);
          if ( ((unsigned __int8)TypeFlag & 1) != 0 )
          {
            if ( !v22 )
              goto LABEL_47;
            System_Collections_Generic_List_int___Add(
              v22,
              questId,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v34 >= max_length )
        goto LABEL_19;
    }
LABEL_48:
    sub_B17100(TypeFlag, v28, v29);
    sub_B170A0();
  }
LABEL_19:
  v38 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v28,
                                                    v29,
                                                    v30,
                                                    v31);
  System_Collections_Generic_List_int____ctor(
    v38,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v39 = ListByType->max_length;
  if ( v39 >= 1 )
  {
    v40 = 0LL;
    while ( (unsigned int)v40 < v39 )
    {
      v41 = ListByType->m_Items[v40];
      if ( !v41 )
        goto LABEL_47;
      if ( v41->fields.targetId == svt_id )
      {
        if ( !v33 )
          goto LABEL_47;
        v42 = v41->fields.questId;
        v43 = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 v33,
                                 v42,
                                 (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v43 )
          goto LABEL_47;
        TypeFlag = (WarQuestSelectionMaster_o *)QuestEntity__GetTypeFlag(v43, 0LL);
        if ( ((unsigned int)TypeFlag & type_flag) != 0 )
        {
          TypeFlag = (WarQuestSelectionMaster_o *)clsQuestCheck__IsQuestRelease(this, v42, newLimitCount, 7, v44);
          if ( ((unsigned __int8)TypeFlag & 1) != 0 )
          {
            if ( !v38 )
              goto LABEL_47;
            System_Collections_Generic_List_int___Add(
              v38,
              v42,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      v39 = ListByType->max_length;
      if ( (int)++v40 >= v39 )
        goto LABEL_31;
    }
    goto LABEL_48;
  }
LABEL_31:
  if ( !v38 )
LABEL_47:
    sub_B170D4();
  size = v38->fields._size;
  if ( (int)(size - 1) >= 0 )
  {
    v46 = 0;
    v47 = (int)(size - 1);
    while ( 1 )
    {
      if ( v47 >= size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( !v22 )
        goto LABEL_47;
      v48 = v38->fields._items->m_Items[v47 + 1];
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v53,
        v22,
        (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v55 = *(System_Collections_Generic_List_Enumerator_int__o *)v53;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v55,
                (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        if ( v48 == v55.fields.current )
        {
          System_Collections_Generic_List_int___RemoveAt(
            v38,
            v47,
            (const MethodInfo_2F121A8 *)Method_System_Collections_Generic_List_int__RemoveAt__);
          break;
        }
      }
      *(_DWORD *)&v53[4 * v46 + 24] = 309;
      v46 = ++v54;
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v55,
        (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      if ( v46 )
      {
        v49 = v46 - 1;
        if ( *(_DWORD *)&v53[4 * v46 + 20] == 309 )
        {
          --v46;
          v54 = v49;
        }
      }
      if ( (--v47 & 0x80000000) != 0 )
        return v38;
      size = v38->fields._size;
    }
  }
  return v38;
}


System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLv(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLv,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__GetReleaseQuestIdByServantLv_18394788(this, svt_id, oldLv, 238, v4);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLv_18394788(
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
  WebViewManager_o *Instance; // x0
  QuestReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  QuestReleaseEntity_array *ListByType; // x24
  WebViewManager_o *v19; // x0
  WarQuestSelectionMaster_o *TypeFlag; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v24; // x25
  unsigned int v25; // w27
  QuestReleaseEntity_o *v26; // x8
  int32_t questId; // w26
  QuestEntity_o *Entity; // x0
  const MethodInfo *v29; // x4

  if ( (byte_40F67BE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40F67BE = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&svt_id,
                                                    *(_QWORD *)&oldLv,
                                                    *(_QWORD *)&type_flag,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (QuestReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_20;
  ListByType = QuestReleaseMaster__getListByType(MasterData_WarQuestSelectionMaster, 6, 0LL);
  v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v19 )
    goto LABEL_20;
  TypeFlag = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)v19,
               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_20;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v24 = (DataMasterBase_WarMaster__WarEntity__int__o *)TypeFlag;
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= max_length )
      {
        sub_B17100(TypeFlag, v21, v22);
        sub_B170A0();
      }
      v26 = ListByType->m_Items[v25];
      if ( !v26 )
        break;
      if ( v26->fields.targetId == svt_id )
      {
        if ( !v24 )
          break;
        questId = v26->fields.questId;
        Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v24,
                                    questId,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Entity )
          break;
        TypeFlag = (WarQuestSelectionMaster_o *)QuestEntity__GetTypeFlag(Entity, 0LL);
        if ( ((unsigned int)TypeFlag & type_flag) != 0 )
        {
          TypeFlag = (WarQuestSelectionMaster_o *)clsQuestCheck__IsQuestRelease(this, questId, oldLv, 6, v29);
          if ( ((unsigned __int8)TypeFlag & 1) != 0 )
          {
            if ( !v15 )
              break;
            System_Collections_Generic_List_int___Add(
              v15,
              questId,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v25 >= max_length )
        return v15;
    }
LABEL_20:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  DataManager_o *v20; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  QuestReleaseMaster_o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  QuestReleaseEntity_array *ListByType; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  const MethodInfo *v31; // x4
  int max_length; // w8
  QuestReleaseEntity_array *v33; // x26
  unsigned int v34; // w19
  QuestReleaseEntity_o *v35; // x24
  __int64 v36; // x28
  int32_t questId; // w27
  System_Int32_array **Entity; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  QuestEntity_o **v45; // x25
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v50; // x24
  ServantGroupMaster_o *v51; // x0
  ServantGroupEntity_array *ListByServantID; // x19
  __int64 v53; // x3
  const MethodInfo *v54; // x4
  __int64 v55; // x8
  QuestReleaseEntity_array *v56; // x24
  unsigned __int64 v57; // x20
  int v58; // w8
  unsigned int v59; // w22
  __int64 v60; // x19
  QuestReleaseEntity_o *v61; // x25
  __int64 v62; // x27
  int32_t v63; // w25
  System_Int32_array **v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  QuestEntity_o **v71; // x26
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v76; // x28
  DataManager_o *v78; // [xsp+10h] [xbp-70h]
  DataManager_o *v79; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_T__o *list; // [xsp+28h] [xbp-58h]

  if ( (byte_40F67C1 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_QuestEntity___, *(_QWORD *)&servantId);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantGroupMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v8);
    sub_B16FFC(&Method_System_Func_QuestEntity__bool___ctor__, v9);
    sub_B16FFC(&System_Func_QuestEntity__bool__TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_QuestEntity__TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&Method_clsQuestCheck___c__DisplayClass29_0__GetReleasedQuestEntityListByServantGet_b__0__, v15);
    sub_B16FFC(&clsQuestCheck___c__DisplayClass29_0_TypeInfo, v16);
    sub_B16FFC(&Method_clsQuestCheck___c__DisplayClass29_1__GetReleasedQuestEntityListByServantGet_b__1__, v17);
    sub_B16FFC(&clsQuestCheck___c__DisplayClass29_1_TypeInfo, v18);
    byte_40F67C1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  v20 = (DataManager_o *)Instance;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  v22 = (QuestReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  v20,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  list = (System_Collections_Generic_List_T__o *)sub_B170CC(
                                                   System_Collections_Generic_List_QuestEntity__TypeInfo,
                                                   v23,
                                                   v24,
                                                   v25,
                                                   v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  if ( !v22 )
    goto LABEL_43;
  v78 = v20;
  ListByType = QuestReleaseMaster__getListByType(v22, 8, 0LL);
  if ( !ListByType )
    goto LABEL_43;
  max_length = ListByType->max_length;
  v33 = ListByType;
  if ( max_length >= 1 )
  {
    v34 = 0;
    while ( v34 < max_length )
    {
      v35 = v33->m_Items[v34];
      v36 = sub_B170CC(clsQuestCheck___c__DisplayClass29_0_TypeInfo, v28, v29, v30, v31);
      clsQuestCheck___c__DisplayClass29_0___ctor((clsQuestCheck___c__DisplayClass29_0_o *)v36, 0LL);
      if ( !v35 )
        goto LABEL_43;
      if ( v35->fields.targetId == servantId )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_43;
        questId = v35->fields.questId;
        Entity = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          MasterData_WarQuestSelectionMaster,
                                          questId,
                                          (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v36 )
          goto LABEL_43;
        *(_QWORD *)(v36 + 16) = Entity;
        v45 = (QuestEntity_o **)(v36 + 16);
        sub_B16F98((BattleServantConfConponent_o *)(v36 + 16), Entity, v39, v40, v41, v42, v43, v44);
        v50 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                   System_Func_QuestEntity__bool__TypeInfo,
                                                                                   v46,
                                                                                   v47,
                                                                                   v48,
                                                                                   v49);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v50,
          (Il2CppObject *)v36,
          Method_clsQuestCheck___c__DisplayClass29_0__GetReleasedQuestEntityListByServantGet_b__0__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_QuestEntity__bool___ctor__);
        ListByType = (QuestReleaseEntity_array *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                                   list,
                                                   (System_Func_T__bool__o *)v50,
                                                   (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)ListByType & 1) == 0 )
        {
          if ( !*v45 )
            goto LABEL_43;
          ListByType = (QuestReleaseEntity_array *)QuestEntity__GetTypeFlag(*v45, 0LL);
          if ( ((unsigned int)ListByType & typeFlag) != 0 )
          {
            ListByType = (QuestReleaseEntity_array *)clsQuestCheck__IsQuestRelease(this, questId, -1, 0, v31);
            if ( ((unsigned __int8)ListByType & 1) != 0 )
            {
              if ( !list )
                goto LABEL_43;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
                (EventMissionProgressRequest_Argument_ProgressData_o *)*v45,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestEntity__Add__);
            }
          }
        }
      }
      max_length = v33->max_length;
      if ( (int)++v34 >= max_length )
        goto LABEL_20;
    }
LABEL_44:
    sub_B17100(ListByType, v28, v29);
    sub_B170A0();
  }
LABEL_20:
  v51 = (ServantGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  v78,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantGroupMaster___);
  if ( !v51
    || (ListByServantID = ServantGroupMaster__getListByServantID(v51, servantId, 0LL),
        ListByType = QuestReleaseMaster__getListByType(v22, 10, 0LL),
        !ListByServantID) )
  {
LABEL_43:
    sub_B170D4();
  }
  v55 = *(_QWORD *)&ListByServantID->max_length;
  if ( (int)v55 >= 1 )
  {
    v56 = ListByType;
    v57 = 0LL;
    v79 = (DataManager_o *)ListByServantID;
    while ( 1 )
    {
      if ( v57 >= (unsigned int)v55 )
        goto LABEL_44;
      if ( !v56 )
        goto LABEL_43;
      v58 = v56->max_length;
      if ( v58 >= 1 )
        break;
LABEL_41:
      ++v57;
      LODWORD(v55) = v79->fields.datalist;
      if ( (__int64)v57 >= (int)v55 )
        return (System_Collections_Generic_List_QuestEntity__o *)list;
    }
    v59 = 0;
    v60 = *((_QWORD *)&v79->fields.lookup + v57);
    while ( v59 < v58 )
    {
      v61 = v56->m_Items[v59];
      v62 = sub_B170CC(clsQuestCheck___c__DisplayClass29_1_TypeInfo, v28, v29, v53, v54);
      clsQuestCheck___c__DisplayClass29_1___ctor((clsQuestCheck___c__DisplayClass29_1_o *)v62, 0LL);
      if ( !v60 || !v61 )
        goto LABEL_43;
      if ( *(_DWORD *)(v60 + 16) == v61->fields.targetId )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_43;
        v63 = v61->fields.questId;
        v64 = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       MasterData_WarQuestSelectionMaster,
                                       v63,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v62 )
          goto LABEL_43;
        *(_QWORD *)(v62 + 16) = v64;
        v71 = (QuestEntity_o **)(v62 + 16);
        sub_B16F98((BattleServantConfConponent_o *)(v62 + 16), v64, v65, v66, v67, v68, v69, v70);
        v76 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                   System_Func_QuestEntity__bool__TypeInfo,
                                                                                   v72,
                                                                                   v73,
                                                                                   v74,
                                                                                   v75);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v76,
          (Il2CppObject *)v62,
          Method_clsQuestCheck___c__DisplayClass29_1__GetReleasedQuestEntityListByServantGet_b__1__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_QuestEntity__bool___ctor__);
        ListByType = (QuestReleaseEntity_array *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                                   list,
                                                   (System_Func_T__bool__o *)v76,
                                                   (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)ListByType & 1) == 0 )
        {
          if ( !*v71 )
            goto LABEL_43;
          ListByType = (QuestReleaseEntity_array *)QuestEntity__GetTypeFlag(*v71, 0LL);
          if ( ((unsigned int)ListByType & typeFlag) != 0 )
          {
            ListByType = (QuestReleaseEntity_array *)clsQuestCheck__IsQuestRelease(this, v63, -1, 0, v54);
            if ( ((unsigned __int8)ListByType & 1) != 0 )
            {
              if ( !list )
                goto LABEL_43;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
                (EventMissionProgressRequest_Argument_ProgressData_o *)*v71,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestEntity__Add__);
            }
          }
        }
      }
      v58 = v56->max_length;
      if ( (int)++v59 >= v58 )
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
  WebViewManager_o *Instance; // x0
  EventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventRaidMaster_o *v12; // x22
  int32_t RaidDeadQuestId; // w23
  clsQuestCheck_o *v14; // x0
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x4
  System_Int32_array *RaidAliveQuestIds; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  const MethodInfo *v20; // x4
  __int64 v21; // x8
  System_Int32_array *v22; // x20
  unsigned __int64 v23; // x21

  if ( (byte_40F67B1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v8);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v9);
    byte_40F67B1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (EventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_19;
  v12 = MasterData_WarQuestSelectionMaster;
  RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(MasterData_WarQuestSelectionMaster, eventId, day, 0LL);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v14 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v14 )
    goto LABEL_19;
  if ( clsQuestCheck__IsQuestClear(v14, RaidDeadQuestId, 0, v15)
    || clsQuestCheck__IsQuestRelease(this, RaidDeadQuestId, -1, 0, v16) )
  {
    return 1;
  }
  RaidAliveQuestIds = EventRaidMaster__GetRaidAliveQuestIds(v12, eventId, day, 0LL);
  if ( !RaidAliveQuestIds )
LABEL_19:
    sub_B170D4();
  v21 = *(_QWORD *)&RaidAliveQuestIds->max_length;
  v22 = RaidAliveQuestIds;
  if ( (int)v21 < 1 )
    return 0;
  v23 = 0LL;
  while ( 1 )
  {
    if ( v23 >= (unsigned int)v21 )
    {
      sub_B17100(RaidAliveQuestIds, v18, v19);
      sub_B170A0();
    }
    RaidAliveQuestIds = (System_Int32_array *)clsQuestCheck__IsQuestRelease(this, v22->m_Items[v23 + 1], -1, 0, v20);
    if ( ((unsigned __int8)RaidAliveQuestIds & 1) != 0 )
      break;
    LODWORD(v21) = v22->max_length;
    if ( (__int64)++v23 >= (int)v21 )
      return 0;
  }
  return 1;
}


bool __fastcall clsQuestCheck__IsLastWarClear(clsQuestCheck_o *this, const MethodInfo *method)
{
  int32_t Value; // w1
  const MethodInfo *v4; // x2

  if ( (byte_40F67B3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8340, method);
    byte_40F67B3 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8340, 0LL);
  return clsQuestCheck__IsWarClear(this, Value, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsMainInterlude(clsQuestCheck_o *this, int32_t war_id, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0

  if ( (byte_40F67B4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&war_id);
    sub_B16FFC(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F67B4 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             war_id,
             (const MethodInfo_266F388 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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

  if ( (byte_40F67BA & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&qid);
    byte_40F67BA = 1;
  }
  v6 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25438860(qid, v6, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsQuestClearRaw(
        clsQuestCheck_o *this,
        int32_t qid,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  int32_t v6; // w20

  if ( (byte_40F67BB & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&qid);
    byte_40F67BB = 1;
  }
  v6 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25438860(qid, v6, 0, 0LL);
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

  if ( (byte_40F67BC & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&qid);
    this = (clsQuestCheck_o *)sub_B16FFC(&NetworkManager_TypeInfo, v8);
    byte_40F67BC = 1;
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
  WebViewManager_o *Instance; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *EntityList_QuestReleaseMaster; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v18; // x20
  bool v19; // w19
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  QuestReleaseEntity_o *v29; // x0
  const MethodInfo *v30; // x4
  __int64 v31; // x10
  int32_t v32; // w2
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0

  if ( (byte_40F67B0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&quest_id);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v9);
    sub_B16FFC(&Method_DataManager_getEntityList_QuestReleaseMaster___, v10);
    sub_B16FFC(&System_IDisposable_TypeInfo, v11);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_B16FFC(&QuestReleaseEntity_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_40F67B0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (EntityList_QuestReleaseMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__getEntityList_QuestReleaseMaster_((DataManager_o *)Instance, (const MethodInfo_18C34A0 *)Method_DataManager_getEntityList_QuestReleaseMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  v18 = EntityList_QuestReleaseMaster;
  v19 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          EntityList_QuestReleaseMaster,
          (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) > 0;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 v18,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v22;
        p_offset += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v25 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v27 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_17:
      v28 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v29 = (QuestReleaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                                    Enumerator,
                                    *(_QWORD *)(v28 + 8));
    if ( !v29 )
      goto LABEL_38;
    v31 = *(&QuestReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v29->klass->_2.bitflags2 + 1) < (unsigned int)v31
      || (QuestReleaseEntity_c *)v29->klass->_2.typeHierarchy[v31 - 1] != QuestReleaseEntity_TypeInfo )
    {
      sub_B173C8(v29);
LABEL_38:
      sub_B170D4();
    }
    if ( v29->fields.questId == quest_id )
    {
      if ( (old_val & 0x80000000) != 0 )
        v32 = -1;
      else
        v32 = v29->fields.type == old_val_qr_type ? old_val : -1;
      if ( !clsQuestCheck__IsQuestRelease_18391580(this, v29, v32, 0LL, v30) )
      {
        v19 = 0;
        break;
      }
    }
  }
  v33 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      ++v34;
      v35 += 4;
      if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_34;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_34:
    v36 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  return v19;
}


bool __fastcall clsQuestCheck__IsQuestRelease_18389680(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        MapControl_QuestInfo_o *qinf,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_18391580(this, qrd, -1, qinf, v4);
}


bool __fastcall clsQuestCheck__IsQuestRelease_18390580(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        int32_t old_val,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_18391580(this, qrd, old_val, 0LL, v4);
}


bool __fastcall clsQuestCheck__IsQuestRelease_18391580(
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
  WebViewManager_o *v20; // x0
  EventRaidMaster_o *v21; // x0
  WebViewManager_o *v22; // x0
  TotalEventRaidMaster_o *v23; // x0
  int32_t targetId; // w20
  int64_t value; // x19
  int32_t v27; // w0
  int32_t v28; // w20
  int32_t v29; // w21
  int32_t v30; // w19
  int32_t v31; // w0
  int32_t v32; // w1
  int32_t v33; // w2
  bool v34; // w3
  WebViewManager_o *v36; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v37; // x0
  QuestEntity_o *v38; // x0
  int32_t v39; // w20
  int32_t v40; // w21
  int32_t v41; // w19
  bool v42; // w3
  QuestReleaseEntity_o *v43; // x2
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *v46; // x0
  QuestEntity_o *v47; // x19
  int64_t Time; // x20
  int32_t v49; // w19
  int32_t v50; // w20
  int32_t questId; // w22
  int32_t ValueInt; // w19
  TotalEventRaidEntity_o *v54; // [xsp+8h] [xbp-48h] BYREF
  EventRaidEntity_o *entity; // [xsp+10h] [xbp-40h] BYREF
  System_Int32_array *sameGroupQuestIds; // [xsp+18h] [xbp-38h] BYREF
  bool is_release; // [xsp+2Ch] [xbp-24h] BYREF

  v10 = this;
  if ( (byte_40F67B6 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, qrd);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaidMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v13);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v14);
    sub_B16FFC(&NetworkManager_TypeInfo, v15);
    this = (clsQuestCheck_o *)sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_40F67B6 = 1;
  }
  entity = 0LL;
  sameGroupQuestIds = 0LL;
  v54 = 0LL;
  is_release = 0;
  if ( !qrd )
LABEL_112:
    sub_B170D4();
  type = qrd->fields.type;
  if ( !v6 & v5 )
  {
LABEL_20:
    targetId = qrd->fields.targetId;
    value = qrd->fields.value;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v27 = type;
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
        v42 = 1;
        v43 = qrd;
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
        v27 = 6;
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
        v27 = 7;
        break;
      case 8:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v27 = 8;
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
        v27 = 9;
        break;
      case 10:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v27 = 10;
        break;
      case 11:
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v27 = 11;
        break;
      case 12:
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_112;
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_112;
        v46 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                MasterData_WarQuestSelectionMaster,
                qrd->fields.questId,
                (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v46 )
          return is_release;
        v47 = (QuestEntity_o *)v46;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Time = NetworkManager__getTime(0LL);
        if ( QuestEntity__getOpenedAt(v47, 0LL) > Time || QuestEntity__getClosedAt(v47, 0LL) <= Time )
          return is_release;
        return 1;
      case 13:
        v36 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v36 )
          goto LABEL_112;
        v37 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v36,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !v37 )
          goto LABEL_112;
        v38 = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 v37,
                                 qrd->fields.questId,
                                 (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v38 )
          return is_release;
        return QuestEntity__IsOpenByTime(v38, 1, 0LL);
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
        v49 = qrd->fields.targetId;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return CondType__IsMissionAchive(v49, 0LL);
      case 26:
        v50 = qrd->fields.targetId;
        questId = qrd->fields.questId;
        ValueInt = QuestReleaseEntity__getValueInt(qrd, 0LL);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        is_release = CondType__IsNotQuestGroupClear(questId, v50, ValueInt, &sameGroupQuestIds, 1, 0LL);
        if ( qinf )
        {
          qinf->fields._GroupId_k__BackingField = v50;
          MapControl_QuestInfo__AddSameGroupQuestIds(qinf, sameGroupQuestIds, 0LL);
        }
        return is_release;
      case 27:
      case 28:
        v18 = qrd->fields.targetId;
        v19 = QuestReleaseEntity__getValueInt(qrd, 0LL);
        v20 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v20 )
          goto LABEL_112;
        v21 = (EventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v20,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaidMaster___);
        if ( !v21 )
          goto LABEL_112;
        if ( !EventRaidMaster__TryGetEntity(v21, &entity, v18, v19, 0LL) )
          return is_release;
        v22 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v22 )
          goto LABEL_112;
        v23 = (TotalEventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)v22,
                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
        if ( !v23 )
          goto LABEL_112;
        if ( !TotalEventRaidMaster__TryGetEntity(v23, &v54, v18, v19, 0LL) )
          return is_release;
        if ( !entity || !v54 )
          goto LABEL_112;
        return (entity->fields.maxHp > v54->fields.totalDamage) ^ (qrd->fields.type != 27);
      case 32:
        v39 = qrd->fields.questId;
        v40 = qrd->fields.targetId;
        v41 = QuestReleaseEntity__getValueInt(qrd, 0LL);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v34 = 1;
        v31 = v39;
        v32 = v40;
        v33 = v41;
        return CondType__IsQuestGroupClear(v31, v32, v33, v34, 0LL);
      case 38:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v27 = 38;
        break;
      case 53:
        v43 = qrd;
        v42 = 0;
LABEL_103:
        clsQuestCheck__checkCondTypeItemGet(this, &is_release, v43, v42, method);
        return is_release;
      case 54:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v27 = 54;
        break;
      default:
        if ( type == 58 )
        {
          v28 = qrd->fields.questId;
          v29 = qrd->fields.targetId;
          v30 = QuestReleaseEntity__getValueInt(qrd, 0LL);
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v31 = v28;
          v32 = v29;
          v33 = v30;
          v34 = 0;
          return CondType__IsQuestGroupClear(v31, v32, v33, v34, 0LL);
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
        v27 = 64;
        break;
    }
  }
  return CondType__IsOpen(v27, targetId, value, 0, 0LL);
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
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t ScriptIntParam; // w21
  DataMasterBase_WarMaster__WarEntity__int__o *v32; // x0
  int v33; // w8
  clsQuestCheck_c *v35; // x0
  System_String_o *KEY_QUEST_START_EFFECT; // x22
  System_String_o *String; // x22
  __int64 v38; // x2
  System_Char_array *v39; // x0
  __int64 v40; // x2
  System_String_array *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v46; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v47; // x20
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x20
  System_String_o *v49; // x0
  char v50; // w8
  System_String_o *v51; // x19
  clsQuestCheck_c *v52; // x0
  System_String_o *v53; // x20
  WarEntity_o *v54; // [xsp+8h] [xbp-48h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  v8 = questPhase;
  if ( (byte_40F67C9 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Find_string___, *(_QWORD *)&questId);
    sub_B16FFC(&char___TypeInfo, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestPhaseMaster___, v12);
    sub_B16FFC(&DataManager_TypeInfo, v13);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v14);
    sub_B16FFC(&EncryptedPlayerPrefs_TypeInfo, v15);
    sub_B16FFC(&Method_System_Func_string__bool___ctor__, v16);
    sub_B16FFC(&System_Func_string__bool__TypeInfo, v17);
    sub_B16FFC(&Method_clsQuestCheck___c__DisplayClass38_0__IsTapSkipQuestStart_b__0__, v18);
    sub_B16FFC(&clsQuestCheck___c__DisplayClass38_0_TypeInfo, v19);
    sub_B16FFC(&StringLiteral_21524, v20);
    sub_B16FFC(&StringLiteral_871, v21);
    sub_B16FFC(&clsQuestCheck_TypeInfo, v22);
    byte_40F67C9 = 1;
  }
  entity = 0LL;
  v54 = 0LL;
  v23 = sub_B170CC(
          clsQuestCheck___c__DisplayClass38_0_TypeInfo,
          *(_QWORD *)&questId,
          *(_QWORD *)&questPhase,
          effectName,
          isMyRoomMaterial);
  clsQuestCheck___c__DisplayClass38_0___ctor((clsQuestCheck___c__DisplayClass38_0_o *)v23, 0LL);
  if ( !v23 )
    goto LABEL_49;
  *(_QWORD *)(v23 + 16) = effectName;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v23 + 16),
    (System_Int32_array **)effectName,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  if ( isMyRoomMaterial )
    return 0;
  if ( v8 <= 1 )
    v8 = 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_49;
  if ( !QuestPhaseMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, questId, v8, 0LL) )
    goto LABEL_53;
  if ( !entity )
    goto LABEL_49;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_21524, 0, 0LL);
  if ( !ScriptIntParam )
  {
LABEL_53:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v32 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !v32 )
      goto LABEL_49;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           v32,
           &v54,
           questId,
           (const MethodInfo_266F3E4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    {
      if ( !v54 )
        goto LABEL_49;
      v33 = LODWORD(v54->fields.longName) - 1;
      if ( (unsigned int)v33 > 4 )
        ScriptIntParam = 0;
      else
        ScriptIntParam = dword_31321D0[v33];
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
  v39 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v38);
  if ( !v39 )
    goto LABEL_49;
  if ( !v39->max_length )
  {
    sub_B17100(v39, v39, v40);
    sub_B170A0();
  }
  v39->m_Items[2] = 47;
  if ( !String )
LABEL_49:
    sub_B170D4();
  v41 = System_String__Split(String, v39, 0LL);
  if ( !v41 )
  {
LABEL_37:
    v51 = *(System_String_o **)(v23 + 16);
    goto LABEL_38;
  }
  v46 = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)v41;
  v47 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_string__bool__TypeInfo,
                                                                             v42,
                                                                             v43,
                                                                             v44,
                                                                             v45);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v47,
    (Il2CppObject *)v23,
    Method_clsQuestCheck___c__DisplayClass38_0__IsTapSkipQuestStart_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_string__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                     v46,
                                                                     (System_Func_T__bool__o *)v47,
                                                                     (const MethodInfo_18B650C *)Method_BasicHelper_Find_string___);
  v49 = System_String__Concat_43746016(
          String,
          (System_String_o *)StringLiteral_871,
          *(System_String_o **)(v23 + 16),
          0LL);
  if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
  {
    v51 = v49;
LABEL_38:
    v52 = clsQuestCheck_TypeInfo;
    if ( (BYTE3(clsQuestCheck_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !clsQuestCheck_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
      v52 = clsQuestCheck_TypeInfo;
    }
    v53 = v52->static_fields->KEY_QUEST_START_EFFECT;
    if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    }
    EncryptedPlayerPrefs__SetString(v53, v51, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
    v50 = 1;
    goto LABEL_45;
  }
  v50 = 0;
LABEL_45:
  if ( ScriptIntParam == 1 )
    return 1;
  else
    return (ScriptIntParam == 2) & (v50 ^ 1);
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
  WebViewManager_o *Instance; // x0
  QuestRandomGroupMaster_o *MasterData_WarQuestSelectionMaster; // x0
  QuestRandomGroupMaster_o *v13; // x21
  QuestRandomGroupEntity_o *EntityFromQuestId; // x0
  QuestRandomGroupEntity_o *v15; // x19
  int32_t randomGroupId; // w20
  __int64 v17; // x1
  TerminalPramsManager_c *v18; // x0
  System_Collections_Generic_Dictionary_int__int__o *QuestRandomGroupList_k__BackingField; // x0
  __int64 v20; // x1
  TerminalPramsManager_c *v21; // x0
  System_Collections_Generic_Dictionary_int__int__o *v22; // x0
  int32_t Item; // w22
  __int64 v24; // x1
  QuestRandomGroupEntity_o *RandomRangeQuest; // x0
  TerminalPramsManager_c *v26; // x0
  System_Collections_Generic_Dictionary_int__int__o *v27; // x0
  __int64 v28; // x1
  QuestRandomGroupEntity_o *v29; // x21
  TerminalPramsManager_c *v30; // x0
  System_Collections_Generic_Dictionary_int__int__o *v31; // x0
  TerminalPramsManager_c *v32; // x0
  System_Collections_Generic_Dictionary_int__int__o *v33; // x0

  if ( (byte_40F67AE & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, questInfo);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestRandomGroupMaster___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v10);
    byte_40F67AE = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  MasterData_WarQuestSelectionMaster = (QuestRandomGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestRandomGroupMaster___);
  if ( !questInfo )
    goto LABEL_64;
  v13 = MasterData_WarQuestSelectionMaster;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_64;
  EntityFromQuestId = QuestRandomGroupMaster__GetEntityFromQuestId(
                        MasterData_WarQuestSelectionMaster,
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
    if ( !byte_40F68A1 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v17);
      byte_40F68A1 = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v18 = TerminalPramsManager_TypeInfo;
    }
    QuestRandomGroupList_k__BackingField = v18->static_fields->_QuestRandomGroupList_k__BackingField;
    if ( !QuestRandomGroupList_k__BackingField )
      goto LABEL_64;
    if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
           QuestRandomGroupList_k__BackingField,
           randomGroupId,
           (const MethodInfo_2DDD218 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    {
      if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F68A1 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v20);
        byte_40F68A1 = 1;
      }
      v21 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v21 = TerminalPramsManager_TypeInfo;
      }
      v22 = v21->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !v22 )
        goto LABEL_64;
      Item = System_Collections_Generic_Dictionary_int__int___get_Item(
               v22,
               randomGroupId,
               (const MethodInfo_2DDCEF4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsQuestClear_25438860(Item, -1, 0, 0LL) )
        goto LABEL_53;
    }
    else
    {
      if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F68A1 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v20);
        byte_40F68A1 = 1;
      }
      v26 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v26 = TerminalPramsManager_TypeInfo;
      }
      v27 = v26->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !v27 )
        goto LABEL_64;
      System_Collections_Generic_Dictionary_int__int___Add(
        v27,
        randomGroupId,
        0,
        (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
    RandomRangeQuest = QuestRandomGroupMaster__GetRandomRangeQuest(v13, randomGroupId, 0LL);
    if ( RandomRangeQuest )
    {
      v29 = RandomRangeQuest;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F68A1 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v28);
        byte_40F68A1 = 1;
      }
      v30 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v30 = TerminalPramsManager_TypeInfo;
      }
      v31 = v30->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !v31 )
        goto LABEL_64;
      System_Collections_Generic_Dictionary_int__int___set_Item(
        v31,
        randomGroupId,
        v29->fields.questId,
        (const MethodInfo_2DDCF8C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      TerminalPramsManager__SaveQuestRandomGroupList(0LL);
LABEL_53:
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F68A1 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v24);
        byte_40F68A1 = 1;
      }
      v32 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v32 = TerminalPramsManager_TypeInfo;
      }
      v33 = v32->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( v33 )
      {
        LOBYTE(RandomRangeQuest) = System_Collections_Generic_Dictionary_int__int___get_Item(
                                     v33,
                                     randomGroupId,
                                     (const MethodInfo_2DDCEF4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) == v15->fields.questId;
        return (char)RandomRangeQuest;
      }
LABEL_64:
      sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  const MethodInfo *v10; // x3

  if ( (byte_40F67B2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&war_id);
    sub_B16FFC(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F67B2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             war_id,
             (const MethodInfo_266F388 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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

  if ( (byte_40F67C8 & 1) == 0 )
  {
    sub_B16FFC(&ScriptManager_TypeInfo, end_act);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v4);
    byte_40F67C8 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6044 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, end_act);
    byte_40F6044 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v5->static_fields->_WarId_k__BackingField;
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, end_act);
    v5 = TerminalPramsManager_TypeInfo;
    byte_40F6057 = 1;
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
  WebViewManager_o *v16; // x0
  struct UIPanel_o *basePanel; // x19
  __int64 v18; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_Transform_o *mTrans; // x8
  BattleResultComponent_o *klass; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  TerminalPramsManager_c *v26; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w20
  BattleSetupInfo_o *v30; // x23
  BattleSetupInfo_o *v31; // x0
  Il2CppObject *v32; // x20
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v34; // x0
  AvalonSceneManager_o *v35; // x0
  CommonUI_o *v36; // x0
  clsQuestCheck_o *v37; // x0
  const MethodInfo *v38; // x1

  if ( (byte_40F67CB & 1) == 0 )
  {
    sub_B16FFC(&BattleRootComponent_TypeInfo, qinf);
    sub_B16FFC(&BattleSetupInfo_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v15);
    byte_40F67CB = 1;
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
      if ( !byte_40F6044 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v22);
        byte_40F6044 = 1;
      }
      v26 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v26 = TerminalPramsManager_TypeInfo;
      }
      WarId_k__BackingField = v26->static_fields->_WarId_k__BackingField;
      if ( !byte_40F6057 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v22);
        v26 = TerminalPramsManager_TypeInfo;
        byte_40F6057 = 1;
      }
      if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = TerminalPramsManager_TypeInfo;
      }
      QuestId_k__BackingField = v26->static_fields->_QuestId_k__BackingField;
      if ( !byte_40F6058 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v22);
        v26 = TerminalPramsManager_TypeInfo;
        byte_40F6058 = 1;
      }
      if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = TerminalPramsManager_TypeInfo;
      }
      PhaseCnt_k__BackingField = v26->static_fields->_PhaseCnt_k__BackingField;
      v30 = (BattleSetupInfo_o *)sub_B170CC(BattleSetupInfo_TypeInfo, v22, v23, v24, v25);
      BattleSetupInfo___ctor(v30, 0LL);
      if ( !v30 )
        goto LABEL_42;
      v31 = BattleSetupInfo__ConvertBattleSetupInfo(
              v30,
              WarId_k__BackingField,
              QuestId_k__BackingField,
              PhaseCnt_k__BackingField,
              0,
              0,
              0,
              0LL);
      v32 = (Il2CppObject *)v31;
      if ( boostId )
      {
        if ( !v31 )
          goto LABEL_42;
        v31->fields.boostId = boostId;
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance
        || (BYTE4(Instance[1].fields.baseWindow) = 1,
            (v34 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__)) == 0LL)
        || (LODWORD(v34[1].fields.webViewBase) = 1,
            (v35 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
      {
LABEL_42:
        sub_B170D4();
      }
      AvalonSceneManager__pushScene(v35, 35, 1, v32, 0LL);
    }
LABEL_40:
    v36 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( v36 )
    {
      CommonUI__CloseRecoverItemListDialog(v36, 0LL);
      return;
    }
    goto LABEL_42;
  }
  if ( result )
    goto LABEL_40;
  v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v16 )
    goto LABEL_42;
  basePanel = v16->fields.basePanel;
  if ( !basePanel )
    goto LABEL_42;
  v18 = *(&BattleRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&basePanel->klass->_2.bitflags2 + 1) >= (unsigned int)v18
    && (BattleRootComponent_c *)basePanel->klass->_2.typeHierarchy[v18 - 1] == BattleRootComponent_TypeInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16->fields.basePanel, 0LL);
    if ( !gameObject )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    mTrans = basePanel->fields.mTrans;
    if ( !mTrans )
      goto LABEL_42;
    klass = (BattleResultComponent_o *)mTrans[19].klass;
    if ( !klass )
      goto LABEL_42;
    BattleResultComponent__EndResult(klass, 0LL);
    goto LABEL_40;
  }
  v37 = (clsQuestCheck_o *)sub_B173C8(v16->fields.basePanel);
  clsQuestCheck___ctor(v37, v38);
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

  if ( (byte_40F67C4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_String_Join_int___, *(_QWORD *)&eventId);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_698, v11);
    sub_B16FFC(&StringLiteral_1, v12);
    byte_40F67C4 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  v13 = (System_Int32_array **)StringLiteral_1;
  if ( !byte_40F68A2 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, *(_QWORD *)&eventId);
    byte_40F68A2 = 1;
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
  sub_B16F98(p_ClearEventQuestIds_k__BackingField, v13, (System_String_array **)method, v3, v4, v5, v6, v7);
  v17 = (System_Collections_Generic_IEnumerable_T__o *)clsQuestCheck__GetEventQuestIdListPlayable(this, eventId, v16);
  v25 = (System_Int32_array **)System_String__Join_int_(
                                 (System_String_o *)StringLiteral_698,
                                 v17,
                                 (const MethodInfo_224FA24 *)Method_System_String_Join_int___);
  if ( !byte_40F68A2 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v18);
    byte_40F68A2 = 1;
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
  sub_B16F98(v27, v25, v19, v20, v21, v22, v23, v24);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserItemMaster_o *v12; // x22
  int32_t targetId; // w23
  int64_t UserId; // x0
  int32_t num; // w22
  char v16; // w8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F67B7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, is_release);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40F67B7 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !qrd )
    goto LABEL_14;
  v12 = (UserItemMaster_o *)MasterData_WarQuestSelectionMaster;
  targetId = qrd->fields.targetId;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v12 )
    goto LABEL_14;
  if ( !UserItemMaster__TryGetEntity(v12, &entity, UserId, targetId, 0LL) )
  {
    v16 = !itemGet;
    goto LABEL_13;
  }
  if ( !entity )
LABEL_14:
    sub_B170D4();
  num = entity->fields.num;
  v16 = (num >= QuestReleaseEntity__getValueInt(qrd, 0LL)) ^ itemGet ^ 1;
LABEL_13:
  *is_release = v16 & 1;
}


bool __fastcall clsQuestCheck__isPlayQuestStartAction(clsQuestCheck_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  int32_t WarId_k__BackingField; // w20
  int32_t QuestId_k__BackingField; // w19

  if ( (byte_40F67C7 & 1) == 0 )
  {
    sub_B16FFC(&ScriptManager_TypeInfo, method);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v3);
    byte_40F67C7 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6044 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6044 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v4->static_fields->_WarId_k__BackingField;
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
    byte_40F6057 = 1;
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
  WebViewManager_o *Instance; // x0
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F67B8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&qid);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F67B8 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  if ( UserQuestMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, qid, 0LL) )
  {
    if ( entity )
      return entity->fields.challengeNum == 0;
LABEL_13:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F67B9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&qid);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F67B9 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  if ( UserQuestMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, qid, 0LL) )
  {
    if ( entity )
      return UserQuestEntity__getQuestPhase(entity, 0LL);
LABEL_13:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v9; // x3
  bool v10; // w8
  bool result; // w0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F67B5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&qid);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F67B5 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          qid,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 1;
  if ( !entity )
LABEL_12:
    sub_B170D4();
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
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  _BOOL8 IsShop; // x0
  const MethodInfo *v42; // x2
  UserQuestMaster_o *v43; // x23
  int64_t UserId; // x0
  QuestReleaseMaster_o *v46; // x0
  clsQuestCheck_Fields *p_fields; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v48; // x0
  int32_t UseDiceSpotId; // w24
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  System_Collections_Generic_List_T__o *qrs; // x24
  clsQuestCheck___c_c *v55; // x0
  struct clsQuestCheck___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__5_0; // x25
  Il2CppObject *v58; // x26
  struct clsQuestCheck___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  BalanceConfig_c *v66; // x0
  struct BalanceConfig_StaticFields *v67; // x8
  QuestEntity_o *Mine; // x0
  WarQuestSelectionMaster_o *v69; // x0
  UserEventQuestCooltimeMaster_o *v70; // x24
  int32_t v71; // w0
  UserEventQuestCooltimeEntity_o *v72; // x0
  UserEventQuestCooltimeEntity_o *v73; // x24
  int64_t Time; // x0
  int64_t clearedAt; // x26
  int64_t v76; // x25
  EventQuestCooltimeEntity_o *MasterEntity; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *cQuestReleaseListP; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v79; // x0
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v84; // x23
  clsQuestCheck___c_c *v85; // x0
  struct clsQuestCheck___c_StaticFields *v86; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_1; // x24
  Il2CppObject *v88; // x25
  struct clsQuestCheck___c_StaticFields *v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  UserQuestMaster_o *v96; // x23
  int64_t v97; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v98; // x0
  const MethodInfo *v99; // x4
  QuestReleaseEntity_o *current; // x22
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  int v107; // w19
  int32_t eventId; // w24
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x3
  __int64 v112; // x4
  System_Collections_Generic_IEnumerable_T__o *v113; // x25
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v114; // x24
  const MethodInfo *v115; // x2
  BalanceConfig_c *v116; // x0
  const MethodInfo *v117; // x2
  BalanceConfig_c *v118; // x0
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_Collections_Generic_List_Enumerator_T__o v125; // [xsp+0h] [xbp-80h] BYREF
  WarEntity_o *v126; // [xsp+18h] [xbp-68h] BYREF
  WarEntity_o *entity; // [xsp+20h] [xbp-60h] BYREF
  UserQuestEntity_o *v128; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_40F67AD & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&questId);
    sub_B16FFC(&Method_BasicHelper_Any_QuestReleaseEntity___, v12);
    sub_B16FFC(&Method_System_Comparison_QuestReleaseEntity___ctor__, v13);
    sub_B16FFC(&System_Comparison_QuestReleaseEntity__TypeInfo, v14);
    sub_B16FFC(&CondType_TypeInfo, v15);
    sub_B16FFC(&Method_DataManager_GetMaster_EventDetailMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestReleaseMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___, v18);
    sub_B16FFC(&Method_DataManager_GetMaster_UserQuestMaster___, v19);
    sub_B16FFC(&Method_DataManager_GetMaster_WarMaster___, v20);
    sub_B16FFC(&DataManager_TypeInfo, v21);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v22);
    sub_B16FFC(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v26);
    sub_B16FFC(&Method_System_Func_QuestReleaseEntity__bool___ctor__, v27);
    sub_B16FFC(&System_Func_QuestReleaseEntity__bool__TypeInfo, v28);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__, v29);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__, v30);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v31);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__, v32);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___66741320, v33);
    sub_B16FFC(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v34);
    sub_B16FFC(&NetworkManager_TypeInfo, v35);
    sub_B16FFC(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__, v36);
    sub_B16FFC(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__, v37);
    sub_B16FFC(&clsQuestCheck___c_TypeInfo, v38);
    byte_40F67AD = 1;
  }
  entity = 0LL;
  v128 = 0LL;
  v126 = 0LL;
  memset(&v125, 0, sizeof(v125));
  *questReleaseNG = 0LL;
  sub_B16F98(
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
  v128 = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !questInfo || !Master_WarQuestSelectionMaster )
    goto LABEL_114;
  IsShop = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             Master_WarQuestSelectionMaster,
             &entity,
             questInfo->fields.warId,
             (const MethodInfo_266F3E4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( IsShop )
  {
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
      v43 = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserQuestMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v43 )
        goto LABEL_114;
      IsShop = UserQuestMaster__TryGetEntity(v43, &v128, UserId, questId, 0LL);
      if ( IsShop )
      {
        if ( !v128 )
          goto LABEL_114;
        IsShop = UserQuestEntity__IsNotExpired(v128, 0LL);
        if ( IsShop )
          return 1;
      }
    }
  }
  if ( !clsQuestCheck__IsValidQuestRandomGroup((clsQuestCheck_o *)IsShop, questInfo, v42) )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v46 = (QuestReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !v46 )
    goto LABEL_114;
  p_fields = &this->fields;
  QuestReleaseMaster__getListByQuestID_31211884(v46, questId, &this->fields.qrs, 0LL);
  v48 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !entity || !v48 )
    goto LABEL_114;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         v48,
         &v126,
         entity->fields.eventId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    if ( !v126 )
      goto LABEL_114;
    if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v126, 0LL) )
    {
      if ( !v126 )
        goto LABEL_114;
      UseDiceSpotId = EventDetailEntity__GetUseDiceSpotId((EventDetailEntity_o *)v126, 0LL);
      if ( UseDiceSpotId == MapControl_QuestInfo__GetSpotID(questInfo, 0LL)
        && MapControl_QuestInfo__GetQuestType(questInfo, 0LL) == 1 )
      {
        qrs = (System_Collections_Generic_List_T__o *)p_fields->qrs;
        v55 = clsQuestCheck___c_TypeInfo;
        if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
          v55 = clsQuestCheck___c_TypeInfo;
        }
        static_fields = v55->static_fields;
        _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__5_0;
        if ( !_9__5_0 )
        {
          if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v55);
            static_fields = clsQuestCheck___c_TypeInfo->static_fields;
          }
          v58 = (Il2CppObject *)static_fields->__9;
          _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                         System_Func_QuestReleaseEntity__bool__TypeInfo,
                                                                                         v50,
                                                                                         v51,
                                                                                         v52,
                                                                                         v53);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__5_0,
            v58,
            Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__,
            (const MethodInfo_2B6AB40 *)Method_System_Func_QuestReleaseEntity__bool___ctor__);
          v59 = clsQuestCheck___c_TypeInfo->static_fields;
          v59->__9__5_0 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__5_0;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v59->__9__5_0,
            (System_Int32_array **)_9__5_0,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65);
        }
        if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                qrs,
                (System_Func_T__bool__o *)_9__5_0,
                (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_QuestReleaseEntity___) )
        {
          v66 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v66 = BalanceConfig_TypeInfo;
          }
          v67 = v66->static_fields;
          if ( v67->EventBoardGameNextBoardQuestId != questId )
          {
            if ( (BYTE3(v66->vtable._0_Equals.methodPtr) & 4) != 0 && !v66->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v66);
              v67 = BalanceConfig_TypeInfo->static_fields;
            }
            if ( v67->EventBoardGameNextRoundQuestId != questId )
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
              v113 = (System_Collections_Generic_IEnumerable_T__o *)p_fields->qrs;
              v114 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                                       System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                                                       v109,
                                                                                       v110,
                                                                                       v111,
                                                                                       v112);
              System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
                v114,
                v113,
                (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___66741320);
              v116 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v116 = BalanceConfig_TypeInfo;
              }
              if ( clsQuestCheck__CheckQuestPlayableNow(this, v116->static_fields->EventBoardGameNextBoardQuestId, v115) )
                return 0;
              v118 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v118 = BalanceConfig_TypeInfo;
              }
              if ( clsQuestCheck__CheckQuestPlayableNow(this, v118->static_fields->EventBoardGameNextRoundQuestId, v117) )
                return 0;
              p_fields->qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v114;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields,
                (System_Int32_array **)v114,
                v119,
                v120,
                v121,
                v122,
                v123,
                v124);
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
    v69 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___);
    if ( !questInfo->fields._WarInfo_k__BackingField )
      goto LABEL_114;
    v70 = (UserEventQuestCooltimeMaster_o *)v69;
    v71 = MapControl_WarInfo__GetEventId(questInfo->fields._WarInfo_k__BackingField, 0LL);
    if ( !v70 )
      goto LABEL_114;
    v72 = UserEventQuestCooltimeMaster__getEntity(v70, v71, questInfo->fields.questId, 1, 0LL);
    if ( v72 )
    {
      v73 = v72;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      clearedAt = v73->fields.clearedAt;
      v76 = Time;
      MasterEntity = UserEventQuestCooltimeEntity__GetMasterEntity(v73, 0LL);
      if ( !MasterEntity )
        goto LABEL_114;
      if ( v76 < clearedAt + MasterEntity->fields.cooltime )
        return 0;
    }
  }
  if ( !p_fields->qrs )
    return 0;
  cQuestReleaseListP = this->fields.cQuestReleaseListP;
  if ( !cQuestReleaseListP )
    goto LABEL_114;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)cQuestReleaseListP,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
  v79 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.cQuestReleaseListP;
  if ( !v79 )
    goto LABEL_114;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    v79,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.qrs,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__);
  v84 = this->fields.cQuestReleaseListP;
  v85 = clsQuestCheck___c_TypeInfo;
  if ( (BYTE3(clsQuestCheck___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
    v85 = clsQuestCheck___c_TypeInfo;
  }
  v86 = v85->static_fields;
  _9__5_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v86->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( (BYTE3(v85->vtable._0_Equals.methodPtr) & 4) != 0 && !v85->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v85);
      v86 = clsQuestCheck___c_TypeInfo->static_fields;
    }
    v88 = (Il2CppObject *)v86->__9;
    _9__5_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_QuestReleaseEntity__TypeInfo,
                                                                          v80,
                                                                          v81,
                                                                          v82,
                                                                          v83);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_1,
      v88,
      Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_QuestReleaseEntity___ctor__);
    v89 = clsQuestCheck___c_TypeInfo->static_fields;
    v89->__9__5_1 = (struct System_Comparison_QuestReleaseEntity__o *)_9__5_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v89->__9__5_1,
      (System_Int32_array **)_9__5_1,
      v90,
      v91,
      v92,
      v93,
      v94,
      v95);
  }
  if ( !v84 )
    goto LABEL_114;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v84,
    (System_Comparison_T__o *)_9__5_1,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  if ( v128 )
    goto LABEL_87;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v96 = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v97 = NetworkManager__get_UserId(0LL);
  if ( !v96 )
LABEL_114:
    sub_B170D4();
  UserQuestMaster__TryGetEntity(v96, &v128, v97, questId, 0LL);
LABEL_87:
  v98 = this->fields.cQuestReleaseListP;
  if ( !v98 )
    goto LABEL_114;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v125,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v98,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v125,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
  {
    current = (QuestReleaseEntity_o *)v125.fields.current;
    if ( !v128 || !UserQuestEntity__HasStatus(v128, 8, 0LL) )
      goto LABEL_94;
    if ( !current )
      sub_B170D4();
    if ( current->fields.type != 12 )
    {
LABEL_94:
      if ( !clsQuestCheck__IsQuestRelease_18391580(this, current, -1, questInfo, v99) )
      {
        *questReleaseNG = current;
        sub_B16F98(
          (BattleServantConfConponent_o *)questReleaseNG,
          (System_Int32_array **)current,
          v101,
          v102,
          v103,
          v104,
          v105,
          v106);
        v107 = 64;
        goto LABEL_97;
      }
    }
  }
  v107 = 62;
LABEL_97:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v125,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v107 != 64;
}


void __fastcall clsQuestCheck___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F78A3 & 1) == 0 )
  {
    sub_B16FFC(&clsQuestCheck___c_TypeInfo, v1);
    byte_40F78A3 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(clsQuestCheck___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)clsQuestCheck___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  CommonUI_o *Instance; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x21

  if ( (byte_40F78A5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&Method_clsQuestCheck___c__DisplayClass39_1__CheckQuestPlayable_b__5__, v7);
    sub_B16FFC(&clsQuestCheck___c__DisplayClass39_1_TypeInfo, v8);
    byte_40F78A5 = 1;
  }
  v9 = sub_B170CC(clsQuestCheck___c__DisplayClass39_1_TypeInfo, *(_QWORD *)&result, method, v3, v4);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_DWORD *)(v9 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v9,
          Method_clsQuestCheck___c__DisplayClass39_1__CheckQuestPlayable_b__5__,
          0LL),
        !Instance) )
  {
    sub_B170D4();
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__39_1(
        clsQuestCheck___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  CommonUI_o *Instance; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x21

  if ( (byte_40F78A6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&Method_clsQuestCheck___c__DisplayClass39_2__CheckQuestPlayable_b__6__, v7);
    sub_B16FFC(&clsQuestCheck___c__DisplayClass39_2_TypeInfo, v8);
    byte_40F78A6 = 1;
  }
  v9 = sub_B170CC(clsQuestCheck___c__DisplayClass39_2_TypeInfo, *(_QWORD *)&result, method, v3, v4);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_DWORD *)(v9 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v9,
          Method_clsQuestCheck___c__DisplayClass39_2__CheckQuestPlayable_b__6__,
          0LL),
        !Instance) )
  {
    sub_B170D4();
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v15, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__39_11(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40F78A8 & 1) == 0 )
  {
    sub_B16FFC(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_40F78A8 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    0,
    (const MethodInfo_18B4A40 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__39_13(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40F78A9 & 1) == 0 )
  {
    sub_B16FFC(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_40F78A9 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    0,
    (const MethodInfo_18B4A40 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__39_2(
        clsQuestCheck___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40F78AA & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40F78AA = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__39_3(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40F78A4 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B16FFC(&TopLoginRequest_TypeInfo, v2);
    byte_40F78A4 = 1;
  }
  if ( (BYTE3(TopLoginRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopLoginRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopLoginRequest_TypeInfo);
  }
  TopLoginRequest__ResetAccesTime(0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  CommonUI_o *Instance; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x21

  if ( (byte_40F78A7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&Method_clsQuestCheck___c__DisplayClass39_3__CheckQuestPlayable_b__8__, v7);
    sub_B16FFC(&clsQuestCheck___c__DisplayClass39_3_TypeInfo, v8);
    byte_40F78A7 = 1;
  }
  v9 = sub_B170CC(clsQuestCheck___c__DisplayClass39_3_TypeInfo, *(_QWORD *)&result, method, v3, v4);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_DWORD *)(v9 + 16) = result,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v9,
          Method_clsQuestCheck___c__DisplayClass39_3__CheckQuestPlayable_b__8__,
          0LL),
        !Instance) )
  {
    sub_B170D4();
  }
  CommonUI__CloseSvtFrameShortDlg(Instance, v15, 0LL);
}


bool __fastcall clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_0(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B170D4();
  return n->fields.type == 118;
}


int32_t __fastcall clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_1(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *a,
        QuestReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
  __int64 v10; // x3
  __int64 v11; // x4
  SceneJumpInfo_o *v12; // x20
  int32_t v13; // w1
  AvalonSceneManager_o *v14; // x0
  Il2CppObject *v15; // x3
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4

  if ( (byte_40F78AB & 1) == 0 )
  {
    sub_B16FFC(&SceneJumpInfo_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B16FFC(&StringLiteral_12612, v4);
    sub_B16FFC(&StringLiteral_12651, v5);
    byte_40F78AB = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v12 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v16, v17, v18, v19);
      SceneJumpInfo___ctor_29748028(v12, (System_String_o *)StringLiteral_12612, 0, 0LL);
      if ( Instance )
      {
        v13 = 22;
        goto LABEL_12;
      }
LABEL_15:
      sub_B170D4();
    case 1:
      v14 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v14 )
      {
        v13 = 71;
        v15 = 0LL;
LABEL_13:
        AvalonSceneManager__transitionScene(v14, v13, 1, v15, 0LL);
        return;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v12 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v8, v9, v10, v11);
      SceneJumpInfo___ctor_29747932(v12, (System_String_o *)StringLiteral_12651, 0LL);
      if ( Instance )
      {
        v13 = 32;
LABEL_12:
        v14 = (AvalonSceneManager_o *)Instance;
        v15 = (Il2CppObject *)v12;
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
  __int64 v11; // x3
  __int64 v12; // x4
  SceneJumpInfo_o *v13; // x20
  int32_t v14; // w1
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4

  if ( (byte_40F78AC & 1) == 0 )
  {
    sub_B16FFC(&SceneJumpInfo_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B16FFC(&StringLiteral_12655, v4);
    sub_B16FFC(&StringLiteral_12612, v5);
    sub_B16FFC(&StringLiteral_12654, v6);
    byte_40F78AC = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v13 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v19, v20, v21, v22);
      SceneJumpInfo___ctor_29748028(v13, (System_String_o *)StringLiteral_12612, 1, 0LL);
      if ( Instance )
      {
        v14 = 22;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 1:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v13 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v15, v16, v17, v18);
      SceneJumpInfo___ctor_29747932(v13, (System_String_o *)StringLiteral_12655, 0LL);
      if ( Instance )
      {
        v14 = 71;
        goto LABEL_12;
      }
LABEL_14:
      sub_B170D4();
    case 0:
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v13 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v9, v10, v11, v12);
      SceneJumpInfo___ctor_29747932(v13, (System_String_o *)StringLiteral_12654, 0LL);
      if ( Instance )
      {
        v14 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene(Instance, v14, 1, (Il2CppObject *)v13, 0LL);
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
  __int64 v8; // x3
  __int64 v9; // x4
  SceneJumpInfo_o *v10; // x20

  if ( (byte_40F78AD & 1) == 0 )
  {
    sub_B16FFC(&SceneJumpInfo_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B16FFC(&StringLiteral_12612, v4);
    byte_40F78AD = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v10 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v6, v7, v8, v9);
    SceneJumpInfo___ctor_29748028(v10, (System_String_o *)StringLiteral_12612, 2, 0LL);
    if ( !Instance )
      sub_B170D4();
    AvalonSceneManager__transitionScene(Instance, 22, 1, (Il2CppObject *)v10, 0LL);
  }
}