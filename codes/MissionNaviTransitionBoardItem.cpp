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
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7

  ListViewItem___ctor_44097096((ListViewItem_o *)this, index, 0);
  this->fields._IconName_k__BackingField = iconName;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._IconName_k__BackingField,
    (int32_t)iconName,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._Name_k__BackingField = name;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._Name_k__BackingField,
    (int32_t)name,
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
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._ClosedMessage_k__BackingField,
    (int32_t)closedMessage,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields._NaviAction_k__BackingField = naviAction;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._NaviAction_k__BackingField,
    (int32_t)naviAction,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  __int64 v28; // x8
  System_Action_o *v29; // x19

  if ( (byte_4CCAEFA & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__);
    sub_1C713B0(&MissionNaviTransitionBoardItem___c__DisplayClass43_0_TypeInfo);
    byte_4CCAEFA = 1;
  }
  v7 = sub_1C715FC(MissionNaviTransitionBoardItem___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = naviQuestEntity,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)naviQuestEntity, v10, v11, v12, v13, v14, v15),
        *(_QWORD *)(v7 + 24) = tempQuestInfo,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)tempQuestInfo, v16, v17, v18, v19, v20, v21),
        *(_QWORD *)(v7 + 32) = item,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)item, v22, v23, v24, v25, v26, v27),
        (v28 = *(_QWORD *)(v7 + 16)) == 0) )
  {
    sub_1C71608(v8, v9);
  }
  *(_DWORD *)(v7 + 40) = *(_DWORD *)(v28 + 20);
  v29 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v7,
    (intptr_t)Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__,
    0);
  return v29;
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Action_o *v28; // x19

  if ( (byte_4CCAEFC & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__);
    sub_1C713B0(&MissionNaviTransitionBoardItem___c__DisplayClass45_0_TypeInfo);
    byte_4CCAEFC = 1;
  }
  v7 = sub_1C715FC(MissionNaviTransitionBoardItem___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C71608(v8, v9);
  *(_QWORD *)(v7 + 16) = sceneDetail;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)sceneDetail, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = item;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)item, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 32) = transitionSceneAction;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)transitionSceneAction, v22, v23, v24, v25, v26, v27);
  v28 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v7,
    (intptr_t)Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__,
    0);
  return v28;
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  void *v14; // x22
  System_String_o *v15; // x0
  MapControl_SpotInfo_o *SpotInfo; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  MapControl_SpotInfo_o *v29; // x0
  SpotEntity_o *Mine; // x1
  int32_t missionTransitionType; // w8
  System_Action_o *v32; // x19

  if ( (byte_4CCAEFB & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C713B0(&Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__);
    sub_1C713B0(&MissionNaviTransitionBoardItem___c__DisplayClass44_0_TypeInfo);
    sub_1C713B0(&StringLiteral_7135/*"Grand"*/);
    sub_1C713B0(&StringLiteral_8532/*"MAIN_SCENARIO"*/);
    byte_4CCAEFB = 1;
  }
  v5 = sub_1C715FC(MissionNaviTransitionBoardItem___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_25;
  *(_QWORD *)(v5 + 40) = item;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)item, v8, v9, v10, v11, v12, v13);
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
  v14 = transitionParam;
  if ( !*((_DWORD *)transitionParam + 6) )
    sub_1C71610(transitionParam);
  *(_BYTE *)(v5 + 65) = System_String__op_Equality(
                          *((System_String_o **)transitionParam + 4),
                          (System_String_o *)StringLiteral_7135/*"Grand"*/,
                          0);
  if ( !System_String__op_Equality(
          naviTransitionEntity->fields.transitionParam,
          (System_String_o *)StringLiteral_8532/*"MAIN_SCENARIO"*/,
          0) )
  {
    if ( *(_BYTE *)(v5 + 65) )
    {
      if ( *((int *)v14 + 6) < 2 )
      {
        transitionParam = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
        sub_1C71608(transitionParam, v7);
      }
      v15 = (System_String_o *)*((_QWORD *)v14 + 5);
    }
    else
    {
      v15 = naviTransitionEntity->fields.transitionParam;
    }
    System_Int32__TryParse(v15, (int32_t *)(v5 + 36), 0);
    goto LABEL_20;
  }
  *(_BYTE *)(v5 + 64) = 1;
  transitionParam = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !transitionParam )
    goto LABEL_25;
  transitionParam = QuestTree__GetLatestProgressWarInfo((QuestTree_o *)transitionParam, 0);
  if ( transitionParam )
    goto LABEL_16;
LABEL_20:
  System_Int32__TryParse(naviTransitionEntity->fields.transitionParam, (int32_t *)(v5 + 48), 0);
  transitionParam = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !transitionParam )
    goto LABEL_25;
  SpotInfo = QuestTree__GetSpotInfo((QuestTree_o *)transitionParam, *(_DWORD *)(v5 + 48), 0);
  *(_QWORD *)(v5 + 24) = SpotInfo;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)SpotInfo, v17, v18, v19, v20, v21, v22);
  v29 = *(MapControl_SpotInfo_o **)(v5 + 24);
  if ( v29 )
    Mine = MapControl_SpotInfo__GetMine(v29, 0);
  else
    Mine = 0;
  *(_QWORD *)(v5 + 56) = Mine;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 56), (int32_t)Mine, v23, v24, v25, v26, v27, v28);
  missionTransitionType = naviTransitionEntity->fields.missionTransitionType;
  *(_BYTE *)(v5 + 16) = missionTransitionType == 3;
  *(_BYTE *)(v5 + 32) = missionTransitionType == 2;
  v32 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v5,
    (intptr_t)Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__,
    0);
  return v32;
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
    sub_1C71608(0, item);
  transitionParam = missionNaviTransitionEnt->fields.transitionParam;
  MissionNaviTransitionEntity__TryGetChallengeNaviName(missionNaviTransitionEnt, &challengeNaviName, 0);
  MissionNaviTransitionEntity__TryGetChallengeIconName(missionNaviTransitionEnt, &v8, 0);
  return MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem_48288512(
           transitionParam,
           missionNaviTransitionEnt->fields.closedMessageId,
           challengeNaviName,
           v8,
           item,
           v6);
}


