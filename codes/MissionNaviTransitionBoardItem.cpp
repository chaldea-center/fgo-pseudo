void MissionNaviTransitionBoardItem___ctor(
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

  ListViewItem___ctor_43702564((ListViewItem_o *)this, index, 0);
  this->fields._IconName_k__BackingField = iconName;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._IconName_k__BackingField, (int32_t)iconName, v18, v19);
  this->fields._Name_k__BackingField = name;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._Name_k__BackingField, (int32_t)name, v20, v21);
  this->fields._BoardType_k__BackingField = naviBoardType;
  this->fields._QuestId_k__BackingField = questId;
  this->fields._IsNotDisplayQuestInfo_k__BackingField = isNotDisplayQuestInfo;
  this->fields._IsLocked_k__BackingField = isLocked;
  this->fields._ClosedMessage_k__BackingField = closedMessage;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._ClosedMessage_k__BackingField, (int32_t)closedMessage, v22, v23);
  this->fields._NaviAction_k__BackingField = naviAction;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._NaviAction_k__BackingField, (int32_t)naviAction, v24, v25);
}


System_Action_o *MissionNaviTransitionBoardItem__GetNaviQuestTransitionAction(
        MissionNaviQuestEntity_o *naviQuestEntity,
        MapControl_QuestInfo_o *tempQuestInfo,
        MissionListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x8
  System_Action_o *v16; // x19

  if ( (byte_4C3B499 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__);
    sub_1C32C20(&MissionNaviTransitionBoardItem___c__DisplayClass43_0_TypeInfo);
    byte_4C3B499 = 1;
  }
  v7 = sub_1C32E6C(MissionNaviTransitionBoardItem___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = naviQuestEntity,
        sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)naviQuestEntity, v9, v10),
        *(_QWORD *)(v7 + 24) = tempQuestInfo,
        sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 24), (int32_t)tempQuestInfo, v11, v12),
        *(_QWORD *)(v7 + 32) = item,
        sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 32), (int32_t)item, v13, v14),
        (v15 = *(_QWORD *)(v7 + 16)) == 0) )
  {
    sub_1C32E7C(v8);
  }
  *(_DWORD *)(v7 + 40) = *(_DWORD *)(v15 + 20);
  v16 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v7,
    (intptr_t)Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__,
    0);
  return v16;
}


System_Action_o *MissionNaviTransitionBoardItem__GetNaviSceneTransitionAction(
        System_String_o *sceneDetail,
        System_Action_o *transitionSceneAction,
        MissionListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Action_o *v15; // x19

  if ( (byte_4C3B49B & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__);
    sub_1C32C20(&MissionNaviTransitionBoardItem___c__DisplayClass45_0_TypeInfo);
    byte_4C3B49B = 1;
  }
  v7 = sub_1C32E6C(MissionNaviTransitionBoardItem___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C32E7C(v8);
  *(_QWORD *)(v7 + 16) = sceneDetail;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)sceneDetail, v9, v10);
  *(_QWORD *)(v7 + 24) = item;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 24), (int32_t)item, v11, v12);
  *(_QWORD *)(v7 + 32) = transitionSceneAction;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 32), (int32_t)transitionSceneAction, v13, v14);
  v15 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v7,
    (intptr_t)Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__,
    0);
  return v15;
}


System_Action_o *MissionNaviTransitionBoardItem__GetNaviWarOrSpotTransitionAction(
        MissionNaviTransitionEntity_o *naviTransitionEntity,
        MissionListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x20
  void *transitionParam; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  void *v9; // x22
  System_String_o *v10; // x0
  MapControl_SpotInfo_o *SpotInfo; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  MapControl_SpotInfo_o *v16; // x0
  SpotEntity_o *Mine; // x1
  int32_t missionTransitionType; // w8
  System_Action_o *v19; // x19

  if ( (byte_4C3B49A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C32C20(&Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__);
    sub_1C32C20(&MissionNaviTransitionBoardItem___c__DisplayClass44_0_TypeInfo);
    sub_1C32C20(&StringLiteral_7137/*"Grand"*/);
    sub_1C32C20(&StringLiteral_8530/*"MAIN_SCENARIO"*/);
    byte_4C3B49A = 1;
  }
  v5 = sub_1C32E6C(MissionNaviTransitionBoardItem___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_25;
  *(_QWORD *)(v5 + 40) = item;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 40), (int32_t)item, v7, v8);
  *(_DWORD *)(v5 + 36) = 0;
  *(_BYTE *)(v5 + 64) = 0;
  if ( !naviTransitionEntity )
    goto LABEL_25;
  transitionParam = naviTransitionEntity->fields.transitionParam;
  if ( !transitionParam )
    goto LABEL_25;
  transitionParam = System_String__Split((System_String_o *)transitionParam, 0x2Fu, 0, 0);
  if ( !transitionParam )
    goto LABEL_25;
  v9 = transitionParam;
  if ( !*((_DWORD *)transitionParam + 6) )
    sub_1C32E84(transitionParam);
  *(_BYTE *)(v5 + 65) = System_String__op_Equality(
                          *((System_String_o **)transitionParam + 4),
                          (System_String_o *)StringLiteral_7137/*"Grand"*/,
                          0);
  if ( !System_String__op_Equality(
          naviTransitionEntity->fields.transitionParam,
          (System_String_o *)StringLiteral_8530/*"MAIN_SCENARIO"*/,
          0) )
  {
    if ( *(_BYTE *)(v5 + 65) )
    {
      if ( *((int *)v9 + 6) < 2 )
      {
        transitionParam = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( transitionParam )
        {
          transitionParam = QuestTree__GetLatestGrandWarInfo((QuestTree_o *)transitionParam, 0);
          if ( transitionParam )
          {
LABEL_16:
            *(_DWORD *)(v5 + 36) = *((_DWORD *)transitionParam + 5);
            goto LABEL_20;
          }
        }
LABEL_25:
        sub_1C32E7C(transitionParam);
      }
      v10 = (System_String_o *)*((_QWORD *)v9 + 5);
    }
    else
    {
      v10 = naviTransitionEntity->fields.transitionParam;
    }
    System_Int32__TryParse(v10, (int32_t *)(v5 + 36), 0);
    goto LABEL_20;
  }
  *(_BYTE *)(v5 + 64) = 1;
  transitionParam = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !transitionParam )
    goto LABEL_25;
  transitionParam = QuestTree__GetLatestProgressWarInfo((QuestTree_o *)transitionParam, 0);
  if ( transitionParam )
    goto LABEL_16;
LABEL_20:
  System_Int32__TryParse(naviTransitionEntity->fields.transitionParam, (int32_t *)(v5 + 48), 0);
  transitionParam = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !transitionParam )
    goto LABEL_25;
  SpotInfo = QuestTree__GetSpotInfo((QuestTree_o *)transitionParam, *(_DWORD *)(v5 + 48), 0);
  *(_QWORD *)(v5 + 24) = SpotInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)SpotInfo, v12, v13);
  v16 = *(MapControl_SpotInfo_o **)(v5 + 24);
  if ( v16 )
    Mine = MapControl_SpotInfo__GetMine(v16, 0);
  else
    Mine = 0;
  *(_QWORD *)(v5 + 56) = Mine;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 56), (int32_t)Mine, v14, v15);
  missionTransitionType = naviTransitionEntity->fields.missionTransitionType;
  *(_BYTE *)(v5 + 16) = missionTransitionType == 3;
  *(_BYTE *)(v5 + 32) = missionTransitionType == 2;
  v19 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v5,
    (intptr_t)Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__,
    0);
  return v19;
}


MissionNaviTransitionBoardItem_o *MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem(
        MissionNaviTransitionEntity_o *missionNaviTransitionEnt,
        MissionListViewItem_o *item,
        const MethodInfo *method)
{
  System_String_o *transitionParam; // x21
  const MethodInfo *v6; // x5
  System_String_o *v8; // [xsp+0h] [xbp-30h] BYREF
  System_String_o *challengeNaviName; // [xsp+8h] [xbp-28h] BYREF

  v8 = 0;
  challengeNaviName = 0;
  if ( !missionNaviTransitionEnt )
    sub_1C32E7C(0);
  transitionParam = missionNaviTransitionEnt->fields.transitionParam;
  MissionNaviTransitionEntity__TryGetChallengeNaviName(missionNaviTransitionEnt, &challengeNaviName, 0);
  MissionNaviTransitionEntity__TryGetChallengeIconName(missionNaviTransitionEnt, &v8, 0);
  return MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem_47900604(
           transitionParam,
           missionNaviTransitionEnt->fields.closedMessageId,
           challengeNaviName,
           v8,
           item,
           v6);
}


