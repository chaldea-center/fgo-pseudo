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

  ListViewItem___ctor_43566844((ListViewItem_o *)this, index, 0);
  this->fields._IconName_k__BackingField = iconName;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._IconName_k__BackingField, (int32_t)iconName, v18, v19);
  this->fields._Name_k__BackingField = name;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._Name_k__BackingField, (int32_t)name, v20, v21);
  this->fields._BoardType_k__BackingField = naviBoardType;
  this->fields._QuestId_k__BackingField = questId;
  this->fields._IsNotDisplayQuestInfo_k__BackingField = isNotDisplayQuestInfo;
  this->fields._IsLocked_k__BackingField = isLocked;
  this->fields._ClosedMessage_k__BackingField = closedMessage;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._ClosedMessage_k__BackingField, (int32_t)closedMessage, v22, v23);
  this->fields._NaviAction_k__BackingField = naviAction;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._NaviAction_k__BackingField, (int32_t)naviAction, v24, v25);
}


System_Action_o *MissionNaviTransitionBoardItem__GetNaviQuestTransitionAction(
        MissionNaviQuestEntity_o *naviQuestEntity,
        MapControl_QuestInfo_o *tempQuestInfo,
        MissionListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x8
  System_Action_o *v17; // x19

  if ( (byte_4C2AE25 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__);
    sub_1C2D490(&MissionNaviTransitionBoardItem___c__DisplayClass43_0_TypeInfo);
    byte_4C2AE25 = 1;
  }
  v7 = sub_1C2D6DC(MissionNaviTransitionBoardItem___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = naviQuestEntity,
        sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)naviQuestEntity, v10, v11),
        *(_QWORD *)(v7 + 24) = tempQuestInfo,
        sub_1C2D434((CGThumbnailListItem_o *)(v7 + 24), (int32_t)tempQuestInfo, v12, v13),
        *(_QWORD *)(v7 + 32) = item,
        sub_1C2D434((CGThumbnailListItem_o *)(v7 + 32), (int32_t)item, v14, v15),
        (v16 = *(_QWORD *)(v7 + 16)) == 0) )
  {
    sub_1C2D6EC(v8, v9);
  }
  *(_DWORD *)(v7 + 40) = *(_DWORD *)(v16 + 20);
  v17 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v7,
    (intptr_t)Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__,
    0);
  return v17;
}


System_Action_o *MissionNaviTransitionBoardItem__GetNaviSceneTransitionAction(
        System_String_o *sceneDetail,
        System_Action_o *transitionSceneAction,
        MissionListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Action_o *v16; // x19

  if ( (byte_4C2AE27 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__);
    sub_1C2D490(&MissionNaviTransitionBoardItem___c__DisplayClass45_0_TypeInfo);
    byte_4C2AE27 = 1;
  }
  v7 = sub_1C2D6DC(MissionNaviTransitionBoardItem___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  *(_QWORD *)(v7 + 16) = sceneDetail;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)sceneDetail, v10, v11);
  *(_QWORD *)(v7 + 24) = item;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 24), (int32_t)item, v12, v13);
  *(_QWORD *)(v7 + 32) = transitionSceneAction;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 32), (int32_t)transitionSceneAction, v14, v15);
  v16 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v7,
    (intptr_t)Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__,
    0);
  return v16;
}


System_Action_o *MissionNaviTransitionBoardItem__GetNaviWarOrSpotTransitionAction(
        MissionNaviTransitionEntity_o *naviTransitionEntity,
        MissionListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x20
  void *transitionParam; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x2
  void *v11; // x22
  System_String_o *v12; // x0
  MapControl_SpotInfo_o *SpotInfo; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  MapControl_SpotInfo_o *v18; // x0
  SpotEntity_o *Mine; // x1
  int32_t missionTransitionType; // w8
  System_Action_o *v21; // x19

  if ( (byte_4C2AE26 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C2D490(&Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__);
    sub_1C2D490(&MissionNaviTransitionBoardItem___c__DisplayClass44_0_TypeInfo);
    sub_1C2D490(&StringLiteral_7132/*"Grand"*/);
    sub_1C2D490(&StringLiteral_8524/*"MAIN_SCENARIO"*/);
    byte_4C2AE26 = 1;
  }
  v5 = sub_1C2D6DC(MissionNaviTransitionBoardItem___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_25;
  *(_QWORD *)(v5 + 40) = item;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 40), (int32_t)item, v8, v9);
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
  v11 = transitionParam;
  if ( !*((_DWORD *)transitionParam + 6) )
    sub_1C2D6F4(transitionParam, v7, v10);
  *(_BYTE *)(v5 + 65) = System_String__op_Equality(
                          *((System_String_o **)transitionParam + 4),
                          (System_String_o *)StringLiteral_7132/*"Grand"*/,
                          0);
  if ( !System_String__op_Equality(
          naviTransitionEntity->fields.transitionParam,
          (System_String_o *)StringLiteral_8524/*"MAIN_SCENARIO"*/,
          0) )
  {
    if ( *(_BYTE *)(v5 + 65) )
    {
      if ( *((int *)v11 + 6) < 2 )
      {
        transitionParam = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
        sub_1C2D6EC(transitionParam, v7);
      }
      v12 = (System_String_o *)*((_QWORD *)v11 + 5);
    }
    else
    {
      v12 = naviTransitionEntity->fields.transitionParam;
    }
    System_Int32__TryParse(v12, (int32_t *)(v5 + 36), 0);
    goto LABEL_20;
  }
  *(_BYTE *)(v5 + 64) = 1;
  transitionParam = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !transitionParam )
    goto LABEL_25;
  transitionParam = QuestTree__GetLatestProgressWarInfo((QuestTree_o *)transitionParam, 0);
  if ( transitionParam )
    goto LABEL_16;
LABEL_20:
  System_Int32__TryParse(naviTransitionEntity->fields.transitionParam, (int32_t *)(v5 + 48), 0);
  transitionParam = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !transitionParam )
    goto LABEL_25;
  SpotInfo = QuestTree__GetSpotInfo((QuestTree_o *)transitionParam, *(_DWORD *)(v5 + 48), 0);
  *(_QWORD *)(v5 + 24) = SpotInfo;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)SpotInfo, v14, v15);
  v18 = *(MapControl_SpotInfo_o **)(v5 + 24);
  if ( v18 )
    Mine = MapControl_SpotInfo__GetMine(v18, 0);
  else
    Mine = 0;
  *(_QWORD *)(v5 + 56) = Mine;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 56), (int32_t)Mine, v16, v17);
  missionTransitionType = naviTransitionEntity->fields.missionTransitionType;
  *(_BYTE *)(v5 + 16) = missionTransitionType == 3;
  *(_BYTE *)(v5 + 32) = missionTransitionType == 2;
  v21 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v5,
    (intptr_t)Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__,
    0);
  return v21;
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
    sub_1C2D6EC(0, item);
  transitionParam = missionNaviTransitionEnt->fields.transitionParam;
  MissionNaviTransitionEntity__TryGetChallengeNaviName(missionNaviTransitionEnt, &challengeNaviName, 0);
  MissionNaviTransitionEntity__TryGetChallengeIconName(missionNaviTransitionEnt, &v8, 0);
  return MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem_47818176(
           transitionParam,
           missionNaviTransitionEnt->fields.closedMessageId,
           challengeNaviName,
           v8,
           item,
           v6);
}


