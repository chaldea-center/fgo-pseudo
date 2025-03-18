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

  ListViewItem___ctor_42199332((ListViewItem_o *)this, index, 0LL);
  this->fields._IconName_k__BackingField = iconName;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._IconName_k__BackingField,
    (int64_t)iconName,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._Name_k__BackingField = name;
  sub_1C3B708(
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
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._ClosedMessage_k__BackingField,
    (int64_t)closedMessage,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields._NaviAction_k__BackingField = naviAction;
  sub_1C3B708(
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
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
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
  __int64 v30; // x8
  System_Action_o *v31; // x19

  if ( (byte_4C25BCD & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, tempQuestInfo);
    sub_1C3B764(&Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__, v7);
    sub_1C3B764(&MissionNaviTransitionBoardItem___c__DisplayClass43_0_TypeInfo, v8);
    byte_4C25BCD = 1;
  }
  v9 = sub_1C3B9B0(MissionNaviTransitionBoardItem___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = naviQuestEntity,
        sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)naviQuestEntity, v12, v13, v14, v15, v16, v17),
        *(_QWORD *)(v9 + 24) = tempQuestInfo,
        sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)tempQuestInfo, v18, v19, v20, v21, v22, v23),
        *(_QWORD *)(v9 + 32) = item,
        sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)item, v24, v25, v26, v27, v28, v29),
        (v30 = *(_QWORD *)(v9 + 16)) == 0) )
  {
    sub_1C3B9C0(v10, v11);
  }
  *(_DWORD *)(v9 + 40) = *(_DWORD *)(v30 + 20);
  v31 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v9,
    (intptr_t)Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__,
    0LL);
  return v31;
}


System_Action_o *__fastcall MissionNaviTransitionBoardItem__GetNaviSceneTransitionAction(
        System_String_o *sceneDetail,
        System_Action_o *transitionSceneAction,
        MissionListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
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
  System_Action_o *v30; // x19

  if ( (byte_4C25BCF & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, transitionSceneAction);
    sub_1C3B764(&Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__, v7);
    sub_1C3B764(&MissionNaviTransitionBoardItem___c__DisplayClass45_0_TypeInfo, v8);
    byte_4C25BCF = 1;
  }
  v9 = sub_1C3B9B0(MissionNaviTransitionBoardItem___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1C3B9C0(v10, v11);
  *(_QWORD *)(v9 + 16) = sceneDetail;
  sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)sceneDetail, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = item;
  sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)item, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 32) = transitionSceneAction;
  sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)transitionSceneAction, v24, v25, v26, v27, v28, v29);
  v30 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v9,
    (intptr_t)Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__,
    0LL);
  return v30;
}


System_Action_o *__fastcall MissionNaviTransitionBoardItem__GetNaviWarOrSpotTransitionAction(
        MissionNaviTransitionEntity_o *naviTransitionEntity,
        MissionListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  MapControl_WarInfo_o *LatestProgressWarInfo; // x0
  MapControl_SpotInfo_o *SpotInfo; // x0
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
  MapControl_SpotInfo_o *v32; // x0
  SpotEntity_o *Mine; // x1
  int32_t missionTransitionType; // w8
  System_Action_o *v35; // x19

  if ( (byte_4C25BCE & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, item);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    sub_1C3B764(
      &Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__,
      v6);
    sub_1C3B764(&MissionNaviTransitionBoardItem___c__DisplayClass44_0_TypeInfo, v7);
    sub_1C3B764(&StringLiteral_8679/*"MapGimmickEffect_GappolyPiece"*/, v8);
    byte_4C25BCE = 1;
  }
  v9 = sub_1C3B9B0(MissionNaviTransitionBoardItem___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_15;
  *(_QWORD *)(v9 + 40) = item;
  sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 40), (int64_t)item, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 36) = 0;
  *(_BYTE *)(v9 + 64) = 0;
  if ( !naviTransitionEntity )
    goto LABEL_15;
  if ( System_String__op_Equality(
         naviTransitionEntity->fields.transitionParam,
         (System_String_o *)StringLiteral_8679/*"MapGimmickEffect_GappolyPiece"*/,
         0LL) )
  {
    *(_BYTE *)(v9 + 64) = 1;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    LatestProgressWarInfo = QuestTree__GetLatestProgressWarInfo((QuestTree_o *)Instance, 0LL);
    if ( LatestProgressWarInfo )
      *(_DWORD *)(v9 + 36) = LatestProgressWarInfo->fields.warId;
  }
  else
  {
    System_Int32__TryParse(naviTransitionEntity->fields.transitionParam, (int32_t *)(v9 + 36), 0LL);
  }
  System_Int32__TryParse(naviTransitionEntity->fields.transitionParam, (int32_t *)(v9 + 48), 0LL);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_1C3B9C0(Instance, v11);
  SpotInfo = QuestTree__GetSpotInfo((QuestTree_o *)Instance, *(_DWORD *)(v9 + 48), 0LL);
  *(_QWORD *)(v9 + 24) = SpotInfo;
  sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)SpotInfo, v20, v21, v22, v23, v24, v25);
  v32 = *(MapControl_SpotInfo_o **)(v9 + 24);
  if ( v32 )
    Mine = MapControl_SpotInfo__GetMine(v32, 0LL);
  else
    Mine = 0LL;
  *(_QWORD *)(v9 + 56) = Mine;
  sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 56), (int64_t)Mine, v26, v27, v28, v29, v30, v31);
  missionTransitionType = naviTransitionEntity->fields.missionTransitionType;
  *(_BYTE *)(v9 + 16) = missionTransitionType == 3;
  *(_BYTE *)(v9 + 32) = missionTransitionType == 2;
  v35 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v9,
    (intptr_t)Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__,
    0LL);
  return v35;
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
    sub_1C3B9C0(0LL, item);
  transitionParam = missionNaviTransitionEnt->fields.transitionParam;
  MissionNaviTransitionEntity__TryGetChallengeNaviName(missionNaviTransitionEnt, &challengeNaviName, 0LL);
  MissionNaviTransitionEntity__TryGetChallengeIconName(missionNaviTransitionEnt, &v8, 0LL);
  return MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem_46779196(
           transitionParam,
           missionNaviTransitionEnt->fields.closedMessageId,
           challengeNaviName,
           v8,
           item,
           v6);
}