// local variable allocation has failed, the output may be wrong!
MissionNaviTransitionBoardItem_o *MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem_48288512(
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int64_t v20; // x25
  System_String_o *v21; // x27
  __int64 v22; // x26
  __int64 v23; // x26
  int32_t *v24; // x27
  Il2CppObject *v25; // x24
  __int64 v26; // x24
  int32_t v27; // w25
  char v28; // w23
  System_String_o *v29; // x29
  System_String_o *v30; // x25
  BalanceConfig_c *v31; // x0
  int32_t ClassBoardReleaseQuestId; // w25
  bool IsQuestClear_40596552; // w26
  System_String_o *v34; // x0
  const MethodInfo *v35; // x3
  MissionNaviTransitionBoardItem___c_c *v36; // x8
  System_String_o *v37; // x25
  System_Action_o *_9__42_1; // x24
  Il2CppObject *v39; // x27
  struct MissionNaviTransitionBoardItem___c_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  System_String_o *v47; // x0
  __int64 v48; // x24
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  System_String_o *v55; // x25
  SceneJumpInfo_o *v56; // x27
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  __int64 *v63; // x22
  __int64 *v64; // x8
  System_String_o *v65; // x0
  const MethodInfo *v66; // x3
  MissionNaviTransitionBoardItem___c_c *v67; // x8
  System_Action_o *_9__42_2; // x24
  Il2CppObject *v69; // x26
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  struct MissionNaviTransitionBoardItem___c_StaticFields *v76; // x0
  GrandQuestFolderBoardItem_o *p__9__42_2; // x0
  int32_t v78; // w24
  SceneJumpInfo_o *v79; // x25
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  System_String_o *v86; // x0
  MissionNaviTransitionBoardItem___c_c *v87; // x8
  Il2CppObject *v88; // x26
  struct MissionNaviTransitionBoardItem___c_StaticFields *v89; // x0
  System_String_o *v90; // x0
  System_Action_o *v91; // x1
  __int64 v92; // x26
  __int64 *v93; // x25
  __int64 v94; // x8
  bool v95; // w0
  System_String_o *v96; // x0
  System_Action_o *v97; // x26
  System_String_o *v98; // x22
  bool v99; // w21
  MissionNaviTransitionBoardItem_o *v100; // x20
  int32_t v102; // w27
  SceneJumpInfo_o *v103; // x26
  int32_t v104; // w2
  int32_t v105; // w3
  System_String_o *v106; // x4
  int32_t v107; // w5
  int64_t v108; // x6
  System_String_o *v109; // x7
  System_Action_o *v110; // x0
  intptr_t *v111; // x8
  System_Action_o *v112; // x27
  Il2CppObject *v113; // x1
  System_Action_o *v114; // x24
  const MethodInfo *v115; // x3
  __int64 v116; // x8
  Il2CppObject *v117; // x22
  System_String_o *v118; // x0
  const MethodInfo *v119; // [xsp+10h] [xbp-A0h]
  Il2CppObject *v122; // [xsp+28h] [xbp-88h] BYREF
  int32_t v123; // [xsp+34h] [xbp-7Ch] BYREF
  Il2CppObject *v124; // [xsp+38h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+40h] [xbp-70h] BYREF
  int32_t result; // [xsp+4Ch] [xbp-64h] BYREF

  if ( (byte_4CCAEF9 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_ClosedMessageMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&MissionNaviTransitionBoardItem_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&SceneJumpInfo_TypeInfo);
    sub_1C713B0(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_0__);
    sub_1C713B0(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_1__);
    sub_1C713B0(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_2__);
    sub_1C713B0(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_4__);
    sub_1C713B0(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_0__SetupSceneTransitionBoardItem_b__3__);
    sub_1C713B0(&MissionNaviTransitionBoardItem___c__DisplayClass42_0_TypeInfo);
    sub_1C713B0(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_1__SetupSceneTransitionBoardItem_b__5__);
    sub_1C713B0(&MissionNaviTransitionBoardItem___c__DisplayClass42_1_TypeInfo);
    sub_1C713B0(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_2__SetupSceneTransitionBoardItem_b__6__);
    sub_1C713B0(&MissionNaviTransitionBoardItem___c__DisplayClass42_2_TypeInfo);
    sub_1C713B0(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_3__SetupSceneTransitionBoardItem_b__7__);
    sub_1C713B0(&MissionNaviTransitionBoardItem___c__DisplayClass42_3_TypeInfo);
    sub_1C713B0(&Method_MissionNaviTransitionBoardItem___c__DisplayClass42_4__SetupSceneTransitionBoardItem_b__8__);
    sub_1C713B0(&MissionNaviTransitionBoardItem___c__DisplayClass42_4_TypeInfo);
    sub_1C713B0(&MissionNaviTransitionBoardItem___c_TypeInfo);
    sub_1C713B0(&StringLiteral_43/*"\n"*/);
    sub_1C713B0(&StringLiteral_23412/*"servant_eq_combine"*/);
    sub_1C713B0(&StringLiteral_113/*" "*/);
    sub_1C713B0(&StringLiteral_23556/*"shop_event"*/);
    sub_1C713B0(&StringLiteral_12752/*"ServantSkillCombine"*/);
    sub_1C713B0(&StringLiteral_8701/*"MISSION_NAVI_NOT_OPEN_BOARD"*/);
    sub_1C713B0(&StringLiteral_6544/*"FRIEND_POINT"*/);
    sub_1C713B0(&StringLiteral_4558/*"Combine"*/);
    sub_1C713B0(&StringLiteral_4432/*"ClassBoard"*/);
    sub_1C713B0(&StringLiteral_18018/*"class_board"*/);
    sub_1C713B0(&StringLiteral_22247/*"my_room"*/);
    sub_1C713B0(&StringLiteral_8708/*"MISSION_NAVI_SERVANT_SKILL_COMBINE"*/);
    sub_1C713B0(&StringLiteral_23415/*"servant_skill_combine"*/);
    sub_1C713B0(&StringLiteral_8706/*"MISSION_NAVI_SERVANT_EQ_COMBINE"*/);
    sub_1C713B0(&StringLiteral_6239/*"EventReward"*/);
    sub_1C713B0(&StringLiteral_8710/*"MISSION_NAVI_SUMMON_FRIEND_POINT"*/);
    sub_1C713B0(&StringLiteral_8695/*"MISSION_NAVI_EVENT_REWARD"*/);
    sub_1C713B0(&StringLiteral_8699/*"MISSION_NAVI_MYROOM"*/);
    sub_1C713B0(&StringLiteral_23411/*"servant_combine"*/);
    sub_1C713B0(&StringLiteral_8707/*"MISSION_NAVI_SERVANT_LIMIT_COUNT_UP"*/);
    sub_1C713B0(&StringLiteral_23941/*"summon"*/);
    sub_1C713B0(&StringLiteral_8702/*"MISSION_NAVI_NOT_OPEN_CLASS_BOARD_CLOSED_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_8705/*"MISSION_NAVI_SERVANT_COMBINE"*/);
    sub_1C713B0(&StringLiteral_23414/*"servant_limit_count_up"*/);
    sub_1C713B0(&StringLiteral_19743/*"friend"*/);
    sub_1C713B0(&StringLiteral_6868/*"Friend"*/);
    sub_1C713B0(&StringLiteral_13172/*"Summon"*/);
    sub_1C713B0(&StringLiteral_12736/*"ServantEQCombine"*/);
    sub_1C713B0(&StringLiteral_12733/*"ServantCombine"*/);
    sub_1C713B0(&StringLiteral_9216/*"MyRoom"*/);
    sub_1C713B0(&StringLiteral_8687/*"MISSION_NAVI_CLASS_BOARD"*/);
    sub_1C713B0(&StringLiteral_12746/*"ServantLimitCountUp"*/);
    sub_1C713B0(&StringLiteral_8709/*"MISSION_NAVI_SUMMON"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_23947/*"summon_friend"*/);
    sub_1C713B0(&StringLiteral_8697/*"MISSION_NAVI_FRIEND_AND_FOLLOW"*/);
    byte_4CCAEF9 = 1;
  }
  Master_object = (int64_t)MissionNaviTransitionBoardItem___c_TypeInfo;
  result = 0;
  v124 = 0;
  entity = 0;
  v123 = 0;
  v122 = 0;
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
    NaviSceneTransitionAction = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      NaviSceneTransitionAction,
      v12,
      Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_0__,
      0);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__42_0 = NaviSceneTransitionAction;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__42_0,
      (int32_t)NaviSceneTransitionAction,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !sceneDetail )
    goto LABEL_152;
  Master_object = (int64_t)System_String__Split(sceneDetail, 0x2Fu, 0, 0);
  if ( !Master_object )
    goto LABEL_152;
  v20 = Master_object;
  if ( !*(_DWORD *)(Master_object + 24) )
    goto LABEL_153;
  v21 = *(System_String_o **)(Master_object + 32);
  v22 = sub_1C715FC(MissionNaviTransitionBoardItem___c__DisplayClass42_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0);
  if ( !System_String__op_Equality(v21, (System_String_o *)StringLiteral_6239/*"EventReward"*/, 0) )
  {
    if ( System_String__op_Equality(v21, (System_String_o *)StringLiteral_4558/*"Combine"*/, 0) )
    {
      if ( *(int *)(v20 + 24) < 2 )
        goto LABEL_35;
      v48 = sub_1C715FC(MissionNaviTransitionBoardItem___c__DisplayClass42_3_TypeInfo);
      System_Object___ctor((Il2CppObject *)v48, 0);
      if ( *(_DWORD *)(v20 + 24) <= 1u )
        goto LABEL_153;
      if ( !v48 )
        goto LABEL_152;
      v55 = *(System_String_o **)(v20 + 40);
      *(_QWORD *)(v48 + 16) = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v48 + 16), 0, v49, v50, v51, v52, v53, v54);
      v56 = (SceneJumpInfo_o *)sub_1C715FC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41756140(v56, v55, 0);
      *(_QWORD *)(v48 + 16) = v56;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v48 + 16), (int32_t)v56, v57, v58, v59, v60, v61, v62);
      if ( System_String__op_Equality(v55, (System_String_o *)StringLiteral_12733/*"ServantCombine"*/, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v63 = &StringLiteral_23411/*"servant_combine"*/;
        v64 = &StringLiteral_8705/*"MISSION_NAVI_SERVANT_COMBINE"*/;
      }
      else if ( System_String__op_Equality(v55, (System_String_o *)StringLiteral_12752/*"ServantSkillCombine"*/, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v63 = &StringLiteral_23415/*"servant_skill_combine"*/;
        v64 = &StringLiteral_8708/*"MISSION_NAVI_SERVANT_SKILL_COMBINE"*/;
      }
      else if ( System_String__op_Equality(v55, (System_String_o *)StringLiteral_12736/*"ServantEQCombine"*/, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v63 = &StringLiteral_23412/*"servant_eq_combine"*/;
        v64 = &StringLiteral_8706/*"MISSION_NAVI_SERVANT_EQ_COMBINE"*/;
      }
      else
      {
        v95 = System_String__op_Equality(v55, (System_String_o *)StringLiteral_12746/*"ServantLimitCountUp"*/, 0);
        v29 = closedMessage;
        v30 = closedMessage;
        if ( !v95 )
        {
LABEL_118:
          v97 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          System_Action___ctor(
            v97,
            (Il2CppObject *)v48,
            Method_MissionNaviTransitionBoardItem___c__DisplayClass42_3__SetupSceneTransitionBoardItem_b__7__,
            0);
          v90 = sceneDetail;
          v91 = v97;
          goto LABEL_119;
        }
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v63 = &StringLiteral_23414/*"servant_limit_count_up"*/;
        v64 = &StringLiteral_8707/*"MISSION_NAVI_SERVANT_LIMIT_COUNT_UP"*/;
      }
      v96 = LocalizationManager__Get((System_String_o *)*v64, 0);
      v29 = (System_String_o *)*v63;
      v30 = v96;
      goto LABEL_118;
    }
    if ( System_String__op_Equality(v21, (System_String_o *)StringLiteral_4432/*"ClassBoard"*/, 0) )
    {
      v31 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v31 = BalanceConfig_TypeInfo;
      }
      ClassBoardReleaseQuestId = v31->static_fields->ClassBoardReleaseQuestId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_40596552 = CondType__IsQuestClear_40596552(ClassBoardReleaseQuestId, -1, 0, 0);
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( IsQuestClear_40596552 )
        {
LABEL_45:
          v34 = LocalizationManager__Get((System_String_o *)StringLiteral_8687/*"MISSION_NAVI_CLASS_BOARD"*/, 0);
          v36 = MissionNaviTransitionBoardItem___c_TypeInfo;
          v37 = v34;
          if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
            v36 = MissionNaviTransitionBoardItem___c_TypeInfo;
          }
          _9__42_1 = v36->static_fields->__9__42_1;
          if ( !_9__42_1 )
          {
            if ( !v36->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v36);
              v36 = MissionNaviTransitionBoardItem___c_TypeInfo;
            }
            v39 = (Il2CppObject *)v36->static_fields->__9;
            _9__42_1 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
            System_Action___ctor(
              _9__42_1,
              v39,
              Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_1__,
              0);
            v40 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
            v40->__9__42_1 = _9__42_1;
            sub_1C71354((GrandQuestFolderBoardItem_o *)&v40->__9__42_1, (int32_t)_9__42_1, v41, v42, v43, v44, v45, v46);
          }
          NaviSceneTransitionAction = MissionNaviTransitionBoardItem__GetNaviSceneTransitionAction(
                                        sceneDetail,
                                        _9__42_1,
                                        item,
                                        v35);
          v47 = closedMessage;
          closedMessage = v37;
          goto LABEL_83;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( IsQuestClear_40596552 )
          goto LABEL_45;
      }
      v47 = LocalizationManager__Get((System_String_o *)StringLiteral_8702/*"MISSION_NAVI_NOT_OPEN_CLASS_BOARD_CLOSED_MESSAGE"*/, 0);