// local variable allocation has failed, the output may be wrong!
MissionNaviTransitionBoardItem_o *MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem_47818176(
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
  __int64 v16; // x2
  int64_t v17; // x25
  System_String_o *v18; // x27
  __int64 v19; // x26
  __int64 v20; // x26
  int32_t *v21; // x27
  Il2CppObject *v22; // x24
  __int64 v23; // x24
  int32_t v24; // w25
  char v25; // w23
  System_String_o *v26; // x29
  System_String_o *v27; // x25
  BalanceConfig_c *v28; // x0
  int32_t ClassBoardReleaseQuestId; // w25
  bool IsQuestClear_40102980; // w26
  System_String_o *v31; // x0
  const MethodInfo *v32; // x3
  MissionNaviTransitionBoardItem___c_c *v33; // x8
  System_String_o *v34; // x25
  System_Action_o *_9__42_1; // x24
  Il2CppObject *v36; // x27
  struct MissionNaviTransitionBoardItem___c_StaticFields *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_String_o *v40; // x0
  __int64 v41; // x24
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

  if ( (byte_4C2AE24 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ClosedMessageMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&MissionNaviTransitionBoardItem_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&SceneJumpInfo_TypeInfo);
    sub_1C2D490(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_0__);
    sub_1C2D490(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_1__);
    sub_1C2D490(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_2__);
    sub_1C2D490(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_4__);
    sub_1C2D490(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_0__SetupSceneTransitionBoardItem_b__3__);
    sub_1C2D490(&MissionNaviTransitionBoardItem___c__DisplayClass42_0_TypeInfo);
    sub_1C2D490(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_1__SetupSceneTransitionBoardItem_b__5__);
    sub_1C2D490(&MissionNaviTransitionBoardItem___c__DisplayClass42_1_TypeInfo);
    sub_1C2D490(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_2__SetupSceneTransitionBoardItem_b__6__);
    sub_1C2D490(&MissionNaviTransitionBoardItem___c__DisplayClass42_2_TypeInfo);
    sub_1C2D490(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_3__SetupSceneTransitionBoardItem_b__7__);
    sub_1C2D490(&MissionNaviTransitionBoardItem___c__DisplayClass42_3_TypeInfo);
    sub_1C2D490(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_4__SetupSceneTransitionBoardItem_b__8__);
    sub_1C2D490(&MissionNaviTransitionBoardItem___c__DisplayClass42_4_TypeInfo);
    sub_1C2D490(&MissionNaviTransitionBoardItem___c_TypeInfo);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    sub_1C2D490(&StringLiteral_23267/*"servant_eq_combine"*/);
    sub_1C2D490(&StringLiteral_113/*" "*/);
    sub_1C2D490(&StringLiteral_23425/*"shop_event"*/);
    sub_1C2D490(&StringLiteral_12737/*"ServantSkillCombine"*/);
    sub_1C2D490(&StringLiteral_8693/*"MISSION_NAVI_NOT_OPEN_BOARD"*/);
    sub_1C2D490(&StringLiteral_6544/*"FRIEND_POINT"*/);
    sub_1C2D490(&StringLiteral_4557/*"Combine"*/);
    sub_1C2D490(&StringLiteral_4432/*"ClassBoard"*/);
    sub_1C2D490(&StringLiteral_17986/*"class_board"*/);
    sub_1C2D490(&StringLiteral_22126/*"my_room"*/);
    sub_1C2D490(&StringLiteral_8700/*"MISSION_NAVI_SERVANT_SKILL_COMBINE"*/);
    sub_1C2D490(&StringLiteral_23270/*"servant_skill_combine"*/);
    sub_1C2D490(&StringLiteral_8698/*"MISSION_NAVI_SERVANT_EQ_COMBINE"*/);
    sub_1C2D490(&StringLiteral_6238/*"EventReward"*/);
    sub_1C2D490(&StringLiteral_8702/*"MISSION_NAVI_SUMMON_FRIEND_POINT"*/);
    sub_1C2D490(&StringLiteral_8687/*"MISSION_NAVI_EVENT_REWARD"*/);
    sub_1C2D490(&StringLiteral_8691/*"MISSION_NAVI_MYROOM"*/);
    sub_1C2D490(&StringLiteral_23266/*"servant_combine"*/);
    sub_1C2D490(&StringLiteral_8699/*"MISSION_NAVI_SERVANT_LIMIT_COUNT_UP"*/);
    sub_1C2D490(&StringLiteral_23805/*"summon"*/);
    sub_1C2D490(&StringLiteral_8694/*"MISSION_NAVI_NOT_OPEN_CLASS_BOARD_CLOSED_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_8697/*"MISSION_NAVI_SERVANT_COMBINE"*/);
    sub_1C2D490(&StringLiteral_23269/*"servant_limit_count_up"*/);
    sub_1C2D490(&StringLiteral_19654/*"friend"*/);
    sub_1C2D490(&StringLiteral_6867/*"Friend"*/);
    sub_1C2D490(&StringLiteral_13161/*"Summon"*/);
    sub_1C2D490(&StringLiteral_12721/*"ServantEQCombine"*/);
    sub_1C2D490(&StringLiteral_12718/*"ServantCombine"*/);
    sub_1C2D490(&StringLiteral_9208/*"MyRoom"*/);
    sub_1C2D490(&StringLiteral_8679/*"MISSION_NAVI_CLASS_BOARD"*/);
    sub_1C2D490(&StringLiteral_12731/*"ServantLimitCountUp"*/);
    sub_1C2D490(&StringLiteral_8701/*"MISSION_NAVI_SUMMON"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_23811/*"summon_friend"*/);
    sub_1C2D490(&StringLiteral_8689/*"MISSION_NAVI_FRIEND_AND_FOLLOW"*/);
    byte_4C2AE24 = 1;
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
    NaviSceneTransitionAction = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      NaviSceneTransitionAction,
      v12,
      Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_0__,
      0);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__42_0 = NaviSceneTransitionAction;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__42_0, (int32_t)NaviSceneTransitionAction, v14, v15);
  }
  if ( !sceneDetail )
    goto LABEL_152;
  Master_object = (int64_t)System_String__Split(sceneDetail, 0x2Fu, 0, 0);
  if ( !Master_object )
    goto LABEL_152;
  v17 = Master_object;
  if ( !*(_DWORD *)(Master_object + 24) )
    goto LABEL_153;
  v18 = *(System_String_o **)(Master_object + 32);
  v19 = sub_1C2D6DC(MissionNaviTransitionBoardItem___c__DisplayClass42_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0);
  if ( !System_String__op_Equality(v18, (System_String_o *)StringLiteral_6238/*"EventReward"*/, 0) )
  {
    if ( System_String__op_Equality(v18, (System_String_o *)StringLiteral_4557/*"Combine"*/, 0) )
    {
      if ( *(int *)(v17 + 24) < 2 )
        goto LABEL_35;
      v41 = sub_1C2D6DC(MissionNaviTransitionBoardItem___c__DisplayClass42_3_TypeInfo);
      System_Object___ctor((Il2CppObject *)v41, 0);
      if ( *(_DWORD *)(v17 + 24) <= 1u )
        goto LABEL_153;
      if ( !v41 )
        goto LABEL_152;
      v43 = *(System_String_o **)(v17 + 40);
      *(_QWORD *)(v41 + 16) = 0;
      sub_1C2D434((CGThumbnailListItem_o *)(v41 + 16), 0, v16, v42);
      v44 = (SceneJumpInfo_o *)sub_1C2D6DC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41257300(v44, v43, 0);
      *(_QWORD *)(v41 + 16) = v44;
      sub_1C2D434((CGThumbnailListItem_o *)(v41 + 16), (int32_t)v44, v45, v46);
      if ( System_String__op_Equality(v43, (System_String_o *)StringLiteral_12718/*"ServantCombine"*/, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v47 = &StringLiteral_23266/*"servant_combine"*/;
        v48 = &StringLiteral_8697/*"MISSION_NAVI_SERVANT_COMBINE"*/;
      }
      else if ( System_String__op_Equality(v43, (System_String_o *)StringLiteral_12737/*"ServantSkillCombine"*/, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v47 = &StringLiteral_23270/*"servant_skill_combine"*/;
        v48 = &StringLiteral_8700/*"MISSION_NAVI_SERVANT_SKILL_COMBINE"*/;
      }
      else if ( System_String__op_Equality(v43, (System_String_o *)StringLiteral_12721/*"ServantEQCombine"*/, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v47 = &StringLiteral_23267/*"servant_eq_combine"*/;
        v48 = &StringLiteral_8698/*"MISSION_NAVI_SERVANT_EQ_COMBINE"*/;
      }
      else
      {
        v71 = System_String__op_Equality(v43, (System_String_o *)StringLiteral_12731/*"ServantLimitCountUp"*/, 0);
        v26 = closedMessage;
        v27 = closedMessage;
        if ( !v71 )
        {
LABEL_118:
          v73 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(
            v73,
            (Il2CppObject *)v41,
            Method_MissionNaviTransitionBoardItem___c__DisplayClass42_3__SetupSceneTransitionBoardItem_b__7__,
            0);
          v66 = sceneDetail;
          v67 = v73;
          goto LABEL_119;
        }
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v47 = &StringLiteral_23269/*"servant_limit_count_up"*/;
        v48 = &StringLiteral_8699/*"MISSION_NAVI_SERVANT_LIMIT_COUNT_UP"*/;
      }
      v72 = LocalizationManager__Get((System_String_o *)*v48, 0);
      v26 = (System_String_o *)*v47;
      v27 = v72;
      goto LABEL_118;
    }
    if ( System_String__op_Equality(v18, (System_String_o *)StringLiteral_4432/*"ClassBoard"*/, 0) )
    {
      v28 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v28 = BalanceConfig_TypeInfo;
      }
      ClassBoardReleaseQuestId = v28->static_fields->ClassBoardReleaseQuestId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_40102980 = CondType__IsQuestClear_40102980(ClassBoardReleaseQuestId, -1, 0, 0);
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( IsQuestClear_40102980 )
        {
LABEL_45:
          v31 = LocalizationManager__Get((System_String_o *)StringLiteral_8679/*"MISSION_NAVI_CLASS_BOARD"*/, 0);
          v33 = MissionNaviTransitionBoardItem___c_TypeInfo;
          v34 = v31;
          if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
            v33 = MissionNaviTransitionBoardItem___c_TypeInfo;
          }
          _9__42_1 = v33->static_fields->__9__42_1;
          if ( !_9__42_1 )
          {
            if ( !v33->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v33);
              v33 = MissionNaviTransitionBoardItem___c_TypeInfo;
            }
            v36 = (Il2CppObject *)v33->static_fields->__9;
            _9__42_1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
            System_Action___ctor(
              _9__42_1,
              v36,
              Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_1__,
              0);
            v37 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
            v37->__9__42_1 = _9__42_1;
            sub_1C2D434((CGThumbnailListItem_o *)&v37->__9__42_1, (int32_t)_9__42_1, v38, v39);
          }
          NaviSceneTransitionAction = MissionNaviTransitionBoardItem__GetNaviSceneTransitionAction(
                                        sceneDetail,
                                        _9__42_1,
                                        item,
                                        v32);
          v40 = closedMessage;
          closedMessage = v34;
          goto LABEL_83;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( IsQuestClear_40102980 )
          goto LABEL_45;
      }
      v40 = LocalizationManager__Get((System_String_o *)StringLiteral_8694/*"MISSION_NAVI_NOT_OPEN_CLASS_BOARD_CLOSED_MESSAGE"*/, 0);
LABEL_83:
      v27 = closedMessage;
      v25 = !IsQuestClear_40102980;
      closedMessage = v40;
      v26 = (System_String_o *)StringLiteral_17986/*"class_board"*/;
      goto LABEL_121;
    }
    if ( System_String__op_Equality(v18, (System_String_o *)StringLiteral_13161/*"Summon"*/, 0) )
    {
      v26 = (System_String_o *)StringLiteral_23805/*"summon"*/;
      if ( *(int *)(v17 + 24) >= 2 )
      {
        if ( System_String__op_Equality(*(System_String_o **)(v17 + 40), (System_String_o *)StringLiteral_6544/*"FRIEND_POINT"*/, 0) )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v49 = LocalizationManager__Get((System_String_o *)StringLiteral_8702/*"MISSION_NAVI_SUMMON_FRIEND_POINT"*/, 0);
          v51 = MissionNaviTransitionBoardItem___c_TypeInfo;
          v27 = v49;
          v26 = (System_String_o *)StringLiteral_23811/*"summon_friend"*/;
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
          _9__42_2 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(
            _9__42_2,
            v53,
            Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_2__,
            0);
          v56 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
          v56->__9__42_2 = _9__42_2;
          p__9__42_2 = (CGThumbnailListItem_o *)&v56->__9__42_2;
LABEL_97:
          sub_1C2D434(p__9__42_2, (int32_t)_9__42_2, v54, v55);
LABEL_98:
          v66 = sceneDetail;
          v67 = _9__42_2;
LABEL_119:
          NaviSceneTransitionAction = MissionNaviTransitionBoardItem__GetNaviSceneTransitionAction(v66, v67, item, v50);
LABEL_120:
          v25 = 0;
          goto LABEL_121;
        }
        if ( *(int *)(v17 + 24) >= 2 )
        {
          v68 = sub_1C2D6DC(MissionNaviTransitionBoardItem___c__DisplayClass42_4_TypeInfo);
          System_Object___ctor((Il2CppObject *)v68, 0);
          if ( *(_DWORD *)(v17 + 24) <= 1u )
            goto LABEL_153;
          if ( !v68 )
            goto LABEL_152;
          System_Int32__TryParse(*(System_String_o **)(v17 + 40), (int32_t *)(v68 + 16), 0);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_GachaMaster___);
          if ( !Master_object )
            goto LABEL_152;
          v69 = (__int64 *)(v68 + 24);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 (Il2CppObject **)(v68 + 24),
                 *(_DWORD *)(v68 + 16),
                 (const MethodInfo_3387DE4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__) )
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Master_object = NetworkManager__getTime(0);
            v70 = *v69;
            if ( !*v69 )
              goto LABEL_152;
            if ( Master_object >= *(_QWORD *)(v70 + 104) && Master_object <= *(_QWORD *)(v70 + 112) )
            {
              v86 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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
              v89 = (Il2CppObject *)System_String__Replace_63504412(
                                      (System_String_o *)Master_object,
                                      (System_String_o *)StringLiteral_43/*"\n"*/,
                                      (System_String_o *)StringLiteral_113/*" "*/,
                                      0);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v90 = LocalizationManager__Get((System_String_o *)StringLiteral_8701/*"MISSION_NAVI_SUMMON"*/, 0);
              v27 = System_String__Format(v90, v89, 0);
              goto LABEL_120;
            }
            NaviSceneTransitionAction = 0;
            v25 = 1;
            goto LABEL_37;
          }
        }
      }
      v25 = 0;
      goto LABEL_37;
    }
    if ( System_String__op_Equality(v18, (System_String_o *)StringLiteral_6867/*"Friend"*/, 0) )
    {
      result = 0;
      v58 = 0;
      v26 = (System_String_o *)StringLiteral_19654/*"friend"*/;
      if ( *(int *)(v17 + 24) >= 2 )
      {
        System_Int32__TryParse(*(System_String_o **)(v17 + 40), &result, 0);
        v58 = result;
      }
      v59 = (SceneJumpInfo_o *)sub_1C2D6DC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41257348(v59, v58, 0);
      if ( !v19 )
        goto LABEL_152;
      *(_QWORD *)(v19 + 16) = v59;
      sub_1C2D434((CGThumbnailListItem_o *)(v19 + 16), (int32_t)v59, v60, v61);
      _9__42_2 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__42_2,
        (Il2CppObject *)v19,
        Method_MissionNaviTransitionBoardItem___c__DisplayClass42_0__SetupSceneTransitionBoardItem_b__3__,
        0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_8689/*"MISSION_NAVI_FRIEND_AND_FOLLOW"*/, 0);
      goto LABEL_98;
    }
    if ( !System_String__op_Equality(v18, (System_String_o *)StringLiteral_9208/*"MyRoom"*/, 0) )
      goto LABEL_35;
    v26 = (System_String_o *)StringLiteral_22126/*"my_room"*/;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v62 = LocalizationManager__Get((System_String_o *)StringLiteral_8691/*"MISSION_NAVI_MYROOM"*/, 0);
    v63 = MissionNaviTransitionBoardItem___c_TypeInfo;
    v27 = v62;
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
    _9__42_2 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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
  if ( *(int *)(v17 + 24) < 2 )
    goto LABEL_35;
  v20 = sub_1C2D6DC(MissionNaviTransitionBoardItem___c__DisplayClass42_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0);
  if ( *(_DWORD *)(v17 + 24) <= 1u )
