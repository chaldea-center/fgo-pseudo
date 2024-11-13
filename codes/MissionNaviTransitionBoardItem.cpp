void __fastcall MissionNaviTransitionBoardItem___ctor(
        MissionNaviTransitionBoardItem_o *this,
        int32_t index,
        System_String_o *iconName,
        System_String_o *name,
        int32_t naviBoardType,
        int32_t questId,
        bool isNotDisplayQuestInfo,
        bool isLocked,
        System_String_o *closedMessage,
        System_Action_o *naviAction,
        const MethodInfo *method)
{
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7

  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields._IconName_k__BackingField = iconName;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._IconName_k__BackingField,
    (int64_t)iconName,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._Name_k__BackingField = name;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Name_k__BackingField,
    (int64_t)name,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields._BoardType_k__BackingField = naviBoardType;
  this->fields._QuestId_k__BackingField = questId;
  this->fields._IsNotDisplayQuestInfo_k__BackingField = isNotDisplayQuestInfo;
  this->fields._IsLocked_k__BackingField = isLocked;
  this->fields._ClosedMessage_k__BackingField = closedMessage;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ClosedMessage_k__BackingField,
    (int64_t)closedMessage,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields._NaviAction_k__BackingField = naviAction;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._NaviAction_k__BackingField,
    (int64_t)naviAction,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
}


System_Action_o *__fastcall MissionNaviTransitionBoardItem__GetNaviQuestTransitionAction(
        MissionNaviQuestEntity_o *naviQuestEntity,
        MapControl_QuestInfo_o *tempQuestInfo,
        MissionListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x8
  System_Action_o *v35; // x19

  if ( (byte_4B19425 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, tempQuestInfo, item);
    sub_1BCA7E0(
      &Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__,
      v7,
      v8);
    sub_1BCA7E0(&MissionNaviTransitionBoardItem___c__DisplayClass43_0_TypeInfo, v9, v10);
    byte_4B19425 = 1;
  }
  v11 = sub_1BCAA2C(MissionNaviTransitionBoardItem___c__DisplayClass43_0_TypeInfo, tempQuestInfo, item, method);
  MissionNaviTransitionBoardItem___c__DisplayClass43_0___ctor(
    (MissionNaviTransitionBoardItem___c__DisplayClass43_0_o *)v11,
    0LL);
  if ( !v11
    || (*(_QWORD *)(v11 + 16) = naviQuestEntity,
        sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)naviQuestEntity, v14, v15, v16, v17, v18, v19),
        *(_QWORD *)(v11 + 24) = tempQuestInfo,
        sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)tempQuestInfo, v20, v21, v22, v23, v24, v25),
        *(_QWORD *)(v11 + 32) = item,
        sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 32), (int64_t)item, v26, v27, v28, v29, v30, v31),
        (v34 = *(_QWORD *)(v11 + 16)) == 0) )
  {
    sub_1BCAA3C(v12, v13);
  }
  *(_DWORD *)(v11 + 40) = *(_DWORD *)(v34 + 20);
  v35 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v32, v33);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v11,
    (intptr_t)Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__,
    0LL);
  return v35;
}


System_Action_o *__fastcall MissionNaviTransitionBoardItem__GetNaviSceneTransitionAction(
        System_String_o *sceneDetail,
        System_Action_o *transitionSceneAction,
        MissionListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Action_o *v35; // x19

  if ( (byte_4B19427 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, transitionSceneAction, item);
    sub_1BCA7E0(
      &Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__,
      v7,
      v8);
    sub_1BCA7E0(&MissionNaviTransitionBoardItem___c__DisplayClass45_0_TypeInfo, v9, v10);
    byte_4B19427 = 1;
  }
  v11 = sub_1BCAA2C(MissionNaviTransitionBoardItem___c__DisplayClass45_0_TypeInfo, transitionSceneAction, item, method);
  MissionNaviTransitionBoardItem___c__DisplayClass45_0___ctor(
    (MissionNaviTransitionBoardItem___c__DisplayClass45_0_o *)v11,
    0LL);
  if ( !v11 )
    sub_1BCAA3C(v12, v13);
  *(_QWORD *)(v11 + 16) = sceneDetail;
  sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)sceneDetail, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = item;
  sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)item, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v11 + 32) = transitionSceneAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 32), (int64_t)transitionSceneAction, v26, v27, v28, v29, v30, v31);
  v35 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v32, v33, v34);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v11,
    (intptr_t)Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__,
    0LL);
  return v35;
}


System_Action_o *__fastcall MissionNaviTransitionBoardItem__GetNaviWarOrSpotTransitionAction(
        MissionNaviTransitionEntity_o *naviTransitionEntity,
        MissionListViewItem_o *item,
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
  __int64 v14; // x20
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  MapControl_WarInfo_o *LatestProgressWarInfo; // x0
  MapControl_SpotInfo_o *SpotInfo; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  MapControl_SpotInfo_o *v37; // x0
  SpotEntity_o *Mine; // x1
  int32_t missionTransitionType; // w8
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Action_o *v43; // x19

  if ( (byte_4B19426 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, item, method);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v6, v7);
    sub_1BCA7E0(
      &Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__,
      v8,
      v9);
    sub_1BCA7E0(&MissionNaviTransitionBoardItem___c__DisplayClass44_0_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_8628/*"MAIN_SCENARIO"*/, v12, v13);
    byte_4B19426 = 1;
  }
  v14 = sub_1BCAA2C(MissionNaviTransitionBoardItem___c__DisplayClass44_0_TypeInfo, item, method, v3);
  MissionNaviTransitionBoardItem___c__DisplayClass44_0___ctor(
    (MissionNaviTransitionBoardItem___c__DisplayClass44_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_15;
  *(_QWORD *)(v14 + 40) = item;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 40), (int64_t)item, v17, v18, v19, v20, v21, v22);
  *(_DWORD *)(v14 + 36) = 0;
  *(_BYTE *)(v14 + 64) = 0;
  if ( !naviTransitionEntity )
    goto LABEL_15;
  if ( System_String__op_Equality(
         naviTransitionEntity->fields.transitionParam,
         (System_String_o *)StringLiteral_8628/*"MAIN_SCENARIO"*/,
         0LL) )
  {
    *(_BYTE *)(v14 + 64) = 1;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    LatestProgressWarInfo = QuestTree__GetLatestProgressWarInfo((QuestTree_o *)Instance, 0LL);
    if ( LatestProgressWarInfo )
      *(_DWORD *)(v14 + 36) = LatestProgressWarInfo->fields.warId;
  }
  else
  {
    System_Int32__TryParse(naviTransitionEntity->fields.transitionParam, (int32_t *)(v14 + 36), 0LL);
  }
  System_Int32__TryParse(naviTransitionEntity->fields.transitionParam, (int32_t *)(v14 + 48), 0LL);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_1BCAA3C(Instance, v16);
  SpotInfo = QuestTree__GetSpotInfo((QuestTree_o *)Instance, *(_DWORD *)(v14 + 48), 0LL);
  *(_QWORD *)(v14 + 24) = SpotInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)SpotInfo, v25, v26, v27, v28, v29, v30);
  v37 = *(MapControl_SpotInfo_o **)(v14 + 24);
  if ( v37 )
    Mine = MapControl_SpotInfo__GetMine(v37, 0LL);
  else
    Mine = 0LL;
  *(_QWORD *)(v14 + 56) = Mine;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 56), (int64_t)Mine, v31, v32, v33, v34, v35, v36);
  missionTransitionType = naviTransitionEntity->fields.missionTransitionType;
  *(_BYTE *)(v14 + 16) = missionTransitionType == 3;
  *(_BYTE *)(v14 + 32) = missionTransitionType == 2;
  v43 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v40, v41, v42);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v14,
    (intptr_t)Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__,
    0LL);
  return v43;
}


MissionNaviTransitionBoardItem_o *__fastcall MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem(
        MissionNaviTransitionEntity_o *missionNaviTransitionEnt,
        MissionListViewItem_o *item,
        const MethodInfo *method)
{
  System_String_o *transitionParam; // x21
  const MethodInfo *v6; // x5
  System_String_o *v8; // [xsp+0h] [xbp-30h] BYREF
  System_String_o *challengeNaviName; // [xsp+8h] [xbp-28h] BYREF

  v8 = 0LL;
  challengeNaviName = 0LL;
  if ( !missionNaviTransitionEnt )
    sub_1BCAA3C(0LL, item);
  transitionParam = missionNaviTransitionEnt->fields.transitionParam;
  MissionNaviTransitionEntity__TryGetChallengeNaviName(missionNaviTransitionEnt, &challengeNaviName, 0LL);
  MissionNaviTransitionEntity__TryGetChallengeIconName(missionNaviTransitionEnt, &v8, 0LL);
  return MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem_44932976(
           transitionParam,
           missionNaviTransitionEnt->fields.closedMessageId,
           challengeNaviName,
           v8,
           item,
           v6);
}