LABEL_83:
      v30 = closedMessage;
      v28 = !IsQuestClear_40596552;
      closedMessage = v47;
      v29 = (System_String_o *)StringLiteral_18018/*"class_board"*/;
      goto LABEL_121;
    }
    if ( System_String__op_Equality(v21, (System_String_o *)StringLiteral_13172/*"Summon"*/, 0) )
    {
      v29 = (System_String_o *)StringLiteral_23941/*"summon"*/;
      if ( *(int *)(v20 + 24) >= 2 )
      {
        if ( System_String__op_Equality(*(System_String_o **)(v20 + 40), (System_String_o *)StringLiteral_6544/*"FRIEND_POINT"*/, 0) )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v65 = LocalizationManager__Get((System_String_o *)StringLiteral_8710/*"MISSION_NAVI_SUMMON_FRIEND_POINT"*/, 0);
          v67 = MissionNaviTransitionBoardItem___c_TypeInfo;
          v30 = v65;
          v29 = (System_String_o *)StringLiteral_23947/*"summon_friend"*/;
          if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
            v67 = MissionNaviTransitionBoardItem___c_TypeInfo;
          }
          _9__42_2 = v67->static_fields->__9__42_2;
          if ( _9__42_2 )
            goto LABEL_98;
          if ( !v67->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v67);
            v67 = MissionNaviTransitionBoardItem___c_TypeInfo;
          }
          v69 = (Il2CppObject *)v67->static_fields->__9;
          _9__42_2 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          System_Action___ctor(
            _9__42_2,
            v69,
            Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_2__,
            0);
          v76 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
          v76->__9__42_2 = _9__42_2;
          p__9__42_2 = (GrandQuestFolderBoardItem_o *)&v76->__9__42_2;
LABEL_97:
          sub_1C71354(p__9__42_2, (int32_t)_9__42_2, v70, v71, v72, v73, v74, v75);
LABEL_98:
          v90 = sceneDetail;
          v91 = _9__42_2;
LABEL_119:
          NaviSceneTransitionAction = MissionNaviTransitionBoardItem__GetNaviSceneTransitionAction(v90, v91, item, v66);
