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
  __int64 v9; // x2

  if ( (byte_4B12D2A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_11063/*"QuestStartEffect"*/, v1, v2);
    sub_1BCA7E0(&clsQuestCheck_TypeInfo, v8, v9);
    byte_4B12D2A = 1;
  }
  clsQuestCheck_TypeInfo->static_fields->KEY_QUEST_START_EFFECT = (struct System_String_o *)StringLiteral_11063/*"QuestStartEffect"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)clsQuestCheck_TypeInfo->static_fields,
    StringLiteral_11063/*"QuestStartEffect"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall clsQuestCheck___ctor(clsQuestCheck_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_List_object__o *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B12D29 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck___ctor__, v7, v8);
    byte_4B12D29 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                       v16,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.cQuestReleaseListP = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v19;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.cQuestReleaseListP,
    (int64_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_37DF02C *)Method_SingletonTemplate_clsQuestCheck___ctor__);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x24
  int64_t SpotID; // x0
  __int64 v95; // x1
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  MapControl_QuestInfo_o **v102; // x19
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  int32_t v109; // w28
  MapControl_QuestInfo_o *v110; // x8
  int32_t v111; // w20
  int32_t questPhase; // w29
  int32_t v113; // w21
  _BOOL4 isNotItemConsume; // w22
  int32_t v115; // w25
  int v116; // w26
  bool IsQuestReleaseAll; // w0
  __int64 v118; // x1
  Il2CppObject *MasterData_object; // x26
  UserQuestEntity_o *Entity; // x0
  __int64 v121; // x1
  __int64 v122; // x26
  int64_t Time; // x0
  __int64 v124; // x1
  System_String_o *v125; // x19
  System_String_o *v126; // x20
  __int64 v127; // x2
  __int64 v128; // x3
  CommonUI_o *v129; // x21
  clsQuestCheck___c_c *v130; // x8
  System_Action_o *_9__41_3; // x22
  Il2CppObject *v132; // x23
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  int64_t v139; // x1
  struct clsQuestCheck___c_StaticFields *static_fields; // x0
  PartyOrganizationUtility_o *p__9__41_3; // x0
  UserGameEntity_o *v142; // x26
  QuestEntity_o *v143; // x27
  __int64 v144; // x2
  __int64 v145; // x2
  __int64 v146; // x3
  clsQuestCheck___c_c *v147; // x8
  Il2CppObject *v148; // x23
  struct clsQuestCheck___c_StaticFields *v149; // x0
  TerminalPramsManager_c *v150; // x0
  int32_t v151; // w20
  int64_t v152; // x28
  struct TerminalPramsManager_StaticFields *v153; // x8
  UserServantMaster_o *v154; // x28
  Il2CppObject *v155; // x29
  __int64 v156; // x2
  __int64 v157; // x3
  CommonUI_o *v158; // x19
  int32_t v159; // w20
  int32_t svtKeep; // w21
  ServantFrameShortDlgComponent_CallbackFunc_o *v161; // x22
  Il2CppObject *v162; // x23
  struct clsQuestCheck___c_StaticFields *v163; // x0
  int64_t v164; // x2
  int32_t v165; // w3
  System_String_o *v166; // x4
  BattleSetupInfo_o *v167; // x5
  FollowerInfo_o *v168; // x6
  PartyListViewItem_o *v169; // x7
  CommonUI_o *v170; // x0
  int32_t v171; // w1
  int32_t v172; // w2
  int32_t v173; // w3
  __int64 v174; // x2
  __int64 v175; // x3
  CommonUI_o *v176; // x19
  int32_t v177; // w20
  int32_t svtEquipKeep; // w21
  Il2CppObject *v179; // x23
  struct clsQuestCheck___c_StaticFields *v180; // x0
  int64_t v181; // x2
  int32_t v182; // w3
  System_String_o *v183; // x4
  BattleSetupInfo_o *v184; // x5
  FollowerInfo_o *v185; // x6
  PartyListViewItem_o *v186; // x7
  int32_t Count; // w19
  __int64 v188; // x2
  __int64 v189; // x3
  CommonUI_o *v190; // x20
  BalanceConfig_c *v191; // x8
  Il2CppObject *v192; // x23
  struct clsQuestCheck___c_StaticFields *v193; // x0
  int64_t v194; // x2
  int32_t v195; // w3
  System_String_o *v196; // x4
  BattleSetupInfo_o *v197; // x5
  FollowerInfo_o *v198; // x6
  PartyListViewItem_o *v199; // x7
  bool v200; // w25
  int32_t v202; // w28
  Il2CppObject *Instance; // x19
  __int64 v204; // x1
  __int64 v205; // x2
  __int64 v206; // x3
  RecoverDlgComponent_CallbackFunc_o *v207; // x20
  CommonUI_o *v208; // x0
  int32_t v209; // w1
  RecoverDlgComponent_CallbackFunc_o *v210; // x2
  bool v211; // w3
  Il2CppObject *v212; // x19
  __int64 v213; // x1
  __int64 v214; // x2
  __int64 v215; // x3
  RecoverDlgComponent_CallbackFunc_o *v216; // x20
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x24
  Il2CppObject *v218; // x25
  Il2CppObject *v219; // x27
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v221; // x23
  System_String_o *v222; // x20
  __int64 v223; // x1
  int32_t v224; // w29
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v226; // x8
  int64_t v227; // x28
  int64_t v228; // x26
  int32_t qp; // w8
  struct System_Int32_array *nums; // x9
  System_String_o *v231; // x0
  System_String_o *v232; // x0
  System_String_o *v233; // x19
  System_String_o *v234; // x0
  System_String_o *v235; // x19
  __int64 v236; // x2
  __int64 v237; // x3
  CommonUI_o *v238; // x20
  clsQuestCheck___c_c *v239; // x8
  System_String_o *v240; // x21
  System_Action_o *_9__41_11; // x22
  Il2CppObject *v242; // x23
  int64_t v243; // x2
  int32_t v244; // w3
  System_String_o *v245; // x4
  BattleSetupInfo_o *v246; // x5
  FollowerInfo_o *v247; // x6
  PartyListViewItem_o *v248; // x7
  struct clsQuestCheck___c_StaticFields *v249; // x0
  PartyOrganizationUtility_o *p__9__41_11; // x0
  Il2CppObject *v251; // x19
  __int64 v252; // x1
  __int64 v253; // x2
  __int64 v254; // x3
  RecoverDlgComponent_CallbackFunc_o *v255; // x20
  QuestConsumeItemEntity_o *v256; // x24
  Il2CppObject *v257; // x25
  Il2CppObject *v258; // x27
  UserGameEntity_o *v259; // x0
  UserGameEntity_o *v260; // x23
  System_String_o *v261; // x20
  __int64 v262; // x1
  int32_t v263; // w29
  struct System_Int32_array *v264; // x8
  struct System_Int32_array *v265; // x8
  int64_t v266; // x28
  int64_t v267; // x26
  int32_t v268; // w8
  struct System_Int32_array *v269; // x9
  Il2CppObject *v270; // x0
  __int64 v271; // x1
  __int64 v272; // x2
  TerminalPramsManager_c *v273; // x0
  int v274; // w8
  TerminalPramsManager_c *v275; // x0
  __int64 v276; // x1
  __int64 v277; // x2
  int32_t VaildPayType; // w22
  TerminalPramsManager_c *v279; // x0
  MapControl_QuestInfo_o *v280; // x8
  QuestMessageMaster_o *v281; // x19
  int32_t v282; // w2
  System_String_o *ValidMessage; // x0
  System_String_o *v284; // x19
  __int64 v285; // x1
  Il2CppObject *v286; // x20
  System_String_o *v287; // x21
  __int64 v288; // x2
  __int64 v289; // x3
  System_String_o *v290; // x22
  clsQuestCheck___c_c *v291; // x8
  CommonConfirmDialog_ClickDelegate_o *_9__41_2; // x24
  System_String_o *v293; // x23
  Il2CppObject *v294; // x25
  struct clsQuestCheck___c_StaticFields *v295; // x0
  int64_t v296; // x2
  int32_t v297; // w3
  System_String_o *v298; // x4
  BattleSetupInfo_o *v299; // x5
  FollowerInfo_o *v300; // x6
  PartyListViewItem_o *v301; // x7
  System_String_o *v302; // x0
  System_String_o *v303; // x0
  System_String_o *v304; // x19
  System_String_o *v305; // x0
  __int64 v306; // x2
  __int64 v307; // x3
  clsQuestCheck___c_c *v308; // x8
  Il2CppObject *v309; // x23
  struct clsQuestCheck___c_StaticFields *v310; // x0
  int32_t v311; // [xsp+34h] [xbp-7Ch]
  int32_t v312; // [xsp+34h] [xbp-7Ch]
  char v313; // [xsp+38h] [xbp-78h]
  char v314; // [xsp+38h] [xbp-78h]
  int32_t key; // [xsp+3Ch] [xbp-74h]
  int32_t questId; // [xsp+44h] [xbp-6Ch]
  int32_t servantEquipSum[2]; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4B12D27 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, questInfo, srcEndTime);
    sub_1BCA7E0(&RecoverDlgComponent_CallbackFunc_TypeInfo, v9, v10);
    sub_1BCA7E0(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, v11, v12);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GachaMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMessageMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v23, v24);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, v25, v26);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v27, v28);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarMaster___, v29, v30);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v31, v32);
    sub_1BCA7E0(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v33, v34);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v35, v36);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v39, v40);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v43, v44);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v45, v46);
    sub_1BCA7E0(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_0__, v47, v48);
    sub_1BCA7E0(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_11__, v49, v50);
    sub_1BCA7E0(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_13__, v51, v52);
    sub_1BCA7E0(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_1__, v53, v54);
    sub_1BCA7E0(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_2__, v55, v56);
    sub_1BCA7E0(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_3__, v57, v58);
    sub_1BCA7E0(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_4__, v59, v60);
    sub_1BCA7E0(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_7__, v61, v62);
    sub_1BCA7E0(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__10__, v63, v64);
    sub_1BCA7E0(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__12__, v65, v66);
    sub_1BCA7E0(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__9__, v67, v68);
    sub_1BCA7E0(&clsQuestCheck___c__DisplayClass41_0_TypeInfo, v69, v70);
    sub_1BCA7E0(&clsQuestCheck___c_TypeInfo, v71, v72);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v73, v74);
    sub_1BCA7E0(&StringLiteral_11021/*"QUEST_MESSAGE_DLG_DECIDE"*/, v75, v76);
    sub_1BCA7E0(&StringLiteral_11020/*"QUEST_MESSAGE_DLG_CANCEL"*/, v77, v78);
    sub_1BCA7E0(&StringLiteral_11019/*"QUEST_ITEM_COST_OVER"*/, v79, v80);
    sub_1BCA7E0(&StringLiteral_11048/*"QUEST_TIME_OVER"*/, v81, v82);
    sub_1BCA7E0(&StringLiteral_12261/*"SHORT_DLG_TITLE"*/, v83, v84);
    sub_1BCA7E0(&StringLiteral_44/*"\n\n"*/, v85, v86);
    sub_1BCA7E0(&StringLiteral_2996/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, v87, v88);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v89, v90);
    sub_1BCA7E0(&StringLiteral_10962/*"QUEST_AP_MAX_OVER"*/, v91, v92);
    byte_4B12D27 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  v93 = sub_1BCAA2C(clsQuestCheck___c__DisplayClass41_0_TypeInfo, questInfo, srcEndTime, *(_QWORD *)&boostId);
  System_Object___ctor((Il2CppObject *)v93, 0LL);
  if ( !v93 )
    goto LABEL_246;
  *(_QWORD *)(v93 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v93 + 16), (int64_t)this, v96, v97, v98, v99, v100, v101);
  *(_QWORD *)(v93 + 24) = questInfo;
  v102 = (MapControl_QuestInfo_o **)(v93 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v93 + 24), (int64_t)questInfo, v103, v104, v105, v106, v107, v108);
  SpotID = *(_QWORD *)(v93 + 24);
  *(_QWORD *)(v93 + 32) = srcEndTime;
  *(_DWORD *)(v93 + 40) = boostId;
  if ( !SpotID )
    goto LABEL_246;
  v109 = *(_DWORD *)(SpotID + 64);
  SpotID = MapControl_QuestInfo__GetSpotID((MapControl_QuestInfo_o *)SpotID, 0LL);
  v110 = *v102;
  if ( !*v102 )
    goto LABEL_246;
  v111 = v110->fields.questId;
  questPhase = v110->fields.questPhase;
  v113 = SpotID;
  SpotID = MapControl_QuestInfo__GetActConsumeCost(*v102, 0LL);
  if ( !*v102 )
    goto LABEL_246;
  isNotItemConsume = (*v102)->fields.isNotItemConsume;
  v115 = SpotID;
  SpotID = (int64_t)MapControl_QuestInfo__GetMine(*v102, 0LL);
  if ( !SpotID )
    goto LABEL_246;
  v116 = *(_DWORD *)(SpotID + 80);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v95);
  IsQuestReleaseAll = TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
  if ( v116 != 1 && !IsQuestReleaseAll )
  {
    SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SpotID )
      goto LABEL_246;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)SpotID,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v118);
    SpotID = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      goto LABEL_246;
    Entity = UserQuestMaster__GetEntity((UserQuestMaster_o *)MasterData_object, SpotID, v111, 0LL);
    if ( !Entity || !UserQuestEntity__IsNotExpired(Entity, 0LL) )
    {
      v122 = *(_QWORD *)(v93 + 32);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v121);
      Time = NetworkManager__getTime(0LL);
      if ( v122 >= 1 && v122 - Time <= 0 )
      {
        v125 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v124);
        v126 = LocalizationManager__Get((System_String_o *)StringLiteral_11048/*"QUEST_TIME_OVER"*/, 0LL);
        SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v129 = (CommonUI_o *)SpotID;
        v130 = clsQuestCheck___c_TypeInfo;
        if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo, v95);
          v130 = clsQuestCheck___c_TypeInfo;
        }
        _9__41_3 = v130->static_fields->__9__41_3;
        if ( _9__41_3 )
          goto LABEL_44;
        if ( !v130->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v130, v95);
          v130 = clsQuestCheck___c_TypeInfo;
        }
        v132 = (Il2CppObject *)v130->static_fields->__9;
        _9__41_3 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v95, v127, v128);
        System_Action___ctor(_9__41_3, v132, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_3__, 0LL);
        v139 = (int64_t)_9__41_3;
        static_fields = clsQuestCheck___c_TypeInfo->static_fields;
        static_fields->__9__41_3 = _9__41_3;
        p__9__41_3 = (PartyOrganizationUtility_o *)&static_fields->__9__41_3;
LABEL_43:
        sub_1BCA784(p__9__41_3, v139, v133, v134, v135, v136, v137, v138);