// local variable allocation has failed, the output may be wrong!
MissionNaviTransitionBoardItem_o *__fastcall MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem_46779196(
        System_String_o *sceneDetail,
        int32_t closedMessageId,
        System_String_o *naviName,
        System_String_o *iconName,
        MissionListViewItem_o *item,
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
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x1
  __int64 v69; // x1
  __int64 v70; // x1
  __int64 v71; // x1
  __int64 v72; // x1
  __int64 v73; // x1
  __int64 v74; // x1
  __int64 v75; // x1
  int64_t Master_object; // x0
  System_String_o *closedMessage; // x28
  System_Action_o *NaviSceneTransitionAction; // x24
  Il2CppObject *v79; // x25
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int64_t v87; // x25
  System_String_o *v88; // x27
  __int64 v89; // x26
  __int64 v90; // x26
  int32_t *v91; // x27
  Il2CppObject *v92; // x24
  __int64 v93; // x24
  int32_t v94; // w25
  char v95; // w23
  System_String_o *v96; // x29
  System_String_o *v97; // x25
  BalanceConfig_c *v98; // x0
  int32_t ClassBoardReleaseQuestId; // w25
  bool IsQuestClear_39011304; // w26
  System_String_o *v101; // x0
  const MethodInfo *v102; // x3
  MissionNaviTransitionBoardItem___c_c *v103; // x8
  System_String_o *v104; // x25
  System_Action_o *_9__42_1; // x24
  Il2CppObject *v106; // x27
  struct MissionNaviTransitionBoardItem___c_StaticFields *v107; // x0
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  System_String_o *v114; // x0
  __int64 v115; // x24
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  System_String_o *v122; // x25
  SceneJumpInfo_o *v123; // x27
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  __int64 *v130; // x22
  __int64 *v131; // x8
  System_String_o *v132; // x0
  const MethodInfo *v133; // x3
  MissionNaviTransitionBoardItem___c_c *v134; // x8
  System_Action_o *_9__42_2; // x24
  Il2CppObject *v136; // x26
  int64_t v137; // x2
  int32_t v138; // w3
  System_String_o *v139; // x4
  BattleSetupInfo_o *v140; // x5
  FollowerInfo_o *v141; // x6
  PartyListViewItem_o *v142; // x7
  struct MissionNaviTransitionBoardItem___c_StaticFields *v143; // x0
  PartyOrganizationUtility_o *p__9__42_2; // x0
  int32_t v145; // w24
  SceneJumpInfo_o *v146; // x25
  int64_t v147; // x2
  int32_t v148; // w3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  System_String_o *v153; // x0
  MissionNaviTransitionBoardItem___c_c *v154; // x8
  Il2CppObject *v155; // x26
  struct MissionNaviTransitionBoardItem___c_StaticFields *v156; // x0
  System_String_o *v157; // x0
  System_Action_o *v158; // x1
  __int64 v159; // x26
  __int64 *v160; // x25
  __int64 v161; // x8
  bool v162; // w0
  System_String_o *v163; // x0
  System_Action_o *v164; // x26
  System_String_o *v165; // x22
  bool v166; // w21
  MissionNaviTransitionBoardItem_o *v167; // x20
  int32_t v169; // w27
  SceneJumpInfo_o *v170; // x26
  int64_t v171; // x2
  int32_t v172; // w3
  System_String_o *v173; // x4
  BattleSetupInfo_o *v174; // x5
  FollowerInfo_o *v175; // x6
  PartyListViewItem_o *v176; // x7
  System_Action_o *v177; // x0
  __int64 *v178; // x8
  System_Action_o *v179; // x27
  Il2CppObject *v180; // x1
  System_Action_o *v181; // x24
  const MethodInfo *v182; // x3
  __int64 v183; // x8
  Il2CppObject *v184; // x22
  System_String_o *v185; // x0
  const MethodInfo *v186; // [xsp+10h] [xbp-A0h]
  Il2CppObject *v189; // [xsp+28h] [xbp-88h] BYREF
  int32_t v190; // [xsp+34h] [xbp-7Ch] BYREF
  Il2CppObject *v191; // [xsp+38h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+40h] [xbp-70h] BYREF
  int32_t result; // [xsp+4Ch] [xbp-64h] BYREF

  if ( (byte_4C25BCC & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&closedMessageId);
    sub_1C3B764(&BalanceConfig_TypeInfo, v9);
    sub_1C3B764(&CondType_TypeInfo, v10);
    sub_1C3B764(&Method_DataManager_GetMaster_ClosedMessageMaster___, v11);
    sub_1C3B764(&Method_DataManager_GetMaster_EventDetailMaster___, v12);
    sub_1C3B764(&Method_DataManager_GetMaster_EventMaster___, v13);
    sub_1C3B764(&Method_DataManager_GetMaster_GachaMaster___, v14);
    sub_1C3B764(&Method_DataManager_GetMaster_ShopMaster___, v15);
    sub_1C3B764(&DataManager_TypeInfo, v16);
    sub_1C3B764(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v17);
    sub_1C3B764(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v18);
    sub_1C3B764(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v19);
    sub_1C3B764(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v20);
    sub_1C3B764(&LocalizationManager_TypeInfo, v21);
    sub_1C3B764(&MissionNaviTransitionBoardItem_TypeInfo, v22);
    sub_1C3B764(&NetworkManager_TypeInfo, v23);
    sub_1C3B764(&SceneJumpInfo_TypeInfo, v24);
    sub_1C3B764(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_0__, v25);
    sub_1C3B764(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_1__, v26);
    sub_1C3B764(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_2__, v27);
    sub_1C3B764(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_4__, v28);
    sub_1C3B764(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_0__SetupSceneTransitionBoardItem_b__3__, v29);
    sub_1C3B764(&MissionNaviTransitionBoardItem___c__DisplayClass42_0_TypeInfo, v30);
    sub_1C3B764(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_1__SetupSceneTransitionBoardItem_b__5__, v31);
    sub_1C3B764(&MissionNaviTransitionBoardItem___c__DisplayClass42_1_TypeInfo, v32);
    sub_1C3B764(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_2__SetupSceneTransitionBoardItem_b__6__, v33);
    sub_1C3B764(&MissionNaviTransitionBoardItem___c__DisplayClass42_2_TypeInfo, v34);
    sub_1C3B764(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_3__SetupSceneTransitionBoardItem_b__7__, v35);
    sub_1C3B764(&MissionNaviTransitionBoardItem___c__DisplayClass42_3_TypeInfo, v36);
    sub_1C3B764(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_4__SetupSceneTransitionBoardItem_b__8__, v37);
    sub_1C3B764(&MissionNaviTransitionBoardItem___c__DisplayClass42_4_TypeInfo, v38);
    sub_1C3B764(&MissionNaviTransitionBoardItem___c_TypeInfo, v39);
    sub_1C3B764(&StringLiteral_43/*"\n"*/, v40);
    sub_1C3B764(&StringLiteral_23606/*"time_status_icon_noon"*/, v41);
    sub_1C3B764(&StringLiteral_117/*"   "*/, v42);
    sub_1C3B764(&StringLiteral_23764/*"tutorial_0006"*/, v43);
    sub_1C3B764(&StringLiteral_12926/*"System.Collections.Immutable.ImmutableStack`1"*/, v44);
    sub_1C3B764(&StringLiteral_8847/*"Microsoft.FSharp.Reflection.FSharpValue"*/, v45);
    sub_1C3B764(&StringLiteral_6680/*"FontAsset.UpdateGlyphAdjustmentRecords"*/, v46);
    sub_1C3B764(&StringLiteral_4677/*"Corsican (France)"*/, v47);
    sub_1C3B764(&StringLiteral_4563/*"CompleteEnemyCountChange"*/, v48);
    sub_1C3B764(&StringLiteral_18344/*"dv-MV"*/, v49);
    sub_1C3B764(&StringLiteral_22429/*"race_status_"*/, v50);
    sub_1C3B764(&StringLiteral_8854/*"MinLength is greater than MaxLength."*/, v51);
    sub_1C3B764(&StringLiteral_23609/*"time_status_side_02"*/, v52);
    sub_1C3B764(&StringLiteral_8852/*"Min ("*/, v53);
    sub_1C3B764(&StringLiteral_6369/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_TITLE"*/, v54);
    sub_1C3B764(&StringLiteral_8856/*"Minimum message length is 12 bytes."*/, v55);
    sub_1C3B764(&StringLiteral_8841/*"Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfoFlags, Microsoft.CSharp, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a"*/, v56);
    sub_1C3B764(&StringLiteral_8845/*"Microsoft.FSharp.Core.CompilationMappingAttribute"*/, v57);
    sub_1C3B764(&StringLiteral_23605/*"time_status_icon_night"*/, v58);
    sub_1C3B764(&StringLiteral_8853/*"Min ({0}) must be less than or equal to max ({1}) in a Range object."*/, v59);
    sub_1C3B764(&StringLiteral_24163/*"value"*/, v60);
    sub_1C3B764(&StringLiteral_8848/*"Microsoft.FSharp.Reflection.UnionCaseInfo"*/, v61);
    sub_1C3B764(&StringLiteral_8851/*"Min"*/, v62);
    sub_1C3B764(&StringLiteral_23608/*"time_status_side_01"*/, v63);
    sub_1C3B764(&StringLiteral_20017/*"img_listbg_04"*/, v64);
    sub_1C3B764(&StringLiteral_7010/*"HEADER_MSG_SKILLUP"*/, v65);
    sub_1C3B764(&StringLiteral_13362/*"TerminalEndTime"*/, v66);
    sub_1C3B764(&StringLiteral_12910/*"System.Collections.Immutable.IImmutableStack`1"*/, v67);
    sub_1C3B764(&StringLiteral_12907/*"System.Collections.Immutable.IImmutableList`1"*/, v68);
    sub_1C3B764(&StringLiteral_9381/*"NumericConvert"*/, v69);
    sub_1C3B764(&StringLiteral_8833/*"Metric was already started."*/, v70);
    sub_1C3B764(&StringLiteral_12920/*"System.Collections.Immutable.ImmutableQueue`1"*/, v71);
    sub_1C3B764(&StringLiteral_8855/*"MiniProgressBar/CancelButton"*/, v72);
    sub_1C3B764(&StringLiteral_1/*""*/, v73);
    sub_1C3B764(&StringLiteral_24166/*"valueCount"*/, v74);
    sub_1C3B764(&StringLiteral_8843/*"Microsoft.FSharp.Collections.FSharpMap`2"*/, v75);
    byte_4C25BCC = 1;
  }
  Master_object = (int64_t)MissionNaviTransitionBoardItem___c_TypeInfo;
  result = 0;
  v191 = 0LL;
  entity = 0LL;
  v190 = 0;
  v189 = 0LL;
  closedMessage = (System_String_o *)StringLiteral_1/*""*/;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
    Master_object = (int64_t)MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  NaviSceneTransitionAction = *(System_Action_o **)(*(_QWORD *)(Master_object + 184) + 8LL);
  if ( !NaviSceneTransitionAction )
  {
    if ( !*(_DWORD *)(Master_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = (int64_t)MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v79 = **(Il2CppObject ***)(Master_object + 184);
    NaviSceneTransitionAction = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      NaviSceneTransitionAction,
      v79,
      Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_0__,
      0LL);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__42_0 = NaviSceneTransitionAction;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__42_0,
      (int64_t)NaviSceneTransitionAction,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86);
  }
  if ( !sceneDetail )
    goto LABEL_152;
  Master_object = (int64_t)System_String__Split(sceneDetail, 0x2Fu, 0, 0LL);
  if ( !Master_object )
    goto LABEL_152;
  v87 = Master_object;
  if ( !*(_DWORD *)(Master_object + 24) )
    goto LABEL_153;
  v88 = *(System_String_o **)(Master_object + 32);
  v89 = sub_1C3B9B0(MissionNaviTransitionBoardItem___c__DisplayClass42_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v89, 0LL);
  if ( !System_String__op_Equality(v88, (System_String_o *)StringLiteral_6369/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_TITLE"*/, 0LL) )
  {
    if ( System_String__op_Equality(v88, (System_String_o *)StringLiteral_4677/*"Corsican (France)"*/, 0LL) )
    {
      if ( *(int *)(v87 + 24) < 2 )
        goto LABEL_35;
      v115 = sub_1C3B9B0(MissionNaviTransitionBoardItem___c__DisplayClass42_3_TypeInfo);
      System_Object___ctor((Il2CppObject *)v115, 0LL);
      if ( *(_DWORD *)(v87 + 24) <= 1u )
        goto LABEL_153;
      if ( !v115 )
        goto LABEL_152;
      v122 = *(System_String_o **)(v87 + 40);
      *(_QWORD *)(v115 + 16) = 0LL;
      sub_1C3B708((PartyOrganizationUtility_o *)(v115 + 16), 0LL, v116, v117, v118, v119, v120, v121);
      v123 = (SceneJumpInfo_o *)sub_1C3B9B0(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_40098212(v123, v122, 0LL);
      *(_QWORD *)(v115 + 16) = v123;
      sub_1C3B708((PartyOrganizationUtility_o *)(v115 + 16), (int64_t)v123, v124, v125, v126, v127, v128, v129);
      if ( System_String__op_Equality(v122, (System_String_o *)StringLiteral_12907/*"System.Collections.Immutable.IImmutableList`1"*/, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v130 = &StringLiteral_23605/*"time_status_icon_night"*/;
        v131 = &StringLiteral_8851/*"Min"*/;
      }
      else if ( System_String__op_Equality(v122, (System_String_o *)StringLiteral_12926/*"System.Collections.Immutable.ImmutableStack`1"*/, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v130 = &StringLiteral_23609/*"time_status_side_02"*/;
        v131 = &StringLiteral_8854/*"MinLength is greater than MaxLength."*/;
      }
      else if ( System_String__op_Equality(v122, (System_String_o *)StringLiteral_12910/*"System.Collections.Immutable.IImmutableStack`1"*/, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v130 = &StringLiteral_23606/*"time_status_icon_noon"*/;
        v131 = &StringLiteral_8852/*"Min ("*/;
      }
      else
      {
        v162 = System_String__op_Equality(v122, (System_String_o *)StringLiteral_12920/*"System.Collections.Immutable.ImmutableQueue`1"*/, 0LL);
        v96 = closedMessage;
        v97 = closedMessage;
        if ( !v162 )
        {
LABEL_118:
          v164 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
          System_Action___ctor(
            v164,
            (Il2CppObject *)v115,
            Method_MissionNaviTransitionBoardItem___c__DisplayClass42_3__SetupSceneTransitionBoardItem_b__7__,
            0LL);
          v157 = sceneDetail;
          v158 = v164;
          goto LABEL_119;
        }
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v130 = &StringLiteral_23608/*"time_status_side_01"*/;
        v131 = &StringLiteral_8853/*"Min ({0}) must be less than or equal to max ({1}) in a Range object."*/;
      }
      v163 = LocalizationManager__Get((System_String_o *)*v131, 0LL);
      v96 = (System_String_o *)*v130;
      v97 = v163;
      goto LABEL_118;
    }
    if ( System_String__op_Equality(v88, (System_String_o *)StringLiteral_4563/*"CompleteEnemyCountChange"*/, 0LL) )
    {
      v98 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v98 = BalanceConfig_TypeInfo;
      }
      ClassBoardReleaseQuestId = v98->static_fields->ClassBoardReleaseQuestId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsQuestClear_39011304(ClassBoardReleaseQuestId, -1, 0, 0LL);
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( IsQuestClear_39011304 )
        {
LABEL_45:
          v101 = LocalizationManager__Get((System_String_o *)StringLiteral_8833/*"Metric was already started."*/, 0LL);
          v103 = MissionNaviTransitionBoardItem___c_TypeInfo;
          v104 = v101;
          if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
            v103 = MissionNaviTransitionBoardItem___c_TypeInfo;
          }
          _9__42_1 = v103->static_fields->__9__42_1;
          if ( !_9__42_1 )
          {
            if ( !v103->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v103);
              v103 = MissionNaviTransitionBoardItem___c_TypeInfo;
            }
            v106 = (Il2CppObject *)v103->static_fields->__9;
            _9__42_1 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
            System_Action___ctor(
              _9__42_1,
              v106,
              Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_1__,
              0LL);
            v107 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
            v107->__9__42_1 = _9__42_1;
            sub_1C3B708(
              (PartyOrganizationUtility_o *)&v107->__9__42_1,
              (int64_t)_9__42_1,
              v108,
              v109,
              v110,
              v111,
              v112,
              v113);
          }
          NaviSceneTransitionAction = MissionNaviTransitionBoardItem__GetNaviSceneTransitionAction(
                                        sceneDetail,
                                        _9__42_1,
                                        item,
                                        v102);
          v114 = closedMessage;
          closedMessage = v104;
          goto LABEL_83;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( IsQuestClear_39011304 )
          goto LABEL_45;
      }
      v114 = LocalizationManager__Get((System_String_o *)StringLiteral_8848/*"Microsoft.FSharp.Reflection.UnionCaseInfo"*/, 0LL);
LABEL_83:
      v97 = closedMessage;
      v95 = !IsQuestClear_39011304;
      closedMessage = v114;
      v96 = (System_String_o *)StringLiteral_18344/*"dv-MV"*/;
      goto LABEL_121;
    }
    if ( System_String__op_Equality(v88, (System_String_o *)StringLiteral_13362/*"TerminalEndTime"*/, 0LL) )
    {
      v96 = (System_String_o *)StringLiteral_24163/*"value"*/;
      if ( *(int *)(v87 + 24) >= 2 )
      {
        if ( System_String__op_Equality(*(System_String_o **)(v87 + 40), (System_String_o *)StringLiteral_6680/*"FontAsset.UpdateGlyphAdjustmentRecords"*/, 0LL) )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v132 = LocalizationManager__Get((System_String_o *)StringLiteral_8856/*"Minimum message length is 12 bytes."*/, 0LL);
          v134 = MissionNaviTransitionBoardItem___c_TypeInfo;
          v97 = v132;
          v96 = (System_String_o *)StringLiteral_24166/*"valueCount"*/;
          if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
            v134 = MissionNaviTransitionBoardItem___c_TypeInfo;
          }
          _9__42_2 = v134->static_fields->__9__42_2;
          if ( _9__42_2 )
            goto LABEL_98;
          if ( !v134->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v134);
            v134 = MissionNaviTransitionBoardItem___c_TypeInfo;
          }
          v136 = (Il2CppObject *)v134->static_fields->__9;
          _9__42_2 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
          System_Action___ctor(
            _9__42_2,
            v136,
            Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_2__,
            0LL);
          v143 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
          v143->__9__42_2 = _9__42_2;
          p__9__42_2 = (PartyOrganizationUtility_o *)&v143->__9__42_2;
LABEL_97:
          sub_1C3B708(p__9__42_2, (int64_t)_9__42_2, v137, v138, v139, v140, v141, v142);
LABEL_98:
          v157 = sceneDetail;
          v158 = _9__42_2;
LABEL_119:
          NaviSceneTransitionAction = MissionNaviTransitionBoardItem__GetNaviSceneTransitionAction(
                                        v157,
                                        v158,
                                        item,
                                        v133);
LABEL_120:
          v95 = 0;
          goto LABEL_121;
        }
        if ( *(int *)(v87 + 24) >= 2 )
        {
          v159 = sub_1C3B9B0(MissionNaviTransitionBoardItem___c__DisplayClass42_4_TypeInfo);
          System_Object___ctor((Il2CppObject *)v159, 0LL);
          if ( *(_DWORD *)(v87 + 24) <= 1u )
            goto LABEL_153;
          if ( !v159 )
            goto LABEL_152;
          System_Int32__TryParse(*(System_String_o **)(v87 + 40), (int32_t *)(v159 + 16), 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_GachaMaster___);
          if ( !Master_object )
            goto LABEL_152;
          v160 = (__int64 *)(v159 + 24);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 (Il2CppObject **)(v159 + 24),
                 *(_DWORD *)(v159 + 16),
                 (const MethodInfo_329AE94 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__) )
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Master_object = NetworkManager__getTime(0LL);
            v161 = *v160;
            if ( !*v160 )
              goto LABEL_152;
            if ( Master_object >= *(_QWORD *)(v161 + 104) && Master_object <= *(_QWORD *)(v161 + 112) )
            {
              v181 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
              System_Action___ctor(
                v181,
                (Il2CppObject *)v159,
                Method_MissionNaviTransitionBoardItem___c__DisplayClass42_4__SetupSceneTransitionBoardItem_b__8__,
                0LL);
              Master_object = (int64_t)MissionNaviTransitionBoardItem__GetNaviSceneTransitionAction(
                                         sceneDetail,
                                         v181,
                                         item,
                                         v182);
              v183 = *(_QWORD *)(v159 + 24);
              if ( !v183 )
                goto LABEL_152;
              NaviSceneTransitionAction = (System_Action_o *)Master_object;
              Master_object = *(_QWORD *)(v183 + 24);
              if ( !Master_object )
                goto LABEL_152;
              v184 = (Il2CppObject *)System_String__Replace_63388240(
                                       (System_String_o *)Master_object,
                                       (System_String_o *)StringLiteral_43/*"\n"*/,
                                       (System_String_o *)StringLiteral_117/*"   "*/,
                                       0LL);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v185 = LocalizationManager__Get((System_String_o *)StringLiteral_8855/*"MiniProgressBar/CancelButton"*/, 0LL);
              v97 = System_String__Format(v185, v184, 0LL);
              goto LABEL_120;
            }
            NaviSceneTransitionAction = 0LL;
            v95 = 1;
            goto LABEL_37;
          }
        }
      }
      v95 = 0;
      goto LABEL_37;
    }
    if ( System_String__op_Equality(v88, (System_String_o *)StringLiteral_7010/*"HEADER_MSG_SKILLUP"*/, 0LL) )
    {
      result = 0;
      v145 = 0;
      v96 = (System_String_o *)StringLiteral_20017/*"img_listbg_04"*/;
      if ( *(int *)(v87 + 24) >= 2 )
      {
        System_Int32__TryParse(*(System_String_o **)(v87 + 40), &result, 0LL);
        v145 = result;
      }
      v146 = (SceneJumpInfo_o *)sub_1C3B9B0(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_40098260(v146, v145, 0LL);
      if ( !v89 )
        goto LABEL_152;
      *(_QWORD *)(v89 + 16) = v146;
      sub_1C3B708((PartyOrganizationUtility_o *)(v89 + 16), (int64_t)v146, v147, v148, v149, v150, v151, v152);
      _9__42_2 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(
        _9__42_2,
        (Il2CppObject *)v89,
        Method_MissionNaviTransitionBoardItem___c__DisplayClass42_0__SetupSceneTransitionBoardItem_b__3__,
        0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v97 = LocalizationManager__Get((System_String_o *)StringLiteral_8843/*"Microsoft.FSharp.Collections.FSharpMap`2"*/, 0LL);
      goto LABEL_98;
    }
    if ( !System_String__op_Equality(v88, (System_String_o *)StringLiteral_9381/*"NumericConvert"*/, 0LL) )
      goto LABEL_35;
    v96 = (System_String_o *)StringLiteral_22429/*"race_status_"*/;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v153 = LocalizationManager__Get((System_String_o *)StringLiteral_8845/*"Microsoft.FSharp.Core.CompilationMappingAttribute"*/, 0LL);
    v154 = MissionNaviTransitionBoardItem___c_TypeInfo;
    v97 = v153;
    if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
      v154 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    _9__42_2 = v154->static_fields->__9__42_4;
    if ( _9__42_2 )
      goto LABEL_98;
    if ( !v154->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v154);
      v154 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v155 = (Il2CppObject *)v154->static_fields->__9;
    _9__42_2 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__42_2,
      v155,
      Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_4__,
      0LL);
    v156 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    v156->__9__42_4 = _9__42_2;
    p__9__42_2 = (PartyOrganizationUtility_o *)&v156->__9__42_4;
    goto LABEL_97;
  }
  if ( *(int *)(v87 + 24) < 2 )
    goto LABEL_35;
  v90 = sub_1C3B9B0(MissionNaviTransitionBoardItem___c__DisplayClass42_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v90, 0LL);
  if ( *(_DWORD *)(v87 + 24) <= 1u )
LABEL_153:
    sub_1C3B9C8(Master_object, *(_QWORD *)&closedMessageId);
  if ( !v90 )
    goto LABEL_152;
  v91 = (int32_t *)(v90 + 16);
  if ( System_Int32__TryParse(*(System_String_o **)(v87 + 40), (int32_t *)(v90 + 16), 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v92 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventDetailMaster___);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
      goto LABEL_152;
    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                      &entity,
                      *v91,
                      (const MethodInfo_329AE94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    if ( (Master_object & 1) != 0 )
    {
      if ( !v92 )
        goto LABEL_152;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)v92,
             &v191,
             *v91,
             (const MethodInfo_329AE94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ShopMaster___);
        if ( !Master_object )
          goto LABEL_152;
        if ( ShopMaster__IsEventShopOpen((ShopMaster_o *)Master_object, *v91, 0LL) )
        {
          Master_object = (int64_t)v191;
          if ( !v191 )
            goto LABEL_152;
          if ( EventDetailEntity__IsReward((EventDetailEntity_o *)v191, 0LL) )
            goto LABEL_31;
          Master_object = (int64_t)v191;
          if ( !v191 )
            goto LABEL_152;
          if ( EventDetailEntity__IsEventShop((EventDetailEntity_o *)v191, 0LL) )
          {
LABEL_31:
            v93 = sub_1C3B9B0(MissionNaviTransitionBoardItem___c__DisplayClass42_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v93, 0LL);
            v190 = 0;
            if ( *(int *)(v87 + 24) >= 3 )
            {
              System_Int32__TryParse(*(System_String_o **)(v87 + 48), &v190, 0LL);
              v94 = v190 + 1;
            }
            else
            {
              v94 = 1;
            }
            v169 = *v91;
            v170 = (SceneJumpInfo_o *)sub_1C3B9B0(SceneJumpInfo_TypeInfo);
            SceneJumpInfo___ctor_40098360(v170, (System_String_o *)StringLiteral_1/*""*/, v169, v94, 0LL);
            if ( !v93 )
              goto LABEL_152;
            *(_QWORD *)(v93 + 16) = v170;
            sub_1C3B708((PartyOrganizationUtility_o *)(v93 + 16), (int64_t)v170, v171, v172, v173, v174, v175, v176);
            v177 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
            v178 = &Method_MissionNaviTransitionBoardItem___c__DisplayClass42_2__SetupSceneTransitionBoardItem_b__6__;
            v179 = v177;
            v180 = (Il2CppObject *)v93;
          }
          else
          {
            Master_object = (int64_t)v191;
            if ( !v191 )
              goto LABEL_152;
            v179 = 0LL;
            if ( !EventDetailEntity__IsExchangeShop((EventDetailEntity_o *)v191, 0LL) )
              goto LABEL_141;
            v177 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
            v178 = &Method_MissionNaviTransitionBoardItem___c__DisplayClass42_1__SetupSceneTransitionBoardItem_b__5__;
            v179 = v177;
            v180 = (Il2CppObject *)v90;
          }
          System_Action___ctor(v177, v180, *v178, 0LL);
LABEL_141:
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v97 = LocalizationManager__Get((System_String_o *)StringLiteral_8841/*"Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfoFlags, Microsoft.CSharp, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a"*/, 0LL);
          v157 = sceneDetail;
          v158 = v179;
          v96 = (System_String_o *)StringLiteral_23764/*"tutorial_0006"*/;
          goto LABEL_119;
        }
      }
    }
    NaviSceneTransitionAction = 0LL;
    v95 = 1;
    goto LABEL_36;
  }