LABEL_120:
          v28 = 0;
          goto LABEL_121;
        }
        if ( *(int *)(v20 + 24) >= 2 )
        {
          v92 = sub_1C715FC(MissionNaviTransitionBoardItem___c__DisplayClass42_4_TypeInfo);
          System_Object___ctor((Il2CppObject *)v92, 0);
          if ( *(_DWORD *)(v20 + 24) <= 1u )
            goto LABEL_153;
          if ( !v92 )
            goto LABEL_152;
          System_Int32__TryParse(*(System_String_o **)(v20 + 40), (int32_t *)(v92 + 16), 0);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_GachaMaster___);
          if ( !Master_object )
            goto LABEL_152;
          v93 = (__int64 *)(v92 + 24);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 (Il2CppObject **)(v92 + 24),
                 *(_DWORD *)(v92 + 16),
                 (const MethodInfo_3408ECC *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__) )
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Master_object = NetworkManager__getTime(0);
            v94 = *v93;
            if ( !*v93 )
              goto LABEL_152;
            if ( Master_object >= *(_QWORD *)(v94 + 104) && Master_object <= *(_QWORD *)(v94 + 112) )
            {
              v114 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
              System_Action___ctor(
                v114,
                (Il2CppObject *)v92,
                Method_MissionNaviTransitionBoardItem___c__DisplayClass42_4__SetupSceneTransitionBoardItem_b__8__,
                0);
              Master_object = (int64_t)MissionNaviTransitionBoardItem__GetNaviSceneTransitionAction(
                                         sceneDetail,
                                         v114,
                                         item,
                                         v115);
              v116 = *(_QWORD *)(v92 + 24);
              if ( !v116 )
                goto LABEL_152;
              NaviSceneTransitionAction = (System_Action_o *)Master_object;
              Master_object = *(_QWORD *)(v116 + 24);
              if ( !Master_object )
                goto LABEL_152;
              v117 = (Il2CppObject *)System_String__Replace_64078288(
                                       (System_String_o *)Master_object,
                                       (System_String_o *)StringLiteral_43/*"\n"*/,
                                       (System_String_o *)StringLiteral_113/*" "*/,
                                       0);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v118 = LocalizationManager__Get((System_String_o *)StringLiteral_8709/*"MISSION_NAVI_SUMMON"*/, 0);
              v30 = System_String__Format(v118, v117, 0);
              goto LABEL_120;
            }
            NaviSceneTransitionAction = 0;
            v28 = 1;
            goto LABEL_37;
          }
        }
      }
      v28 = 0;
      goto LABEL_37;
    }
    if ( System_String__op_Equality(v21, (System_String_o *)StringLiteral_6868/*"Friend"*/, 0) )
    {
      result = 0;
      v78 = 0;
      v29 = (System_String_o *)StringLiteral_19743/*"friend"*/;
      if ( *(int *)(v20 + 24) >= 2 )
      {
        System_Int32__TryParse(*(System_String_o **)(v20 + 40), &result, 0);
        v78 = result;
      }
      v79 = (SceneJumpInfo_o *)sub_1C715FC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41756188(v79, v78, 0);
      if ( !v22 )
        goto LABEL_152;
      *(_QWORD *)(v22 + 16) = v79;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v22 + 16), (int32_t)v79, v80, v81, v82, v83, v84, v85);
      _9__42_2 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__42_2,
        (Il2CppObject *)v22,
        Method_MissionNaviTransitionBoardItem___c__DisplayClass42_0__SetupSceneTransitionBoardItem_b__3__,
        0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_8697/*"MISSION_NAVI_FRIEND_AND_FOLLOW"*/, 0);
      goto LABEL_98;
    }
    if ( !System_String__op_Equality(v21, (System_String_o *)StringLiteral_9216/*"MyRoom"*/, 0) )
      goto LABEL_35;
    v29 = (System_String_o *)StringLiteral_22247/*"my_room"*/;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v86 = LocalizationManager__Get((System_String_o *)StringLiteral_8699/*"MISSION_NAVI_MYROOM"*/, 0);
    v87 = MissionNaviTransitionBoardItem___c_TypeInfo;
    v30 = v86;
    if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
      v87 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    _9__42_2 = v87->static_fields->__9__42_4;
    if ( _9__42_2 )
      goto LABEL_98;
    if ( !v87->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v87);
      v87 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v88 = (Il2CppObject *)v87->static_fields->__9;
    _9__42_2 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__42_2,
      v88,
      Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__42_4__,
      0);
    v89 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    v89->__9__42_4 = _9__42_2;
    p__9__42_2 = (GrandQuestFolderBoardItem_o *)&v89->__9__42_4;
    goto LABEL_97;
  }
  if ( *(int *)(v20 + 24) < 2 )
    goto LABEL_35;
  v23 = sub_1C715FC(MissionNaviTransitionBoardItem___c__DisplayClass42_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0);
  if ( *(_DWORD *)(v20 + 24) <= 1u )
LABEL_153:
    sub_1C71610(Master_object);
  if ( !v23 )
    goto LABEL_152;
  v24 = (int32_t *)(v23 + 16);
  if ( System_Int32__TryParse(*(System_String_o **)(v20 + 40), (int32_t *)(v23 + 16), 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v25 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventDetailMaster___);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
      goto LABEL_152;
    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                      &entity,
                      *v24,
                      (const MethodInfo_3408ECC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    if ( (Master_object & 1) != 0 )
    {
      if ( !v25 )
        goto LABEL_152;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)v25,
             &v124,
             *v24,
             (const MethodInfo_3408ECC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ShopMaster___);
        if ( !Master_object )
          goto LABEL_152;
        if ( ShopMaster__IsEventShopOpen((ShopMaster_o *)Master_object, *v24, 0) )
        {
          Master_object = (int64_t)v124;
          if ( !v124 )
            goto LABEL_152;
          if ( EventDetailEntity__IsReward((EventDetailEntity_o *)v124, 0) )
            goto LABEL_31;
          Master_object = (int64_t)v124;
          if ( !v124 )
            goto LABEL_152;
          if ( EventDetailEntity__IsEventShop((EventDetailEntity_o *)v124, 0) )
          {
LABEL_31:
            v26 = sub_1C715FC(MissionNaviTransitionBoardItem___c__DisplayClass42_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v26, 0);
            v123 = 0;
            if ( *(int *)(v20 + 24) >= 3 )
            {
              System_Int32__TryParse(*(System_String_o **)(v20 + 48), &v123, 0);
              v27 = v123 + 1;
            }
            else
            {
              v27 = 1;
            }
            v102 = *v24;
            v103 = (SceneJumpInfo_o *)sub_1C715FC(SceneJumpInfo_TypeInfo);
            SceneJumpInfo___ctor_41756288(v103, (System_String_o *)StringLiteral_1/*""*/, v102, v27, 0);
            if ( !v26 )
              goto LABEL_152;
            *(_QWORD *)(v26 + 16) = v103;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v26 + 16), (int32_t)v103, v104, v105, v106, v107, v108, v109);
            v110 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
            v111 = &Method_MissionNaviTransitionBoardItem___c__DisplayClass42_2__SetupSceneTransitionBoardItem_b__6__;
            v112 = v110;
            v113 = (Il2CppObject *)v26;
          }
          else
          {
            Master_object = (int64_t)v124;
            if ( !v124 )
              goto LABEL_152;
            v112 = 0;
            if ( !EventDetailEntity__IsExchangeShop((EventDetailEntity_o *)v124, 0) )
              goto LABEL_141;
            v110 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
            v111 = &Method_MissionNaviTransitionBoardItem___c__DisplayClass42_1__SetupSceneTransitionBoardItem_b__5__;
            v112 = v110;
            v113 = (Il2CppObject *)v23;
          }
          System_Action___ctor(v110, v113, *v111, 0);
LABEL_141:
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v30 = LocalizationManager__Get((System_String_o *)StringLiteral_8695/*"MISSION_NAVI_EVENT_REWARD"*/, 0);
          v90 = sceneDetail;
          v91 = v112;
          v29 = (System_String_o *)StringLiteral_23556/*"shop_event"*/;
          goto LABEL_119;
        }
      }
    }
    NaviSceneTransitionAction = 0;
    v28 = 1;
    goto LABEL_36;
  }
LABEL_35:
  v28 = 0;
LABEL_36:
  v29 = closedMessage;
LABEL_37:
  v30 = closedMessage;