LABEL_44:
        if ( !v129 )
          goto LABEL_246;
        CommonUI__OpenNotificationDialog(v129, v125, v126, _9__41_3, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
        goto LABEL_96;
      }
    }
  }
  SpotID = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !*v102 )
    goto LABEL_246;
  v142 = (UserGameEntity_o *)SpotID;
  SpotID = (int64_t)MapControl_QuestInfo__GetMine(*v102, 0LL);
  if ( !SpotID )
    goto LABEL_246;
  v143 = (QuestEntity_o *)SpotID;
  SpotID = QuestEntity__GetConsumeType((QuestEntity_o *)SpotID, 0LL);
  if ( (_DWORD)SpotID == 1 )
  {
    if ( !v142 )
      goto LABEL_246;
    if ( v115 > v142->fields.actMax )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v95);
      v125 = LocalizationManager__Get((System_String_o *)StringLiteral_12261/*"SHORT_DLG_TITLE"*/, 0LL);
      v126 = LocalizationManager__Get((System_String_o *)StringLiteral_10962/*"QUEST_AP_MAX_OVER"*/, 0LL);
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v129 = (CommonUI_o *)SpotID;
      v147 = clsQuestCheck___c_TypeInfo;
      if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo, v95);
        v147 = clsQuestCheck___c_TypeInfo;
      }
      _9__41_3 = v147->static_fields->__9__41_4;
      if ( _9__41_3 )
        goto LABEL_44;
      if ( !v147->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v147, v95);
        v147 = clsQuestCheck___c_TypeInfo;
      }
      v148 = (Il2CppObject *)v147->static_fields->__9;
      _9__41_3 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v95, v145, v146);
      System_Action___ctor(_9__41_3, v148, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_4__, 0LL);
      v139 = (int64_t)_9__41_3;
      v149 = clsQuestCheck___c_TypeInfo->static_fields;
      v149->__9__41_4 = _9__41_3;
      p__9__41_3 = (PartyOrganizationUtility_o *)&v149->__9__41_4;
      goto LABEL_43;
    }
  }
  key = v109;
  questId = v111;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v95);
  if ( !byte_4B12DC7 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v95, v144);
    byte_4B12DC7 = 1;
  }
  v150 = TerminalPramsManager_TypeInfo;
  v151 = questPhase;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v95);
    v150 = TerminalPramsManager_TypeInfo;
  }
  v150->static_fields->_QuestId_k__BackingField = questId;
  v152 = *(_QWORD *)(v93 + 32);
  if ( !byte_4B12DC8 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v95, v144);
    v150 = TerminalPramsManager_TypeInfo;
    byte_4B12DC8 = 1;
  }
  if ( !v150->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v150, v95);
    v150 = TerminalPramsManager_TypeInfo;
  }
  v153 = v150->static_fields;
  v153->_EndTime_k__BackingField = v152;
  v153->lastPlayQuestConsumeAp = v115;
  TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(0LL);
  SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_246;
  SpotID = (int64_t)DataManager__GetMasterData_object_(
                      (DataManager_o *)SpotID,
                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SpotID )
    goto LABEL_246;
  v154 = (UserServantMaster_o *)SpotID;
  UserServantMaster__getCount((UserServantMaster_o *)SpotID, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_246;
  v155 = DataManager__GetMasterData_object_(
           (DataManager_o *)SpotID,
           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v154, 1, 0LL) )
  {
    SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v142 )
      goto LABEL_246;
    v158 = (CommonUI_o *)SpotID;
    v159 = servantEquipSum[1];
    svtKeep = v142->fields.svtKeep;
    SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo, v95);
      SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    }
    v161 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(SpotID + 184) + 40LL);
    if ( !v161 )
    {
      if ( !*(_DWORD *)(SpotID + 224) )
      {
        j_il2cpp_runtime_class_init_0(SpotID, v95);
        SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
      }
      v162 = **(Il2CppObject ***)(SpotID + 184);
      v161 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                               ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                               v95,
                                                               v156,
                                                               v157);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v161,
        v162,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__41_0__,
        0LL);
      v163 = clsQuestCheck___c_TypeInfo->static_fields;
      v163->__9__41_0 = v161;
      sub_1BCA784((PartyOrganizationUtility_o *)&v163->__9__41_0, (int64_t)v161, v164, v165, v166, v167, v168, v169);
    }
    if ( !v158 )
      goto LABEL_246;
    v170 = v158;
    v171 = v159;
    v172 = svtKeep;
    v173 = 0;
    goto LABEL_95;
  }
  SpotID = UserServantMaster__CheckEquipAdd(v154, 1, 1, 0LL);
  if ( (SpotID & 1) != 0 )
  {
    SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v142 )
      goto LABEL_246;
    v176 = (CommonUI_o *)SpotID;
    v177 = servantEquipSum[0];
    svtEquipKeep = v142->fields.svtEquipKeep;
    SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo, v95);
      SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    }
    v161 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(SpotID + 184) + 48LL);
    if ( !v161 )
    {
      if ( !*(_DWORD *)(SpotID + 224) )
      {
        j_il2cpp_runtime_class_init_0(SpotID, v95);
        SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
      }
      v179 = **(Il2CppObject ***)(SpotID + 184);
      v161 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                               ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                               v95,
                                                               v174,
                                                               v175);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v161,
        v179,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__41_1__,
        0LL);
      v180 = clsQuestCheck___c_TypeInfo->static_fields;
      v180->__9__41_1 = v161;
      sub_1BCA784((PartyOrganizationUtility_o *)&v180->__9__41_1, (int64_t)v161, v181, v182, v183, v184, v185, v186);
    }
    if ( !v176 )
      goto LABEL_246;
    v173 = 1;
    v170 = v176;
    v171 = v177;
LABEL_94:
    v172 = svtEquipKeep;
LABEL_95:
    CommonUI__OpenSvtFrameShortDlg(v170, v171, v172, v173, 1, v161, 0, 0LL);
LABEL_96:
    SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( SpotID )
    {
      ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)SpotID, 0LL);
      return 0;
    }
    goto LABEL_246;
  }
  if ( !v155 )
    goto LABEL_246;
  if ( UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)v155, 0, 0LL) )
  {
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)v155, 0LL);
    SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v142 )
      goto LABEL_246;
    v190 = (CommonUI_o *)SpotID;
    if ( !byte_4B112D7 )
    {
      sub_1BCA7E0(&BalanceConfig_TypeInfo, v95, v188);
      byte_4B112D7 = 1;
    }
    v191 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v95);
      v191 = BalanceConfig_TypeInfo;
    }
    SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    svtEquipKeep = v191->static_fields->CommandCodeFrameMax;
    if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo, v95);
      SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    }
    v161 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(SpotID + 184) + 56LL);
    if ( !v161 )
    {
      if ( !*(_DWORD *)(SpotID + 224) )
      {
        j_il2cpp_runtime_class_init_0(SpotID, v95);
        SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
      }
      v192 = **(Il2CppObject ***)(SpotID + 184);
      v161 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                               ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                               v95,
                                                               v188,
                                                               v189);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v161,
        v192,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__41_7__,
        0LL);
      v193 = clsQuestCheck___c_TypeInfo->static_fields;
      v193->__9__41_7 = v161;
      sub_1BCA784((PartyOrganizationUtility_o *)&v193->__9__41_7, (int64_t)v161, v194, v195, v196, v197, v198, v199);
    }
    if ( !v190 )
      goto LABEL_246;
    v173 = 2;
    v170 = v190;
    v171 = Count;
    goto LABEL_94;
  }
  SpotID = QuestEntity__GetConsumeType(v143, 0LL);
  v202 = v151;
  switch ( (int)SpotID )
  {
    case 1:
      if ( !v142 )
        goto LABEL_246;
      if ( v115 <= UserGameEntity__getAct(v142, 0LL) )
        goto LABEL_176;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v207 = (RecoverDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                     RecoverDlgComponent_CallbackFunc_TypeInfo,
                                                     v204,
                                                     v205,
                                                     v206);
      RecoverDlgComponent_CallbackFunc___ctor(
        v207,
        (Il2CppObject *)v93,
        Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__9__,
        0LL);
      if ( !Instance )
        goto LABEL_246;
      v208 = (CommonUI_o *)Instance;
      v209 = v115;
      v210 = v207;
      v211 = 0;
      goto LABEL_148;
    case 2:
      if ( !v142 )
        goto LABEL_246;
      if ( v115 <= UserGameEntity__getRp(v142, 0LL) )
        goto LABEL_176;
      v212 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v216 = (RecoverDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                     RecoverDlgComponent_CallbackFunc_TypeInfo,
                                                     v213,
                                                     v214,
                                                     v215);
      RecoverDlgComponent_CallbackFunc___ctor(
        v216,
        (Il2CppObject *)v93,
        Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__10__,
        0LL);
      if ( !v212 )
        goto LABEL_246;
      CommonUI__OpenRpRecoverItemListDialog((CommonUI_o *)v212, v115, v216, 0, 0LL);
      return 0;
    case 3:
      ItemConsumeEntity = QuestEntity__getItemConsumeEntity(v143, isNotItemConsume, 0LL);
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_246;
      v218 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_246;
      v219 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      if ( !ItemConsumeEntity )
        goto LABEL_176;
      v221 = SelfUserGame;
      v222 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL) )
        goto LABEL_176;
      v224 = 0;
      v311 = v202;
      v313 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v223);
        SpotID = NetworkManager__get_UserId(0LL);
        itemIds = ItemConsumeEntity->fields.itemIds;
        if ( !itemIds )
          goto LABEL_246;
        if ( v224 >= itemIds->max_length )
          goto LABEL_247;
        if ( !v218 )
          goto LABEL_246;
        SpotID = (int64_t)UserItemMaster__GetEntity((UserItemMaster_o *)v218, SpotID, itemIds->m_Items[v224 + 1], 0LL);
        v226 = ItemConsumeEntity->fields.itemIds;
        if ( !v226 )
          goto LABEL_246;
        if ( v224 >= v226->max_length )
          goto LABEL_247;
        if ( !v219 )
          goto LABEL_246;
        v227 = SpotID;
        SpotID = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)v219,
                            v226->m_Items[v224 + 1],
                            (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !SpotID )
          goto LABEL_246;
        v228 = SpotID;
        if ( *(_DWORD *)(SpotID + 48) == 1 )
        {
          if ( !v221 )
            goto LABEL_246;
          qp = v221->fields.qp;
        }
        else if ( v227 && (SpotID = ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0LL), (SpotID & 1) != 0) )
        {
          qp = *(_DWORD *)(v227 + 28);
        }
        else
        {
          qp = 0;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_246;
        if ( v224 >= nums->max_length )
          goto LABEL_247;
        if ( nums->m_Items[v224 + 1] > qp )
        {
          v222 = System_String__Concat_62412480(
                   v222,
                   (System_String_o *)StringLiteral_43/*"\n"*/,
                   *(System_String_o **)(v228 + 24),
                   0LL);
          v313 = 1;
        }
        ++v224;
      }
      while ( QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, v224, 0LL) );
      v202 = v311;
      if ( (v313 & 1) == 0 )
        goto LABEL_176;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v223);
      v231 = LocalizationManager__Get((System_String_o *)StringLiteral_11019/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v232 = System_String__Format(v231, (Il2CppObject *)v222, 0LL);
      v233 = System_String__Concat_62401220(v232, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
      v234 = LocalizationManager__Get((System_String_o *)StringLiteral_2996/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v235 = System_String__Concat_62401220(v233, v234, 0LL);
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v238 = (CommonUI_o *)SpotID;
      v239 = clsQuestCheck___c_TypeInfo;
      if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo, v95);
        v239 = clsQuestCheck___c_TypeInfo;
      }
      v240 = (System_String_o *)StringLiteral_1/*""*/;
      _9__41_11 = v239->static_fields->__9__41_11;
      if ( _9__41_11 )
        goto LABEL_244;
      if ( !v239->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v239, v95);
        v239 = clsQuestCheck___c_TypeInfo;
      }
      v242 = (Il2CppObject *)v239->static_fields->__9;
      _9__41_11 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v95, v236, v237);
      System_Action___ctor(_9__41_11, v242, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_11__, 0LL);
      v249 = clsQuestCheck___c_TypeInfo->static_fields;
      v249->__9__41_11 = _9__41_11;
      p__9__41_11 = (PartyOrganizationUtility_o *)&v249->__9__41_11;
      goto LABEL_243;
    case 4:
      if ( !v142 )
        goto LABEL_246;
      if ( v115 > UserGameEntity__getAct(v142, 0LL) )
      {
        v251 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v255 = (RecoverDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                       RecoverDlgComponent_CallbackFunc_TypeInfo,
                                                       v252,
                                                       v253,
                                                       v254);
        RecoverDlgComponent_CallbackFunc___ctor(
          v255,
          (Il2CppObject *)v93,
          Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__12__,
          0LL);
        if ( v251 )
        {
          v211 = 1;
          v208 = (CommonUI_o *)v251;
          v209 = v115;
          v210 = v255;
LABEL_148:
          CommonUI__OpenApRecoverItemListDialog(v208, v209, v210, v211, 0LL);
          return 0;
        }
LABEL_246:
        sub_1BCAA3C(SpotID, v95);
      }
      v256 = QuestEntity__getItemConsumeEntity(v143, isNotItemConsume, 0LL);
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_246;
      v257 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_246;
      v258 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
      v259 = UserGameMaster__getSelfUserGame(0LL);
      if ( v256 )
      {
        v260 = v259;
        v261 = (System_String_o *)StringLiteral_1/*""*/;
        if ( QuestConsumeItemEntity__IsAvailableAt(v256, 0, 0LL) )
        {
          v263 = 0;
          v312 = v202;
          v314 = 0;
          do
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v262);
            SpotID = NetworkManager__get_UserId(0LL);
            v264 = v256->fields.itemIds;
            if ( !v264 )
              goto LABEL_246;
            if ( v263 >= v264->max_length )
              goto LABEL_247;
            if ( !v257 )
              goto LABEL_246;
            SpotID = (int64_t)UserItemMaster__GetEntity((UserItemMaster_o *)v257, SpotID, v264->m_Items[v263 + 1], 0LL);
            v265 = v256->fields.itemIds;
            if ( !v265 )
              goto LABEL_246;
            if ( v263 >= v265->max_length )
              goto LABEL_247;
            if ( !v258 )
              goto LABEL_246;
            v266 = SpotID;
            SpotID = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v258,
                                v265->m_Items[v263 + 1],
                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( !SpotID )
              goto LABEL_246;
            v267 = SpotID;
            if ( *(_DWORD *)(SpotID + 48) == 1 )
            {
              if ( !v260 )
                goto LABEL_246;
              v268 = v260->fields.qp;
            }
            else if ( v266 && (SpotID = ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0LL), (SpotID & 1) != 0) )
            {
              v268 = *(_DWORD *)(v266 + 28);
            }
            else
            {
              v268 = 0;
            }
            v269 = v256->fields.nums;
            if ( !v269 )
              goto LABEL_246;
            if ( v263 >= v269->max_length )