// local variable allocation has failed, the output may be wrong!
MissionNaviTransitionBoardItem_o *__fastcall MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem_44932976(
        System_String_o *sceneDetail,
        int32_t closedMessageId,
        System_String_o *naviName,
        System_String_o *iconName,
        MissionListViewItem_o *item,
        const MethodInfo *method)
{
  System_String_o *v6; // x19
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
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x1
  __int64 v126; // x2
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x1
  __int64 v130; // x2
  __int64 v131; // x1
  __int64 v132; // x2
  __int64 v133; // x1
  __int64 v134; // x2
  __int64 v135; // x1
  __int64 v136; // x2
  __int64 v137; // x1
  __int64 v138; // x2
  __int64 v139; // x1
  __int64 v140; // x2
  __int64 v141; // x1
  __int64 v142; // x2
  int64_t Master_object; // x0
  System_String_o *closedMessage; // x28
  System_Action_o *NaviSceneTransitionAction; // x24
  Il2CppObject *v146; // x25
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int64_t v148; // x2
  int32_t v149; // w3
  System_String_o *v150; // x4
  BattleSetupInfo_o *v151; // x5
  FollowerInfo_o *v152; // x6
  PartyListViewItem_o *v153; // x7
  __int64 v154; // x2
  __int64 v155; // x3
  int64_t v156; // x25
  System_String_o *v157; // x27
  __int64 v158; // x26
  __int64 v159; // x1
  __int64 v160; // x2
  __int64 v161; // x3
  MissionNaviTransitionBoardItem___c__DisplayClass42_1_o *v162; // x26
  int32_t *p_eventId; // x27
  __int64 v164; // x1
  Il2CppObject *v165; // x24
  __int64 v166; // x1
  __int64 v167; // x2
  __int64 v168; // x3
  __int64 v169; // x24
  __int64 v170; // x1
  __int64 v171; // x2
  __int64 v172; // x3
  int32_t v173; // w25
  __int64 v174; // x1
  __int64 v175; // x2
  __int64 v176; // x3
  char v177; // w23
  __int64 v178; // x29
  System_String_o *v179; // x25
  __int64 v180; // x1
  BalanceConfig_c *v181; // x0
  int32_t ClassBoardReleaseQuestId; // w25
  __int64 v183; // x1
  bool IsQuestClear_38310172; // w26
  System_String_o *v185; // x0
  __int64 v186; // x1
  __int64 v187; // x2
  const MethodInfo *v188; // x3
  MissionNaviTransitionBoardItem___c_c *v189; // x8
  System_String_o *v190; // x25
  System_Action_o *_9__42_1; // x24
  Il2CppObject *v192; // x27
  struct MissionNaviTransitionBoardItem___c_StaticFields *v193; // x0
  int64_t v194; // x2
  int32_t v195; // w3
  System_String_o *v196; // x4
  BattleSetupInfo_o *v197; // x5
  FollowerInfo_o *v198; // x6
  PartyListViewItem_o *v199; // x7
  System_String_o *v200; // x0
  __int64 v201; // x24
  int64_t v202; // x2
  int32_t v203; // w3
  System_String_o *v204; // x4
  BattleSetupInfo_o *v205; // x5
  FollowerInfo_o *v206; // x6
  PartyListViewItem_o *v207; // x7
  System_String_o *v208; // x25
  __int64 v209; // x1
  __int64 v210; // x2
  __int64 v211; // x3
  SceneJumpInfo_o *v212; // x27
  int64_t v213; // x2
  int32_t v214; // w3
  System_String_o *v215; // x4
  BattleSetupInfo_o *v216; // x5
  FollowerInfo_o *v217; // x6
  PartyListViewItem_o *v218; // x7
  __int64 v219; // x1
  __int64 *v220; // x22
  __int64 *v221; // x8
  __int64 v222; // x1
  __int64 v223; // x2
  __int64 v224; // x3
  System_String_o *v225; // x0
  __int64 v226; // x1
  __int64 v227; // x2
  const MethodInfo *v228; // x3
  MissionNaviTransitionBoardItem___c_c *v229; // x8
  System_Action_o *_9__42_2; // x24
  Il2CppObject *v231; // x26
  int64_t v232; // x2
  int32_t v233; // w3
  System_String_o *v234; // x4
  BattleSetupInfo_o *v235; // x5
  FollowerInfo_o *v236; // x6
  PartyListViewItem_o *v237; // x7
  struct MissionNaviTransitionBoardItem___c_StaticFields *v238; // x0
  PartyOrganizationUtility_o *p__9__42_2; // x0
  __int64 v240; // x1
  __int64 v241; // x1
  __int64 v242; // x2
  __int64 v243; // x3
  int32_t v244; // w24
  SceneJumpInfo_o *v245; // x25
  int64_t v246; // x2
  int32_t v247; // w3
  System_String_o *v248; // x4
  BattleSetupInfo_o *v249; // x5
  FollowerInfo_o *v250; // x6
  PartyListViewItem_o *v251; // x7
  __int64 v252; // x1
  __int64 v253; // x2
  __int64 v254; // x3
  __int64 v255; // x1
  __int64 v256; // x1
  __int64 v257; // x1
  System_String_o *v258; // x0
  __int64 v259; // x1
  __int64 v260; // x2
  MissionNaviTransitionBoardItem___c_c *v261; // x8
  Il2CppObject *v262; // x26
  struct MissionNaviTransitionBoardItem___c_StaticFields *v263; // x0
  System_String_o *v264; // x0
  System_Action_o *v265; // x1
  __int64 v266; // x26
  __int64 v267; // x1
  __int64 *v268; // x25
  __int64 v269; // x1
  __int64 v270; // x2
  __int64 v271; // x3
  __int64 v272; // x8
  bool v273; // w0
  __int64 v274; // x1
  __int64 v275; // x2
  __int64 v276; // x3
  System_String_o *v277; // x0
  System_Action_o *v278; // x26
  System_String_o *v279; // x22
  __int64 v280; // x2
  __int64 v281; // x3
  bool v282; // w21
  __int64 v283; // x1
  MissionNaviTransitionBoardItem_o *v284; // x20
  int32_t v286; // w27
  SceneJumpInfo_o *v287; // x26
  int64_t v288; // x2
  int32_t v289; // w3
  System_String_o *v290; // x4
  BattleSetupInfo_o *v291; // x5
  FollowerInfo_o *v292; // x6
  PartyListViewItem_o *v293; // x7
  __int64 v294; // x1
  __int64 v295; // x2
  __int64 v296; // x3
  System_Action_o *v297; // x0
  __int64 *v298; // x8
  System_Action_o *v299; // x27
  Il2CppObject *v300; // x1
  __int64 v301; // x1
  __int64 v302; // x2
  __int64 v303; // x3
  System_Action_o *v304; // x24
  const MethodInfo *v305; // x3
  __int64 v306; // x8
  __int64 v307; // x1
  Il2CppObject *v308; // x22
  System_String_o *v309; // x0
  const MethodInfo *v310; // [xsp+10h] [xbp-A0h]
  Il2CppObject *v313; // [xsp+28h] [xbp-88h] BYREF
  int32_t v314; // [xsp+34h] [xbp-7Ch] BYREF
  Il2CppObject *v315; // [xsp+38h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+40h] [xbp-70h] BYREF
  int32_t result; // [xsp+4Ch] [xbp-64h] BYREF

  v6 = iconName;
  if ( (byte_4B19424 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&closedMessageId, naviName);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v9, v10);
    sub_1BCA7E0(&CondType_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClosedMessageMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventDetailMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ShopMaster___, v21, v22);
    sub_1BCA7E0(&DataManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v25, v26);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v27, v28);
    sub_1BCA7E0(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v29, v30);
    sub_1BCA7E0(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v31, v32);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&MissionNaviTransitionBoardItem_TypeInfo, v35, v36);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v37, v38);
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, v39, v40);
    sub_1BCA7E0(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_0__, v41, v42);
    sub_1BCA7E0(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_1__, v43, v44);
    sub_1BCA7E0(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_2__, v45, v46);
    sub_1BCA7E0(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_4__, v47, v48);
    sub_1BCA7E0(
      &Method_MissionNaviTransitionBoardItem___c__DisplayClass42_0__SetupSceneTransitionBoardItem_b__3__,
      v49,
      v50);
    sub_1BCA7E0(&MissionNaviTransitionBoardItem___c__DisplayClass42_0_TypeInfo, v51, v52);
    sub_1BCA7E0(
      &Method_MissionNaviTransitionBoardItem___c__DisplayClass42_1__SetupSceneTransitionBoardItem_b__5__,
      v53,
      v54);
    sub_1BCA7E0(&MissionNaviTransitionBoardItem___c__DisplayClass42_1_TypeInfo, v55, v56);
    sub_1BCA7E0(
      &Method_MissionNaviTransitionBoardItem___c__DisplayClass42_2__SetupSceneTransitionBoardItem_b__6__,
      v57,
      v58);
    sub_1BCA7E0(&MissionNaviTransitionBoardItem___c__DisplayClass42_2_TypeInfo, v59, v60);
    sub_1BCA7E0(
      &Method_MissionNaviTransitionBoardItem___c__DisplayClass42_3__SetupSceneTransitionBoardItem_b__7__,
      v61,
      v62);
    sub_1BCA7E0(&MissionNaviTransitionBoardItem___c__DisplayClass42_3_TypeInfo, v63, v64);
    sub_1BCA7E0(
      &Method_MissionNaviTransitionBoardItem___c__DisplayClass42_4__SetupSceneTransitionBoardItem_b__8__,
      v65,
      v66);
    sub_1BCA7E0(&MissionNaviTransitionBoardItem___c__DisplayClass42_4_TypeInfo, v67, v68);
    sub_1BCA7E0(&MissionNaviTransitionBoardItem___c_TypeInfo, v69, v70);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_23363/*"servant_eq_combine"*/, v73, v74);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v75, v76);
    sub_1BCA7E0(&StringLiteral_23521/*"shop_event"*/, v77, v78);
    sub_1BCA7E0(&StringLiteral_12800/*"ServantSkillCombine"*/, v79, v80);
    sub_1BCA7E0(&StringLiteral_8795/*"MISSION_NAVI_NOT_OPEN_BOARD"*/, v81, v82);
    sub_1BCA7E0(&StringLiteral_6637/*"FRIEND_POINT"*/, v83, v84);
    sub_1BCA7E0(&StringLiteral_4663/*"Combine"*/, v85, v86);
    sub_1BCA7E0(&StringLiteral_4549/*"ClassBoard"*/, v87, v88);
    sub_1BCA7E0(&StringLiteral_18176/*"class_board"*/, v89, v90);
    sub_1BCA7E0(&StringLiteral_22214/*"my_room"*/, v91, v92);
    sub_1BCA7E0(&StringLiteral_8802/*"MISSION_NAVI_SERVANT_SKILL_COMBINE"*/, v93, v94);
    sub_1BCA7E0(&StringLiteral_23366/*"servant_skill_combine"*/, v95, v96);
    sub_1BCA7E0(&StringLiteral_8800/*"MISSION_NAVI_SERVANT_EQ_COMBINE"*/, v97, v98);
    sub_1BCA7E0(&StringLiteral_6327/*"EventReward"*/, v99, v100);
    sub_1BCA7E0(&StringLiteral_8804/*"MISSION_NAVI_SUMMON_FRIEND_POINT"*/, v101, v102);
    sub_1BCA7E0(&StringLiteral_8789/*"MISSION_NAVI_EVENT_REWARD"*/, v103, v104);
    sub_1BCA7E0(&StringLiteral_8793/*"MISSION_NAVI_MYROOM"*/, v105, v106);
    sub_1BCA7E0(&StringLiteral_23362/*"servant_combine"*/, v107, v108);
    sub_1BCA7E0(&StringLiteral_8801/*"MISSION_NAVI_SERVANT_LIMIT_COUNT_UP"*/, v109, v110);
    sub_1BCA7E0(&StringLiteral_23917/*"summon"*/, v111, v112);
    sub_1BCA7E0(&StringLiteral_8796/*"MISSION_NAVI_NOT_OPEN_CLASS_BOARD_CLOSED_MESSAGE"*/, v113, v114);
    sub_1BCA7E0(&StringLiteral_8799/*"MISSION_NAVI_SERVANT_COMBINE"*/, v115, v116);
    sub_1BCA7E0(&StringLiteral_23365/*"servant_limit_count_up"*/, v117, v118);
    sub_1BCA7E0(&StringLiteral_19835/*"friend"*/, v119, v120);
    sub_1BCA7E0(&StringLiteral_6966/*"Friend"*/, v121, v122);
    sub_1BCA7E0(&StringLiteral_13231/*"Summon"*/, v123, v124);
    sub_1BCA7E0(&StringLiteral_12784/*"ServantEQCombine"*/, v125, v126);
    sub_1BCA7E0(&StringLiteral_12781/*"ServantCombine"*/, v127, v128);
    sub_1BCA7E0(&StringLiteral_9324/*"MyRoom"*/, v129, v130);
    sub_1BCA7E0(&StringLiteral_8781/*"MISSION_NAVI_CLASS_BOARD"*/, v131, v132);
    sub_1BCA7E0(&StringLiteral_12794/*"ServantLimitCountUp"*/, v133, v134);
    sub_1BCA7E0(&StringLiteral_8803/*"MISSION_NAVI_SUMMON"*/, v135, v136);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v137, v138);
    sub_1BCA7E0(&StringLiteral_23920/*"summon_friend"*/, v139, v140);
    sub_1BCA7E0(&StringLiteral_8791/*"MISSION_NAVI_FRIEND_AND_FOLLOW"*/, v141, v142);
    byte_4B19424 = 1;
  }
  Master_object = (int64_t)MissionNaviTransitionBoardItem___c_TypeInfo;
  result = 0;
  v315 = 0LL;
  entity = 0LL;
  v314 = 0;
  v313 = 0LL;
  closedMessage = (System_String_o *)StringLiteral_1/*""*/;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo, *(_QWORD *)&closedMessageId);
    Master_object = (int64_t)MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  NaviSceneTransitionAction = *(System_Action_o **)(*(_QWORD *)(Master_object + 184) + 8LL);
  if ( !NaviSceneTransitionAction )
  {
    if ( !*(_DWORD *)(Master_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_object, *(_QWORD *)&closedMessageId);
      Master_object = (int64_t)MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v146 = **(Il2CppObject ***)(Master_object + 184);
    NaviSceneTransitionAction = (System_Action_o *)sub_1BCAA2C(
                                                     System_Action_TypeInfo,
                                                     *(_QWORD *)&closedMessageId,
                                                     naviName,
                                                     iconName);
    System_Action___ctor(
      NaviSceneTransitionAction,
      v146,
      Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_0__,
      0LL);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__42_0 = NaviSceneTransitionAction;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__42_0,
      (int64_t)NaviSceneTransitionAction,
      v148,
      v149,
      v150,
      v151,
      v152,
      v153);
  }
  if ( !sceneDetail )
    goto LABEL_152;
  Master_object = (int64_t)System_String__Split(sceneDetail, 0x2Fu, 0, 0LL);
  if ( !Master_object )
    goto LABEL_152;
  v156 = Master_object;
  if ( !*(_DWORD *)(Master_object + 24) )
    goto LABEL_153;
  v157 = *(System_String_o **)(Master_object + 32);
  v158 = sub_1BCAA2C(
           MissionNaviTransitionBoardItem___c__DisplayClass42_0_TypeInfo,
           *(_QWORD *)&closedMessageId,
           v154,
           v155);
  MissionNaviTransitionBoardItem___c__DisplayClass42_0___ctor(
    (MissionNaviTransitionBoardItem___c__DisplayClass42_0_o *)v158,
    0LL);
  if ( !System_String__op_Equality(v157, (System_String_o *)StringLiteral_6327/*"EventReward"*/, 0LL) )
  {
    if ( System_String__op_Equality(v157, (System_String_o *)StringLiteral_4663/*"Combine"*/, 0LL) )
    {
      if ( *(int *)(v156 + 24) < 2 )
        goto LABEL_35;
      v201 = sub_1BCAA2C(MissionNaviTransitionBoardItem___c__DisplayClass42_3_TypeInfo, v174, v175, v176);
      MissionNaviTransitionBoardItem___c__DisplayClass42_3___ctor(
        (MissionNaviTransitionBoardItem___c__DisplayClass42_3_o *)v201,
        0LL);
      if ( *(_DWORD *)(v156 + 24) <= 1u )
        goto LABEL_153;
      if ( !v201 )
        goto LABEL_152;
      v208 = *(System_String_o **)(v156 + 40);
      *(_QWORD *)(v201 + 16) = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)(v201 + 16), 0LL, v202, v203, v204, v205, v206, v207);
      v212 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v209, v210, v211);
      SceneJumpInfo___ctor_39380796(v212, v208, 0LL);
      *(_QWORD *)(v201 + 16) = v212;
      sub_1BCA784((PartyOrganizationUtility_o *)(v201 + 16), (int64_t)v212, v213, v214, v215, v216, v217, v218);
      if ( System_String__op_Equality(v208, (System_String_o *)StringLiteral_12781/*"ServantCombine"*/, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v219);
        v220 = &StringLiteral_23362/*"servant_combine"*/;
        v221 = &StringLiteral_8799/*"MISSION_NAVI_SERVANT_COMBINE"*/;
      }
      else if ( System_String__op_Equality(v208, (System_String_o *)StringLiteral_12800/*"ServantSkillCombine"*/, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v240);
        v220 = &StringLiteral_23366/*"servant_skill_combine"*/;
        v221 = &StringLiteral_8802/*"MISSION_NAVI_SERVANT_SKILL_COMBINE"*/;
      }
      else if ( System_String__op_Equality(v208, (System_String_o *)StringLiteral_12784/*"ServantEQCombine"*/, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v256);
        v220 = &StringLiteral_23363/*"servant_eq_combine"*/;
        v221 = &StringLiteral_8800/*"MISSION_NAVI_SERVANT_EQ_COMBINE"*/;
      }
      else
      {
        v273 = System_String__op_Equality(v208, (System_String_o *)StringLiteral_12794/*"ServantLimitCountUp"*/, 0LL);
        v178 = (__int64)closedMessage;
        v179 = closedMessage;
        if ( !v273 )
        {
LABEL_118:
          v278 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v274, v275, v276);
          System_Action___ctor(
            v278,
            (Il2CppObject *)v201,
            Method_MissionNaviTransitionBoardItem___c__DisplayClass42_3__SetupSceneTransitionBoardItem_b__7__,
            0LL);
          v264 = sceneDetail;
          v265 = v278;
          goto LABEL_119;
        }
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v274);
        v220 = &StringLiteral_23365/*"servant_limit_count_up"*/;
        v221 = &StringLiteral_8801/*"MISSION_NAVI_SERVANT_LIMIT_COUNT_UP"*/;
      }
      v277 = LocalizationManager__Get((System_String_o *)*v221, 0LL);
      v178 = *v220;
      v179 = v277;
      goto LABEL_118;
    }
    if ( System_String__op_Equality(v157, (System_String_o *)StringLiteral_4549/*"ClassBoard"*/, 0LL) )
    {
      v181 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v180);
        v181 = BalanceConfig_TypeInfo;
      }
      ClassBoardReleaseQuestId = v181->static_fields->ClassBoardReleaseQuestId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v180);
      IsQuestClear_38310172 = CondType__IsQuestClear_38310172(ClassBoardReleaseQuestId, -1, 0, 0LL);
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( IsQuestClear_38310172 )
        {
LABEL_45:
          v185 = LocalizationManager__Get((System_String_o *)StringLiteral_8781/*"MISSION_NAVI_CLASS_BOARD"*/, 0LL);
          v189 = MissionNaviTransitionBoardItem___c_TypeInfo;
          v190 = v185;
          if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo, v186);
            v189 = MissionNaviTransitionBoardItem___c_TypeInfo;
          }
          _9__42_1 = v189->static_fields->__9__42_1;
          if ( !_9__42_1 )
          {
            if ( !v189->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v189, v186);
              v189 = MissionNaviTransitionBoardItem___c_TypeInfo;
            }
            v192 = (Il2CppObject *)v189->static_fields->__9;
            _9__42_1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v186, v187, v188);
            System_Action___ctor(
              _9__42_1,
              v192,
              Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_1__,
              0LL);
            v193 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
            v193->__9__42_1 = _9__42_1;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v193->__9__42_1,
              (int64_t)_9__42_1,
              v194,
              v195,
              v196,
              v197,
              v198,
              v199);
          }
          NaviSceneTransitionAction = MissionNaviTransitionBoardItem__GetNaviSceneTransitionAction(
                                        sceneDetail,
                                        _9__42_1,
                                        item,
                                        v188);
          v200 = closedMessage;
          closedMessage = v190;
          goto LABEL_83;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v183);
        if ( IsQuestClear_38310172 )
          goto LABEL_45;
      }
      v200 = LocalizationManager__Get((System_String_o *)StringLiteral_8796/*"MISSION_NAVI_NOT_OPEN_CLASS_BOARD_CLOSED_MESSAGE"*/, 0LL);
