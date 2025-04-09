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

  ListViewItem___ctor_41325876((ListViewItem_o *)this, index, 0LL);
  this->fields._IconName_k__BackingField = iconName;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._IconName_k__BackingField, (int32_t)iconName, v18, v19);
  this->fields._Name_k__BackingField = name;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._Name_k__BackingField, (int32_t)name, v20, v21);
  this->fields._BoardType_k__BackingField = naviBoardType;
  this->fields._QuestId_k__BackingField = questId;
  this->fields._IsNotDisplayQuestInfo_k__BackingField = isNotDisplayQuestInfo;
  this->fields._IsLocked_k__BackingField = isLocked;
  this->fields._ClosedMessage_k__BackingField = closedMessage;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._ClosedMessage_k__BackingField, (int32_t)closedMessage, v22, v23);
  this->fields._NaviAction_k__BackingField = naviAction;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._NaviAction_k__BackingField, (int32_t)naviAction, v24, v25);
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

  if ( (byte_49BEB12 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, tempQuestInfo);
    sub_1B4CF90(&Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__, v7);
    sub_1B4CF90(&MissionNaviTransitionBoardItem___c__DisplayClass43_0_TypeInfo, v8);
    byte_49BEB12 = 1;
  }
  v9 = sub_1B4D1DC(MissionNaviTransitionBoardItem___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = naviQuestEntity,
        sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 16), (int32_t)naviQuestEntity, v12, v13),
        *(_QWORD *)(v9 + 24) = tempQuestInfo,
        sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 24), (int32_t)tempQuestInfo, v14, v15),
        *(_QWORD *)(v9 + 32) = item,
        sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 32), (int32_t)item, v16, v17),
        (v18 = *(_QWORD *)(v9 + 16)) == 0) )
  {
    sub_1B4D1EC(v10, v11);
  }
  *(_DWORD *)(v9 + 40) = *(_DWORD *)(v18 + 20);
  v19 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
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

  if ( (byte_49BEB14 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, transitionSceneAction);
    sub_1B4CF90(&Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__, v7);
    sub_1B4CF90(&MissionNaviTransitionBoardItem___c__DisplayClass45_0_TypeInfo, v8);
    byte_49BEB14 = 1;
  }
  v9 = sub_1B4D1DC(MissionNaviTransitionBoardItem___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B4D1EC(v10, v11);
  *(_QWORD *)(v9 + 16) = sceneDetail;
  sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 16), (int32_t)sceneDetail, v12, v13);
  *(_QWORD *)(v9 + 24) = item;
  sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 24), (int32_t)item, v14, v15);
  *(_QWORD *)(v9 + 32) = transitionSceneAction;
  sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 32), (int32_t)transitionSceneAction, v16, v17);
  v18 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
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

  if ( (byte_49BEB13 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, item);
    sub_1B4CF90(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    sub_1B4CF90(
      &Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__,
      v6);
    sub_1B4CF90(&MissionNaviTransitionBoardItem___c__DisplayClass44_0_TypeInfo, v7);
    sub_1B4CF90(&StringLiteral_8335/*"MAIN_SCENARIO"*/, v8);
    byte_49BEB13 = 1;
  }
  v9 = sub_1B4D1DC(MissionNaviTransitionBoardItem___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_15;
  *(_QWORD *)(v9 + 40) = item;
  sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 40), (int32_t)item, v12, v13);
  *(_DWORD *)(v9 + 36) = 0;
  *(_BYTE *)(v9 + 64) = 0;
  if ( !naviTransitionEntity )
    goto LABEL_15;
  if ( System_String__op_Equality(
         naviTransitionEntity->fields.transitionParam,
         (System_String_o *)StringLiteral_8335/*"MAIN_SCENARIO"*/,
         0LL) )
  {
    *(_BYTE *)(v9 + 64) = 1;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_1B4D1EC(Instance, v11);
  SpotInfo = QuestTree__GetSpotInfo((QuestTree_o *)Instance, *(_DWORD *)(v9 + 48), 0LL);
  *(_QWORD *)(v9 + 24) = SpotInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 24), (int32_t)SpotInfo, v16, v17);
  v20 = *(MapControl_SpotInfo_o **)(v9 + 24);
  if ( v20 )
    Mine = MapControl_SpotInfo__GetMine(v20, 0LL);
  else
    Mine = 0LL;
  *(_QWORD *)(v9 + 56) = Mine;
  sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 56), (int32_t)Mine, v18, v19);
  missionTransitionType = naviTransitionEntity->fields.missionTransitionType;
  *(_BYTE *)(v9 + 16) = missionTransitionType == 3;
  *(_BYTE *)(v9 + 32) = missionTransitionType == 2;
  v23 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
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
    sub_1B4D1EC(0LL, item);
  transitionParam = missionNaviTransitionEnt->fields.transitionParam;
  MissionNaviTransitionEntity__TryGetChallengeNaviName(missionNaviTransitionEnt, &challengeNaviName, 0LL);
  MissionNaviTransitionEntity__TryGetChallengeIconName(missionNaviTransitionEnt, &v8, 0LL);
  return MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem_45917224(
           transitionParam,
           missionNaviTransitionEnt->fields.closedMessageId,
           challengeNaviName,
           v8,
           item,
           v6);
}