LABEL_153:
    sub_1C2D6F4(Master_object, *(_QWORD *)&closedMessageId, v16);
  if ( !v20 )
    goto LABEL_152;
  v21 = (int32_t *)(v20 + 16);
  if ( System_Int32__TryParse(*(System_String_o **)(v17 + 40), (int32_t *)(v20 + 16), 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v22 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventDetailMaster___);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
      goto LABEL_152;
    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                      &entity,
                      *v21,
                      (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    if ( (Master_object & 1) != 0 )
    {
      if ( !v22 )
        goto LABEL_152;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)v22,
             &v96,
             *v21,
             (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ShopMaster___);
        if ( !Master_object )
          goto LABEL_152;
        if ( ShopMaster__IsEventShopOpen((ShopMaster_o *)Master_object, *v21, 0) )
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
            v23 = sub_1C2D6DC(MissionNaviTransitionBoardItem___c__DisplayClass42_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v23, 0);
            v95 = 0;
            if ( *(int *)(v17 + 24) >= 3 )
            {
              System_Int32__TryParse(*(System_String_o **)(v17 + 48), &v95, 0);
              v24 = v95 + 1;
            }
            else
            {
              v24 = 1;
            }
            v78 = *v21;
            v79 = (SceneJumpInfo_o *)sub_1C2D6DC(SceneJumpInfo_TypeInfo);
            SceneJumpInfo___ctor_41257448(v79, (System_String_o *)StringLiteral_1/*""*/, v78, v24, 0);
            if ( !v23 )
              goto LABEL_152;
            *(_QWORD *)(v23 + 16) = v79;
            sub_1C2D434((CGThumbnailListItem_o *)(v23 + 16), (int32_t)v79, v80, v81);
            v82 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
            v83 = &Method_MissionNaviTransitionBoardItem___c__DisplayClass42_2__SetupSceneTransitionBoardItem_b__6__;
            v84 = v82;
            v85 = (Il2CppObject *)v23;
          }
          else
          {
            Master_object = (int64_t)v96;
            if ( !v96 )
              goto LABEL_152;
            v84 = 0;
            if ( !EventDetailEntity__IsExchangeShop((EventDetailEntity_o *)v96, 0) )
              goto LABEL_141;
            v82 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
            v83 = &Method_MissionNaviTransitionBoardItem___c__DisplayClass42_1__SetupSceneTransitionBoardItem_b__5__;
            v84 = v82;
            v85 = (Il2CppObject *)v20;
          }
          System_Action___ctor(v82, v85, *v83, 0);
LABEL_141:
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v27 = LocalizationManager__Get((System_String_o *)StringLiteral_8687/*"MISSION_NAVI_EVENT_REWARD"*/, 0);
          v66 = sceneDetail;
          v67 = v84;
          v26 = (System_String_o *)StringLiteral_23425/*"shop_event"*/;
          goto LABEL_119;
        }
      }
    }
    NaviSceneTransitionAction = 0;
    v25 = 1;
    goto LABEL_36;
  }