LABEL_35:
  v95 = 0;
LABEL_36:
  v96 = closedMessage;
LABEL_37:
  v97 = closedMessage;
LABEL_121:
  if ( System_String__op_Inequality(naviName, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    v165 = naviName;
  else
    v165 = v97;
  v166 = System_String__op_Inequality(iconName, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( (v95 & 1) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v165 = LocalizationManager__Get((System_String_o *)StringLiteral_8847/*"Microsoft.FSharp.Reflection.FSharpValue"*/, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ClosedMessageMaster___);
    if ( closedMessageId )
    {
      if ( Master_object )
      {
        Master_object = DataMasterBase_object__object__int___TryGetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          &v189,
                          closedMessageId,
                          (const MethodInfo_329AE94 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
        if ( (Master_object & 1) == 0 )
          goto LABEL_134;
        if ( v189 )
        {
          closedMessage = (System_String_o *)v189[1].monitor;
          goto LABEL_134;
        }
      }
LABEL_152:
      sub_1C3B9C0(Master_object, *(_QWORD *)&closedMessageId);
    }
  }
LABEL_134:
  if ( !v166 )
    iconName = v96;
  v167 = (MissionNaviTransitionBoardItem_o *)sub_1C3B9B0(MissionNaviTransitionBoardItem_TypeInfo);
  MissionNaviTransitionBoardItem___ctor(
    v167,
    0,
    iconName,
    v165,
    0,
    0,
    0,
    v95 & 1,
    closedMessage,
    NaviSceneTransitionAction,
    v186);
  return v167;
}


bool __fastcall MissionNaviTransitionBoardItem__TrySetupQuestListTransitionBoardItem(
        MissionNaviTransitionEntity_o *missionNaviTransitionEntity,
        MissionListViewItem_o *item,
        System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **challengeBoardList,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  void *transitionParam; // x0
  __int64 v22; // x1
  int v23; // w8
  void *v24; // x21
  bool v25; // w20
  int v26; // w19
  MissionNaviQuestEntity_o *v27; // x23
  int32_t questId; // w22
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v30; // x26
  const MethodInfo *v31; // x3
  bool v32; // w20
  System_Action_o *NaviQuestTransitionAction; // x0
  bool v34; // w25
  System_ValueTuple_string__string__o closedMessage; // kr00_16
  int32_t size; // w24
  System_String_o *v37; // x29
  bool HasFlag; // w20
  MissionNaviTransitionBoardItem_o *v39; // x23
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  const MethodInfo *v52; // [xsp+10h] [xbp-90h]
  System_Action_o *v54; // [xsp+28h] [xbp-78h]
  System_String_o *challengeIconName; // [xsp+30h] [xbp-70h] BYREF
  int32_t result; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_4C25BC9 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_MissionNaviQuestMaster___, item);
    sub_1C3B764(&DataManager_TypeInfo, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__get_Count__, v9);
    sub_1C3B764(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo, v10);
    sub_1C3B764(&MissionNaviTransitionBoardItem_TypeInfo, v11);
    sub_1C3B764(&MissionNaviTransitionConfirmDialog_TypeInfo, v12);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v13);
    byte_4C25BC9 = 1;
  }
  result = 0;
  challengeIconName = 0LL;
  v14 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *challengeBoardList = (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o *)v14;
  sub_1C3B708((PartyOrganizationUtility_o *)challengeBoardList, (int64_t)v14, v15, v16, v17, v18, v19, v20);
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
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  transitionParam = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_MissionNaviQuestMaster___);
  if ( !transitionParam
    || (transitionParam = MissionNaviQuestMaster__GetOpenQuestByNaviQuestMasterId(
                            (MissionNaviQuestMaster_o *)transitionParam,
                            result,
                            0LL)) == 0LL )
  {
LABEL_33:
    sub_1C3B9C0(transitionParam, v22);
  }
  v23 = *((_DWORD *)transitionParam + 6);
  v24 = transitionParam;
  v25 = v23 > 0;
  if ( v23 >= 1 )
  {
    v26 = 0;
    while ( v26 < (unsigned int)v23 )
    {
      v27 = (MissionNaviQuestEntity_o *)*((_QWORD *)v24 + v26 + 4);
      if ( !v27 )
        goto LABEL_33;
      questId = v27->fields.questId;
      transitionParam = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !transitionParam )
        goto LABEL_33;
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)transitionParam, questId, 0LL);
      if ( !QuestInfo )
        return !v25;
      v30 = QuestInfo;
      v32 = !MissionNaviQuestEntity__IsNaviBoardOpen(v27, QuestInfo, 0LL);
      NaviQuestTransitionAction = 0LL;
      if ( !v32 )
        NaviQuestTransitionAction = MissionNaviTransitionBoardItem__GetNaviQuestTransitionAction(v27, v30, item, v31);
      v54 = NaviQuestTransitionAction;
      if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
      v34 = v32;
      closedMessage = MissionNaviTransitionConfirmDialog__GetQuestNaviNameAndClosedMessage(v27, v30, v32, v31);
      transitionParam = (void *)MissionNaviQuestEntity__TryGetChallengeIconName(v27, &challengeIconName, 0LL);
      if ( !*challengeBoardList )
        goto LABEL_33;
      size = (*challengeBoardList)->fields._size;
      v37 = challengeIconName;
      HasFlag = MissionNaviQuestEntity__HasFlag(v27, 2LL, 0LL);
      v39 = (MissionNaviTransitionBoardItem_o *)sub_1C3B9B0(MissionNaviTransitionBoardItem_TypeInfo);
      MissionNaviTransitionBoardItem___ctor(
        v39,
        size,
        v37,
        closedMessage.fields.Item1,
        1,
        questId,
        HasFlag,
        v34,
        closedMessage.fields.Item2,
        v54,
        v52);
      transitionParam = *challengeBoardList;
      if ( !*challengeBoardList )
        goto LABEL_33;
      v46 = *((_QWORD *)transitionParam + 2);
      v47 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__;
      ++*((_DWORD *)transitionParam + 7);
      if ( !v46 )
        goto LABEL_33;
      v48 = *((int *)transitionParam + 6);
      if ( (unsigned int)v48 >= *(_DWORD *)(v46 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)transitionParam,
          (Il2CppObject *)v39,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v49 = v46 + 8 * v48;
        *((_DWORD *)transitionParam + 6) = v48 + 1;
        *(_QWORD *)(v49 + 32) = v39;
        sub_1C3B708((PartyOrganizationUtility_o *)(v49 + 32), (int64_t)v39, v40, v41, v42, v43, v44, v45);
      }
      v23 = *((_DWORD *)v24 + 6);
      v25 = ++v26 < v23;
      if ( v26 >= v23 )
        return !v25;
    }