// local variable allocation has failed, the output may be wrong!
MissionNaviTransitionBoardItem_o *__fastcall MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem_45917224(
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
  int64_t v83; // x25
  System_String_o *v84; // x27
  __int64 v85; // x26
  __int64 v86; // x26
  int32_t *v87; // x27
  Il2CppObject *v88; // x24
  __int64 v89; // x24
  int32_t v90; // w25
  char v91; // w23
  System_String_o *v92; // x29
  System_String_o *v93; // x25
  BalanceConfig_c *v94; // x0
  int32_t ClassBoardReleaseQuestId; // w25
  bool IsQuestClear_38126524; // w26
  System_String_o *v97; // x0
  const MethodInfo *v98; // x3
  MissionNaviTransitionBoardItem___c_c *v99; // x8
  System_String_o *v100; // x25
  System_Action_o *_9__42_1; // x24
  Il2CppObject *v102; // x27
  struct MissionNaviTransitionBoardItem___c_StaticFields *v103; // x0
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  System_String_o *v106; // x0
  __int64 v107; // x24
  int32_t v108; // w2
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

  if ( (byte_49BEB11 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, *(_QWORD *)&closedMessageId);
    sub_1B4CF90(&BalanceConfig_TypeInfo, v9);
    sub_1B4CF90(&CondType_TypeInfo, v10);
    sub_1B4CF90(&Method_DataManager_GetMaster_ClosedMessageMaster___, v11);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventDetailMaster___, v12);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventMaster___, v13);
    sub_1B4CF90(&Method_DataManager_GetMaster_GachaMaster___, v14);
    sub_1B4CF90(&Method_DataManager_GetMaster_ShopMaster___, v15);
    sub_1B4CF90(&DataManager_TypeInfo, v16);
    sub_1B4CF90(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v17);
    sub_1B4CF90(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v18);
    sub_1B4CF90(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v19);
    sub_1B4CF90(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v20);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v21);
    sub_1B4CF90(&MissionNaviTransitionBoardItem_TypeInfo, v22);
    sub_1B4CF90(&NetworkManager_TypeInfo, v23);
    sub_1B4CF90(&SceneJumpInfo_TypeInfo, v24);
    sub_1B4CF90(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_0__, v25);
    sub_1B4CF90(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_1__, v26);
    sub_1B4CF90(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_2__, v27);
    sub_1B4CF90(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_4__, v28);
    sub_1B4CF90(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_0__SetupSceneTransitionBoardItem_b__3__, v29);
    sub_1B4CF90(&MissionNaviTransitionBoardItem___c__DisplayClass42_0_TypeInfo, v30);
    sub_1B4CF90(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_1__SetupSceneTransitionBoardItem_b__5__, v31);
    sub_1B4CF90(&MissionNaviTransitionBoardItem___c__DisplayClass42_1_TypeInfo, v32);
    sub_1B4CF90(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_2__SetupSceneTransitionBoardItem_b__6__, v33);
    sub_1B4CF90(&MissionNaviTransitionBoardItem___c__DisplayClass42_2_TypeInfo, v34);
    sub_1B4CF90(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_3__SetupSceneTransitionBoardItem_b__7__, v35);
    sub_1B4CF90(&MissionNaviTransitionBoardItem___c__DisplayClass42_3_TypeInfo, v36);
    sub_1B4CF90(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_4__SetupSceneTransitionBoardItem_b__8__, v37);
    sub_1B4CF90(&MissionNaviTransitionBoardItem___c__DisplayClass42_4_TypeInfo, v38);
    sub_1B4CF90(&MissionNaviTransitionBoardItem___c_TypeInfo, v39);
    sub_1B4CF90(&StringLiteral_43/*"\n"*/, v40);
    sub_1B4CF90(&StringLiteral_22843/*"servant_eq_combine"*/, v41);
    sub_1B4CF90(&StringLiteral_115/*" "*/, v42);
    sub_1B4CF90(&StringLiteral_23001/*"shop_event"*/, v43);
    sub_1B4CF90(&StringLiteral_12447/*"ServantSkillCombine"*/, v44);
    sub_1B4CF90(&StringLiteral_8503/*"MISSION_NAVI_NOT_OPEN_BOARD"*/, v45);
    sub_1B4CF90(&StringLiteral_6440/*"FRIEND_POINT"*/, v46);
    sub_1B4CF90(&StringLiteral_4508/*"Combine"*/, v47);
    sub_1B4CF90(&StringLiteral_4395/*"ClassBoard"*/, v48);
    sub_1B4CF90(&StringLiteral_17685/*"class_board"*/, v49);
    sub_1B4CF90(&StringLiteral_21707/*"my_room"*/, v50);
    sub_1B4CF90(&StringLiteral_8510/*"MISSION_NAVI_SERVANT_SKILL_COMBINE"*/, v51);
    sub_1B4CF90(&StringLiteral_22846/*"servant_skill_combine"*/, v52);
    sub_1B4CF90(&StringLiteral_8508/*"MISSION_NAVI_SERVANT_EQ_COMBINE"*/, v53);
    sub_1B4CF90(&StringLiteral_6136/*"EventReward"*/, v54);
    sub_1B4CF90(&StringLiteral_8512/*"MISSION_NAVI_SUMMON_FRIEND_POINT"*/, v55);
    sub_1B4CF90(&StringLiteral_8497/*"MISSION_NAVI_EVENT_REWARD"*/, v56);
    sub_1B4CF90(&StringLiteral_8501/*"MISSION_NAVI_MYROOM"*/, v57);
    sub_1B4CF90(&StringLiteral_22842/*"servant_combine"*/, v58);
    sub_1B4CF90(&StringLiteral_8509/*"MISSION_NAVI_SERVANT_LIMIT_COUNT_UP"*/, v59);
    sub_1B4CF90(&StringLiteral_23386/*"summon"*/, v60);
    sub_1B4CF90(&StringLiteral_8504/*"MISSION_NAVI_NOT_OPEN_CLASS_BOARD_CLOSED_MESSAGE"*/, v61);
    sub_1B4CF90(&StringLiteral_8507/*"MISSION_NAVI_SERVANT_COMBINE"*/, v62);
    sub_1B4CF90(&StringLiteral_22845/*"servant_limit_count_up"*/, v63);
    sub_1B4CF90(&StringLiteral_19326/*"friend"*/, v64);
    sub_1B4CF90(&StringLiteral_6759/*"Friend"*/, v65);
    sub_1B4CF90(&StringLiteral_12868/*"Summon"*/, v66);
    sub_1B4CF90(&StringLiteral_12431/*"ServantEQCombine"*/, v67);
    sub_1B4CF90(&StringLiteral_12428/*"ServantCombine"*/, v68);
    sub_1B4CF90(&StringLiteral_9017/*"MyRoom"*/, v69);
    sub_1B4CF90(&StringLiteral_8489/*"MISSION_NAVI_CLASS_BOARD"*/, v70);
    sub_1B4CF90(&StringLiteral_12441/*"ServantLimitCountUp"*/, v71);
    sub_1B4CF90(&StringLiteral_8511/*"MISSION_NAVI_SUMMON"*/, v72);
    sub_1B4CF90(&StringLiteral_1/*""*/, v73);
    sub_1B4CF90(&StringLiteral_23389/*"summon_friend"*/, v74);
    sub_1B4CF90(&StringLiteral_8499/*"MISSION_NAVI_FRIEND_AND_FOLLOW"*/, v75);
    byte_49BEB11 = 1;
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
    NaviSceneTransitionAction = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      NaviSceneTransitionAction,
      v79,
      Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_0__,
      0LL);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__42_0 = NaviSceneTransitionAction;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__42_0, (int32_t)NaviSceneTransitionAction, v81, v82);
  }
  if ( !sceneDetail )
    goto LABEL_152;
  Master_object = (int64_t)System_String__Split(sceneDetail, 0x2Fu, 0, 0LL);
  if ( !Master_object )
    goto LABEL_152;
  v83 = Master_object;
  if ( !*(_DWORD *)(Master_object + 24) )
    goto LABEL_153;
  v84 = *(System_String_o **)(Master_object + 32);
  v85 = sub_1B4D1DC(MissionNaviTransitionBoardItem___c__DisplayClass42_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v85, 0LL);
  if ( !System_String__op_Equality(v84, (System_String_o *)StringLiteral_6136/*"EventReward"*/, 0LL) )
  {
    if ( System_String__op_Equality(v84, (System_String_o *)StringLiteral_4508/*"Combine"*/, 0LL) )
    {
      if ( *(int *)(v83 + 24) < 2 )
        goto LABEL_35;
      v107 = sub_1B4D1DC(MissionNaviTransitionBoardItem___c__DisplayClass42_3_TypeInfo);
      System_Object___ctor((Il2CppObject *)v107, 0LL);
      if ( *(_DWORD *)(v83 + 24) <= 1u )
        goto LABEL_153;
      if ( !v107 )
        goto LABEL_152;
      v110 = *(System_String_o **)(v83 + 40);
      *(_QWORD *)(v107 + 16) = 0LL;
      sub_1B4CF34((CGThumbnailListItem_o *)(v107 + 16), 0, v108, v109);
      v111 = (SceneJumpInfo_o *)sub_1B4D1DC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39216184(v111, v110, 0LL);
      *(_QWORD *)(v107 + 16) = v111;
      sub_1B4CF34((CGThumbnailListItem_o *)(v107 + 16), (int32_t)v111, v112, v113);
      if ( System_String__op_Equality(v110, (System_String_o *)StringLiteral_12428/*"ServantCombine"*/, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v114 = &StringLiteral_22842/*"servant_combine"*/;
        v115 = &StringLiteral_8507/*"MISSION_NAVI_SERVANT_COMBINE"*/;
      }
      else if ( System_String__op_Equality(v110, (System_String_o *)StringLiteral_12447/*"ServantSkillCombine"*/, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v114 = &StringLiteral_22846/*"servant_skill_combine"*/;
        v115 = &StringLiteral_8510/*"MISSION_NAVI_SERVANT_SKILL_COMBINE"*/;
      }
      else if ( System_String__op_Equality(v110, (System_String_o *)StringLiteral_12431/*"ServantEQCombine"*/, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v114 = &StringLiteral_22843/*"servant_eq_combine"*/;
        v115 = &StringLiteral_8508/*"MISSION_NAVI_SERVANT_EQ_COMBINE"*/;
      }
      else
      {
        v138 = System_String__op_Equality(v110, (System_String_o *)StringLiteral_12441/*"ServantLimitCountUp"*/, 0LL);
        v92 = closedMessage;
        v93 = closedMessage;
        if ( !v138 )
        {
LABEL_118:
          v140 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
          System_Action___ctor(
            v140,
            (Il2CppObject *)v107,
            Method_MissionNaviTransitionBoardItem___c__DisplayClass42_3__SetupSceneTransitionBoardItem_b__7__,
            0LL);
          v133 = sceneDetail;
          v134 = v140;
          goto LABEL_119;
        }
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v114 = &StringLiteral_22845/*"servant_limit_count_up"*/;
        v115 = &StringLiteral_8509/*"MISSION_NAVI_SERVANT_LIMIT_COUNT_UP"*/;
      }
      v139 = LocalizationManager__Get((System_String_o *)*v115, 0LL);
      v92 = (System_String_o *)*v114;
      v93 = v139;
      goto LABEL_118;
    }
    if ( System_String__op_Equality(v84, (System_String_o *)StringLiteral_4395/*"ClassBoard"*/, 0LL) )
    {
      v94 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v94 = BalanceConfig_TypeInfo;
      }
      ClassBoardReleaseQuestId = v94->static_fields->ClassBoardReleaseQuestId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_38126524 = CondType__IsQuestClear_38126524(ClassBoardReleaseQuestId, -1, 0, 0LL);
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( IsQuestClear_38126524 )
        {
LABEL_45:
          v97 = LocalizationManager__Get((System_String_o *)StringLiteral_8489/*"MISSION_NAVI_CLASS_BOARD"*/, 0LL);
          v99 = MissionNaviTransitionBoardItem___c_TypeInfo;
          v100 = v97;
          if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
            v99 = MissionNaviTransitionBoardItem___c_TypeInfo;
          }
          _9__42_1 = v99->static_fields->__9__42_1;
          if ( !_9__42_1 )
          {
            if ( !v99->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v99);
              v99 = MissionNaviTransitionBoardItem___c_TypeInfo;
            }
            v102 = (Il2CppObject *)v99->static_fields->__9;
            _9__42_1 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
            System_Action___ctor(
              _9__42_1,
              v102,
              Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_1__,
              0LL);
            v103 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
            v103->__9__42_1 = _9__42_1;
            sub_1B4CF34((CGThumbnailListItem_o *)&v103->__9__42_1, (int32_t)_9__42_1, v104, v105);
          }
          NaviSceneTransitionAction = MissionNaviTransitionBoardItem__GetNaviSceneTransitionAction(
                                        sceneDetail,
                                        _9__42_1,
                                        item,
                                        v98);
          v106 = closedMessage;
          closedMessage = v100;
          goto LABEL_83;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( IsQuestClear_38126524 )
          goto LABEL_45;
      }
      v106 = LocalizationManager__Get((System_String_o *)StringLiteral_8504/*"MISSION_NAVI_NOT_OPEN_CLASS_BOARD_CLOSED_MESSAGE"*/, 0LL);
LABEL_83:
      v93 = closedMessage;
      v91 = !IsQuestClear_38126524;
      closedMessage = v106;
      v92 = (System_String_o *)StringLiteral_17685/*"class_board"*/;
      goto LABEL_121;
    }
    if ( System_String__op_Equality(v84, (System_String_o *)StringLiteral_12868/*"Summon"*/, 0LL) )
    {
      v92 = (System_String_o *)StringLiteral_23386/*"summon"*/;
      if ( *(int *)(v83 + 24) >= 2 )
      {
        if ( System_String__op_Equality(*(System_String_o **)(v83 + 40), (System_String_o *)StringLiteral_6440/*"FRIEND_POINT"*/, 0LL) )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v116 = LocalizationManager__Get((System_String_o *)StringLiteral_8512/*"MISSION_NAVI_SUMMON_FRIEND_POINT"*/, 0LL);
          v118 = MissionNaviTransitionBoardItem___c_TypeInfo;
          v93 = v116;
          v92 = (System_String_o *)StringLiteral_23389/*"summon_friend"*/;
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
          _9__42_2 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
          System_Action___ctor(
            _9__42_2,
            v120,
            Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_2__,
            0LL);
          v123 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
          v123->__9__42_2 = _9__42_2;
          p__9__42_2 = (CGThumbnailListItem_o *)&v123->__9__42_2;
LABEL_97:
          sub_1B4CF34(p__9__42_2, (int32_t)_9__42_2, v121, v122);
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
          v91 = 0;
          goto LABEL_121;
        }
        if ( *(int *)(v83 + 24) >= 2 )
        {
          v135 = sub_1B4D1DC(MissionNaviTransitionBoardItem___c__DisplayClass42_4_TypeInfo);
          System_Object___ctor((Il2CppObject *)v135, 0LL);
          if ( *(_DWORD *)(v83 + 24) <= 1u )
            goto LABEL_153;
          if ( !v135 )
            goto LABEL_152;
          System_Int32__TryParse(*(System_String_o **)(v83 + 40), (int32_t *)(v135 + 16), 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_GachaMaster___);
          if ( !Master_object )
            goto LABEL_152;
          v136 = (__int64 *)(v135 + 24);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 (Il2CppObject **)(v135 + 24),
                 *(_DWORD *)(v135 + 16),
                 (const MethodInfo_319D9E8 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__) )
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Master_object = NetworkManager__getTime(0LL);
            v137 = *v136;
            if ( !*v136 )
              goto LABEL_152;
            if ( Master_object >= *(_QWORD *)(v137 + 104) && Master_object <= *(_QWORD *)(v137 + 112) )
            {
              v153 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
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
              v156 = (Il2CppObject *)System_String__Replace_61140016(
                                       (System_String_o *)Master_object,
                                       (System_String_o *)StringLiteral_43/*"\n"*/,
                                       (System_String_o *)StringLiteral_115/*" "*/,
                                       0LL);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v157 = LocalizationManager__Get((System_String_o *)StringLiteral_8511/*"MISSION_NAVI_SUMMON"*/, 0LL);
              v93 = System_String__Format(v157, v156, 0LL);
              goto LABEL_120;
            }
            NaviSceneTransitionAction = 0LL;
            v91 = 1;
            goto LABEL_37;
          }
        }
      }
      v91 = 0;
      goto LABEL_37;
    }
    if ( System_String__op_Equality(v84, (System_String_o *)StringLiteral_6759/*"Friend"*/, 0LL) )
    {
      result = 0;
      v125 = 0;
      v92 = (System_String_o *)StringLiteral_19326/*"friend"*/;
      if ( *(int *)(v83 + 24) >= 2 )
      {
        System_Int32__TryParse(*(System_String_o **)(v83 + 40), &result, 0LL);
        v125 = result;
      }
      v126 = (SceneJumpInfo_o *)sub_1B4D1DC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39216232(v126, v125, 0LL);
      if ( !v85 )
        goto LABEL_152;
      *(_QWORD *)(v85 + 16) = v126;
      sub_1B4CF34((CGThumbnailListItem_o *)(v85 + 16), (int32_t)v126, v127, v128);
      _9__42_2 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__42_2,
        (Il2CppObject *)v85,
        Method_MissionNaviTransitionBoardItem___c__DisplayClass42_0__SetupSceneTransitionBoardItem_b__3__,
        0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v93 = LocalizationManager__Get((System_String_o *)StringLiteral_8499/*"MISSION_NAVI_FRIEND_AND_FOLLOW"*/, 0LL);
      goto LABEL_98;
    }
    if ( !System_String__op_Equality(v84, (System_String_o *)StringLiteral_9017/*"MyRoom"*/, 0LL) )
      goto LABEL_35;
    v92 = (System_String_o *)StringLiteral_21707/*"my_room"*/;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v129 = LocalizationManager__Get((System_String_o *)StringLiteral_8501/*"MISSION_NAVI_MYROOM"*/, 0LL);
    v130 = MissionNaviTransitionBoardItem___c_TypeInfo;
    v93 = v129;
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
    _9__42_2 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
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
  if ( *(int *)(v83 + 24) < 2 )
    goto LABEL_35;
  v86 = sub_1B4D1DC(MissionNaviTransitionBoardItem___c__DisplayClass42_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v86, 0LL);
  if ( *(_DWORD *)(v83 + 24) <= 1u )