LABEL_121:
  if ( System_String__op_Inequality(naviName, (System_String_o *)StringLiteral_1/*""*/, 0) )
    v98 = naviName;
  else
    v98 = v30;
  v99 = System_String__op_Inequality(iconName, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( (v28 & 1) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v98 = LocalizationManager__Get((System_String_o *)StringLiteral_8701/*"MISSION_NAVI_NOT_OPEN_BOARD"*/, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ClosedMessageMaster___);
    if ( closedMessageId )
    {
      if ( Master_object )
      {
        Master_object = DataMasterBase_object__object__int___TryGetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          &v122,
                          closedMessageId,
                          (const MethodInfo_3408ECC *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
        if ( (Master_object & 1) == 0 )
          goto LABEL_134;
        if ( v122 )
        {
          closedMessage = (System_String_o *)v122[1].monitor;
          goto LABEL_134;
        }
      }
LABEL_152:
      sub_1C71608(Master_object, *(_QWORD *)&closedMessageId);
    }
  }
LABEL_134:
  if ( !v99 )
    iconName = v29;
  v100 = (MissionNaviTransitionBoardItem_o *)sub_1C715FC(MissionNaviTransitionBoardItem_TypeInfo);
  MissionNaviTransitionBoardItem___ctor(
    v100,
    0,
    iconName,
    v98,
    0,
    0,
    0,
    v28 & 1,
    closedMessage,
    NaviSceneTransitionAction,
    v119);
  return v100;
}


bool MissionNaviTransitionBoardItem__TrySetupQuestListTransitionBoardItem(
        MissionNaviTransitionEntity_o *missionNaviTransitionEntity,
        MissionListViewItem_o *item,
        System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **challengeBoardList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x22
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  void *transitionParam; // x0
  __int64 v14; // x1
  int v15; // w8
  void *v16; // x21
  bool v17; // w20
  int v18; // w19
  MissionNaviQuestEntity_o *v19; // x23
  int32_t questId; // w22
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v22; // x26
  const MethodInfo *v23; // x3
  bool v24; // w20
  System_Action_o *NaviQuestTransitionAction; // x0
  bool v26; // w25
  System_ValueTuple_string__string__o closedMessage; // kr00_16
  int32_t size; // w24
  System_String_o *v29; // x29
  bool HasFlag; // w20
  MissionNaviTransitionBoardItem_o *v31; // x23
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x8
  const MethodInfo *v44; // [xsp+10h] [xbp-90h]
  System_Action_o *v46; // [xsp+28h] [xbp-78h]
  System_String_o *challengeIconName; // [xsp+30h] [xbp-70h] BYREF
  int32_t result; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_4CCAEF6 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_MissionNaviQuestMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__get_Count__);
    sub_1C713B0(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
    sub_1C713B0(&MissionNaviTransitionBoardItem_TypeInfo);
    sub_1C713B0(&MissionNaviTransitionConfirmDialog_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4CCAEF6 = 1;
  }
  result = 0;
  challengeIconName = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *challengeBoardList = (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o *)v6;
  sub_1C71354((GrandQuestFolderBoardItem_o *)challengeBoardList, (int32_t)v6, v7, v8, v9, v10, v11, v12);
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
  transitionParam = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_MissionNaviQuestMaster___);
  if ( !transitionParam
    || (transitionParam = MissionNaviQuestMaster__GetOpenQuestByNaviQuestMasterId(
                            (MissionNaviQuestMaster_o *)transitionParam,
                            result,
                            0)) == 0 )
  {
LABEL_33:
    sub_1C71608(transitionParam, v14);
  }
  v15 = *((_DWORD *)transitionParam + 6);
  v16 = transitionParam;
  v17 = v15 > 0;
  if ( v15 >= 1 )
  {
    v18 = 0;
    while ( v18 < (unsigned int)v15 )
    {
      v19 = (MissionNaviQuestEntity_o *)*((_QWORD *)v16 + v18 + 4);
      if ( !v19 )
        goto LABEL_33;
      questId = v19->fields.questId;
      transitionParam = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !transitionParam )
        goto LABEL_33;
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)transitionParam, questId, 0);
      if ( !QuestInfo )
        return !v17;
      v22 = QuestInfo;
      v24 = !MissionNaviQuestEntity__IsNaviBoardOpen(v19, QuestInfo, 0);
      NaviQuestTransitionAction = 0;
      if ( !v24 )
        NaviQuestTransitionAction = MissionNaviTransitionBoardItem__GetNaviQuestTransitionAction(v19, v22, item, v23);
      v46 = NaviQuestTransitionAction;
      if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
      v26 = v24;
      closedMessage = MissionNaviTransitionConfirmDialog__GetQuestNaviNameAndClosedMessage(v19, v22, v24, v23);
      transitionParam = (void *)MissionNaviQuestEntity__TryGetChallengeIconName(v19, &challengeIconName, 0);
      if ( !*challengeBoardList )
        goto LABEL_33;
      size = (*challengeBoardList)->fields._size;
      v29 = challengeIconName;
      HasFlag = MissionNaviQuestEntity__HasFlag(v19, 2, 0);
      v31 = (MissionNaviTransitionBoardItem_o *)sub_1C715FC(MissionNaviTransitionBoardItem_TypeInfo);
      MissionNaviTransitionBoardItem___ctor(
        v31,
        size,
        v29,
        closedMessage.fields.Item1,
        1,
        questId,
        HasFlag,
        v26,
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
          (Il2CppObject *)v31,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = v38 + 8 * v40;
        *((_DWORD *)transitionParam + 6) = v40 + 1;
        *(_QWORD *)(v41 + 32) = v31;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v41 + 32), (int32_t)v31, v32, v33, v34, v35, v36, v37);
      }
      v15 = *((_DWORD *)v16 + 6);
      v17 = ++v18 < v15;
      if ( v18 >= v15 )
        return !v17;
    }
LABEL_34:
    sub_1C71610(transitionParam);
  }
  return !v17;
}