MissionNaviTransitionBoardItem_o *MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem_47900604(
        System_String_o *sceneDetail,
        int32_t closedMessageId,
        System_String_o *naviName,
        System_String_o *iconName,
        MissionListViewItem_o *item,
        const MethodInfo *method)
{
  int64_t Master_object; // x0
  System_String_o *closedMessage; // x28
  System_Action_o *NaviSceneTransitionAction; // x24
  Il2CppObject *v12; // x25
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int64_t v16; // x25
  System_String_o *v17; // x27
  __int64 v18; // x26
  __int64 v19; // x26
  int32_t *v20; // x27
  Il2CppObject *v21; // x24
  __int64 v22; // x24
  int32_t v23; // w25
  char v24; // w23
  System_String_o *v25; // x29
  System_String_o *v26; // x25
  BalanceConfig_c *v27; // x0
  int32_t ClassBoardReleaseQuestId; // w25
  bool IsQuestClear_40225464; // w26
  System_String_o *v30; // x0
  const MethodInfo *v31; // x3
  MissionNaviTransitionBoardItem___c_c *v32; // x8
  System_String_o *v33; // x25
  System_Action_o *_9__42_1; // x24
  Il2CppObject *v35; // x27
  struct MissionNaviTransitionBoardItem___c_StaticFields *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_String_o *v39; // x0
  __int64 v40; // x24
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  System_String_o *v43; // x25
  SceneJumpInfo_o *v44; // x27
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  __int64 *v47; // x22
  __int64 *v48; // x8
  System_String_o *v49; // x0
  const MethodInfo *v50; // x3
  MissionNaviTransitionBoardItem___c_c *v51; // x8
  System_Action_o *_9__42_2; // x24
  Il2CppObject *v53; // x26
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  struct MissionNaviTransitionBoardItem___c_StaticFields *v56; // x0
  CGThumbnailListItem_o *p__9__42_2; // x0
  int32_t v58; // w24
  SceneJumpInfo_o *v59; // x25
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  System_String_o *v62; // x0
  MissionNaviTransitionBoardItem___c_c *v63; // x8
  Il2CppObject *v64; // x26
  struct MissionNaviTransitionBoardItem___c_StaticFields *v65; // x0
  System_String_o *v66; // x0
  System_Action_o *v67; // x1
  __int64 v68; // x26
  __int64 *v69; // x25
  __int64 v70; // x8
  bool v71; // w0
  System_String_o *v72; // x0
  System_Action_o *v73; // x26
  System_String_o *v74; // x22
  bool v75; // w21
  MissionNaviTransitionBoardItem_o *v76; // x20
  int32_t v78; // w27
  SceneJumpInfo_o *v79; // x26
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  System_Action_o *v82; // x0
  intptr_t *v83; // x8
  System_Action_o *v84; // x27
  Il2CppObject *v85; // x1
  System_Action_o *v86; // x24
  const MethodInfo *v87; // x3
  __int64 v88; // x8
  Il2CppObject *v89; // x22
  System_String_o *v90; // x0
  const MethodInfo *v91; // [xsp+10h] [xbp-A0h]
  Il2CppObject *v94; // [xsp+28h] [xbp-88h] BYREF
  int32_t v95; // [xsp+34h] [xbp-7Ch] BYREF
  Il2CppObject *v96; // [xsp+38h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+40h] [xbp-70h] BYREF
  int32_t result; // [xsp+4Ch] [xbp-64h] BYREF

  if ( (byte_4C3B498 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ClosedMessageMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&MissionNaviTransitionBoardItem_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&SceneJumpInfo_TypeInfo);
    sub_1C32C20(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_0__);
    sub_1C32C20(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_1__);
    sub_1C32C20(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_2__);
    sub_1C32C20(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_4__);
    sub_1C32C20(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_0__SetupSceneTransitionBoardItem_b__3__);
    sub_1C32C20(&MissionNaviTransitionBoardItem___c__DisplayClass42_0_TypeInfo);
    sub_1C32C20(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_1__SetupSceneTransitionBoardItem_b__5__);
    sub_1C32C20(&MissionNaviTransitionBoardItem___c__DisplayClass42_1_TypeInfo);
    sub_1C32C20(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_2__SetupSceneTransitionBoardItem_b__6__);
    sub_1C32C20(&MissionNaviTransitionBoardItem___c__DisplayClass42_2_TypeInfo);
    sub_1C32C20(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_3__SetupSceneTransitionBoardItem_b__7__);
    sub_1C32C20(&MissionNaviTransitionBoardItem___c__DisplayClass42_3_TypeInfo);
    sub_1C32C20(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_4__SetupSceneTransitionBoardItem_b__8__);
    sub_1C32C20(&MissionNaviTransitionBoardItem___c__DisplayClass42_4_TypeInfo);
    sub_1C32C20(&MissionNaviTransitionBoardItem___c_TypeInfo);
    sub_1C32C20(&StringLiteral_43/*"\n"*/);
    sub_1C32C20(&StringLiteral_23285/*"servant_eq_combine"*/);
    sub_1C32C20(&StringLiteral_113/*" "*/);
    sub_1C32C20(&StringLiteral_23443/*"shop_event"*/);
    sub_1C32C20(&StringLiteral_12741/*"ServantSkillCombine"*/);
    sub_1C32C20(&StringLiteral_8699/*"MISSION_NAVI_NOT_OPEN_BOARD"*/);
    sub_1C32C20(&StringLiteral_6549/*"FRIEND_POINT"*/);
    sub_1C32C20(&StringLiteral_4565/*"Combine"*/);
    sub_1C32C20(&StringLiteral_4439/*"ClassBoard"*/);
    sub_1C32C20(&StringLiteral_17990/*"class_board"*/);
    sub_1C32C20(&StringLiteral_22143/*"my_room"*/);
    sub_1C32C20(&StringLiteral_8706/*"MISSION_NAVI_SERVANT_SKILL_COMBINE"*/);
    sub_1C32C20(&StringLiteral_23288/*"servant_skill_combine"*/);
    sub_1C32C20(&StringLiteral_8704/*"MISSION_NAVI_SERVANT_EQ_COMBINE"*/);
    sub_1C32C20(&StringLiteral_6246/*"EventReward"*/);
    sub_1C32C20(&StringLiteral_8708/*"MISSION_NAVI_SUMMON_FRIEND_POINT"*/);
    sub_1C32C20(&StringLiteral_8693/*"MISSION_NAVI_EVENT_REWARD"*/);
    sub_1C32C20(&StringLiteral_8697/*"MISSION_NAVI_MYROOM"*/);
    sub_1C32C20(&StringLiteral_23284/*"servant_combine"*/);
    sub_1C32C20(&StringLiteral_8705/*"MISSION_NAVI_SERVANT_LIMIT_COUNT_UP"*/);
    sub_1C32C20(&StringLiteral_23823/*"summon"*/);
    sub_1C32C20(&StringLiteral_8700/*"MISSION_NAVI_NOT_OPEN_CLASS_BOARD_CLOSED_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_8703/*"MISSION_NAVI_SERVANT_COMBINE"*/);
    sub_1C32C20(&StringLiteral_23287/*"servant_limit_count_up"*/);
    sub_1C32C20(&StringLiteral_19666/*"friend"*/);
    sub_1C32C20(&StringLiteral_6872/*"Friend"*/);
    sub_1C32C20(&StringLiteral_13164/*"Summon"*/);
    sub_1C32C20(&StringLiteral_12725/*"ServantEQCombine"*/);
    sub_1C32C20(&StringLiteral_12722/*"ServantCombine"*/);
    sub_1C32C20(&StringLiteral_9214/*"MyRoom"*/);
    sub_1C32C20(&StringLiteral_8685/*"MISSION_NAVI_CLASS_BOARD"*/);
    sub_1C32C20(&StringLiteral_12735/*"ServantLimitCountUp"*/);
    sub_1C32C20(&StringLiteral_8707/*"MISSION_NAVI_SUMMON"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_23829/*"summon_friend"*/);
    sub_1C32C20(&StringLiteral_8695/*"MISSION_NAVI_FRIEND_AND_FOLLOW"*/);
    byte_4C3B498 = 1;
  }
  Master_object = (int64_t)MissionNaviTransitionBoardItem___c_TypeInfo;
  result = 0;
  v96 = 0;
  entity = 0;
  v95 = 0;
  v94 = 0;
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
    v12 = **(Il2CppObject ***)(Master_object + 184);
    NaviSceneTransitionAction = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      NaviSceneTransitionAction,
      v12,
      Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_0__,
      0);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__42_0 = NaviSceneTransitionAction;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__42_0, (int32_t)NaviSceneTransitionAction, v14, v15);
  }
  if ( !sceneDetail )
    goto LABEL_152;
  Master_object = (int64_t)System_String__Split(sceneDetail, 0x2Fu, 0, 0);
  if ( !Master_object )
    goto LABEL_152;
  v16 = Master_object;
  if ( !*(_DWORD *)(Master_object + 24) )
    goto LABEL_153;
  v17 = *(System_String_o **)(Master_object + 32);
  v18 = sub_1C32E6C(MissionNaviTransitionBoardItem___c__DisplayClass42_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0);
  if ( !System_String__op_Equality(v17, (System_String_o *)StringLiteral_6246/*"EventReward"*/, 0) )
  {
    if ( System_String__op_Equality(v17, (System_String_o *)StringLiteral_4565/*"Combine"*/, 0) )
    {
      if ( *(int *)(v16 + 24) < 2 )
        goto LABEL_35;
      v40 = sub_1C32E6C(MissionNaviTransitionBoardItem___c__DisplayClass42_3_TypeInfo);
      System_Object___ctor((Il2CppObject *)v40, 0);
      if ( *(_DWORD *)(v16 + 24) <= 1u )
        goto LABEL_153;
      if ( !v40 )
        goto LABEL_152;
      v43 = *(System_String_o **)(v16 + 40);
      *(_QWORD *)(v40 + 16) = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)(v40 + 16), 0, v41, v42);
      v44 = (SceneJumpInfo_o *)sub_1C32E6C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41379552(v44, v43, 0);
      *(_QWORD *)(v40 + 16) = v44;
      sub_1C32BC4((CGThumbnailListItem_o *)(v40 + 16), (int32_t)v44, v45, v46);
      if ( System_String__op_Equality(v43, (System_String_o *)StringLiteral_12722/*"ServantCombine"*/, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v47 = &StringLiteral_23284/*"servant_combine"*/;
        v48 = &StringLiteral_8703/*"MISSION_NAVI_SERVANT_COMBINE"*/;
      }
      else if ( System_String__op_Equality(v43, (System_String_o *)StringLiteral_12741/*"ServantSkillCombine"*/, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v47 = &StringLiteral_23288/*"servant_skill_combine"*/;
        v48 = &StringLiteral_8706/*"MISSION_NAVI_SERVANT_SKILL_COMBINE"*/;
      }
      else if ( System_String__op_Equality(v43, (System_String_o *)StringLiteral_12725/*"ServantEQCombine"*/, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v47 = &StringLiteral_23285/*"servant_eq_combine"*/;
        v48 = &StringLiteral_8704/*"MISSION_NAVI_SERVANT_EQ_COMBINE"*/;
      }
      else
      {
        v71 = System_String__op_Equality(v43, (System_String_o *)StringLiteral_12735/*"ServantLimitCountUp"*/, 0);
        v25 = closedMessage;
        v26 = closedMessage;
        if ( !v71 )
        {
LABEL_118:
          v73 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(
            v73,
            (Il2CppObject *)v40,
            Method_MissionNaviTransitionBoardItem___c__DisplayClass42_3__SetupSceneTransitionBoardItem_b__7__,
            0);
          v66 = sceneDetail;
          v67 = v73;
          goto LABEL_119;
        }
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v47 = &StringLiteral_23287/*"servant_limit_count_up"*/;
        v48 = &StringLiteral_8705/*"MISSION_NAVI_SERVANT_LIMIT_COUNT_UP"*/;
      }
      v72 = LocalizationManager__Get((System_String_o *)*v48, 0);
      v25 = (System_String_o *)*v47;
      v26 = v72;
      goto LABEL_118;
    }
    if ( System_String__op_Equality(v17, (System_String_o *)StringLiteral_4439/*"ClassBoard"*/, 0) )
    {
      v27 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v27 = BalanceConfig_TypeInfo;
      }
      ClassBoardReleaseQuestId = v27->static_fields->ClassBoardReleaseQuestId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_40225464 = CondType__IsQuestClear_40225464(ClassBoardReleaseQuestId, -1, 0, 0);
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( IsQuestClear_40225464 )
        {
LABEL_45:
          v30 = LocalizationManager__Get((System_String_o *)StringLiteral_8685/*"MISSION_NAVI_CLASS_BOARD"*/, 0);
          v32 = MissionNaviTransitionBoardItem___c_TypeInfo;
          v33 = v30;
          if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
            v32 = MissionNaviTransitionBoardItem___c_TypeInfo;
          }
          _9__42_1 = v32->static_fields->__9__42_1;
          if ( !_9__42_1 )
          {
            if ( !v32->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v32);
              v32 = MissionNaviTransitionBoardItem___c_TypeInfo;
            }
            v35 = (Il2CppObject *)v32->static_fields->__9;
            _9__42_1 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
            System_Action___ctor(
              _9__42_1,
              v35,
              Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_1__,
              0);
            v36 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
            v36->__9__42_1 = _9__42_1;
            sub_1C32BC4((CGThumbnailListItem_o *)&v36->__9__42_1, (int32_t)_9__42_1, v37, v38);
          }
          NaviSceneTransitionAction = MissionNaviTransitionBoardItem__GetNaviSceneTransitionAction(
                                        sceneDetail,
                                        _9__42_1,
                                        item,
                                        v31);
          v39 = closedMessage;
          closedMessage = v33;
          goto LABEL_83;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( IsQuestClear_40225464 )
          goto LABEL_45;
      }
      v39 = LocalizationManager__Get((System_String_o *)StringLiteral_8700/*"MISSION_NAVI_NOT_OPEN_CLASS_BOARD_CLOSED_MESSAGE"*/, 0);
