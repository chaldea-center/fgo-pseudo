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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  ListViewItem___ctor_42734232((ListViewItem_o *)this, index, 0LL);
  this->fields._IconName_k__BackingField = iconName;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._IconName_k__BackingField, (int32_t)iconName, v18, v19);
  this->fields._Name_k__BackingField = name;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._Name_k__BackingField, (int32_t)name, v20, v21);
  this->fields._BoardType_k__BackingField = naviBoardType;
  this->fields._QuestId_k__BackingField = questId;
  this->fields._IsNotDisplayQuestInfo_k__BackingField = isNotDisplayQuestInfo;
  this->fields._IsLocked_k__BackingField = isLocked;
  this->fields._ClosedMessage_k__BackingField = closedMessage;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._ClosedMessage_k__BackingField, (int32_t)closedMessage, v22, v23);
  this->fields._NaviAction_k__BackingField = naviAction;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._NaviAction_k__BackingField, (int32_t)naviAction, v24, v25);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x8
  System_Action_o *v19; // x19

  if ( (byte_4B486C0 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, tempQuestInfo);
    sub_1BDB878(&Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__, v7);
    sub_1BDB878(&MissionNaviTransitionBoardItem___c__DisplayClass43_0_TypeInfo, v8);
    byte_4B486C0 = 1;
  }
  v9 = sub_1BDBAC4(MissionNaviTransitionBoardItem___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = naviQuestEntity,
        sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)naviQuestEntity, v12, v13),
        *(_QWORD *)(v9 + 24) = tempQuestInfo,
        sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)tempQuestInfo, v14, v15),
        *(_QWORD *)(v9 + 32) = item,
        sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 32), (int32_t)item, v16, v17),
        (v18 = *(_QWORD *)(v9 + 16)) == 0) )
  {
    sub_1BDBAD4(v10, v11);
  }
  *(_DWORD *)(v9 + 40) = *(_DWORD *)(v18 + 20);
  v19 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v9,
    (intptr_t)Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__,
    0LL);
  return v19;
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Action_o *v18; // x19

  if ( (byte_4B486C2 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, transitionSceneAction);
    sub_1BDB878(&Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__, v7);
    sub_1BDB878(&MissionNaviTransitionBoardItem___c__DisplayClass45_0_TypeInfo, v8);
    byte_4B486C2 = 1;
  }
  v9 = sub_1BDBAC4(MissionNaviTransitionBoardItem___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1BDBAD4(v10, v11);
  *(_QWORD *)(v9 + 16) = sceneDetail;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)sceneDetail, v12, v13);
  *(_QWORD *)(v9 + 24) = item;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)item, v14, v15);
  *(_QWORD *)(v9 + 32) = transitionSceneAction;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 32), (int32_t)transitionSceneAction, v16, v17);
  v18 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v9,
    (intptr_t)Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__,
    0LL);
  return v18;
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  MapControl_WarInfo_o *LatestProgressWarInfo; // x0
  MapControl_SpotInfo_o *SpotInfo; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  MapControl_SpotInfo_o *v20; // x0
  SpotEntity_o *Mine; // x1
  int32_t missionTransitionType; // w8
  System_Action_o *v23; // x19

  if ( (byte_4B486C1 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, item);
    sub_1BDB878(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    sub_1BDB878(
      &Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__,
      v6);
    sub_1BDB878(&MissionNaviTransitionBoardItem___c__DisplayClass44_0_TypeInfo, v7);
    sub_1BDB878(&StringLiteral_8522/*"MAIN_SCENARIO"*/, v8);
    byte_4B486C1 = 1;
  }
  v9 = sub_1BDBAC4(MissionNaviTransitionBoardItem___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_15;
  *(_QWORD *)(v9 + 40) = item;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 40), (int32_t)item, v12, v13);
  *(_DWORD *)(v9 + 36) = 0;
  *(_BYTE *)(v9 + 64) = 0;
  if ( !naviTransitionEntity )
    goto LABEL_15;
  if ( System_String__op_Equality(
         naviTransitionEntity->fields.transitionParam,
         (System_String_o *)StringLiteral_8522/*"MAIN_SCENARIO"*/,
         0LL) )
  {
    *(_BYTE *)(v9 + 64) = 1;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_1BDBAD4(Instance, v11);
  SpotInfo = QuestTree__GetSpotInfo((QuestTree_o *)Instance, *(_DWORD *)(v9 + 48), 0LL);
  *(_QWORD *)(v9 + 24) = SpotInfo;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)SpotInfo, v16, v17);
  v20 = *(MapControl_SpotInfo_o **)(v9 + 24);
  if ( v20 )
    Mine = MapControl_SpotInfo__GetMine(v20, 0LL);
  else
    Mine = 0LL;
  *(_QWORD *)(v9 + 56) = Mine;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 56), (int32_t)Mine, v18, v19);
  missionTransitionType = naviTransitionEntity->fields.missionTransitionType;
  *(_BYTE *)(v9 + 16) = missionTransitionType == 3;
  *(_BYTE *)(v9 + 32) = missionTransitionType == 2;
  v23 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v9,
    (intptr_t)Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__,
    0LL);
  return v23;
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
    sub_1BDBAD4(0LL, item);
  transitionParam = missionNaviTransitionEnt->fields.transitionParam;
  MissionNaviTransitionEntity__TryGetChallengeNaviName(missionNaviTransitionEnt, &challengeNaviName, 0LL);
  MissionNaviTransitionEntity__TryGetChallengeIconName(missionNaviTransitionEnt, &v8, 0LL);
  return MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem_47109144(
           transitionParam,
           missionNaviTransitionEnt->fields.closedMessageId,
           challengeNaviName,
           v8,
           item,
           v6);
}