LABEL_153:
    sub_1B4D1F4(Master_object, *(_QWORD *)&closedMessageId);
  if ( !v86 )
    goto LABEL_152;
  v87 = (int32_t *)(v86 + 16);
  if ( System_Int32__TryParse(*(System_String_o **)(v83 + 40), (int32_t *)(v86 + 16), 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v88 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventDetailMaster___);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
      goto LABEL_152;
    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                      &entity,
                      *v87,
                      (const MethodInfo_319D9E8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    if ( (Master_object & 1) != 0 )
    {
      if ( !v88 )
        goto LABEL_152;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)v88,
             &v163,
             *v87,
             (const MethodInfo_319D9E8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ShopMaster___);
        if ( !Master_object )
          goto LABEL_152;
        if ( ShopMaster__IsEventShopOpen((ShopMaster_o *)Master_object, *v87, 0LL) )
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
            v89 = sub_1B4D1DC(MissionNaviTransitionBoardItem___c__DisplayClass42_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v89, 0LL);
            v162 = 0;
            if ( *(int *)(v83 + 24) >= 3 )
            {
              System_Int32__TryParse(*(System_String_o **)(v83 + 48), &v162, 0LL);
              v90 = v162 + 1;
            }
            else
            {
              v90 = 1;
            }
            v145 = *v87;
            v146 = (SceneJumpInfo_o *)sub_1B4D1DC(SceneJumpInfo_TypeInfo);
            SceneJumpInfo___ctor_39216332(v146, (System_String_o *)StringLiteral_1/*""*/, v145, v90, 0LL);
            if ( !v89 )
              goto LABEL_152;
            *(_QWORD *)(v89 + 16) = v146;
            sub_1B4CF34((CGThumbnailListItem_o *)(v89 + 16), (int32_t)v146, v147, v148);
            v149 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
            v150 = &Method_MissionNaviTransitionBoardItem___c__DisplayClass42_2__SetupSceneTransitionBoardItem_b__6__;
            v151 = v149;
            v152 = (Il2CppObject *)v89;
          }
          else
          {
            Master_object = (int64_t)v163;
            if ( !v163 )
              goto LABEL_152;
            v151 = 0LL;
            if ( !EventDetailEntity__IsExchangeShop((EventDetailEntity_o *)v163, 0LL) )
              goto LABEL_141;
            v149 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
            v150 = &Method_MissionNaviTransitionBoardItem___c__DisplayClass42_1__SetupSceneTransitionBoardItem_b__5__;
            v151 = v149;
            v152 = (Il2CppObject *)v86;
          }
          System_Action___ctor(v149, v152, *v150, 0LL);
LABEL_141:
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v93 = LocalizationManager__Get((System_String_o *)StringLiteral_8497/*"MISSION_NAVI_EVENT_REWARD"*/, 0LL);
          v133 = sceneDetail;
          v134 = v151;
          v92 = (System_String_o *)StringLiteral_23001/*"shop_event"*/;
          goto LABEL_119;
        }
      }
    }
    NaviSceneTransitionAction = 0LL;
    v91 = 1;
    goto LABEL_36;
  }