LABEL_35:
  v25 = 0;
LABEL_36:
  v26 = closedMessage;
LABEL_37:
  v27 = closedMessage;
LABEL_121:
  if ( System_String__op_Inequality(naviName, (System_String_o *)StringLiteral_1/*""*/, 0) )
    v74 = naviName;
  else
    v74 = v27;
  v75 = System_String__op_Inequality(iconName, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( (v25 & 1) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v74 = LocalizationManager__Get((System_String_o *)StringLiteral_8693/*"MISSION_NAVI_NOT_OPEN_BOARD"*/, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClosedMessageMaster___);
    if ( closedMessageId )
    {
      if ( Master_object )
      {
        Master_object = DataMasterBase_object__object__int___TryGetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          &v94,
                          closedMessageId,
                          (const MethodInfo_3387DE4 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
        if ( (Master_object & 1) == 0 )
          goto LABEL_134;
        if ( v94 )
        {
          closedMessage = (System_String_o *)v94[1].monitor;
          goto LABEL_134;
        }
      }
LABEL_152:
      sub_1C2D6EC(Master_object, *(_QWORD *)&closedMessageId);
    }
  }
LABEL_134:
  if ( !v75 )
    iconName = v26;
  v76 = (MissionNaviTransitionBoardItem_o *)sub_1C2D6DC(MissionNaviTransitionBoardItem_TypeInfo);
  MissionNaviTransitionBoardItem___ctor(
    v76,
    0,
    iconName,
    v74,
    0,
    0,
    0,
    v25 & 1,
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
  __int64 v10; // x1
  __int64 v11; // x2
  int v12; // w8
  void *v13; // x21
  bool v14; // w20
  int v15; // w19
  MissionNaviQuestEntity_o *v16; // x23
  int32_t questId; // w22
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v19; // x26
  const MethodInfo *v20; // x3
  bool v21; // w20
  System_Action_o *NaviQuestTransitionAction; // x0
  bool v23; // w25
  System_ValueTuple_string__string__o closedMessage; // kr00_16
  int32_t size; // w24
  System_String_o *v26; // x29
  bool HasFlag; // w20
  MissionNaviTransitionBoardItem_o *v28; // x23
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  const MethodInfo *v37; // [xsp+10h] [xbp-90h]
  System_Action_o *v39; // [xsp+28h] [xbp-78h]
  System_String_o *challengeIconName; // [xsp+30h] [xbp-70h] BYREF
  int32_t result; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_4C2AE21 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_MissionNaviQuestMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
    sub_1C2D490(&MissionNaviTransitionBoardItem_TypeInfo);
    sub_1C2D490(&MissionNaviTransitionConfirmDialog_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C2AE21 = 1;
  }
  result = 0;
  challengeIconName = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *challengeBoardList = (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o *)v6;
  sub_1C2D434((CGThumbnailListItem_o *)challengeBoardList, (int32_t)v6, v7, v8);
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
  transitionParam = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_MissionNaviQuestMaster___);
  if ( !transitionParam
    || (transitionParam = MissionNaviQuestMaster__GetOpenQuestByNaviQuestMasterId(
                            (MissionNaviQuestMaster_o *)transitionParam,
                            result,
                            0)) == 0 )
  {
LABEL_33:
    sub_1C2D6EC(transitionParam, v10);
  }
  v12 = *((_DWORD *)transitionParam + 6);
  v13 = transitionParam;
  v14 = v12 > 0;
  if ( v12 >= 1 )
  {
    v15 = 0;
    while ( v15 < (unsigned int)v12 )
    {
      v16 = (MissionNaviQuestEntity_o *)*((_QWORD *)v13 + v15 + 4);
      if ( !v16 )
        goto LABEL_33;
      questId = v16->fields.questId;
      transitionParam = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !transitionParam )
        goto LABEL_33;
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)transitionParam, questId, 0);
      if ( !QuestInfo )
        return !v14;
      v19 = QuestInfo;
      v21 = !MissionNaviQuestEntity__IsNaviBoardOpen(v16, QuestInfo, 0);
      NaviQuestTransitionAction = 0;
      if ( !v21 )
        NaviQuestTransitionAction = MissionNaviTransitionBoardItem__GetNaviQuestTransitionAction(v16, v19, item, v20);
      v39 = NaviQuestTransitionAction;
      if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
      v23 = v21;
      closedMessage = MissionNaviTransitionConfirmDialog__GetQuestNaviNameAndClosedMessage(v16, v19, v21, v20);
      transitionParam = (void *)MissionNaviQuestEntity__TryGetChallengeIconName(v16, &challengeIconName, 0);
      if ( !*challengeBoardList )
        goto LABEL_33;
      size = (*challengeBoardList)->fields._size;
      v26 = challengeIconName;
      HasFlag = MissionNaviQuestEntity__HasFlag(v16, 2, 0);
      v28 = (MissionNaviTransitionBoardItem_o *)sub_1C2D6DC(MissionNaviTransitionBoardItem_TypeInfo);
      MissionNaviTransitionBoardItem___ctor(
        v28,
        size,
        v26,
        closedMessage.fields.Item1,
        1,
        questId,
        HasFlag,
        v23,
        closedMessage.fields.Item2,
        v39,
        v37);
      transitionParam = *challengeBoardList;
      if ( !*challengeBoardList )
        goto LABEL_33;
      v31 = *((_QWORD *)transitionParam + 2);
      v32 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__;
      ++*((_DWORD *)transitionParam + 7);
      if ( !v31 )
        goto LABEL_33;
      v33 = *((int *)transitionParam + 6);
      if ( (unsigned int)v33 >= *(_DWORD *)(v31 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)transitionParam,
          (Il2CppObject *)v28,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = v31 + 8 * v33;
        *((_DWORD *)transitionParam + 6) = v33 + 1;
        *(_QWORD *)(v34 + 32) = v28;
        sub_1C2D434((CGThumbnailListItem_o *)(v34 + 32), (int32_t)v28, v29, v30);
      }
      v12 = *((_DWORD *)v13 + 6);
      v14 = ++v15 < v12;
      if ( v15 >= v12 )
        return !v14;
    }