// local variable allocation has failed, the output may be wrong!
MissionNaviTransitionBoardItem_o *__fastcall MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem_47109144(
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
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  __int64 v83; // x2
  int64_t v84; // x25
  System_String_o *v85; // x27
  __int64 v86; // x26
  __int64 v87; // x26
  int32_t *v88; // x27
  Il2CppObject *v89; // x24
  __int64 v90; // x24
  int32_t v91; // w25
  char v92; // w23
  System_String_o *v93; // x29
  System_String_o *v94; // x25
  BalanceConfig_c *v95; // x0
  int32_t ClassBoardReleaseQuestId; // w25
  bool IsQuestClear_39349364; // w26
  System_String_o *v98; // x0
  const MethodInfo *v99; // x3
  MissionNaviTransitionBoardItem___c_c *v100; // x8
  System_String_o *v101; // x25
  System_Action_o *_9__42_1; // x24
  Il2CppObject *v103; // x27
  struct MissionNaviTransitionBoardItem___c_StaticFields *v104; // x0
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  System_String_o *v107; // x0
  __int64 v108; // x24
  const MethodInfo *v109; // x3
  System_String_o *v110; // x25
  SceneJumpInfo_o *v111; // x27
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  __int64 *v114; // x22
  __int64 *v115; // x8
  System_String_o *v116; // x0
  const MethodInfo *v117; // x3
  MissionNaviTransitionBoardItem___c_c *v118; // x8
  System_Action_o *_9__42_2; // x24
  Il2CppObject *v120; // x26
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  struct MissionNaviTransitionBoardItem___c_StaticFields *v123; // x0
  CGThumbnailListItem_o *p__9__42_2; // x0
  int32_t v125; // w24
  SceneJumpInfo_o *v126; // x25
  int32_t v127; // w2
  const MethodInfo *v128; // x3
  System_String_o *v129; // x0
  MissionNaviTransitionBoardItem___c_c *v130; // x8
  Il2CppObject *v131; // x26
  struct MissionNaviTransitionBoardItem___c_StaticFields *v132; // x0
  System_String_o *v133; // x0
  System_Action_o *v134; // x1
  __int64 v135; // x26
  __int64 *v136; // x25
  __int64 v137; // x8
  bool v138; // w0
  System_String_o *v139; // x0
  System_Action_o *v140; // x26
  System_String_o *v141; // x22
  bool v142; // w21
  MissionNaviTransitionBoardItem_o *v143; // x20
  int32_t v145; // w27
  SceneJumpInfo_o *v146; // x26
  int32_t v147; // w2
  const MethodInfo *v148; // x3
  System_Action_o *v149; // x0
  __int64 *v150; // x8
  System_Action_o *v151; // x27
  Il2CppObject *v152; // x1
  System_Action_o *v153; // x24
  const MethodInfo *v154; // x3
  __int64 v155; // x8
  Il2CppObject *v156; // x22
  System_String_o *v157; // x0
  const MethodInfo *v158; // [xsp+10h] [xbp-A0h]
  Il2CppObject *v161; // [xsp+28h] [xbp-88h] BYREF
  int32_t v162; // [xsp+34h] [xbp-7Ch] BYREF
  Il2CppObject *v163; // [xsp+38h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+40h] [xbp-70h] BYREF
  int32_t result; // [xsp+4Ch] [xbp-64h] BYREF

  if ( (byte_4B486BF & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&closedMessageId);
    sub_1BDB878(&BalanceConfig_TypeInfo, v9);
    sub_1BDB878(&CondType_TypeInfo, v10);
    sub_1BDB878(&Method_DataManager_GetMaster_ClosedMessageMaster___, v11);
    sub_1BDB878(&Method_DataManager_GetMaster_EventDetailMaster___, v12);
    sub_1BDB878(&Method_DataManager_GetMaster_EventMaster___, v13);
    sub_1BDB878(&Method_DataManager_GetMaster_GachaMaster___, v14);
    sub_1BDB878(&Method_DataManager_GetMaster_ShopMaster___, v15);
    sub_1BDB878(&DataManager_TypeInfo, v16);
    sub_1BDB878(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v17);
    sub_1BDB878(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v18);
    sub_1BDB878(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v19);
    sub_1BDB878(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v20);
    sub_1BDB878(&LocalizationManager_TypeInfo, v21);
    sub_1BDB878(&MissionNaviTransitionBoardItem_TypeInfo, v22);
    sub_1BDB878(&NetworkManager_TypeInfo, v23);
    sub_1BDB878(&SceneJumpInfo_TypeInfo, v24);
    sub_1BDB878(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_0__, v25);
    sub_1BDB878(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_1__, v26);
    sub_1BDB878(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_2__, v27);
    sub_1BDB878(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_4__, v28);
    sub_1BDB878(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_0__SetupSceneTransitionBoardItem_b__3__, v29);
    sub_1BDB878(&MissionNaviTransitionBoardItem___c__DisplayClass42_0_TypeInfo, v30);
    sub_1BDB878(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_1__SetupSceneTransitionBoardItem_b__5__, v31);
    sub_1BDB878(&MissionNaviTransitionBoardItem___c__DisplayClass42_1_TypeInfo, v32);
    sub_1BDB878(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_2__SetupSceneTransitionBoardItem_b__6__, v33);
    sub_1BDB878(&MissionNaviTransitionBoardItem___c__DisplayClass42_2_TypeInfo, v34);
    sub_1BDB878(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_3__SetupSceneTransitionBoardItem_b__7__, v35);
    sub_1BDB878(&MissionNaviTransitionBoardItem___c__DisplayClass42_3_TypeInfo, v36);
    sub_1BDB878(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_4__SetupSceneTransitionBoardItem_b__8__, v37);
    sub_1BDB878(&MissionNaviTransitionBoardItem___c__DisplayClass42_4_TypeInfo, v38);
    sub_1BDB878(&MissionNaviTransitionBoardItem___c_TypeInfo, v39);
    sub_1BDB878(&StringLiteral_43/*"\n"*/, v40);
    sub_1BDB878(&StringLiteral_23318/*"servant_eq_combine"*/, v41);
    sub_1BDB878(&StringLiteral_115/*" "*/, v42);
    sub_1BDB878(&StringLiteral_23476/*"shop_event"*/, v43);
    sub_1BDB878(&StringLiteral_12706/*"ServantSkillCombine"*/, v44);
    sub_1BDB878(&StringLiteral_8692/*"MISSION_NAVI_NOT_OPEN_BOARD"*/, v45);
    sub_1BDB878(&StringLiteral_6562/*"FRIEND_POINT"*/, v46);
    sub_1BDB878(&StringLiteral_4603/*"Combine"*/, v47);
    sub_1BDB878(&StringLiteral_4478/*"ClassBoard"*/, v48);
    sub_1BDB878(&StringLiteral_17998/*"class_board"*/, v49);
    sub_1BDB878(&StringLiteral_22161/*"my_room"*/, v50);
    sub_1BDB878(&StringLiteral_8699/*"MISSION_NAVI_SERVANT_SKILL_COMBINE"*/, v51);
    sub_1BDB878(&StringLiteral_23321/*"servant_skill_combine"*/, v52);
    sub_1BDB878(&StringLiteral_8697/*"MISSION_NAVI_SERVANT_EQ_COMBINE"*/, v53);
    sub_1BDB878(&StringLiteral_6255/*"EventReward"*/, v54);
    sub_1BDB878(&StringLiteral_8701/*"MISSION_NAVI_SUMMON_FRIEND_POINT"*/, v55);
    sub_1BDB878(&StringLiteral_8686/*"MISSION_NAVI_EVENT_REWARD"*/, v56);
    sub_1BDB878(&StringLiteral_8690/*"MISSION_NAVI_MYROOM"*/, v57);
    sub_1BDB878(&StringLiteral_23317/*"servant_combine"*/, v58);
    sub_1BDB878(&StringLiteral_8698/*"MISSION_NAVI_SERVANT_LIMIT_COUNT_UP"*/, v59);
    sub_1BDB878(&StringLiteral_23861/*"summon"*/, v60);
    sub_1BDB878(&StringLiteral_8693/*"MISSION_NAVI_NOT_OPEN_CLASS_BOARD_CLOSED_MESSAGE"*/, v61);
    sub_1BDB878(&StringLiteral_8696/*"MISSION_NAVI_SERVANT_COMBINE"*/, v62);
    sub_1BDB878(&StringLiteral_23320/*"servant_limit_count_up"*/, v63);
    sub_1BDB878(&StringLiteral_19682/*"friend"*/, v64);
    sub_1BDB878(&StringLiteral_6883/*"Friend"*/, v65);
    sub_1BDB878(&StringLiteral_13133/*"Summon"*/, v66);
    sub_1BDB878(&StringLiteral_12690/*"ServantEQCombine"*/, v67);
    sub_1BDB878(&StringLiteral_12687/*"ServantCombine"*/, v68);
    sub_1BDB878(&StringLiteral_9212/*"MyRoom"*/, v69);
    sub_1BDB878(&StringLiteral_8678/*"MISSION_NAVI_CLASS_BOARD"*/, v70);
    sub_1BDB878(&StringLiteral_12700/*"ServantLimitCountUp"*/, v71);
    sub_1BDB878(&StringLiteral_8700/*"MISSION_NAVI_SUMMON"*/, v72);
    sub_1BDB878(&StringLiteral_1/*""*/, v73);
    sub_1BDB878(&StringLiteral_23864/*"summon_friend"*/, v74);
    sub_1BDB878(&StringLiteral_8688/*"MISSION_NAVI_FRIEND_AND_FOLLOW"*/, v75);
    byte_4B486BF = 1;
  }
  Master_object = (int64_t)MissionNaviTransitionBoardItem___c_TypeInfo;
  result = 0;
  v163 = 0LL;
  entity = 0LL;
  v162 = 0;
  v161 = 0LL;
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
    NaviSceneTransitionAction = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      NaviSceneTransitionAction,
      v79,
      Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_0__,
      0LL);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__42_0 = NaviSceneTransitionAction;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__42_0, (int32_t)NaviSceneTransitionAction, v81, v82);
  }
  if ( !sceneDetail )
    goto LABEL_152;
  Master_object = (int64_t)System_String__Split(sceneDetail, 0x2Fu, 0, 0LL);
  if ( !Master_object )
    goto LABEL_152;
  v84 = Master_object;
  if ( !*(_DWORD *)(Master_object + 24) )
    goto LABEL_153;
  v85 = *(System_String_o **)(Master_object + 32);
  v86 = sub_1BDBAC4(MissionNaviTransitionBoardItem___c__DisplayClass42_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v86, 0LL);
  if ( !System_String__op_Equality(v85, (System_String_o *)StringLiteral_6255/*"EventReward"*/, 0LL) )
  {
    if ( System_String__op_Equality(v85, (System_String_o *)StringLiteral_4603/*"Combine"*/, 0LL) )
    {
      if ( *(int *)(v84 + 24) < 2 )
        goto LABEL_35;
      v108 = sub_1BDBAC4(MissionNaviTransitionBoardItem___c__DisplayClass42_3_TypeInfo);
      System_Object___ctor((Il2CppObject *)v108, 0LL);
      if ( *(_DWORD *)(v84 + 24) <= 1u )
        goto LABEL_153;
      if ( !v108 )
        goto LABEL_152;
      v110 = *(System_String_o **)(v84 + 40);
      *(_QWORD *)(v108 + 16) = 0LL;
      sub_1BDB81C((CGThumbnailListItem_o *)(v108 + 16), 0, v83, v109);
      v111 = (SceneJumpInfo_o *)sub_1BDBAC4(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_40482208(v111, v110, 0LL);
      *(_QWORD *)(v108 + 16) = v111;
      sub_1BDB81C((CGThumbnailListItem_o *)(v108 + 16), (int32_t)v111, v112, v113);
      if ( System_String__op_Equality(v110, (System_String_o *)StringLiteral_12687/*"ServantCombine"*/, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v114 = &StringLiteral_23317/*"servant_combine"*/;
        v115 = &StringLiteral_8696/*"MISSION_NAVI_SERVANT_COMBINE"*/;
      }
      else if ( System_String__op_Equality(v110, (System_String_o *)StringLiteral_12706/*"ServantSkillCombine"*/, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v114 = &StringLiteral_23321/*"servant_skill_combine"*/;
        v115 = &StringLiteral_8699/*"MISSION_NAVI_SERVANT_SKILL_COMBINE"*/;
      }
      else if ( System_String__op_Equality(v110, (System_String_o *)StringLiteral_12690/*"ServantEQCombine"*/, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v114 = &StringLiteral_23318/*"servant_eq_combine"*/;
        v115 = &StringLiteral_8697/*"MISSION_NAVI_SERVANT_EQ_COMBINE"*/;
      }
      else
      {
        v138 = System_String__op_Equality(v110, (System_String_o *)StringLiteral_12700/*"ServantLimitCountUp"*/, 0LL);
        v93 = closedMessage;
        v94 = closedMessage;
        if ( !v138 )
        {
LABEL_118:
          v140 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(
            v140,
            (Il2CppObject *)v108,
            Method_MissionNaviTransitionBoardItem___c__DisplayClass42_3__SetupSceneTransitionBoardItem_b__7__,
            0LL);
          v133 = sceneDetail;
          v134 = v140;
          goto LABEL_119;
        }
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v114 = &StringLiteral_23320/*"servant_limit_count_up"*/;
        v115 = &StringLiteral_8698/*"MISSION_NAVI_SERVANT_LIMIT_COUNT_UP"*/;
      }
      v139 = LocalizationManager__Get((System_String_o *)*v115, 0LL);
      v93 = (System_String_o *)*v114;
      v94 = v139;
      goto LABEL_118;
    }
    if ( System_String__op_Equality(v85, (System_String_o *)StringLiteral_4478/*"ClassBoard"*/, 0LL) )
    {
      v95 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v95 = BalanceConfig_TypeInfo;
      }
      ClassBoardReleaseQuestId = v95->static_fields->ClassBoardReleaseQuestId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39349364 = CondType__IsQuestClear_39349364(ClassBoardReleaseQuestId, -1, 0, 0LL);
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( IsQuestClear_39349364 )
        {
LABEL_45:
          v98 = LocalizationManager__Get((System_String_o *)StringLiteral_8678/*"MISSION_NAVI_CLASS_BOARD"*/, 0LL);
          v100 = MissionNaviTransitionBoardItem___c_TypeInfo;
          v101 = v98;
          if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
            v100 = MissionNaviTransitionBoardItem___c_TypeInfo;
          }
          _9__42_1 = v100->static_fields->__9__42_1;
          if ( !_9__42_1 )
          {
            if ( !v100->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v100);
              v100 = MissionNaviTransitionBoardItem___c_TypeInfo;
            }
            v103 = (Il2CppObject *)v100->static_fields->__9;
            _9__42_1 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
            System_Action___ctor(
              _9__42_1,
              v103,
              Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_1__,
              0LL);
            v104 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
            v104->__9__42_1 = _9__42_1;
            sub_1BDB81C((CGThumbnailListItem_o *)&v104->__9__42_1, (int32_t)_9__42_1, v105, v106);
          }
          NaviSceneTransitionAction = MissionNaviTransitionBoardItem__GetNaviSceneTransitionAction(
                                        sceneDetail,
                                        _9__42_1,
                                        item,
                                        v99);
          v107 = closedMessage;
          closedMessage = v101;
          goto LABEL_83;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( IsQuestClear_39349364 )
          goto LABEL_45;
      }
      v107 = LocalizationManager__Get((System_String_o *)StringLiteral_8693/*"MISSION_NAVI_NOT_OPEN_CLASS_BOARD_CLOSED_MESSAGE"*/, 0LL);
LABEL_83:
      v94 = closedMessage;
      v92 = !IsQuestClear_39349364;
      closedMessage = v107;
      v93 = (System_String_o *)StringLiteral_17998/*"class_board"*/;
      goto LABEL_121;
    }
    if ( System_String__op_Equality(v85, (System_String_o *)StringLiteral_13133/*"Summon"*/, 0LL) )
    {
      v93 = (System_String_o *)StringLiteral_23861/*"summon"*/;
      if ( *(int *)(v84 + 24) >= 2 )
      {
        if ( System_String__op_Equality(*(System_String_o **)(v84 + 40), (System_String_o *)StringLiteral_6562/*"FRIEND_POINT"*/, 0LL) )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v116 = LocalizationManager__Get((System_String_o *)StringLiteral_8701/*"MISSION_NAVI_SUMMON_FRIEND_POINT"*/, 0LL);
          v118 = MissionNaviTransitionBoardItem___c_TypeInfo;
          v94 = v116;
          v93 = (System_String_o *)StringLiteral_23864/*"summon_friend"*/;
          if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
            v118 = MissionNaviTransitionBoardItem___c_TypeInfo;
          }
          _9__42_2 = v118->static_fields->__9__42_2;
          if ( _9__42_2 )
            goto LABEL_98;
          if ( !v118->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v118);
            v118 = MissionNaviTransitionBoardItem___c_TypeInfo;
          }
          v120 = (Il2CppObject *)v118->static_fields->__9;
          _9__42_2 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(
            _9__42_2,
            v120,
            Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_2__,
            0LL);
          v123 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
          v123->__9__42_2 = _9__42_2;
          p__9__42_2 = (CGThumbnailListItem_o *)&v123->__9__42_2;
LABEL_97:
          sub_1BDB81C(p__9__42_2, (int32_t)_9__42_2, v121, v122);
LABEL_98:
          v133 = sceneDetail;
          v134 = _9__42_2;
LABEL_119:
          NaviSceneTransitionAction = MissionNaviTransitionBoardItem__GetNaviSceneTransitionAction(
                                        v133,
                                        v134,
                                        item,
                                        v117);
LABEL_120:
          v92 = 0;
          goto LABEL_121;
        }
        if ( *(int *)(v84 + 24) >= 2 )
        {
          v135 = sub_1BDBAC4(MissionNaviTransitionBoardItem___c__DisplayClass42_4_TypeInfo);
          System_Object___ctor((Il2CppObject *)v135, 0LL);
          if ( *(_DWORD *)(v84 + 24) <= 1u )
            goto LABEL_153;
          if ( !v135 )
            goto LABEL_152;
          System_Int32__TryParse(*(System_String_o **)(v84 + 40), (int32_t *)(v135 + 16), 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GachaMaster___);
          if ( !Master_object )
            goto LABEL_152;
          v136 = (__int64 *)(v135 + 24);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 (Il2CppObject **)(v135 + 24),
                 *(_DWORD *)(v135 + 16),
                 (const MethodInfo_32E1E88 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__) )
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Master_object = NetworkManager__getTime(0LL);
            v137 = *v136;
            if ( !*v136 )
              goto LABEL_152;
            if ( Master_object >= *(_QWORD *)(v137 + 104) && Master_object <= *(_QWORD *)(v137 + 112) )
            {
              v153 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
              System_Action___ctor(
                v153,
                (Il2CppObject *)v135,
                Method_MissionNaviTransitionBoardItem___c__DisplayClass42_4__SetupSceneTransitionBoardItem_b__8__,
                0LL);
              Master_object = (int64_t)MissionNaviTransitionBoardItem__GetNaviSceneTransitionAction(
                                         sceneDetail,
                                         v153,
                                         item,
                                         v154);
              v155 = *(_QWORD *)(v135 + 24);
              if ( !v155 )
                goto LABEL_152;
              NaviSceneTransitionAction = (System_Action_o *)Master_object;
              Master_object = *(_QWORD *)(v155 + 24);
              if ( !Master_object )
                goto LABEL_152;
              v156 = (Il2CppObject *)System_String__Replace_62618808(
                                       (System_String_o *)Master_object,
                                       (System_String_o *)StringLiteral_43/*"\n"*/,
                                       (System_String_o *)StringLiteral_115/*" "*/,
                                       0LL);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v157 = LocalizationManager__Get((System_String_o *)StringLiteral_8700/*"MISSION_NAVI_SUMMON"*/, 0LL);
              v94 = System_String__Format(v157, v156, 0LL);
              goto LABEL_120;
            }
            NaviSceneTransitionAction = 0LL;
            v92 = 1;
            goto LABEL_37;
          }
        }
      }
      v92 = 0;
      goto LABEL_37;
    }
    if ( System_String__op_Equality(v85, (System_String_o *)StringLiteral_6883/*"Friend"*/, 0LL) )
    {
      result = 0;
      v125 = 0;
      v93 = (System_String_o *)StringLiteral_19682/*"friend"*/;
      if ( *(int *)(v84 + 24) >= 2 )
      {
        System_Int32__TryParse(*(System_String_o **)(v84 + 40), &result, 0LL);
        v125 = result;
      }
      v126 = (SceneJumpInfo_o *)sub_1BDBAC4(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_40482256(v126, v125, 0LL);
      if ( !v86 )
        goto LABEL_152;
      *(_QWORD *)(v86 + 16) = v126;
      sub_1BDB81C((CGThumbnailListItem_o *)(v86 + 16), (int32_t)v126, v127, v128);
      _9__42_2 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(
        _9__42_2,
        (Il2CppObject *)v86,
        Method_MissionNaviTransitionBoardItem___c__DisplayClass42_0__SetupSceneTransitionBoardItem_b__3__,
        0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v94 = LocalizationManager__Get((System_String_o *)StringLiteral_8688/*"MISSION_NAVI_FRIEND_AND_FOLLOW"*/, 0LL);
      goto LABEL_98;
    }
    if ( !System_String__op_Equality(v85, (System_String_o *)StringLiteral_9212/*"MyRoom"*/, 0LL) )
      goto LABEL_35;
    v93 = (System_String_o *)StringLiteral_22161/*"my_room"*/;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v129 = LocalizationManager__Get((System_String_o *)StringLiteral_8690/*"MISSION_NAVI_MYROOM"*/, 0LL);
    v130 = MissionNaviTransitionBoardItem___c_TypeInfo;
    v94 = v129;
    if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
      v130 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    _9__42_2 = v130->static_fields->__9__42_4;
    if ( _9__42_2 )
      goto LABEL_98;
    if ( !v130->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v130);
      v130 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v131 = (Il2CppObject *)v130->static_fields->__9;
    _9__42_2 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__42_2,
      v131,
      Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_4__,
      0LL);
    v132 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    v132->__9__42_4 = _9__42_2;
    p__9__42_2 = (CGThumbnailListItem_o *)&v132->__9__42_4;
    goto LABEL_97;
  }
  if ( *(int *)(v84 + 24) < 2 )
    goto LABEL_35;
  v87 = sub_1BDBAC4(MissionNaviTransitionBoardItem___c__DisplayClass42_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v87, 0LL);
  if ( *(_DWORD *)(v84 + 24) <= 1u )