LABEL_34:
    sub_1C3B9C8(transitionParam, v22);
  }
  return !v25;
}


bool __fastcall MissionNaviTransitionBoardItem__TrySetupSpotTransitionBoardItem(
        MissionNaviTransitionEntity_o *missionNaviTransitionEntity,
        MissionListViewItem_o *item,
        System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **challengeBoardList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x22
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  QuestTree_o *Instance; // x0
  __int64 v20; // x1
  MapControl_SpotInfo_o *SpotInfo; // x0
  MapControl_SpotInfo_o *v22; // x23
  SpotEntity_o *Mine; // x0
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x3
  int32_t dispType; // w25
  SpotEntity_o *v27; // x24
  System_Action_o *NaviWarOrSpotTransitionAction; // x22
  System_ValueTuple_string__string__o closedMessage; // kr00_16
  bool v30; // w0
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  const MethodInfo *v32; // x1
  System_String_o *IconNameByWarInfo; // x24
  MissionNaviTransitionBoardItem_o *v34; // x20
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct MapControl_RootInfo_o *mapControlRootInfo; // x8
  _QWORD *v42; // x9
  __int64 allQuestInfoList_low; // x10
  __int64 v44; // x8
  const MethodInfo *v46; // [xsp+10h] [xbp-70h]
  System_String_o *challengeIconName; // [xsp+20h] [xbp-60h] BYREF
  int32_t result; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_4C25BCB & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__, item);
    sub_1C3B764(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__, v7);
    sub_1C3B764(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo, v8);
    sub_1C3B764(&MissionNaviTransitionBoardItem_TypeInfo, v9);
    sub_1C3B764(&MissionNaviTransitionConfirmDialog_TypeInfo, v10);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v11);
    byte_4C25BCB = 1;
  }
  result = 0;
  challengeIconName = 0LL;
  v12 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *challengeBoardList = (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o *)v12;
  sub_1C3B708((PartyOrganizationUtility_o *)challengeBoardList, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  if ( !missionNaviTransitionEntity )
    goto LABEL_22;
  System_Int32__TryParse(missionNaviTransitionEntity->fields.transitionParam, &result, 0LL);
  Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  SpotInfo = QuestTree__GetSpotInfo(Instance, result, 0LL);
  if ( !SpotInfo )
    return (char)SpotInfo;
  v22 = SpotInfo;
  Mine = MapControl_SpotInfo__GetMine(SpotInfo, 0LL);
  dispType = v22->fields.dispType;
  v27 = Mine;
  NaviWarOrSpotTransitionAction = 0LL;
  if ( dispType == 1 )
    NaviWarOrSpotTransitionAction = MissionNaviTransitionBoardItem__GetNaviWarOrSpotTransitionAction(
                                      missionNaviTransitionEntity,
                                      item,
                                      v24);
  if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
  closedMessage = MissionNaviTransitionConfirmDialog__GetSpotNaviNameAndClosedMessage(
                    missionNaviTransitionEntity,
                    v22,
                    dispType != 1,
                    v25);
  v30 = MissionNaviTransitionEntity__TryGetChallengeIconName(missionNaviTransitionEntity, &challengeIconName, 0LL);
  if ( !v27 || v30 )
  {
    IconNameByWarInfo = challengeIconName;
  }
  else
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(Instance, v27->fields.warId, 0LL);
    IconNameByWarInfo = MissionNaviTransitionBoardItemDraw__GetIconNameByWarInfo(WarInfoByWarID, v32);
    challengeIconName = IconNameByWarInfo;
  }
  v34 = (MissionNaviTransitionBoardItem_o *)sub_1C3B9B0(MissionNaviTransitionBoardItem_TypeInfo);
  MissionNaviTransitionBoardItem___ctor(
    v34,
    0,
    IconNameByWarInfo,
    closedMessage.fields.Item1,
    0,
    0,
    1,
    dispType != 1,
    closedMessage.fields.Item2,
    NaviWarOrSpotTransitionAction,
    v46);
  Instance = (QuestTree_o *)*challengeBoardList;
  if ( !*challengeBoardList
    || (mapControlRootInfo = Instance->fields.mapControlRootInfo,
        v42 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__,
        ++HIDWORD(Instance->fields.allQuestInfoList),
        !mapControlRootInfo) )
  {
LABEL_22:
    sub_1C3B9C0(Instance, v20);
  }
  allQuestInfoList_low = SLODWORD(Instance->fields.allQuestInfoList);
  if ( (unsigned int)allQuestInfoList_low >= LODWORD(mapControlRootInfo[1].klass) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v34,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
  }
  else
  {
    v44 = (__int64)mapControlRootInfo + 8 * allQuestInfoList_low;
    LODWORD(Instance->fields.allQuestInfoList) = allQuestInfoList_low + 1;
    *(_QWORD *)(v44 + 32) = v34;
    sub_1C3B708((PartyOrganizationUtility_o *)(v44 + 32), (int64_t)v34, v35, v36, v37, v38, v39, v40);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x22
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  QuestTree_o *Instance; // x0
  __int64 v21; // x1
  MapControl_WarInfo_o *LatestProgressWarInfo; // x0
  MapControl_WarInfo_o *WarInfoByWarID; // x22
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x2
  System_Action_o *NaviWarOrSpotTransitionAction; // x23
  bool v27; // w21
  bool IsActiveWar; // w0
  System_ValueTuple_string__string__o closedMessage; // kr00_16
  const MethodInfo *v30; // x1
  System_String_o *IconNameByWarInfo; // x22
  MissionNaviTransitionBoardItem_o *v32; // x20
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct MapControl_RootInfo_o *mapControlRootInfo; // x8
  _QWORD *v40; // x9
  __int64 allQuestInfoList_low; // x10
  __int64 v42; // x8
  const MethodInfo *v44; // [xsp+10h] [xbp-60h]
  int32_t result; // [xsp+1Ch] [xbp-54h] BYREF
  System_String_o *challengeIconName; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4C25BCA & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__, item);
    sub_1C3B764(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__, v7);
    sub_1C3B764(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo, v8);
    sub_1C3B764(&MissionNaviTransitionBoardItem_TypeInfo, v9);
    sub_1C3B764(&MissionNaviTransitionConfirmDialog_TypeInfo, v10);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v11);
    sub_1C3B764(&StringLiteral_8679/*"MapGimmickEffect_GappolyPiece"*/, v12);
    byte_4C25BCA = 1;
  }
  challengeIconName = 0LL;
  result = 0;
  v13 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *challengeBoardList = (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o *)v13;
  sub_1C3B708((PartyOrganizationUtility_o *)challengeBoardList, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  if ( !missionNaviTransitionEntity )
LABEL_28:
    sub_1C3B9C0(Instance, v21);
  if ( System_String__op_Equality(
         missionNaviTransitionEntity->fields.transitionParam,
         (System_String_o *)StringLiteral_8679/*"MapGimmickEffect_GappolyPiece"*/,
         0LL) )
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
                                        v25);
      v27 = 0;
      goto LABEL_15;
    }
  }
  else
  {
    System_Int32__TryParse(missionNaviTransitionEntity->fields.transitionParam, &result, 0LL);
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(Instance, result, 0LL);
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
  v27 = 1;
LABEL_15:
  if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
  closedMessage = MissionNaviTransitionConfirmDialog__GetWarNaviNameAndClosedMessage(
                    missionNaviTransitionEntity,
                    WarInfoByWarID,
                    v27,
                    v24);
  if ( MissionNaviTransitionEntity__TryGetChallengeIconName(missionNaviTransitionEntity, &challengeIconName, 0LL) )
  {
    IconNameByWarInfo = challengeIconName;
  }
  else
  {
    IconNameByWarInfo = MissionNaviTransitionBoardItemDraw__GetIconNameByWarInfo(WarInfoByWarID, v30);
    challengeIconName = IconNameByWarInfo;
  }
  v32 = (MissionNaviTransitionBoardItem_o *)sub_1C3B9B0(MissionNaviTransitionBoardItem_TypeInfo);
  MissionNaviTransitionBoardItem___ctor(
    v32,
    0,
    IconNameByWarInfo,
    closedMessage.fields.Item1,
    0,
    0,
    1,
    v27,
    closedMessage.fields.Item2,
    NaviWarOrSpotTransitionAction,
    v44);
  Instance = (QuestTree_o *)*challengeBoardList;
  if ( !*challengeBoardList )
    goto LABEL_28;
  mapControlRootInfo = Instance->fields.mapControlRootInfo;
  v40 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__;
  ++HIDWORD(Instance->fields.allQuestInfoList);
  if ( !mapControlRootInfo )
    goto LABEL_28;
  allQuestInfoList_low = SLODWORD(Instance->fields.allQuestInfoList);
  if ( (unsigned int)allQuestInfoList_low >= LODWORD(mapControlRootInfo[1].klass) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v32,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = (__int64)mapControlRootInfo + 8 * allQuestInfoList_low;
    LODWORD(Instance->fields.allQuestInfoList) = allQuestInfoList_low + 1;
    *(_QWORD *)(v42 + 32) = v32;
    sub_1C3B708((PartyOrganizationUtility_o *)(v42 + 32), (int64_t)v32, v33, v34, v35, v36, v37, v38);
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
  sub_1C3B708(
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
  sub_1C3B708(
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
  sub_1C3B708(
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
  sub_1C3B708(
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
  sub_1C3B708(
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C25BD0 & 1) == 0 )
  {
    sub_1C3B764(&MissionNaviTransitionBoardItem___c_TypeInfo, v1);
    byte_4C25BD0 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(MissionNaviTransitionBoardItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MissionNaviTransitionBoardItem___c_TypeInfo->static_fields->__9 = (struct MissionNaviTransitionBoardItem___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)MissionNaviTransitionBoardItem___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  MissionNaviTransitionBoardItem___c_c *v7; // x8
  CommonUI_o *v8; // x19
  System_Action_o *_9__43_3; // x20
  Il2CppObject *v10; // x21
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4C25BD4 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_1C3B764(&Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__43_3__, v3);
    sub_1C3B764(&MissionNaviTransitionBoardItem___c_TypeInfo, v4);
    byte_4C25BD4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
    v7 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  _9__43_3 = v7->static_fields->__9__43_3;
  if ( !_9__43_3 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__43_3 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__43_3,
      v10,
      Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__43_3__,
      0LL);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__43_3 = _9__43_3;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__43_3,
      (int64_t)_9__43_3,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !v8 )
LABEL_12:
    sub_1C3B9C0(Instance, v6);
  CommonUI__CloseMissionNaviTransitionConfirmDialog_31334080(v8, _9__43_3, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c___GetNaviQuestTransitionAction_b__43_3(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C25BD5 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4C25BD5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1C3B9C0(Instance, v4);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c___GetNaviSceneTransitionAction_b__45_1(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  MissionNaviTransitionBoardItem___c_c *v7; // x8
  CommonUI_o *v8; // x19
  System_Action_o *_9__45_3; // x20
  Il2CppObject *v10; // x21
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4C25BD8 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_1C3B764(&Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__45_3__, v3);
    sub_1C3B764(&MissionNaviTransitionBoardItem___c_TypeInfo, v4);
    byte_4C25BD8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
    v7 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  _9__45_3 = v7->static_fields->__9__45_3;
  if ( !_9__45_3 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__45_3 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__45_3,
      v10,
      Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__45_3__,
      0LL);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__45_3 = _9__45_3;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__45_3,
      (int64_t)_9__45_3,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !v8 )
LABEL_12:
    sub_1C3B9C0(Instance, v6);
  CommonUI__CloseMissionNaviTransitionConfirmDialog_31334080(v8, _9__45_3, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c___GetNaviSceneTransitionAction_b__45_3(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C25BD9 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4C25BD9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1C3B9C0(Instance, v4);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c___GetNaviWarOrSpotTransitionAction_b__44_1(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  MissionNaviTransitionBoardItem___c_c *v7; // x8
  CommonUI_o *v8; // x19
  System_Action_o *_9__44_3; // x20
  Il2CppObject *v10; // x21
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4C25BD6 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_1C3B764(&Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__44_3__, v3);
    sub_1C3B764(&MissionNaviTransitionBoardItem___c_TypeInfo, v4);
    byte_4C25BD6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
    v7 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  _9__44_3 = v7->static_fields->__9__44_3;
  if ( !_9__44_3 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__44_3 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__44_3,
      v10,
      Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__44_3__,
      0LL);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__44_3 = _9__44_3;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__44_3,
      (int64_t)_9__44_3,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !v8 )
LABEL_12:
    sub_1C3B9C0(Instance, v6);
  CommonUI__CloseMissionNaviTransitionConfirmDialog_31334080(v8, _9__44_3, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c___GetNaviWarOrSpotTransitionAction_b__44_3(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C25BD7 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4C25BD7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1C3B9C0(Instance, v4);
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
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C25BD1 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4C25BD1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 91, 1, 0LL, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c___SetupSceneTransitionBoardItem_b__42_2(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C25BD2 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v2);
    byte_4C25BD2 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1E64A )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1E64A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SummonType_k__BackingField = 3;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v5);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 20, 1, 0LL, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c___SetupSceneTransitionBoardItem_b__42_4(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C25BD3 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4C25BD3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v3);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C25BDA & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4C25BDA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v4);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C25BDB & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4C25BDB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v4);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C25BDC & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4C25BDC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v4);
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
  __int64 v3; // x1
  int32_t gachaId; // w21
  AvalonSceneManager_o *Instance; // x0
  struct GachaEntity_o *gachaEnt; // x8
  int32_t type; // w20

  if ( (byte_4C25BDD & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v3);
    byte_4C25BDD = 1;
  }
  gachaId = this->fields.gachaId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1E64C )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1E64C = 1;
  }
  Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  *(_DWORD *)(*(_QWORD *)&Instance[1].fields.fadeType + 12LL) = gachaId;
  gachaEnt = this->fields.gachaEnt;
  if ( !gachaEnt )
    goto LABEL_16;
  type = gachaEnt->fields.type;
  if ( !byte_4C1E64A )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    byte_4C1E64A = 1;
  }
  if ( !Instance[2].fields.m_CachedPtr )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  *(_DWORD *)(*(_QWORD *)&Instance[1].fields.fadeType + 8LL) = type;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_16:
    sub_1C3B9C0(Instance, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  MissionListViewItem_o *naviQuestEntity; // x0
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  System_Action_o *_9__2; // x22
  CommonUI_o *v16; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  Il2CppObject *Instance; // x19
  MissionNaviTransitionBoardItem___c_c *v24; // x8
  System_String_o *v25; // x20
  System_String_o *v26; // x21
  System_Action_o *_9__43_1; // x22
  Il2CppObject *v28; // x23
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  _QWORD *v36; // x0
  System_Reflection_MethodBase_o *v37; // x0

  if ( (byte_4C25BDE & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&LocalizationManager_TypeInfo, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v5);
    sub_1C3B764(&Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__43_1__, v6);
    sub_1C3B764(&Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__, v7);
    sub_1C3B764(&Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__2__, v8);
    sub_1C3B764(&MissionNaviTransitionBoardItem___c_TypeInfo, v9);
    sub_1C3B764(&StringLiteral_5117/*"Dec"*/, v10);
    sub_1C3B764(&StringLiteral_1/*""*/, v11);
    byte_4C25BDE = 1;
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
      v13 = Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__;
      if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__
            + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1C3B77C(Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__);
      v14 = (System_Reflection_MethodBase_o *)sub_1C3B748(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0LL);
      naviQuestEntity = (MissionListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( naviQuestEntity )
      {
        AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)naviQuestEntity, 1, 0LL);
        naviQuestEntity = (MissionListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        _9__2 = this->fields.__9__2;
        v16 = (CommonUI_o *)naviQuestEntity;
        if ( !_9__2 )
        {
          _9__2 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
          System_Action___ctor(
            _9__2,
            (Il2CppObject *)this,
            Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__2__,
            0LL);
          this->fields.__9__2 = _9__2;
          sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v17, v18, v19, v20, v21, v22);
        }
        if ( v16 )
        {
          CommonUI__CloseMissionNaviTransitionConfirmDialog_31334080(v16, _9__2, 0LL);
          return;
        }
      }
LABEL_27:
      sub_1C3B9C0(naviQuestEntity, method);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  naviQuestEntity = (MissionListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5117/*"Dec"*/, 0LL);
  v24 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v25 = (System_String_o *)naviQuestEntity;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
    v24 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  v26 = (System_String_o *)StringLiteral_1/*""*/;
  _9__43_1 = v24->static_fields->__9__43_1;
  if ( !_9__43_1 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v24->static_fields->__9;
    _9__43_1 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__43_1,
      v28,
      Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__43_1__,
      0LL);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__43_1 = _9__43_1;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__43_1,
      (int64_t)_9__43_1,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  if ( !Instance )
    goto LABEL_27;
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v26, v25, _9__43_1, 500, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
  v36 = Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__;
  if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__ + 83) & 2) != 0 )
    v36 = (_QWORD *)sub_1C3B77C(Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__);
  v37 = (System_Reflection_MethodBase_o *)sub_1C3B748(v36, v36[4]);
  OverwriteAssetSoundName__PlaySystemSe(v37, 2, 0, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c__DisplayClass43_0___GetNaviQuestTransitionAction_b__2(
        MissionNaviTransitionBoardItem___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  void *Instance; // x0
  __int64 v14; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x20
  __int64 v16; // x20
  System_Collections_ICollection_o *AvailableTutorialArray; // x0
  BalanceConfig_c *v18; // x0
  int32_t OrdealCallWarId; // w19
  struct MapControl_QuestInfo_o *tempQuestInfo; // x8
  int32_t v21; // w1
  struct MissionNaviQuestEntity_o *naviQuestEntity; // x8
  int32_t questId; // w19
  int32_t SpotID; // w20
  struct MapControl_QuestInfo_o *v25; // x8
  int32_t warId; // w0
  struct MapControl_QuestInfo_o *v27; // x8
  int32_t v28; // w19
  struct MapControl_QuestInfo_o *v29; // x8
  int32_t v30; // w19
  TerminalPramsManager_c *v31; // x0
  __int64 v32; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_int__o v34; // 0:x0.8

  if ( (byte_4C25BDF & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v3);
    sub_1C3B764(&DataManager_TypeInfo, v4);
    sub_1C3B764(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v5);
    sub_1C3B764(&EventTutorialMaster_EventTutorialArgs_TypeInfo, v6);
    sub_1C3B764(&Method_System_Nullable_int__GetValueOrDefault__, v7);
    sub_1C3B764(&Method_System_Nullable_int___ctor__, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v10);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v11);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v12);
    byte_4C25BDF = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !this->fields.tempQuestInfo )
    goto LABEL_53;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (void *)MapControl_QuestInfo__GetSpotID(this->fields.tempQuestInfo, 0LL);
  if ( !v15 )
    goto LABEL_53;
  Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                       v15,
                       &entity,
                       (int32_t)Instance,
                       (const MethodInfo_329AE94 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
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
    v21 = *((_DWORD *)Instance + 31);
    v34 = (System_Nullable_int__o)&v32;
    v32 = 0LL;
    System_Nullable_int____ctor(v34, v21, (const MethodInfo_37A8420 *)Method_System_Nullable_int___ctor__);
    if ( !HIDWORD(v32) )
      goto LABEL_20;
  }
  v16 = sub_1C3B9B0(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_53;
  *(_QWORD *)(v16 + 16) = 0x5300000000LL;
  AvailableTutorialArray = (System_Collections_ICollection_o *)EventTutorialMaster__GetAvailableTutorialArray(
                                                                 (EventTutorialMaster_EventTutorialArgs_o *)v16,
                                                                 0LL);
  Instance = (void *)BasicHelper__IsNullOrEmpty(AvailableTutorialArray, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v18 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    OrdealCallWarId = v18->static_fields->OrdealCallWarId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
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
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        TerminalPramsManager__SetAutoResumeByQuestId(questId, 0LL);
        break;
      case 1:
        Instance = this->fields.tempQuestInfo;
        if ( !Instance )
          goto LABEL_53;
        SpotID = MapControl_QuestInfo__GetSpotID((MapControl_QuestInfo_o *)Instance, 0LL);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C1EA8E )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, v14);
          byte_4C1EA8E = 1;
        }
        Instance = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Instance = TerminalPramsManager_TypeInfo;
        }
        *(_DWORD *)(*((_QWORD *)Instance + 23) + 16LL) = SpotID;
        v25 = this->fields.tempQuestInfo;
        if ( !v25 )
          goto LABEL_53;
        warId = v25->fields.warId;
        goto LABEL_38;
      case 2:
        v27 = this->fields.tempQuestInfo;
        if ( !v27 )
          goto LABEL_53;
        v28 = v27->fields.warId;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        warId = v28;