LABEL_35:
  v91 = 0;
LABEL_36:
  v92 = closedMessage;
LABEL_37:
  v93 = closedMessage;
LABEL_121:
  if ( System_String__op_Inequality(naviName, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    v141 = naviName;
  else
    v141 = v93;
  v142 = System_String__op_Inequality(iconName, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( (v91 & 1) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v141 = LocalizationManager__Get((System_String_o *)StringLiteral_8503/*"MISSION_NAVI_NOT_OPEN_BOARD"*/, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ClosedMessageMaster___);
    if ( closedMessageId )
    {
      if ( Master_object )
      {
        Master_object = DataMasterBase_object__object__int___TryGetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          &v161,
                          closedMessageId,
                          (const MethodInfo_319D9E8 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
        if ( (Master_object & 1) == 0 )
          goto LABEL_134;
        if ( v161 )
        {
          closedMessage = (System_String_o *)v161[1].monitor;
          goto LABEL_134;
        }
      }
LABEL_152:
      sub_1B4D1EC(Master_object, *(_QWORD *)&closedMessageId);
    }
  }
LABEL_134:
  if ( !v142 )
    iconName = v92;
  v143 = (MissionNaviTransitionBoardItem_o *)sub_1B4D1DC(MissionNaviTransitionBoardItem_TypeInfo);
  MissionNaviTransitionBoardItem___ctor(
    v143,
    0,
    iconName,
    v141,
    0,
    0,
    0,
    v91 & 1,
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
  int v19; // w8
  void *v20; // x21
  bool v21; // w20
  int v22; // w19
  MissionNaviQuestEntity_o *v23; // x23
  int32_t questId; // w22
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v26; // x26
  const MethodInfo *v27; // x3
  bool v28; // w20
  System_Action_o *NaviQuestTransitionAction; // x0
  bool v30; // w25
  System_ValueTuple_string__string__o closedMessage; // kr00_16
  int32_t size; // w24
  System_String_o *v33; // x29
  bool HasFlag; // w20
  MissionNaviTransitionBoardItem_o *v35; // x23
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x8
  const MethodInfo *v44; // [xsp+10h] [xbp-90h]
  System_Action_o *v46; // [xsp+28h] [xbp-78h]
  System_String_o *challengeIconName; // [xsp+30h] [xbp-70h] BYREF
  int32_t result; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_49BEB0E & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_MissionNaviQuestMaster___, item);
    sub_1B4CF90(&DataManager_TypeInfo, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__get_Count__, v9);
    sub_1B4CF90(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo, v10);
    sub_1B4CF90(&MissionNaviTransitionBoardItem_TypeInfo, v11);
    sub_1B4CF90(&MissionNaviTransitionConfirmDialog_TypeInfo, v12);
    sub_1B4CF90(&Method_SingletonTemplate_QuestTree__get_Instance__, v13);
    byte_49BEB0E = 1;
  }
  result = 0;
  challengeIconName = 0LL;
  v14 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *challengeBoardList = (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o *)v14;
  sub_1B4CF34((CGThumbnailListItem_o *)challengeBoardList, (int32_t)v14, v15, v16);
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
  transitionParam = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_MissionNaviQuestMaster___);
  if ( !transitionParam
    || (transitionParam = MissionNaviQuestMaster__GetOpenQuestByNaviQuestMasterId(
                            (MissionNaviQuestMaster_o *)transitionParam,
                            result,
                            0LL)) == 0LL )
  {
LABEL_33:
    sub_1B4D1EC(transitionParam, v18);
  }
  v19 = *((_DWORD *)transitionParam + 6);
  v20 = transitionParam;
  v21 = v19 > 0;
  if ( v19 >= 1 )
  {
    v22 = 0;
    while ( v22 < (unsigned int)v19 )
    {
      v23 = (MissionNaviQuestEntity_o *)*((_QWORD *)v20 + v22 + 4);
      if ( !v23 )
        goto LABEL_33;
      questId = v23->fields.questId;
      transitionParam = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !transitionParam )
        goto LABEL_33;
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)transitionParam, questId, 0LL);
      if ( !QuestInfo )
        return !v21;
      v26 = QuestInfo;
      v28 = !MissionNaviQuestEntity__IsNaviBoardOpen(v23, QuestInfo, 0LL);
      NaviQuestTransitionAction = 0LL;
      if ( !v28 )
        NaviQuestTransitionAction = MissionNaviTransitionBoardItem__GetNaviQuestTransitionAction(v23, v26, item, v27);
      v46 = NaviQuestTransitionAction;
      if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
      v30 = v28;
      closedMessage = MissionNaviTransitionConfirmDialog__GetQuestNaviNameAndClosedMessage(v23, v26, v28, v27);
      transitionParam = (void *)MissionNaviQuestEntity__TryGetChallengeIconName(v23, &challengeIconName, 0LL);
      if ( !*challengeBoardList )
        goto LABEL_33;
      size = (*challengeBoardList)->fields._size;
      v33 = challengeIconName;
      HasFlag = MissionNaviQuestEntity__HasFlag(v23, 2LL, 0LL);
      v35 = (MissionNaviTransitionBoardItem_o *)sub_1B4D1DC(MissionNaviTransitionBoardItem_TypeInfo);
      MissionNaviTransitionBoardItem___ctor(
        v35,
        size,
        v33,
        closedMessage.fields.Item1,
        1,
        questId,
        HasFlag,
        v30,
        closedMessage.fields.Item2,
        v46,
        v44);
      transitionParam = *challengeBoardList;
      if ( !*challengeBoardList )
        goto LABEL_33;
      v38 = *((_QWORD *)transitionParam + 2);
      v39 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__;
      ++*((_DWORD *)transitionParam + 7);
      if ( !v38 )
        goto LABEL_33;
      v40 = *((int *)transitionParam + 6);
      if ( (unsigned int)v40 >= *(_DWORD *)(v38 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)transitionParam,
          (Il2CppObject *)v35,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = v38 + 8 * v40;
        *((_DWORD *)transitionParam + 6) = v40 + 1;
        *(_QWORD *)(v41 + 32) = v35;
        sub_1B4CF34((CGThumbnailListItem_o *)(v41 + 32), (int32_t)v35, v36, v37);
      }
      v19 = *((_DWORD *)v20 + 6);
      v21 = ++v22 < v19;
      if ( v22 >= v19 )
        return !v21;
    }