LABEL_247:
              sub_1BCAA44(SpotID, v95);
            if ( v269->m_Items[v263 + 1] > v268 )
            {
              v261 = System_String__Concat_62412480(
                       v261,
                       (System_String_o *)StringLiteral_43/*"\n"*/,
                       *(System_String_o **)(v267 + 24),
                       0LL);
              v314 = 1;
            }
            ++v263;
          }
          while ( QuestConsumeItemEntity__IsAvailableAt(v256, v263, 0LL) );
          v202 = v312;
          if ( (v314 & 1) != 0 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v262);
            v302 = LocalizationManager__Get((System_String_o *)StringLiteral_11019/*"QUEST_ITEM_COST_OVER"*/, 0LL);
            v303 = System_String__Format(v302, (Il2CppObject *)v261, 0LL);
            v304 = System_String__Concat_62401220(v303, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
            v305 = LocalizationManager__Get((System_String_o *)StringLiteral_2996/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
            v235 = System_String__Concat_62401220(v304, v305, 0LL);
            SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v238 = (CommonUI_o *)SpotID;
            v308 = clsQuestCheck___c_TypeInfo;
            if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo, v95);
              v308 = clsQuestCheck___c_TypeInfo;
            }
            v240 = (System_String_o *)StringLiteral_1/*""*/;
            _9__41_11 = v308->static_fields->__9__41_13;
            if ( !_9__41_11 )
            {
              if ( !v308->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v308, v95);
                v308 = clsQuestCheck___c_TypeInfo;
              }
              v309 = (Il2CppObject *)v308->static_fields->__9;
              _9__41_11 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v95, v306, v307);
              System_Action___ctor(_9__41_11, v309, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_13__, 0LL);
              v310 = clsQuestCheck___c_TypeInfo->static_fields;
              v310->__9__41_13 = _9__41_11;
              p__9__41_11 = (PartyOrganizationUtility_o *)&v310->__9__41_13;
LABEL_243:
              sub_1BCA784(p__9__41_11, (int64_t)_9__41_11, v243, v244, v245, v246, v247, v248);
            }
LABEL_244:
            if ( !v238 )
              goto LABEL_246;
            CommonUI__OpenNotificationDialog(v238, v240, v235, _9__41_11, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
            goto LABEL_96;
          }
        }
      }
LABEL_176:
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_246;
      SpotID = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)SpotID,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !SpotID )
        goto LABEL_246;
      v270 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)SpotID,
               key,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( v270 && WarEntity__IsFolder((WarEntity_o *)v270, 0LL) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v271);
        if ( !byte_4B12DC9 )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v271, v272);
          byte_4B12DC9 = 1;
        }
        v273 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v271);
          v273 = TerminalPramsManager_TypeInfo;
        }
        v274 = 3;
      }
      else
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v271);
        if ( !byte_4B12DC9 )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v271, v272);
          byte_4B12DC9 = 1;
        }
        v273 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v271);
          v273 = TerminalPramsManager_TypeInfo;
        }
        v274 = 2;
      }
      v273->static_fields->_DispState_k__BackingField = v274;
      if ( !v273->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v273, v271);
      if ( !byte_4B12DCA )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v271, v272);
        byte_4B12DCA = 1;
      }
      v275 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v271);
        v275 = TerminalPramsManager_TypeInfo;
      }
      v275->static_fields->_IsDoneShortcut_k__BackingField = 0;
      if ( !byte_4B12DCB )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v271, v272);
        v275 = TerminalPramsManager_TypeInfo;
        byte_4B12DCB = 1;
      }
      if ( !v275->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v275, v271);
        v275 = TerminalPramsManager_TypeInfo;
      }
      v275->static_fields->_PhaseCnt_k__BackingField = v202;
      if ( !byte_4B12DCC )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v271, v272);
        v275 = TerminalPramsManager_TypeInfo;
        byte_4B12DCC = 1;
      }
      if ( !v275->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v275, v271);
        v275 = TerminalPramsManager_TypeInfo;
      }
      v275->static_fields->_SpotId_k__BackingField = v113;
      if ( !byte_4B12DCD )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v271, v272);
        v275 = TerminalPramsManager_TypeInfo;
        byte_4B12DCD = 1;
      }
      if ( !v275->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v275, v271);
        v275 = TerminalPramsManager_TypeInfo;
      }
      v275->static_fields->_WarId_k__BackingField = key;
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_246;
      SpotID = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)SpotID,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GachaMaster___);
      if ( !SpotID )
        goto LABEL_246;
      VaildPayType = GachaMaster__getVaildPayType((GachaMaster_o *)SpotID, 0LL);
      if ( !byte_4B1299C )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v276, v277);
        byte_4B1299C = 1;
      }
      v279 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v276);
        v279 = TerminalPramsManager_TypeInfo;
      }
      v279->static_fields->_SummonType_k__BackingField = VaildPayType;
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_246;
      SpotID = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)SpotID,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMessageMaster___);
      v280 = *v102;
      if ( !*v102 )
        goto LABEL_246;
      v281 = (QuestMessageMaster_o *)SpotID;
      SpotID = MapControl_QuestInfo__GetPhaseMax(v280, 0LL);
      if ( !v281 )
        goto LABEL_246;
      if ( v202 + 1 >= (int)SpotID )
        v282 = SpotID;
      else
        v282 = v202 + 1;
      v200 = 1;
      ValidMessage = QuestMessageMaster__GetValidMessage(v281, questId, v282, 1, 0LL);
      if ( ValidMessage )
      {
        v284 = ValidMessage;
        v286 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v285);
        v287 = LocalizationManager__Get((System_String_o *)StringLiteral_11021/*"QUEST_MESSAGE_DLG_DECIDE"*/, 0LL);
        SpotID = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11020/*"QUEST_MESSAGE_DLG_CANCEL"*/, 0LL);
        v290 = (System_String_o *)SpotID;
        v291 = clsQuestCheck___c_TypeInfo;
        if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo, v95);
          v291 = clsQuestCheck___c_TypeInfo;
        }
        _9__41_2 = v291->static_fields->__9__41_2;
        v293 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !_9__41_2 )
        {
          if ( !v291->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v291, v95);
            v291 = clsQuestCheck___c_TypeInfo;
          }
          v294 = (Il2CppObject *)v291->static_fields->__9;
          _9__41_2 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                              CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                              v95,
                                                              v288,
                                                              v289);
          CommonConfirmDialog_ClickDelegate___ctor(
            _9__41_2,
            v294,
            Method_clsQuestCheck___c__CheckQuestPlayable_b__41_2__,
            0LL);
          v295 = clsQuestCheck___c_TypeInfo->static_fields;
          v295->__9__41_2 = _9__41_2;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v295->__9__41_2,
            (int64_t)_9__41_2,
            v296,
            v297,
            v298,
            v299,
            v300,
            v301);
        }
        if ( v286 )
        {
          v200 = 1;
          CommonUI__OpenConfirmDialog_30766228((CommonUI_o *)v286, v293, v284, v287, v290, _9__41_2, 0, 1, 0, 0LL);
          return v200;
        }
        goto LABEL_246;
      }
      return v200;
    default:
      goto LABEL_176;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__CheckQuestPlayableNow(clsQuestCheck_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Master_object; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *UserId; // x0
  __int64 v17; // x1
  bool v18; // w0
  const MethodInfo *v19; // x2
  bool IsOpenByTime; // w8
  QuestEntity_o *v22; // [xsp+0h] [xbp-40h] BYREF
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B12D0A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestMaster___, *(_QWORD *)&questId, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserQuestMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    byte_4B12D0A = 1;
  }
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, method) )
    return 0;
  v22 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  UserId = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_22;
  if ( UserQuestMaster__TryGetEntity((UserQuestMaster_o *)Master_object, &entity, (int64_t)UserId, questId, 0LL) )
  {
    UserId = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_22;
    if ( UserQuestEntity__IsNotExpired(entity, 0LL) )
      return 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
  UserId = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !UserId )
LABEL_22:
    sub_1BCAA3C(UserId, v17);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          UserId,
          (Il2CppObject **)&v22,
          questId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  UserId = (DataMasterBase_TMaster__TEntity__PKType__o *)v22;
  if ( !v22 )
    goto LABEL_22;
  IsOpenByTime = QuestEntity__IsOpenByTime(v22, 0, 0LL);
  v18 = 0;
  if ( IsOpenByTime )
    return clsQuestCheck__IsReleasedQuest(this, questId, v19);
  return v18;
}


void __fastcall clsQuestCheck__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  clsQuestCheck_c *v5; // x0
  System_String_o *KEY_QUEST_START_EFFECT; // x19

  if ( (byte_4B12D07 & 1) == 0 )
  {
    sub_1BCA7E0(&EncryptedPlayerPrefs_TypeInfo, v1, v2);
    sub_1BCA7E0(&clsQuestCheck_TypeInfo, v3, v4);
    byte_4B12D07 = 1;
  }
  v5 = clsQuestCheck_TypeInfo;
  if ( !clsQuestCheck_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo, v1);
    v5 = clsQuestCheck_TypeInfo;
  }
  KEY_QUEST_START_EFFECT = v5->static_fields->KEY_QUEST_START_EFFECT;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v1);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  bool v10; // w8
  int32_t result; // w0
  __int64 v12; // x1
  __int64 v13; // x2
  TerminalPramsManager_c *v14; // x0

  if ( (byte_4B12D1A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, is_quest_after_action, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v6, v7);
    byte_4B12D1A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v10 = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0LL);
  result = -1;
  if ( !v10 || !is_quest_after_action )
    return result;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
LABEL_17:
    sub_1BCAA3C(Instance, v9);
  if ( !QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0LL) )
    return -1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v12, v13);
    byte_4B12DC3 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
    v14 = TerminalPramsManager_TypeInfo;
  }
  return v14->static_fields->_QuestId_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall clsQuestCheck__GetEventQuestIdListPlayable(
        clsQuestCheck_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_int__o *v18; // x20
  __int64 v19; // x1
  System_Int32_array *Master_object; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  __int64 v23; // x8
  System_Int32_array *v24; // x21
  unsigned __int64 v25; // x23
  int32_t v26; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10

  if ( (byte_4B12D23 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestGroupMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&int___TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v16, v17);
    byte_4B12D23 = 1;
  }
  if ( eventId <= 0 )
    return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  v18 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&eventId,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Master_object )
    goto LABEL_21;
  Master_object = QuestGroupMaster__GetQuestIdListByEventId((QuestGroupMaster_o *)Master_object, eventId, 0LL);
  if ( !Master_object )
    goto LABEL_21;
  v23 = *(_QWORD *)&Master_object->max_length;
  v24 = Master_object;
  if ( (int)v23 >= 1 )
  {
    v25 = 0LL;
    do
    {
      if ( v25 >= (unsigned int)v23 )
        sub_1BCAA44(Master_object, v21);
      v26 = v24->m_Items[v25 + 1];
      Master_object = (System_Int32_array *)clsQuestCheck__CheckQuestPlayableNow(this, v26, v22);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v18 )
          goto LABEL_21;
        items = v18->fields._items;
        v28 = Method_System_Collections_Generic_List_int__Add__;
        ++v18->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v18,
            v26,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v18->fields._size = size + 1;
          items->m_Items[size + 1] = v26;
        }
      }
      LODWORD(v23) = v24->max_length;
    }
    while ( (__int64)++v25 < (int)v23 );
  }
  if ( !v18 )
LABEL_21:
    sub_1BCAA3C(Master_object, v21);
  return System_Collections_Generic_List_int___ToArray(
           v18,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall clsQuestCheck__GetNewPlayableEventQuestId(
        clsQuestCheck_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  TerminalPramsManager_c *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  TerminalPramsManager_c *v22; // x0
  System_String_o *ClearEventQuestIds_k__BackingField; // x0
  System_String_array *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Converter_object__int__o *v28; // x22
  const MethodInfo *v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Int32_array *v45; // x19
  PartyOrganizationUtility_c *v46; // x20
  TerminalPramsManager_c *v47; // x0
  PartyOrganizationUtility_o *v48; // x0
  PartyOrganizationUtility_c *v50; // x19
  TerminalPramsManager_c *v51; // x0
  PartyOrganizationUtility_o *p_ClearEventQuestIds_k__BackingField; // x0

  if ( (byte_4B12D22 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_ConvertAll_string__int___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&System_Converter_string__int__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Except_int___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v9, v10);
    sub_1BCA7E0(&int___TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Int32_Parse__, v13, v14);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v17, v18);
    byte_4B12D22 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&eventId);
  if ( !byte_4B12DC5 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, *(_QWORD *)&eventId, method);
    byte_4B12DC5 = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&eventId);
    v19 = TerminalPramsManager_TypeInfo;
  }
  if ( System_String__IsNullOrEmpty(v19->static_fields->_ClearEventQuestIds_k__BackingField, 0LL) )
    return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20);
  if ( !byte_4B12DC5 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v20, v21);
    byte_4B12DC5 = 1;
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20);
    v22 = TerminalPramsManager_TypeInfo;
  }
  ClearEventQuestIds_k__BackingField = v22->static_fields->_ClearEventQuestIds_k__BackingField;
  if ( !ClearEventQuestIds_k__BackingField
    || (v24 = System_String__Split(ClearEventQuestIds_k__BackingField, 0x2Cu, 0, 0LL),
        v28 = (System_Converter_object__int__o *)sub_1BCAA2C(System_Converter_string__int__TypeInfo, v25, v26, v27),
        System_Converter_object__int____ctor(v28, 0LL, Method_System_Int32_Parse__, 0LL),
        (ClearEventQuestIds_k__BackingField = (System_String_o *)System_Array__ConvertAll_object__int_(
                                                                   (System_Object_array *)v24,
                                                                   (System_Converter_TInput__TOutput__o *)v28,
                                                                   (const MethodInfo_300B3D8 *)Method_System_Array_ConvertAll_string__int___)) == 0LL) )
  {
    sub_1BCAA3C(ClearEventQuestIds_k__BackingField, v20);
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)ClearEventQuestIds_k__BackingField;
  if ( !ClearEventQuestIds_k__BackingField[1].klass )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20);
    v50 = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
    if ( !byte_4B12DC4 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v20, v29);
      byte_4B12DC4 = 1;
    }
    v51 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20);
      v51 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (PartyOrganizationUtility_o *)&v51->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = v50;
    sub_1BCA784(p_ClearEventQuestIds_k__BackingField, (int64_t)v50, (int64_t)v29, v30, v31, v32, v33, v34);
    TerminalPramsManager__ClearEventQuestIds_SaveData(0LL);
    return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)clsQuestCheck__GetEventQuestIdListPlayable(
                                                               this,
                                                               eventId,
                                                               v29);
  v37 = System_Linq_Enumerable__Except_int_(
          v36,
          v35,
          (const MethodInfo_2F31CA8 *)Method_System_Linq_Enumerable_Except_int___);
  v45 = System_Linq_Enumerable__ToArray_int_(
          v37,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v38);
  v46 = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
  if ( !byte_4B12DC4 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v38, v39);
    byte_4B12DC4 = 1;
  }
  v47 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v38);
    v47 = TerminalPramsManager_TypeInfo;
  }
  v48 = (PartyOrganizationUtility_o *)&v47->static_fields->_ClearEventQuestIds_k__BackingField;
  v48->klass = v46;
  sub_1BCA784(v48, (int64_t)v46, v39, v40, v41, v42, v43, v44);
  TerminalPramsManager__ClearEventQuestIds_SaveData(0LL);
  return v45;
}