bool MissionNaviTransitionBoardItem__TrySetupSpotTransitionBoardItem(
        MissionNaviTransitionEntity_o *missionNaviTransitionEntity,
        MissionListViewItem_o *item,
        System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **challengeBoardList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  QuestTree_o *Instance; // x0
  __int64 v15; // x1
  MapControl_SpotInfo_o *SpotInfo; // x0
  MapControl_SpotInfo_o *v17; // x23
  SpotEntity_o *Mine; // x0
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x3
  int32_t dispType; // w25
  SpotEntity_o *v22; // x24
  System_Action_o *NaviWarOrSpotTransitionAction; // x22
  System_ValueTuple_string__string__o closedMessage; // kr00_16
  bool v25; // w0
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  const MethodInfo *v27; // x1
  System_String_o *IconNameByWarInfo; // x24
  MissionNaviTransitionBoardItem_o *v29; // x20
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  struct MapControl_RootInfo_o *mapControlRootInfo; // x8
  _QWORD *v37; // x9
  __int64 allQuestInfoList_low; // x10
  __int64 v39; // x8
  const MethodInfo *v41; // [xsp+10h] [xbp-70h]
  System_String_o *challengeIconName; // [xsp+20h] [xbp-60h] BYREF
  int32_t result; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_4CCAEF8 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
    sub_1C713B0(&MissionNaviTransitionBoardItem_TypeInfo);
    sub_1C713B0(&MissionNaviTransitionConfirmDialog_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4CCAEF8 = 1;
  }
  result = 0;
  challengeIconName = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *challengeBoardList = (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o *)v7;
  sub_1C71354((GrandQuestFolderBoardItem_o *)challengeBoardList, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  if ( !missionNaviTransitionEntity )
    goto LABEL_22;
  System_Int32__TryParse(missionNaviTransitionEntity->fields.transitionParam, &result, 0);
  Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  SpotInfo = QuestTree__GetSpotInfo(Instance, result, 0);
  if ( !SpotInfo )
    return (char)SpotInfo;
  v17 = SpotInfo;
  Mine = MapControl_SpotInfo__GetMine(SpotInfo, 0);
  dispType = v17->fields.dispType;
  v22 = Mine;
  NaviWarOrSpotTransitionAction = 0;
  if ( dispType == 1 )
    NaviWarOrSpotTransitionAction = MissionNaviTransitionBoardItem__GetNaviWarOrSpotTransitionAction(
                                      missionNaviTransitionEntity,
                                      item,
                                      v19);
  if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
  closedMessage = MissionNaviTransitionConfirmDialog__GetSpotNaviNameAndClosedMessage(
                    missionNaviTransitionEntity,
                    v17,
                    dispType != 1,
                    v20);
  v25 = MissionNaviTransitionEntity__TryGetChallengeIconName(missionNaviTransitionEntity, &challengeIconName, 0);
  if ( !v22 || v25 )
  {
    IconNameByWarInfo = challengeIconName;
  }
  else
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(Instance, v22->fields.warId, 0);
    IconNameByWarInfo = MissionNaviTransitionBoardItemDraw__GetIconNameByWarInfo(WarInfoByWarID, v27);
    challengeIconName = IconNameByWarInfo;
  }
  v29 = (MissionNaviTransitionBoardItem_o *)sub_1C715FC(MissionNaviTransitionBoardItem_TypeInfo);
  MissionNaviTransitionBoardItem___ctor(
    v29,
    0,
    IconNameByWarInfo,
    closedMessage.fields.Item1,
    0,
    0,
    1,
    dispType != 1,
    closedMessage.fields.Item2,
    NaviWarOrSpotTransitionAction,
    v41);
  Instance = (QuestTree_o *)*challengeBoardList;
  if ( !*challengeBoardList
    || (mapControlRootInfo = Instance->fields.mapControlRootInfo,
        v37 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__,
        ++HIDWORD(Instance->fields.allQuestInfoList),
        !mapControlRootInfo) )
  {
LABEL_22:
    sub_1C71608(Instance, v15);
  }
  allQuestInfoList_low = SLODWORD(Instance->fields.allQuestInfoList);
  if ( (unsigned int)allQuestInfoList_low >= LODWORD(mapControlRootInfo[1].klass) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v29,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = (__int64)mapControlRootInfo + 8 * allQuestInfoList_low;
    LODWORD(Instance->fields.allQuestInfoList) = allQuestInfoList_low + 1;
    *(_QWORD *)(v39 + 32) = v29;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v39 + 32), (int32_t)v29, v30, v31, v32, v33, v34, v35);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_String_o **Instance; // x0
  __int64 v15; // x1
  char v16; // w22
  System_String_o **v17; // x23
  bool v18; // w0
  MapControl_WarInfo_o *LatestProgressWarInfo; // x0
  MapControl_WarInfo_o *v20; // x22
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x2
  System_Action_o *NaviWarOrSpotTransitionAction; // x23
  bool v24; // w21
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  bool IsActiveWar; // w0
  System_ValueTuple_string__string__o closedMessage; // kr00_16
  const MethodInfo *v28; // x1
  System_String_o *IconNameByWarInfo; // x22
  MissionNaviTransitionBoardItem_o *v30; // x20
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  System_String_o *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  __int64 v40; // x8
  const MethodInfo *v42; // [xsp+10h] [xbp-60h]
  int32_t result[2]; // [xsp+18h] [xbp-58h] BYREF
  System_String_o *challengeIconName; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4CCAEF7 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
    sub_1C713B0(&MissionNaviTransitionBoardItem_TypeInfo);
    sub_1C713B0(&MissionNaviTransitionConfirmDialog_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C713B0(&StringLiteral_7135/*"Grand"*/);
    sub_1C713B0(&StringLiteral_8532/*"MAIN_SCENARIO"*/);
    byte_4CCAEF7 = 1;
  }
  challengeIconName = 0;
  *(_QWORD *)result = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *challengeBoardList = (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o *)v7;
  sub_1C71354((GrandQuestFolderBoardItem_o *)challengeBoardList, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  if ( !missionNaviTransitionEntity )
    goto LABEL_40;
  Instance = (System_String_o **)System_String__op_Equality(
                                   missionNaviTransitionEntity->fields.transitionParam,
                                   (System_String_o *)StringLiteral_8532/*"MAIN_SCENARIO"*/,
                                   0);
  if ( !missionNaviTransitionEntity->fields.transitionParam )
    goto LABEL_40;
  v16 = (char)Instance;
  Instance = (System_String_o **)System_String__Split(missionNaviTransitionEntity->fields.transitionParam, 0x2Fu, 0, 0);
  if ( !Instance )
    goto LABEL_40;
  v17 = Instance;
  if ( !*((_DWORD *)Instance + 6) )
    sub_1C71610(Instance);
  v18 = System_String__op_Equality(Instance[4], (System_String_o *)StringLiteral_7135/*"Grand"*/, 0);
  if ( (v16 & 1) != 0 )
  {
    Instance = (System_String_o **)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    LatestProgressWarInfo = QuestTree__GetLatestProgressWarInfo((QuestTree_o *)Instance, 0);
    if ( !LatestProgressWarInfo )
      return (char)LatestProgressWarInfo;
    v20 = LatestProgressWarInfo;
    if ( MapControl_WarInfo__GetStatus(LatestProgressWarInfo, 0) != 3 && MapControl_WarInfo__GetStatus(v20, 0) != 4 )
      goto LABEL_12;
    goto LABEL_27;
  }
  if ( v18 )
  {
    if ( *((int *)v17 + 6) >= 2 )
    {
      System_Int32__TryParse(v17[5], &result[1], 0);
      Instance = (System_String_o **)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        goto LABEL_40;
      WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, result[1], 0);
    }
    else
    {
      Instance = (System_String_o **)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        goto LABEL_40;
      WarInfoByWarID = QuestTree__GetLatestGrandWarInfo((QuestTree_o *)Instance, 0);
    }
    v20 = WarInfoByWarID;
    Instance = (System_String_o **)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( v20 && Instance )
    {
      IsActiveWar = QuestTree__IsActiveWar((QuestTree_o *)Instance, v20->fields.warId, 0);
      goto LABEL_26;
    }
LABEL_40:
    sub_1C71608(Instance, v15);
  }
  System_Int32__TryParse(missionNaviTransitionEntity->fields.transitionParam, result, 0);
  Instance = (System_String_o **)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  v20 = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, result[0], 0);
  Instance = (System_String_o **)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  IsActiveWar = QuestTree__IsActiveWar((QuestTree_o *)Instance, result[0], 0);
  if ( !v20 )
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
                                      v22);
    v24 = 0;
    goto LABEL_28;
  }
LABEL_27:
  NaviWarOrSpotTransitionAction = 0;
  v24 = 1;
LABEL_28:
  if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
  closedMessage = MissionNaviTransitionConfirmDialog__GetWarNaviNameAndClosedMessage(
                    missionNaviTransitionEntity,
                    v20,
                    v24,
                    v21);
  if ( MissionNaviTransitionEntity__TryGetChallengeIconName(missionNaviTransitionEntity, &challengeIconName, 0) )
  {
    IconNameByWarInfo = challengeIconName;
  }
  else
  {
    IconNameByWarInfo = MissionNaviTransitionBoardItemDraw__GetIconNameByWarInfo(v20, v28);
    challengeIconName = IconNameByWarInfo;
  }
  v30 = (MissionNaviTransitionBoardItem_o *)sub_1C715FC(MissionNaviTransitionBoardItem_TypeInfo);
  MissionNaviTransitionBoardItem___ctor(
    v30,
    0,
    IconNameByWarInfo,
    closedMessage.fields.Item1,
    0,
    0,
    1,
    v24,
    closedMessage.fields.Item2,
    NaviWarOrSpotTransitionAction,
    v42);
  Instance = (System_String_o **)*challengeBoardList;
  if ( !*challengeBoardList )
    goto LABEL_40;
  v37 = Instance[2];
  v38 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__;
  ++*((_DWORD *)Instance + 7);
  if ( !v37 )
    goto LABEL_40;
  v39 = *((int *)Instance + 6);
  if ( (unsigned int)v39 >= LODWORD(v37[1].klass) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v30,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v40 = (__int64)v37 + 8 * v39;
    *((_DWORD *)Instance + 6) = v39 + 1;
    *(_QWORD *)(v40 + 32) = v30;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v40 + 32), (int32_t)v30, v31, v32, v33, v34, v35, v36);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ClosedMessage_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._ClosedMessage_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MissionNaviTransitionBoardItem__set_IconName(
        MissionNaviTransitionBoardItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._IconName_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._IconName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Name_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._Name_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MissionNaviTransitionBoardItem__set_NaviAction(
        MissionNaviTransitionBoardItem_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._NaviAction_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._NaviAction_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MissionNaviTransitionBoardItem__set_QuestEndTime(
        MissionNaviTransitionBoardItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._QuestEndTime_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._QuestEndTime_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CCAEFD & 1) == 0 )
  {
    sub_1C713B0(&MissionNaviTransitionBoardItem___c_TypeInfo);
    byte_4CCAEFD = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(MissionNaviTransitionBoardItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MissionNaviTransitionBoardItem___c_TypeInfo->static_fields->__9 = (struct MissionNaviTransitionBoardItem___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)MissionNaviTransitionBoardItem___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CCAF01 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__43_3__);
    sub_1C713B0(&MissionNaviTransitionBoardItem___c_TypeInfo);
    byte_4CCAF01 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__43_3 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__43_3,
      v7,
      Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__43_3__,
      0);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__43_3 = _9__43_3;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__43_3,
      (int32_t)_9__43_3,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !v5 )
LABEL_12:
    sub_1C71608(Instance, v3);
  CommonUI__CloseMissionNaviTransitionConfirmDialog_31546024(v5, _9__43_3, 0);
}


void MissionNaviTransitionBoardItem___c___GetNaviQuestTransitionAction_b__43_3(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CCAF02 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CCAF02 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C71608(Instance, v3);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CCAF05 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__45_3__);
    sub_1C713B0(&MissionNaviTransitionBoardItem___c_TypeInfo);
    byte_4CCAF05 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__45_3 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__45_3,
      v7,
      Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__45_3__,
      0);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__45_3 = _9__45_3;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__45_3,
      (int32_t)_9__45_3,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !v5 )
LABEL_12:
    sub_1C71608(Instance, v3);
  CommonUI__CloseMissionNaviTransitionConfirmDialog_31546024(v5, _9__45_3, 0);
}