LABEL_83:
      v26 = closedMessage;
      v24 = !IsQuestClear_40225464;
      closedMessage = v39;
      v25 = (System_String_o *)StringLiteral_17990/*"class_board"*/;
      goto LABEL_121;
    }
    if ( System_String__op_Equality(v17, (System_String_o *)StringLiteral_13164/*"Summon"*/, 0) )
    {
      v25 = (System_String_o *)StringLiteral_23823/*"summon"*/;
      if ( *(int *)(v16 + 24) >= 2 )
      {
        if ( System_String__op_Equality(*(System_String_o **)(v16 + 40), (System_String_o *)StringLiteral_6549/*"FRIEND_POINT"*/, 0) )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v49 = LocalizationManager__Get((System_String_o *)StringLiteral_8708/*"MISSION_NAVI_SUMMON_FRIEND_POINT"*/, 0);
          v51 = MissionNaviTransitionBoardItem___c_TypeInfo;
          v26 = v49;
          v25 = (System_String_o *)StringLiteral_23829/*"summon_friend"*/;
          if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
            v51 = MissionNaviTransitionBoardItem___c_TypeInfo;
          }
          _9__42_2 = v51->static_fields->__9__42_2;
          if ( _9__42_2 )
            goto LABEL_98;
          if ( !v51->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v51);
            v51 = MissionNaviTransitionBoardItem___c_TypeInfo;
          }
          v53 = (Il2CppObject *)v51->static_fields->__9;
          _9__42_2 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(
            _9__42_2,
            v53,
            Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_2__,
            0);
          v56 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
          v56->__9__42_2 = _9__42_2;
          p__9__42_2 = (CGThumbnailListItem_o *)&v56->__9__42_2;
LABEL_97:
          sub_1C32BC4(p__9__42_2, (int32_t)_9__42_2, v54, v55);
LABEL_98:
          v66 = sceneDetail;
          v67 = _9__42_2;
LABEL_119:
          NaviSceneTransitionAction = MissionNaviTransitionBoardItem__GetNaviSceneTransitionAction(v66, v67, item, v50);
LABEL_120:
          v24 = 0;
          goto LABEL_121;
        }
        if ( *(int *)(v16 + 24) >= 2 )
        {
          v68 = sub_1C32E6C(MissionNaviTransitionBoardItem___c__DisplayClass42_4_TypeInfo);
          System_Object___ctor((Il2CppObject *)v68, 0);
          if ( *(_DWORD *)(v16 + 24) <= 1u )
            goto LABEL_153;
          if ( !v68 )
            goto LABEL_152;
          System_Int32__TryParse(*(System_String_o **)(v16 + 40), (int32_t *)(v68 + 16), 0);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GachaMaster___);
          if ( !Master_object )
            goto LABEL_152;
          v69 = (__int64 *)(v68 + 24);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 (Il2CppObject **)(v68 + 24),
                 *(_DWORD *)(v68 + 16),
                 (const MethodInfo_3396884 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__) )
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Master_object = NetworkManager__getTime(0);
            v70 = *v69;
            if ( !*v69 )
              goto LABEL_152;
            if ( Master_object >= *(_QWORD *)(v70 + 104) && Master_object <= *(_QWORD *)(v70 + 112) )
            {
              v86 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
              System_Action___ctor(
                v86,
                (Il2CppObject *)v68,
                Method_MissionNaviTransitionBoardItem___c__DisplayClass42_4__SetupSceneTransitionBoardItem_b__8__,
                0);
              Master_object = (int64_t)MissionNaviTransitionBoardItem__GetNaviSceneTransitionAction(
                                         sceneDetail,
                                         v86,
                                         item,
                                         v87);
              v88 = *(_QWORD *)(v68 + 24);
              if ( !v88 )
                goto LABEL_152;
              NaviSceneTransitionAction = (System_Action_o *)Master_object;
              Master_object = *(_QWORD *)(v88 + 24);
              if ( !Master_object )
                goto LABEL_152;
              v89 = (Il2CppObject *)System_String__Replace_63565092(
                                      (System_String_o *)Master_object,
                                      (System_String_o *)StringLiteral_43/*"\n"*/,
                                      (System_String_o *)StringLiteral_113/*" "*/,
                                      0);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v90 = LocalizationManager__Get((System_String_o *)StringLiteral_8707/*"MISSION_NAVI_SUMMON"*/, 0);
              v26 = System_String__Format(v90, v89, 0);
              goto LABEL_120;
            }
            NaviSceneTransitionAction = 0;
            v24 = 1;
            goto LABEL_37;
          }
        }
      }
      v24 = 0;
      goto LABEL_37;
    }
    if ( System_String__op_Equality(v17, (System_String_o *)StringLiteral_6872/*"Friend"*/, 0) )
    {
      result = 0;
      v58 = 0;
      v25 = (System_String_o *)StringLiteral_19666/*"friend"*/;
      if ( *(int *)(v16 + 24) >= 2 )
      {
        System_Int32__TryParse(*(System_String_o **)(v16 + 40), &result, 0);
        v58 = result;
      }
      v59 = (SceneJumpInfo_o *)sub_1C32E6C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41379600(v59, v58, 0);
      if ( !v18 )
        goto LABEL_152;
      *(_QWORD *)(v18 + 16) = v59;
      sub_1C32BC4((CGThumbnailListItem_o *)(v18 + 16), (int32_t)v59, v60, v61);
      _9__42_2 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__42_2,
        (Il2CppObject *)v18,
        Method_MissionNaviTransitionBoardItem___c__DisplayClass42_0__SetupSceneTransitionBoardItem_b__3__,
        0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_8695/*"MISSION_NAVI_FRIEND_AND_FOLLOW"*/, 0);
      goto LABEL_98;
    }
    if ( !System_String__op_Equality(v17, (System_String_o *)StringLiteral_9214/*"MyRoom"*/, 0) )
      goto LABEL_35;
    v25 = (System_String_o *)StringLiteral_22143/*"my_room"*/;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v62 = LocalizationManager__Get((System_String_o *)StringLiteral_8697/*"MISSION_NAVI_MYROOM"*/, 0);
    v63 = MissionNaviTransitionBoardItem___c_TypeInfo;
    v26 = v62;
    if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
      v63 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    _9__42_2 = v63->static_fields->__9__42_4;
    if ( _9__42_2 )
      goto LABEL_98;
    if ( !v63->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v63);
      v63 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v64 = (Il2CppObject *)v63->static_fields->__9;
    _9__42_2 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__42_2,
      v64,
      Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_4__,
      0);
    v65 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    v65->__9__42_4 = _9__42_2;
    p__9__42_2 = (CGThumbnailListItem_o *)&v65->__9__42_4;
    goto LABEL_97;
  }
  if ( *(int *)(v16 + 24) < 2 )
    goto LABEL_35;
  v19 = sub_1C32E6C(MissionNaviTransitionBoardItem___c__DisplayClass42_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0);
  if ( *(_DWORD *)(v16 + 24) <= 1u )