System_Collections_Generic_List_QuestEntity__o *__fastcall clsQuestCheck__GetQuestEntityByQuestId(
        clsQuestCheck_o *this,
        System_Collections_Generic_List_int__o *qids,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *v23; // x19
  Il2CppObject *Instance; // x0
  __int64 v25; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v26; // x21
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppObject *Entity; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x1
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  System_Collections_Generic_List_Enumerator_int__o v42; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v43; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B12D20 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, qids, method);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestEntity__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestEntity__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    byte_4B12D20 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestEntity__TypeInfo,
                                                       qids,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___),
        !qids) )
  {
    sub_1BCAA3C(Instance, v25);
  }
  v26 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    qids,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v43 = v42;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v43,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v27 )
      break;
    if ( !v26 )
      sub_1BCAA3C(v27, v28);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v26,
               v43.fields._current,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    v36 = (int64_t)Entity;
    if ( !v23 )
      sub_1BCAA3C(Entity, Entity);
    items = v23->fields._items;
    v38 = Method_System_Collections_Generic_List_QuestEntity__Add__;
    ++v23->fields._version;
    if ( !items )
      sub_1BCAA3C(Entity, Entity);
    size = v23->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v23,
        Entity,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    }
    else
    {
      v40 = &items->obj.klass + size;
      v23->fields._size = size + 1;
      v40[4] = (Il2CppClass *)v36;
      sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 4), v36, v30, v31, v32, v33, v34, v35);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v43,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return (System_Collections_Generic_List_QuestEntity__o *)v23;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Generic_List_int__o *v37; // x19
  DataManager_o *Instance; // x0
  __int64 v39; // x1
  QuestReleaseEntity_array *ListByType; // x24
  __int64 v41; // x2
  __int64 v42; // x3
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x25
  unsigned int v45; // w28
  QuestReleaseEntity_o *v46; // x8
  int32_t questId; // w26
  const MethodInfo *v48; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v52; // x23
  const MethodInfo *v53; // x4
  int32_t v54; // w20
  int v55; // w21
  System_Collections_Generic_List_Enumerator_int__o v57; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v58; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B12D1F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id, *(_QWORD *)&oldFriendShipRank);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__RemoveAt__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v31, v32);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36);
    byte_4B12D1F = 1;
  }
  memset(&v58, 0, sizeof(v58));
  v37 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&svt_id,
                                                    *(_QWORD *)&oldFriendShipRank,
                                                    *(_QWORD *)&type_flag);
  System_Collections_Generic_List_int____ctor(
    v37,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_32;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 9, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_32;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v45 = 0;
    while ( 1 )
    {
      if ( v45 >= max_length )
        sub_1BCAA44(Instance, v39);
      v46 = ListByType->m_Items[v45];
      if ( !v46 )
        break;
      if ( v46->fields.targetId == svt_id )
      {
        if ( !v44 )
          break;
        questId = v46->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v44,
                                      questId,
                                      (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, questId, oldFriendShipRank, 9, v48);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v37 )
              break;
            items = v37->fields._items;
            v50 = Method_System_Collections_Generic_List_int__Add__;
            ++v37->fields._version;
            if ( !items )
              break;
            size = v37->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v37,
                questId,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
            }
            else
            {
              v37->fields._size = size + 1;
              items->m_Items[size + 1] = questId;
            }
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v45 >= max_length )
        goto LABEL_22;
    }
LABEL_32:
    sub_1BCAA3C(Instance, v39);
  }
LABEL_22:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v52 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v39,
                                                      v41,
                                                      v42);
    System_Collections_Generic_List_int____ctor_56116492(
      v52,
      (System_Collections_Generic_IEnumerable_T__o *)v37,
      (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
    Instance = (DataManager_o *)clsQuestCheck__GetReleaseQuestIdByServantFriendShip(this, svt_id, -1, type_flag, v53);
    if ( !Instance )
      goto LABEL_32;
    v37 = (System_Collections_Generic_List_int__o *)Instance;
    v54 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v54 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_int___get_Item(
                                      v37,
                                      v54,
                                      (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v52 )
          goto LABEL_32;
        v55 = (int)Instance;
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v57,
          v52,
          (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v58 = v57;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v58,
                  (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v55 == v58.fields._current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v37,
              v54,
              (const MethodInfo_35863B8 *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v58,
          (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( --v54 < 0 )
          return v37;
      }
    }
  }
  return v37;
}


System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLimitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__GetReleaseQuestIdByServantLimit_34167984(this, svt_id, oldLimitCount, 494, v4);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit_34167984(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLimitCount,
        int32_t type_flag,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Generic_List_int__o *v37; // x19
  DataManager_o *Instance; // x0
  __int64 v39; // x1
  QuestReleaseEntity_array *ListByType; // x24
  __int64 v41; // x2
  __int64 v42; // x3
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x25
  unsigned int v45; // w28
  QuestReleaseEntity_o *v46; // x8
  int32_t questId; // w26
  const MethodInfo *v48; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v52; // x23
  const MethodInfo *v53; // x4
  int32_t v54; // w20
  int v55; // w21
  System_Collections_Generic_List_Enumerator_int__o v57; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v58; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B12D1C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id, *(_QWORD *)&oldLimitCount);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__RemoveAt__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v31, v32);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36);
    byte_4B12D1C = 1;
  }
  memset(&v58, 0, sizeof(v58));
  v37 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&svt_id,
                                                    *(_QWORD *)&oldLimitCount,
                                                    *(_QWORD *)&type_flag);
  System_Collections_Generic_List_int____ctor(
    v37,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_32;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_32;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v45 = 0;
    while ( 1 )
    {
      if ( v45 >= max_length )
        sub_1BCAA44(Instance, v39);
      v46 = ListByType->m_Items[v45];
      if ( !v46 )
        break;
      if ( v46->fields.targetId == svt_id )
      {
        if ( !v44 )
          break;
        questId = v46->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v44,
                                      questId,
                                      (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, questId, oldLimitCount, 7, v48);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v37 )
              break;
            items = v37->fields._items;
            v50 = Method_System_Collections_Generic_List_int__Add__;
            ++v37->fields._version;
            if ( !items )
              break;
            size = v37->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v37,
                questId,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
            }
            else
            {
              v37->fields._size = size + 1;
              items->m_Items[size + 1] = questId;
            }
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v45 >= max_length )
        goto LABEL_22;
    }
LABEL_32:
    sub_1BCAA3C(Instance, v39);
  }
LABEL_22:
  if ( (oldLimitCount & 0x80000000) == 0 )
  {
    v52 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v39,
                                                      v41,
                                                      v42);
    System_Collections_Generic_List_int____ctor_56116492(
      v52,
      (System_Collections_Generic_IEnumerable_T__o *)v37,
      (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
    Instance = (DataManager_o *)clsQuestCheck__GetReleaseQuestIdByServantLimit_34167984(
                                  this,
                                  svt_id,
                                  -1,
                                  type_flag,
                                  v53);
    if ( !Instance )
      goto LABEL_32;
    v37 = (System_Collections_Generic_List_int__o *)Instance;
    v54 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v54 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_int___get_Item(
                                      v37,
                                      v54,
                                      (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v52 )
          goto LABEL_32;
        v55 = (int)Instance;
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v57,
          v52,
          (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v58 = v57;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v58,
                  (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v55 == v58.fields._current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v37,
              v54,
              (const MethodInfo_35863B8 *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v58,
          (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( --v54 < 0 )
          return v37;
      }
    }
  }
  return v37;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit_34169000(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLimitCount,
        int32_t newLimitCount,
        int32_t type_flag,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  System_Collections_Generic_List_int__o *v36; // x19
  Il2CppObject *Instance; // x0
  __int64 v38; // x1
  QuestReleaseEntity_array *ListByType; // x25
  __int64 v40; // x2
  __int64 v41; // x3
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // x26
  unsigned int v44; // w21
  QuestReleaseEntity_o *v45; // x8
  int32_t questId; // w27
  const MethodInfo *v47; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v51; // x24
  int v52; // w8
  __int64 v53; // x29
  QuestReleaseEntity_o *v54; // x8
  int32_t v55; // w27
  const MethodInfo *v56; // x4
  struct System_Int32_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  int32_t v60; // w20
  int v61; // w21
  System_Collections_Generic_List_Enumerator_int__o v64; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v65; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B12D1D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id, *(_QWORD *)&oldLimitCount);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__RemoveAt__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v30, v31);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34, v35);
    byte_4B12D1D = 1;
  }
  memset(&v65, 0, sizeof(v65));
  v36 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&svt_id,
                                                    *(_QWORD *)&oldLimitCount,
                                                    *(_QWORD *)&newLimitCount);
  System_Collections_Generic_List_int____ctor(
    v36,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_46;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_46;
  max_length = ListByType->max_length;
  v43 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( max_length >= 1 )
  {
    v44 = 0;
    while ( v44 < max_length )
    {
      v45 = ListByType->m_Items[v44];
      if ( !v45 )
        goto LABEL_46;
      if ( v45->fields.targetId == svt_id )
      {
        if ( !v43 )
          goto LABEL_46;
        questId = v45->fields.questId;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v43,
                     questId,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_46;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (Il2CppObject *)clsQuestCheck__IsQuestRelease(this, questId, oldLimitCount, 7, v47);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v36 )
              goto LABEL_46;
            items = v36->fields._items;
            v49 = Method_System_Collections_Generic_List_int__Add__;
            ++v36->fields._version;
            if ( !items )
              goto LABEL_46;
            size = v36->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v36,
                questId,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
            }
            else
            {
              v36->fields._size = size + 1;
              items->m_Items[size + 1] = questId;
            }
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v44 >= max_length )
        goto LABEL_22;
    }
LABEL_47:
    sub_1BCAA44(Instance, v38);
  }
LABEL_22:
  v51 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v38,
                                                    v40,
                                                    v41);
  System_Collections_Generic_List_int____ctor(
    v51,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v52 = ListByType->max_length;
  if ( v52 >= 1 )
  {
    v53 = 0LL;
    while ( (unsigned int)v53 < v52 )
    {
      v54 = ListByType->m_Items[v53];
      if ( !v54 )
        goto LABEL_46;
      if ( v54->fields.targetId == svt_id )
      {
        if ( !v43 )
          goto LABEL_46;
        v55 = v54->fields.questId;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v43,
                     v55,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_46;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (Il2CppObject *)clsQuestCheck__IsQuestRelease(this, v55, newLimitCount, 7, v56);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v51 )
              goto LABEL_46;
            v57 = v51->fields._items;
            v58 = Method_System_Collections_Generic_List_int__Add__;
            ++v51->fields._version;
            if ( !v57 )
              goto LABEL_46;
            v59 = v51->fields._size;
            if ( (unsigned int)v59 >= v57->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v51,
                v55,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
            }
            else
            {
              v51->fields._size = v59 + 1;
              v57->m_Items[v59 + 1] = v55;
            }
          }
        }
      }
      v52 = ListByType->max_length;
      if ( (int)++v53 >= v52 )
        goto LABEL_37;
    }
    goto LABEL_47;
  }
LABEL_37:
  if ( !v51 )
LABEL_46:
    sub_1BCAA3C(Instance, v38);
  v60 = v51->fields._size - 1;
  if ( v60 >= 0 )
  {
    while ( 1 )
    {
      Instance = (Il2CppObject *)System_Collections_Generic_List_int___get_Item(
                                   v51,
                                   v60,
                                   (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v36 )
        goto LABEL_46;
      v61 = (int)Instance;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v64,
        v36,
        (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v65 = v64;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v65,
                (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        if ( v61 == v65.fields._current )
        {
          System_Collections_Generic_List_int___RemoveAt(
            v51,
            v60,
            (const MethodInfo_35863B8 *)Method_System_Collections_Generic_List_int__RemoveAt__);
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v65,
        (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      if ( --v60 < 0 )
        return v51;
    }
  }
  return v51;
}


System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLv(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLv,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__GetReleaseQuestIdByServantLv_34167424(this, svt_id, oldLv, 494, v4);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLv_34167424(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLv,
        int32_t type_flag,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_int__o *v21; // x23
  Il2CppObject *Instance; // x0
  __int64 v23; // x1
  QuestReleaseEntity_array *ListByType; // x24
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v26; // x25
  unsigned int v27; // w27
  QuestReleaseEntity_o *v28; // x8
  int32_t questId; // w26
  const MethodInfo *v30; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10

  if ( (byte_4B12D1B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id, *(_QWORD *)&oldLv);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B12D1B = 1;
  }
  v21 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&svt_id,
                                                    *(_QWORD *)&oldLv,
                                                    *(_QWORD *)&type_flag);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_23;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 6, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_23;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v26 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= max_length )
        sub_1BCAA44(Instance, v23);
      v28 = ListByType->m_Items[v27];
      if ( !v28 )
        break;
      if ( v28->fields.targetId == svt_id )
      {
        if ( !v26 )
          break;
        questId = v28->fields.questId;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v26,
                     questId,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (Il2CppObject *)clsQuestCheck__IsQuestRelease(this, questId, oldLv, 6, v30);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v21 )
              break;
            items = v21->fields._items;
            v32 = Method_System_Collections_Generic_List_int__Add__;
            ++v21->fields._version;
            if ( !items )
              break;
            size = v21->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v21,
                questId,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              v21->fields._size = size + 1;
              items->m_Items[size + 1] = questId;
            }
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v27 >= max_length )
        return v21;
    }
LABEL_23:
    sub_1BCAA3C(Instance, v23);
  }
  return v21;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestEntity__o *__fastcall clsQuestCheck__GetReleasedQuestEntityListByServantGet(
        clsQuestCheck_o *this,
        int32_t servantId,
        int32_t typeFlag,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  QuestReleaseEntity_array *Instance; // x0
  Il2CppObject *v32; // x1
  DataManager_o *v33; // x23
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v35; // x19
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Collections_Generic_List_object__o *v39; // x22
  int64_t v40; // x2
  __int64 v41; // x3
  int max_length; // w8
  QuestReleaseEntity_array *v43; // x26
  unsigned int v44; // w19
  QuestReleaseEntity_o *v45; // x25
  __int64 v46; // x29
  int32_t questId; // w27
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  QuestReleaseEntity_array **v54; // x28
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Func_object__bool__o *v58; // x25
  const MethodInfo *v59; // x4
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  struct System_Object_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  Il2CppClass **v67; // x0
  ServantGroupEntity_array *ListByServantID; // x19
  int64_t v69; // x2
  __int64 v70; // x3
  __int64 v71; // x8
  QuestReleaseEntity_array *v72; // x24
  unsigned __int64 v73; // x29
  int v74; // w8
  unsigned int v75; // w23
  __int64 v76; // x19
  QuestReleaseEntity_o *v77; // x25
  __int64 v78; // x27
  int32_t v79; // w25
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  QuestReleaseEntity_array **v86; // x26
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  System_Func_object__bool__o *v90; // x28
  const MethodInfo *v91; // x4
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  struct System_Object_array *v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  Il2CppClass **v99; // x0
  QuestReleaseMaster_o *v101; // [xsp+0h] [xbp-80h]
  DataManager_o *v102; // [xsp+8h] [xbp-78h]

  if ( (byte_4B12D1E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_QuestEntity___, *(_QWORD *)&servantId, *(_QWORD *)&typeFlag);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantGroupMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&System_Func_QuestEntity__bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestEntity__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestEntity__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&Method_clsQuestCheck___c__DisplayClass31_0__GetReleasedQuestEntityListByServantGet_b__0__, v23, v24);
    sub_1BCA7E0(&clsQuestCheck___c__DisplayClass31_0_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_clsQuestCheck___c__DisplayClass31_1__GetReleasedQuestEntityListByServantGet_b__1__, v27, v28);
    sub_1BCA7E0(&clsQuestCheck___c__DisplayClass31_1_TypeInfo, v29, v30);
    byte_4B12D1E = 1;
  }
  Instance = (QuestReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  v33 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  v35 = DataManager__GetMasterData_object_(
          v33,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v39 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestEntity__TypeInfo,
                                                       v36,
                                                       v37,
                                                       v38);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  if ( !v35 )
    goto LABEL_49;
  v101 = (QuestReleaseMaster_o *)v35;
  Instance = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)v35, 8, 0LL);
  if ( !Instance )
    goto LABEL_49;
  max_length = Instance->max_length;
  v43 = Instance;
  if ( max_length >= 1 )
  {
    v44 = 0;
    while ( v44 < max_length )
    {
      v45 = v43->m_Items[v44];
      v46 = sub_1BCAA2C(clsQuestCheck___c__DisplayClass31_0_TypeInfo, v32, v40, v41);
      System_Object___ctor((Il2CppObject *)v46, 0LL);
      if ( !v45 )
        goto LABEL_49;
      if ( v45->fields.targetId == servantId )
      {
        if ( !MasterData_object )
          goto LABEL_49;
        questId = v45->fields.questId;
        Instance = (QuestReleaseEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                 questId,
                                                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v46 )
          goto LABEL_49;
        *(_QWORD *)(v46 + 16) = Instance;
        v54 = (QuestReleaseEntity_array **)(v46 + 16);
        sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 16), (int64_t)Instance, v48, v49, v50, v51, v52, v53);
        v58 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_QuestEntity__bool__TypeInfo, v55, v56, v57);
        System_Func_object__bool____ctor(
          v58,
          (Il2CppObject *)v46,
          Method_clsQuestCheck___c__DisplayClass31_0__GetReleasedQuestEntityListByServantGet_b__0__,
          0LL);
        Instance = (QuestReleaseEntity_array *)BasicHelper__Any_object_(
                                                 (System_Collections_Generic_List_T__o *)v39,
                                                 (System_Func_T__bool__o *)v58,
                                                 (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = *v54;
          if ( !*v54 )
            goto LABEL_49;
          Instance = (QuestReleaseEntity_array *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
          if ( ((unsigned int)Instance & typeFlag) != 0 )
          {
            Instance = (QuestReleaseEntity_array *)clsQuestCheck__IsQuestRelease(this, questId, -1, 0, v59);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v39 )
                goto LABEL_49;
              v32 = (Il2CppObject *)*v54;
              items = v39->fields._items;
              v65 = Method_System_Collections_Generic_List_QuestEntity__Add__;
              ++v39->fields._version;
              if ( !items )
                goto LABEL_49;
              size = v39->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v39,
                  v32,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
              }
              else
              {
                v67 = &items->obj.klass + size;
                v39->fields._size = size + 1;
                v67[4] = (Il2CppClass *)v32;
                sub_1BCA784((PartyOrganizationUtility_o *)(v67 + 4), (int64_t)v32, v40, v41, v60, v61, v62, v63);
              }
            }
          }
        }
      }
      max_length = v43->max_length;
      if ( (int)++v44 >= max_length )
        goto LABEL_23;
    }