void MissionNaviTransitionBoardItem___c___GetNaviSceneTransitionAction_b__45_3(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CCAF06 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CCAF06 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C71608(Instance, v3);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CCAF03 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__44_3__);
    sub_1C713B0(&MissionNaviTransitionBoardItem___c_TypeInfo);
    byte_4CCAF03 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__44_3 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__44_3,
      v7,
      Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__44_3__,
      0);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__44_3 = _9__44_3;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__44_3,
      (int32_t)_9__44_3,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !v5 )
LABEL_12:
    sub_1C71608(Instance, v3);
  CommonUI__CloseMissionNaviTransitionConfirmDialog_31546024(v5, _9__44_3, 0);
}


void MissionNaviTransitionBoardItem___c___GetNaviWarOrSpotTransitionAction_b__44_3(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CCAF04 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CCAF04 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C71608(Instance, v3);
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

  if ( (byte_4CCAEFE & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CCAEFE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 91, 1, 0, 0);
}


void MissionNaviTransitionBoardItem___c___SetupSceneTransitionBoardItem_b__42_2(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CCAEFF & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CCAEFF = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CC3920 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC3920 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_SummonType_k__BackingField = 3;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 20, 1, 0, 0);
}


void MissionNaviTransitionBoardItem___c___SetupSceneTransitionBoardItem_b__42_4(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CCAF00 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CCAF00 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v3);
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

  if ( (byte_4CCAF07 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CCAF07 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v4);
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

  if ( (byte_4CCAF08 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CCAF08 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v4);
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

  if ( (byte_4CCAF09 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CCAF09 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v4);
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

  if ( (byte_4CCAF0A & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CCAF0A = 1;
  }
  gachaId = this->fields.gachaId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CC3922 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC3922 = 1;
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
  if ( !byte_4CC3920 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    byte_4CC3920 = 1;
  }
  if ( !LODWORD(Instance[2].klass) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  LODWORD(Instance[1].fields.sendData->monitor) = type;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_16:
    sub_1C71608(Instance, method);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *Instance; // x19
  MissionNaviTransitionBoardItem___c_c *v15; // x8
  System_String_o *v16; // x20
  System_String_o *v17; // x21
  System_Action_o *_9__43_1; // x22
  Il2CppObject *v19; // x23
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0

  if ( (byte_4CCAF0B & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C713B0(&Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__43_1__);
    sub_1C713B0(&Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__);
    sub_1C713B0(&Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__2__);
    sub_1C713B0(&MissionNaviTransitionBoardItem___c_TypeInfo);
    sub_1C713B0(&StringLiteral_4981/*"DIALOG_OUT_OF_TERM"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CCAF0B = 1;
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
        v4 = (_QWORD *)sub_1C713C8(Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C71394(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      naviQuestEntity = (MissionListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( naviQuestEntity )
      {
        AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)naviQuestEntity, 1, 0);
        naviQuestEntity = (MissionListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        _9__2 = this->fields.__9__2;
        v7 = (CommonUI_o *)naviQuestEntity;
        if ( !_9__2 )
        {
          _9__2 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          System_Action___ctor(
            _9__2,
            (Il2CppObject *)this,
            Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__2__,
            0);
          this->fields.__9__2 = _9__2;
          sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9, v10, v11, v12, v13);
        }
        if ( v7 )
        {
          CommonUI__CloseMissionNaviTransitionConfirmDialog_31546024(v7, _9__2, 0);
          return;
        }
      }
LABEL_27:
      sub_1C71608(naviQuestEntity, method);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  naviQuestEntity = (MissionListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4981/*"DIALOG_OUT_OF_TERM"*/, 0);
  v15 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v16 = (System_String_o *)naviQuestEntity;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
    v15 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  v17 = (System_String_o *)StringLiteral_1/*""*/;
  _9__43_1 = v15->static_fields->__9__43_1;
  if ( !_9__43_1 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v15->static_fields->__9;
    _9__43_1 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__43_1,
      v19,
      Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__43_1__,
      0);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__43_1 = _9__43_1;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__43_1,
      (int32_t)_9__43_1,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !Instance )
    goto LABEL_27;
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v17, v16, _9__43_1, 500, 0, 0, 0, 1, 0, 0, 0, 0, 0.0, 0, 0);
  v27 = Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__;
  if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__ + 83)
      & 2) != 0 )
    v27 = (_QWORD *)sub_1C713C8(Method_MissionNaviTransitionBoardItem___c__DisplayClass43_0__GetNaviQuestTransitionAction_b__0__);
  v28 = (System_Reflection_MethodBase_o *)sub_1C71394(v27, v27[4]);
  OverwriteAssetSoundName__PlaySystemSe(v28, 2, 0, 0);
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

  if ( (byte_4CCAF0C & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&CommonUI_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CCAF0C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        if ( !byte_4CC3C99 )
        {
          sub_1C713B0(&TerminalPramsManager_TypeInfo);
          byte_4CC3C99 = 1;
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
    if ( !byte_4CC12D2 )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      byte_4CC12D2 = 1;
    }
    v17 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v17 = TerminalPramsManager_TypeInfo;
    }
    v17->static_fields->_IsDirectTransition_k__BackingField = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0) )
  {
LABEL_48:
    sub_1C71608(Instance, v4);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  Il2CppObject *v15; // x19
  MissionNaviTransitionBoardItem___c_c *v16; // x8
  System_String_o *v17; // x20
  System_String_o *v18; // x21
  System_Action_o *_9__44_1; // x22
  Il2CppObject *v20; // x23
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0

  if ( (byte_4CCAF0D & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C713B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C713B0(&Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__44_1__);
    sub_1C713B0(&Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__);
    sub_1C713B0(&Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__2__);
    sub_1C713B0(&MissionNaviTransitionBoardItem___c_TypeInfo);
    sub_1C713B0(&StringLiteral_4981/*"DIALOG_OUT_OF_TERM"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CCAF0D = 1;
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
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
      v5 = (_QWORD *)sub_1C713C8(Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C71394(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    Instance = (QuestTree_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( Instance )
    {
      AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 1, 0);
      Instance = (QuestTree_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      _9__2 = this->fields.__9__2;
      v8 = (CommonUI_o *)Instance;
      if ( !_9__2 )
      {
        _9__2 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__2,
          (Il2CppObject *)this,
          Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__2__,
          0);
        this->fields.__9__2 = _9__2;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10, v11, v12, v13, v14);
      }
      if ( v8 )
      {
        CommonUI__CloseMissionNaviTransitionConfirmDialog_31546024(v8, _9__2, 0);
        return;
      }
    }
LABEL_33:
    sub_1C71608(Instance, method);
  }
LABEL_21:
  v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (QuestTree_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4981/*"DIALOG_OUT_OF_TERM"*/, 0);
  v16 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v17 = (System_String_o *)Instance;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
    v16 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  v18 = (System_String_o *)StringLiteral_1/*""*/;
  _9__44_1 = v16->static_fields->__9__44_1;
  if ( !_9__44_1 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v16->static_fields->__9;
    _9__44_1 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__44_1,
      v20,
      Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__44_1__,
      0);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__44_1 = _9__44_1;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__44_1,
      (int32_t)_9__44_1,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  if ( !v15 )
    goto LABEL_33;
  CommonUI__OpenNotificationDialog((CommonUI_o *)v15, v18, v17, _9__44_1, 500, 0, 0, 0, 1, 0, 0, 0, 0, 0.0, 0, 0);
  v28 = Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__;
  if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__
        + 83)
      & 2) != 0 )
    v28 = (_QWORD *)sub_1C713C8(Method_MissionNaviTransitionBoardItem___c__DisplayClass44_0__GetNaviWarOrSpotTransitionAction_b__0__);
  v29 = (System_Reflection_MethodBase_o *)sub_1C71394(v28, v28[4]);
  OverwriteAssetSoundName__PlaySystemSe(v29, 2, 0, 0);
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
  BalanceConfig_c *v13; // x0
  int32_t OrdealCallWarId; // w19
  struct SpotEntity_o *v15; // x8
  int32_t warId; // w20
  int32_t targetSpotId; // w25
  TerminalPramsManager_c *v18; // x0
  TerminalPramsManager_c *v19; // x0
  bool isMainScenario; // w8
  bool isGrandQuestWar; // w9
  int32_t v22; // w19
  bool v23; // w20
  TerminalPramsManager_c *v24; // x0
  unsigned __int64 v25; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4CCAF0E & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C713B0(&Method_System_Nullable_int___ctor__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C713B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CCAF0E = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
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
      goto LABEL_32;
    goto LABEL_24;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Instance )
    goto LABEL_61;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          this->fields.targetSpotId,
          (const MethodInfo_3408ECC *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__) )
  {
    if ( this->fields.spotEnt )
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      spotEnt = this->fields.spotEnt;
      if ( spotEnt && Instance )
      {
        WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, spotEnt->fields.warId, 0);
        if ( WarInfoByWarID && (Mine = MapControl_WarInfo__GetMine(WarInfoByWarID, 0)) != 0 )
        {
          parentBlankEarthSpotId = Mine->fields.parentBlankEarthSpotId;
          v11 = (System_Nullable_int__o)&v25;
          v25 = 0;
          System_Nullable_int____ctor(
            v11,
            parentBlankEarthSpotId,
            (const MethodInfo_3938D3C *)Method_System_Nullable_int___ctor__);
          v12 = v25;
        }
        else
        {
          v12 = 0;
        }
        if ( !IsBlankEarthWarByWarId && HIDWORD(v12) == 0 )
          goto LABEL_32;
        goto LABEL_24;
      }