LABEL_153:
    sub_1C32E84(Master_object);
  if ( !v19 )
    goto LABEL_152;
  v20 = (int32_t *)(v19 + 16);
  if ( System_Int32__TryParse(*(System_String_o **)(v16 + 40), (int32_t *)(v19 + 16), 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v21 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventDetailMaster___);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
      goto LABEL_152;
    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                      &entity,
                      *v20,
                      (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    if ( (Master_object & 1) != 0 )
    {
      if ( !v21 )
        goto LABEL_152;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)v21,
             &v96,
             *v20,
             (const MethodInfo_3396884 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ShopMaster___);
        if ( !Master_object )
          goto LABEL_152;
        if ( ShopMaster__IsEventShopOpen((ShopMaster_o *)Master_object, *v20, 0) )
        {
          Master_object = (int64_t)v96;
          if ( !v96 )
            goto LABEL_152;
          if ( EventDetailEntity__IsReward((EventDetailEntity_o *)v96, 0) )
            goto LABEL_31;
          Master_object = (int64_t)v96;
          if ( !v96 )
            goto LABEL_152;
          if ( EventDetailEntity__IsEventShop((EventDetailEntity_o *)v96, 0) )
          {
LABEL_31:
            v22 = sub_1C32E6C(MissionNaviTransitionBoardItem___c__DisplayClass42_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v22, 0);
            v95 = 0;
            if ( *(int *)(v16 + 24) >= 3 )
            {
              System_Int32__TryParse(*(System_String_o **)(v16 + 48), &v95, 0);
              v23 = v95 + 1;
            }
            else
            {
              v23 = 1;
            }
            v78 = *v20;
            v79 = (SceneJumpInfo_o *)sub_1C32E6C(SceneJumpInfo_TypeInfo);
            SceneJumpInfo___ctor_41379700(v79, (System_String_o *)StringLiteral_1/*""*/, v78, v23, 0);
            if ( !v22 )
              goto LABEL_152;
            *(_QWORD *)(v22 + 16) = v79;
            sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 16), (int32_t)v79, v80, v81);
            v82 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
            v83 = &Method_MissionNaviTransitionBoardItem___c__DisplayClass42_2__SetupSceneTransitionBoardItem_b__6__;
            v84 = v82;
            v85 = (Il2CppObject *)v22;
          }
          else
          {
            Master_object = (int64_t)v96;
            if ( !v96 )
              goto LABEL_152;
            v84 = 0;
            if ( !EventDetailEntity__IsExchangeShop((EventDetailEntity_o *)v96, 0) )
              goto LABEL_141;
            v82 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
            v83 = &Method_MissionNaviTransitionBoardItem___c__DisplayClass42_1__SetupSceneTransitionBoardItem_b__5__;
            v84 = v82;
            v85 = (Il2CppObject *)v19;
          }
          System_Action___ctor(v82, v85, *v83, 0);
LABEL_141:
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v26 = LocalizationManager__Get((System_String_o *)StringLiteral_8693/*"MISSION_NAVI_EVENT_REWARD"*/, 0);
          v66 = sceneDetail;
          v67 = v84;
          v25 = (System_String_o *)StringLiteral_23443/*"shop_event"*/;
          goto LABEL_119;
        }
      }
    }
    NaviSceneTransitionAction = 0;
    v24 = 1;
    goto LABEL_36;
  }
LABEL_35:
  v24 = 0;
LABEL_36:
  v25 = closedMessage;
LABEL_37:
  v26 = closedMessage;
LABEL_121:
  if ( System_String__op_Inequality(naviName, (System_String_o *)StringLiteral_1/*""*/, 0) )
    v74 = naviName;
  else
    v74 = v26;
  v75 = System_String__op_Inequality(iconName, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( (v24 & 1) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v74 = LocalizationManager__Get((System_String_o *)StringLiteral_8699/*"MISSION_NAVI_NOT_OPEN_BOARD"*/, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClosedMessageMaster___);
    if ( closedMessageId )
    {
      if ( Master_object )
      {
        Master_object = DataMasterBase_object__object__int___TryGetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          &v94,
                          closedMessageId,
                          (const MethodInfo_3396884 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
        if ( (Master_object & 1) == 0 )
          goto LABEL_134;
        if ( v94 )
        {
          closedMessage = (System_String_o *)v94[1].monitor;
          goto LABEL_134;
        }
      }
LABEL_152:
      sub_1C32E7C(Master_object);
    }
  }
LABEL_134:
  if ( !v75 )
    iconName = v25;
  v76 = (MissionNaviTransitionBoardItem_o *)sub_1C32E6C(MissionNaviTransitionBoardItem_TypeInfo);
  MissionNaviTransitionBoardItem___ctor(
    v76,
    0,
    iconName,
    v74,
    0,
    0,
    0,
    v24 & 1,
    closedMessage,
    NaviSceneTransitionAction,
    v91);
  return v76;
}


bool MissionNaviTransitionBoardItem__TrySetupQuestListTransitionBoardItem(
        MissionNaviTransitionEntity_o *missionNaviTransitionEntity,
        MissionListViewItem_o *item,
        System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **challengeBoardList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x22
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  void *transitionParam; // x0
  int v10; // w8
  void *v11; // x21
  bool v12; // w20
  int v13; // w19
  MissionNaviQuestEntity_o *v14; // x23
  int32_t questId; // w22
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v17; // x26
  const MethodInfo *v18; // x3
  bool v19; // w20
  System_Action_o *NaviQuestTransitionAction; // x0
  bool v21; // w25
  System_ValueTuple_string__string__o closedMessage; // kr00_16
  int32_t size; // w24
  System_String_o *v24; // x29
  bool HasFlag; // w20
  MissionNaviTransitionBoardItem_o *v26; // x23
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  __int64 v32; // x8
  const MethodInfo *v35; // [xsp+10h] [xbp-90h]
  System_Action_o *v37; // [xsp+28h] [xbp-78h]
  System_String_o *challengeIconName; // [xsp+30h] [xbp-70h] BYREF
  int32_t result; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_4C3B495 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_MissionNaviQuestMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__get_Count__);
    sub_1C32C20(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
    sub_1C32C20(&MissionNaviTransitionBoardItem_TypeInfo);
    sub_1C32C20(&MissionNaviTransitionConfirmDialog_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C3B495 = 1;
  }
  result = 0;
  challengeIconName = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *challengeBoardList = (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o *)v6;
  sub_1C32BC4((CGThumbnailListItem_o *)challengeBoardList, (int32_t)v6, v7, v8);
  if ( !missionNaviTransitionEntity )
    goto LABEL_33;
  if ( System_String__IsNullOrEmpty(missionNaviTransitionEntity->fields.transitionParam, 0) )
    return 0;
  transitionParam = missionNaviTransitionEntity->fields.transitionParam;
  if ( !transitionParam )
    goto LABEL_33;
  transitionParam = System_String__Split((System_String_o *)transitionParam, 0x2Fu, 0, 0);
  if ( !transitionParam )
    goto LABEL_33;
  if ( !*((_DWORD *)transitionParam + 6) )
    goto LABEL_34;
  if ( !System_Int32__TryParse(*((System_String_o **)transitionParam + 4), &result, 0) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  transitionParam = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_MissionNaviQuestMaster___);
  if ( !transitionParam
    || (transitionParam = MissionNaviQuestMaster__GetOpenQuestByNaviQuestMasterId(
                            (MissionNaviQuestMaster_o *)transitionParam,
                            result,
                            0)) == 0 )
  {
LABEL_33:
    sub_1C32E7C(transitionParam);
  }
  v10 = *((_DWORD *)transitionParam + 6);
  v11 = transitionParam;
  v12 = v10 > 0;
  if ( v10 >= 1 )
  {
    v13 = 0;
    while ( v13 < (unsigned int)v10 )
    {
      v14 = (MissionNaviQuestEntity_o *)*((_QWORD *)v11 + v13 + 4);
      if ( !v14 )
        goto LABEL_33;
      questId = v14->fields.questId;
      transitionParam = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !transitionParam )
        goto LABEL_33;
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)transitionParam, questId, 0);
      if ( !QuestInfo )
        return !v12;
      v17 = QuestInfo;
      v19 = !MissionNaviQuestEntity__IsNaviBoardOpen(v14, QuestInfo, 0);
      NaviQuestTransitionAction = 0;
      if ( !v19 )
        NaviQuestTransitionAction = MissionNaviTransitionBoardItem__GetNaviQuestTransitionAction(v14, v17, item, v18);
      v37 = NaviQuestTransitionAction;
      if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
      v21 = v19;
      closedMessage = MissionNaviTransitionConfirmDialog__GetQuestNaviNameAndClosedMessage(v14, v17, v19, v18);
      transitionParam = (void *)MissionNaviQuestEntity__TryGetChallengeIconName(v14, &challengeIconName, 0);
      if ( !*challengeBoardList )
        goto LABEL_33;
      size = (*challengeBoardList)->fields._size;
      v24 = challengeIconName;
      HasFlag = MissionNaviQuestEntity__HasFlag(v14, 2, 0);
      v26 = (MissionNaviTransitionBoardItem_o *)sub_1C32E6C(MissionNaviTransitionBoardItem_TypeInfo);
      MissionNaviTransitionBoardItem___ctor(
        v26,
        size,
        v24,
        closedMessage.fields.Item1,
        1,
        questId,
        HasFlag,
        v21,
        closedMessage.fields.Item2,
        v37,
        v35);
      transitionParam = *challengeBoardList;
      if ( !*challengeBoardList )
        goto LABEL_33;
      v29 = *((_QWORD *)transitionParam + 2);
      v30 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__;
      ++*((_DWORD *)transitionParam + 7);
      if ( !v29 )
        goto LABEL_33;
      v31 = *((int *)transitionParam + 6);
      if ( (unsigned int)v31 >= *(_DWORD *)(v29 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)transitionParam,
          (Il2CppObject *)v26,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = v29 + 8 * v31;
        *((_DWORD *)transitionParam + 6) = v31 + 1;
        *(_QWORD *)(v32 + 32) = v26;
        sub_1C32BC4((CGThumbnailListItem_o *)(v32 + 32), (int32_t)v26, v27, v28);
      }
      v10 = *((_DWORD *)v11 + 6);
      v12 = ++v13 < v10;
      if ( v13 >= v10 )
        return !v12;
    }
LABEL_34:
    sub_1C32E84(transitionParam);
  }
  return !v12;
}