LABEL_34:
    sub_1C2D6F4(transitionParam, v10, v11);
  }
  return !v14;
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
  __int64 v11; // x1
  MapControl_SpotInfo_o *SpotInfo; // x0
  MapControl_SpotInfo_o *v13; // x23
  SpotEntity_o *Mine; // x0
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x3
  int32_t dispType; // w25
  SpotEntity_o *v18; // x24
  System_Action_o *NaviWarOrSpotTransitionAction; // x22
  System_ValueTuple_string__string__o closedMessage; // kr00_16
  bool v21; // w0
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  const MethodInfo *v23; // x1
  System_String_o *IconNameByWarInfo; // x24
  MissionNaviTransitionBoardItem_o *v25; // x20
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct MapControl_RootInfo_o *mapControlRootInfo; // x8
  _QWORD *v29; // x9
  __int64 allQuestInfoList_low; // x10
  __int64 v31; // x8
  const MethodInfo *v33; // [xsp+10h] [xbp-70h]
  System_String_o *challengeIconName; // [xsp+20h] [xbp-60h] BYREF
  int32_t result; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_4C2AE23 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
    sub_1C2D490(&MissionNaviTransitionBoardItem_TypeInfo);
    sub_1C2D490(&MissionNaviTransitionConfirmDialog_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C2AE23 = 1;
  }
  result = 0;
  challengeIconName = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *challengeBoardList = (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o *)v7;
  sub_1C2D434((CGThumbnailListItem_o *)challengeBoardList, (int32_t)v7, v8, v9);
  if ( !missionNaviTransitionEntity )
    goto LABEL_22;
  System_Int32__TryParse(missionNaviTransitionEntity->fields.transitionParam, &result, 0);
  Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  SpotInfo = QuestTree__GetSpotInfo(Instance, result, 0);
  if ( !SpotInfo )
    return (char)SpotInfo;
  v13 = SpotInfo;
  Mine = MapControl_SpotInfo__GetMine(SpotInfo, 0);
  dispType = v13->fields.dispType;
  v18 = Mine;
  NaviWarOrSpotTransitionAction = 0;
  if ( dispType == 1 )
    NaviWarOrSpotTransitionAction = MissionNaviTransitionBoardItem__GetNaviWarOrSpotTransitionAction(
                                      missionNaviTransitionEntity,
                                      item,
                                      v15);
  if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
  closedMessage = MissionNaviTransitionConfirmDialog__GetSpotNaviNameAndClosedMessage(
                    missionNaviTransitionEntity,
                    v13,
                    dispType != 1,
                    v16);
  v21 = MissionNaviTransitionEntity__TryGetChallengeIconName(missionNaviTransitionEntity, &challengeIconName, 0);
  if ( !v18 || v21 )
  {
    IconNameByWarInfo = challengeIconName;
  }
  else
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(Instance, v18->fields.warId, 0);
    IconNameByWarInfo = MissionNaviTransitionBoardItemDraw__GetIconNameByWarInfo(WarInfoByWarID, v23);
    challengeIconName = IconNameByWarInfo;
  }
  v25 = (MissionNaviTransitionBoardItem_o *)sub_1C2D6DC(MissionNaviTransitionBoardItem_TypeInfo);
  MissionNaviTransitionBoardItem___ctor(
    v25,
    0,
    IconNameByWarInfo,
    closedMessage.fields.Item1,
    0,
    0,
    1,
    dispType != 1,
    closedMessage.fields.Item2,
    NaviWarOrSpotTransitionAction,
    v33);
  Instance = (QuestTree_o *)*challengeBoardList;
  if ( !*challengeBoardList
    || (mapControlRootInfo = Instance->fields.mapControlRootInfo,
        v29 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__,
        ++HIDWORD(Instance->fields.allQuestInfoList),
        !mapControlRootInfo) )
  {
LABEL_22:
    sub_1C2D6EC(Instance, v11);
  }
  allQuestInfoList_low = SLODWORD(Instance->fields.allQuestInfoList);
  if ( (unsigned int)allQuestInfoList_low >= LODWORD(mapControlRootInfo[1].klass) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v25,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = (__int64)mapControlRootInfo + 8 * allQuestInfoList_low;
    LODWORD(Instance->fields.allQuestInfoList) = allQuestInfoList_low + 1;
    *(_QWORD *)(v31 + 32) = v25;
    sub_1C2D434((CGThumbnailListItem_o *)(v31 + 32), (int32_t)v25, v26, v27);
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
  __int64 v11; // x1
  char v12; // w22
  __int64 v13; // x2
  System_String_o **v14; // x23
  bool v15; // w0
  MapControl_WarInfo_o *LatestProgressWarInfo; // x0
  MapControl_WarInfo_o *v17; // x22
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  System_Action_o *NaviWarOrSpotTransitionAction; // x23
  bool v21; // w21
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  bool IsActiveWar; // w0
  System_ValueTuple_string__string__o closedMessage; // kr00_16
  const MethodInfo *v25; // x1
  System_String_o *IconNameByWarInfo; // x22
  MissionNaviTransitionBoardItem_o *v27; // x20
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_String_o *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  __int64 v33; // x8
  const MethodInfo *v35; // [xsp+10h] [xbp-60h]
  int32_t result[2]; // [xsp+18h] [xbp-58h] BYREF
  System_String_o *challengeIconName; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4C2AE22 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
    sub_1C2D490(&MissionNaviTransitionBoardItem_TypeInfo);
    sub_1C2D490(&MissionNaviTransitionConfirmDialog_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C2D490(&StringLiteral_7132/*"Grand"*/);
    sub_1C2D490(&StringLiteral_8524/*"MAIN_SCENARIO"*/);
    byte_4C2AE22 = 1;
  }
  challengeIconName = 0;
  *(_QWORD *)result = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *challengeBoardList = (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o *)v7;
  sub_1C2D434((CGThumbnailListItem_o *)challengeBoardList, (int32_t)v7, v8, v9);
  if ( !missionNaviTransitionEntity )
    goto LABEL_40;
  Instance = (System_String_o **)System_String__op_Equality(
                                   missionNaviTransitionEntity->fields.transitionParam,
                                   (System_String_o *)StringLiteral_8524/*"MAIN_SCENARIO"*/,
                                   0);
  if ( !missionNaviTransitionEntity->fields.transitionParam )
    goto LABEL_40;
  v12 = (char)Instance;
  Instance = (System_String_o **)System_String__Split(missionNaviTransitionEntity->fields.transitionParam, 0x2Fu, 0, 0);
  if ( !Instance )
    goto LABEL_40;
  v14 = Instance;
  if ( !*((_DWORD *)Instance + 6) )
    sub_1C2D6F4(Instance, v11, v13);
  v15 = System_String__op_Equality(Instance[4], (System_String_o *)StringLiteral_7132/*"Grand"*/, 0);
  if ( (v12 & 1) != 0 )
  {
    Instance = (System_String_o **)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    LatestProgressWarInfo = QuestTree__GetLatestProgressWarInfo((QuestTree_o *)Instance, 0);
    if ( !LatestProgressWarInfo )
      return (char)LatestProgressWarInfo;
    v17 = LatestProgressWarInfo;
    if ( MapControl_WarInfo__GetStatus(LatestProgressWarInfo, 0) != 3 && MapControl_WarInfo__GetStatus(v17, 0) != 4 )
      goto LABEL_12;
    goto LABEL_27;
  }
  if ( v15 )
  {
    if ( *((int *)v14 + 6) >= 2 )
    {
      System_Int32__TryParse(v14[5], &result[1], 0);
      Instance = (System_String_o **)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        goto LABEL_40;
      WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, result[1], 0);
    }
    else
    {
      Instance = (System_String_o **)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        goto LABEL_40;
      WarInfoByWarID = QuestTree__GetLatestGrandWarInfo((QuestTree_o *)Instance, 0);
    }
    v17 = WarInfoByWarID;
    Instance = (System_String_o **)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( v17 && Instance )
    {
      IsActiveWar = QuestTree__IsActiveWar((QuestTree_o *)Instance, v17->fields.warId, 0);
      goto LABEL_26;
    }
LABEL_40:
    sub_1C2D6EC(Instance, v11);
  }
  System_Int32__TryParse(missionNaviTransitionEntity->fields.transitionParam, result, 0);
  Instance = (System_String_o **)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  v17 = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, result[0], 0);
  Instance = (System_String_o **)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  IsActiveWar = QuestTree__IsActiveWar((QuestTree_o *)Instance, result[0], 0);
  if ( !v17 )
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
                                      v19);
    v21 = 0;
    goto LABEL_28;
  }