LABEL_83:
      v179 = closedMessage;
      v177 = !IsQuestClear_38310172;
      closedMessage = v200;
      v178 = StringLiteral_18176/*"class_board"*/;
      goto LABEL_121;
    }
    if ( System_String__op_Equality(v157, (System_String_o *)StringLiteral_13231/*"Summon"*/, 0LL) )
    {
      v178 = StringLiteral_23917/*"summon"*/;
      if ( *(int *)(v156 + 24) >= 2 )
      {
        if ( System_String__op_Equality(*(System_String_o **)(v156 + 40), (System_String_o *)StringLiteral_6637/*"FRIEND_POINT"*/, 0LL) )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v222);
          v225 = LocalizationManager__Get((System_String_o *)StringLiteral_8804/*"MISSION_NAVI_SUMMON_FRIEND_POINT"*/, 0LL);
          v229 = MissionNaviTransitionBoardItem___c_TypeInfo;
          v179 = v225;
          v178 = StringLiteral_23920/*"summon_friend"*/;
          if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo, v226);
            v229 = MissionNaviTransitionBoardItem___c_TypeInfo;
          }
          _9__42_2 = v229->static_fields->__9__42_2;
          if ( _9__42_2 )
            goto LABEL_98;
          if ( !v229->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v229, v226);
            v229 = MissionNaviTransitionBoardItem___c_TypeInfo;
          }
          v231 = (Il2CppObject *)v229->static_fields->__9;
          _9__42_2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v226, v227, v228);
          System_Action___ctor(
            _9__42_2,
            v231,
            Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_2__,
            0LL);
          v238 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
          v238->__9__42_2 = _9__42_2;
          p__9__42_2 = (PartyOrganizationUtility_o *)&v238->__9__42_2;
LABEL_97:
          sub_1BCA784(p__9__42_2, (int64_t)_9__42_2, v232, v233, v234, v235, v236, v237);
LABEL_98:
          v264 = sceneDetail;
          v265 = _9__42_2;
LABEL_119:
          NaviSceneTransitionAction = MissionNaviTransitionBoardItem__GetNaviSceneTransitionAction(
                                        v264,
                                        v265,
                                        item,
                                        v228);
LABEL_120:
          v177 = 0;
          goto LABEL_121;
        }
        if ( *(int *)(v156 + 24) >= 2 )
        {
          v266 = sub_1BCAA2C(MissionNaviTransitionBoardItem___c__DisplayClass42_4_TypeInfo, v222, v223, v224);
          MissionNaviTransitionBoardItem___c__DisplayClass42_4___ctor(
            (MissionNaviTransitionBoardItem___c__DisplayClass42_4_o *)v266,
            0LL);
          if ( *(_DWORD *)(v156 + 24) <= 1u )
            goto LABEL_153;
          if ( !v266 )
            goto LABEL_152;
          System_Int32__TryParse(*(System_String_o **)(v156 + 40), (int32_t *)(v266 + 16), 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v267);
          Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaMaster___);
          if ( !Master_object )
            goto LABEL_152;
          v268 = (__int64 *)(v266 + 24);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 (Il2CppObject **)(v266 + 24),
                 *(_DWORD *)(v266 + 16),
                 (const MethodInfo_31B2E94 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__) )
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v269);
            Master_object = NetworkManager__getTime(0LL);
            v272 = *v268;
            if ( !*v268 )
              goto LABEL_152;
            if ( Master_object >= *(_QWORD *)(v272 + 104) && Master_object <= *(_QWORD *)(v272 + 112) )
            {
              v304 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, *(_QWORD *)&closedMessageId, v270, v271);
              System_Action___ctor(
                v304,
                (Il2CppObject *)v266,
                Method_MissionNaviTransitionBoardItem___c__DisplayClass42_4__SetupSceneTransitionBoardItem_b__8__,
                0LL);
              Master_object = (int64_t)MissionNaviTransitionBoardItem__GetNaviSceneTransitionAction(
                                         sceneDetail,
                                         v304,
                                         item,
                                         v305);
              v306 = *(_QWORD *)(v266 + 24);
              if ( !v306 )
                goto LABEL_152;
              NaviSceneTransitionAction = (System_Action_o *)Master_object;
              Master_object = *(_QWORD *)(v306 + 24);
              if ( !Master_object )
                goto LABEL_152;
              v308 = (Il2CppObject *)System_String__Replace_62420848(
                                       (System_String_o *)Master_object,
                                       (System_String_o *)StringLiteral_43/*"\n"*/,
                                       (System_String_o *)StringLiteral_116/*" "*/,
                                       0LL);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v307);
              v309 = LocalizationManager__Get((System_String_o *)StringLiteral_8803/*"MISSION_NAVI_SUMMON"*/, 0LL);
              v179 = System_String__Format(v309, v308, 0LL);
              goto LABEL_120;
            }
            NaviSceneTransitionAction = 0LL;
            v177 = 1;
            goto LABEL_37;
          }
        }
      }
      v177 = 0;
      goto LABEL_37;
    }
    if ( System_String__op_Equality(v157, (System_String_o *)StringLiteral_6966/*"Friend"*/, 0LL) )
    {
      result = 0;
      v244 = 0;
      v178 = StringLiteral_19835/*"friend"*/;
      if ( *(int *)(v156 + 24) >= 2 )
      {
        System_Int32__TryParse(*(System_String_o **)(v156 + 40), &result, 0LL);
        v244 = result;
      }
      v245 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v241, v242, v243);
      SceneJumpInfo___ctor_39380844(v245, v244, 0LL);
      if ( !v158 )
        goto LABEL_152;
      *(_QWORD *)(v158 + 16) = v245;
      sub_1BCA784((PartyOrganizationUtility_o *)(v158 + 16), (int64_t)v245, v246, v247, v248, v249, v250, v251);
      _9__42_2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v252, v253, v254);
      System_Action___ctor(
        _9__42_2,
        (Il2CppObject *)v158,
        Method_MissionNaviTransitionBoardItem___c__DisplayClass42_0__SetupSceneTransitionBoardItem_b__3__,
        0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v255);
      v179 = LocalizationManager__Get((System_String_o *)StringLiteral_8791/*"MISSION_NAVI_FRIEND_AND_FOLLOW"*/, 0LL);
      goto LABEL_98;
    }
    if ( !System_String__op_Equality(v157, (System_String_o *)StringLiteral_9324/*"MyRoom"*/, 0LL) )
      goto LABEL_35;
    v178 = StringLiteral_22214/*"my_room"*/;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v257);
    v258 = LocalizationManager__Get((System_String_o *)StringLiteral_8793/*"MISSION_NAVI_MYROOM"*/, 0LL);
    v261 = MissionNaviTransitionBoardItem___c_TypeInfo;
    v179 = v258;
    if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo, v259);
      v261 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    _9__42_2 = v261->static_fields->__9__42_4;
    if ( _9__42_2 )
      goto LABEL_98;
    if ( !v261->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v261, v259);
      v261 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v262 = (Il2CppObject *)v261->static_fields->__9;
    _9__42_2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v259, v260, v228);
    System_Action___ctor(
      _9__42_2,
      v262,
      Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_4__,
      0LL);
    v263 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    v263->__9__42_4 = _9__42_2;
    p__9__42_2 = (PartyOrganizationUtility_o *)&v263->__9__42_4;
    goto LABEL_97;
  }
  if ( *(int *)(v156 + 24) < 2 )
    goto LABEL_35;
  v162 = (MissionNaviTransitionBoardItem___c__DisplayClass42_1_o *)sub_1BCAA2C(
                                                                     MissionNaviTransitionBoardItem___c__DisplayClass42_1_TypeInfo,
                                                                     v159,
                                                                     v160,
                                                                     v161);
  MissionNaviTransitionBoardItem___c__DisplayClass42_1___ctor(v162, 0LL);
  if ( *(_DWORD *)(v156 + 24) <= 1u )