LABEL_50:
    sub_1BCAA44(Instance, v32);
  }
LABEL_23:
  Instance = (QuestReleaseEntity_array *)DataManager__GetMasterData_object_(
                                           v33,
                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantGroupMaster___);
  if ( !Instance
    || (ListByServantID = ServantGroupMaster__getListByServantID((ServantGroupMaster_o *)Instance, servantId, 0LL),
        Instance = QuestReleaseMaster__getListByType(v101, 10, 0LL),
        !ListByServantID) )
  {
LABEL_49:
    sub_1BCAA3C(Instance, v32);
  }
  v71 = *(_QWORD *)&ListByServantID->max_length;
  if ( (int)v71 >= 1 )
  {
    v72 = Instance;
    v73 = 0LL;
    v102 = (DataManager_o *)ListByServantID;
    while ( 1 )
    {
      if ( v73 >= (unsigned int)v71 )
        goto LABEL_50;
      if ( !v72 )
        goto LABEL_49;
      v74 = v72->max_length;
      if ( v74 >= 1 )
        break;
LABEL_47:
      ++v73;
      LODWORD(v71) = v102->fields.m_CancellationTokenSource;
      if ( (__int64)v73 >= (int)v71 )
        return (System_Collections_Generic_List_QuestEntity__o *)v39;
    }
    v75 = 0;
    v76 = *((_QWORD *)&v102->fields._DispLog + v73);
    while ( v75 < v74 )
    {
      v77 = v72->m_Items[v75];
      v78 = sub_1BCAA2C(clsQuestCheck___c__DisplayClass31_1_TypeInfo, v32, v69, v70);
      System_Object___ctor((Il2CppObject *)v78, 0LL);
      if ( !v76 || !v77 )
        goto LABEL_49;
      if ( *(_DWORD *)(v76 + 16) == v77->fields.targetId )
      {
        if ( !MasterData_object )
          goto LABEL_49;
        v79 = v77->fields.questId;
        Instance = (QuestReleaseEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                 v79,
                                                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v78 )
          goto LABEL_49;
        *(_QWORD *)(v78 + 16) = Instance;
        v86 = (QuestReleaseEntity_array **)(v78 + 16);
        sub_1BCA784((PartyOrganizationUtility_o *)(v78 + 16), (int64_t)Instance, v80, v81, v82, v83, v84, v85);
        v90 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_QuestEntity__bool__TypeInfo, v87, v88, v89);
        System_Func_object__bool____ctor(
          v90,
          (Il2CppObject *)v78,
          Method_clsQuestCheck___c__DisplayClass31_1__GetReleasedQuestEntityListByServantGet_b__1__,
          0LL);
        Instance = (QuestReleaseEntity_array *)BasicHelper__Any_object_(
                                                 (System_Collections_Generic_List_T__o *)v39,
                                                 (System_Func_T__bool__o *)v90,
                                                 (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = *v86;
          if ( !*v86 )
            goto LABEL_49;
          Instance = (QuestReleaseEntity_array *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
          if ( ((unsigned int)Instance & typeFlag) != 0 )
          {
            Instance = (QuestReleaseEntity_array *)clsQuestCheck__IsQuestRelease(this, v79, -1, 0, v91);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v39 )
                goto LABEL_49;
              v32 = (Il2CppObject *)*v86;
              v96 = v39->fields._items;
              v97 = Method_System_Collections_Generic_List_QuestEntity__Add__;
              ++v39->fields._version;
              if ( !v96 )
                goto LABEL_49;
              v98 = v39->fields._size;
              if ( (unsigned int)v98 >= v96->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v39,
                  v32,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
              }
              else
              {
                v99 = &v96->obj.klass + v98;
                v39->fields._size = v98 + 1;
                v99[4] = (Il2CppClass *)v32;
                sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 4), (int64_t)v32, v69, v70, v92, v93, v94, v95);
              }
            }
          }
        }
      }
      v74 = v72->max_length;
      if ( (int)++v75 >= v74 )
        goto LABEL_47;
    }
    goto LABEL_50;
  }
  return (System_Collections_Generic_List_QuestEntity__o *)v39;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsEncountRaidBoss(
        clsQuestCheck_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Int32_array *Instance; // x0
  __int64 v12; // x1
  EventRaidMaster_o *v13; // x22
  int32_t RaidDeadQuestId; // w23
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x4
  const MethodInfo *v18; // x4
  __int64 v19; // x8
  System_Int32_array *v20; // x20
  unsigned __int64 v21; // x21

  if ( (byte_4B12D0E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId, *(_QWORD *)&day);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v9, v10);
    byte_4B12D0E = 1;
  }
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_18;
  v13 = (EventRaidMaster_o *)Instance;
  RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId((EventRaidMaster_o *)Instance, eventId, day, 0LL);
  Instance = (System_Int32_array *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, RaidDeadQuestId, 0, v15)
    || clsQuestCheck__IsQuestRelease(this, RaidDeadQuestId, -1, 0, v16) )
  {
    LOBYTE(Instance) = 1;
    return (unsigned __int8)Instance & 1;
  }
  Instance = EventRaidMaster__GetRaidAliveQuestIds(v13, eventId, day, 0LL);
  if ( !Instance )
LABEL_18:
    sub_1BCAA3C(Instance, v12);
  v19 = *(_QWORD *)&Instance->max_length;
  v20 = Instance;
  if ( (int)v19 < 1 )
  {
    LOBYTE(Instance) = 0;
  }
  else
  {
    v21 = 0LL;
    do
    {
      if ( v21 >= (unsigned int)v19 )
        sub_1BCAA44(Instance, v12);
      Instance = (System_Int32_array *)clsQuestCheck__IsQuestRelease(this, v20->m_Items[v21 + 1], -1, 0, v18);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      LODWORD(v19) = v20->max_length;
      ++v21;
    }
    while ( (__int64)v21 < (int)v19 );
  }
  return (unsigned __int8)Instance & 1;
}


bool __fastcall clsQuestCheck__IsLastWarClear(clsQuestCheck_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t Value; // w1
  const MethodInfo *v5; // x2

  if ( (byte_4B12D10 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8355/*"LAST_WAR_ID"*/, method, v2);
    byte_4B12D10 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8355/*"LAST_WAR_ID"*/, 0LL);
  return clsQuestCheck__IsWarClear(this, Value, v5);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsMainInterlude(clsQuestCheck_o *this, int32_t war_id, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4B12D11 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&war_id, method);
    sub_1BCA7E0(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B12D11 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             war_id,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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
  __int64 v6; // x1
  int32_t v7; // w20

  if ( (byte_4B12D17 & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&qid, is_quest_after_action);
    byte_4B12D17 = 1;
  }
  v7 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6);
  return CondType__IsQuestClear_38310172(qid, v7, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsQuestClearRaw(
        clsQuestCheck_o *this,
        int32_t qid,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  __int64 v6; // x1
  int32_t v7; // w20

  if ( (byte_4B12D18 & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&qid, is_quest_after_action);
    byte_4B12D18 = 1;
  }
  v7 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6);
  return CondType__IsQuestClear_38310172(qid, v7, 0, 0LL);
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
  __int64 v9; // x2
  __int64 v10; // x1
  int32_t v11; // w21
  __int64 v12; // x1
  int64_t UserId; // x22

  if ( (byte_4B12D19 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&qid, *(_QWORD *)&phase);
    this = (clsQuestCheck_o *)sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    byte_4B12D19 = 1;
  }
  v11 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, *(const MethodInfo **)&phase);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v12);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  System_Collections_ObjectModel_Collection_T__o *v25; // x19
  bool v26; // w20
  __int64 v27; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  QuestReleaseEntity_o *v37; // x0
  __int64 v38; // x1
  const MethodInfo *v39; // x4
  __int64 methodPtr_low; // x10
  int32_t v41; // w2
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0

  if ( (byte_4B12D0D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&quest_id,
      *(_QWORD *)&old_val);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_DataManager_getEntityList_QuestReleaseMaster___, v11, v12);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v17, v18);
    sub_1BCA7E0(&QuestReleaseEntity_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    byte_4B12D0D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__getEntityList_object_(
                                      Instance,
                                      (const MethodInfo_2F12E8C *)Method_DataManager_getEntityList_QuestReleaseMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v24);
  }
  v25 = (System_Collections_ObjectModel_Collection_T__o *)Instance;
  v26 = System_Collections_ObjectModel_Collection_object___get_Count(
          (System_Collections_ObjectModel_Collection_T__o *)Instance,
          (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) > 0;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v25,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v27);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v30;
        p_offset += 4;
        if ( !v30 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v33 = Enumerator->klass;
    v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v35 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_17;
      }
      v36 = (__int64)&v33->vtable[*v35].method;
    }
    else
    {
LABEL_17:
      v36 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v37 = (QuestReleaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
                                    Enumerator,
                                    *(_QWORD *)(v36 + 8));
    if ( !v37 )
      goto LABEL_38;
    methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v37->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestReleaseEntity_c *)v37->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestReleaseEntity_TypeInfo )
    {
      sub_1BCACFC(v37);
LABEL_38:
      sub_1BCAA3C(v37, v38);
    }
    if ( v37->fields.questId == quest_id )
    {
      if ( (old_val & 0x80000000) != 0 )
        v41 = -1;
      else
        v41 = v37->fields.type == old_val_qr_type ? old_val : -1;
      if ( !clsQuestCheck__IsQuestRelease_34164432(this, v37, v41, 0LL, v39) )
      {
        v26 = 0;
        break;
      }
    }
  }
  v42 = Enumerator->klass;
  v43 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_34;
    }
    v45 = (__int64)&v42->vtable[*v44].method;
  }
  else
  {
LABEL_34:
    v45 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(Enumerator, *(_QWORD *)(v45 + 8));
  return v26;
}


bool __fastcall clsQuestCheck__IsQuestRelease_34161576(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        MapControl_QuestInfo_o *qinf,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_34164432(this, qrd, -1, qinf, v4);
}