LABEL_27:
  NaviWarOrSpotTransitionAction = 0;
  v21 = 1;
LABEL_28:
  if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
  closedMessage = MissionNaviTransitionConfirmDialog__GetWarNaviNameAndClosedMessage(
                    missionNaviTransitionEntity,
                    v17,
                    v21,
                    v18);
  if ( MissionNaviTransitionEntity__TryGetChallengeIconName(missionNaviTransitionEntity, &challengeIconName, 0) )
  {
    IconNameByWarInfo = challengeIconName;
  }
  else
  {
    IconNameByWarInfo = MissionNaviTransitionBoardItemDraw__GetIconNameByWarInfo(v17, v25);
    challengeIconName = IconNameByWarInfo;
  }
  v27 = (MissionNaviTransitionBoardItem_o *)sub_1C2D6DC(MissionNaviTransitionBoardItem_TypeInfo);
  MissionNaviTransitionBoardItem___ctor(
    v27,
    0,
    IconNameByWarInfo,
    closedMessage.fields.Item1,
    0,
    0,
    1,
    v21,
    closedMessage.fields.Item2,
    NaviWarOrSpotTransitionAction,
    v35);
  Instance = (System_String_o **)*challengeBoardList;
  if ( !*challengeBoardList )
    goto LABEL_40;
  v30 = Instance[2];
  v31 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__;
  ++*((_DWORD *)Instance + 7);
  if ( !v30 )
    goto LABEL_40;
  v32 = *((int *)Instance + 6);
  if ( (unsigned int)v32 >= LODWORD(v30[1].klass) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v27,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = (__int64)v30 + 8 * v32;
    *((_DWORD *)Instance + 6) = v32 + 1;
    *(_QWORD *)(v33 + 32) = v27;
    sub_1C2D434((CGThumbnailListItem_o *)(v33 + 32), (int32_t)v27, v28, v29);
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
  sub_1C2D434(
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._IconName_k__BackingField, (int32_t)value, (int32_t)method, v3);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._Name_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void MissionNaviTransitionBoardItem__set_NaviAction(
        MissionNaviTransitionBoardItem_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._NaviAction_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._NaviAction_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void MissionNaviTransitionBoardItem__set_QuestEndTime(
        MissionNaviTransitionBoardItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._QuestEndTime_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._QuestEndTime_k__BackingField, (int32_t)value, (int32_t)method, v3);
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

  if ( (byte_4C2AE28 & 1) == 0 )
  {
    sub_1C2D490(&MissionNaviTransitionBoardItem___c_TypeInfo);
    byte_4C2AE28 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(MissionNaviTransitionBoardItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MissionNaviTransitionBoardItem___c_TypeInfo->static_fields->__9 = (struct MissionNaviTransitionBoardItem___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)MissionNaviTransitionBoardItem___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  __int64 v3; // x1
  MissionNaviTransitionBoardItem___c_c *v4; // x8
  CommonUI_o *v5; // x19
  System_Action_o *_9__43_3; // x20
  Il2CppObject *v7; // x21
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C2AE2C & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__43_3__);
    sub_1C2D490(&MissionNaviTransitionBoardItem___c_TypeInfo);
    byte_4C2AE2C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
    v4 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  _9__43_3 = v4->static_fields->__9__43_3;
  if ( !_9__43_3 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__43_3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__43_3,
      v7,
      Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__43_3__,
      0);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__43_3 = _9__43_3;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__43_3, (int32_t)_9__43_3, v9, v10);
  }
  if ( !v5 )
LABEL_12:
    sub_1C2D6EC(Instance, v3);
  CommonUI__CloseMissionNaviTransitionConfirmDialog_31271840(v5, _9__43_3, 0);
}


void MissionNaviTransitionBoardItem___c___GetNaviQuestTransitionAction_b__43_3(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C2AE2D & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C2AE2D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(Instance, v3);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


void MissionNaviTransitionBoardItem___c___GetNaviSceneTransitionAction_b__45_1(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  MissionNaviTransitionBoardItem___c_c *v4; // x8
  CommonUI_o *v5; // x19
  System_Action_o *_9__45_3; // x20
  Il2CppObject *v7; // x21
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C2AE30 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__45_3__);
    sub_1C2D490(&MissionNaviTransitionBoardItem___c_TypeInfo);
    byte_4C2AE30 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
    v4 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  _9__45_3 = v4->static_fields->__9__45_3;
  if ( !_9__45_3 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__45_3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__45_3,
      v7,
      Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__45_3__,
      0);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__45_3 = _9__45_3;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__45_3, (int32_t)_9__45_3, v9, v10);
  }
  if ( !v5 )
LABEL_12:
    sub_1C2D6EC(Instance, v3);
  CommonUI__CloseMissionNaviTransitionConfirmDialog_31271840(v5, _9__45_3, 0);
}


void MissionNaviTransitionBoardItem___c___GetNaviSceneTransitionAction_b__45_3(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C2AE31 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C2AE31 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(Instance, v3);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


void MissionNaviTransitionBoardItem___c___GetNaviWarOrSpotTransitionAction_b__44_1(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  MissionNaviTransitionBoardItem___c_c *v4; // x8
  CommonUI_o *v5; // x19
  System_Action_o *_9__44_3; // x20
  Il2CppObject *v7; // x21
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C2AE2E & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__44_3__);
    sub_1C2D490(&MissionNaviTransitionBoardItem___c_TypeInfo);
    byte_4C2AE2E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
    v4 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  _9__44_3 = v4->static_fields->__9__44_3;
  if ( !_9__44_3 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__44_3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__44_3,
      v7,
      Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__44_3__,
      0);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__44_3 = _9__44_3;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__44_3, (int32_t)_9__44_3, v9, v10);
  }
  if ( !v5 )
LABEL_12:
    sub_1C2D6EC(Instance, v3);
  CommonUI__CloseMissionNaviTransitionConfirmDialog_31271840(v5, _9__44_3, 0);
}


void MissionNaviTransitionBoardItem___c___GetNaviWarOrSpotTransitionAction_b__44_3(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C2AE2F & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C2AE2F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(Instance, v3);
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
  __int64 v3; // x1

  if ( (byte_4C2AE29 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C2AE29 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 91, 1, 0, 0);
}


void MissionNaviTransitionBoardItem___c___SetupSceneTransitionBoardItem_b__42_2(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C2AE2A & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2AE2A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C237DB )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C237DB = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_SummonType_k__BackingField = 3;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 20, 1, 0, 0);
}