LABEL_153:
    sub_1BCAA44(Master_object, *(_QWORD *)&closedMessageId);
  if ( !v162 )
    goto LABEL_152;
  p_eventId = &v162->fields.eventId;
  if ( System_Int32__TryParse(*(System_String_o **)(v156 + 40), &v162->fields.eventId, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v164);
    v165 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventDetailMaster___);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
      goto LABEL_152;
    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                      &entity,
                      *p_eventId,
                      (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    if ( (Master_object & 1) != 0 )
    {
      if ( !v165 )
        goto LABEL_152;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)v165,
             &v315,
             *p_eventId,
             (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v166);
        Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopMaster___);
        if ( !Master_object )
          goto LABEL_152;
        if ( ShopMaster__IsEventShopOpen((ShopMaster_o *)Master_object, *p_eventId, 0LL) )
        {
          Master_object = (int64_t)v315;
          if ( !v315 )
            goto LABEL_152;
          if ( EventDetailEntity__IsReward((EventDetailEntity_o *)v315, 0LL) )
            goto LABEL_31;
          Master_object = (int64_t)v315;
          if ( !v315 )
            goto LABEL_152;
          if ( EventDetailEntity__IsEventShop((EventDetailEntity_o *)v315, 0LL) )
          {
LABEL_31:
            v169 = sub_1BCAA2C(
                     MissionNaviTransitionBoardItem___c__DisplayClass42_2_TypeInfo,
                     *(_QWORD *)&closedMessageId,
                     v167,
                     v168);
            MissionNaviTransitionBoardItem___c__DisplayClass42_2___ctor(
              (MissionNaviTransitionBoardItem___c__DisplayClass42_2_o *)v169,
              0LL);
            v314 = 0;
            if ( *(int *)(v156 + 24) >= 3 )
            {
              System_Int32__TryParse(*(System_String_o **)(v156 + 48), &v314, 0LL);
              v173 = v314 + 1;
            }
            else
            {
              v173 = 1;
            }
            v286 = *p_eventId;
            v287 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v170, v171, v172);
            SceneJumpInfo___ctor_39380944(v287, (System_String_o *)StringLiteral_1/*""*/, v286, v173, 0LL);
            if ( !v169 )
              goto LABEL_152;
            *(_QWORD *)(v169 + 16) = v287;
            sub_1BCA784((PartyOrganizationUtility_o *)(v169 + 16), (int64_t)v287, v288, v289, v290, v291, v292, v293);
            v297 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v294, v295, v296);
            v298 = &Method_MissionNaviTransitionBoardItem___c__DisplayClass42_2__SetupSceneTransitionBoardItem_b__6__;
            v299 = v297;
            v300 = (Il2CppObject *)v169;
          }
          else
          {
            Master_object = (int64_t)v315;
            if ( !v315 )
              goto LABEL_152;
            v299 = 0LL;
            if ( !EventDetailEntity__IsExchangeShop((EventDetailEntity_o *)v315, 0LL) )
              goto LABEL_141;
            v297 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v301, v302, v303);
            v298 = &Method_MissionNaviTransitionBoardItem___c__DisplayClass42_1__SetupSceneTransitionBoardItem_b__5__;
            v299 = v297;
            v300 = (Il2CppObject *)v162;
          }
          System_Action___ctor(v297, v300, *v298, 0LL);
LABEL_141:
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v301);
          v179 = LocalizationManager__Get((System_String_o *)StringLiteral_8789/*"MISSION_NAVI_EVENT_REWARD"*/, 0LL);
          v264 = sceneDetail;
          v265 = v299;
          v178 = StringLiteral_23521/*"shop_event"*/;
          goto LABEL_119;
        }
      }
    }
    NaviSceneTransitionAction = 0LL;
    v177 = 1;
    goto LABEL_36;
  }
LABEL_35:
  v177 = 0;
LABEL_36:
  v178 = (__int64)closedMessage;
LABEL_37:
  v179 = closedMessage;
LABEL_121:
  if ( System_String__op_Inequality(naviName, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    v279 = naviName;
  else
    v279 = v179;
  v282 = System_String__op_Inequality(v6, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( (v177 & 1) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&closedMessageId);
    v279 = LocalizationManager__Get((System_String_o *)StringLiteral_8795/*"MISSION_NAVI_NOT_OPEN_BOARD"*/, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v283);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClosedMessageMaster___);
    if ( closedMessageId )
    {
      if ( Master_object )
      {
        Master_object = DataMasterBase_object__object__int___TryGetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          &v313,
                          closedMessageId,
                          (const MethodInfo_31B2E94 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
        if ( (Master_object & 1) == 0 )
          goto LABEL_134;
        if ( v313 )
        {
          closedMessage = (System_String_o *)v313[1].monitor;
          goto LABEL_134;
        }
      }
LABEL_152:
      sub_1BCAA3C(Master_object, *(_QWORD *)&closedMessageId);
    }
  }
LABEL_134:
  if ( !v282 )
    v6 = (System_String_o *)v178;
  v284 = (MissionNaviTransitionBoardItem_o *)sub_1BCAA2C(
                                               MissionNaviTransitionBoardItem_TypeInfo,
                                               *(_QWORD *)&closedMessageId,
                                               v280,
                                               v281);
  MissionNaviTransitionBoardItem___ctor(
    v284,
    0,
    v6,
    v279,
    0,
    0,
    0,
    v177 & 1,
    closedMessage,
    NaviSceneTransitionAction,
    v310);
  return v284;
}


bool __fastcall MissionNaviTransitionBoardItem__TrySetupQuestListTransitionBoardItem(
        MissionNaviTransitionEntity_o *missionNaviTransitionEntity,
        MissionListViewItem_o *item,
        System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **challengeBoardList,
        const MethodInfo *method)
{
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *v22; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  void *transitionParam; // x0
  __int64 v30; // x1
  __int64 v31; // x1
  int v32; // w8
  void *v33; // x21
  bool v34; // w20
  int v35; // w19
  MissionNaviQuestEntity_o *v36; // x23
  int32_t questId; // w22
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v39; // x26
  __int64 v40; // x1
  const MethodInfo *v41; // x3
  bool v42; // w20
  System_Action_o *NaviQuestTransitionAction; // x0
  bool v44; // w25
  System_ValueTuple_string__string__o closedMessage; // kr00_16
  int32_t size; // w24
  System_String_o *v47; // x29
  bool HasFlag; // w20
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  MissionNaviTransitionBoardItem_o *v52; // x23
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  __int64 v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  __int64 v62; // x8
  const MethodInfo *v65; // [xsp+10h] [xbp-90h]
  System_Action_o *v67; // [xsp+28h] [xbp-78h]
  System_String_o *challengeIconName; // [xsp+30h] [xbp-70h] BYREF
  int32_t result; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_4B19421 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_MissionNaviQuestMaster___, item, challengeBoardList);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__get_Count__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo, v14, v15);
    sub_1BCA7E0(&MissionNaviTransitionBoardItem_TypeInfo, v16, v17);
    sub_1BCA7E0(&MissionNaviTransitionConfirmDialog_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v20, v21);
    byte_4B19421 = 1;
  }
  result = 0;
  challengeIconName = 0LL;
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo,
                                                       item,
                                                       challengeBoardList,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *challengeBoardList = (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o *)v22;
  sub_1BCA784((PartyOrganizationUtility_o *)challengeBoardList, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  if ( !missionNaviTransitionEntity )
    goto LABEL_33;
  if ( System_String__IsNullOrEmpty(missionNaviTransitionEntity->fields.transitionParam, 0LL) )
    return 0;
  transitionParam = missionNaviTransitionEntity->fields.transitionParam;
  if ( !transitionParam )
    goto LABEL_33;
  transitionParam = System_String__Split((System_String_o *)transitionParam, 0x2Fu, 0, 0LL);
  if ( !transitionParam )
    goto LABEL_33;
  if ( !*((_DWORD *)transitionParam + 6) )
    goto LABEL_34;
  if ( !System_Int32__TryParse(*((System_String_o **)transitionParam + 4), &result, 0LL) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v31);
  transitionParam = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_MissionNaviQuestMaster___);
  if ( !transitionParam
    || (transitionParam = MissionNaviQuestMaster__GetOpenQuestByNaviQuestMasterId(
                            (MissionNaviQuestMaster_o *)transitionParam,
                            result,
                            0LL)) == 0LL )
  {
LABEL_33:
    sub_1BCAA3C(transitionParam, v30);
  }
  v32 = *((_DWORD *)transitionParam + 6);
  v33 = transitionParam;
  v34 = v32 > 0;
  if ( v32 >= 1 )
  {
    v35 = 0;
    while ( v35 < (unsigned int)v32 )
    {
      v36 = (MissionNaviQuestEntity_o *)*((_QWORD *)v33 + v35 + 4);
      if ( !v36 )
        goto LABEL_33;
      questId = v36->fields.questId;
      transitionParam = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !transitionParam )
        goto LABEL_33;
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)transitionParam, questId, 0LL);
      if ( !QuestInfo )
        return !v34;
      v39 = QuestInfo;
      v42 = !MissionNaviQuestEntity__IsNaviBoardOpen(v36, QuestInfo, 0LL);
      NaviQuestTransitionAction = 0LL;
      if ( !v42 )
        NaviQuestTransitionAction = MissionNaviTransitionBoardItem__GetNaviQuestTransitionAction(v36, v39, item, v41);
      v67 = NaviQuestTransitionAction;
      if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo, v40);
      v44 = v42;
      closedMessage = MissionNaviTransitionConfirmDialog__GetQuestNaviNameAndClosedMessage(v36, v39, v42, 0LL);
      transitionParam = (void *)MissionNaviQuestEntity__TryGetChallengeIconName(v36, &challengeIconName, 0LL);
      if ( !*challengeBoardList )
        goto LABEL_33;
      size = (*challengeBoardList)->fields._size;
      v47 = challengeIconName;
      HasFlag = MissionNaviQuestEntity__HasFlag(v36, 2LL, 0LL);
      v52 = (MissionNaviTransitionBoardItem_o *)sub_1BCAA2C(MissionNaviTransitionBoardItem_TypeInfo, v49, v50, v51);
      MissionNaviTransitionBoardItem___ctor(
        v52,
        size,
        v47,
        closedMessage.fields.Item1,
        1,
        questId,
        HasFlag,
        v44,
        closedMessage.fields.Item2,
        v67,
        v65);
      transitionParam = *challengeBoardList;
      if ( !*challengeBoardList )
        goto LABEL_33;
      v59 = *((_QWORD *)transitionParam + 2);
      v60 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__;
      ++*((_DWORD *)transitionParam + 7);
      if ( !v59 )
        goto LABEL_33;
      v61 = *((int *)transitionParam + 6);
      if ( (unsigned int)v61 >= *(_DWORD *)(v59 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)transitionParam,
          (Il2CppObject *)v52,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
      }
      else
      {
        v62 = v59 + 8 * v61;
        *((_DWORD *)transitionParam + 6) = v61 + 1;
        *(_QWORD *)(v62 + 32) = v52;
        sub_1BCA784((PartyOrganizationUtility_o *)(v62 + 32), (int64_t)v52, v53, v54, v55, v56, v57, v58);
      }
      v32 = *((_DWORD *)v33 + 6);
      v34 = ++v35 < v32;
      if ( v35 >= v32 )
        return !v34;
    }