LABEL_34:
    sub_1B4D1F4(transitionParam, v18);
  }
  return !v21;
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

  if ( (byte_49BEB10 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__, item);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__, v7);
    sub_1B4CF90(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo, v8);
    sub_1B4CF90(&MissionNaviTransitionBoardItem_TypeInfo, v9);
    sub_1B4CF90(&MissionNaviTransitionConfirmDialog_TypeInfo, v10);
    sub_1B4CF90(&Method_SingletonTemplate_QuestTree__get_Instance__, v11);
    byte_49BEB10 = 1;
  }
  result = 0;
  challengeIconName = 0LL;
  v12 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *challengeBoardList = (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o *)v12;
  sub_1B4CF34((CGThumbnailListItem_o *)challengeBoardList, (int32_t)v12, v13, v14);
  if ( !missionNaviTransitionEntity )
    goto LABEL_22;
  System_Int32__TryParse(missionNaviTransitionEntity->fields.transitionParam, &result, 0LL);
  Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(Instance, v23->fields.warId, 0LL);
    IconNameByWarInfo = MissionNaviTransitionBoardItemDraw__GetIconNameByWarInfo(WarInfoByWarID, v28);
    challengeIconName = IconNameByWarInfo;
  }
  v30 = (MissionNaviTransitionBoardItem_o *)sub_1B4D1DC(MissionNaviTransitionBoardItem_TypeInfo);
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
    sub_1B4D1EC(Instance, v16);
  }
  allQuestInfoList_low = SLODWORD(Instance->fields.allQuestInfoList);
  if ( (unsigned int)allQuestInfoList_low >= LODWORD(mapControlRootInfo[1].klass) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v30,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = (__int64)mapControlRootInfo + 8 * allQuestInfoList_low;
    LODWORD(Instance->fields.allQuestInfoList) = allQuestInfoList_low + 1;
    *(_QWORD *)(v36 + 32) = v30;
    sub_1B4CF34((CGThumbnailListItem_o *)(v36 + 32), (int32_t)v30, v31, v32);
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

  if ( (byte_49BEB0F & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__, item);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__, v7);
    sub_1B4CF90(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo, v8);
    sub_1B4CF90(&MissionNaviTransitionBoardItem_TypeInfo, v9);
    sub_1B4CF90(&MissionNaviTransitionConfirmDialog_TypeInfo, v10);
    sub_1B4CF90(&Method_SingletonTemplate_QuestTree__get_Instance__, v11);
    sub_1B4CF90(&StringLiteral_8335/*"MAIN_SCENARIO"*/, v12);
    byte_49BEB0F = 1;
  }
  challengeIconName = 0LL;
  result = 0;
  v13 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *challengeBoardList = (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o *)v13;
  sub_1B4CF34((CGThumbnailListItem_o *)challengeBoardList, (int32_t)v13, v14, v15);
  if ( !missionNaviTransitionEntity )