LABEL_38:
        TerminalPramsManager__SetAutoResumeByWarId(warId, 0LL);
        break;
      case 3:
        v29 = this->fields.tempQuestInfo;
        if ( !v29 )
          goto LABEL_53;
        v30 = v29->fields.warId;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        TerminalPramsManager__SetAutoResumeForFolder(v30, 0LL);
        break;
      default:
        break;
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1CAE7 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v14);
      byte_4C1CAE7 = 1;
    }
    v31 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v31 = TerminalPramsManager_TypeInfo;
    }
    v31->static_fields->_IsDirectTransition_k__BackingField = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0LL) )
  {
LABEL_53:
    sub_1C3B9C0(Instance, v14);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct MapControl_SpotInfo_o *spotInfo; // x8
  QuestTree_o *Instance; // x0
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  System_Action_o *_9__2; // x22
  CommonUI_o *v18; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  Il2CppObject *v25; // x19
  MissionNaviTransitionBoardItem___c_c *v26; // x8
  System_String_o *v27; // x20
  System_String_o *v28; // x21
  System_Action_o *_9__44_1; // x22
  Il2CppObject *v30; // x23
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0

  if ( (byte_4C25BE0 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&LocalizationManager_TypeInfo, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v5);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v6);
    sub_1C3B764(&Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__44_1__, v7);
    sub_1C3B764(
      &Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__,
      v8);
    sub_1C3B764(
      &Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__2__,
      v9);
    sub_1C3B764(&MissionNaviTransitionBoardItem___c_TypeInfo, v10);
    sub_1C3B764(&StringLiteral_5117/*"Dec"*/, v11);
    sub_1C3B764(&StringLiteral_1/*""*/, v12);
    byte_4C25BE0 = 1;
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
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
    v15 = Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__;
    if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__
          + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1C3B77C(Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__);
    v16 = (System_Reflection_MethodBase_o *)sub_1C3B748(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0LL);
    Instance = (QuestTree_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( Instance )
    {
      AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 1, 0LL);
      Instance = (QuestTree_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      _9__2 = this->fields.__9__2;
      v18 = (CommonUI_o *)Instance;
      if ( !_9__2 )
      {
        _9__2 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
        System_Action___ctor(
          _9__2,
          (Il2CppObject *)this,
          Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__2__,
          0LL);
        this->fields.__9__2 = _9__2;
        sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v19, v20, v21, v22, v23, v24);
      }
      if ( v18 )
      {
        CommonUI__CloseMissionNaviTransitionConfirmDialog_31334080(v18, _9__2, 0LL);
        return;
      }
    }
LABEL_33:
    sub_1C3B9C0(Instance, method);
  }