LABEL_34:
    sub_1BCAA44(transitionParam, v30);
  }
  return !v34;
}


bool __fastcall MissionNaviTransitionBoardItem__TrySetupSpotTransitionBoardItem(
        MissionNaviTransitionEntity_o *missionNaviTransitionEntity,
        MissionListViewItem_o *item,
        System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **challengeBoardList,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v17; // x22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  QuestTree_o *Instance; // x0
  __int64 v25; // x1
  MapControl_SpotInfo_o *SpotInfo; // x0
  MapControl_SpotInfo_o *v27; // x23
  SpotEntity_o *Mine; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  int32_t dispType; // w25
  SpotEntity_o *v32; // x24
  System_Action_o *NaviWarOrSpotTransitionAction; // x22
  System_ValueTuple_string__string__o closedMessage; // kr00_16
  bool v35; // w0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  System_String_o *IconNameByWarInfo; // x24
  MissionNaviTransitionBoardItem_o *v41; // x20
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct MapControl_RootInfo_o *mapControlRootInfo; // x8
  _QWORD *v49; // x9
  __int64 allQuestInfoList_low; // x10
  __int64 v51; // x8
  const MethodInfo *v53; // [xsp+10h] [xbp-70h]
  System_String_o *challengeIconName; // [xsp+20h] [xbp-60h] BYREF
  int32_t result; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_4B19423 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__, item, challengeBoardList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo, v9, v10);
    sub_1BCA7E0(&MissionNaviTransitionBoardItem_TypeInfo, v11, v12);
    sub_1BCA7E0(&MissionNaviTransitionConfirmDialog_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v15, v16);
    byte_4B19423 = 1;
  }
  result = 0;
  challengeIconName = 0LL;
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo,
                                                       item,
                                                       challengeBoardList,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *challengeBoardList = (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o *)v17;
  sub_1BCA784((PartyOrganizationUtility_o *)challengeBoardList, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  if ( !missionNaviTransitionEntity )
    goto LABEL_22;
  System_Int32__TryParse(missionNaviTransitionEntity->fields.transitionParam, &result, 0LL);
  Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  SpotInfo = QuestTree__GetSpotInfo(Instance, result, 0LL);
  if ( !SpotInfo )
    return (char)SpotInfo;
  v27 = SpotInfo;
  Mine = MapControl_SpotInfo__GetMine(SpotInfo, 0LL);
  dispType = v27->fields.dispType;
  v32 = Mine;
  NaviWarOrSpotTransitionAction = 0LL;
  if ( dispType == 1 )
    NaviWarOrSpotTransitionAction = MissionNaviTransitionBoardItem__GetNaviWarOrSpotTransitionAction(
                                      missionNaviTransitionEntity,
                                      item,
                                      v30);
  if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo, v29);
  closedMessage = MissionNaviTransitionConfirmDialog__GetSpotNaviNameAndClosedMessage(
                    missionNaviTransitionEntity,
                    v27,
                    dispType != 1,
                    0LL);
  v35 = MissionNaviTransitionEntity__TryGetChallengeIconName(missionNaviTransitionEntity, &challengeIconName, 0LL);
  if ( !v32 || v35 )
  {
    IconNameByWarInfo = challengeIconName;
  }
  else
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(Instance, v32->fields.warId, 0LL);
    IconNameByWarInfo = MissionNaviTransitionBoardItemDraw__GetIconNameByWarInfo(WarInfoByWarID, 0LL);
    challengeIconName = IconNameByWarInfo;
  }
  v41 = (MissionNaviTransitionBoardItem_o *)sub_1BCAA2C(MissionNaviTransitionBoardItem_TypeInfo, v36, v37, v38);
  MissionNaviTransitionBoardItem___ctor(
    v41,
    0,
    IconNameByWarInfo,
    closedMessage.fields.Item1,
    0,
    0,
    1,
    dispType != 1,
    closedMessage.fields.Item2,
    NaviWarOrSpotTransitionAction,
    v53);
  Instance = (QuestTree_o *)*challengeBoardList;
  if ( !*challengeBoardList
    || (mapControlRootInfo = Instance->fields.mapControlRootInfo,
        v49 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__,
        ++HIDWORD(Instance->fields.allQuestInfoList),
        !mapControlRootInfo) )
  {
LABEL_22:
    sub_1BCAA3C(Instance, v25);
  }
  allQuestInfoList_low = SLODWORD(Instance->fields.allQuestInfoList);
  if ( (unsigned int)allQuestInfoList_low >= LODWORD(mapControlRootInfo[1].klass) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v41,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
  }
  else
  {
    v51 = (__int64)mapControlRootInfo + 8 * allQuestInfoList_low;
    LODWORD(Instance->fields.allQuestInfoList) = allQuestInfoList_low + 1;
    *(_QWORD *)(v51 + 32) = v41;
    sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 32), (int64_t)v41, v42, v43, v44, v45, v46, v47);
  }
  LOBYTE(SpotInfo) = 1;
  return (char)SpotInfo;
}


bool __fastcall MissionNaviTransitionBoardItem__TrySetupWarTransitionBoardItem(
        MissionNaviTransitionEntity_o *missionNaviTransitionEntity,
        MissionListViewItem_o *item,
        System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **challengeBoardList,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v19; // x22
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  QuestTree_o *Instance; // x0
  __int64 v27; // x1
  MapControl_WarInfo_o *LatestProgressWarInfo; // x0
  MapControl_WarInfo_o *WarInfoByWarID; // x22
  __int64 v30; // x1
  const MethodInfo *v31; // x2
  System_Action_o *NaviWarOrSpotTransitionAction; // x23
  bool v33; // w21
  bool IsActiveWar; // w0
  System_ValueTuple_string__string__o closedMessage; // kr00_16
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_String_o *IconNameByWarInfo; // x22
  MissionNaviTransitionBoardItem_o *v40; // x20
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct MapControl_RootInfo_o *mapControlRootInfo; // x8
  _QWORD *v48; // x9
  __int64 allQuestInfoList_low; // x10
  __int64 v50; // x8
  const MethodInfo *v52; // [xsp+10h] [xbp-60h]
  int32_t result; // [xsp+1Ch] [xbp-54h] BYREF
  System_String_o *challengeIconName; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4B19422 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__, item, challengeBoardList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo, v9, v10);
    sub_1BCA7E0(&MissionNaviTransitionBoardItem_TypeInfo, v11, v12);
    sub_1BCA7E0(&MissionNaviTransitionConfirmDialog_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v15, v16);
    sub_1BCA7E0(&StringLiteral_8628/*"MAIN_SCENARIO"*/, v17, v18);
    byte_4B19422 = 1;
  }
  challengeIconName = 0LL;
  result = 0;
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo,
                                                       item,
                                                       challengeBoardList,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *challengeBoardList = (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o *)v19;
  sub_1BCA784((PartyOrganizationUtility_o *)challengeBoardList, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  if ( !missionNaviTransitionEntity )
LABEL_28:
    sub_1BCAA3C(Instance, v27);
  if ( System_String__op_Equality(
         missionNaviTransitionEntity->fields.transitionParam,
         (System_String_o *)StringLiteral_8628/*"MAIN_SCENARIO"*/,
         0LL) )
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    LatestProgressWarInfo = QuestTree__GetLatestProgressWarInfo(Instance, 0LL);
    if ( !LatestProgressWarInfo )
      return (char)LatestProgressWarInfo;
    WarInfoByWarID = LatestProgressWarInfo;
    if ( MapControl_WarInfo__GetStatus(LatestProgressWarInfo, 0LL) != 3
      && MapControl_WarInfo__GetStatus(WarInfoByWarID, 0LL) != 4 )
    {
LABEL_9:
      NaviWarOrSpotTransitionAction = MissionNaviTransitionBoardItem__GetNaviWarOrSpotTransitionAction(
                                        missionNaviTransitionEntity,
                                        item,
                                        v31);
      v33 = 0;
      goto LABEL_15;
    }
  }
  else
  {
    System_Int32__TryParse(missionNaviTransitionEntity->fields.transitionParam, &result, 0LL);
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(Instance, result, 0LL);
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    IsActiveWar = QuestTree__IsActiveWar(Instance, result, 0LL);
    if ( !WarInfoByWarID )
    {
      LOBYTE(LatestProgressWarInfo) = 0;
      return (char)LatestProgressWarInfo;
    }
    if ( IsActiveWar )
      goto LABEL_9;
  }
  NaviWarOrSpotTransitionAction = 0LL;
  v33 = 1;
LABEL_15:
  if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo, v30);
  closedMessage = MissionNaviTransitionConfirmDialog__GetWarNaviNameAndClosedMessage(
                    missionNaviTransitionEntity,
                    WarInfoByWarID,
                    v33,
                    0LL);
  if ( MissionNaviTransitionEntity__TryGetChallengeIconName(missionNaviTransitionEntity, &challengeIconName, 0LL) )
  {
    IconNameByWarInfo = challengeIconName;
  }
  else
  {
    IconNameByWarInfo = MissionNaviTransitionBoardItemDraw__GetIconNameByWarInfo(WarInfoByWarID, 0LL);
    challengeIconName = IconNameByWarInfo;
  }
  v40 = (MissionNaviTransitionBoardItem_o *)sub_1BCAA2C(MissionNaviTransitionBoardItem_TypeInfo, v36, v37, v38);
  MissionNaviTransitionBoardItem___ctor(
    v40,
    0,
    IconNameByWarInfo,
    closedMessage.fields.Item1,
    0,
    0,
    1,
    v33,
    closedMessage.fields.Item2,
    NaviWarOrSpotTransitionAction,
    v52);
  Instance = (QuestTree_o *)*challengeBoardList;
  if ( !*challengeBoardList )
    goto LABEL_28;
  mapControlRootInfo = Instance->fields.mapControlRootInfo;
  v48 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__;
  ++HIDWORD(Instance->fields.allQuestInfoList);
  if ( !mapControlRootInfo )
    goto LABEL_28;
  allQuestInfoList_low = SLODWORD(Instance->fields.allQuestInfoList);
  if ( (unsigned int)allQuestInfoList_low >= LODWORD(mapControlRootInfo[1].klass) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v40,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
  }
  else
  {
    v50 = (__int64)mapControlRootInfo + 8 * allQuestInfoList_low;
    LODWORD(Instance->fields.allQuestInfoList) = allQuestInfoList_low + 1;
    *(_QWORD *)(v50 + 32) = v40;
    sub_1BCA784((PartyOrganizationUtility_o *)(v50 + 32), (int64_t)v40, v41, v42, v43, v44, v45, v46);
  }
  LOBYTE(LatestProgressWarInfo) = 1;
  return (char)LatestProgressWarInfo;
}


int32_t __fastcall MissionNaviTransitionBoardItem__get_BoardType(
        MissionNaviTransitionBoardItem_o *this,
        const MethodInfo *method)
{
  return this->fields._BoardType_k__BackingField;
}


System_String_o *__fastcall MissionNaviTransitionBoardItem__get_ClosedMessage(
        MissionNaviTransitionBoardItem_o *this,
        const MethodInfo *method)
{
  return this->fields._ClosedMessage_k__BackingField;
}


System_String_o *__fastcall MissionNaviTransitionBoardItem__get_IconName(
        MissionNaviTransitionBoardItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IconName_k__BackingField;
}


bool __fastcall MissionNaviTransitionBoardItem__get_IsLocked(
        MissionNaviTransitionBoardItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsLocked_k__BackingField;
}


bool __fastcall MissionNaviTransitionBoardItem__get_IsNotDisplayQuestInfo(
        MissionNaviTransitionBoardItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsNotDisplayQuestInfo_k__BackingField;
}


System_String_o *__fastcall MissionNaviTransitionBoardItem__get_Name(
        MissionNaviTransitionBoardItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}


System_Action_o *__fastcall MissionNaviTransitionBoardItem__get_NaviAction(
        MissionNaviTransitionBoardItem_o *this,
        const MethodInfo *method)
{
  return this->fields._NaviAction_k__BackingField;
}