LABEL_153:
    sub_1BDBADC(Master_object, *(_QWORD *)&closedMessageId, v83);
  if ( !v87 )
    goto LABEL_152;
  v88 = (int32_t *)(v87 + 16);
  if ( System_Int32__TryParse(*(System_String_o **)(v84 + 40), (int32_t *)(v87 + 16), 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v89 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventDetailMaster___);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
      goto LABEL_152;
    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                      &entity,
                      *v88,
                      (const MethodInfo_32E1E88 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    if ( (Master_object & 1) != 0 )
    {
      if ( !v89 )
        goto LABEL_152;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)v89,
             &v163,
             *v88,
             (const MethodInfo_32E1E88 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ShopMaster___);
        if ( !Master_object )
          goto LABEL_152;
        if ( ShopMaster__IsEventShopOpen((ShopMaster_o *)Master_object, *v88, 0LL) )
        {
          Master_object = (int64_t)v163;
          if ( !v163 )
            goto LABEL_152;
          if ( EventDetailEntity__IsReward((EventDetailEntity_o *)v163, 0LL) )
            goto LABEL_31;
          Master_object = (int64_t)v163;
          if ( !v163 )
            goto LABEL_152;
          if ( EventDetailEntity__IsEventShop((EventDetailEntity_o *)v163, 0LL) )
          {
LABEL_31:
            v90 = sub_1BDBAC4(MissionNaviTransitionBoardItem___c__DisplayClass42_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v90, 0LL);
            v162 = 0;
            if ( *(int *)(v84 + 24) >= 3 )
            {
              System_Int32__TryParse(*(System_String_o **)(v84 + 48), &v162, 0LL);
              v91 = v162 + 1;
            }
            else
            {
              v91 = 1;
            }
            v145 = *v88;
            v146 = (SceneJumpInfo_o *)sub_1BDBAC4(SceneJumpInfo_TypeInfo);
            SceneJumpInfo___ctor_40482356(v146, (System_String_o *)StringLiteral_1/*""*/, v145, v91, 0LL);
            if ( !v90 )
              goto LABEL_152;
            *(_QWORD *)(v90 + 16) = v146;
            sub_1BDB81C((CGThumbnailListItem_o *)(v90 + 16), (int32_t)v146, v147, v148);
            v149 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
            v150 = &Method_MissionNaviTransitionBoardItem___c__DisplayClass42_2__SetupSceneTransitionBoardItem_b__6__;
            v151 = v149;
            v152 = (Il2CppObject *)v90;
          }
          else
          {
            Master_object = (int64_t)v163;
            if ( !v163 )
              goto LABEL_152;
            v151 = 0LL;
            if ( !EventDetailEntity__IsExchangeShop((EventDetailEntity_o *)v163, 0LL) )
              goto LABEL_141;
            v149 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
            v150 = &Method_MissionNaviTransitionBoardItem___c__DisplayClass42_1__SetupSceneTransitionBoardItem_b__5__;
            v151 = v149;
            v152 = (Il2CppObject *)v87;
          }
          System_Action___ctor(v149, v152, *v150, 0LL);
LABEL_141:
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v94 = LocalizationManager__Get((System_String_o *)StringLiteral_8686/*"MISSION_NAVI_EVENT_REWARD"*/, 0LL);
          v133 = sceneDetail;
          v134 = v151;
          v93 = (System_String_o *)StringLiteral_23476/*"shop_event"*/;
          goto LABEL_119;
        }
      }
    }
    NaviSceneTransitionAction = 0LL;
    v92 = 1;
    goto LABEL_36;
  }