LABEL_61:
      sub_1C71608(Instance, v4);
    }
    goto LABEL_20;
  }
LABEL_24:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__ExistBlankEarthTutorial(0) )
  {
    v13 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v13 = BalanceConfig_TypeInfo;
    }
    OrdealCallWarId = v13->static_fields->OrdealCallWarId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__SetAutoResumeByWarId(OrdealCallWarId, 0);
    goto LABEL_58;
  }
LABEL_32:
  if ( this->fields.isSpot )
  {
    v15 = this->fields.spotEnt;
    if ( v15 )
    {
      warId = v15->fields.warId;
      targetSpotId = this->fields.targetSpotId;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4CC3C99 )
      {
        sub_1C713B0(&TerminalPramsManager_TypeInfo);
        byte_4CC3C99 = 1;
      }
      v18 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v18 = TerminalPramsManager_TypeInfo;
      }
      v18->static_fields->_SpotId_k__BackingField = targetSpotId;
      TerminalPramsManager__SetAutoResumeByWarId(warId, 0);
      if ( !byte_4CC12D2 )
      {
        sub_1C713B0(&TerminalPramsManager_TypeInfo);
        byte_4CC12D2 = 1;
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
    isMainScenario = this->fields.isMainScenario;
    isGrandQuestWar = this->fields.isGrandQuestWar;
    v22 = this->fields.targetWarId;
    v23 = isGrandQuestWar || isMainScenario;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( v23 )
      TerminalPramsManager__SetAutoResumeForFolder(v22, 0);
    else
      TerminalPramsManager__SetAutoResumeByWarId(v22, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CC12D2 )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      byte_4CC12D2 = 1;
    }
    v24 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v24 = TerminalPramsManager_TypeInfo;
    }
    v24->static_fields->_IsDirectTransition_k__BackingField = 1;
  }
LABEL_58:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
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
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  Il2CppObject *Instance; // x19
  MissionNaviTransitionBoardItem___c_c *v23; // x8
  System_String_o *v24; // x20
  System_String_o *v25; // x21
  System_Action_o *_9__45_1; // x22
  Il2CppObject *v27; // x23
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  bool v37; // w0
  Il2CppObject *entity; // [xsp+40h] [xbp-60h] BYREF
  int32_t result; // [xsp+4Ch] [xbp-54h] BYREF
  Il2CppObject *v40; // [xsp+50h] [xbp-50h] BYREF
  int32_t key; // [xsp+5Ch] [xbp-44h] BYREF

  if ( (byte_4CCAF0F & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C713B0(&Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__45_1__);
    sub_1C713B0(&Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__);
    sub_1C713B0(&Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__2__);
    sub_1C713B0(&MissionNaviTransitionBoardItem___c_TypeInfo);
    sub_1C713B0(&StringLiteral_4981/*"DIALOG_OUT_OF_TERM"*/);
    sub_1C713B0(&StringLiteral_6239/*"EventReward"*/);
    sub_1C713B0(&StringLiteral_13172/*"Summon"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CCAF0F = 1;
  }
  key = 0;
  v40 = 0;
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
    sub_1C71610(sceneDetail);
  v5 = *(System_String_o **)(sceneDetail + 32);
  v6 = System_String__op_Equality(v5, (System_String_o *)StringLiteral_6239/*"EventReward"*/, 0);
  if ( v6 )
    v7 = v5;
  else
    v7 = 0;
  if ( v6 && ((v8 = *(_DWORD *)(v4 + 24), v8 >= 2) ? (v9 = v7) : (v9 = 0), v8 >= 2) )
  {
    v37 = System_Int32__TryParse(*(System_String_o **)(v4 + 40), &key, 0);
    if ( v37 )
      v5 = v9;
    else
      v5 = 0;
    if ( v37 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      sceneDetail = (__int64)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !sceneDetail )
        goto LABEL_67;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)sceneDetail,
             &v40,
             key,
             (const MethodInfo_3408ECC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        sceneDetail = (__int64)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ShopMaster___);
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
  if ( !System_String__op_Equality(v5, (System_String_o *)StringLiteral_13172/*"Summon"*/, 0) || *(int *)(v4 + 24) < 2 )
    goto LABEL_28;
  System_Int32__TryParse(*(System_String_o **)(v4 + 40), &result, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  sceneDetail = (__int64)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !sceneDetail )
    goto LABEL_67;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)sceneDetail,
          &entity,
          result,
          (const MethodInfo_3408ECC *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__) )
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
        v12 = (_QWORD *)sub_1C713C8(Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__);
      v13 = (System_Reflection_MethodBase_o *)sub_1C71394(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
      sceneDetail = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( sceneDetail )
      {
        AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)sceneDetail, 1, 0);
        sceneDetail = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        _9__2 = this->fields.__9__2;
        v15 = (CommonUI_o *)sceneDetail;
        if ( !_9__2 )
        {
          _9__2 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          System_Action___ctor(
            _9__2,
            (Il2CppObject *)this,
            Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__2__,
            0);
          this->fields.__9__2 = _9__2;
          sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v16, v17, v18, v19, v20, v21);
        }
        if ( v15 )
        {
          CommonUI__CloseMissionNaviTransitionConfirmDialog_31546024(v15, _9__2, 0);
          return;
        }
      }
LABEL_67:
      sub_1C71608(sceneDetail, method);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  sceneDetail = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_4981/*"DIALOG_OUT_OF_TERM"*/, 0);
  v23 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v24 = (System_String_o *)sceneDetail;
  if ( !MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo);
    v23 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  v25 = (System_String_o *)StringLiteral_1/*""*/;
  _9__45_1 = v23->static_fields->__9__45_1;
  if ( !_9__45_1 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v23->static_fields->__9;
    _9__45_1 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__45_1,
      v27,
      Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__45_1__,
      0);
    static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    static_fields->__9__45_1 = _9__45_1;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__45_1,
      (int32_t)_9__45_1,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  if ( !Instance )
    goto LABEL_67;
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v25, v24, _9__45_1, 500, 0, 0, 0, 1, 0, 0, 0, 0, 0.0, 0, 0);
  v35 = Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__;
  if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__ + 83)
      & 2) != 0 )
    v35 = (_QWORD *)sub_1C713C8(Method_MissionNaviTransitionBoardItem___c__DisplayClass45_0__GetNaviSceneTransitionAction_b__0__);
  v36 = (System_Reflection_MethodBase_o *)sub_1C71394(v35, v35[4]);
  OverwriteAssetSoundName__PlaySystemSe(v36, 2, 0, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass45_0___GetNaviSceneTransitionAction_b__2(
        MissionNaviTransitionBoardItem___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CCAF10 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_4CCAF10 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0),
        ActionExtensions__Call(this->fields.transitionSceneAction, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0) )
  {
    sub_1C71608(Instance, v4);
  }
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 0, 0);
}