System_String_o *__fastcall MissionNaviTransitionBoardItem__get_QuestEndTime(
        MissionNaviTransitionBoardItem_o *this,
        const MethodInfo *method)
{
  return this->fields._QuestEndTime_k__BackingField;
}


int32_t __fastcall MissionNaviTransitionBoardItem__get_QuestId(
        MissionNaviTransitionBoardItem_o *this,
        const MethodInfo *method)
{
  return this->fields._QuestId_k__BackingField;
}


void __fastcall MissionNaviTransitionBoardItem__set_BoardType(
        MissionNaviTransitionBoardItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._BoardType_k__BackingField = value;
}


void __fastcall MissionNaviTransitionBoardItem__set_ClosedMessage(
        MissionNaviTransitionBoardItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ClosedMessage_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ClosedMessage_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MissionNaviTransitionBoardItem__set_IconName(
        MissionNaviTransitionBoardItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._IconName_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._IconName_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MissionNaviTransitionBoardItem__set_IsLocked(
        MissionNaviTransitionBoardItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsLocked_k__BackingField = value;
}


void __fastcall MissionNaviTransitionBoardItem__set_IsNotDisplayQuestInfo(
        MissionNaviTransitionBoardItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsNotDisplayQuestInfo_k__BackingField = value;
}


void __fastcall MissionNaviTransitionBoardItem__set_Name(
        MissionNaviTransitionBoardItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Name_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Name_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MissionNaviTransitionBoardItem__set_NaviAction(
        MissionNaviTransitionBoardItem_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._NaviAction_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._NaviAction_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MissionNaviTransitionBoardItem__set_QuestEndTime(
        MissionNaviTransitionBoardItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._QuestEndTime_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._QuestEndTime_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MissionNaviTransitionBoardItem__set_QuestId(
        MissionNaviTransitionBoardItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._QuestId_k__BackingField = value;
}


void __fastcall MissionNaviTransitionBoardItem___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B19C70 & 1) == 0 )
  {
    sub_1BCA7E0(&MissionNaviTransitionBoardItem___c_TypeInfo, v1, v2);
    byte_4B19C70 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(MissionNaviTransitionBoardItem___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  MissionNaviTransitionBoardItem___c_TypeInfo->static_fields->__9 = (struct MissionNaviTransitionBoardItem___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)MissionNaviTransitionBoardItem___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall MissionNaviTransitionBoardItem___c___ctor(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c___GetNaviQuestTransitionAction_b__43_1(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  MissionNaviTransitionBoardItem___c_c *v13; // x8
  CommonUI_o *v14; // x19
  System_Action_o *_9__43_3; // x20
  Il2CppObject *v16; // x21
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B19C74 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3, v4);
    sub_1BCA7E0(&Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__43_3__, v5, v6);
    sub_1BCA7E0(&MissionNaviTransitionBoardItem___c_TypeInfo, v7, v8);
    byte_4B19C74 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v14 = (CommonUI_o *)Instance;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo, v10);
    v13 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  _9__43_3 = v13->static_fields->__9__43_3;
  if ( !_9__43_3 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, v10);
      v13 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__43_3 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(
      _9__43_3,
      v16,
      Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__43_3__,
      0LL);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__43_3 = _9__43_3;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__43_3,
      (int64_t)_9__43_3,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !v14 )
LABEL_12:
    sub_1BCAA3C(Instance, v10);
  CommonUI__CloseMissionNaviTransitionConfirmDialog_30867652(v14, _9__43_3, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c___GetNaviQuestTransitionAction_b__43_3(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B19C75 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3, v4);
    byte_4B19C75 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v6);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c___GetNaviSceneTransitionAction_b__45_1(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  MissionNaviTransitionBoardItem___c_c *v13; // x8
  CommonUI_o *v14; // x19
  System_Action_o *_9__45_3; // x20
  Il2CppObject *v16; // x21
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B19C78 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3, v4);
    sub_1BCA7E0(&Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__45_3__, v5, v6);
    sub_1BCA7E0(&MissionNaviTransitionBoardItem___c_TypeInfo, v7, v8);
    byte_4B19C78 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v14 = (CommonUI_o *)Instance;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo, v10);
    v13 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  _9__45_3 = v13->static_fields->__9__45_3;
  if ( !_9__45_3 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, v10);
      v13 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__45_3 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(
      _9__45_3,
      v16,
      Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__45_3__,
      0LL);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__45_3 = _9__45_3;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__45_3,
      (int64_t)_9__45_3,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !v14 )
LABEL_12:
    sub_1BCAA3C(Instance, v10);
  CommonUI__CloseMissionNaviTransitionConfirmDialog_30867652(v14, _9__45_3, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c___GetNaviSceneTransitionAction_b__45_3(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B19C79 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3, v4);
    byte_4B19C79 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v6);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c___GetNaviWarOrSpotTransitionAction_b__44_1(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  MissionNaviTransitionBoardItem___c_c *v13; // x8
  CommonUI_o *v14; // x19
  System_Action_o *_9__44_3; // x20
  Il2CppObject *v16; // x21
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B19C76 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3, v4);
    sub_1BCA7E0(&Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__44_3__, v5, v6);
    sub_1BCA7E0(&MissionNaviTransitionBoardItem___c_TypeInfo, v7, v8);
    byte_4B19C76 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v14 = (CommonUI_o *)Instance;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo, v10);
    v13 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  _9__44_3 = v13->static_fields->__9__44_3;
  if ( !_9__44_3 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, v10);
      v13 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__44_3 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(
      _9__44_3,
      v16,
      Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__44_3__,
      0LL);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__44_3 = _9__44_3;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__44_3,
      (int64_t)_9__44_3,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !v14 )