LABEL_28:
    sub_1B4D1EC(Instance, v17);
  if ( System_String__op_Equality(
         missionNaviTransitionEntity->fields.transitionParam,
         (System_String_o *)StringLiteral_8335/*"MAIN_SCENARIO"*/,
         0LL) )
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(Instance, result, 0LL);
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
  v28 = (MissionNaviTransitionBoardItem_o *)sub_1B4D1DC(MissionNaviTransitionBoardItem_TypeInfo);
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
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = (__int64)mapControlRootInfo + 8 * allQuestInfoList_low;
    LODWORD(Instance->fields.allQuestInfoList) = allQuestInfoList_low + 1;
    *(_QWORD *)(v34 + 32) = v28;
    sub_1B4CF34((CGThumbnailListItem_o *)(v34 + 32), (int32_t)v28, v29, v30);
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
  sub_1B4CF34(
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
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._IconName_k__BackingField, (int32_t)value, (int32_t)method, v3);
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
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._Name_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall MissionNaviTransitionBoardItem__set_NaviAction(
        MissionNaviTransitionBoardItem_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._NaviAction_k__BackingField = value;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._NaviAction_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall MissionNaviTransitionBoardItem__set_QuestEndTime(
        MissionNaviTransitionBoardItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._QuestEndTime_k__BackingField = value;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._QuestEndTime_k__BackingField, (int32_t)value, (int32_t)method, v3);
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

  if ( (byte_49BEB15 & 1) == 0 )
  {
    sub_1B4CF90(&MissionNaviTransitionBoardItem___c_TypeInfo, v1);
    byte_49BEB15 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(MissionNaviTransitionBoardItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MissionNaviTransitionBoardItem___c_TypeInfo->static_fields->__9 = (struct MissionNaviTransitionBoardItem___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)MissionNaviTransitionBoardItem___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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

  if ( (byte_49BEB19 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_1B4CF90(&Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__43_3__, v3);
    sub_1B4CF90(&MissionNaviTransitionBoardItem___c_TypeInfo, v4);
    byte_49BEB19 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__43_3 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__43_3,
      v10,
      Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__43_3__,
      0LL);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__43_3 = _9__43_3;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__43_3, (int32_t)_9__43_3, v12, v13);
  }
  if ( !v8 )
LABEL_12:
    sub_1B4D1EC(Instance, v6);
  CommonUI__CloseMissionNaviTransitionConfirmDialog_30350364(v8, _9__43_3, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c___GetNaviQuestTransitionAction_b__43_3(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_49BEB1A & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_49BEB1A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1B4D1EC(Instance, v4);
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

  if ( (byte_49BEB1D & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_1B4CF90(&Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__45_3__, v3);
    sub_1B4CF90(&MissionNaviTransitionBoardItem___c_TypeInfo, v4);
    byte_49BEB1D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__45_3 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__45_3,
      v10,
      Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__45_3__,
      0LL);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__45_3 = _9__45_3;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__45_3, (int32_t)_9__45_3, v12, v13);
  }
  if ( !v8 )
LABEL_12:
    sub_1B4D1EC(Instance, v6);
  CommonUI__CloseMissionNaviTransitionConfirmDialog_30350364(v8, _9__45_3, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c___GetNaviSceneTransitionAction_b__45_3(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_49BEB1E & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_49BEB1E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1B4D1EC(Instance, v4);
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

  if ( (byte_49BEB1B & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_1B4CF90(&Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__44_3__, v3);
    sub_1B4CF90(&MissionNaviTransitionBoardItem___c_TypeInfo, v4);
    byte_49BEB1B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__44_3 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__44_3,
      v10,
      Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__44_3__,
      0LL);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__44_3 = _9__44_3;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__44_3, (int32_t)_9__44_3, v12, v13);
  }
  if ( !v8 )
LABEL_12:
    sub_1B4D1EC(Instance, v6);
  CommonUI__CloseMissionNaviTransitionConfirmDialog_30350364(v8, _9__44_3, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c___GetNaviWarOrSpotTransitionAction_b__44_3(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_49BEB1C & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_49BEB1C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1B4D1EC(Instance, v4);
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

  if ( (byte_49BEB16 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49BEB16 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v3);
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

  if ( (byte_49BEB17 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v2);
    byte_49BEB17 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B75B6 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
    byte_49B75B6 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SummonType_k__BackingField = 3;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v5);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 20, 1, 0LL, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c___SetupSceneTransitionBoardItem_b__42_4(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_49BEB18 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49BEB18 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v3);
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

  if ( (byte_49BEB1F & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49BEB1F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v4);
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

  if ( (byte_49BEB20 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49BEB20 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v4);
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

  if ( (byte_49BEB21 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49BEB21 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v4);
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

  if ( (byte_49BEB22 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v3);
    byte_49BEB22 = 1;
  }
  gachaId = this->fields.gachaId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B75B8 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
    byte_49B75B8 = 1;
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
  if ( !byte_49B75B6 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    byte_49B75B6 = 1;
  }
  if ( !Instance[2].fields.m_CachedPtr )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  *(_DWORD *)(*(_QWORD *)&Instance[1].fields.fadeType + 8LL) = type;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_16:
    sub_1B4D1EC(Instance, method);
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

  if ( (byte_49BEB23 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v5);
    sub_1B4CF90(&Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__43_1__, v6);
    sub_1B4CF90(&Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__, v7);
    sub_1B4CF90(&Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__2__, v8);
    sub_1B4CF90(&MissionNaviTransitionBoardItem___c_TypeInfo, v9);
    sub_1B4CF90(&StringLiteral_4926/*"DIALOG_OUT_OF_TERM"*/, v10);
    sub_1B4CF90(&StringLiteral_1/*""*/, v11);
    byte_49BEB23 = 1;
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
        v13 = (_QWORD *)sub_1B4CFA8(Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__);
      v14 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0LL);
      naviQuestEntity = (MissionListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( naviQuestEntity )
      {
        AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)naviQuestEntity, 1, 0LL);
        naviQuestEntity = (MissionListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        _9__2 = this->fields.__9__2;
        v16 = (CommonUI_o *)naviQuestEntity;
        if ( !_9__2 )
        {
          _9__2 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
          System_Action___ctor(
            _9__2,
            (Il2CppObject *)this,
            Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__2__,
            0LL);
          this->fields.__9__2 = _9__2;
          sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v17, v18);
        }
        if ( v16 )
        {
          CommonUI__CloseMissionNaviTransitionConfirmDialog_30350364(v16, _9__2, 0LL);
          return;
        }
      }
LABEL_27:
      sub_1B4D1EC(naviQuestEntity, method);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  naviQuestEntity = (MissionListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4926/*"DIALOG_OUT_OF_TERM"*/, 0LL);
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
    _9__43_1 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__43_1,
      v24,
      Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__43_1__,
      0LL);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__43_1 = _9__43_1;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__43_1, (int32_t)_9__43_1, v26, v27);
  }
  if ( !Instance )
    goto LABEL_27;
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v22, v21, _9__43_1, 500, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
  v28 = Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__;
  if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__ + 83) & 2) != 0 )
    v28 = (_QWORD *)sub_1B4CFA8(Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__);
  v29 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v28, v28[4]);
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

  if ( (byte_49BEB24 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    sub_1B4CF90(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v3);
    sub_1B4CF90(&DataManager_TypeInfo, v4);
    sub_1B4CF90(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v5);
    sub_1B4CF90(&EventTutorialMaster_EventTutorialArgs_TypeInfo, v6);
    sub_1B4CF90(&Method_System_Nullable_int__GetValueOrDefault__, v7);
    sub_1B4CF90(&Method_System_Nullable_int___ctor__, v8);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v10);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v11);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v12);
    byte_49BEB24 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
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
                       (const MethodInfo_319D9E8 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
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
    System_Nullable_int____ctor(v34, v21, (const MethodInfo_3699C2C *)Method_System_Nullable_int___ctor__);
    if ( !HIDWORD(v32) )
      goto LABEL_20;
  }
  v16 = sub_1B4D1DC(EventTutorialMaster_EventTutorialArgs_TypeInfo);
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
        if ( !byte_49B7988 )
        {
          sub_1B4CF90(&TerminalPramsManager_TypeInfo, v14);
          byte_49B7988 = 1;
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
    if ( !byte_49B5937 )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v14);
      byte_49B5937 = 1;
    }
    v31 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v31 = TerminalPramsManager_TypeInfo;
    }
    v31->static_fields->_IsDirectTransition_k__BackingField = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0LL) )
  {
LABEL_53:
    sub_1B4D1EC(Instance, v14);
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

  if ( (byte_49BEB25 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v5);
    sub_1B4CF90(&Method_SingletonTemplate_QuestTree__get_Instance__, v6);
    sub_1B4CF90(&Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__44_1__, v7);
    sub_1B4CF90(
      &Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__,
      v8);
    sub_1B4CF90(
      &Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__2__,
      v9);
    sub_1B4CF90(&MissionNaviTransitionBoardItem___c_TypeInfo, v10);
    sub_1B4CF90(&StringLiteral_4926/*"DIALOG_OUT_OF_TERM"*/, v11);
    sub_1B4CF90(&StringLiteral_1/*""*/, v12);
    byte_49BEB25 = 1;
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
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
      v15 = (_QWORD *)sub_1B4CFA8(Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__);
    v16 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0LL);
    Instance = (QuestTree_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( Instance )
    {
      AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 1, 0LL);
      Instance = (QuestTree_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      _9__2 = this->fields.__9__2;
      v18 = (CommonUI_o *)Instance;
      if ( !_9__2 )
      {
        _9__2 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__2,
          (Il2CppObject *)this,
          Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__2__,
          0LL);
        this->fields.__9__2 = _9__2;
        sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v19, v20);
      }
      if ( v18 )
      {
        CommonUI__CloseMissionNaviTransitionConfirmDialog_30350364(v18, _9__2, 0LL);
        return;
      }
    }