LABEL_35:
  v92 = 0;
LABEL_36:
  v93 = closedMessage;
LABEL_37:
  v94 = closedMessage;
LABEL_121:
  if ( System_String__op_Inequality(naviName, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    v141 = naviName;
  else
    v141 = v94;
  v142 = System_String__op_Inequality(iconName, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( (v92 & 1) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v141 = LocalizationManager__Get((System_String_o *)StringLiteral_8692/*"MISSION_NAVI_NOT_OPEN_BOARD"*/, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ClosedMessageMaster___);
    if ( closedMessageId )
    {
      if ( Master_object )
      {
        Master_object = DataMasterBase_object__object__int___TryGetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          &v161,
                          closedMessageId,
                          (const MethodInfo_32E1E88 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
        if ( (Master_object & 1) == 0 )
          goto LABEL_134;
        if ( v161 )
        {
          closedMessage = (System_String_o *)v161[1].monitor;
          goto LABEL_134;
        }
      }
LABEL_152:
      sub_1BDBAD4(Master_object, *(_QWORD *)&closedMessageId);
    }
  }
LABEL_134:
  if ( !v142 )
    iconName = v93;
  v143 = (MissionNaviTransitionBoardItem_o *)sub_1BDBAC4(MissionNaviTransitionBoardItem_TypeInfo);
  MissionNaviTransitionBoardItem___ctor(
    v143,
    0,
    iconName,
    v141,
    0,
    0,
    0,
    v92 & 1,
    closedMessage,
    NaviSceneTransitionAction,
    v158);
  return v143;
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  void *transitionParam; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  int v20; // w8
  void *v21; // x21
  bool v22; // w20
  int v23; // w19
  MissionNaviQuestEntity_o *v24; // x23
  int32_t questId; // w22
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v27; // x26
  const MethodInfo *v28; // x3
  bool v29; // w20
  System_Action_o *NaviQuestTransitionAction; // x0
  bool v31; // w25
  System_ValueTuple_string__string__o closedMessage; // kr00_16
  int32_t size; // w24
  System_String_o *v34; // x29
  bool HasFlag; // w20
  MissionNaviTransitionBoardItem_o *v36; // x23
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  __int64 v42; // x8
  const MethodInfo *v45; // [xsp+10h] [xbp-90h]
  System_Action_o *v47; // [xsp+28h] [xbp-78h]
  System_String_o *challengeIconName; // [xsp+30h] [xbp-70h] BYREF
  int32_t result; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_4B486BC & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_MissionNaviQuestMaster___, item);
    sub_1BDB878(&DataManager_TypeInfo, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__get_Count__, v9);
    sub_1BDB878(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo, v10);
    sub_1BDB878(&MissionNaviTransitionBoardItem_TypeInfo, v11);
    sub_1BDB878(&MissionNaviTransitionConfirmDialog_TypeInfo, v12);
    sub_1BDB878(&Method_SingletonTemplate_QuestTree__get_Instance__, v13);
    byte_4B486BC = 1;
  }
  result = 0;
  challengeIconName = 0LL;
  v14 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *challengeBoardList = (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o *)v14;
  sub_1BDB81C((CGThumbnailListItem_o *)challengeBoardList, (int32_t)v14, v15, v16);
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
  transitionParam = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_MissionNaviQuestMaster___);
  if ( !transitionParam
    || (transitionParam = MissionNaviQuestMaster__GetOpenQuestByNaviQuestMasterId(
                            (MissionNaviQuestMaster_o *)transitionParam,
                            result,
                            0LL)) == 0LL )
  {
LABEL_33:
    sub_1BDBAD4(transitionParam, v18);
  }
  v20 = *((_DWORD *)transitionParam + 6);
  v21 = transitionParam;
  v22 = v20 > 0;
  if ( v20 >= 1 )
  {
    v23 = 0;
    while ( v23 < (unsigned int)v20 )
    {
      v24 = (MissionNaviQuestEntity_o *)*((_QWORD *)v21 + v23 + 4);
      if ( !v24 )
        goto LABEL_33;
      questId = v24->fields.questId;
      transitionParam = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !transitionParam )
        goto LABEL_33;
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)transitionParam, questId, 0LL);
      if ( !QuestInfo )
        return !v22;
      v27 = QuestInfo;
      v29 = !MissionNaviQuestEntity__IsNaviBoardOpen(v24, QuestInfo, 0LL);
      NaviQuestTransitionAction = 0LL;
      if ( !v29 )
        NaviQuestTransitionAction = MissionNaviTransitionBoardItem__GetNaviQuestTransitionAction(v24, v27, item, v28);
      v47 = NaviQuestTransitionAction;
      if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
      v31 = v29;
      closedMessage = MissionNaviTransitionConfirmDialog__GetQuestNaviNameAndClosedMessage(v24, v27, v29, v28);
      transitionParam = (void *)MissionNaviQuestEntity__TryGetChallengeIconName(v24, &challengeIconName, 0LL);
      if ( !*challengeBoardList )
        goto LABEL_33;
      size = (*challengeBoardList)->fields._size;
      v34 = challengeIconName;
      HasFlag = MissionNaviQuestEntity__HasFlag(v24, 2LL, 0LL);
      v36 = (MissionNaviTransitionBoardItem_o *)sub_1BDBAC4(MissionNaviTransitionBoardItem_TypeInfo);
      MissionNaviTransitionBoardItem___ctor(
        v36,
        size,
        v34,
        closedMessage.fields.Item1,
        1,
        questId,
        HasFlag,
        v31,
        closedMessage.fields.Item2,
        v47,
        v45);
      transitionParam = *challengeBoardList;
      if ( !*challengeBoardList )
        goto LABEL_33;
      v39 = *((_QWORD *)transitionParam + 2);
      v40 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__;
      ++*((_DWORD *)transitionParam + 7);
      if ( !v39 )
        goto LABEL_33;
      v41 = *((int *)transitionParam + 6);
      if ( (unsigned int)v41 >= *(_DWORD *)(v39 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)transitionParam,
          (Il2CppObject *)v36,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = v39 + 8 * v41;
        *((_DWORD *)transitionParam + 6) = v41 + 1;
        *(_QWORD *)(v42 + 32) = v36;
        sub_1BDB81C((CGThumbnailListItem_o *)(v42 + 32), (int32_t)v36, v37, v38);
      }
      v20 = *((_DWORD *)v21 + 6);
      v22 = ++v23 < v20;
      if ( v23 >= v20 )
        return !v22;
    }