LABEL_21:
  v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (QuestTree_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5117/*"Dec"*/, 0LL);
  v26 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v27 = (System_String_o *)Instance;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
    v26 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  v28 = (System_String_o *)StringLiteral_1/*""*/;
  _9__44_1 = v26->static_fields->__9__44_1;
  if ( !_9__44_1 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v26->static_fields->__9;
    _9__44_1 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__44_1,
      v30,
      Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__44_1__,
      0LL);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__44_1 = _9__44_1;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__44_1,
      (int64_t)_9__44_1,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  if ( !v25 )
    goto LABEL_33;
  CommonUI__OpenNotificationDialog((CommonUI_o *)v25, v28, v27, _9__44_1, 500, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
  v38 = Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__;
  if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__
        + 83) & 2) != 0 )
    v38 = (_QWORD *)sub_1C3B77C(Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__);
  v39 = (System_Reflection_MethodBase_o *)sub_1C3B748(v38, v38[4]);
  OverwriteAssetSoundName__PlaySystemSe(v39, 2, 0, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c__DisplayClass44_0___GetNaviWarOrSpotTransitionAction_b__2(
        MissionNaviTransitionBoardItem___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  BalanceConfig_c *v17; // x0
  int32_t targetWarId; // w20
  _BOOL4 v19; // w20
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  WarEntity_o *Mine; // x0
  int32_t parentBlankEarthSpotId; // w1
  unsigned __int64 v23; // x8
  struct SpotEntity_o *v24; // x8
  MapControl_WarInfo_o *v25; // x0
  WarEntity_o *v26; // x0
  int32_t v27; // w1
  unsigned __int64 v28; // x8
  __int64 v29; // x20
  System_Collections_ICollection_o *AvailableTutorialArray; // x0
  struct SpotEntity_o *spotEnt; // x8
  int32_t warId; // w20
  int32_t targetSpotId; // w25
  TerminalPramsManager_c *v34; // x0
  __int64 v35; // x1
  TerminalPramsManager_c *v36; // x0
  _BOOL4 isMainScenario; // w24
  int32_t v38; // w19
  __int64 v39; // x1
  BalanceConfig_c *v40; // x0
  _BOOL4 v41; // w20
  int32_t OrdealCallWarId; // w19
  TerminalPramsManager_c *v43; // x0
  unsigned __int64 v44; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF
  System_Nullable_int__o v46; // 0:x0.8
  System_Nullable_int__o v47; // 0:x0.8

  if ( (byte_4C25BE1 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v3);
    sub_1C3B764(&DataManager_TypeInfo, v4);
    sub_1C3B764(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v5);
    sub_1C3B764(&EventTutorialMaster_EventTutorialArgs_TypeInfo, v6);
    sub_1C3B764(&Method_System_Nullable_int__GetValueOrDefault__, v7);
    sub_1C3B764(&Method_System_Nullable_int___ctor__, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v10);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v11);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v12);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v13);
    byte_4C25BE1 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL);
  if ( this->fields.isWar )
  {
    v17 = BalanceConfig_TypeInfo;
    targetWarId = this->fields.targetWarId;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v17 = BalanceConfig_TypeInfo;
    }
    if ( targetWarId == v17->static_fields->OrdealCallWarId )
    {
      v19 = 1;
    }
    else
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        goto LABEL_69;
      WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, this->fields.targetWarId, 0LL);
      if ( WarInfoByWarID && (Mine = MapControl_WarInfo__GetMine(WarInfoByWarID, 0LL)) != 0LL )
      {
        parentBlankEarthSpotId = Mine->fields.parentBlankEarthSpotId;
        v46 = (System_Nullable_int__o)&v44;
        v44 = 0LL;
        System_Nullable_int____ctor(
          v46,
          parentBlankEarthSpotId,
          (const MethodInfo_37A8420 *)Method_System_Nullable_int___ctor__);
        v23 = v44;
      }
      else
      {
        v23 = 0LL;
      }
      v19 = HIDWORD(v23) != 0;
    }
  }
  else
  {
    v19 = 0;
  }
  if ( !this->fields.isSpot )
    goto LABEL_27;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Instance )