void MissionNaviTransitionBoardItem___c___SetupSceneTransitionBoardItem_b__42_4(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C2AE2B & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C2AE2B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
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
  __int64 v4; // x1

  if ( (byte_4C2AE32 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C2AE32 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
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
  __int64 v4; // x1

  if ( (byte_4C2AE33 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C2AE33 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
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
  __int64 v4; // x1

  if ( (byte_4C2AE34 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C2AE34 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
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

  if ( (byte_4C2AE35 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2AE35 = 1;
  }
  gachaId = this->fields.gachaId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C237DD )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C237DD = 1;
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
  if ( !byte_4C237DB )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    byte_4C237DB = 1;
  }
  if ( !LODWORD(Instance[2].klass) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  LODWORD(Instance[1].fields.sendData->monitor) = type;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_16:
    sub_1C2D6EC(Instance, method);
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

  if ( (byte_4C2AE36 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C2D490(&Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__43_1__);
    sub_1C2D490(&Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__);
    sub_1C2D490(&Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__2__);
    sub_1C2D490(&MissionNaviTransitionBoardItem___c_TypeInfo);
    sub_1C2D490(&StringLiteral_4982/*"DIALOG_OUT_OF_TERM"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2AE36 = 1;
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
        v4 = (_QWORD *)sub_1C2D4A8(Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      naviQuestEntity = (MissionListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( naviQuestEntity )
      {
        AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)naviQuestEntity, 1, 0);
        naviQuestEntity = (MissionListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        _9__2 = this->fields.__9__2;
        v7 = (CommonUI_o *)naviQuestEntity;
        if ( !_9__2 )
        {
          _9__2 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(
            _9__2,
            (Il2CppObject *)this,
            Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__2__,
            0);
          this->fields.__9__2 = _9__2;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9);
        }
        if ( v7 )
        {
          CommonUI__CloseMissionNaviTransitionConfirmDialog_31271840(v7, _9__2, 0);
          return;
        }
      }
LABEL_27:
      sub_1C2D6EC(naviQuestEntity, method);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  naviQuestEntity = (MissionListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4982/*"DIALOG_OUT_OF_TERM"*/, 0);
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
    _9__43_1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__43_1,
      v15,
      Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__43_1__,
      0);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__43_1 = _9__43_1;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__43_1, (int32_t)_9__43_1, v17, v18);
  }
  if ( !Instance )
    goto LABEL_27;
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v13, v12, _9__43_1, 500, 0, 0, 0, 1, 0, 0, 0, 0, 0.0, 0, 0);
  v19 = Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__;
  if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__ + 83)
      & 2) != 0 )
    v19 = (_QWORD *)sub_1C2D4A8(Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__);
  v20 = (System_Reflection_MethodBase_o *)sub_1C2D474(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass43_0___GetNaviQuestTransitionAction_b__2(
        MissionNaviTransitionBoardItem___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  MapControl_QuestInfo_o *tempQuestInfo; // x20
  BalanceConfig_c *v6; // x0
  int32_t OrdealCallWarId; // w19
  struct MissionNaviQuestEntity_o *naviQuestEntity; // x8
  int32_t questId; // w19
  int32_t SpotID; // w20
  struct MapControl_QuestInfo_o *v11; // x8
  int32_t warId; // w0
  struct MapControl_QuestInfo_o *v13; // x8
  int32_t v14; // w19
  struct MapControl_QuestInfo_o *v15; // x8
  int32_t v16; // w19
  TerminalPramsManager_c *v17; // x0

  if ( (byte_4C2AE37 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CommonUI_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2AE37 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v6 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v6 = BalanceConfig_TypeInfo;
    }
    OrdealCallWarId = v6->static_fields->OrdealCallWarId;
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
        if ( !byte_4C23BE6 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C23BE6 = 1;
        }
        Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
        }
        LODWORD(Instance->fields.connectMark->fields.m_CachedPtr) = SpotID;
        v11 = this->fields.tempQuestInfo;
        if ( !v11 )
          goto LABEL_48;
        warId = v11->fields.warId;
        goto LABEL_33;
      case 2:
        v13 = this->fields.tempQuestInfo;
        if ( !v13 )
          goto LABEL_48;
        v14 = v13->fields.warId;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        warId = v14;
LABEL_33:
        TerminalPramsManager__SetAutoResumeByWarId(warId, 0);
        break;
      case 3:
        v15 = this->fields.tempQuestInfo;
        if ( !v15 )
          goto LABEL_48;
        v16 = v15->fields.warId;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        TerminalPramsManager__SetAutoResumeForFolder(v16, 0);
        break;
      default:
        break;
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C21387 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C21387 = 1;
    }
    v17 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v17 = TerminalPramsManager_TypeInfo;
    }
    v17->static_fields->_IsDirectTransition_k__BackingField = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0) )
  {
LABEL_48:
    sub_1C2D6EC(Instance, v4);
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

  if ( (byte_4C2AE38 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C2D490(&Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__44_1__);
    sub_1C2D490(&Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__);
    sub_1C2D490(&Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__2__);
    sub_1C2D490(&MissionNaviTransitionBoardItem___c_TypeInfo);
    sub_1C2D490(&StringLiteral_4982/*"DIALOG_OUT_OF_TERM"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2AE38 = 1;
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
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
      v5 = (_QWORD *)sub_1C2D4A8(Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    Instance = (QuestTree_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( Instance )
    {
      AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 1, 0);
      Instance = (QuestTree_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      _9__2 = this->fields.__9__2;
      v8 = (CommonUI_o *)Instance;
      if ( !_9__2 )
      {
        _9__2 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__2,
          (Il2CppObject *)this,
          Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__2__,
          0);
        this->fields.__9__2 = _9__2;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10);
      }
      if ( v8 )
      {
        CommonUI__CloseMissionNaviTransitionConfirmDialog_31271840(v8, _9__2, 0);
        return;
      }
    }
LABEL_33:
    sub_1C2D6EC(Instance, method);
  }
LABEL_21:
  v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (QuestTree_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4982/*"DIALOG_OUT_OF_TERM"*/, 0);
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
    _9__44_1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__44_1,
      v16,
      Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__44_1__,
      0);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__44_1 = _9__44_1;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__44_1, (int32_t)_9__44_1, v18, v19);
  }
  if ( !v11 )
    goto LABEL_33;
  CommonUI__OpenNotificationDialog((CommonUI_o *)v11, v14, v13, _9__44_1, 500, 0, 0, 0, 1, 0, 0, 0, 0, 0.0, 0, 0);
  v20 = Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__;
  if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__
        + 83)
      & 2) != 0 )
    v20 = (_QWORD *)sub_1C2D4A8(Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__);
  v21 = (System_Reflection_MethodBase_o *)sub_1C2D474(v20, v20[4]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 2, 0, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass44_0___GetNaviWarOrSpotTransitionAction_b__2(
        MissionNaviTransitionBoardItem___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int32_t targetWarId; // w20
  bool IsBlankEarthWarByWarId; // w20
  struct SpotEntity_o *spotEnt; // x8
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  WarEntity_o *Mine; // x0
  int32_t parentBlankEarthSpotId; // w1
  System_Nullable_int__o v11; // x0
  unsigned __int64 v12; // x8
  _BOOL4 isMainScenario; // w20
  BalanceConfig_c *v14; // x0
  int32_t OrdealCallWarId; // w19
  struct SpotEntity_o *v16; // x8
  int32_t warId; // w20
  int32_t targetSpotId; // w25
  TerminalPramsManager_c *v19; // x0
  TerminalPramsManager_c *v20; // x0
  bool v21; // w8
  bool isGrandQuestWar; // w9
  int32_t v23; // w19
  bool v24; // w20
  TerminalPramsManager_c *v25; // x0
  unsigned __int64 v26; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C2AE39 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C2D490(&Method_System_Nullable_int___ctor__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2AE39 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  Instance = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Instance )
    goto LABEL_63;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          this->fields.targetSpotId,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__) )
  {
    if ( this->fields.spotEnt )
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      spotEnt = this->fields.spotEnt;
      if ( spotEnt && Instance )
      {
        WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, spotEnt->fields.warId, 0);
        if ( WarInfoByWarID && (Mine = MapControl_WarInfo__GetMine(WarInfoByWarID, 0)) != 0 )
        {
          parentBlankEarthSpotId = Mine->fields.parentBlankEarthSpotId;
          v11 = (System_Nullable_int__o)&v26;
          v26 = 0;
          System_Nullable_int____ctor(
            v11,
            parentBlankEarthSpotId,
            (const MethodInfo_38AF304 *)Method_System_Nullable_int___ctor__);
          v12 = v26;
        }
        else
        {
          v12 = 0;
        }
        if ( !IsBlankEarthWarByWarId && HIDWORD(v12) == 0 )
          goto LABEL_33;
        goto LABEL_24;
      }
LABEL_63:
      sub_1C2D6EC(Instance, v4);
    }
    goto LABEL_20;
  }