LABEL_34:
    sub_1BDBADC(transitionParam, v18, v19);
  }
  return !v22;
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  QuestTree_o *Instance; // x0
  __int64 v16; // x1
  MapControl_SpotInfo_o *SpotInfo; // x0
  MapControl_SpotInfo_o *v18; // x23
  SpotEntity_o *Mine; // x0
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x3
  int32_t dispType; // w25
  SpotEntity_o *v23; // x24
  System_Action_o *NaviWarOrSpotTransitionAction; // x22
  System_ValueTuple_string__string__o closedMessage; // kr00_16
  bool v26; // w0
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  const MethodInfo *v28; // x1
  System_String_o *IconNameByWarInfo; // x24
  MissionNaviTransitionBoardItem_o *v30; // x20
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct MapControl_RootInfo_o *mapControlRootInfo; // x8
  _QWORD *v34; // x9
  __int64 allQuestInfoList_low; // x10
  __int64 v36; // x8
  const MethodInfo *v38; // [xsp+10h] [xbp-70h]
  System_String_o *challengeIconName; // [xsp+20h] [xbp-60h] BYREF
  int32_t result; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_4B486BE & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__, item);
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__, v7);
    sub_1BDB878(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo, v8);
    sub_1BDB878(&MissionNaviTransitionBoardItem_TypeInfo, v9);
    sub_1BDB878(&MissionNaviTransitionConfirmDialog_TypeInfo, v10);
    sub_1BDB878(&Method_SingletonTemplate_QuestTree__get_Instance__, v11);
    byte_4B486BE = 1;
  }
  result = 0;
  challengeIconName = 0LL;
  v12 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *challengeBoardList = (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o *)v12;
  sub_1BDB81C((CGThumbnailListItem_o *)challengeBoardList, (int32_t)v12, v13, v14);
  if ( !missionNaviTransitionEntity )
    goto LABEL_22;
  System_Int32__TryParse(missionNaviTransitionEntity->fields.transitionParam, &result, 0LL);
  Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  SpotInfo = QuestTree__GetSpotInfo(Instance, result, 0LL);
  if ( !SpotInfo )
    return (char)SpotInfo;
  v18 = SpotInfo;
  Mine = MapControl_SpotInfo__GetMine(SpotInfo, 0LL);
  dispType = v18->fields.dispType;
  v23 = Mine;
  NaviWarOrSpotTransitionAction = 0LL;
  if ( dispType == 1 )
    NaviWarOrSpotTransitionAction = MissionNaviTransitionBoardItem__GetNaviWarOrSpotTransitionAction(
                                      missionNaviTransitionEntity,
                                      item,
                                      v20);
  if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
  closedMessage = MissionNaviTransitionConfirmDialog__GetSpotNaviNameAndClosedMessage(
                    missionNaviTransitionEntity,
                    v18,
                    dispType != 1,
                    v21);
  v26 = MissionNaviTransitionEntity__TryGetChallengeIconName(missionNaviTransitionEntity, &challengeIconName, 0LL);
  if ( !v23 || v26 )
  {
    IconNameByWarInfo = challengeIconName;
  }
  else
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(Instance, v23->fields.warId, 0LL);
    IconNameByWarInfo = MissionNaviTransitionBoardItemDraw__GetIconNameByWarInfo(WarInfoByWarID, v28);
    challengeIconName = IconNameByWarInfo;
  }
  v30 = (MissionNaviTransitionBoardItem_o *)sub_1BDBAC4(MissionNaviTransitionBoardItem_TypeInfo);
  MissionNaviTransitionBoardItem___ctor(
    v30,
    0,
    IconNameByWarInfo,
    closedMessage.fields.Item1,
    0,
    0,
    1,
    dispType != 1,
    closedMessage.fields.Item2,
    NaviWarOrSpotTransitionAction,
    v38);
  Instance = (QuestTree_o *)*challengeBoardList;
  if ( !*challengeBoardList
    || (mapControlRootInfo = Instance->fields.mapControlRootInfo,
        v34 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__,
        ++HIDWORD(Instance->fields.allQuestInfoList),
        !mapControlRootInfo) )
  {
LABEL_22:
    sub_1BDBAD4(Instance, v16);
  }
  allQuestInfoList_low = SLODWORD(Instance->fields.allQuestInfoList);
  if ( (unsigned int)allQuestInfoList_low >= LODWORD(mapControlRootInfo[1].klass) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v30,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = (__int64)mapControlRootInfo + 8 * allQuestInfoList_low;
    LODWORD(Instance->fields.allQuestInfoList) = allQuestInfoList_low + 1;
    *(_QWORD *)(v36 + 32) = v30;
    sub_1BDB81C((CGThumbnailListItem_o *)(v36 + 32), (int32_t)v30, v31, v32);
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  QuestTree_o *Instance; // x0
  __int64 v17; // x1
  MapControl_WarInfo_o *LatestProgressWarInfo; // x0
  MapControl_WarInfo_o *WarInfoByWarID; // x22
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x2
  System_Action_o *NaviWarOrSpotTransitionAction; // x23
  bool v23; // w21
  bool IsActiveWar; // w0
  System_ValueTuple_string__string__o closedMessage; // kr00_16
  const MethodInfo *v26; // x1
  System_String_o *IconNameByWarInfo; // x22
  MissionNaviTransitionBoardItem_o *v28; // x20
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct MapControl_RootInfo_o *mapControlRootInfo; // x8
  _QWORD *v32; // x9
  __int64 allQuestInfoList_low; // x10
  __int64 v34; // x8
  const MethodInfo *v36; // [xsp+10h] [xbp-60h]
  int32_t result; // [xsp+1Ch] [xbp-54h] BYREF
  System_String_o *challengeIconName; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4B486BD & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__, item);
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__, v7);
    sub_1BDB878(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo, v8);
    sub_1BDB878(&MissionNaviTransitionBoardItem_TypeInfo, v9);
    sub_1BDB878(&MissionNaviTransitionConfirmDialog_TypeInfo, v10);
    sub_1BDB878(&Method_SingletonTemplate_QuestTree__get_Instance__, v11);
    sub_1BDB878(&StringLiteral_8522/*"MAIN_SCENARIO"*/, v12);
    byte_4B486BD = 1;
  }
  challengeIconName = 0LL;
  result = 0;
  v13 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *challengeBoardList = (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o *)v13;
  sub_1BDB81C((CGThumbnailListItem_o *)challengeBoardList, (int32_t)v13, v14, v15);
  if ( !missionNaviTransitionEntity )