bool MissionNaviTransitionBoardItem__TrySetupSpotTransitionBoardItem(
        MissionNaviTransitionEntity_o *missionNaviTransitionEntity,
        MissionListViewItem_o *item,
        System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **challengeBoardList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  QuestTree_o *Instance; // x0
  MapControl_SpotInfo_o *SpotInfo; // x0
  MapControl_SpotInfo_o *v12; // x23
  SpotEntity_o *Mine; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x3
  int32_t dispType; // w25
  SpotEntity_o *v17; // x24
  System_Action_o *NaviWarOrSpotTransitionAction; // x22
  System_ValueTuple_string__string__o closedMessage; // kr00_16
  bool v20; // w0
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  const MethodInfo *v22; // x1
  System_String_o *IconNameByWarInfo; // x24
  MissionNaviTransitionBoardItem_o *v24; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct MapControl_RootInfo_o *mapControlRootInfo; // x8
  _QWORD *v28; // x9
  __int64 allQuestInfoList_low; // x10
  __int64 v30; // x8
  const MethodInfo *v32; // [xsp+10h] [xbp-70h]
  System_String_o *challengeIconName; // [xsp+20h] [xbp-60h] BYREF
  int32_t result; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_4C3B497 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
    sub_1C32C20(&MissionNaviTransitionBoardItem_TypeInfo);
    sub_1C32C20(&MissionNaviTransitionConfirmDialog_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C3B497 = 1;
  }
  result = 0;
  challengeIconName = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *challengeBoardList = (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o *)v7;
  sub_1C32BC4((CGThumbnailListItem_o *)challengeBoardList, (int32_t)v7, v8, v9);
  if ( !missionNaviTransitionEntity )
    goto LABEL_22;
  System_Int32__TryParse(missionNaviTransitionEntity->fields.transitionParam, &result, 0);
  Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  SpotInfo = QuestTree__GetSpotInfo(Instance, result, 0);
  if ( !SpotInfo )
    return (char)SpotInfo;
  v12 = SpotInfo;
  Mine = MapControl_SpotInfo__GetMine(SpotInfo, 0);
  dispType = v12->fields.dispType;
  v17 = Mine;
  NaviWarOrSpotTransitionAction = 0;
  if ( dispType == 1 )
    NaviWarOrSpotTransitionAction = MissionNaviTransitionBoardItem__GetNaviWarOrSpotTransitionAction(
                                      missionNaviTransitionEntity,
                                      item,
                                      v14);
  if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
  closedMessage = MissionNaviTransitionConfirmDialog__GetSpotNaviNameAndClosedMessage(
                    missionNaviTransitionEntity,
                    v12,
                    dispType != 1,
                    v15);
  v20 = MissionNaviTransitionEntity__TryGetChallengeIconName(missionNaviTransitionEntity, &challengeIconName, 0);
  if ( !v17 || v20 )
  {
    IconNameByWarInfo = challengeIconName;
  }
  else
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(Instance, v17->fields.warId, 0);
    IconNameByWarInfo = MissionNaviTransitionBoardItemDraw__GetIconNameByWarInfo(WarInfoByWarID, v22);
    challengeIconName = IconNameByWarInfo;
  }
  v24 = (MissionNaviTransitionBoardItem_o *)sub_1C32E6C(MissionNaviTransitionBoardItem_TypeInfo);
  MissionNaviTransitionBoardItem___ctor(
    v24,
    0,
    IconNameByWarInfo,
    closedMessage.fields.Item1,
    0,
    0,
    1,
    dispType != 1,
    closedMessage.fields.Item2,
    NaviWarOrSpotTransitionAction,
    v32);
  Instance = (QuestTree_o *)*challengeBoardList;
  if ( !*challengeBoardList
    || (mapControlRootInfo = Instance->fields.mapControlRootInfo,
        v28 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__,
        ++HIDWORD(Instance->fields.allQuestInfoList),
        !mapControlRootInfo) )
  {
LABEL_22:
    sub_1C32E7C(Instance);
  }
  allQuestInfoList_low = SLODWORD(Instance->fields.allQuestInfoList);
  if ( (unsigned int)allQuestInfoList_low >= LODWORD(mapControlRootInfo[1].klass) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v24,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = (__int64)mapControlRootInfo + 8 * allQuestInfoList_low;
    LODWORD(Instance->fields.allQuestInfoList) = allQuestInfoList_low + 1;
    *(_QWORD *)(v30 + 32) = v24;
    sub_1C32BC4((CGThumbnailListItem_o *)(v30 + 32), (int32_t)v24, v25, v26);
  }
  LOBYTE(SpotInfo) = 1;
  return (char)SpotInfo;
}


bool MissionNaviTransitionBoardItem__TrySetupWarTransitionBoardItem(
        MissionNaviTransitionEntity_o *missionNaviTransitionEntity,
        MissionListViewItem_o *item,
        System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **challengeBoardList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_String_o **Instance; // x0
  char v11; // w22
  System_String_o **v12; // x23
  bool v13; // w0
  MapControl_WarInfo_o *LatestProgressWarInfo; // x0
  MapControl_WarInfo_o *v15; // x22
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  System_Action_o *NaviWarOrSpotTransitionAction; // x23
  bool v19; // w21
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  bool IsActiveWar; // w0
  System_ValueTuple_string__string__o closedMessage; // kr00_16
  const MethodInfo *v23; // x1
  System_String_o *IconNameByWarInfo; // x22
  MissionNaviTransitionBoardItem_o *v25; // x20
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_String_o *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  __int64 v31; // x8
  const MethodInfo *v33; // [xsp+10h] [xbp-60h]
  int32_t result[2]; // [xsp+18h] [xbp-58h] BYREF
  System_String_o *challengeIconName; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4C3B496 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
    sub_1C32C20(&MissionNaviTransitionBoardItem_TypeInfo);
    sub_1C32C20(&MissionNaviTransitionConfirmDialog_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C32C20(&StringLiteral_7137/*"Grand"*/);
    sub_1C32C20(&StringLiteral_8530/*"MAIN_SCENARIO"*/);
    byte_4C3B496 = 1;
  }
  challengeIconName = 0;
  *(_QWORD *)result = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *challengeBoardList = (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o *)v7;
  sub_1C32BC4((CGThumbnailListItem_o *)challengeBoardList, (int32_t)v7, v8, v9);
  if ( !missionNaviTransitionEntity )
    goto LABEL_40;
  Instance = (System_String_o **)System_String__op_Equality(
                                   missionNaviTransitionEntity->fields.transitionParam,
                                   (System_String_o *)StringLiteral_8530/*"MAIN_SCENARIO"*/,
                                   0);
  if ( !missionNaviTransitionEntity->fields.transitionParam )
    goto LABEL_40;
  v11 = (char)Instance;
  Instance = (System_String_o **)System_String__Split(missionNaviTransitionEntity->fields.transitionParam, 0x2Fu, 0, 0);
  if ( !Instance )
    goto LABEL_40;
  v12 = Instance;
  if ( !*((_DWORD *)Instance + 6) )
    sub_1C32E84(Instance);
  v13 = System_String__op_Equality(Instance[4], (System_String_o *)StringLiteral_7137/*"Grand"*/, 0);
  if ( (v11 & 1) != 0 )
  {
    Instance = (System_String_o **)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    LatestProgressWarInfo = QuestTree__GetLatestProgressWarInfo((QuestTree_o *)Instance, 0);
    if ( !LatestProgressWarInfo )
      return (char)LatestProgressWarInfo;
    v15 = LatestProgressWarInfo;
    if ( MapControl_WarInfo__GetStatus(LatestProgressWarInfo, 0) != 3 && MapControl_WarInfo__GetStatus(v15, 0) != 4 )
      goto LABEL_12;
    goto LABEL_27;
  }
  if ( v13 )
  {
    if ( *((int *)v12 + 6) >= 2 )
    {
      System_Int32__TryParse(v12[5], &result[1], 0);
      Instance = (System_String_o **)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        goto LABEL_40;
      WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, result[1], 0);
    }
    else
    {
      Instance = (System_String_o **)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        goto LABEL_40;
      WarInfoByWarID = QuestTree__GetLatestGrandWarInfo((QuestTree_o *)Instance, 0);
    }
    v15 = WarInfoByWarID;
    Instance = (System_String_o **)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( v15 && Instance )
    {
      IsActiveWar = QuestTree__IsActiveWar((QuestTree_o *)Instance, v15->fields.warId, 0);
      goto LABEL_26;
    }
LABEL_40:
    sub_1C32E7C(Instance);
  }
  System_Int32__TryParse(missionNaviTransitionEntity->fields.transitionParam, result, 0);
  Instance = (System_String_o **)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  v15 = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, result[0], 0);
  Instance = (System_String_o **)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  IsActiveWar = QuestTree__IsActiveWar((QuestTree_o *)Instance, result[0], 0);
  if ( !v15 )
  {
    LOBYTE(LatestProgressWarInfo) = 0;
    return (char)LatestProgressWarInfo;
  }
LABEL_26:
  if ( IsActiveWar )
  {
LABEL_12:
    NaviWarOrSpotTransitionAction = MissionNaviTransitionBoardItem__GetNaviWarOrSpotTransitionAction(
                                      missionNaviTransitionEntity,
                                      item,
                                      v17);
    v19 = 0;
    goto LABEL_28;
  }
LABEL_27:
  NaviWarOrSpotTransitionAction = 0;
  v19 = 1;
LABEL_28:
  if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
  closedMessage = MissionNaviTransitionConfirmDialog__GetWarNaviNameAndClosedMessage(
                    missionNaviTransitionEntity,
                    v15,
                    v19,
                    v16);
  if ( MissionNaviTransitionEntity__TryGetChallengeIconName(missionNaviTransitionEntity, &challengeIconName, 0) )
  {
    IconNameByWarInfo = challengeIconName;
  }
  else
  {
    IconNameByWarInfo = MissionNaviTransitionBoardItemDraw__GetIconNameByWarInfo(v15, v23);
    challengeIconName = IconNameByWarInfo;
  }
  v25 = (MissionNaviTransitionBoardItem_o *)sub_1C32E6C(MissionNaviTransitionBoardItem_TypeInfo);
  MissionNaviTransitionBoardItem___ctor(
    v25,
    0,
    IconNameByWarInfo,
    closedMessage.fields.Item1,
    0,
    0,
    1,
    v19,
    closedMessage.fields.Item2,
    NaviWarOrSpotTransitionAction,
    v33);
  Instance = (System_String_o **)*challengeBoardList;
  if ( !*challengeBoardList )
    goto LABEL_40;
  v28 = Instance[2];
  v29 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__;
  ++*((_DWORD *)Instance + 7);
  if ( !v28 )
    goto LABEL_40;
  v30 = *((int *)Instance + 6);
  if ( (unsigned int)v30 >= LODWORD(v28[1].klass) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v25,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = (__int64)v28 + 8 * v30;
    *((_DWORD *)Instance + 6) = v30 + 1;
    *(_QWORD *)(v31 + 32) = v25;
    sub_1C32BC4((CGThumbnailListItem_o *)(v31 + 32), (int32_t)v25, v26, v27);
  }
  LOBYTE(LatestProgressWarInfo) = 1;
  return (char)LatestProgressWarInfo;
}


int32_t MissionNaviTransitionBoardItem__get_BoardType(MissionNaviTransitionBoardItem_o *this, const MethodInfo *method)
{
  return this->fields._BoardType_k__BackingField;
}