LABEL_33:
    sub_1B4D1EC(Instance, method);
  }
LABEL_21:
  v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (QuestTree_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4926/*"DIALOG_OUT_OF_TERM"*/, 0LL);
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
    _9__44_1 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__44_1,
      v26,
      Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__44_1__,
      0LL);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__44_1 = _9__44_1;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__44_1, (int32_t)_9__44_1, v28, v29);
  }
  if ( !v21 )
    goto LABEL_33;
  CommonUI__OpenNotificationDialog((CommonUI_o *)v21, v24, v23, _9__44_1, 500, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
  v30 = Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__;
  if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__
        + 83) & 2) != 0 )
    v30 = (_QWORD *)sub_1B4CFA8(Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__);
  v31 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v30, v30[4]);
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

  if ( (byte_49BEB26 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    sub_1B4CF90(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v3);
    sub_1B4CF90(&DataManager_TypeInfo, v4);
    sub_1B4CF90(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v5);
    sub_1B4CF90(&EventTutorialMaster_EventTutorialArgs_TypeInfo, v6);
    sub_1B4CF90(&Method_System_Nullable_int__GetValueOrDefault__, v7);
    sub_1B4CF90(&Method_System_Nullable_int___ctor__, v8);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v10);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v11);
    sub_1B4CF90(&Method_SingletonTemplate_QuestTree__get_Instance__, v12);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v13);
    byte_49BEB26 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
          (const MethodInfo_3699C2C *)Method_System_Nullable_int___ctor__);
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
  Instance = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Instance )