bool __fastcall clsQuestCheck__IsQuestRelease_34163512(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        int32_t old_val,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_34164432(this, qrd, old_val, 0LL, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsQuestRelease_34164432(
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  int32_t type; // w23
  int32_t v24; // w20
  int32_t v25; // w21
  int32_t targetId; // w20
  int64_t value; // x19
  int32_t v29; // w0
  int32_t v30; // w20
  int32_t v31; // w21
  __int64 v32; // x1
  int32_t v33; // w19
  int32_t v34; // w0
  int32_t v35; // w1
  int32_t v36; // w2
  bool v37; // w3
  __int64 v39; // x1
  bool v40; // w3
  QuestReleaseEntity_o *v41; // x2
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  Il2CppObject *v47; // x0
  __int64 v48; // x1
  QuestEntity_o *v49; // x19
  int64_t Time; // x20
  Il2CppObject *v51; // x0
  int32_t v52; // w19
  int32_t v53; // w20
  int32_t questId; // w22
  __int64 v55; // x1
  int32_t ValueInt; // w19
  int32_t v57; // w20
  int32_t v58; // w21
  __int64 v59; // x1
  int32_t v60; // w19
  __int64 v61; // x1
  __int64 v62; // x1
  TotalEventRaidEntity_o *v64; // [xsp+0h] [xbp-50h] BYREF
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  System_Int32_array *sameGroupQuestIds; // [xsp+10h] [xbp-40h] BYREF
  bool is_release; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = this;
  if ( (byte_4B12D13 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, qrd, *(_QWORD *)&old_val);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaidMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v19, v20);
    this = (clsQuestCheck_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    byte_4B12D13 = 1;
  }
  entity = 0LL;
  sameGroupQuestIds = 0LL;
  v64 = 0LL;
  is_release = 0;
  if ( !qrd )
LABEL_97:
    sub_1BCAA3C(this, qrd);
  type = qrd->fields.type;
  if ( !v6 & v5 )
  {
LABEL_20:
    targetId = qrd->fields.targetId;
    value = qrd->fields.value;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, qrd);
    v29 = type;
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
        v40 = 1;
        v41 = qrd;
        goto LABEL_85;
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
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v42);
        v29 = 6;
        break;
      case 7:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        if ( (old_val & 0x80000000) == 0 )
          return QuestReleaseEntity__getValueInt(qrd, 0LL) <= old_val;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v43);
        v29 = 7;
        break;
      case 8:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v44);
        v29 = 8;
        break;
      case 9:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        if ( (old_val & 0x80000000) == 0 )
          return QuestReleaseEntity__getValueInt(qrd, 0LL) <= old_val;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v45);
        v29 = 9;
        break;
      case 10:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v46);
        v29 = 10;
        break;
      case 11:
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, qrd);
        v29 = 11;
        break;
      case 12:
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_97;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_97;
        v47 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                qrd->fields.questId,
                (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v47 )
          return is_release;
        v49 = (QuestEntity_o *)v47;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v48);
        Time = NetworkManager__getTime(0LL);
        if ( QuestEntity__getOpenedAt(v49, 0LL) > Time || QuestEntity__getClosedAt(v49, 0LL) <= Time )
          return is_release;
        return 1;
      case 13:
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_97;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_97;
        v51 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                qrd->fields.questId,
                (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v51 )
          return is_release;
        return QuestEntity__IsOpenByTime((QuestEntity_o *)v51, 1, 0LL);
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
        v52 = qrd->fields.targetId;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, qrd);
        return CondType__IsMissionAchive(v52, 0LL);
      case 26:
        v53 = qrd->fields.targetId;
        questId = qrd->fields.questId;
        ValueInt = QuestReleaseEntity__getValueInt(qrd, 0LL);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v55);
        is_release = CondType__IsNotQuestGroupClear(questId, v53, ValueInt, &sameGroupQuestIds, 1, 0LL);
        if ( qinf )
        {
          qinf->fields._GroupId_k__BackingField = v53;
          MapControl_QuestInfo__AddSameGroupQuestIds(qinf, sameGroupQuestIds, 0LL);
        }
        return is_release;
      case 27:
      case 28:
        v24 = qrd->fields.targetId;
        v25 = QuestReleaseEntity__getValueInt(qrd, 0LL);
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_97;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaidMaster___);
        if ( !this )
          goto LABEL_97;
        if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)this, &entity, v24, v25, 0LL) )
          return is_release;
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_97;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
        if ( !this )
          goto LABEL_97;
        this = (clsQuestCheck_o *)TotalEventRaidMaster__TryGetEntity(
                                    (TotalEventRaidMaster_o *)this,
                                    &v64,
                                    v24,
                                    v25,
                                    0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          return is_release;
        if ( !entity || !v64 )
          goto LABEL_97;
        return (entity->fields.maxHp > v64->fields.totalDamage) ^ (qrd->fields.type != 27);
      case 32:
        v57 = qrd->fields.questId;
        v58 = qrd->fields.targetId;
        v60 = QuestReleaseEntity__getValueInt(qrd, 0LL);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v59);
        v37 = 1;
        v34 = v57;
        v35 = v58;
        v36 = v60;
        return CondType__IsQuestGroupClear(v34, v35, v36, v37, 0LL);
      case 38:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v61);
        v29 = 38;
        break;
      case 53:
        v41 = qrd;
        v40 = 0;
LABEL_85:
        clsQuestCheck__checkCondTypeItemGet(this, &is_release, v41, v40, method);
        return is_release;
      case 54:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v62);
        v29 = 54;
        break;
      default:
        if ( type == 58 )
        {
          v30 = qrd->fields.questId;
          v31 = qrd->fields.targetId;
          v33 = QuestReleaseEntity__getValueInt(qrd, 0LL);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v32);
          v34 = v30;
          v35 = v31;
          v36 = v33;
          v37 = 0;
          return CondType__IsQuestGroupClear(v34, v35, v36, v37, 0LL);
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
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v39);
        v29 = 64;
        break;
    }
  }
  return CondType__IsOpen(v29, targetId, value, 0, 0LL, 0LL);
}


bool __fastcall clsQuestCheck__IsReleasedLoginQuest(
        clsQuestCheck_o *this,
        LoginQuestEntity_o *loginQuestEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  QuestReleaseMaster_o *Master_object; // x0
  __int64 v18; // x1
  clsQuestCheck_Fields *p_fields; // x21
  __int64 v20; // x1
  System_Collections_Generic_List_object__o *qrs; // x9
  int64_t v22; // x21
  _BOOL8 v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x4
  int v26; // w19
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B12D0C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestReleaseMaster___, loginQuestEnt, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    byte_4B12D0C = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, loginQuestEnt);
  Master_object = (QuestReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !loginQuestEnt || !Master_object )
    goto LABEL_24;
  p_fields = &this->fields;
  QuestReleaseMaster__getListByQuestID_40252920(Master_object, loginQuestEnt->fields.questId, &this->fields.qrs, 0LL);
  if ( !this->fields.qrs )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v20);
  Master_object = (QuestReleaseMaster_o *)NetworkManager__getTime(0LL);
  qrs = (System_Collections_Generic_List_object__o *)p_fields->qrs;
  if ( !p_fields->qrs )
LABEL_24:
    sub_1BCAA3C(Master_object, v18);
  v22 = (int64_t)Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    qrs,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v23 )
      break;
    if ( !v28.fields._current )
      sub_1BCAA3C(v23, v24);
    if ( HIDWORD(v28.fields._current[1].klass) == 12 )
    {
      if ( !LoginQuestEntity__IsEnablePeriod(loginQuestEnt, v22, 0LL) )
        goto LABEL_18;
    }
    else if ( !clsQuestCheck__IsQuestRelease_34164432(this, (QuestReleaseEntity_o *)v28.fields._current, -1, 0LL, v25) )
    {
LABEL_18:
      v26 = 6;
      goto LABEL_21;
    }
  }
  v26 = 7;
LABEL_21:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v26 != 6;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsReleasedQuest(clsQuestCheck_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Master_object; // x0
  __int64 v16; // x1
  struct System_Collections_Generic_List_QuestReleaseEntity__o *qrs; // x0
  const MethodInfo *v18; // x4
  int v19; // w19
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B12D0B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestReleaseMaster___, *(_QWORD *)&questId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v13, v14);
    byte_4B12D0B = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v16);
  QuestReleaseMaster__getListByQuestID_40252920((QuestReleaseMaster_o *)Master_object, questId, &this->fields.qrs, 0LL);
  qrs = this->fields.qrs;
  if ( qrs )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      (System_Collections_Generic_List_object__o *)qrs,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
    {
      if ( !clsQuestCheck__IsQuestRelease_34164432(this, (QuestReleaseEntity_o *)v21.fields._current, -1, 0LL, v18) )
      {
        v19 = 5;
        goto LABEL_12;
      }
    }
    v19 = 6;
LABEL_12:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    LOBYTE(qrs) = v19 != 5;
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
  int v8; // w22
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x19
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x1
  int32_t ScriptIntParam; // w22
  int v43; // w8
  clsQuestCheck_c *v45; // x0
  System_String_o *KEY_QUEST_START_EFFECT; // x21
  System_String_o *String; // x21
  System_String_array *v48; // x0
  __int64 v49; // x2
  __int64 v50; // x3
  System_Object_array *v51; // x23
  System_Func_object__bool__o *v52; // x20
  Il2CppObject *object; // x20
  System_String_o *v54; // x0
  char v55; // w8
  System_String_o *v56; // x19
  clsQuestCheck_c *v57; // x0
  System_String_o *v58; // x20
  Il2CppObject *v59; // [xsp+0h] [xbp-50h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v8 = questPhase;
  if ( (byte_4B12D26 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Find_string___, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseMaster___, v12, v13);
    sub_1BCA7E0(&DataManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v16, v17);
    sub_1BCA7E0(&EncryptedPlayerPrefs_TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Func_string__bool__TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_clsQuestCheck___c__DisplayClass40_0__IsTapSkipQuestStart_b__0__, v22, v23);
    sub_1BCA7E0(&clsQuestCheck___c__DisplayClass40_0_TypeInfo, v24, v25);
    sub_1BCA7E0(&StringLiteral_22937/*"questStartEffectSkip"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v28, v29);
    sub_1BCA7E0(&clsQuestCheck_TypeInfo, v30, v31);
    byte_4B12D26 = 1;
  }
  v59 = 0LL;
  entity = 0LL;
  v32 = sub_1BCAA2C(
          clsQuestCheck___c__DisplayClass40_0_TypeInfo,
          *(_QWORD *)&questId,
          *(_QWORD *)&questPhase,
          effectName);
  System_Object___ctor((Il2CppObject *)v32, 0LL);
  if ( !v32 )
    goto LABEL_41;
  *(_QWORD *)(v32 + 16) = effectName;
  sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 16), (int64_t)effectName, v35, v36, v37, v38, v39, v40);
  if ( isMyRoomMaterial )
    return 0;
  if ( v8 <= 1 )
    v8 = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v41);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_41;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, questId, v8, 0LL) )
    goto LABEL_44;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_41;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_22937/*"questStartEffectSkip"*/, 0, 0LL);
  if ( !ScriptIntParam )
  {
LABEL_44:
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v34);
    Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !Master_object )
      goto LABEL_41;
    Master_object = (QuestPhaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            &v59,
                                            questId,
                                            (const MethodInfo_31B2E94 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !v59 )
        goto LABEL_41;
      v43 = LODWORD(v59[2].monitor) - 1;
      if ( (unsigned int)v43 > 7 )
        ScriptIntParam = 0;
      else
        ScriptIntParam = dword_C0B538[v43];
      goto LABEL_22;
    }
    return 0;
  }
LABEL_22:
  v45 = clsQuestCheck_TypeInfo;
  if ( !clsQuestCheck_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo, v34);
    v45 = clsQuestCheck_TypeInfo;
  }
  KEY_QUEST_START_EFFECT = v45->static_fields->KEY_QUEST_START_EFFECT;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v34);
  String = EncryptedPlayerPrefs__GetString(KEY_QUEST_START_EFFECT, 0LL);
  Master_object = (QuestPhaseMaster_o *)System_String__IsNullOrEmpty(String, 0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    goto LABEL_31;
  if ( !String )
LABEL_41:
    sub_1BCAA3C(Master_object, v34);
  v48 = System_String__Split(String, 0x2Fu, 0, 0LL);
  if ( !v48 )
  {
LABEL_31:
    v56 = *(System_String_o **)(v32 + 16);
LABEL_32:
    v57 = clsQuestCheck_TypeInfo;
    if ( !clsQuestCheck_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo, v34);
      v57 = clsQuestCheck_TypeInfo;
    }
    v58 = v57->static_fields->KEY_QUEST_START_EFFECT;
    if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v34);
    EncryptedPlayerPrefs__SetString(v58, v56, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
    v55 = 1;
    goto LABEL_37;
  }
  v51 = (System_Object_array *)v48;
  v52 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_string__bool__TypeInfo, v34, v49, v50);
  System_Func_object__bool____ctor(
    v52,
    (Il2CppObject *)v32,
    Method_clsQuestCheck___c__DisplayClass40_0__IsTapSkipQuestStart_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             v51,
             (System_Func_T__bool__o *)v52,
             (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_string___);
  v54 = System_String__Concat_62412480(
          String,
          (System_String_o *)StringLiteral_1120/*"/"*/,
          *(System_String_o **)(v32 + 16),
          0LL);
  if ( !object )
  {
    v56 = v54;
    goto LABEL_32;
  }
  v55 = 0;
LABEL_37:
  if ( ScriptIntParam == 1 )
    return 1;
  else
    return (ScriptIntParam == 2) & (v55 ^ 1);
}