LABEL_28:
    sub_1BDBAD4(Instance, v17);
  if ( System_String__op_Equality(
         missionNaviTransitionEntity->fields.transitionParam,
         (System_String_o *)StringLiteral_8522/*"MAIN_SCENARIO"*/,
         0LL) )
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
                                        v21);
      v23 = 0;
      goto LABEL_15;
    }
  }
  else
  {
    System_Int32__TryParse(missionNaviTransitionEntity->fields.transitionParam, &result, 0LL);
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(Instance, result, 0LL);
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
  v23 = 1;
LABEL_15:
  if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
  closedMessage = MissionNaviTransitionConfirmDialog__GetWarNaviNameAndClosedMessage(
                    missionNaviTransitionEntity,
                    WarInfoByWarID,
                    v23,
                    v20);
  if ( MissionNaviTransitionEntity__TryGetChallengeIconName(missionNaviTransitionEntity, &challengeIconName, 0LL) )
  {
    IconNameByWarInfo = challengeIconName;
  }
  else
  {
    IconNameByWarInfo = MissionNaviTransitionBoardItemDraw__GetIconNameByWarInfo(WarInfoByWarID, v26);
    challengeIconName = IconNameByWarInfo;
  }
  v28 = (MissionNaviTransitionBoardItem_o *)sub_1BDBAC4(MissionNaviTransitionBoardItem_TypeInfo);
  MissionNaviTransitionBoardItem___ctor(
    v28,
    0,
    IconNameByWarInfo,
    closedMessage.fields.Item1,
    0,
    0,
    1,
    v23,
    closedMessage.fields.Item2,
    NaviWarOrSpotTransitionAction,
    v36);
  Instance = (QuestTree_o *)*challengeBoardList;
  if ( !*challengeBoardList )
    goto LABEL_28;
  mapControlRootInfo = Instance->fields.mapControlRootInfo;
  v32 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__;
  ++HIDWORD(Instance->fields.allQuestInfoList);
  if ( !mapControlRootInfo )
    goto LABEL_28;
  allQuestInfoList_low = SLODWORD(Instance->fields.allQuestInfoList);
  if ( (unsigned int)allQuestInfoList_low >= LODWORD(mapControlRootInfo[1].klass) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v28,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = (__int64)mapControlRootInfo + 8 * allQuestInfoList_low;
    LODWORD(Instance->fields.allQuestInfoList) = allQuestInfoList_low + 1;
    *(_QWORD *)(v34 + 32) = v28;
    sub_1BDB81C((CGThumbnailListItem_o *)(v34 + 32), (int32_t)v28, v29, v30);
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
  const MethodInfo *v3; // x3

  this->fields._ClosedMessage_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._ClosedMessage_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall MissionNaviTransitionBoardItem__set_IconName(
        MissionNaviTransitionBoardItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._IconName_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._IconName_k__BackingField, (int32_t)value, (int32_t)method, v3);
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
  const MethodInfo *v3; // x3

  this->fields._Name_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._Name_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall MissionNaviTransitionBoardItem__set_NaviAction(
        MissionNaviTransitionBoardItem_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._NaviAction_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._NaviAction_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall MissionNaviTransitionBoardItem__set_QuestEndTime(
        MissionNaviTransitionBoardItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._QuestEndTime_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._QuestEndTime_k__BackingField, (int32_t)value, (int32_t)method, v3);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B486C3 & 1) == 0 )
  {
    sub_1BDB878(&MissionNaviTransitionBoardItem___c_TypeInfo, v1);
    byte_4B486C3 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(MissionNaviTransitionBoardItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MissionNaviTransitionBoardItem___c_TypeInfo->static_fields->__9 = (struct MissionNaviTransitionBoardItem___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)MissionNaviTransitionBoardItem___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B486C7 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_1BDB878(&Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__43_3__, v3);
    sub_1BDB878(&MissionNaviTransitionBoardItem___c_TypeInfo, v4);
    byte_4B486C7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__43_3 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__43_3,
      v10,
      Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__43_3__,
      0LL);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__43_3 = _9__43_3;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__43_3, (int32_t)_9__43_3, v12, v13);
  }
  if ( !v8 )
LABEL_12:
    sub_1BDBAD4(Instance, v6);
  CommonUI__CloseMissionNaviTransitionConfirmDialog_30937260(v8, _9__43_3, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c___GetNaviQuestTransitionAction_b__43_3(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B486C8 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4B486C8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1BDBAD4(Instance, v4);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B486CB & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_1BDB878(&Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__45_3__, v3);
    sub_1BDB878(&MissionNaviTransitionBoardItem___c_TypeInfo, v4);
    byte_4B486CB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__45_3 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__45_3,
      v10,
      Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__45_3__,
      0LL);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__45_3 = _9__45_3;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__45_3, (int32_t)_9__45_3, v12, v13);
  }
  if ( !v8 )
LABEL_12:
    sub_1BDBAD4(Instance, v6);
  CommonUI__CloseMissionNaviTransitionConfirmDialog_30937260(v8, _9__45_3, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c___GetNaviSceneTransitionAction_b__45_3(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B486CC & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4B486CC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1BDBAD4(Instance, v4);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B486C9 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_1BDB878(&Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__44_3__, v3);
    sub_1BDB878(&MissionNaviTransitionBoardItem___c_TypeInfo, v4);
    byte_4B486C9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__44_3 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__44_3,
      v10,
      Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__44_3__,
      0LL);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__44_3 = _9__44_3;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__44_3, (int32_t)_9__44_3, v12, v13);
  }
  if ( !v8 )
LABEL_12:
    sub_1BDBAD4(Instance, v6);
  CommonUI__CloseMissionNaviTransitionConfirmDialog_30937260(v8, _9__44_3, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c___GetNaviWarOrSpotTransitionAction_b__44_3(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B486CA & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4B486CA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1BDBAD4(Instance, v4);
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

  if ( (byte_4B486C4 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B486C4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v3);
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

  if ( (byte_4B486C5 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v2);
    byte_4B486C5 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B41026 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    byte_4B41026 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SummonType_k__BackingField = 3;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v5);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 20, 1, 0LL, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c___SetupSceneTransitionBoardItem_b__42_4(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B486C6 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B486C6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v3);
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

  if ( (byte_4B486CD & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B486CD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v4);
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

  if ( (byte_4B486CE & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B486CE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v4);
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

  if ( (byte_4B486CF & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B486CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v4);
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

  if ( (byte_4B486D0 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v3);
    byte_4B486D0 = 1;
  }
  gachaId = this->fields.gachaId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B41028 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    byte_4B41028 = 1;
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
  if ( !byte_4B41026 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    byte_4B41026 = 1;
  }
  if ( !Instance[2].fields.m_CachedPtr )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  *(_DWORD *)(*(_QWORD *)&Instance[1].fields.fadeType + 8LL) = type;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_16:
    sub_1BDBAD4(Instance, method);
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *Instance; // x19
  MissionNaviTransitionBoardItem___c_c *v20; // x8
  System_String_o *v21; // x20
  System_String_o *v22; // x21
  System_Action_o *_9__43_1; // x22
  Il2CppObject *v24; // x23
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0

  if ( (byte_4B486D1 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&LocalizationManager_TypeInfo, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v5);
    sub_1BDB878(&Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__43_1__, v6);
    sub_1BDB878(&Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__, v7);
    sub_1BDB878(&Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__2__, v8);
    sub_1BDB878(&MissionNaviTransitionBoardItem___c_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_5025/*"DIALOG_OUT_OF_TERM"*/, v10);
    sub_1BDB878(&StringLiteral_1/*""*/, v11);
    byte_4B486D1 = 1;
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
        v13 = (_QWORD *)sub_1BDB890(Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__);
      v14 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0LL);
      naviQuestEntity = (MissionListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( naviQuestEntity )
      {
        AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)naviQuestEntity, 1, 0LL);
        naviQuestEntity = (MissionListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        _9__2 = this->fields.__9__2;
        v16 = (CommonUI_o *)naviQuestEntity;
        if ( !_9__2 )
        {
          _9__2 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(
            _9__2,
            (Il2CppObject *)this,
            Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__2__,
            0LL);
          this->fields.__9__2 = _9__2;
          sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v17, v18);
        }
        if ( v16 )
        {
          CommonUI__CloseMissionNaviTransitionConfirmDialog_30937260(v16, _9__2, 0LL);
          return;
        }
      }
LABEL_27:
      sub_1BDBAD4(naviQuestEntity, method);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  naviQuestEntity = (MissionListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5025/*"DIALOG_OUT_OF_TERM"*/, 0LL);
  v20 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v21 = (System_String_o *)naviQuestEntity;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
    v20 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  v22 = (System_String_o *)StringLiteral_1/*""*/;
  _9__43_1 = v20->static_fields->__9__43_1;
  if ( !_9__43_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v20->static_fields->__9;
    _9__43_1 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__43_1,
      v24,
      Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__43_1__,
      0LL);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__43_1 = _9__43_1;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__43_1, (int32_t)_9__43_1, v26, v27);
  }
  if ( !Instance )
    goto LABEL_27;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    v22,
    v21,
    _9__43_1,
    500,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0LL,
    0.0,
    0,
    0LL);
  v28 = Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__;
  if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__ + 83) & 2) != 0 )
    v28 = (_QWORD *)sub_1BDB890(Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__);
  v29 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v28, v28[4]);
  OverwriteAssetSoundName__PlaySystemSe(v29, 2, 0, 0LL);
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
  CommonUI_o *Instance; // x0
  __int64 v9; // x1
  MapControl_QuestInfo_o *tempQuestInfo; // x20
  BalanceConfig_c *v11; // x0
  int32_t OrdealCallWarId; // w19
  struct MissionNaviQuestEntity_o *naviQuestEntity; // x8
  int32_t questId; // w19
  int32_t SpotID; // w20
  struct MapControl_QuestInfo_o *v16; // x8
  int32_t warId; // w0
  struct MapControl_QuestInfo_o *v18; // x8
  int32_t v19; // w19
  struct MapControl_QuestInfo_o *v20; // x8
  int32_t v21; // w19
  TerminalPramsManager_c *v22; // x0

  if ( (byte_4B486D2 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&CommonUI_TypeInfo, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v6);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v7);
    byte_4B486D2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  CommonUI__CloseMasterMission(Instance, 0LL);
  tempQuestInfo = this->fields.tempQuestInfo;
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  Instance = (CommonUI_o *)CommonUI__IsBlankEarthQuestByQuestInfo(tempQuestInfo, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_15;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  Instance = (CommonUI_o *)TerminalPramsManager__ExistBlankEarthTutorial(0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v11 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = BalanceConfig_TypeInfo;
    }
    OrdealCallWarId = v11->static_fields->OrdealCallWarId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__SetAutoResumeByWarId(OrdealCallWarId, 0LL);
  }
  else
  {
LABEL_15:
    naviQuestEntity = this->fields.naviQuestEntity;
    if ( !naviQuestEntity )
      goto LABEL_48;
    switch ( naviQuestEntity->fields.questTransitionType )
    {
      case 0:
        questId = this->fields.questId;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        TerminalPramsManager__SetAutoResumeByQuestId(questId, 0LL);
        break;
      case 1:
        Instance = (CommonUI_o *)this->fields.tempQuestInfo;
        if ( !Instance )
          goto LABEL_48;
        SpotID = MapControl_QuestInfo__GetSpotID((MapControl_QuestInfo_o *)Instance, 0LL);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4B4142A )
        {
          sub_1BDB878(&TerminalPramsManager_TypeInfo, v9);
          byte_4B4142A = 1;
        }
        Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
        }
        Instance->fields.connectMark->fields.m_CachedPtr = SpotID;
        v16 = this->fields.tempQuestInfo;
        if ( !v16 )
          goto LABEL_48;
        warId = v16->fields.warId;
        goto LABEL_33;
      case 2:
        v18 = this->fields.tempQuestInfo;
        if ( !v18 )
          goto LABEL_48;
        v19 = v18->fields.warId;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        warId = v19;