LABEL_69:
    sub_1C3B9C0(Instance, v15);
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         this->fields.targetSpotId,
         (const MethodInfo_329AE94 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__) )
  {
    goto LABEL_31;
  }
  if ( !this->fields.spotEnt )
  {
LABEL_27:
    if ( v19 )
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
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C1EA8E )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, v16);
          byte_4C1EA8E = 1;
        }
        v34 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v34 = TerminalPramsManager_TypeInfo;
        }
        v34->static_fields->_SpotId_k__BackingField = targetSpotId;
        TerminalPramsManager__SetAutoResumeByWarId(warId, 0LL);
        if ( !byte_4C1CAE7 )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, v35);
          byte_4C1CAE7 = 1;
        }
        v36 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v36 = TerminalPramsManager_TypeInfo;
        }
        v36->static_fields->_IsDirectTransition_k__BackingField = 1;
      }
    }
    if ( this->fields.isWar )
    {
      isMainScenario = this->fields.isMainScenario;
      v38 = this->fields.targetWarId;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( isMainScenario )
        TerminalPramsManager__SetAutoResumeForFolder(v38, 0LL);
      else
        TerminalPramsManager__SetAutoResumeByWarId(v38, 0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C1CAE7 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v39);
        byte_4C1CAE7 = 1;
      }
      v43 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v43 = TerminalPramsManager_TypeInfo;
      }
      v43->static_fields->_IsDirectTransition_k__BackingField = 1;
    }
    goto LABEL_66;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  v24 = this->fields.spotEnt;
  if ( !v24 || !Instance )
    goto LABEL_69;
  v25 = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, v24->fields.warId, 0LL);
  if ( v25 && (v26 = MapControl_WarInfo__GetMine(v25, 0LL)) != 0LL )
  {
    v27 = v26->fields.parentBlankEarthSpotId;
    v47 = (System_Nullable_int__o)&v44;
    v44 = 0LL;
    System_Nullable_int____ctor(v47, v27, (const MethodInfo_37A8420 *)Method_System_Nullable_int___ctor__);
    v28 = v44;
  }
  else
  {
    v28 = 0LL;
  }
  if ( !v19 && HIDWORD(v28) == 0 )
    goto LABEL_33;