LABEL_12:
    sub_1BCAA3C(Instance, v10);
  CommonUI__CloseMissionNaviTransitionConfirmDialog_30867652(v14, _9__44_3, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c___GetNaviWarOrSpotTransitionAction_b__44_3(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B19C77 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3, v4);
    byte_4B19C77 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v6);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c___SetupSceneTransitionBoardItem_b__42_0(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MissionNaviTransitionBoardItem___c___SetupSceneTransitionBoardItem_b__42_1(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B19C71 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B19C71 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 91, 1, 0LL, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c___SetupSceneTransitionBoardItem_b__42_2(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalPramsManager_c *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B19C72 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v3, v4);
    byte_4B19C72 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B1299C )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1299C = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_SummonType_k__BackingField = 3;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v7);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 20, 1, 0LL, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c___SetupSceneTransitionBoardItem_b__42_4(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B19C73 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B19C73 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 30, 1, 0LL, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c__DisplayClass42_0___ctor(
        MissionNaviTransitionBoardItem___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c__DisplayClass42_0___SetupSceneTransitionBoardItem_b__3(
        MissionNaviTransitionBoardItem___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B19C7A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B19C7A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  AvalonSceneManager__transitionScene(
    (AvalonSceneManager_o *)Instance,
    23,
    1,
    (Il2CppObject *)this->fields.sceneFriendJumpInfo,
    0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c__DisplayClass42_1___ctor(
        MissionNaviTransitionBoardItem___c__DisplayClass42_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c__DisplayClass42_1___SetupSceneTransitionBoardItem_b__5(
        MissionNaviTransitionBoardItem___c__DisplayClass42_1_o *this,
        const MethodInfo *method)
{
  EventItemListComponent__GoToShopEventItemExchange(this->fields.eventId, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c__DisplayClass42_2___ctor(
        MissionNaviTransitionBoardItem___c__DisplayClass42_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c__DisplayClass42_2___SetupSceneTransitionBoardItem_b__6(
        MissionNaviTransitionBoardItem___c__DisplayClass42_2_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B19C7B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B19C7B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  AvalonSceneManager__transitionScene(
    (AvalonSceneManager_o *)Instance,
    72,
    1,
    (Il2CppObject *)this->fields.sceneJumpInfo,
    0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c__DisplayClass42_3___ctor(
        MissionNaviTransitionBoardItem___c__DisplayClass42_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c__DisplayClass42_3___SetupSceneTransitionBoardItem_b__7(
        MissionNaviTransitionBoardItem___c__DisplayClass42_3_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B19C7C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B19C7C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  AvalonSceneManager__transitionScene(
    (AvalonSceneManager_o *)Instance,
    32,
    1,
    (Il2CppObject *)this->fields.sceneJumpInfo,
    0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c__DisplayClass42_4___ctor(
        MissionNaviTransitionBoardItem___c__DisplayClass42_4_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c__DisplayClass42_4___SetupSceneTransitionBoardItem_b__8(
        MissionNaviTransitionBoardItem___c__DisplayClass42_4_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t gachaId; // w21
  AvalonSceneManager_o *Instance; // x0
  struct GachaEntity_o *gachaEnt; // x8
  int32_t type; // w20

  if ( (byte_4B19C7D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v4, v5);
    byte_4B19C7D = 1;
  }
  gachaId = this->fields.gachaId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B1299E )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1299E = 1;
  }
  Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  HIDWORD(Instance[1].fields.m_listUnloadScenes->monitor) = gachaId;
  gachaEnt = this->fields.gachaEnt;
  if ( !gachaEnt )
    goto LABEL_16;
  type = gachaEnt->fields.type;
  if ( !byte_4B1299C )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    byte_4B1299C = 1;
  }
  if ( !LODWORD(Instance[2].fields.targetRoot) )
  {
    j_il2cpp_runtime_class_init_0(Instance, method);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  LODWORD(Instance[1].fields.m_listUnloadScenes->monitor) = type;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_16:
    sub_1BCAA3C(Instance, method);
  AvalonSceneManager__transitionScene(Instance, 20, 1, 0LL, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c__DisplayClass43_0___ctor(
        MissionNaviTransitionBoardItem___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c__DisplayClass43_0___GetNaviQuestTransitionAction_b__0(
        MissionNaviTransitionBoardItem___c__DisplayClass43_0_o *this,
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
  MissionListViewItem_o *naviQuestEntity; // x0
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  __int64 v25; // x2
  __int64 v26; // x3
  System_Action_o *_9__2; // x22
  CommonUI_o *v28; // x20
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x1
  Il2CppObject *Instance; // x19
  __int64 v37; // x2
  __int64 v38; // x3
  MissionNaviTransitionBoardItem___c_c *v39; // x8
  System_String_o *v40; // x20
  System_String_o *v41; // x21
  System_Action_o *_9__43_1; // x22
  Il2CppObject *v43; // x23
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  _QWORD *v51; // x0
  System_Reflection_MethodBase_o *v52; // x0

  if ( (byte_4B19C7E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__43_1__, v10, v11);
    sub_1BCA7E0(
      &Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__,
      v12,
      v13);
    sub_1BCA7E0(
      &Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__2__,
      v14,
      v15);
    sub_1BCA7E0(&MissionNaviTransitionBoardItem___c_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_5094/*"DIALOG_OUT_OF_TERM"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v20, v21);
    byte_4B19C7E = 1;
  }
  naviQuestEntity = (MissionListViewItem_o *)this->fields.naviQuestEntity;
  if ( !naviQuestEntity )
    goto LABEL_27;
  if ( !MissionNaviQuestEntity__IsNaviBoardTimeOver(
          (MissionNaviQuestEntity_o *)naviQuestEntity,
          this->fields.tempQuestInfo,
          0LL) )
  {
    naviQuestEntity = this->fields.item;
    if ( !naviQuestEntity )
      goto LABEL_27;
    naviQuestEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(naviQuestEntity, 0LL);
    if ( !naviQuestEntity )
      goto LABEL_27;
    if ( EventMissionEntity__isNowMission((EventMissionEntity_o *)naviQuestEntity, 0LL) )
    {
      v23 = Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__;
      if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__
            + 83) & 2) != 0 )
        v23 = (_QWORD *)sub_1BCA7F8(Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__);
      v24 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v23, v23[4]);
      OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0LL);
      naviQuestEntity = (MissionListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( naviQuestEntity )
      {
        AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)naviQuestEntity, 1, 0LL);
        naviQuestEntity = (MissionListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        _9__2 = this->fields.__9__2;
        v28 = (CommonUI_o *)naviQuestEntity;
        if ( !_9__2 )
        {
          _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v25, v26);
          System_Action___ctor(
            _9__2,
            (Il2CppObject *)this,
            Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__2__,
            0LL);
          this->fields.__9__2 = _9__2;
          sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v29, v30, v31, v32, v33, v34);
        }
        if ( v28 )
        {
          CommonUI__CloseMissionNaviTransitionConfirmDialog_30867652(v28, _9__2, 0LL);
          return;
        }
      }
LABEL_27:
      sub_1BCAA3C(naviQuestEntity, method);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
  naviQuestEntity = (MissionListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5094/*"DIALOG_OUT_OF_TERM"*/, 0LL);
  v39 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v40 = (System_String_o *)naviQuestEntity;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo, method);
    v39 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  v41 = (System_String_o *)StringLiteral_1/*""*/;
  _9__43_1 = v39->static_fields->__9__43_1;
  if ( !_9__43_1 )
  {
    if ( !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39, method);
      v39 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v39->static_fields->__9;
    _9__43_1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v37, v38);
    System_Action___ctor(
      _9__43_1,
      v43,
      Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__43_1__,
      0LL);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__43_1 = _9__43_1;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__43_1,
      (int64_t)_9__43_1,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  if ( !Instance )
    goto LABEL_27;
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v41, v40, _9__43_1, 500, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
  v51 = Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__;
  if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__ + 83) & 2) != 0 )
    v51 = (_QWORD *)sub_1BCA7F8(Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__);
  v52 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v51, v51[4]);
  OverwriteAssetSoundName__PlaySystemSe(v52, 2, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c__DisplayClass43_0___GetNaviQuestTransitionAction_b__2(
        MissionNaviTransitionBoardItem___c__DisplayClass43_0_o *this,
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
  void *Instance; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x20
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x20
  System_Collections_ICollection_o *AvailableTutorialArray; // x0
  BalanceConfig_c *v32; // x0
  int32_t OrdealCallWarId; // w19
  struct MapControl_QuestInfo_o *tempQuestInfo; // x8
  int32_t v35; // w1
  struct MissionNaviQuestEntity_o *naviQuestEntity; // x8
  int32_t questId; // w19
  __int64 v38; // x2
  int32_t SpotID; // w20
  struct MapControl_QuestInfo_o *v40; // x8
  int32_t warId; // w0
  struct MapControl_QuestInfo_o *v42; // x8
  int32_t v43; // w19
  struct MapControl_QuestInfo_o *v44; // x8
  int32_t v45; // w19
  TerminalPramsManager_c *v46; // x0
  __int64 v47; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_int__o v49; // 0:x0.8

  if ( (byte_4B19C7F & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v8, v9);
    sub_1BCA7E0(&EventTutorialMaster_EventTutorialArgs_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Nullable_int__GetValueOrDefault__, v12, v13);
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v20, v21);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v22, v23);
    byte_4B19C7F = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v26);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !this->fields.tempQuestInfo )
    goto LABEL_53;
  v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (void *)MapControl_QuestInfo__GetSpotID(this->fields.tempQuestInfo, 0LL);
  if ( !v27 )
    goto LABEL_53;
  Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                       v27,
                       &entity,
                       (int32_t)Instance,
                       (const MethodInfo_31B2E94 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    tempQuestInfo = this->fields.tempQuestInfo;
    if ( !tempQuestInfo )
      goto LABEL_53;
    Instance = tempQuestInfo->fields._WarInfo_k__BackingField;
    if ( !Instance )
      goto LABEL_20;
    Instance = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_20;
    v35 = *((_DWORD *)Instance + 31);
    v49 = (System_Nullable_int__o)&v47;
    v47 = 0LL;
    System_Nullable_int____ctor(v49, v35, (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
    if ( !HIDWORD(v47) )
      goto LABEL_20;
  }
  v30 = sub_1BCAA2C(EventTutorialMaster_EventTutorialArgs_TypeInfo, v25, v28, v29);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v30, 0LL);
  if ( !v30 )
    goto LABEL_53;
  *(_QWORD *)(v30 + 16) = 0x5300000000LL;
  AvailableTutorialArray = (System_Collections_ICollection_o *)EventTutorialMaster__GetAvailableTutorialArray(
                                                                 (EventTutorialMaster_EventTutorialArgs_o *)v30,
                                                                 0LL);
  Instance = (void *)BasicHelper__IsNullOrEmpty(AvailableTutorialArray, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v32 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v25);
      v32 = BalanceConfig_TypeInfo;
    }
    OrdealCallWarId = v32->static_fields->OrdealCallWarId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v25);
    TerminalPramsManager__SetAutoResumeByWarId(OrdealCallWarId, 0LL);
  }
  else
  {
LABEL_20:
    naviQuestEntity = this->fields.naviQuestEntity;
    if ( !naviQuestEntity )
      goto LABEL_53;
    switch ( naviQuestEntity->fields.questTransitionType )
    {
      case 0:
        questId = this->fields.questId;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v25);
        TerminalPramsManager__SetAutoResumeByQuestId(questId, 0LL);
        break;
      case 1:
        Instance = this->fields.tempQuestInfo;
        if ( !Instance )
          goto LABEL_53;
        SpotID = MapControl_QuestInfo__GetSpotID((MapControl_QuestInfo_o *)Instance, 0LL);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v25);
        if ( !byte_4B12DCC )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v25, v38);
          byte_4B12DCC = 1;
        }
        Instance = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v25);
          Instance = TerminalPramsManager_TypeInfo;
        }
        *(_DWORD *)(*((_QWORD *)Instance + 23) + 16LL) = SpotID;
        v40 = this->fields.tempQuestInfo;
        if ( !v40 )
          goto LABEL_53;
        warId = v40->fields.warId;
        goto LABEL_38;
      case 2:
        v42 = this->fields.tempQuestInfo;
        if ( !v42 )
          goto LABEL_53;
        v43 = v42->fields.warId;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v25);
        warId = v43;
LABEL_38:
        TerminalPramsManager__SetAutoResumeByWarId(warId, 0LL);
        break;
      case 3:
        v44 = this->fields.tempQuestInfo;
        if ( !v44 )
          goto LABEL_53;
        v45 = v44->fields.warId;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v25);
        TerminalPramsManager__SetAutoResumeForFolder(v45, 0LL);
        break;
      default:
        break;
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v25);
    if ( !byte_4B10F88 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v25, v28);
      byte_4B10F88 = 1;
    }
    v46 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v25);
      v46 = TerminalPramsManager_TypeInfo;
    }
    v46->static_fields->_IsDirectTransition_k__BackingField = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0LL) )
  {
LABEL_53:
    sub_1BCAA3C(Instance, v25);
  }
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 0, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c__DisplayClass44_0___ctor(
        MissionNaviTransitionBoardItem___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c__DisplayClass44_0___GetNaviWarOrSpotTransitionAction_b__0(
        MissionNaviTransitionBoardItem___c__DisplayClass44_0_o *this,
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
  struct MapControl_SpotInfo_o *spotInfo; // x8
  QuestTree_o *Instance; // x0
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  __int64 v28; // x2
  __int64 v29; // x3
  System_Action_o *_9__2; // x22
  CommonUI_o *v31; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v38; // x1
  Il2CppObject *v39; // x19
  __int64 v40; // x2
  __int64 v41; // x3
  MissionNaviTransitionBoardItem___c_c *v42; // x8
  System_String_o *v43; // x20
  System_String_o *v44; // x21
  System_Action_o *_9__44_1; // x22
  Il2CppObject *v46; // x23
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  _QWORD *v54; // x0
  System_Reflection_MethodBase_o *v55; // x0

  if ( (byte_4B19C80 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__44_1__, v12, v13);
    sub_1BCA7E0(
      &Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__,
      v14,
      v15);
    sub_1BCA7E0(
      &Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__2__,
      v16,
      v17);
    sub_1BCA7E0(&MissionNaviTransitionBoardItem___c_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_5094/*"DIALOG_OUT_OF_TERM"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v22, v23);
    byte_4B19C80 = 1;
  }
  LODWORD(spotInfo) = this->fields.isSpot;
  if ( this->fields.isSpot )
  {
    spotInfo = this->fields.spotInfo;
    if ( spotInfo )
      LODWORD(spotInfo) = spotInfo->fields.dispType == 1;
  }
  if ( this->fields.isWar )
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    if ( !QuestTree__IsActiveWar(Instance, this->fields.targetWarId, 0LL) )
      goto LABEL_21;
  }
  else if ( !(_DWORD)spotInfo )
  {
    goto LABEL_21;
  }
  Instance = (QuestTree_o *)this->fields.item;
  if ( !Instance )
    goto LABEL_33;
  Instance = (QuestTree_o *)MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_33;
  if ( EventMissionEntity__isNowMission((EventMissionEntity_o *)Instance, 0LL) )
  {
    v26 = Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__;
    if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__
          + 83) & 2) != 0 )
      v26 = (_QWORD *)sub_1BCA7F8(Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__);
    v27 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v26, v26[4]);
    OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0LL);
    Instance = (QuestTree_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( Instance )
    {
      AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 1, 0LL);
      Instance = (QuestTree_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      _9__2 = this->fields.__9__2;
      v31 = (CommonUI_o *)Instance;
      if ( !_9__2 )
      {
        _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v28, v29);
        System_Action___ctor(
          _9__2,
          (Il2CppObject *)this,
          Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__2__,
          0LL);
        this->fields.__9__2 = _9__2;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v32, v33, v34, v35, v36, v37);
      }
      if ( v31 )
      {
        CommonUI__CloseMissionNaviTransitionConfirmDialog_30867652(v31, _9__2, 0LL);
        return;
      }
    }
LABEL_33:
    sub_1BCAA3C(Instance, method);
  }
LABEL_21:
  v39 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
  Instance = (QuestTree_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5094/*"DIALOG_OUT_OF_TERM"*/, 0LL);
  v42 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v43 = (System_String_o *)Instance;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo, method);
    v42 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  v44 = (System_String_o *)StringLiteral_1/*""*/;
  _9__44_1 = v42->static_fields->__9__44_1;
  if ( !_9__44_1 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42, method);
      v42 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v42->static_fields->__9;
    _9__44_1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v40, v41);
    System_Action___ctor(
      _9__44_1,
      v46,
      Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__44_1__,
      0LL);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__44_1 = _9__44_1;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__44_1,
      (int64_t)_9__44_1,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  if ( !v39 )
    goto LABEL_33;
  CommonUI__OpenNotificationDialog((CommonUI_o *)v39, v44, v43, _9__44_1, 500, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
  v54 = Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__;
  if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__
        + 83) & 2) != 0 )
    v54 = (_QWORD *)sub_1BCA7F8(Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__);
  v55 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v54, v54[4]);
  OverwriteAssetSoundName__PlaySystemSe(v55, 2, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c__DisplayClass44_0___GetNaviWarOrSpotTransitionAction_b__2(
        MissionNaviTransitionBoardItem___c__DisplayClass44_0_o *this,
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
  Il2CppObject *Instance; // x0
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  BalanceConfig_c *v31; // x0
  int32_t targetWarId; // w20
  _BOOL4 v33; // w20
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  WarEntity_o *Mine; // x0
  int32_t parentBlankEarthSpotId; // w1
  unsigned __int64 v37; // x8
  struct SpotEntity_o *v38; // x8
  MapControl_WarInfo_o *v39; // x0
  WarEntity_o *v40; // x0
  int32_t v41; // w1
  unsigned __int64 v42; // x8
  __int64 v43; // x20
  System_Collections_ICollection_o *AvailableTutorialArray; // x0
  struct SpotEntity_o *spotEnt; // x8
  int32_t warId; // w20
  int32_t targetSpotId; // w25
  TerminalPramsManager_c *v48; // x0
  __int64 v49; // x2
  TerminalPramsManager_c *v50; // x0
  _BOOL4 isMainScenario; // w24
  int32_t v52; // w19
  __int64 v53; // x1
  __int64 v54; // x2
  BalanceConfig_c *v55; // x0
  _BOOL4 v56; // w20
  int32_t OrdealCallWarId; // w19
  TerminalPramsManager_c *v58; // x0
  unsigned __int64 v59; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF
  System_Nullable_int__o v61; // 0:x0.8
  System_Nullable_int__o v62; // 0:x0.8

  if ( (byte_4B19C81 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v8, v9);
    sub_1BCA7E0(&EventTutorialMaster_EventTutorialArgs_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Nullable_int__GetValueOrDefault__, v12, v13);
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v20, v21);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v22, v23);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v24, v25);
    byte_4B19C81 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL);
  if ( this->fields.isWar )
  {
    v31 = BalanceConfig_TypeInfo;
    targetWarId = this->fields.targetWarId;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v28);
      v31 = BalanceConfig_TypeInfo;
    }
    if ( targetWarId == v31->static_fields->OrdealCallWarId )
    {
      v33 = 1;
    }
    else
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        goto LABEL_69;
      WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, this->fields.targetWarId, 0LL);
      if ( WarInfoByWarID && (Mine = MapControl_WarInfo__GetMine(WarInfoByWarID, 0LL)) != 0LL )
      {
        parentBlankEarthSpotId = Mine->fields.parentBlankEarthSpotId;
        v61 = (System_Nullable_int__o)&v59;
        v59 = 0LL;
        System_Nullable_int____ctor(
          v61,
          parentBlankEarthSpotId,
          (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
        v37 = v59;
      }
      else
      {
        v37 = 0LL;
      }
      v33 = HIDWORD(v37) != 0;
    }
  }
  else
  {
    v33 = 0;
  }
  if ( !this->fields.isSpot )
    goto LABEL_27;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v28);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Instance )