LABEL_24:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__ExistBlankEarthTutorial(0) )
  {
    isMainScenario = this->fields.isMainScenario;
    v14 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v14 = BalanceConfig_TypeInfo;
    }
    OrdealCallWarId = v14->static_fields->OrdealCallWarId;
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
    v16 = this->fields.spotEnt;
    if ( v16 )
    {
      warId = v16->fields.warId;
      targetSpotId = this->fields.targetSpotId;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C23BE6 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C23BE6 = 1;
      }
      v19 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v19 = TerminalPramsManager_TypeInfo;
      }
      v19->static_fields->_SpotId_k__BackingField = targetSpotId;
      TerminalPramsManager__SetAutoResumeByWarId(warId, 0);
      if ( !byte_4C21387 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C21387 = 1;
      }
      v20 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v20 = TerminalPramsManager_TypeInfo;
      }
      v20->static_fields->_IsDirectTransition_k__BackingField = 1;
    }
  }
  if ( this->fields.isWar )
  {
    v21 = this->fields.isMainScenario;
    isGrandQuestWar = this->fields.isGrandQuestWar;
    v23 = this->fields.targetWarId;
    v24 = isGrandQuestWar || v21;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( v24 )
      TerminalPramsManager__SetAutoResumeForFolder(v23, 0);
    else
      TerminalPramsManager__SetAutoResumeByWarId(v23, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C21387 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C21387 = 1;
    }
    v25 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v25 = TerminalPramsManager_TypeInfo;
    }
    v25->static_fields->_IsDirectTransition_k__BackingField = 1;
  }
LABEL_60:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
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
  __int64 v4; // x2
  __int64 v5; // x20
  System_String_o *v6; // x21
  bool v7; // w0
  System_String_o *v8; // x24
  int v9; // w8
  System_String_o *v10; // x23
  _BOOL4 v11; // w22
  int v12; // w8
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  System_Action_o *_9__2; // x21
  CommonUI_o *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *Instance; // x19
  MissionNaviTransitionBoardItem___c_c *v20; // x8
  System_String_o *v21; // x20
  System_String_o *v22; // x21
  System_Action_o *_9__45_1; // x22
  Il2CppObject *v24; // x23
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  bool v30; // w0
  Il2CppObject *entity; // [xsp+40h] [xbp-60h] BYREF
  int32_t result; // [xsp+4Ch] [xbp-54h] BYREF
  Il2CppObject *v33; // [xsp+50h] [xbp-50h] BYREF
  int32_t key; // [xsp+5Ch] [xbp-44h] BYREF

  if ( (byte_4C2AE3A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C2D490(&Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__45_1__);
    sub_1C2D490(&Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__);
    sub_1C2D490(&Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__2__);
    sub_1C2D490(&MissionNaviTransitionBoardItem___c_TypeInfo);
    sub_1C2D490(&StringLiteral_4982/*"DIALOG_OUT_OF_TERM"*/);
    sub_1C2D490(&StringLiteral_6238/*"EventReward"*/);
    sub_1C2D490(&StringLiteral_13161/*"Summon"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2AE3A = 1;
  }
  key = 0;
  v33 = 0;
  result = 0;
  entity = 0;
  sceneDetail = (__int64)this->fields.sceneDetail;
  if ( !sceneDetail )
    goto LABEL_67;
  sceneDetail = (__int64)System_String__Split((System_String_o *)sceneDetail, 0x2Fu, 0, 0);
  if ( !sceneDetail )
    goto LABEL_67;
  v5 = sceneDetail;
  if ( !*(_DWORD *)(sceneDetail + 24) )
    sub_1C2D6F4(sceneDetail, method, v4);
  v6 = *(System_String_o **)(sceneDetail + 32);
  v7 = System_String__op_Equality(v6, (System_String_o *)StringLiteral_6238/*"EventReward"*/, 0);
  if ( v7 )
    v8 = v6;
  else
    v8 = 0;
  if ( v7 && ((v9 = *(_DWORD *)(v5 + 24), v9 >= 2) ? (v10 = v8) : (v10 = 0), v9 >= 2) )
  {
    v30 = System_Int32__TryParse(*(System_String_o **)(v5 + 40), &key, 0);
    if ( v30 )
      v6 = v10;
    else
      v6 = 0;
    if ( v30 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      sceneDetail = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventMaster___);
      if ( !sceneDetail )
        goto LABEL_67;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)sceneDetail,
             &v33,
             key,
             (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        sceneDetail = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ShopMaster___);
        if ( !sceneDetail )
          goto LABEL_67;
        v11 = !ShopMaster__IsEventShopOpen((ShopMaster_o *)sceneDetail, key, 0);
      }
      else
      {
        v11 = 0;
        v6 = v10;
      }
    }
    else
    {
      v11 = 0;
      v6 = v8;
    }
  }
  else
  {
    v11 = 0;
  }
  if ( !System_String__op_Equality(v6, (System_String_o *)StringLiteral_13161/*"Summon"*/, 0) || *(int *)(v5 + 24) < 2 )
    goto LABEL_28;
  System_Int32__TryParse(*(System_String_o **)(v5 + 40), &result, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  sceneDetail = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !sceneDetail )
    goto LABEL_67;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)sceneDetail,
          &entity,
          result,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__) )
    goto LABEL_28;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  sceneDetail = NetworkManager__getTime(0);
  if ( !entity )
    goto LABEL_67;
  if ( sceneDetail < (__int64)entity[6].monitor || sceneDetail > (__int64)entity[7].klass )
    v12 = 1;
  else
LABEL_28:
    v12 = 0;
  if ( !(v12 | v11) )
  {
    sceneDetail = (__int64)this->fields.item;
    if ( !sceneDetail )
      goto LABEL_67;
    sceneDetail = (__int64)MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)sceneDetail, 0);
    if ( !sceneDetail )
      goto LABEL_67;
    if ( EventMissionEntity__isNowMission((EventMissionEntity_o *)sceneDetail, 0) )
    {
      v13 = Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__;
      if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__
            + 83)
          & 2) != 0 )
        v13 = (_QWORD *)sub_1C2D4A8(Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__);
      v14 = (System_Reflection_MethodBase_o *)sub_1C2D474(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0);
      sceneDetail = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( sceneDetail )
      {
        AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)sceneDetail, 1, 0);
        sceneDetail = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        _9__2 = this->fields.__9__2;
        v16 = (CommonUI_o *)sceneDetail;
        if ( !_9__2 )
        {
          _9__2 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(
            _9__2,
            (Il2CppObject *)this,
            Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__2__,
            0);
          this->fields.__9__2 = _9__2;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v17, v18);
        }
        if ( v16 )
        {
          CommonUI__CloseMissionNaviTransitionConfirmDialog_31271840(v16, _9__2, 0);
          return;
        }
      }
LABEL_67:
      sub_1C2D6EC(sceneDetail, method);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sceneDetail = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4982/*"DIALOG_OUT_OF_TERM"*/, 0);
  v20 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v21 = (System_String_o *)sceneDetail;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
    v20 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  v22 = (System_String_o *)StringLiteral_1/*""*/;
  _9__45_1 = v20->static_fields->__9__45_1;
  if ( !_9__45_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v20->static_fields->__9;
    _9__45_1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__45_1,
      v24,
      Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__45_1__,
      0);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__45_1 = _9__45_1;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__45_1, (int32_t)_9__45_1, v26, v27);
  }
  if ( !Instance )
    goto LABEL_67;
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v22, v21, _9__45_1, 500, 0, 0, 0, 1, 0, 0, 0, 0, 0.0, 0, 0);
  v28 = Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__;
  if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__ + 83)
      & 2) != 0 )
    v28 = (_QWORD *)sub_1C2D4A8(Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__);
  v29 = (System_Reflection_MethodBase_o *)sub_1C2D474(v28, v28[4]);
  OverwriteAssetSoundName__PlaySystemSe(v29, 2, 0, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass45_0___GetNaviSceneTransitionAction_b__2(
        MissionNaviTransitionBoardItem___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C2AE3B & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_4C2AE3B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0),
        ActionExtensions__Call(this->fields.transitionSceneAction, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(Instance, v4);
  }
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 0, 0);
}