LABEL_31:
  v29 = sub_1C3B9B0(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v29, 0LL);
  if ( !v29 )
    goto LABEL_69;
  *(_QWORD *)(v29 + 16) = 0x5300000000LL;
  AvailableTutorialArray = (System_Collections_ICollection_o *)EventTutorialMaster__GetAvailableTutorialArray(
                                                                 (EventTutorialMaster_EventTutorialArgs_o *)v29,
                                                                 0LL);
  if ( BasicHelper__IsNullOrEmpty(AvailableTutorialArray, 0LL) )
    goto LABEL_33;
  v40 = BalanceConfig_TypeInfo;
  v41 = this->fields.isMainScenario;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v40 = BalanceConfig_TypeInfo;
  }
  OrdealCallWarId = v40->static_fields->OrdealCallWarId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( v41 )
    TerminalPramsManager__SetAutoResumeForFolder(OrdealCallWarId, 0LL);
  else
    TerminalPramsManager__SetAutoResumeByWarId(OrdealCallWarId, 0LL);
LABEL_66:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
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
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 sceneDetail; // x0
  __int64 v22; // x20
  System_String_o *v23; // x21
  bool v24; // w0
  System_String_o *v25; // x24
  int v26; // w8
  System_String_o *v27; // x23
  _BOOL4 v28; // w22
  int v29; // w8
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  System_Action_o *_9__2; // x21
  CommonUI_o *v33; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  Il2CppObject *Instance; // x19
  MissionNaviTransitionBoardItem___c_c *v41; // x8
  System_String_o *v42; // x20
  System_String_o *v43; // x21
  System_Action_o *_9__45_1; // x22
  Il2CppObject *v45; // x23
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  _QWORD *v53; // x0
  System_Reflection_MethodBase_o *v54; // x0
  bool v55; // w0
  Il2CppObject *entity; // [xsp+30h] [xbp-60h] BYREF
  int32_t result; // [xsp+3Ch] [xbp-54h] BYREF
  Il2CppObject *v58; // [xsp+40h] [xbp-50h] BYREF
  int32_t key; // [xsp+4Ch] [xbp-44h] BYREF

  if ( (byte_4C25BE2 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMaster_EventMaster___, v3);
    sub_1C3B764(&Method_DataManager_GetMaster_GachaMaster___, v4);
    sub_1C3B764(&Method_DataManager_GetMaster_ShopMaster___, v5);
    sub_1C3B764(&DataManager_TypeInfo, v6);
    sub_1C3B764(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7);
    sub_1C3B764(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v8);
    sub_1C3B764(&LocalizationManager_TypeInfo, v9);
    sub_1C3B764(&NetworkManager_TypeInfo, v10);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v12);
    sub_1C3B764(&Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__45_1__, v13);
    sub_1C3B764(&Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__, v14);
    sub_1C3B764(&Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__2__, v15);
    sub_1C3B764(&MissionNaviTransitionBoardItem___c_TypeInfo, v16);
    sub_1C3B764(&StringLiteral_5117/*"Dec"*/, v17);
    sub_1C3B764(&StringLiteral_6369/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_TITLE"*/, v18);
    sub_1C3B764(&StringLiteral_13362/*"TerminalEndTime"*/, v19);
    sub_1C3B764(&StringLiteral_1/*""*/, v20);
    byte_4C25BE2 = 1;
  }
  key = 0;
  v58 = 0LL;
  result = 0;
  entity = 0LL;
  sceneDetail = (__int64)this->fields.sceneDetail;
  if ( !sceneDetail )
    goto LABEL_67;
  sceneDetail = (__int64)System_String__Split((System_String_o *)sceneDetail, 0x2Fu, 0, 0LL);
  if ( !sceneDetail )
    goto LABEL_67;
  v22 = sceneDetail;
  if ( !*(_DWORD *)(sceneDetail + 24) )
    sub_1C3B9C8(sceneDetail, method);
  v23 = *(System_String_o **)(sceneDetail + 32);
  v24 = System_String__op_Equality(v23, (System_String_o *)StringLiteral_6369/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( v24 )
    v25 = v23;
  else
    v25 = 0LL;
  if ( v24 && ((v26 = *(_DWORD *)(v22 + 24), v26 >= 2) ? (v27 = v25) : (v27 = 0LL), v26 >= 2) )
  {
    v55 = System_Int32__TryParse(*(System_String_o **)(v22 + 40), &key, 0LL);
    if ( v55 )
      v23 = v27;
    else
      v23 = 0LL;
    if ( v55 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      sceneDetail = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !sceneDetail )
        goto LABEL_67;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)sceneDetail,
             &v58,
             key,
             (const MethodInfo_329AE94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        sceneDetail = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ShopMaster___);
        if ( !sceneDetail )
          goto LABEL_67;
        v28 = !ShopMaster__IsEventShopOpen((ShopMaster_o *)sceneDetail, key, 0LL);
      }
      else
      {
        v28 = 0;
        v23 = v27;
      }
    }
    else
    {
      v28 = 0;
      v23 = v25;
    }
  }
  else
  {
    v28 = 0;
  }
  if ( !System_String__op_Equality(v23, (System_String_o *)StringLiteral_13362/*"TerminalEndTime"*/, 0LL) || *(int *)(v22 + 24) < 2 )
    goto LABEL_28;
  System_Int32__TryParse(*(System_String_o **)(v22 + 40), &result, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  sceneDetail = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !sceneDetail )
    goto LABEL_67;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)sceneDetail,
          &entity,
          result,
          (const MethodInfo_329AE94 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__) )
    goto LABEL_28;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  sceneDetail = NetworkManager__getTime(0LL);
  if ( !entity )
    goto LABEL_67;
  if ( sceneDetail < (__int64)entity[6].monitor || sceneDetail > (__int64)entity[7].klass )
    v29 = 1;
  else
LABEL_28:
    v29 = 0;
  if ( !(v29 | v28) )
  {
    sceneDetail = (__int64)this->fields.item;
    if ( !sceneDetail )
      goto LABEL_67;
    sceneDetail = (__int64)MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)sceneDetail, 0LL);
    if ( !sceneDetail )
      goto LABEL_67;
    if ( EventMissionEntity__isNowMission((EventMissionEntity_o *)sceneDetail, 0LL) )
    {
      v30 = Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__;
      if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__
            + 83) & 2) != 0 )
        v30 = (_QWORD *)sub_1C3B77C(Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__);
      v31 = (System_Reflection_MethodBase_o *)sub_1C3B748(v30, v30[4]);
      OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0, 0LL);
      sceneDetail = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( sceneDetail )
      {
        AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)sceneDetail, 1, 0LL);
        sceneDetail = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        _9__2 = this->fields.__9__2;
        v33 = (CommonUI_o *)sceneDetail;
        if ( !_9__2 )
        {
          _9__2 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
          System_Action___ctor(
            _9__2,
            (Il2CppObject *)this,
            Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__2__,
            0LL);
          this->fields.__9__2 = _9__2;
          sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v34, v35, v36, v37, v38, v39);
        }
        if ( v33 )
        {
          CommonUI__CloseMissionNaviTransitionConfirmDialog_31334080(v33, _9__2, 0LL);
          return;
        }
      }
LABEL_67:
      sub_1C3B9C0(sceneDetail, method);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sceneDetail = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5117/*"Dec"*/, 0LL);
  v41 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v42 = (System_String_o *)sceneDetail;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
    v41 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  v43 = (System_String_o *)StringLiteral_1/*""*/;
  _9__45_1 = v41->static_fields->__9__45_1;
  if ( !_9__45_1 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v45 = (Il2CppObject *)v41->static_fields->__9;
    _9__45_1 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__45_1,
      v45,
      Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__45_1__,
      0LL);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__45_1 = _9__45_1;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__45_1,
      (int64_t)_9__45_1,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  if ( !Instance )
    goto LABEL_67;
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v43, v42, _9__45_1, 500, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
  v53 = Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__;
  if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__ + 83) & 2) != 0 )
    v53 = (_QWORD *)sub_1C3B77C(Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__);
  v54 = (System_Reflection_MethodBase_o *)sub_1C3B748(v53, v53[4]);
  OverwriteAssetSoundName__PlaySystemSe(v54, 2, 0, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c__DisplayClass45_0___GetNaviSceneTransitionAction_b__2(
        MissionNaviTransitionBoardItem___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C25BE3 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v3);
    byte_4C25BE3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL),
        ActionExtensions__Call(this->fields.transitionSceneAction, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0LL) )
  {
    sub_1C3B9C0(Instance, v5);
  }
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 0, 0LL);
}