System_String_o *MissionNaviTransitionBoardItem__get_ClosedMessage(
        MissionNaviTransitionBoardItem_o *this,
        const MethodInfo *method)
{
  return this->fields._ClosedMessage_k__BackingField;
}


System_String_o *MissionNaviTransitionBoardItem__get_IconName(
        MissionNaviTransitionBoardItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IconName_k__BackingField;
}


bool MissionNaviTransitionBoardItem__get_IsLocked(MissionNaviTransitionBoardItem_o *this, const MethodInfo *method)
{
  return this->fields._IsLocked_k__BackingField;
}


bool MissionNaviTransitionBoardItem__get_IsNotDisplayQuestInfo(
        MissionNaviTransitionBoardItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsNotDisplayQuestInfo_k__BackingField;
}


System_String_o *MissionNaviTransitionBoardItem__get_Name(
        MissionNaviTransitionBoardItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}


System_Action_o *MissionNaviTransitionBoardItem__get_NaviAction(
        MissionNaviTransitionBoardItem_o *this,
        const MethodInfo *method)
{
  return this->fields._NaviAction_k__BackingField;
}


System_String_o *MissionNaviTransitionBoardItem__get_QuestEndTime(
        MissionNaviTransitionBoardItem_o *this,
        const MethodInfo *method)
{
  return this->fields._QuestEndTime_k__BackingField;
}


int32_t MissionNaviTransitionBoardItem__get_QuestId(MissionNaviTransitionBoardItem_o *this, const MethodInfo *method)
{
  return this->fields._QuestId_k__BackingField;
}


void MissionNaviTransitionBoardItem__set_BoardType(
        MissionNaviTransitionBoardItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._BoardType_k__BackingField = value;
}


void MissionNaviTransitionBoardItem__set_ClosedMessage(
        MissionNaviTransitionBoardItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ClosedMessage_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._ClosedMessage_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void MissionNaviTransitionBoardItem__set_IconName(
        MissionNaviTransitionBoardItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._IconName_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._IconName_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void MissionNaviTransitionBoardItem__set_IsLocked(
        MissionNaviTransitionBoardItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsLocked_k__BackingField = value;
}


void MissionNaviTransitionBoardItem__set_IsNotDisplayQuestInfo(
        MissionNaviTransitionBoardItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsNotDisplayQuestInfo_k__BackingField = value;
}


void MissionNaviTransitionBoardItem__set_Name(
        MissionNaviTransitionBoardItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Name_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._Name_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void MissionNaviTransitionBoardItem__set_NaviAction(
        MissionNaviTransitionBoardItem_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._NaviAction_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._NaviAction_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void MissionNaviTransitionBoardItem__set_QuestEndTime(
        MissionNaviTransitionBoardItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._QuestEndTime_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._QuestEndTime_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void MissionNaviTransitionBoardItem__set_QuestId(
        MissionNaviTransitionBoardItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._QuestId_k__BackingField = value;
}


void MissionNaviTransitionBoardItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3B49C & 1) == 0 )
  {
    sub_1C32C20(&MissionNaviTransitionBoardItem___c_TypeInfo);
    byte_4C3B49C = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(MissionNaviTransitionBoardItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MissionNaviTransitionBoardItem___c_TypeInfo->static_fields->__9 = (struct MissionNaviTransitionBoardItem___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)MissionNaviTransitionBoardItem___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void MissionNaviTransitionBoardItem___c___ctor(MissionNaviTransitionBoardItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionNaviTransitionBoardItem___c___GetNaviQuestTransitionAction_b__43_1(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  MissionNaviTransitionBoardItem___c_c *v3; // x8
  CommonUI_o *v4; // x19
  System_Action_o *_9__43_3; // x20
  Il2CppObject *v6; // x21
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3B4A0 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__43_3__);
    sub_1C32C20(&MissionNaviTransitionBoardItem___c_TypeInfo);
    byte_4C3B4A0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v3 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v4 = (CommonUI_o *)Instance;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
    v3 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  _9__43_3 = v3->static_fields->__9__43_3;
  if ( !_9__43_3 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__43_3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__43_3,
      v6,
      Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__43_3__,
      0);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__43_3 = _9__43_3;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__43_3, (int32_t)_9__43_3, v8, v9);
  }
  if ( !v4 )
LABEL_12:
    sub_1C32E7C(Instance);
  CommonUI__CloseMissionNaviTransitionConfirmDialog_31296172(v4, _9__43_3, 0);
}


void MissionNaviTransitionBoardItem___c___GetNaviQuestTransitionAction_b__43_3(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3B4A1 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3B4A1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C32E7C(Instance);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


void MissionNaviTransitionBoardItem___c___GetNaviSceneTransitionAction_b__45_1(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  MissionNaviTransitionBoardItem___c_c *v3; // x8
  CommonUI_o *v4; // x19
  System_Action_o *_9__45_3; // x20
  Il2CppObject *v6; // x21
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3B4A4 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__45_3__);
    sub_1C32C20(&MissionNaviTransitionBoardItem___c_TypeInfo);
    byte_4C3B4A4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v3 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v4 = (CommonUI_o *)Instance;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
    v3 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  _9__45_3 = v3->static_fields->__9__45_3;
  if ( !_9__45_3 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__45_3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__45_3,
      v6,
      Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__45_3__,
      0);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__45_3 = _9__45_3;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__45_3, (int32_t)_9__45_3, v8, v9);
  }
  if ( !v4 )
LABEL_12:
    sub_1C32E7C(Instance);
  CommonUI__CloseMissionNaviTransitionConfirmDialog_31296172(v4, _9__45_3, 0);
}


void MissionNaviTransitionBoardItem___c___GetNaviSceneTransitionAction_b__45_3(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3B4A5 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3B4A5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C32E7C(Instance);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


void MissionNaviTransitionBoardItem___c___GetNaviWarOrSpotTransitionAction_b__44_1(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  MissionNaviTransitionBoardItem___c_c *v3; // x8
  CommonUI_o *v4; // x19
  System_Action_o *_9__44_3; // x20
  Il2CppObject *v6; // x21
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3B4A2 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__44_3__);
    sub_1C32C20(&MissionNaviTransitionBoardItem___c_TypeInfo);
    byte_4C3B4A2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v3 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v4 = (CommonUI_o *)Instance;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
    v3 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  _9__44_3 = v3->static_fields->__9__44_3;
  if ( !_9__44_3 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__44_3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__44_3,
      v6,
      Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__44_3__,
      0);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__44_3 = _9__44_3;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__44_3, (int32_t)_9__44_3, v8, v9);
  }
  if ( !v4 )
LABEL_12:
    sub_1C32E7C(Instance);
  CommonUI__CloseMissionNaviTransitionConfirmDialog_31296172(v4, _9__44_3, 0);
}


void MissionNaviTransitionBoardItem___c___GetNaviWarOrSpotTransitionAction_b__44_3(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3B4A3 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3B4A3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C32E7C(Instance);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


void MissionNaviTransitionBoardItem___c___SetupSceneTransitionBoardItem_b__42_0(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  ;
}


void MissionNaviTransitionBoardItem___c___SetupSceneTransitionBoardItem_b__42_1(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3B49D & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3B49D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 91, 1, 0, 0);
}


void MissionNaviTransitionBoardItem___c___SetupSceneTransitionBoardItem_b__42_2(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_4C3B49E & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C3B49E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C33F3A )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C33F3A = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_SummonType_k__BackingField = 3;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 20, 1, 0, 0);
}