bool __fastcall clsQuestCheck__IsValidQuestRandomGroup(
        clsQuestCheck_o *this,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  QuestRandomGroupMaster_o *v20; // x21
  QuestRandomGroupEntity_o *EntityFromQuestId; // x0
  __int64 v22; // x1
  QuestRandomGroupEntity_o *v23; // x19
  int32_t randomGroupId; // w20
  __int64 v25; // x2
  TerminalPramsManager_c *v26; // x0
  bool v27; // w0
  __int64 v28; // x2
  uint32_t cctor_finished; // w9
  TerminalPramsManager_c *v30; // x0
  __int64 v31; // x1
  int32_t Item; // w22
  __int64 v33; // x2
  QuestRandomGroupEntity_o *RandomRangeQuest; // x0
  TerminalPramsManager_c *v35; // x0
  __int64 v36; // x2
  QuestRandomGroupEntity_o *v37; // x21
  TerminalPramsManager_c *v38; // x0
  TerminalPramsManager_c *v39; // x0

  if ( (byte_4B12D09 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, questInfo, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestRandomGroupMaster___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v16, v17);
    byte_4B12D09 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestRandomGroupMaster___);
  if ( !questInfo )
    goto LABEL_53;
  v20 = (QuestRandomGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_53;
  EntityFromQuestId = QuestRandomGroupMaster__GetEntityFromQuestId(
                        (QuestRandomGroupMaster_o *)Instance,
                        questInfo->fields.questId,
                        0LL);
  if ( EntityFromQuestId )
  {
    v23 = EntityFromQuestId;
    randomGroupId = EntityFromQuestId->fields.randomGroupId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22);
    TerminalPramsManager__LoadQuestRandomGroupList(0LL);
    if ( !byte_4B12DC2 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v19, v25);
      byte_4B12DC2 = 1;
    }
    v26 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
      v26 = TerminalPramsManager_TypeInfo;
    }
    Instance = (Il2CppObject *)v26->static_fields->_QuestRandomGroupList_k__BackingField;
    if ( !Instance )
      goto LABEL_53;
    v27 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
            (System_Collections_Generic_Dictionary_int__int__o *)Instance,
            randomGroupId,
            (const MethodInfo_31FD460 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    cctor_finished = TerminalPramsManager_TypeInfo->_2.cctor_finished;
    if ( v27 )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
      if ( !byte_4B12DC2 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v19, v28);
        byte_4B12DC2 = 1;
      }
      v30 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
        v30 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v30->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_53;
      Item = System_Collections_Generic_Dictionary_int__int___get_Item(
               (System_Collections_Generic_Dictionary_int__int__o *)Instance,
               randomGroupId,
               (const MethodInfo_31FD1D8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v31);
      if ( !CondType__IsQuestClear_38310172(Item, -1, 0, 0LL) )
        goto LABEL_44;
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
      if ( !byte_4B12DC2 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v19, v28);
        byte_4B12DC2 = 1;
      }
      v35 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
        v35 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v35->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_53;
      System_Collections_Generic_Dictionary_int__int___Add(
        (System_Collections_Generic_Dictionary_int__int__o *)Instance,
        randomGroupId,
        0,
        (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
    RandomRangeQuest = QuestRandomGroupMaster__GetRandomRangeQuest(v20, randomGroupId, 0LL);
    if ( RandomRangeQuest )
    {
      v37 = RandomRangeQuest;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
      if ( !byte_4B12DC2 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v19, v36);
        byte_4B12DC2 = 1;
      }
      v38 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
        v38 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v38->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_53;
      System_Collections_Generic_Dictionary_int__int___set_Item(
        (System_Collections_Generic_Dictionary_int__int__o *)Instance,
        randomGroupId,
        v37->fields.questId,
        (const MethodInfo_31FD260 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      TerminalPramsManager__SaveQuestRandomGroupList(0LL);
LABEL_44:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
      if ( !byte_4B12DC2 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v19, v33);
        byte_4B12DC2 = 1;
      }
      v39 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
        v39 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v39->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( Instance )
      {
        LOBYTE(RandomRangeQuest) = System_Collections_Generic_Dictionary_int__int___get_Item(
                                     (System_Collections_Generic_Dictionary_int__int__o *)Instance,
                                     randomGroupId,
                                     (const MethodInfo_31FD1D8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) == v23->fields.questId;
        return (char)RandomRangeQuest;
      }
LABEL_53:
      sub_1BCAA3C(Instance, v19);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v12; // x3

  if ( (byte_4B12D0F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&war_id, method);
    sub_1BCA7E0(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B12D0F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v10);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             war_id,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = clsQuestCheck__IsQuestClear(this, HIDWORD(Entity[6].klass), 0, v12);
  return (char)Entity;
}


void __fastcall clsQuestCheck__PlayQuestStartAction(
        clsQuestCheck_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  TerminalPramsManager_c *v6; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w20
  __int64 v9; // x1

  if ( (byte_4B12D25 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptManager_TypeInfo, end_act, method);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v4, v5);
    byte_4B12D25 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, end_act);
  if ( !byte_4B12DC6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, end_act, method);
    byte_4B12DC6 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, end_act);
    v6 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v6->static_fields->_WarId_k__BackingField;
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, end_act, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4B12DC3 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6, end_act);
    v6 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
  if ( clsQuestCheck__mfCheck_IsQuestNew((clsQuestCheck_o *)v6, QuestId_k__BackingField, method) )
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v9);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  void *Instance; // x0
  __int64 v22; // x1
  _QWORD *v23; // x19
  __int64 methodPtr_low; // x9
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  TerminalPramsManager_c *v29; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w20
  BattleSetupInfo_o *v33; // x23
  Il2CppObject *v34; // x20
  clsQuestCheck_o *v35; // x0
  const MethodInfo *v36; // x1

  if ( (byte_4B12D28 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleRootComponent_TypeInfo, qinf, endTime);
    sub_1BCA7E0(&BattleSetupInfo_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v19, v20);
    byte_4B12D28 = 1;
  }
  if ( result == 2 )
  {
    if ( clsQuestCheck__CheckQuestPlayable(this, qinf, endTime, boostId, *(const MethodInfo **)&boostId) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v26);
      if ( !byte_4B12DC6 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v26, v27);
        byte_4B12DC6 = 1;
      }
      v29 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v26);
        v29 = TerminalPramsManager_TypeInfo;
      }
      WarId_k__BackingField = v29->static_fields->_WarId_k__BackingField;
      if ( !byte_4B12DC3 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v26, v27);
        v29 = TerminalPramsManager_TypeInfo;
        byte_4B12DC3 = 1;
      }
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29, v26);
        v29 = TerminalPramsManager_TypeInfo;
      }
      QuestId_k__BackingField = v29->static_fields->_QuestId_k__BackingField;
      if ( !byte_4B12DCE )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v26, v27);
        v29 = TerminalPramsManager_TypeInfo;
        byte_4B12DCE = 1;
      }
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29, v26);
        v29 = TerminalPramsManager_TypeInfo;
      }
      PhaseCnt_k__BackingField = v29->static_fields->_PhaseCnt_k__BackingField;
      v33 = (BattleSetupInfo_o *)sub_1BCAA2C(BattleSetupInfo_TypeInfo, v26, v27, v28);
      BattleSetupInfo___ctor(v33, 0LL);
      if ( !v33 )
        goto LABEL_38;
      Instance = BattleSetupInfo__ConvertBattleSetupInfo(
                   v33,
                   WarId_k__BackingField,
                   QuestId_k__BackingField,
                   PhaseCnt_k__BackingField,
                   0,
                   0,
                   0,
                   0LL);
      v34 = (Il2CppObject *)Instance;
      if ( boostId )
      {
        if ( !Instance )
          goto LABEL_38;
        *((_DWORD *)Instance + 14) = boostId;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance
        || (*((_BYTE *)Instance + 148) = 1,
            (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__)) == 0LL)
        || (*((_DWORD *)Instance + 38) = 1,
            (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
      {
LABEL_38:
        sub_1BCAA3C(Instance, v22);
      }
      AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 35, 1, v34, 0LL);
    }
LABEL_36:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0LL);
      return;
    }
    goto LABEL_38;
  }
  if ( result )
    goto LABEL_36;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v23 = (_QWORD *)*((_QWORD *)Instance + 4);
  if ( !v23 )
    goto LABEL_38;
  methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*v23 + 304LL) >= (unsigned int)methodPtr_low
    && *(BattleRootComponent_c **)(*(_QWORD *)(*v23 + 200LL) + 8 * methodPtr_low - 8) == BattleRootComponent_TypeInfo )
  {
    Instance = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)Instance + 4), 0LL);
    if ( !Instance )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v25 = v23[10];
    if ( !v25 )
      goto LABEL_38;
    Instance = *(void **)(v25 + 496);
    if ( !Instance )
      goto LABEL_38;
    BattleResultComponent__EndResult((BattleResultComponent_o *)Instance, 0LL);
    goto LABEL_36;
  }
  sub_1BCACFC(*((_QWORD *)Instance + 4));
  clsQuestCheck___ctor(v35, v36);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  PartyOrganizationUtility_c *v16; // x21
  TerminalPramsManager_c *v17; // x0
  PartyOrganizationUtility_o *p_ClearEventQuestIds_k__BackingField; // x0
  const MethodInfo *v19; // x2
  System_Collections_Generic_IEnumerable_T__o *v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_String_o *v28; // x19
  TerminalPramsManager_c *v29; // x0
  PartyOrganizationUtility_o *v30; // x0

  if ( (byte_4B12D21 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_String_Join_int___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    byte_4B12D21 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&eventId);
  v16 = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
  if ( !byte_4B12DC4 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, *(_QWORD *)&eventId, method);
    byte_4B12DC4 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&eventId);
    v17 = TerminalPramsManager_TypeInfo;
  }
  p_ClearEventQuestIds_k__BackingField = (PartyOrganizationUtility_o *)&v17->static_fields->_ClearEventQuestIds_k__BackingField;
  p_ClearEventQuestIds_k__BackingField->klass = v16;
  sub_1BCA784(p_ClearEventQuestIds_k__BackingField, (int64_t)v16, (int64_t)method, v3, v4, v5, v6, v7);
  v20 = (System_Collections_Generic_IEnumerable_T__o *)clsQuestCheck__GetEventQuestIdListPlayable(this, eventId, v19);
  v28 = System_String__Join_int_(
          (System_String_o *)StringLiteral_863/*","*/,
          v20,
          (const MethodInfo_2FB5F54 *)Method_System_String_Join_int___);
  if ( !byte_4B12DC4 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v21, v22);
    byte_4B12DC4 = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v21);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v30 = (PartyOrganizationUtility_o *)&v29->static_fields->_ClearEventQuestIds_k__BackingField;
  v30->klass = (PartyOrganizationUtility_c *)v28;
  sub_1BCA784(v30, (int64_t)v28, v22, v23, v24, v25, v26, v27);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t Instance; // x0
  __int64 v13; // x1
  UserItemMaster_o *v14; // x22
  int32_t targetId; // w23
  int32_t num; // w22
  bool v17; // w8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B12D14 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, is_release, qrd);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    byte_4B12D14 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !qrd )
    goto LABEL_13;
  v14 = (UserItemMaster_o *)Instance;
  targetId = qrd->fields.targetId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v14 )
    goto LABEL_13;
  Instance = UserItemMaster__TryGetEntity(v14, &entity, Instance, targetId, 0LL);
  if ( (Instance & 1) == 0 )
  {
    v17 = 1;
    goto LABEL_12;
  }
  if ( !entity )
LABEL_13:
    sub_1BCAA3C(Instance, v13);
  num = entity->fields.num;
  v17 = num < QuestReleaseEntity__getValueInt(qrd, 0LL);
LABEL_12:
  *is_release = (v17 ^ itemGet) & 1;
}