LABEL_69:
    sub_1B4D1EC(Instance, v15);
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         this->fields.targetSpotId,
         (const MethodInfo_319D9E8 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__) )
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
        if ( !byte_49B7988 )
        {
          sub_1B4CF90(&TerminalPramsManager_TypeInfo, v16);
          byte_49B7988 = 1;
        }
        v34 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v34 = TerminalPramsManager_TypeInfo;
        }
        v34->static_fields->_SpotId_k__BackingField = targetSpotId;
        TerminalPramsManager__SetAutoResumeByWarId(warId, 0LL);
        if ( !byte_49B5937 )
        {
          sub_1B4CF90(&TerminalPramsManager_TypeInfo, v35);
          byte_49B5937 = 1;
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
      if ( !byte_49B5937 )
      {
        sub_1B4CF90(&TerminalPramsManager_TypeInfo, v39);
        byte_49B5937 = 1;
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  v24 = this->fields.spotEnt;
  if ( !v24 || !Instance )
    goto LABEL_69;
  v25 = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, v24->fields.warId, 0LL);
  if ( v25 && (v26 = MapControl_WarInfo__GetMine(v25, 0LL)) != 0LL )
  {
    v27 = v26->fields.parentBlankEarthSpotId;
    v47 = (System_Nullable_int__o)&v44;
    v44 = 0LL;
    System_Nullable_int____ctor(v47, v27, (const MethodInfo_3699C2C *)Method_System_Nullable_int___ctor__);
    v28 = v44;
  }
  else
  {
    v28 = 0LL;
  }
  if ( !v19 && HIDWORD(v28) == 0 )
    goto LABEL_33;
LABEL_31:
  v29 = sub_1B4D1DC(EventTutorialMaster_EventTutorialArgs_TypeInfo);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
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
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  Il2CppObject *Instance; // x19
  MissionNaviTransitionBoardItem___c_c *v37; // x8
  System_String_o *v38; // x20
  System_String_o *v39; // x21
  System_Action_o *_9__45_1; // x22
  Il2CppObject *v41; // x23
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  _QWORD *v45; // x0
  System_Reflection_MethodBase_o *v46; // x0
  bool v47; // w0
  Il2CppObject *entity; // [xsp+30h] [xbp-60h] BYREF
  int32_t result; // [xsp+3Ch] [xbp-54h] BYREF
  Il2CppObject *v50; // [xsp+40h] [xbp-50h] BYREF
  int32_t key; // [xsp+4Ch] [xbp-44h] BYREF

  if ( (byte_49BEB27 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventMaster___, v3);
    sub_1B4CF90(&Method_DataManager_GetMaster_GachaMaster___, v4);
    sub_1B4CF90(&Method_DataManager_GetMaster_ShopMaster___, v5);
    sub_1B4CF90(&DataManager_TypeInfo, v6);
    sub_1B4CF90(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7);
    sub_1B4CF90(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v8);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v9);
    sub_1B4CF90(&NetworkManager_TypeInfo, v10);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v12);
    sub_1B4CF90(&Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__45_1__, v13);
    sub_1B4CF90(&Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__, v14);
    sub_1B4CF90(&Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__2__, v15);
    sub_1B4CF90(&MissionNaviTransitionBoardItem___c_TypeInfo, v16);
    sub_1B4CF90(&StringLiteral_4926/*"DIALOG_OUT_OF_TERM"*/, v17);
    sub_1B4CF90(&StringLiteral_6136/*"EventReward"*/, v18);
    sub_1B4CF90(&StringLiteral_12868/*"Summon"*/, v19);
    sub_1B4CF90(&StringLiteral_1/*""*/, v20);
    byte_49BEB27 = 1;
  }
  key = 0;
  v50 = 0LL;
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
    sub_1B4D1F4(sceneDetail, method);
  v23 = *(System_String_o **)(sceneDetail + 32);
  v24 = System_String__op_Equality(v23, (System_String_o *)StringLiteral_6136/*"EventReward"*/, 0LL);
  if ( v24 )
    v25 = v23;
  else
    v25 = 0LL;
  if ( v24 && ((v26 = *(_DWORD *)(v22 + 24), v26 >= 2) ? (v27 = v25) : (v27 = 0LL), v26 >= 2) )
  {
    v47 = System_Int32__TryParse(*(System_String_o **)(v22 + 40), &key, 0LL);
    if ( v47 )
      v23 = v27;
    else
      v23 = 0LL;
    if ( v47 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      sceneDetail = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !sceneDetail )
        goto LABEL_67;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)sceneDetail,
             &v50,
             key,
             (const MethodInfo_319D9E8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        sceneDetail = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ShopMaster___);
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
  if ( !System_String__op_Equality(v23, (System_String_o *)StringLiteral_12868/*"Summon"*/, 0LL) || *(int *)(v22 + 24) < 2 )
    goto LABEL_28;
  System_Int32__TryParse(*(System_String_o **)(v22 + 40), &result, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  sceneDetail = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !sceneDetail )
    goto LABEL_67;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)sceneDetail,
          &entity,
          result,
          (const MethodInfo_319D9E8 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__) )
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
        v30 = (_QWORD *)sub_1B4CFA8(Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__);
      v31 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v30, v30[4]);
      OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0, 0LL);
      sceneDetail = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( sceneDetail )
      {
        AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)sceneDetail, 1, 0LL);
        sceneDetail = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        _9__2 = this->fields.__9__2;
        v33 = (CommonUI_o *)sceneDetail;
        if ( !_9__2 )
        {
          _9__2 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
          System_Action___ctor(
            _9__2,
            (Il2CppObject *)this,
            Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__2__,
            0LL);
          this->fields.__9__2 = _9__2;
          sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v34, v35);
        }
        if ( v33 )
        {
          CommonUI__CloseMissionNaviTransitionConfirmDialog_30350364(v33, _9__2, 0LL);
          return;
        }
      }
LABEL_67:
      sub_1B4D1EC(sceneDetail, method);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sceneDetail = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4926/*"DIALOG_OUT_OF_TERM"*/, 0LL);
  v37 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v38 = (System_String_o *)sceneDetail;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
    v37 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  v39 = (System_String_o *)StringLiteral_1/*""*/;
  _9__45_1 = v37->static_fields->__9__45_1;
  if ( !_9__45_1 )
  {
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v37 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v41 = (Il2CppObject *)v37->static_fields->__9;
    _9__45_1 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__45_1,
      v41,
      Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__45_1__,
      0LL);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__45_1 = _9__45_1;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__45_1, (int32_t)_9__45_1, v43, v44);
  }
  if ( !Instance )
    goto LABEL_67;
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v39, v38, _9__45_1, 500, 0, 0, 0, 1, 0, 0, 0, 0LL, 0.0, 0LL);
  v45 = Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__;
  if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__ + 83) & 2) != 0 )
    v45 = (_QWORD *)sub_1B4CFA8(Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__);
  v46 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v45, v45[4]);
  OverwriteAssetSoundName__PlaySystemSe(v46, 2, 0, 0LL);
}


void __fastcall MissionNaviTransitionBoardItem___c__DisplayClass45_0___GetNaviSceneTransitionAction_b__2(
        MissionNaviTransitionBoardItem___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_49BEB28 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v3);
    byte_49BEB28 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL),
        ActionExtensions__Call(this->fields.transitionSceneAction, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0LL) )
  {
    sub_1B4D1EC(Instance, v5);
  }
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 0, 0LL);
}