LABEL_33:
        TerminalPramsManager__SetAutoResumeByWarId(warId, 0LL);
        break;
      case 3:
        v20 = this->fields.tempQuestInfo;
        if ( !v20 )
          goto LABEL_48;
        v21 = v20->fields.warId;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        TerminalPramsManager__SetAutoResumeForFolder(v21, 0LL);
        break;
      default:
        break;
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B3EEF3 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v9);
      byte_4B3EEF3 = 1;
    }
    v22 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v22 = TerminalPramsManager_TypeInfo;
    }
    v22->static_fields->_IsDirectTransition_k__BackingField = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0LL) )
  {
LABEL_48:
    sub_1BDBAD4(Instance, v9);
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
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x19
  MissionNaviTransitionBoardItem___c_c *v22; // x8
  System_String_o *v23; // x20
  System_String_o *v24; // x21
  System_Action_o *_9__44_1; // x22
  Il2CppObject *v26; // x23
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0

  if ( (byte_4B486D3 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&LocalizationManager_TypeInfo, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v5);
    sub_1BDB878(&Method_SingletonTemplate_QuestTree__get_Instance__, v6);
    sub_1BDB878(&Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__44_1__, v7);
    sub_1BDB878(
      &Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__,
      v8);
    sub_1BDB878(
      &Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__2__,
      v9);
    sub_1BDB878(&MissionNaviTransitionBoardItem___c_TypeInfo, v10);
    sub_1BDB878(&StringLiteral_5025/*"DIALOG_OUT_OF_TERM"*/, v11);
    sub_1BDB878(&StringLiteral_1/*""*/, v12);
    byte_4B486D3 = 1;
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
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
      v15 = (_QWORD *)sub_1BDB890(Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__);
    v16 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0LL);
    Instance = (QuestTree_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( Instance )
    {
      AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 1, 0LL);
      Instance = (QuestTree_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      _9__2 = this->fields.__9__2;
      v18 = (CommonUI_o *)Instance;
      if ( !_9__2 )
      {
        _9__2 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        System_Action___ctor(
          _9__2,
          (Il2CppObject *)this,
          Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__2__,
          0LL);
        this->fields.__9__2 = _9__2;
        sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v19, v20);
      }
      if ( v18 )
      {
        CommonUI__CloseMissionNaviTransitionConfirmDialog_30937260(v18, _9__2, 0LL);
        return;
      }
    }
LABEL_33:
    sub_1BDBAD4(Instance, method);
  }
LABEL_21:
  v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (QuestTree_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5025/*"DIALOG_OUT_OF_TERM"*/, 0LL);
  v22 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v23 = (System_String_o *)Instance;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
    v22 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  v24 = (System_String_o *)StringLiteral_1/*""*/;
  _9__44_1 = v22->static_fields->__9__44_1;
  if ( !_9__44_1 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v22->static_fields->__9;
    _9__44_1 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__44_1,
      v26,
      Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__44_1__,
      0LL);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__44_1 = _9__44_1;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__44_1, (int32_t)_9__44_1, v28, v29);
  }
  if ( !v21 )
    goto LABEL_33;
  CommonUI__OpenNotificationDialog((CommonUI_o *)v21, v24, v23, _9__44_1, 500, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0, 0LL);
  v30 = Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__;
  if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__
        + 83) & 2) != 0 )
    v30 = (_QWORD *)sub_1BDB890(Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__);
  v31 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v30, v30[4]);
  OverwriteAssetSoundName__PlaySystemSe(v31, 2, 0, 0LL);
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
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t targetWarId; // w20
  bool IsBlankEarthWarByWarId; // w20
  struct SpotEntity_o *spotEnt; // x8
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  WarEntity_o *Mine; // x0
  int32_t parentBlankEarthSpotId; // w1
  unsigned __int64 v22; // x8
  _BOOL4 isMainScenario; // w20
  BalanceConfig_c *v24; // x0
  int32_t OrdealCallWarId; // w19
  struct SpotEntity_o *v26; // x8
  int32_t warId; // w20
  int32_t targetSpotId; // w25
  TerminalPramsManager_c *v29; // x0
  __int64 v30; // x1
  TerminalPramsManager_c *v31; // x0
  _BOOL4 v32; // w20
  int32_t v33; // w19
  __int64 v34; // x1
  TerminalPramsManager_c *v35; // x0
  unsigned __int64 v36; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF
  System_Nullable_int__o v38; // 0:x0.8

  if ( (byte_4B486D4 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v3);
    sub_1BDB878(&DataManager_TypeInfo, v4);
    sub_1BDB878(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v5);
    sub_1BDB878(&Method_System_Nullable_int__GetValueOrDefault__, v6);
    sub_1BDB878(&Method_System_Nullable_int___ctor__, v7);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v9);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v10);
    sub_1BDB878(&Method_SingletonTemplate_QuestTree__get_Instance__, v11);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v12);
    byte_4B486D4 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL);
  if ( this->fields.isWar )
  {
    targetWarId = this->fields.targetWarId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsBlankEarthWarByWarId = TerminalPramsManager__IsBlankEarthWarByWarId(targetWarId, 0LL);
  }
  else
  {
    IsBlankEarthWarByWarId = 0;
  }
  if ( !this->fields.isSpot )
  {
LABEL_20:
    if ( !IsBlankEarthWarByWarId )
      goto LABEL_33;
    goto LABEL_24;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Instance )
    goto LABEL_63;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          this->fields.targetSpotId,
          (const MethodInfo_32E1E88 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__) )
  {
    if ( this->fields.spotEnt )
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      spotEnt = this->fields.spotEnt;
      if ( spotEnt && Instance )
      {
        WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, spotEnt->fields.warId, 0LL);
        if ( WarInfoByWarID && (Mine = MapControl_WarInfo__GetMine(WarInfoByWarID, 0LL)) != 0LL )
        {
          parentBlankEarthSpotId = Mine->fields.parentBlankEarthSpotId;
          v38 = (System_Nullable_int__o)&v36;
          v36 = 0LL;
          System_Nullable_int____ctor(
            v38,
            parentBlankEarthSpotId,
            (const MethodInfo_37F58C8 *)Method_System_Nullable_int___ctor__);
          v22 = v36;
        }
        else
        {
          v22 = 0LL;
        }
        if ( !IsBlankEarthWarByWarId && HIDWORD(v22) == 0 )
          goto LABEL_33;
        goto LABEL_24;
      }
LABEL_63:
      sub_1BDBAD4(Instance, v14);
    }
    goto LABEL_20;
  }
LABEL_24:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__ExistBlankEarthTutorial(0LL) )
  {
    isMainScenario = this->fields.isMainScenario;
    v24 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v24 = BalanceConfig_TypeInfo;
    }
    OrdealCallWarId = v24->static_fields->OrdealCallWarId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( isMainScenario )
      TerminalPramsManager__SetAutoResumeForFolder(OrdealCallWarId, 0LL);
    else
      TerminalPramsManager__SetAutoResumeByWarId(OrdealCallWarId, 0LL);
    goto LABEL_60;
  }