void MissionNaviTransitionBoardItem___c___SetupSceneTransitionBoardItem_b__42_4(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3B49F & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3B49F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 30, 1, 0, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass42_0___ctor(
        MissionNaviTransitionBoardItem___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass42_0___SetupSceneTransitionBoardItem_b__3(
        MissionNaviTransitionBoardItem___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3B4A6 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3B4A6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__transitionScene(
    (AvalonSceneManager_o *)Instance,
    23,
    1,
    (Il2CppObject *)this->fields.sceneFriendJumpInfo,
    0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass42_1___ctor(
        MissionNaviTransitionBoardItem___c__DisplayClass42_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass42_1___SetupSceneTransitionBoardItem_b__5(
        MissionNaviTransitionBoardItem___c__DisplayClass42_1_o *this,
        const MethodInfo *method)
{
  EventItemListComponent__GoToShopEventItemExchange(this->fields.eventId, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass42_2___ctor(
        MissionNaviTransitionBoardItem___c__DisplayClass42_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass42_2___SetupSceneTransitionBoardItem_b__6(
        MissionNaviTransitionBoardItem___c__DisplayClass42_2_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3B4A7 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3B4A7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__transitionScene(
    (AvalonSceneManager_o *)Instance,
    72,
    1,
    (Il2CppObject *)this->fields.sceneJumpInfo,
    0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass42_3___ctor(
        MissionNaviTransitionBoardItem___c__DisplayClass42_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass42_3___SetupSceneTransitionBoardItem_b__7(
        MissionNaviTransitionBoardItem___c__DisplayClass42_3_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3B4A8 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3B4A8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__transitionScene(
    (AvalonSceneManager_o *)Instance,
    32,
    1,
    (Il2CppObject *)this->fields.sceneJumpInfo,
    0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass42_4___ctor(
        MissionNaviTransitionBoardItem___c__DisplayClass42_4_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass42_4___SetupSceneTransitionBoardItem_b__8(
        MissionNaviTransitionBoardItem___c__DisplayClass42_4_o *this,
        const MethodInfo *method)
{
  int32_t gachaId; // w21
  AvalonSceneManager_o *Instance; // x0
  struct GachaEntity_o *gachaEnt; // x8
  int32_t type; // w20

  if ( (byte_4C3B4A9 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C3B4A9 = 1;
  }
  gachaId = this->fields.gachaId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C33F3C )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C33F3C = 1;
  }
  Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  HIDWORD(Instance[1].fields.sendData->monitor) = gachaId;
  gachaEnt = this->fields.gachaEnt;
  if ( !gachaEnt )
    goto LABEL_16;
  type = gachaEnt->fields.type;
  if ( !byte_4C33F3A )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    byte_4C33F3A = 1;
  }
  if ( !LODWORD(Instance[2].klass) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  LODWORD(Instance[1].fields.sendData->monitor) = type;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_16:
    sub_1C32E7C(Instance);
  AvalonSceneManager__transitionScene(Instance, 20, 1, 0, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass43_0___ctor(
        MissionNaviTransitionBoardItem___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass43_0___GetNaviQuestTransitionAction_b__0(
        MissionNaviTransitionBoardItem___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  MissionListViewItem_o *naviQuestEntity; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  System_Action_o *_9__2; // x22
  CommonUI_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *Instance; // x19
  MissionNaviTransitionBoardItem___c_c *v11; // x8
  System_String_o *v12; // x20
  System_String_o *v13; // x21
  System_Action_o *_9__43_1; // x22
  Il2CppObject *v15; // x23
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0

  if ( (byte_4C3B4AA & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C32C20(&Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__43_1__);
    sub_1C32C20(&Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__);
    sub_1C32C20(&Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__2__);
    sub_1C32C20(&MissionNaviTransitionBoardItem___c_TypeInfo);
    sub_1C32C20(&StringLiteral_4990/*"DIALOG_OUT_OF_TERM"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3B4AA = 1;
  }
  naviQuestEntity = (MissionListViewItem_o *)this->fields.naviQuestEntity;
  if ( !naviQuestEntity )
    goto LABEL_27;
  if ( !MissionNaviQuestEntity__IsNaviBoardTimeOver(
          (MissionNaviQuestEntity_o *)naviQuestEntity,
          this->fields.tempQuestInfo,
          0) )
  {
    naviQuestEntity = this->fields.item;
    if ( !naviQuestEntity )
      goto LABEL_27;
    naviQuestEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(naviQuestEntity, 0);
    if ( !naviQuestEntity )
      goto LABEL_27;
    if ( EventMissionEntity__isNowMission((EventMissionEntity_o *)naviQuestEntity, 0) )
    {
      v4 = Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__;
      if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__
            + 83)
          & 2) != 0 )
        v4 = (_QWORD *)sub_1C32C38(Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      naviQuestEntity = (MissionListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( naviQuestEntity )
      {
        AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)naviQuestEntity, 1, 0);
        naviQuestEntity = (MissionListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        _9__2 = this->fields.__9__2;
        v7 = (CommonUI_o *)naviQuestEntity;
        if ( !_9__2 )
        {
          _9__2 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(
            _9__2,
            (Il2CppObject *)this,
            Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__2__,
            0);
          this->fields.__9__2 = _9__2;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9);
        }
        if ( v7 )
        {
          CommonUI__CloseMissionNaviTransitionConfirmDialog_31296172(v7, _9__2, 0);
          return;
        }
      }
LABEL_27:
      sub_1C32E7C(naviQuestEntity);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  naviQuestEntity = (MissionListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4990/*"DIALOG_OUT_OF_TERM"*/, 0);
  v11 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v12 = (System_String_o *)naviQuestEntity;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
    v11 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  v13 = (System_String_o *)StringLiteral_1/*""*/;
  _9__43_1 = v11->static_fields->__9__43_1;
  if ( !_9__43_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v11->static_fields->__9;
    _9__43_1 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__43_1,
      v15,
      Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__43_1__,
      0);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__43_1 = _9__43_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__43_1, (int32_t)_9__43_1, v17, v18);
  }
  if ( !Instance )
    goto LABEL_27;
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v13, v12, _9__43_1, 500, 0, 0, 0, 1, 0, 0, 0, 0, 0.0, 0, 0);
  v19 = Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__;
  if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__ + 83)
      & 2) != 0 )
    v19 = (_QWORD *)sub_1C32C38(Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__);
  v20 = (System_Reflection_MethodBase_o *)sub_1C32C04(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass43_0___GetNaviQuestTransitionAction_b__2(
        MissionNaviTransitionBoardItem___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  MapControl_QuestInfo_o *tempQuestInfo; // x20
  BalanceConfig_c *v5; // x0
  int32_t OrdealCallWarId; // w19
  struct MissionNaviQuestEntity_o *naviQuestEntity; // x8
  int32_t questId; // w19
  int32_t SpotID; // w20
  struct MapControl_QuestInfo_o *v10; // x8
  int32_t warId; // w0
  struct MapControl_QuestInfo_o *v12; // x8
  int32_t v13; // w19
  struct MapControl_QuestInfo_o *v14; // x8
  int32_t v15; // w19
  TerminalPramsManager_c *v16; // x0

  if ( (byte_4C3B4AB & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&CommonUI_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C3B4AB = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  CommonUI__CloseMasterMission(Instance, 0);
  tempQuestInfo = this->fields.tempQuestInfo;
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  Instance = (CommonUI_o *)CommonUI__IsBlankEarthQuestByQuestInfo(tempQuestInfo, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_15;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  Instance = (CommonUI_o *)TerminalPramsManager__ExistBlankEarthTutorial(0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v5 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = BalanceConfig_TypeInfo;
    }
    OrdealCallWarId = v5->static_fields->OrdealCallWarId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__SetAutoResumeByWarId(OrdealCallWarId, 0);
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
        TerminalPramsManager__SetAutoResumeByQuestId(questId, 0);
        break;
      case 1:
        Instance = (CommonUI_o *)this->fields.tempQuestInfo;
        if ( !Instance )
          goto LABEL_48;
        SpotID = MapControl_QuestInfo__GetSpotID((MapControl_QuestInfo_o *)Instance, 0);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C342B1 )
        {
          sub_1C32C20(&TerminalPramsManager_TypeInfo);
          byte_4C342B1 = 1;
        }
        Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
        }
        LODWORD(Instance->fields.connectMark->fields.m_CachedPtr) = SpotID;
        v10 = this->fields.tempQuestInfo;
        if ( !v10 )
          goto LABEL_48;
        warId = v10->fields.warId;
        goto LABEL_33;
      case 2:
        v12 = this->fields.tempQuestInfo;
        if ( !v12 )
          goto LABEL_48;
        v13 = v12->fields.warId;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        warId = v13;
LABEL_33:
        TerminalPramsManager__SetAutoResumeByWarId(warId, 0);
        break;
      case 3:
        v14 = this->fields.tempQuestInfo;
        if ( !v14 )
          goto LABEL_48;
        v15 = v14->fields.warId;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        TerminalPramsManager__SetAutoResumeForFolder(v15, 0);
        break;
      default:
        break;
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C319BA )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C319BA = 1;
    }
    v16 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v16 = TerminalPramsManager_TypeInfo;
    }
    v16->static_fields->_IsDirectTransition_k__BackingField = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0) )
  {
LABEL_48:
    sub_1C32E7C(Instance);
  }
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 0, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass44_0___ctor(
        MissionNaviTransitionBoardItem___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass44_0___GetNaviWarOrSpotTransitionAction_b__0(
        MissionNaviTransitionBoardItem___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *spotInfo; // x8
  QuestTree_o *Instance; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x19
  MissionNaviTransitionBoardItem___c_c *v12; // x8
  System_String_o *v13; // x20
  System_String_o *v14; // x21
  System_Action_o *_9__44_1; // x22
  Il2CppObject *v16; // x23
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0

  if ( (byte_4C3B4AC & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C32C20(&Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__44_1__);
    sub_1C32C20(&Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__);
    sub_1C32C20(&Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__2__);
    sub_1C32C20(&MissionNaviTransitionBoardItem___c_TypeInfo);
    sub_1C32C20(&StringLiteral_4990/*"DIALOG_OUT_OF_TERM"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3B4AC = 1;
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
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    if ( !QuestTree__IsActiveWar(Instance, this->fields.targetWarId, 0) )
      goto LABEL_21;
  }
  else if ( !(_DWORD)spotInfo )
  {
    goto LABEL_21;
  }
  Instance = (QuestTree_o *)this->fields.item;
  if ( !Instance )
    goto LABEL_33;
  Instance = (QuestTree_o *)MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_33;
  if ( EventMissionEntity__isNowMission((EventMissionEntity_o *)Instance, 0) )
  {
    v5 = Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__;
    if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__
          + 83)
        & 2) != 0 )
      v5 = (_QWORD *)sub_1C32C38(Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    Instance = (QuestTree_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( Instance )
    {
      AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 1, 0);
      Instance = (QuestTree_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      _9__2 = this->fields.__9__2;
      v8 = (CommonUI_o *)Instance;
      if ( !_9__2 )
      {
        _9__2 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(
          _9__2,
          (Il2CppObject *)this,
          Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__2__,
          0);
        this->fields.__9__2 = _9__2;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10);
      }
      if ( v8 )
      {
        CommonUI__CloseMissionNaviTransitionConfirmDialog_31296172(v8, _9__2, 0);
        return;
      }
    }
LABEL_33:
    sub_1C32E7C(Instance);
  }
LABEL_21:
  v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (QuestTree_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4990/*"DIALOG_OUT_OF_TERM"*/, 0);
  v12 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v13 = (System_String_o *)Instance;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
    v12 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  v14 = (System_String_o *)StringLiteral_1/*""*/;
  _9__44_1 = v12->static_fields->__9__44_1;
  if ( !_9__44_1 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v12->static_fields->__9;
    _9__44_1 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__44_1,
      v16,
      Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__44_1__,
      0);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__44_1 = _9__44_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__44_1, (int32_t)_9__44_1, v18, v19);
  }
  if ( !v11 )
    goto LABEL_33;
  CommonUI__OpenNotificationDialog((CommonUI_o *)v11, v14, v13, _9__44_1, 500, 0, 0, 0, 1, 0, 0, 0, 0, 0.0, 0, 0);
  v20 = Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__;
  if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__
        + 83)
      & 2) != 0 )
    v20 = (_QWORD *)sub_1C32C38(Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__);
  v21 = (System_Reflection_MethodBase_o *)sub_1C32C04(v20, v20[4]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 2, 0, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass44_0___GetNaviWarOrSpotTransitionAction_b__2(
        MissionNaviTransitionBoardItem___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t targetWarId; // w20
  bool IsBlankEarthWarByWarId; // w20
  struct SpotEntity_o *spotEnt; // x8
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  WarEntity_o *Mine; // x0
  int32_t parentBlankEarthSpotId; // w1
  System_Nullable_int__o v10; // x0
  unsigned __int64 v11; // x8
  _BOOL4 isMainScenario; // w20
  BalanceConfig_c *v13; // x0
  int32_t OrdealCallWarId; // w19
  struct SpotEntity_o *v15; // x8
  int32_t warId; // w20
  int32_t targetSpotId; // w25
  TerminalPramsManager_c *v18; // x0
  TerminalPramsManager_c *v19; // x0
  bool v20; // w8
  bool isGrandQuestWar; // w9
  int32_t v22; // w19
  bool v23; // w20
  TerminalPramsManager_c *v24; // x0
  unsigned __int64 v25; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C3B4AD & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C32C20(&Method_System_Nullable_int___ctor__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C3B4AD = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0);
  if ( this->fields.isWar )
  {
    targetWarId = this->fields.targetWarId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IsBlankEarthWarByWarId = TerminalPramsManager__IsBlankEarthWarByWarId(targetWarId, 0);
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
  Instance = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Instance )
    goto LABEL_63;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          this->fields.targetSpotId,
          (const MethodInfo_3396884 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__) )
  {
    if ( this->fields.spotEnt )
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      spotEnt = this->fields.spotEnt;
      if ( spotEnt && Instance )
      {
        WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, spotEnt->fields.warId, 0);
        if ( WarInfoByWarID && (Mine = MapControl_WarInfo__GetMine(WarInfoByWarID, 0)) != 0 )
        {
          parentBlankEarthSpotId = Mine->fields.parentBlankEarthSpotId;
          v10 = (System_Nullable_int__o)&v25;
          v25 = 0;
          System_Nullable_int____ctor(
            v10,
            parentBlankEarthSpotId,
            (const MethodInfo_38BDF3C *)Method_System_Nullable_int___ctor__);
          v11 = v25;
        }
        else
        {
          v11 = 0;
        }
        if ( !IsBlankEarthWarByWarId && HIDWORD(v11) == 0 )
          goto LABEL_33;
        goto LABEL_24;
      }
LABEL_63:
      sub_1C32E7C(Instance);
    }
    goto LABEL_20;
  }
LABEL_24:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__ExistBlankEarthTutorial(0) )
  {
    isMainScenario = this->fields.isMainScenario;
    v13 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v13 = BalanceConfig_TypeInfo;
    }
    OrdealCallWarId = v13->static_fields->OrdealCallWarId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( isMainScenario )
      TerminalPramsManager__SetAutoResumeForFolder(OrdealCallWarId, 0);
    else
      TerminalPramsManager__SetAutoResumeByWarId(OrdealCallWarId, 0);
    goto LABEL_60;
  }
LABEL_33:
  if ( this->fields.isSpot )
  {
    v15 = this->fields.spotEnt;
    if ( v15 )
    {
      warId = v15->fields.warId;
      targetSpotId = this->fields.targetSpotId;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C342B1 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C342B1 = 1;
      }
      v18 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v18 = TerminalPramsManager_TypeInfo;
      }
      v18->static_fields->_SpotId_k__BackingField = targetSpotId;
      TerminalPramsManager__SetAutoResumeByWarId(warId, 0);
      if ( !byte_4C319BA )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C319BA = 1;
      }
      v19 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v19 = TerminalPramsManager_TypeInfo;
      }
      v19->static_fields->_IsDirectTransition_k__BackingField = 1;
    }
  }
  if ( this->fields.isWar )
  {
    v20 = this->fields.isMainScenario;
    isGrandQuestWar = this->fields.isGrandQuestWar;
    v22 = this->fields.targetWarId;
    v23 = isGrandQuestWar || v20;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( v23 )
      TerminalPramsManager__SetAutoResumeForFolder(v22, 0);
    else
      TerminalPramsManager__SetAutoResumeByWarId(v22, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C319BA )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C319BA = 1;
    }
    v24 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v24 = TerminalPramsManager_TypeInfo;
    }
    v24->static_fields->_IsDirectTransition_k__BackingField = 1;
  }
LABEL_60:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 0, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass45_0___ctor(
        MissionNaviTransitionBoardItem___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass45_0___GetNaviSceneTransitionAction_b__0(
        MissionNaviTransitionBoardItem___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  __int64 sceneDetail; // x0
  __int64 v4; // x20
  System_String_o *v5; // x21
  bool v6; // w0
  System_String_o *v7; // x24
  int v8; // w8
  System_String_o *v9; // x23
  _BOOL4 v10; // w22
  int v11; // w8
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  System_Action_o *_9__2; // x21
  CommonUI_o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppObject *Instance; // x19
  MissionNaviTransitionBoardItem___c_c *v19; // x8
  System_String_o *v20; // x20
  System_String_o *v21; // x21
  System_Action_o *_9__45_1; // x22
  Il2CppObject *v23; // x23
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  bool v29; // w0
  Il2CppObject *entity; // [xsp+40h] [xbp-60h] BYREF
  int32_t result; // [xsp+4Ch] [xbp-54h] BYREF
  Il2CppObject *v32; // [xsp+50h] [xbp-50h] BYREF
  int32_t key; // [xsp+5Ch] [xbp-44h] BYREF

  if ( (byte_4C3B4AE & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C32C20(&Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__45_1__);
    sub_1C32C20(&Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__);
    sub_1C32C20(&Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__2__);
    sub_1C32C20(&MissionNaviTransitionBoardItem___c_TypeInfo);
    sub_1C32C20(&StringLiteral_4990/*"DIALOG_OUT_OF_TERM"*/);
    sub_1C32C20(&StringLiteral_6246/*"EventReward"*/);
    sub_1C32C20(&StringLiteral_13164/*"Summon"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3B4AE = 1;
  }
  key = 0;
  v32 = 0;
  result = 0;
  entity = 0;
  sceneDetail = (__int64)this->fields.sceneDetail;
  if ( !sceneDetail )
    goto LABEL_67;
  sceneDetail = (__int64)System_String__Split((System_String_o *)sceneDetail, 0x2Fu, 0, 0);
  if ( !sceneDetail )
    goto LABEL_67;
  v4 = sceneDetail;
  if ( !*(_DWORD *)(sceneDetail + 24) )
    sub_1C32E84(sceneDetail);
  v5 = *(System_String_o **)(sceneDetail + 32);
  v6 = System_String__op_Equality(v5, (System_String_o *)StringLiteral_6246/*"EventReward"*/, 0);
  if ( v6 )
    v7 = v5;
  else
    v7 = 0;
  if ( v6 && ((v8 = *(_DWORD *)(v4 + 24), v8 >= 2) ? (v9 = v7) : (v9 = 0), v8 >= 2) )
  {
    v29 = System_Int32__TryParse(*(System_String_o **)(v4 + 40), &key, 0);
    if ( v29 )
      v5 = v9;
    else
      v5 = 0;
    if ( v29 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      sceneDetail = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMaster___);
      if ( !sceneDetail )
        goto LABEL_67;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)sceneDetail,
             &v32,
             key,
             (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        sceneDetail = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ShopMaster___);
        if ( !sceneDetail )
          goto LABEL_67;
        v10 = !ShopMaster__IsEventShopOpen((ShopMaster_o *)sceneDetail, key, 0);
      }
      else
      {
        v10 = 0;
        v5 = v9;
      }
    }
    else
    {
      v10 = 0;
      v5 = v7;
    }
  }
  else
  {
    v10 = 0;
  }
  if ( !System_String__op_Equality(v5, (System_String_o *)StringLiteral_13164/*"Summon"*/, 0) || *(int *)(v4 + 24) < 2 )
    goto LABEL_28;
  System_Int32__TryParse(*(System_String_o **)(v4 + 40), &result, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  sceneDetail = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !sceneDetail )
    goto LABEL_67;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)sceneDetail,
          &entity,
          result,
          (const MethodInfo_3396884 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__) )
    goto LABEL_28;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  sceneDetail = NetworkManager__getTime(0);
  if ( !entity )
    goto LABEL_67;
  if ( sceneDetail < (__int64)entity[6].monitor || sceneDetail > (__int64)entity[7].klass )
    v11 = 1;
  else