bool __fastcall clsQuestCheck__isPlayQuestStartAction(clsQuestCheck_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalPramsManager_c *v5; // x0
  int32_t WarId_k__BackingField; // w20
  int32_t QuestId_k__BackingField; // w19
  __int64 v8; // x1

  if ( (byte_4B12D24 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptManager_TypeInfo, method, v2);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v3, v4);
    byte_4B12D24 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B12DC6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B12DC6 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v5 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v5->static_fields->_WarId_k__BackingField;
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4B12DC3 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5, method);
    v5 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v5->static_fields->_QuestId_k__BackingField;
  if ( !clsQuestCheck__mfCheck_IsQuestNew((clsQuestCheck_o *)v5, QuestId_k__BackingField, v2) )
    return 0;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v8);
  return ScriptManager__isPlayQuestStart(WarId_k__BackingField, QuestId_k__BackingField, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__mfCheck_IsQuestNew(clsQuestCheck_o *this, int32_t qid, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B12D15 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&qid, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B12D15 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  Instance = UserQuestMaster__TryGetEntity((UserQuestMaster_o *)MasterData_object, &entity, Instance, qid, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.challengeNum == 0;
LABEL_12:
    sub_1BCAA3C(Instance, v9);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B12D16 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&qid, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B12D16 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  if ( UserQuestMaster__TryGetEntity((UserQuestMaster_o *)MasterData_object, &entity, (int64_t)Instance, qid, 0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserQuestEntity__getQuestPhase(entity, 0LL);
LABEL_12:
    sub_1BCAA3C(Instance, v9);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  bool v12; // w8
  bool result; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B12D12 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&qid, method);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B12D12 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               qid,
                               (const MethodInfo_31B2E94 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 1;
  if ( !entity )
LABEL_12:
    sub_1BCAA3C(Instance, v10);
  if ( (HIDWORD(entity[5].klass) | 4) != 5 )
    return 0;
  v12 = clsQuestCheck__IsQuestClear(this, qid, 0, v11);
  result = 0;
  if ( v12 )
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  const MethodInfo *v62; // x2
  __int64 v63; // x1
  int64_t Master_object; // x0
  __int64 v65; // x1
  _BOOL8 IsShop; // x0
  const MethodInfo *v67; // x2
  __int64 v68; // x1
  __int64 v69; // x1
  Il2CppObject *v70; // x23
  __int64 v72; // x1
  clsQuestCheck_Fields *p_fields; // x23
  int32_t UseDiceSpotId; // w24
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  System_Collections_Generic_List_T__o *qrs; // x24
  clsQuestCheck___c_c *v79; // x0
  System_Func_object__bool__o *_9__5_0; // x25
  Il2CppObject *v81; // x26
  struct clsQuestCheck___c_StaticFields *static_fields; // x0
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  struct BalanceConfig_StaticFields *v89; // x8
  QuestEntity_o *Mine; // x0
  UserEventQuestCooltimeMaster_o *v91; // x24
  UserEventQuestCooltimeEntity_o *v92; // x0
  UserEventQuestCooltimeEntity_o *v93; // x24
  int64_t Time; // x0
  int64_t clearedAt; // x26
  int64_t v96; // x25
  int32_t v97; // w2
  int v98; // w8
  __int64 v99; // x2
  __int64 v100; // x3
  struct System_Collections_Generic_List_QuestReleaseEntity__o *cQuestReleaseListP; // x23
  System_Comparison_T__o *v102; // x24
  Il2CppObject *v103; // x25
  struct clsQuestCheck___c_StaticFields *v104; // x0
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  __int64 v111; // x1
  Il2CppObject *v112; // x23
  const MethodInfo *v113; // x4
  QuestReleaseEntity_o *current; // x22
  _BOOL8 HasStatus; // x0
  __int64 v116; // x1
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  int v123; // w19
  int32_t klass; // w24
  __int64 v125; // x1
  __int64 v126; // x2
  __int64 v127; // x3
  System_Collections_Generic_IEnumerable_T__o *v128; // x25
  System_Collections_Generic_List_object__o *v129; // x24
  __int64 v130; // x1
  const MethodInfo *v131; // x2
  BalanceConfig_c *v132; // x0
  __int64 v133; // x1
  const MethodInfo *v134; // x2
  BalanceConfig_c *v135; // x0
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  System_Collections_Generic_List_Enumerator_object__o v142; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v143; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *v144; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF
  UserQuestEntity_o *v146; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_4B12D08 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&questId, questReleaseNG);
    sub_1BCA7E0(&Method_BasicHelper_Any_QuestReleaseEntity___, v12, v13);
    sub_1BCA7E0(&System_Comparison_QuestReleaseEntity__TypeInfo, v14, v15);
    sub_1BCA7E0(&CondType_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventDetailMaster___, v18, v19);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestReleaseMaster___, v20, v21);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___, v22, v23);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserQuestMaster___, v24, v25);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarMaster___, v26, v27);
    sub_1BCA7E0(&DataManager_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v30, v31);
    sub_1BCA7E0(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v36, v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v38, v39);
    sub_1BCA7E0(&System_Func_QuestReleaseEntity__bool__TypeInfo, v40, v41);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__, v42, v43);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__, v44, v45);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v46, v47);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__, v48, v49);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___76792344, v50, v51);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v52, v53);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v54, v55);
    sub_1BCA7E0(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__, v56, v57);
    sub_1BCA7E0(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__, v58, v59);
    sub_1BCA7E0(&clsQuestCheck___c_TypeInfo, v60, v61);
    byte_4B12D08 = 1;
  }
  v144 = 0LL;
  entity = 0LL;
  memset(&v143, 0, sizeof(v143));
  *questReleaseNG = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)questReleaseNG,
    0LL,
    (int64_t)questReleaseNG,
    (int32_t)questInfo,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, v62) )
    return 0;
  v146 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v63);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarMaster___);
  if ( !questInfo || !Master_object )
    goto LABEL_98;
  IsShop = DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             questInfo->fields.warId,
             (const MethodInfo_31B2E94 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( IsShop )
  {
    Master_object = (int64_t)entity;
    if ( !entity )
      goto LABEL_98;
    IsShop = WarEntity__IsShop((WarEntity_o *)entity, 0LL);
    if ( !IsShop )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v68);
      v70 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v69);
      Master_object = NetworkManager__get_UserId(0LL);
      if ( !v70 )
        goto LABEL_98;
      IsShop = UserQuestMaster__TryGetEntity((UserQuestMaster_o *)v70, &v146, Master_object, questId, 0LL);
      if ( IsShop )
      {
        Master_object = (int64_t)v146;
        if ( !v146 )
          goto LABEL_98;
        IsShop = UserQuestEntity__IsNotExpired(v146, 0LL);
        if ( IsShop )
          return 1;
      }
    }
  }
  if ( !clsQuestCheck__IsValidQuestRandomGroup((clsQuestCheck_o *)IsShop, questInfo, v67) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v72);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object )
    goto LABEL_98;
  p_fields = &this->fields;
  QuestReleaseMaster__getListByQuestID_40252920((QuestReleaseMaster_o *)Master_object, questId, &this->fields.qrs, 0LL);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !entity || !Master_object )
    goto LABEL_98;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &v144,
         (int32_t)entity[6].klass,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Master_object = (int64_t)v144;
    if ( !v144 )
      goto LABEL_98;
    if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v144, 0LL) )
    {
      Master_object = (int64_t)v144;
      if ( !v144 )
        goto LABEL_98;
      UseDiceSpotId = EventDetailEntity__GetUseDiceSpotId((EventDetailEntity_o *)v144, 0LL);
      if ( UseDiceSpotId == MapControl_QuestInfo__GetSpotID(questInfo, 0LL)
        && MapControl_QuestInfo__GetQuestType(questInfo, 0LL) == 1 )
      {
        qrs = (System_Collections_Generic_List_T__o *)p_fields->qrs;
        v79 = clsQuestCheck___c_TypeInfo;
        if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo, v75);
          v79 = clsQuestCheck___c_TypeInfo;
        }
        _9__5_0 = (System_Func_object__bool__o *)v79->static_fields->__9__5_0;
        if ( !_9__5_0 )
        {
          if ( !v79->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v79, v75);
            v79 = clsQuestCheck___c_TypeInfo;
          }
          v81 = (Il2CppObject *)v79->static_fields->__9;
          _9__5_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                     System_Func_QuestReleaseEntity__bool__TypeInfo,
                                                     v75,
                                                     v76,
                                                     v77);
          System_Func_object__bool____ctor(
            _9__5_0,
            v81,
            Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__,
            0LL);
          static_fields = clsQuestCheck___c_TypeInfo->static_fields;
          static_fields->__9__5_0 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__5_0;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&static_fields->__9__5_0,
            (int64_t)_9__5_0,
            v83,
            v84,
            v85,
            v86,
            v87,
            v88);
        }
        if ( !BasicHelper__Any_object_(
                qrs,
                (System_Func_T__bool__o *)_9__5_0,
                (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_QuestReleaseEntity___) )
        {
          Master_object = (int64_t)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v65);
            Master_object = (int64_t)BalanceConfig_TypeInfo;
          }
          v89 = *(struct BalanceConfig_StaticFields **)(Master_object + 184);
          if ( v89->EventBoardGameNextBoardQuestId != questId )
          {
            if ( !*(_DWORD *)(Master_object + 224) )
            {
              j_il2cpp_runtime_class_init_0(Master_object, v65);
              v89 = BalanceConfig_TypeInfo->static_fields;
            }
            if ( v89->EventBoardGameNextRoundQuestId != questId )
            {
              if ( !entity )
                goto LABEL_98;
              klass = (int32_t)entity[6].klass;
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v65);
              if ( CondType__IsUserEventStatus(klass, 7, 0LL) )
                return 0;
              v128 = (System_Collections_Generic_IEnumerable_T__o *)p_fields->qrs;
              v129 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                    System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                                    v125,
                                                                    v126,
                                                                    v127);
              System_Collections_Generic_List_object____ctor_56235344(
                v129,
                v128,
                (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___76792344);
              v132 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v130);
                v132 = BalanceConfig_TypeInfo;
              }
              if ( clsQuestCheck__CheckQuestPlayableNow(this, v132->static_fields->EventBoardGameNextBoardQuestId, v131) )
                return 0;
              v135 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v133);
                v135 = BalanceConfig_TypeInfo;
              }
              if ( clsQuestCheck__CheckQuestPlayableNow(this, v135->static_fields->EventBoardGameNextRoundQuestId, v134) )
                return 0;
              p_fields->qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v129;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&this->fields,
                (int64_t)v129,
                v136,
                v137,
                v138,
                v139,
                v140,
                v141);
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
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v65);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___);
    if ( !questInfo->fields._WarInfo_k__BackingField )
      goto LABEL_98;
    v91 = (UserEventQuestCooltimeMaster_o *)Master_object;
    Master_object = MapControl_WarInfo__GetEventId(questInfo->fields._WarInfo_k__BackingField, 0LL);
    if ( !v91 )
      goto LABEL_98;
    v92 = UserEventQuestCooltimeMaster__getEntity(v91, Master_object, questInfo->fields.questId, 1, 0LL);
    if ( v92 )
    {
      v93 = v92;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v65);
      Time = NetworkManager__getTime(0LL);
      clearedAt = v93->fields.clearedAt;
      v96 = Time;
      Master_object = (int64_t)UserEventQuestCooltimeEntity__GetMasterEntity(v93, 0LL);
      if ( !Master_object )
        goto LABEL_98;
      if ( v96 < clearedAt + *(int *)(Master_object + 28) )
        return 0;
    }
  }
  if ( !p_fields->qrs )
    return 0;
  Master_object = (int64_t)this->fields.cQuestReleaseListP;
  if ( !Master_object )
    goto LABEL_98;
  v97 = *(_DWORD *)(Master_object + 24);
  v98 = *(_DWORD *)(Master_object + 28) + 1;
  *(_DWORD *)(Master_object + 24) = 0;
  *(_DWORD *)(Master_object + 28) = v98;
  if ( v97 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(Master_object + 16), 0, v97, 0LL);
    Master_object = (int64_t)this->fields.cQuestReleaseListP;
    if ( !Master_object )
      goto LABEL_98;
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Master_object,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.qrs,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__);
  cQuestReleaseListP = this->fields.cQuestReleaseListP;
  Master_object = (int64_t)clsQuestCheck___c_TypeInfo;
  if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo, v65);
    Master_object = (int64_t)clsQuestCheck___c_TypeInfo;
  }
  v102 = *(System_Comparison_T__o **)(*(_QWORD *)(Master_object + 184) + 16LL);
  if ( !v102 )
  {
    if ( !*(_DWORD *)(Master_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_object, v65);
      Master_object = (int64_t)clsQuestCheck___c_TypeInfo;
    }
    v103 = **(Il2CppObject ***)(Master_object + 184);
    v102 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_QuestReleaseEntity__TypeInfo, v65, v99, v100);
    System_Comparison_object____ctor(
      v102,
      v103,
      Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__,
      0LL);
    v104 = clsQuestCheck___c_TypeInfo->static_fields;
    v104->__9__5_1 = (struct System_Comparison_QuestReleaseEntity__o *)v102;
    sub_1BCA784((PartyOrganizationUtility_o *)&v104->__9__5_1, (int64_t)v102, v105, v106, v107, v108, v109, v110);
  }
  if ( !cQuestReleaseListP )
    goto LABEL_98;
  System_Collections_Generic_List_object___Sort_56244000(
    (System_Collections_Generic_List_object__o *)cQuestReleaseListP,
    v102,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  if ( v146 )
    goto LABEL_74;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v65);
  v112 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v111);
  Master_object = NetworkManager__get_UserId(0LL);
  if ( !v112 )
LABEL_98:
    sub_1BCAA3C(Master_object, v65);
  UserQuestMaster__TryGetEntity((UserQuestMaster_o *)v112, &v146, Master_object, questId, 0LL);
LABEL_74:
  Master_object = (int64_t)this->fields.cQuestReleaseListP;
  if ( !Master_object )
    goto LABEL_98;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v142,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v143 = v142;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v143,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
  {
    current = (QuestReleaseEntity_o *)v143.fields._current;
    if ( !v146 )
      goto LABEL_81;
    HasStatus = UserQuestEntity__HasStatus(v146, 8, 0LL);
    if ( !HasStatus )
      goto LABEL_81;
    if ( !current )
      sub_1BCAA3C(HasStatus, v116);
    if ( current->fields.type != 12 )
    {
LABEL_81:
      if ( !clsQuestCheck__IsQuestRelease_34164432(this, current, -1, questInfo, v113) )
      {
        *questReleaseNG = current;
        sub_1BCA784((PartyOrganizationUtility_o *)questReleaseNG, (int64_t)current, v117, v118, v119, v120, v121, v122);
        v123 = 17;
        goto LABEL_84;
      }
    }
  }
  v123 = 18;
LABEL_84:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v143,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v123 != 17;
}


void __fastcall clsQuestCheck___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12D2B & 1) == 0 )
  {
    sub_1BCA7E0(&clsQuestCheck___c_TypeInfo, v1, v2);
    byte_4B12D2B = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(clsQuestCheck___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  clsQuestCheck___c_TypeInfo->static_fields->__9 = (struct clsQuestCheck___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)clsQuestCheck___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  Il2CppObject *Instance; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_o *v18; // x21

  if ( (byte_4B12D2D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&result, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_clsQuestCheck___c__DisplayClass41_1__CheckQuestPlayable_b__5__, v7, v8);
    sub_1BCA7E0(&clsQuestCheck___c__DisplayClass41_1_TypeInfo, v9, v10);
    byte_4B12D2D = 1;
  }
  v11 = sub_1BCAA2C(clsQuestCheck___c__DisplayClass41_1_TypeInfo, *(_QWORD *)&result, method, v3);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v11,
          Method_clsQuestCheck___c__DisplayClass41_1__CheckQuestPlayable_b__5__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(v12, v13);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_1(
        clsQuestCheck___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  Il2CppObject *Instance; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_o *v18; // x21

  if ( (byte_4B12D2E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&result, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_clsQuestCheck___c__DisplayClass41_2__CheckQuestPlayable_b__6__, v7, v8);
    sub_1BCA7E0(&clsQuestCheck___c__DisplayClass41_2_TypeInfo, v9, v10);
    byte_4B12D2E = 1;
  }
  v11 = sub_1BCAA2C(clsQuestCheck___c__DisplayClass41_2_TypeInfo, *(_QWORD *)&result, method, v3);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v11,
          Method_clsQuestCheck___c__DisplayClass41_2__CheckQuestPlayable_b__6__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(v12, v13);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v18, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_11(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B12D30 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3, v4);
    byte_4B12D30 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2EFC554 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_13(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B12D31 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3, v4);
    byte_4B12D31 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2EFC554 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_2(
        clsQuestCheck___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B12D32 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B12D32 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_3(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B12D2C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B12D2C = 1;
  }
  TopLoginRequest__ResetAccesTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_4(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_7(
        clsQuestCheck___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  Il2CppObject *Instance; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_o *v18; // x21

  if ( (byte_4B12D2F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&result, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_clsQuestCheck___c__DisplayClass41_3__CheckQuestPlayable_b__8__, v7, v8);
    sub_1BCA7E0(&clsQuestCheck___c__DisplayClass41_3_TypeInfo, v9, v10);
    byte_4B12D2F = 1;
  }
  v11 = sub_1BCAA2C(clsQuestCheck___c__DisplayClass41_3_TypeInfo, *(_QWORD *)&result, method, v3);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v11,
          Method_clsQuestCheck___c__DisplayClass41_3__CheckQuestPlayable_b__8__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(v12, v13);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v18, 0LL);
}


bool __fastcall clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_0(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1BCAA3C(this, 0LL);
  return n->fields.type == 118;
}


int32_t __fastcall clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_1(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *a,
        QuestReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCAA3C(this, a);
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
    sub_1BCAA3C(this, n);
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
    sub_1BCAA3C(this, n);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall clsQuestCheck___c__DisplayClass41_0___CheckQuestPlayable_b__10(
        clsQuestCheck___c__DisplayClass41_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, *(_QWORD *)&result);
  clsQuestCheck__RecoverItemListDialogCallback(
    this->fields.__4__this,
    this->fields.questInfo,
    this->fields.srcEndTime,
    result,
    this->fields.boostId,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall clsQuestCheck___c__DisplayClass41_0___CheckQuestPlayable_b__12(
        clsQuestCheck___c__DisplayClass41_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, *(_QWORD *)&result);
  clsQuestCheck__RecoverItemListDialogCallback(
    this->fields.__4__this,
    this->fields.questInfo,
    this->fields.srcEndTime,
    result,
    this->fields.boostId,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall clsQuestCheck___c__DisplayClass41_0___CheckQuestPlayable_b__9(
        clsQuestCheck___c__DisplayClass41_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, *(_QWORD *)&result);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  SceneJumpInfo_o *v15; // x20
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  int32_t v18; // w1
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  Il2CppObject *v22; // x3

  if ( (byte_4B12D33 & 1) == 0 )
  {
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&StringLiteral_12744/*"SellServant"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_12781/*"ServantCombine"*/, v8, v9);
    byte_4B12D33 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v15 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v19, v20, v21);
      SceneJumpInfo___ctor_39380884(v15, (System_String_o *)StringLiteral_12744/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v18 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1BCAA3C(v16, v17);
    case 1:
      v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v16 )
      {
        v18 = 71;
        v22 = 0LL;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v15 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v12, v13, v14);
      SceneJumpInfo___ctor_39380796(v15, (System_String_o *)StringLiteral_12781/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v18 = 32;
LABEL_10:
        v16 = Instance;
        v22 = (Il2CppObject *)v15;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v16, v18, 1, v22, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  SceneJumpInfo_o *v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w1
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3

  if ( (byte_4B12D34 & 1) == 0 )
  {
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&StringLiteral_12785/*"ServantEquipList"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_12744/*"SellServant"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_12784/*"ServantEQCombine"*/, v10, v11);
    byte_4B12D34 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v17 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v21, v22, v23);
      SceneJumpInfo___ctor_39380884(v17, (System_String_o *)StringLiteral_12744/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v20 = 22;
        goto LABEL_12;
      }
LABEL_14:
      sub_1BCAA3C(v18, v19);
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v17 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v24, v25, v26);
      SceneJumpInfo___ctor_39380796(v17, (System_String_o *)StringLiteral_12785/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v20 = 71;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v17 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v14, v15, v16);
      SceneJumpInfo___ctor_39380796(v17, (System_String_o *)StringLiteral_12784/*"ServantEQCombine"*/, 0LL);
      if ( Instance )
      {
        v20 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v20, 1, (Il2CppObject *)v17, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  SceneJumpInfo_o *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4B12D35 & 1) == 0 )
  {
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&StringLiteral_12744/*"SellServant"*/, v6, v7);
    byte_4B12D35 = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v12 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v9, v10, v11);
    SceneJumpInfo___ctor_39380884(v12, (System_String_o *)StringLiteral_12744/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_1BCAA3C(v13, v14);
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v12, 0LL);
  }
}