LABEL_69:
    sub_1BCAA3C(Instance, v27);
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         this->fields.targetSpotId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__) )
  {
    goto LABEL_31;
  }
  if ( !this->fields.spotEnt )
  {
LABEL_27:
    if ( v33 )
      goto LABEL_31;
LABEL_33:
    if ( this->fields.isSpot )
    {
      spotEnt = this->fields.spotEnt;
      if ( spotEnt )
      {
        warId = spotEnt->fields.warId;
        targetSpotId = this->fields.targetSpotId;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v28);
        if ( !byte_4B12DCC )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v28, v29);
          byte_4B12DCC = 1;
        }
        v48 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v28);
          v48 = TerminalPramsManager_TypeInfo;
        }
        v48->static_fields->_SpotId_k__BackingField = targetSpotId;
        TerminalPramsManager__SetAutoResumeByWarId(warId, 0LL);
        if ( !byte_4B10F88 )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v28, v49);
          byte_4B10F88 = 1;
        }
        v50 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v28);
          v50 = TerminalPramsManager_TypeInfo;
        }
        v50->static_fields->_IsDirectTransition_k__BackingField = 1;
      }
    }
    if ( this->fields.isWar )
    {
      isMainScenario = this->fields.isMainScenario;
      v52 = this->fields.targetWarId;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v28);
      if ( isMainScenario )
        TerminalPramsManager__SetAutoResumeForFolder(v52, 0LL);
      else
        TerminalPramsManager__SetAutoResumeByWarId(v52, 0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v53);
      if ( !byte_4B10F88 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v53, v54);
        byte_4B10F88 = 1;
      }
      v58 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v53);
        v58 = TerminalPramsManager_TypeInfo;
      }
      v58->static_fields->_IsDirectTransition_k__BackingField = 1;
    }
    goto LABEL_66;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  v38 = this->fields.spotEnt;
  if ( !v38 || !Instance )
    goto LABEL_69;
  v39 = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, v38->fields.warId, 0LL);
  if ( v39 && (v40 = MapControl_WarInfo__GetMine(v39, 0LL)) != 0LL )
  {
    v41 = v40->fields.parentBlankEarthSpotId;
    v62 = (System_Nullable_int__o)&v59;
    v59 = 0LL;
    System_Nullable_int____ctor(v62, v41, (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
    v42 = v59;
  }
  else
  {
    v42 = 0LL;
  }
  if ( !v33 && HIDWORD(v42) == 0 )
    goto LABEL_33;
LABEL_31:
  v43 = sub_1BCAA2C(EventTutorialMaster_EventTutorialArgs_TypeInfo, v28, v29, v30);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v43, 0LL);
  if ( !v43 )
    goto LABEL_69;
  *(_QWORD *)(v43 + 16) = 0x5300000000LL;
  AvailableTutorialArray = (System_Collections_ICollection_o *)EventTutorialMaster__GetAvailableTutorialArray(
                                                                 (EventTutorialMaster_EventTutorialArgs_o *)v43,
                                                                 0LL);
  if ( BasicHelper__IsNullOrEmpty(AvailableTutorialArray, 0LL) )
    goto LABEL_33;
  v55 = BalanceConfig_TypeInfo;
  v56 = this->fields.isMainScenario;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v28);
    v55 = BalanceConfig_TypeInfo;
  }
  OrdealCallWarId = v55->static_fields->OrdealCallWarId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v28);
  if ( v56 )
    TerminalPramsManager__SetAutoResumeForFolder(OrdealCallWarId, 0LL);
  else
    TerminalPramsManager__SetAutoResumeByWarId(OrdealCallWarId, 0LL);
LABEL_66:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 0, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c__DisplayClass45_0___ctor(
        MissionNaviTransitionBoardItem___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c__DisplayClass45_0___GetNaviSceneTransitionAction_b__0(
        MissionNaviTransitionBoardItem___c__DisplayClass45_0_o *this,
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
  __int64 sceneDetail; // x0
  __int64 v41; // x20
  System_String_o *v42; // x21
  bool v43; // w0
  System_String_o *v44; // x24
  int v45; // w8
  System_String_o *v46; // x23
  _BOOL4 v47; // w22
  __int64 v48; // x1
  int v49; // w8
  _QWORD *v50; // x0
  System_Reflection_MethodBase_o *v51; // x0
  __int64 v52; // x2
  __int64 v53; // x3
  System_Action_o *_9__2; // x21
  CommonUI_o *v55; // x20
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x1
  Il2CppObject *Instance; // x19
  __int64 v64; // x2
  __int64 v65; // x3
  MissionNaviTransitionBoardItem___c_c *v66; // x8
  System_String_o *v67; // x20
  System_String_o *v68; // x21
  System_Action_o *_9__45_1; // x22
  Il2CppObject *v70; // x23
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  _QWORD *v78; // x0
  System_Reflection_MethodBase_o *v79; // x0
  bool v80; // w0
  __int64 v81; // x1
  __int64 v82; // x1
  Il2CppObject *entity; // [xsp+30h] [xbp-60h] BYREF
  int32_t result; // [xsp+3Ch] [xbp-54h] BYREF
  Il2CppObject *v85; // [xsp+40h] [xbp-50h] BYREF
  int32_t key; // [xsp+4Ch] [xbp-44h] BYREF

  if ( (byte_4B19C82 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ShopMaster___, v8, v9);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v14, v15);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v22, v23);
    sub_1BCA7E0(&Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__45_1__, v24, v25);
    sub_1BCA7E0(
      &Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__,
      v26,
      v27);
    sub_1BCA7E0(
      &Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__2__,
      v28,
      v29);
    sub_1BCA7E0(&MissionNaviTransitionBoardItem___c_TypeInfo, v30, v31);
    sub_1BCA7E0(&StringLiteral_5094/*"DIALOG_OUT_OF_TERM"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_6327/*"EventReward"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_13231/*"Summon"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v38, v39);
    byte_4B19C82 = 1;
  }
  key = 0;
  v85 = 0LL;
  result = 0;
  entity = 0LL;
  sceneDetail = (__int64)this->fields.sceneDetail;
  if ( !sceneDetail )
    goto LABEL_67;
  sceneDetail = (__int64)System_String__Split((System_String_o *)sceneDetail, 0x2Fu, 0, 0LL);
  if ( !sceneDetail )
    goto LABEL_67;
  v41 = sceneDetail;
  if ( !*(_DWORD *)(sceneDetail + 24) )
    sub_1BCAA44(sceneDetail, method);
  v42 = *(System_String_o **)(sceneDetail + 32);
  v43 = System_String__op_Equality(v42, (System_String_o *)StringLiteral_6327/*"EventReward"*/, 0LL);
  if ( v43 )
    v44 = v42;
  else
    v44 = 0LL;
  if ( v43 && ((v45 = *(_DWORD *)(v41 + 24), v45 >= 2) ? (v46 = v44) : (v46 = 0LL), v45 >= 2) )
  {
    v80 = System_Int32__TryParse(*(System_String_o **)(v41 + 40), &key, 0LL);
    if ( v80 )
      v42 = v46;
    else
      v42 = 0LL;
    if ( v80 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v81);
      sceneDetail = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
      if ( !sceneDetail )
        goto LABEL_67;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)sceneDetail,
             &v85,
             key,
             (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v82);
        sceneDetail = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopMaster___);
        if ( !sceneDetail )
          goto LABEL_67;
        v47 = !ShopMaster__IsEventShopOpen((ShopMaster_o *)sceneDetail, key, 0LL);
      }
      else
      {
        v47 = 0;
        v42 = v46;
      }
    }
    else
    {
      v47 = 0;
      v42 = v44;
    }
  }
  else
  {
    v47 = 0;
  }
  if ( !System_String__op_Equality(v42, (System_String_o *)StringLiteral_13231/*"Summon"*/, 0LL) || *(int *)(v41 + 24) < 2 )
    goto LABEL_28;
  System_Int32__TryParse(*(System_String_o **)(v41 + 40), &result, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v48);
  sceneDetail = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !sceneDetail )
    goto LABEL_67;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)sceneDetail,
          &entity,
          result,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__) )
    goto LABEL_28;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  sceneDetail = NetworkManager__getTime(0LL);
  if ( !entity )
    goto LABEL_67;
  if ( sceneDetail < (__int64)entity[6].monitor || sceneDetail > (__int64)entity[7].klass )
    v49 = 1;
  else
LABEL_28:
    v49 = 0;
  if ( !(v49 | v47) )
  {
    sceneDetail = (__int64)this->fields.item;
    if ( !sceneDetail )
      goto LABEL_67;
    sceneDetail = (__int64)MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)sceneDetail, 0LL);
    if ( !sceneDetail )
      goto LABEL_67;
    if ( EventMissionEntity__isNowMission((EventMissionEntity_o *)sceneDetail, 0LL) )
    {
      v50 = Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__;
      if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__
            + 83) & 2) != 0 )
        v50 = (_QWORD *)sub_1BCA7F8(Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__);
      v51 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v50, v50[4]);
      OverwriteAssetSoundName__PlaySystemSe(v51, 0, 0LL);
      sceneDetail = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( sceneDetail )
      {
        AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)sceneDetail, 1, 0LL);
        sceneDetail = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        _9__2 = this->fields.__9__2;
        v55 = (CommonUI_o *)sceneDetail;
        if ( !_9__2 )
        {
          _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v52, v53);
          System_Action___ctor(
            _9__2,
            (Il2CppObject *)this,
            Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__2__,
            0LL);
          this->fields.__9__2 = _9__2;
          sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v56, v57, v58, v59, v60, v61);
        }
        if ( v55 )
        {
          CommonUI__CloseMissionNaviTransitionConfirmDialog_30867652(v55, _9__2, 0LL);
          return;
        }
      }
LABEL_67:
      sub_1BCAA3C(sceneDetail, method);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v62);
  sceneDetail = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5094/*"DIALOG_OUT_OF_TERM"*/, 0LL);
  v66 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v67 = (System_String_o *)sceneDetail;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo, method);
    v66 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  v68 = (System_String_o *)StringLiteral_1/*""*/;
  _9__45_1 = v66->static_fields->__9__45_1;
  if ( !_9__45_1 )
  {
    if ( !v66->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v66, method);
      v66 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v70 = (Il2CppObject *)v66->static_fields->__9;
    _9__45_1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v64, v65);
    System_Action___ctor(
      _9__45_1,
      v70,
      Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__45_1__,
      0LL);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__45_1 = _9__45_1;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__45_1,
      (int64_t)_9__45_1,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77);
  }
  if ( !Instance )
    goto LABEL_67;
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v68, v67, _9__45_1, 500, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
  v78 = Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__;
  if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__ + 83) & 2) != 0 )
    v78 = (_QWORD *)sub_1BCA7F8(Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__);
  v79 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v78, v78[4]);
  OverwriteAssetSoundName__PlaySystemSe(v79, 2, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c__DisplayClass45_0___GetNaviSceneTransitionAction_b__2(
        MissionNaviTransitionBoardItem___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B19C83 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v4, v5);
    byte_4B19C83 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL),
        ActionExtensions__Call(this->fields.transitionSceneAction, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v7);
  }
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 0, 0LL);
}