LABEL_28:
    v11 = 0;
  if ( !(v11 | v10) )
  {
    sceneDetail = (__int64)this->fields.item;
    if ( !sceneDetail )
      goto LABEL_67;
    sceneDetail = (__int64)MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)sceneDetail, 0);
    if ( !sceneDetail )
      goto LABEL_67;
    if ( EventMissionEntity__isNowMission((EventMissionEntity_o *)sceneDetail, 0) )
    {
      v12 = Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__;
      if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__
            + 83)
          & 2) != 0 )
        v12 = (_QWORD *)sub_1C32C38(Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__);
      v13 = (System_Reflection_MethodBase_o *)sub_1C32C04(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
      sceneDetail = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( sceneDetail )
      {
        AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)sceneDetail, 1, 0);
        sceneDetail = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        _9__2 = this->fields.__9__2;
        v15 = (CommonUI_o *)sceneDetail;
        if ( !_9__2 )
        {
          _9__2 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(
            _9__2,
            (Il2CppObject *)this,
            Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__2__,
            0);
          this->fields.__9__2 = _9__2;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v16, v17);
        }
        if ( v15 )
        {
          CommonUI__CloseMissionNaviTransitionConfirmDialog_31296172(v15, _9__2, 0);
          return;
        }
      }
LABEL_67:
      sub_1C32E7C(sceneDetail);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sceneDetail = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4990/*"DIALOG_OUT_OF_TERM"*/, 0);
  v19 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v20 = (System_String_o *)sceneDetail;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
    v19 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  v21 = (System_String_o *)StringLiteral_1/*""*/;
  _9__45_1 = v19->static_fields->__9__45_1;
  if ( !_9__45_1 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v19->static_fields->__9;
    _9__45_1 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__45_1,
      v23,
      Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__45_1__,
      0);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__45_1 = _9__45_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__45_1, (int32_t)_9__45_1, v25, v26);
  }
  if ( !Instance )
    goto LABEL_67;
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v21, v20, _9__45_1, 500, 0, 0, 0, 1, 0, 0, 0, 0, 0.0, 0, 0);
  v27 = Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__;
  if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__ + 83)
      & 2) != 0 )
    v27 = (_QWORD *)sub_1C32C38(Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__);
  v28 = (System_Reflection_MethodBase_o *)sub_1C32C04(v27, v27[4]);
  OverwriteAssetSoundName__PlaySystemSe(v28, 2, 0, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass45_0___GetNaviSceneTransitionAction_b__2(
        MissionNaviTransitionBoardItem___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3B4AF & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_4C3B4AF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0),
        ActionExtensions__Call(this->fields.transitionSceneAction, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0) )
  {
    sub_1C32E7C(Instance);
  }
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 0, 0);
}