LABEL_33:
  if ( this->fields.isSpot )
  {
    v26 = this->fields.spotEnt;
    if ( v26 )
    {
      warId = v26->fields.warId;
      targetSpotId = this->fields.targetSpotId;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B4142A )
      {
        sub_1BDB878(&TerminalPramsManager_TypeInfo, v15);
        byte_4B4142A = 1;
      }
      v29 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v29 = TerminalPramsManager_TypeInfo;
      }
      v29->static_fields->_SpotId_k__BackingField = targetSpotId;
      TerminalPramsManager__SetAutoResumeByWarId(warId, 0LL);
      if ( !byte_4B3EEF3 )
      {
        sub_1BDB878(&TerminalPramsManager_TypeInfo, v30);
        byte_4B3EEF3 = 1;
      }
      v31 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v31 = TerminalPramsManager_TypeInfo;
      }
      v31->static_fields->_IsDirectTransition_k__BackingField = 1;
    }
  }
  if ( this->fields.isWar )
  {
    v32 = this->fields.isMainScenario;
    v33 = this->fields.targetWarId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( v32 )
      TerminalPramsManager__SetAutoResumeForFolder(v33, 0LL);
    else
      TerminalPramsManager__SetAutoResumeByWarId(v33, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B3EEF3 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v34);
      byte_4B3EEF3 = 1;
    }
    v35 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v35 = TerminalPramsManager_TypeInfo;
    }
    v35->static_fields->_IsDirectTransition_k__BackingField = 1;
  }
LABEL_60:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
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
  __int64 v22; // x2
  __int64 v23; // x20
  System_String_o *v24; // x21
  bool v25; // w0
  System_String_o *v26; // x24
  int v27; // w8
  System_String_o *v28; // x23
  _BOOL4 v29; // w22
  int v30; // w8
  _QWORD *v31; // x0
  System_Reflection_MethodBase_o *v32; // x0
  System_Action_o *_9__2; // x21
  CommonUI_o *v34; // x20
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  Il2CppObject *Instance; // x19
  MissionNaviTransitionBoardItem___c_c *v38; // x8
  System_String_o *v39; // x20
  System_String_o *v40; // x21
  System_Action_o *_9__45_1; // x22
  Il2CppObject *v42; // x23
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  bool v48; // w0
  Il2CppObject *entity; // [xsp+40h] [xbp-60h] BYREF
  int32_t result; // [xsp+4Ch] [xbp-54h] BYREF
  Il2CppObject *v51; // [xsp+50h] [xbp-50h] BYREF
  int32_t key; // [xsp+5Ch] [xbp-44h] BYREF

  if ( (byte_4B486D5 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_DataManager_GetMaster_EventMaster___, v3);
    sub_1BDB878(&Method_DataManager_GetMaster_GachaMaster___, v4);
    sub_1BDB878(&Method_DataManager_GetMaster_ShopMaster___, v5);
    sub_1BDB878(&DataManager_TypeInfo, v6);
    sub_1BDB878(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7);
    sub_1BDB878(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v8);
    sub_1BDB878(&LocalizationManager_TypeInfo, v9);
    sub_1BDB878(&NetworkManager_TypeInfo, v10);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v12);
    sub_1BDB878(&Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__45_1__, v13);
    sub_1BDB878(&Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__, v14);
    sub_1BDB878(&Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__2__, v15);
    sub_1BDB878(&MissionNaviTransitionBoardItem___c_TypeInfo, v16);
    sub_1BDB878(&StringLiteral_5025/*"DIALOG_OUT_OF_TERM"*/, v17);
    sub_1BDB878(&StringLiteral_6255/*"EventReward"*/, v18);
    sub_1BDB878(&StringLiteral_13133/*"Summon"*/, v19);
    sub_1BDB878(&StringLiteral_1/*""*/, v20);
    byte_4B486D5 = 1;
  }
  key = 0;
  v51 = 0LL;
  result = 0;
  entity = 0LL;
  sceneDetail = (__int64)this->fields.sceneDetail;
  if ( !sceneDetail )
    goto LABEL_67;
  sceneDetail = (__int64)System_String__Split((System_String_o *)sceneDetail, 0x2Fu, 0, 0LL);
  if ( !sceneDetail )
    goto LABEL_67;
  v23 = sceneDetail;
  if ( !*(_DWORD *)(sceneDetail + 24) )
    sub_1BDBADC(sceneDetail, method, v22);
  v24 = *(System_String_o **)(sceneDetail + 32);
  v25 = System_String__op_Equality(v24, (System_String_o *)StringLiteral_6255/*"EventReward"*/, 0LL);
  if ( v25 )
    v26 = v24;
  else
    v26 = 0LL;
  if ( v25 && ((v27 = *(_DWORD *)(v23 + 24), v27 >= 2) ? (v28 = v26) : (v28 = 0LL), v27 >= 2) )
  {
    v48 = System_Int32__TryParse(*(System_String_o **)(v23 + 40), &key, 0LL);
    if ( v48 )
      v24 = v28;
    else
      v24 = 0LL;
    if ( v48 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      sceneDetail = (__int64)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !sceneDetail )
        goto LABEL_67;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)sceneDetail,
             &v51,
             key,
             (const MethodInfo_32E1E88 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        sceneDetail = (__int64)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ShopMaster___);
        if ( !sceneDetail )
          goto LABEL_67;
        v29 = !ShopMaster__IsEventShopOpen((ShopMaster_o *)sceneDetail, key, 0LL);
      }
      else
      {
        v29 = 0;
        v24 = v28;
      }
    }
    else
    {
      v29 = 0;
      v24 = v26;
    }
  }
  else
  {
    v29 = 0;
  }
  if ( !System_String__op_Equality(v24, (System_String_o *)StringLiteral_13133/*"Summon"*/, 0LL) || *(int *)(v23 + 24) < 2 )
    goto LABEL_28;
  System_Int32__TryParse(*(System_String_o **)(v23 + 40), &result, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  sceneDetail = (__int64)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !sceneDetail )
    goto LABEL_67;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)sceneDetail,
          &entity,
          result,
          (const MethodInfo_32E1E88 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__) )
    goto LABEL_28;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  sceneDetail = NetworkManager__getTime(0LL);
  if ( !entity )
    goto LABEL_67;
  if ( sceneDetail < (__int64)entity[6].monitor || sceneDetail > (__int64)entity[7].klass )
    v30 = 1;
  else
LABEL_28:
    v30 = 0;
  if ( !(v30 | v29) )
  {
    sceneDetail = (__int64)this->fields.item;
    if ( !sceneDetail )
      goto LABEL_67;
    sceneDetail = (__int64)MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)sceneDetail, 0LL);
    if ( !sceneDetail )
      goto LABEL_67;
    if ( EventMissionEntity__isNowMission((EventMissionEntity_o *)sceneDetail, 0LL) )
    {
      v31 = Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__;
      if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__
            + 83) & 2) != 0 )
        v31 = (_QWORD *)sub_1BDB890(Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__);
      v32 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v31, v31[4]);
      OverwriteAssetSoundName__PlaySystemSe(v32, 0, 0, 0LL);
      sceneDetail = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( sceneDetail )
      {
        AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)sceneDetail, 1, 0LL);
        sceneDetail = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        _9__2 = this->fields.__9__2;
        v34 = (CommonUI_o *)sceneDetail;
        if ( !_9__2 )
        {
          _9__2 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(
            _9__2,
            (Il2CppObject *)this,
            Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__2__,
            0LL);
          this->fields.__9__2 = _9__2;
          sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v35, v36);
        }
        if ( v34 )
        {
          CommonUI__CloseMissionNaviTransitionConfirmDialog_30937260(v34, _9__2, 0LL);
          return;
        }
      }
LABEL_67:
      sub_1BDBAD4(sceneDetail, method);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sceneDetail = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5025/*"DIALOG_OUT_OF_TERM"*/, 0LL);
  v38 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v39 = (System_String_o *)sceneDetail;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
    v38 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  v40 = (System_String_o *)StringLiteral_1/*""*/;
  _9__45_1 = v38->static_fields->__9__45_1;
  if ( !_9__45_1 )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      v38 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v42 = (Il2CppObject *)v38->static_fields->__9;
    _9__45_1 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__45_1,
      v42,
      Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__45_1__,
      0LL);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__45_1 = _9__45_1;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__45_1, (int32_t)_9__45_1, v44, v45);
  }
  if ( !Instance )
    goto LABEL_67;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    v40,
    v39,
    _9__45_1,
    500,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0LL,
    0.0,
    0,
    0LL);
  v46 = Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__;
  if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__ + 83) & 2) != 0 )
    v46 = (_QWORD *)sub_1BDB890(Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__);
  v47 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v46, v46[4]);
  OverwriteAssetSoundName__PlaySystemSe(v47, 2, 0, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c__DisplayClass45_0___GetNaviSceneTransitionAction_b__2(
        MissionNaviTransitionBoardItem___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B486D6 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v3);
    byte_4B486D6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL),
        ActionExtensions__Call(this->fields.transitionSceneAction, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0LL) )
  {
    sub_1BDBAD4(Instance, v5);
  }
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 0, 0LL);
}