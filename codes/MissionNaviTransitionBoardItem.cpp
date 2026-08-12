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
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7

  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields._IconName_k__BackingField = iconName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._IconName_k__BackingField,
    (int32_t)iconName,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._Name_k__BackingField = name;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Name_k__BackingField,
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ClosedMessage_k__BackingField,
    (int32_t)closedMessage,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields._NaviAction_k__BackingField = naviAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._NaviAction_k__BackingField,
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
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x8
  System_Action_c *v29; // x0
  System_Action_o *v30; // x19

  if ( (byte_596A0C5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_MissionNaviTransitionBoardItem___c__DisplayClass39_0__GetNaviQuestTransitionAction_b__0__);
    sub_2213A60(&MissionNaviTransitionBoardItem___c__DisplayClass39_0_TypeInfo);
    byte_596A0C5 = 1;
  }
  v7 = sub_2213CCC(MissionNaviTransitionBoardItem___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = naviQuestEntity,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v7 + 16),
          (int32_t)naviQuestEntity,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15),
        *(_QWORD *)(v7 + 24) = tempQuestInfo,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)tempQuestInfo, v16, v17, v18, v19, v20, v21),
        *(_QWORD *)(v7 + 32) = item,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)item, v22, v23, v24, v25, v26, v27),
        (v28 = *(_QWORD *)(v7 + 16)) == 0) )
  {
    sub_2213CDC(v8, v9);
  }
  v29 = System_Action_TypeInfo;
  *(_DWORD *)(v7 + 40) = *(_DWORD *)(v28 + 20);
  v30 = (System_Action_o *)sub_2213CCC(v29);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v7,
    (intptr_t)Method_MissionNaviTransitionBoardItem___c__DisplayClass39_0__GetNaviQuestTransitionAction_b__0__,
    0);
  return v30;
}


System_Action_o *MissionNaviTransitionBoardItem__GetNaviSceneTransitionAction(
        System_String_o *sceneDetail,
        System_Action_o *transitionSceneAction,
        MissionListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Action_o *v28; // x19

  if ( (byte_596A0C7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_MissionNaviTransitionBoardItem___c__DisplayClass41_0__GetNaviSceneTransitionAction_b__0__);
    sub_2213A60(&MissionNaviTransitionBoardItem___c__DisplayClass41_0_TypeInfo);
    byte_596A0C7 = 1;
  }
  v7 = sub_2213CCC(MissionNaviTransitionBoardItem___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 16) = sceneDetail;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)sceneDetail, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = item;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)item, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 32) = transitionSceneAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v7 + 32),
    (int32_t)transitionSceneAction,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v7,
    (intptr_t)Method_MissionNaviTransitionBoardItem___c__DisplayClass41_0__GetNaviSceneTransitionAction_b__0__,
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  void *v14; // x22
  bool v15; // w0
  System_String_o *v16; // x8
  System_String_o *v17; // x1
  const MethodInfo_47A2F30 *v18; // x0
  System_String_o *v19; // x0
  MapControl_SpotInfo_o *SpotInfo; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  MapControl_SpotInfo_o *v33; // x0
  SpotEntity_o *Mine; // x1
  int32_t missionTransitionType; // w8
  System_Action_c *v36; // x0
  System_Action_o *v37; // x19

  if ( (byte_596A0C6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&Method_MissionNaviTransitionBoardItem___c__DisplayClass40_0__GetNaviWarOrSpotTransitionAction_b__0__);
    sub_2213A60(&MissionNaviTransitionBoardItem___c__DisplayClass40_0_TypeInfo);
    sub_2213A60(&StringLiteral_7435/*"Grand"*/);
    sub_2213A60(&StringLiteral_8893/*"MAIN_SCENARIO"*/);
    byte_596A0C6 = 1;
  }
  v5 = sub_2213CCC(MissionNaviTransitionBoardItem___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_25;
  *(_QWORD *)(v5 + 40) = item;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)item, v8, v9, v10, v11, v12, v13);
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
    sub_2213CE4(transitionParam);
  v15 = System_String__op_Equality(*((System_String_o **)transitionParam + 4), (System_String_o *)StringLiteral_7435/*"Grand"*/, 0);
  v16 = naviTransitionEntity->fields.transitionParam;
  v17 = (System_String_o *)StringLiteral_8893/*"MAIN_SCENARIO"*/;
  *(_BYTE *)(v5 + 65) = v15;
  if ( !System_String__op_Equality(v16, v17, 0) )
  {
    if ( *(_BYTE *)(v5 + 65) )
    {
      if ( *((int *)v14 + 6) < 2 )
      {
        transitionParam = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
        sub_2213CDC(transitionParam, v7);
      }
      v19 = (System_String_o *)*((_QWORD *)v14 + 5);
    }
    else
    {
      v19 = naviTransitionEntity->fields.transitionParam;
    }
    System_Int32__TryParse(v19, (int32_t *)(v5 + 36), 0);
    goto LABEL_20;
  }
  v18 = (const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__;
  *(_BYTE *)(v5 + 64) = 1;
  transitionParam = SingletonTemplate_object___get_Instance(v18);
  if ( !transitionParam )
    goto LABEL_25;
  transitionParam = QuestTree__GetLatestProgressWarInfo((QuestTree_o *)transitionParam, 0);
  if ( transitionParam )
    goto LABEL_16;
LABEL_20:
  System_Int32__TryParse(naviTransitionEntity->fields.transitionParam, (int32_t *)(v5 + 48), 0);
  transitionParam = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !transitionParam )
    goto LABEL_25;
  SpotInfo = QuestTree__GetSpotInfo((QuestTree_o *)transitionParam, *(_DWORD *)(v5 + 48), 0);
  *(_QWORD *)(v5 + 24) = SpotInfo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)SpotInfo, v21, v22, v23, v24, v25, v26);
  v33 = *(MapControl_SpotInfo_o **)(v5 + 24);
  if ( v33 )
    Mine = MapControl_SpotInfo__GetMine(v33, 0);
  else
    Mine = 0;
  *(_QWORD *)(v5 + 56) = Mine;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 56), (int32_t)Mine, v27, v28, v29, v30, v31, v32);
  missionTransitionType = naviTransitionEntity->fields.missionTransitionType;
  v36 = System_Action_TypeInfo;
  *(_BYTE *)(v5 + 16) = missionTransitionType == 3;
  *(_BYTE *)(v5 + 32) = missionTransitionType == 2;
  v37 = (System_Action_o *)sub_2213CCC(v36);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v5,
    (intptr_t)Method_MissionNaviTransitionBoardItem___c__DisplayClass40_0__GetNaviWarOrSpotTransitionAction_b__0__,
    0);
  return v37;
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
    sub_2213CDC(0, item);
  transitionParam = missionNaviTransitionEnt->fields.transitionParam;
  MissionNaviTransitionEntity__TryGetChallengeNaviName(missionNaviTransitionEnt, &challengeNaviName, 0);
  MissionNaviTransitionEntity__TryGetChallengeIconName(missionNaviTransitionEnt, &v8, 0);
  return MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem_37515768(
           transitionParam,
           missionNaviTransitionEnt->fields.closedMessageId,
           challengeNaviName,
           v8,
           item,
           v6);
}


// local variable allocation has failed, the output may be wrong!
MissionNaviTransitionBoardItem_o *MissionNaviTransitionBoardItem__SetupSceneTransitionBoardItem_37515768(
        System_String_o *sceneDetail,
        int32_t closedMessageId,
        System_String_o *naviName,
        System_String_o *iconName,
        MissionListViewItem_o *item,
        const MethodInfo *method)
{
  System_String_o *v7; // x21
  int64_t Time; // x0
  System_String_o *closedMessage; // x28
  int v11; // w8
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x8
  System_Action_o *_9__38_0; // x24
  Il2CppObject *v14; // x25
  struct MissionNaviTransitionBoardItem___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int64_t v22; // x25
  System_String_o *v23; // x27
  __int64 v24; // x26
  __int64 v25; // x26
  __int64 v26; // x1
  __int64 v27; // x2
  Il2CppObject *Master_object; // x24
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x24
  int v32; // w8
  int32_t v33; // w25
  char v34; // w23
  System_String_o *v35; // x29
  System_String_o *v36; // x25
  __int64 v37; // x1
  __int64 v38; // x2
  BalanceConfig_c *v39; // x0
  int32_t ClassBoardReleaseQuestId; // w25
  __int64 v41; // x1
  __int64 v42; // x2
  bool IsQuestClear_47284152; // w26
  int v44; // w8
  System_String_o *v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  const MethodInfo *v48; // x3
  MissionNaviTransitionBoardItem___c_c *v49; // x8
  System_String_o *v50; // x25
  struct MissionNaviTransitionBoardItem___c_StaticFields *v51; // x9
  System_Action_o *_9__38_1; // x24
  Il2CppObject *v53; // x27
  struct MissionNaviTransitionBoardItem___c_StaticFields *v54; // x0
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  System_String_o *v61; // x0
  __int64 v62; // x24
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  System_String_o *v69; // x25
  SceneJumpInfo_o *v70; // x27
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  __int64 v77; // x1
  __int64 v78; // x2
  LocalizationManager_c *v79; // x0
  __int64 *v80; // x22
  __int64 *v81; // x25
  System_String_o *v82; // x0
  System_Action_o *v83; // x26
  const MethodInfo *v84; // x3
  System_String_o *v85; // x0
  System_Action_o *v86; // x1
  int32_t v87; // w24
  int v88; // w9
  SceneJumpInfo_o *v89; // x25
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  System_Action_o *_9__38_2; // x24
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x1
  __int64 v100; // x2
  System_String_o *v101; // x0
  __int64 v102; // x1
  __int64 v103; // x2
  MissionNaviTransitionBoardItem___c_c *v104; // x8
  struct MissionNaviTransitionBoardItem___c_StaticFields *v105; // x9
  Il2CppObject *v106; // x26
  System_String_o *v107; // x2
  System_String_o *v108; // x3
  int32_t v109; // w4
  int32_t v110; // w5
  bool v111; // w6
  bool v112; // w7
  struct MissionNaviTransitionBoardItem___c_StaticFields *v113; // x0
  MissionNaviTransitionBoardItem_o *p__9__38_2; // x0
  __int64 v115; // x1
  __int64 v116; // x2
  System_String_o *v117; // x0
  __int64 v118; // x1
  __int64 v119; // x2
  MissionNaviTransitionBoardItem___c_c *v120; // x8
  struct MissionNaviTransitionBoardItem___c_StaticFields *v121; // x9
  Il2CppObject *v122; // x26
  struct MissionNaviTransitionBoardItem___c_StaticFields *v123; // x0
  __int64 v124; // x1
  __int64 v125; // x2
  bool v126; // w22
  __int64 v127; // x1
  __int64 v128; // x2
  MissionNaviTransitionBoardItem_o *v129; // x20
  __int64 v131; // x26
  __int64 v132; // x1
  __int64 v133; // x2
  __int64 v134; // x1
  __int64 v135; // x2
  __int64 v136; // x8
  bool v137; // w0
  int32_t v138; // w27
  SceneJumpInfo_o *v139; // x26
  System_String_o *v140; // x2
  System_String_o *v141; // x3
  int32_t v142; // w4
  int32_t v143; // w5
  bool v144; // w6
  bool v145; // w7
  System_Action_o *v146; // x0
  System_Action_o *v147; // x27
  Il2CppObject *v148; // x1
  intptr_t *v149; // x8
  __int64 v150; // x1
  __int64 v151; // x2
  System_Action_o *v152; // x24
  const MethodInfo *v153; // x3
  __int64 v154; // x8
  __int64 v155; // x1
  __int64 v156; // x2
  Il2CppObject *v157; // x22
  System_String_o *v158; // x0
  const MethodInfo *v159; // [xsp+10h] [xbp-A0h]
  Il2CppObject *v162; // [xsp+28h] [xbp-88h] BYREF
  int32_t v163; // [xsp+34h] [xbp-7Ch] BYREF
  Il2CppObject *v164; // [xsp+38h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+40h] [xbp-70h] BYREF
  int32_t result; // [xsp+4Ch] [xbp-64h] BYREF

  v7 = naviName;
  if ( (byte_596A0C4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ClosedMessageMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_GachaMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ShopMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&MissionNaviTransitionBoardItem_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&SceneJumpInfo_TypeInfo);
    sub_2213A60(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__38_0__);
    sub_2213A60(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__38_1__);
    sub_2213A60(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__38_2__);
    sub_2213A60(&Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__38_4__);
    sub_2213A60(&Method_MissionNaviTransitionBoardItem___c__DisplayClass38_0__SetupSceneTransitionBoardItem_b__3__);
    sub_2213A60(&MissionNaviTransitionBoardItem___c__DisplayClass38_0_TypeInfo);
    sub_2213A60(&Method_MissionNaviTransitionBoardItem___c__DisplayClass38_1__SetupSceneTransitionBoardItem_b__5__);
    sub_2213A60(&MissionNaviTransitionBoardItem___c__DisplayClass38_1_TypeInfo);
    sub_2213A60(&Method_MissionNaviTransitionBoardItem___c__DisplayClass38_2__SetupSceneTransitionBoardItem_b__6__);
    sub_2213A60(&MissionNaviTransitionBoardItem___c__DisplayClass38_2_TypeInfo);
    sub_2213A60(&Method_MissionNaviTransitionBoardItem___c__DisplayClass38_3__SetupSceneTransitionBoardItem_b__7__);
    sub_2213A60(&MissionNaviTransitionBoardItem___c__DisplayClass38_3_TypeInfo);
    sub_2213A60(&Method_MissionNaviTransitionBoardItem___c__DisplayClass38_4__SetupSceneTransitionBoardItem_b__8__);
    sub_2213A60(&MissionNaviTransitionBoardItem___c__DisplayClass38_4_TypeInfo);
    sub_2213A60(&MissionNaviTransitionBoardItem___c_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_24527/*"servant_eq_combine"*/);
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_24675/*"shop_event"*/);
    sub_2213A60(&StringLiteral_13282/*"ServantSkillCombine"*/);
    sub_2213A60(&StringLiteral_9063/*"MISSION_NAVI_NOT_OPEN_BOARD"*/);
    sub_2213A60(&StringLiteral_6835/*"FRIEND_POINT"*/);
    sub_2213A60(&StringLiteral_4739/*"Combine"*/);
    sub_2213A60(&StringLiteral_4612/*"ClassBoard"*/);
    sub_2213A60(&StringLiteral_18785/*"class_board"*/);
    sub_2213A60(&StringLiteral_23262/*"my_room"*/);
    sub_2213A60(&StringLiteral_9070/*"MISSION_NAVI_SERVANT_SKILL_COMBINE"*/);
    sub_2213A60(&StringLiteral_24530/*"servant_skill_combine"*/);
    sub_2213A60(&StringLiteral_9068/*"MISSION_NAVI_SERVANT_EQ_COMBINE"*/);
    sub_2213A60(&StringLiteral_6511/*"EventReward"*/);
    sub_2213A60(&StringLiteral_9072/*"MISSION_NAVI_SUMMON_FRIEND_POINT"*/);
    sub_2213A60(&StringLiteral_9057/*"MISSION_NAVI_EVENT_REWARD"*/);
    sub_2213A60(&StringLiteral_9061/*"MISSION_NAVI_MYROOM"*/);
    sub_2213A60(&StringLiteral_24526/*"servant_combine"*/);
    sub_2213A60(&StringLiteral_9069/*"MISSION_NAVI_SERVANT_LIMIT_COUNT_UP"*/);
    sub_2213A60(&StringLiteral_25094/*"summon"*/);
    sub_2213A60(&StringLiteral_9064/*"MISSION_NAVI_NOT_OPEN_CLASS_BOARD_CLOSED_MESSAGE"*/);
    sub_2213A60(&StringLiteral_9067/*"MISSION_NAVI_SERVANT_COMBINE"*/);
    sub_2213A60(&StringLiteral_24529/*"servant_limit_count_up"*/);
    sub_2213A60(&StringLiteral_20599/*"friend"*/);
    sub_2213A60(&StringLiteral_7163/*"Friend"*/);
    sub_2213A60(&StringLiteral_13719/*"Summon"*/);
    sub_2213A60(&StringLiteral_13266/*"ServantEQCombine"*/);
    sub_2213A60(&StringLiteral_13262/*"ServantCombine"*/);
    sub_2213A60(&StringLiteral_9597/*"MyRoom"*/);
    sub_2213A60(&StringLiteral_9049/*"MISSION_NAVI_CLASS_BOARD"*/);
    sub_2213A60(&StringLiteral_13276/*"ServantLimitCountUp"*/);
    sub_2213A60(&StringLiteral_9071/*"MISSION_NAVI_SUMMON"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_25100/*"summon_friend"*/);
    sub_2213A60(&StringLiteral_9059/*"MISSION_NAVI_FRIEND_AND_FOLLOW"*/);
    byte_596A0C4 = 1;
  }
  Time = (int64_t)MissionNaviTransitionBoardItem___c_TypeInfo;
  closedMessage = (System_String_o *)StringLiteral_1/*""*/;
  result = 0;
  v164 = 0;
  entity = 0;
  v11 = *(&MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished + 1);
  v163 = 0;
  v162 = 0;
  if ( !v11 )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo, *(_QWORD *)&closedMessageId, naviName);
    Time = (int64_t)MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  static_fields = *(struct MissionNaviTransitionBoardItem___c_StaticFields **)(Time + 184);
  _9__38_0 = static_fields->__9__38_0;
  if ( !_9__38_0 )
  {
    if ( !*(_DWORD *)(Time + 228) )
    {
      j_il2cpp_runtime_class_init_0(Time, *(_QWORD *)&closedMessageId, naviName);
      static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__38_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__38_0,
      v14,
      Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__38_0__,
      0);
    v15 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    v15->__9__38_0 = _9__38_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->__9__38_0, (int32_t)_9__38_0, v16, v17, v18, v19, v20, v21);
  }
  if ( !sceneDetail )
    goto LABEL_149;
  Time = (int64_t)System_String__Split(sceneDetail, 0x2Fu, 0, 0);
  if ( !Time )
    goto LABEL_149;
  v22 = Time;
  if ( !*(_DWORD *)(Time + 24) )
    goto LABEL_150;
  v23 = *(System_String_o **)(Time + 32);
  v24 = sub_2213CCC(MissionNaviTransitionBoardItem___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0);
  if ( System_String__op_Equality(v23, (System_String_o *)StringLiteral_6511/*"EventReward"*/, 0) )
  {
    if ( *(int *)(v22 + 24) < 2 )
      goto LABEL_35;
    v25 = sub_2213CCC(MissionNaviTransitionBoardItem___c__DisplayClass38_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v25, 0);
    if ( (*(_DWORD *)(v22 + 24) & 0xFFFFFFFE) != 0 )
    {
      if ( !v25 )
        goto LABEL_149;
      if ( System_Int32__TryParse(*(System_String_o **)(v22 + 40), (int32_t *)(v25 + 16), 0) )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v26, v27);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventDetailMaster___);
        Time = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !Time )
          goto LABEL_149;
        Time = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                 &entity,
                 *(_DWORD *)(v25 + 16),
                 (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
        if ( (Time & 1) != 0 )
        {
          if ( !Master_object )
            goto LABEL_149;
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 &v164,
                 *(_DWORD *)(v25 + 16),
                 (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
          {
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29, v30);
            Time = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopMaster___);
            if ( !Time )
              goto LABEL_149;
            if ( ShopMaster__IsEventShopOpen((ShopMaster_o *)Time, *(_DWORD *)(v25 + 16), 0) )
            {
              Time = (int64_t)v164;
              if ( !v164 )
                goto LABEL_149;
              if ( EventDetailEntity__IsReward((EventDetailEntity_o *)v164, 0) )
                goto LABEL_31;
              Time = (int64_t)v164;
              if ( !v164 )
                goto LABEL_149;
              if ( EventDetailEntity__IsEventShop((EventDetailEntity_o *)v164, 0) )
              {
LABEL_31:
                v31 = sub_2213CCC(MissionNaviTransitionBoardItem___c__DisplayClass38_2_TypeInfo);
                System_Object___ctor((Il2CppObject *)v31, 0);
                v32 = *(_DWORD *)(v22 + 24);
                v163 = 0;
                if ( v32 >= 3 )
                {
                  System_Int32__TryParse(*(System_String_o **)(v22 + 48), &v163, 0);
                  v33 = v163 + 1;
                }
                else
                {
                  v33 = 1;
                }
                v138 = *(_DWORD *)(v25 + 16);
                v139 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
                SceneJumpInfo___ctor_48464976(v139, (System_String_o *)StringLiteral_1/*""*/, v138, v33, 0);
                if ( !v31 )
                  goto LABEL_149;
                *(_QWORD *)(v31 + 16) = v139;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)(v31 + 16),
                  (int32_t)v139,
                  v140,
                  v141,
                  v142,
                  v143,
                  v144,
                  v145);
                v146 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                v147 = v146;
                v148 = (Il2CppObject *)v31;
                v149 = &Method_MissionNaviTransitionBoardItem___c__DisplayClass38_2__SetupSceneTransitionBoardItem_b__6__;
              }
              else
              {
                Time = (int64_t)v164;
                if ( !v164 )
                  goto LABEL_149;
                v147 = 0;
                if ( !EventDetailEntity__IsExchangeShop((EventDetailEntity_o *)v164, 0) )
                  goto LABEL_138;
                v146 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                v147 = v146;
                v148 = (Il2CppObject *)v25;
                v149 = &Method_MissionNaviTransitionBoardItem___c__DisplayClass38_1__SetupSceneTransitionBoardItem_b__5__;
              }
              System_Action___ctor(v146, v148, *v149, 0);
LABEL_138:
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v150, v151);
              v36 = LocalizationManager__Get((System_String_o *)StringLiteral_9057/*"MISSION_NAVI_EVENT_REWARD"*/, 0);
              v85 = sceneDetail;
              v86 = v147;
              v35 = (System_String_o *)StringLiteral_24675/*"shop_event"*/;
              goto LABEL_98;
            }
          }
        }
        _9__38_0 = 0;
        v34 = 1;
        goto LABEL_36;
      }
LABEL_35:
      v34 = 0;
LABEL_36:
      v35 = closedMessage;
      goto LABEL_37;
    }
LABEL_150:
    sub_2213CE4(Time);
  }
  if ( System_String__op_Equality(v23, (System_String_o *)StringLiteral_4739/*"Combine"*/, 0) )
  {
    if ( *(int *)(v22 + 24) < 2 )
      goto LABEL_35;
    v62 = sub_2213CCC(MissionNaviTransitionBoardItem___c__DisplayClass38_3_TypeInfo);
    System_Object___ctor((Il2CppObject *)v62, 0);
    if ( (*(_DWORD *)(v22 + 24) & 0xFFFFFFFE) == 0 )
      goto LABEL_150;
    if ( !v62 )
      goto LABEL_149;
    v69 = *(System_String_o **)(v22 + 40);
    *(_QWORD *)(v62 + 16) = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v62 + 16), 0, v63, v64, v65, v66, v67, v68);
    v70 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_48464828(v70, v69, 0);
    *(_QWORD *)(v62 + 16) = v70;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v62 + 16), (int32_t)v70, v71, v72, v73, v74, v75, v76);
    if ( System_String__op_Equality(v69, (System_String_o *)StringLiteral_13262/*"ServantCombine"*/, 0) )
    {
      v79 = LocalizationManager_TypeInfo;
      v80 = &StringLiteral_24526/*"servant_combine"*/;
      v81 = &StringLiteral_9067/*"MISSION_NAVI_SERVANT_COMBINE"*/;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_57;
    }
    else
    {
      if ( System_String__op_Equality(v69, (System_String_o *)StringLiteral_13282/*"ServantSkillCombine"*/, 0) )
      {
        v79 = LocalizationManager_TypeInfo;
        v80 = &StringLiteral_24530/*"servant_skill_combine"*/;
        v81 = &StringLiteral_9070/*"MISSION_NAVI_SERVANT_SKILL_COMBINE"*/;
        if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          goto LABEL_58;
        goto LABEL_57;
      }
      if ( System_String__op_Equality(v69, (System_String_o *)StringLiteral_13266/*"ServantEQCombine"*/, 0) )
      {
        v79 = LocalizationManager_TypeInfo;
        v80 = &StringLiteral_24527/*"servant_eq_combine"*/;
        v81 = &StringLiteral_9068/*"MISSION_NAVI_SERVANT_EQ_COMBINE"*/;
        if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          goto LABEL_58;
        goto LABEL_57;
      }
      v137 = System_String__op_Equality(v69, (System_String_o *)StringLiteral_13276/*"ServantLimitCountUp"*/, 0);
      v35 = closedMessage;
      v36 = closedMessage;
      if ( !v137 )
        goto LABEL_59;
      v79 = LocalizationManager_TypeInfo;
      v80 = &StringLiteral_24529/*"servant_limit_count_up"*/;
      v81 = &StringLiteral_9069/*"MISSION_NAVI_SERVANT_LIMIT_COUNT_UP"*/;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
LABEL_57:
        j_il2cpp_runtime_class_init_0(v79, v77, v78);
    }
LABEL_58:
    v82 = LocalizationManager__Get((System_String_o *)*v81, 0);
    v35 = (System_String_o *)*v80;
    v36 = v82;
LABEL_59:
    v83 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v83,
      (Il2CppObject *)v62,
      Method_MissionNaviTransitionBoardItem___c__DisplayClass38_3__SetupSceneTransitionBoardItem_b__7__,
      0);
    v85 = sceneDetail;
    v86 = v83;
LABEL_98:
    _9__38_0 = MissionNaviTransitionBoardItem__GetNaviSceneTransitionAction(v85, v86, item, v84);
LABEL_99:
    v34 = 0;
    goto LABEL_100;
  }
  if ( !System_String__op_Equality(v23, (System_String_o *)StringLiteral_4612/*"ClassBoard"*/, 0) )
  {
    if ( System_String__op_Equality(v23, (System_String_o *)StringLiteral_13719/*"Summon"*/, 0) )
    {
      v35 = (System_String_o *)StringLiteral_25094/*"summon"*/;
      if ( *(int *)(v22 + 24) < 2 )
        goto LABEL_62;
      if ( !System_String__op_Equality(*(System_String_o **)(v22 + 40), (System_String_o *)StringLiteral_6835/*"FRIEND_POINT"*/, 0) )
      {
        if ( *(int *)(v22 + 24) >= 2 )
        {
          v131 = sub_2213CCC(MissionNaviTransitionBoardItem___c__DisplayClass38_4_TypeInfo);
          System_Object___ctor((Il2CppObject *)v131, 0);
          if ( (*(_DWORD *)(v22 + 24) & 0xFFFFFFFE) == 0 )
            goto LABEL_150;
          if ( !v131 )
            goto LABEL_149;
          System_Int32__TryParse(*(System_String_o **)(v22 + 40), (int32_t *)(v131 + 16), 0);
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v132, v133);
          Time = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaMaster___);
          if ( !Time )
            goto LABEL_149;
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                 (Il2CppObject **)(v131 + 24),
                 *(_DWORD *)(v131 + 16),
                 (const MethodInfo_3F10B80 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__) )
          {
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v134, v135);
            Time = NetworkManager__getTime(0);
            v136 = *(_QWORD *)(v131 + 24);
            if ( !v136 )
              goto LABEL_149;
            if ( Time >= *(_QWORD *)(v136 + 104) && Time <= *(_QWORD *)(v136 + 112) )
            {
              v152 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
              System_Action___ctor(
                v152,
                (Il2CppObject *)v131,
                Method_MissionNaviTransitionBoardItem___c__DisplayClass38_4__SetupSceneTransitionBoardItem_b__8__,
                0);
              Time = (int64_t)MissionNaviTransitionBoardItem__GetNaviSceneTransitionAction(
                                sceneDetail,
                                v152,
                                item,
                                v153);
              v154 = *(_QWORD *)(v131 + 24);
              if ( !v154 )
                goto LABEL_149;
              _9__38_0 = (System_Action_o *)Time;
              Time = *(_QWORD *)(v154 + 24);
              if ( !Time )
                goto LABEL_149;
              v157 = (Il2CppObject *)System_String__Replace_75703400(
                                       (System_String_o *)Time,
                                       (System_String_o *)StringLiteral_43/*"\n"*/,
                                       (System_String_o *)StringLiteral_113/*" "*/,
                                       0);
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v155, v156);
              v158 = LocalizationManager__Get((System_String_o *)StringLiteral_9071/*"MISSION_NAVI_SUMMON"*/, 0);
              v36 = System_String__Format(v158, v157, 0);
              goto LABEL_99;
            }
            _9__38_0 = 0;
            v34 = 1;
LABEL_37:
            v36 = closedMessage;
            goto LABEL_100;
          }
        }
LABEL_62:
        v34 = 0;
        goto LABEL_37;
      }
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v99, v100);
      v101 = LocalizationManager__Get((System_String_o *)StringLiteral_9072/*"MISSION_NAVI_SUMMON_FRIEND_POINT"*/, 0);
      v104 = MissionNaviTransitionBoardItem___c_TypeInfo;
      v36 = v101;
      v35 = (System_String_o *)StringLiteral_25100/*"summon_friend"*/;
      if ( !*(&MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo, v102, v103);
        v104 = MissionNaviTransitionBoardItem___c_TypeInfo;
      }
      v105 = v104->static_fields;
      _9__38_2 = v105->__9__38_2;
      if ( _9__38_2 )
      {
LABEL_97:
        v85 = sceneDetail;
        v86 = _9__38_2;
        goto LABEL_98;
      }
      if ( !*(&v104->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v104, v102, v103);
        v105 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
      }
      v106 = (Il2CppObject *)v105->__9;
      _9__38_2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__38_2,
        v106,
        Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__38_2__,
        0);
      v113 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
      v113->__9__38_2 = _9__38_2;
      p__9__38_2 = (MissionNaviTransitionBoardItem_o *)&v113->__9__38_2;
    }
    else
    {
      if ( System_String__op_Equality(v23, (System_String_o *)StringLiteral_7163/*"Friend"*/, 0) )
      {
        v87 = 0;
        v88 = *(_DWORD *)(v22 + 24);
        result = 0;
        v35 = (System_String_o *)StringLiteral_20599/*"friend"*/;
        if ( v88 >= 2 )
        {
          System_Int32__TryParse(*(System_String_o **)(v22 + 40), &result, 0);
          v87 = result;
        }
        v89 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_48464876(v89, v87, 0);
        if ( !v24 )
          goto LABEL_149;
        *(_QWORD *)(v24 + 16) = v89;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 16), (int32_t)v89, v90, v91, v92, v93, v94, v95);
        _9__38_2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__38_2,
          (Il2CppObject *)v24,
          Method_MissionNaviTransitionBoardItem___c__DisplayClass38_0__SetupSceneTransitionBoardItem_b__3__,
          0);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v97, v98);
        v36 = LocalizationManager__Get((System_String_o *)StringLiteral_9059/*"MISSION_NAVI_FRIEND_AND_FOLLOW"*/, 0);
        goto LABEL_97;
      }
      if ( !System_String__op_Equality(v23, (System_String_o *)StringLiteral_9597/*"MyRoom"*/, 0) )
        goto LABEL_35;
      v35 = (System_String_o *)StringLiteral_23262/*"my_room"*/;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v115, v116);
      v117 = LocalizationManager__Get((System_String_o *)StringLiteral_9061/*"MISSION_NAVI_MYROOM"*/, 0);
      v120 = MissionNaviTransitionBoardItem___c_TypeInfo;
      v36 = v117;
      if ( !*(&MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo, v118, v119);
        v120 = MissionNaviTransitionBoardItem___c_TypeInfo;
      }
      v121 = v120->static_fields;
      _9__38_2 = v121->__9__38_4;
      if ( _9__38_2 )
        goto LABEL_97;
      if ( !*(&v120->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v120, v118, v119);
        v121 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
      }
      v122 = (Il2CppObject *)v121->__9;
      _9__38_2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__38_2,
        v122,
        Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__38_4__,
        0);
      v123 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
      v123->__9__38_4 = _9__38_2;
      p__9__38_2 = (MissionNaviTransitionBoardItem_o *)&v123->__9__38_4;
    }
    sub_2213A04(p__9__38_2, (int32_t)_9__38_2, v107, v108, v109, v110, v111, v112);
    goto LABEL_97;
  }
  v39 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v37, v38);
    v39 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v39->static_fields->ClassBoardReleaseQuestId;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v37, v38);
  IsQuestClear_47284152 = CondType__IsQuestClear_47284152(ClassBoardReleaseQuestId, -1, 0, 0);
  v44 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( IsQuestClear_47284152 )
  {
    if ( !v44 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41, v42);
    v45 = LocalizationManager__Get((System_String_o *)StringLiteral_9049/*"MISSION_NAVI_CLASS_BOARD"*/, 0);
    v49 = MissionNaviTransitionBoardItem___c_TypeInfo;
    v50 = v45;
    if ( !*(&MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo, v46, v47);
      v49 = MissionNaviTransitionBoardItem___c_TypeInfo;
    }
    v51 = v49->static_fields;
    _9__38_1 = v51->__9__38_1;
    if ( !_9__38_1 )
    {
      if ( !*(&v49->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v49, v46, v47);
        v51 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
      }
      v53 = (Il2CppObject *)v51->__9;
      _9__38_1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__38_1,
        v53,
        Method_MissionNaviTransitionBoardItem___c__SetupSceneTransitionBoardItem_b__38_1__,
        0);
      v54 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
      v54->__9__38_1 = _9__38_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v54->__9__38_1, (int32_t)_9__38_1, v55, v56, v57, v58, v59, v60);
    }
    _9__38_0 = MissionNaviTransitionBoardItem__GetNaviSceneTransitionAction(sceneDetail, _9__38_1, item, v48);
    v61 = closedMessage;
    closedMessage = v50;
  }
  else
  {
    if ( !v44 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41, v42);
    v61 = LocalizationManager__Get((System_String_o *)StringLiteral_9064/*"MISSION_NAVI_NOT_OPEN_CLASS_BOARD_CLOSED_MESSAGE"*/, 0);
  }
  v36 = closedMessage;
  v34 = !IsQuestClear_47284152;
  closedMessage = v61;
  v35 = (System_String_o *)StringLiteral_18785/*"class_board"*/;
LABEL_100:
  if ( !System_String__op_Inequality(v7, (System_String_o *)StringLiteral_1/*""*/, 0) )
    v7 = v36;
  v126 = System_String__op_Inequality(iconName, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( (v34 & 1) != 0 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v124, v125);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9063/*"MISSION_NAVI_NOT_OPEN_BOARD"*/, 0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v127, v128);
    Time = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClosedMessageMaster___);
    if ( closedMessageId )
    {
      if ( Time )
      {
        Time = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                 &v162,
                 closedMessageId,
                 (const MethodInfo_3F10B80 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
        if ( (Time & 1) == 0 )
          goto LABEL_112;
        if ( v162 )
        {
          closedMessage = (System_String_o *)v162[1].monitor;
          goto LABEL_112;
        }
      }
LABEL_149:
      sub_2213CDC(Time, *(_QWORD *)&closedMessageId);
    }
  }
LABEL_112:
  if ( !v126 )
    iconName = v35;
  v129 = (MissionNaviTransitionBoardItem_o *)sub_2213CCC(MissionNaviTransitionBoardItem_TypeInfo);
  MissionNaviTransitionBoardItem___ctor(v129, 0, iconName, v7, 0, 0, 0, v34 & 1, closedMessage, _9__38_0, v159);
  return v129;
}


bool MissionNaviTransitionBoardItem__TrySetupQuestListTransitionBoardItem(
        MissionNaviTransitionEntity_o *missionNaviTransitionEntity,
        MissionListViewItem_o *item,
        System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **challengeBoardList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x22
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  void *transitionParam; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  int v17; // w8
  void *v18; // x25
  unsigned int v19; // w19
  MissionNaviQuestEntity_o *v20; // x24
  int32_t questId; // w23
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v23; // x26
  __int64 v24; // x1
  __int64 v25; // x2
  const MethodInfo *v26; // x3
  bool v27; // w21
  System_Action_o *NaviQuestTransitionAction; // x0
  System_ValueTuple_string__string__o closedMessage; // kr00_16
  int32_t size; // w22
  System_String_o *v31; // x29
  bool HasFlag; // w20
  MissionNaviTransitionBoardItem_o *v33; // x24
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  __int64 v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  __int64 v43; // x8
  const MethodInfo *v45; // [xsp+10h] [xbp-90h]
  bool v47; // [xsp+24h] [xbp-7Ch]
  System_Action_o *v48; // [xsp+28h] [xbp-78h]
  System_String_o *challengeIconName; // [xsp+30h] [xbp-70h] BYREF
  int32_t result; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_596A0C1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_MissionNaviQuestMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
    sub_2213A60(&MissionNaviTransitionBoardItem_TypeInfo);
    sub_2213A60(&MissionNaviTransitionConfirmDialog_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_596A0C1 = 1;
  }
  result = 0;
  challengeIconName = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *challengeBoardList = (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o *)v6;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)challengeBoardList, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  if ( !missionNaviTransitionEntity )
    goto LABEL_34;
  if ( System_String__IsNullOrEmpty(missionNaviTransitionEntity->fields.transitionParam, 0) )
    return 0;
  transitionParam = missionNaviTransitionEntity->fields.transitionParam;
  if ( !transitionParam )
    goto LABEL_34;
  transitionParam = System_String__Split((System_String_o *)transitionParam, 0x2Fu, 0, 0);
  if ( !transitionParam )
    goto LABEL_34;
  if ( !*((_DWORD *)transitionParam + 6) )
    goto LABEL_35;
  if ( !System_Int32__TryParse(*((System_String_o **)transitionParam + 4), &result, 0) )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15, v16);
  transitionParam = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_MissionNaviQuestMaster___);
  if ( !transitionParam
    || (transitionParam = MissionNaviQuestMaster__GetOpenQuestByNaviQuestMasterId(
                            (MissionNaviQuestMaster_o *)transitionParam,
                            result,
                            0)) == 0 )
  {
LABEL_34:
    sub_2213CDC(transitionParam, v14);
  }
  v17 = *((_DWORD *)transitionParam + 6);
  v18 = transitionParam;
  if ( v17 >= 1 )
  {
    v19 = 0;
    while ( v19 < v17 )
    {
      v20 = (MissionNaviQuestEntity_o *)*((_QWORD *)v18 + (int)v19 + 4);
      if ( !v20 )
        goto LABEL_34;
      questId = v20->fields.questId;
      transitionParam = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !transitionParam )
        goto LABEL_34;
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)transitionParam, questId, 0);
      v47 = QuestInfo != 0;
      if ( !QuestInfo )
        return v47;
      v23 = QuestInfo;
      v27 = !MissionNaviQuestEntity__IsNaviBoardOpen(v20, QuestInfo, 0);
      NaviQuestTransitionAction = 0;
      if ( !v27 )
        NaviQuestTransitionAction = MissionNaviTransitionBoardItem__GetNaviQuestTransitionAction(v20, v23, item, v26);
      v48 = NaviQuestTransitionAction;
      if ( !*(&MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo, v24, v25);
      closedMessage = MissionNaviTransitionConfirmDialog__GetQuestNaviNameAndClosedMessage(v20, v23, v27, v26);
      transitionParam = (void *)MissionNaviQuestEntity__TryGetChallengeIconName(v20, &challengeIconName, 0);
      if ( !*challengeBoardList )
        goto LABEL_34;
      size = (*challengeBoardList)->fields._size;
      v31 = challengeIconName;
      HasFlag = MissionNaviQuestEntity__HasFlag(v20, 2, 0);
      v33 = (MissionNaviTransitionBoardItem_o *)sub_2213CCC(MissionNaviTransitionBoardItem_TypeInfo);
      MissionNaviTransitionBoardItem___ctor(
        v33,
        size,
        v31,
        closedMessage.fields.Item1,
        1,
        questId,
        HasFlag,
        v27,
        closedMessage.fields.Item2,
        v48,
        v45);
      transitionParam = *challengeBoardList;
      if ( !*challengeBoardList )
        goto LABEL_34;
      v40 = *((_QWORD *)transitionParam + 2);
      v41 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__;
      ++*((_DWORD *)transitionParam + 7);
      if ( !v40 )
        goto LABEL_34;
      v42 = *((int *)transitionParam + 6);
      if ( (unsigned int)v42 >= *(_DWORD *)(v40 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)transitionParam,
          (Il2CppObject *)v33,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = v40 + 8 * v42;
        *((_DWORD *)transitionParam + 6) = v42 + 1;
        *(_QWORD *)(v43 + 32) = v33;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 32), (int32_t)v33, v34, v35, v36, v37, v38, v39);
      }
      v17 = *((_DWORD *)v18 + 6);
      if ( (int)++v19 >= v17 )
        return v47;
    }
LABEL_35:
    sub_2213CE4(transitionParam);
  }
  return 1;
}


bool MissionNaviTransitionBoardItem__TrySetupSpotTransitionBoardItem(
        MissionNaviTransitionEntity_o *missionNaviTransitionEntity,
        MissionListViewItem_o *item,
        System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **challengeBoardList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  QuestTree_o *Instance; // x0
  __int64 v15; // x1
  MapControl_SpotInfo_o *SpotInfo; // x0
  MapControl_SpotInfo_o *v17; // x20
  SpotEntity_o *Mine; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x3
  int32_t dispType; // w27
  SpotEntity_o *v23; // x25
  System_Action_o *NaviWarOrSpotTransitionAction; // x23
  System_ValueTuple_string__string__o closedMessage; // kr00_16
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  const MethodInfo *v27; // x1
  System_String_o *IconNameByWarInfo; // x25
  MissionNaviTransitionBoardItem_o *v29; // x21
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct MapControl_RootInfo_o *mapControlRootInfo; // x8
  _QWORD *v37; // x9
  __int64 allQuestInfoList_low; // x10
  __int64 v39; // x8
  const MethodInfo *v41; // [xsp+10h] [xbp-70h]
  System_String_o *challengeIconName; // [xsp+20h] [xbp-60h] BYREF
  int32_t result; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_596A0C3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
    sub_2213A60(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
    sub_2213A60(&MissionNaviTransitionBoardItem_TypeInfo);
    sub_2213A60(&MissionNaviTransitionConfirmDialog_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_596A0C3 = 1;
  }
  result = 0;
  challengeIconName = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *challengeBoardList = (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o *)v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)challengeBoardList, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  if ( !missionNaviTransitionEntity )
    goto LABEL_21;
  System_Int32__TryParse(missionNaviTransitionEntity->fields.transitionParam, &result, 0);
  Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  SpotInfo = QuestTree__GetSpotInfo(Instance, result, 0);
  v17 = SpotInfo;
  if ( !SpotInfo )
    return v17 != 0;
  Mine = MapControl_SpotInfo__GetMine(SpotInfo, 0);
  dispType = v17->fields.dispType;
  v23 = Mine;
  NaviWarOrSpotTransitionAction = 0;
  if ( dispType == 1 )
    NaviWarOrSpotTransitionAction = MissionNaviTransitionBoardItem__GetNaviWarOrSpotTransitionAction(
                                      missionNaviTransitionEntity,
                                      item,
                                      v20);
  if ( !*(&MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo, v19, v20);
  closedMessage = MissionNaviTransitionConfirmDialog__GetSpotNaviNameAndClosedMessage(
                    missionNaviTransitionEntity,
                    v17,
                    dispType != 1,
                    v21);
  if ( MissionNaviTransitionEntity__TryGetChallengeIconName(missionNaviTransitionEntity, &challengeIconName, 0) || !v23 )
  {
    IconNameByWarInfo = challengeIconName;
  }
  else
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(Instance, v23->fields.warId, 0);
    IconNameByWarInfo = MissionNaviTransitionBoardItemDraw__GetIconNameByWarInfo(WarInfoByWarID, v27);
    challengeIconName = IconNameByWarInfo;
  }
  v29 = (MissionNaviTransitionBoardItem_o *)sub_2213CCC(MissionNaviTransitionBoardItem_TypeInfo);
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
LABEL_21:
    sub_2213CDC(Instance, v15);
  }
  allQuestInfoList_low = SLODWORD(Instance->fields.allQuestInfoList);
  if ( (unsigned int)allQuestInfoList_low >= LODWORD(mapControlRootInfo[1].klass) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v29,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = (__int64)mapControlRootInfo + 8 * allQuestInfoList_low;
    LODWORD(Instance->fields.allQuestInfoList) = allQuestInfoList_low + 1;
    *(_QWORD *)(v39 + 32) = v29;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v39 + 32), (int32_t)v29, v30, v31, v32, v33, v34, v35);
  }
  return v17 != 0;
}


bool MissionNaviTransitionBoardItem__TrySetupWarTransitionBoardItem(
        MissionNaviTransitionEntity_o *missionNaviTransitionEntity,
        MissionListViewItem_o *item,
        System_Collections_Generic_List_MissionNaviTransitionBoardItem__o **challengeBoardList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o **Instance; // x0
  __int64 v15; // x1
  char v16; // w22
  System_String_o **v17; // x23
  bool v18; // w0
  MapControl_WarInfo_o *LatestProgressWarInfo; // x0
  MapControl_WarInfo_o *v20; // x22
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x3
  System_Action_o *NaviWarOrSpotTransitionAction; // x21
  bool v25; // w23
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  bool IsActiveWar; // w0
  System_ValueTuple_string__string__o closedMessage; // kr00_16
  const MethodInfo *v29; // x1
  System_String_o *IconNameByWarInfo; // x22
  MissionNaviTransitionBoardItem_o *v31; // x20
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_String_o *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x8
  const MethodInfo *v43; // [xsp+10h] [xbp-60h]
  int32_t result[2]; // [xsp+18h] [xbp-58h] BYREF
  System_String_o *challengeIconName; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_596A0C2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
    sub_2213A60(&System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
    sub_2213A60(&MissionNaviTransitionBoardItem_TypeInfo);
    sub_2213A60(&MissionNaviTransitionConfirmDialog_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&StringLiteral_7435/*"Grand"*/);
    sub_2213A60(&StringLiteral_8893/*"MAIN_SCENARIO"*/);
    byte_596A0C2 = 1;
  }
  challengeIconName = 0;
  *(_QWORD *)result = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MissionNaviTransitionBoardItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem___ctor__);
  *challengeBoardList = (System_Collections_Generic_List_MissionNaviTransitionBoardItem__o *)v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)challengeBoardList, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  if ( !missionNaviTransitionEntity )
    goto LABEL_40;
  Instance = (System_String_o **)System_String__op_Equality(
                                   missionNaviTransitionEntity->fields.transitionParam,
                                   (System_String_o *)StringLiteral_8893/*"MAIN_SCENARIO"*/,
                                   0);
  if ( !missionNaviTransitionEntity->fields.transitionParam )
    goto LABEL_40;
  v16 = (char)Instance;
  Instance = (System_String_o **)System_String__Split(missionNaviTransitionEntity->fields.transitionParam, 0x2Fu, 0, 0);
  if ( !Instance )
    goto LABEL_40;
  v17 = Instance;
  if ( !*((_DWORD *)Instance + 6) )
    sub_2213CE4(Instance);
  v18 = System_String__op_Equality(Instance[4], (System_String_o *)StringLiteral_7435/*"Grand"*/, 0);
  if ( (v16 & 1) != 0 )
  {
    Instance = (System_String_o **)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
      Instance = (System_String_o **)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        goto LABEL_40;
      WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, result[1], 0);
    }
    else
    {
      Instance = (System_String_o **)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        goto LABEL_40;
      WarInfoByWarID = QuestTree__GetLatestGrandWarInfo((QuestTree_o *)Instance, 0);
    }
    v20 = WarInfoByWarID;
    Instance = (System_String_o **)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( v20 && Instance )
    {
      IsActiveWar = QuestTree__IsActiveWar((QuestTree_o *)Instance, v20->fields.warId, 0);
      goto LABEL_26;
    }
LABEL_40:
    sub_2213CDC(Instance, v15);
  }
  System_Int32__TryParse(missionNaviTransitionEntity->fields.transitionParam, result, 0);
  Instance = (System_String_o **)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  v20 = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, result[0], 0);
  Instance = (System_String_o **)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
    v25 = 0;
    goto LABEL_28;
  }
LABEL_27:
  NaviWarOrSpotTransitionAction = 0;
  v25 = 1;
LABEL_28:
  if ( !*(&MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo, v21, v22);
  closedMessage = MissionNaviTransitionConfirmDialog__GetWarNaviNameAndClosedMessage(
                    missionNaviTransitionEntity,
                    v20,
                    v25,
                    v23);
  if ( MissionNaviTransitionEntity__TryGetChallengeIconName(missionNaviTransitionEntity, &challengeIconName, 0) )
  {
    IconNameByWarInfo = challengeIconName;
  }
  else
  {
    IconNameByWarInfo = MissionNaviTransitionBoardItemDraw__GetIconNameByWarInfo(v20, v29);
    challengeIconName = IconNameByWarInfo;
  }
  v31 = (MissionNaviTransitionBoardItem_o *)sub_2213CCC(MissionNaviTransitionBoardItem_TypeInfo);
  MissionNaviTransitionBoardItem___ctor(
    v31,
    0,
    IconNameByWarInfo,
    closedMessage.fields.Item1,
    0,
    0,
    1,
    v25,
    closedMessage.fields.Item2,
    NaviWarOrSpotTransitionAction,
    v43);
  Instance = (System_String_o **)*challengeBoardList;
  if ( !*challengeBoardList )
    goto LABEL_40;
  v38 = Instance[2];
  v39 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__Add__;
  ++*((_DWORD *)Instance + 7);
  if ( !v38 )
    goto LABEL_40;
  v40 = *((int *)Instance + 6);
  if ( (unsigned int)v40 >= LODWORD(v38[1].klass) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v31,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    v41 = (__int64)v38 + 8 * v40;
    *((_DWORD *)Instance + 6) = v40 + 1;
    *(_QWORD *)(v41 + 32) = v31;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v41 + 32), (int32_t)v31, v32, v33, v34, v35, v36, v37);
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
  this->fields._ClosedMessage_k__BackingField = value;
  sub_2213A04(&this->fields._ClosedMessage_k__BackingField, value);
}


void MissionNaviTransitionBoardItem__set_IconName(
        MissionNaviTransitionBoardItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._IconName_k__BackingField = value;
  sub_2213A04(&this->fields._IconName_k__BackingField, value);
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
  this->fields._Name_k__BackingField = value;
  sub_2213A04(&this->fields._Name_k__BackingField, value);
}


void MissionNaviTransitionBoardItem__set_NaviAction(
        MissionNaviTransitionBoardItem_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  this->fields._NaviAction_k__BackingField = value;
  sub_2213A04(&this->fields._NaviAction_k__BackingField, value);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596A0C8 & 1) == 0 )
  {
    sub_2213A60(&MissionNaviTransitionBoardItem___c_TypeInfo);
    byte_596A0C8 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(MissionNaviTransitionBoardItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MissionNaviTransitionBoardItem___c_TypeInfo->static_fields->__9 = (struct MissionNaviTransitionBoardItem___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)MissionNaviTransitionBoardItem___c_TypeInfo->static_fields,
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


void MissionNaviTransitionBoardItem___c___GetNaviQuestTransitionAction_b__39_1(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  MissionNaviTransitionBoardItem___c_c *v5; // x8
  CommonUI_o *v6; // x19
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x9
  System_Action_o *_9__39_3; // x20
  Il2CppObject *v9; // x21
  struct MissionNaviTransitionBoardItem___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596A0CC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__39_3__);
    sub_2213A60(&MissionNaviTransitionBoardItem___c_TypeInfo);
    byte_596A0CC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !*(&MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo, v3, v4);
    v5 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__39_3 = static_fields->__9__39_3;
  if ( !_9__39_3 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, v3, v4);
      static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__39_3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__39_3,
      v9,
      Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__39_3__,
      0);
    v10 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    v10->__9__39_3 = _9__39_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__39_3, (int32_t)_9__39_3, v11, v12, v13, v14, v15, v16);
  }
  if ( !v6 )
LABEL_12:
    sub_2213CDC(Instance, v3);
  CommonUI__CloseMissionNaviTransitionConfirmDialog_37477452(v6, _9__39_3, 0);
}


void MissionNaviTransitionBoardItem___c___GetNaviQuestTransitionAction_b__39_3(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596A0CD & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596A0CD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_2213CDC(Instance, v3);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


void MissionNaviTransitionBoardItem___c___GetNaviSceneTransitionAction_b__41_1(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  MissionNaviTransitionBoardItem___c_c *v5; // x8
  CommonUI_o *v6; // x19
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x9
  System_Action_o *_9__41_3; // x20
  Il2CppObject *v9; // x21
  struct MissionNaviTransitionBoardItem___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596A0D0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__41_3__);
    sub_2213A60(&MissionNaviTransitionBoardItem___c_TypeInfo);
    byte_596A0D0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !*(&MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo, v3, v4);
    v5 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__41_3 = static_fields->__9__41_3;
  if ( !_9__41_3 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, v3, v4);
      static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__41_3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__41_3,
      v9,
      Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__41_3__,
      0);
    v10 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    v10->__9__41_3 = _9__41_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__41_3, (int32_t)_9__41_3, v11, v12, v13, v14, v15, v16);
  }
  if ( !v6 )
LABEL_12:
    sub_2213CDC(Instance, v3);
  CommonUI__CloseMissionNaviTransitionConfirmDialog_37477452(v6, _9__41_3, 0);
}


void MissionNaviTransitionBoardItem___c___GetNaviSceneTransitionAction_b__41_3(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596A0D1 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596A0D1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_2213CDC(Instance, v3);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


void MissionNaviTransitionBoardItem___c___GetNaviWarOrSpotTransitionAction_b__40_1(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  MissionNaviTransitionBoardItem___c_c *v5; // x8
  CommonUI_o *v6; // x19
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x9
  System_Action_o *_9__40_3; // x20
  Il2CppObject *v9; // x21
  struct MissionNaviTransitionBoardItem___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596A0CE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__40_3__);
    sub_2213A60(&MissionNaviTransitionBoardItem___c_TypeInfo);
    byte_596A0CE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !*(&MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo, v3, v4);
    v5 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__40_3 = static_fields->__9__40_3;
  if ( !_9__40_3 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, v3, v4);
      static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__40_3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__40_3,
      v9,
      Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__40_3__,
      0);
    v10 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    v10->__9__40_3 = _9__40_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__40_3, (int32_t)_9__40_3, v11, v12, v13, v14, v15, v16);
  }
  if ( !v6 )
LABEL_12:
    sub_2213CDC(Instance, v3);
  CommonUI__CloseMissionNaviTransitionConfirmDialog_37477452(v6, _9__40_3, 0);
}


void MissionNaviTransitionBoardItem___c___GetNaviWarOrSpotTransitionAction_b__40_3(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596A0CF & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596A0CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_2213CDC(Instance, v3);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


void MissionNaviTransitionBoardItem___c___SetupSceneTransitionBoardItem_b__38_0(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  ;
}


void MissionNaviTransitionBoardItem___c___SetupSceneTransitionBoardItem_b__38_1(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596A0C9 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596A0C9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 91, 1, 0, 0);
}


void MissionNaviTransitionBoardItem___c___SetupSceneTransitionBoardItem_b__38_2(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  const MethodInfo_47A29F8 *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_596A0CA & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A0CA = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  if ( !byte_596A158 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A158 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  v5 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
  static_fields->_SummonType_k__BackingField = 3;
  Instance = SingletonMonoBehaviour_object___get_Instance(v5);
  if ( !Instance )
    sub_2213CDC(0, v7);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 20, 1, 0, 0);
}


void MissionNaviTransitionBoardItem___c___SetupSceneTransitionBoardItem_b__38_4(
        MissionNaviTransitionBoardItem___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596A0CB & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596A0CB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 30, 1, 0, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass38_0___ctor(
        MissionNaviTransitionBoardItem___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass38_0___SetupSceneTransitionBoardItem_b__3(
        MissionNaviTransitionBoardItem___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596A0D2 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596A0D2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  AvalonSceneManager__transitionScene(
    (AvalonSceneManager_o *)Instance,
    23,
    1,
    (Il2CppObject *)this->fields.sceneFriendJumpInfo,
    0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass38_1___ctor(
        MissionNaviTransitionBoardItem___c__DisplayClass38_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass38_1___SetupSceneTransitionBoardItem_b__5(
        MissionNaviTransitionBoardItem___c__DisplayClass38_1_o *this,
        const MethodInfo *method)
{
  EventItemListComponent__GoToShopEventItemExchange(this->fields.eventId, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass38_2___ctor(
        MissionNaviTransitionBoardItem___c__DisplayClass38_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass38_2___SetupSceneTransitionBoardItem_b__6(
        MissionNaviTransitionBoardItem___c__DisplayClass38_2_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596A0D3 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596A0D3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  AvalonSceneManager__transitionScene(
    (AvalonSceneManager_o *)Instance,
    72,
    1,
    (Il2CppObject *)this->fields.sceneJumpInfo,
    0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass38_3___ctor(
        MissionNaviTransitionBoardItem___c__DisplayClass38_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass38_3___SetupSceneTransitionBoardItem_b__7(
        MissionNaviTransitionBoardItem___c__DisplayClass38_3_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596A0D4 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596A0D4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  AvalonSceneManager__transitionScene(
    (AvalonSceneManager_o *)Instance,
    32,
    1,
    (Il2CppObject *)this->fields.sceneJumpInfo,
    0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass38_4___ctor(
        MissionNaviTransitionBoardItem___c__DisplayClass38_4_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass38_4___SetupSceneTransitionBoardItem_b__8(
        MissionNaviTransitionBoardItem___c__DisplayClass38_4_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t gachaId; // w21
  AvalonSceneManager_o *Instance; // x0
  struct GachaEntity_o *gachaEnt; // x8
  int32_t type; // w20
  Il2CppObject *sendData; // x8
  const MethodInfo_47A29F8 *v9; // x0

  if ( (byte_596A0D5 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A0D5 = 1;
  }
  gachaId = this->fields.gachaId;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  if ( !byte_596A159 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A159 = 1;
  }
  Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  gachaEnt = this->fields.gachaEnt;
  HIDWORD(Instance[1].fields.sendData->monitor) = gachaId;
  if ( !gachaEnt )
    goto LABEL_16;
  type = gachaEnt->fields.type;
  if ( !byte_596A158 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    byte_596A158 = 1;
  }
  if ( !HIDWORD(Instance[2].klass) )
  {
    j_il2cpp_runtime_class_init_0(Instance, method, v2);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  sendData = Instance[1].fields.sendData;
  v9 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
  LODWORD(sendData->monitor) = type;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance(v9);
  if ( !Instance )
LABEL_16:
    sub_2213CDC(Instance, method);
  AvalonSceneManager__transitionScene(Instance, 20, 1, 0, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass39_0___ctor(
        MissionNaviTransitionBoardItem___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass39_0___GetNaviQuestTransitionAction_b__0(
        MissionNaviTransitionBoardItem___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  MissionListViewItem_o *naviQuestEntity; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  CommonUI_o *v6; // x20
  System_Action_o *_9__2; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Instance; // x19
  __int64 v17; // x2
  MissionNaviTransitionBoardItem___c_c *v18; // x8
  System_String_o *v19; // x20
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x9
  System_String_o *v21; // x21
  System_Action_o *_9__39_1; // x22
  Il2CppObject *v23; // x23
  struct MissionNaviTransitionBoardItem___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  _QWORD *v31; // x0
  System_Reflection_MethodBase_o *v32; // x0

  if ( (byte_596A0D6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_2213A60(&Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__39_1__);
    sub_2213A60(&Method_MissionNaviTransitionBoardItem___c__DisplayClass39_0__GetNaviQuestTransitionAction_b__0__);
    sub_2213A60(&Method_MissionNaviTransitionBoardItem___c__DisplayClass39_0__GetNaviQuestTransitionAction_b__2__);
    sub_2213A60(&MissionNaviTransitionBoardItem___c_TypeInfo);
    sub_2213A60(&StringLiteral_5177/*"DIALOG_OUT_OF_TERM"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A0D6 = 1;
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
      v4 = Method_MissionNaviTransitionBoardItem___c__DisplayClass39_0__GetNaviQuestTransitionAction_b__0__;
      if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass39_0__GetNaviQuestTransitionAction_b__0__
            + 83)
          & 2) != 0 )
        v4 = (_QWORD *)sub_2213A78(Method_MissionNaviTransitionBoardItem___c__DisplayClass39_0__GetNaviQuestTransitionAction_b__0__);
      v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      naviQuestEntity = (MissionListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( naviQuestEntity )
      {
        AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)naviQuestEntity, 1, 0);
        naviQuestEntity = (MissionListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v6 = (CommonUI_o *)naviQuestEntity;
        _9__2 = this->fields.__9__2;
        if ( !_9__2 )
        {
          _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            _9__2,
            (Il2CppObject *)this,
            Method_MissionNaviTransitionBoardItem___c__DisplayClass39_0__GetNaviQuestTransitionAction_b__2__,
            0);
          this->fields.__9__2 = _9__2;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.__9__2,
            (int32_t)_9__2,
            v8,
            v9,
            v10,
            v11,
            v12,
            v13);
        }
        if ( v6 )
        {
          CommonUI__CloseMissionNaviTransitionConfirmDialog_37477452(v6, _9__2, 0);
          return;
        }
      }
LABEL_27:
      sub_2213CDC(naviQuestEntity, method);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
  naviQuestEntity = (MissionListViewItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5177/*"DIALOG_OUT_OF_TERM"*/, 0);
  v18 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v19 = (System_String_o *)naviQuestEntity;
  if ( !*(&MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo, method, v17);
    v18 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  v21 = (System_String_o *)StringLiteral_1/*""*/;
  _9__39_1 = static_fields->__9__39_1;
  if ( !_9__39_1 )
  {
    if ( !*(&v18->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v18, method, v17);
      static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__39_1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__39_1,
      v23,
      Method_MissionNaviTransitionBoardItem___c__GetNaviQuestTransitionAction_b__39_1__,
      0);
    v24 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    v24->__9__39_1 = _9__39_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->__9__39_1, (int32_t)_9__39_1, v25, v26, v27, v28, v29, v30);
  }
  if ( !Instance )
    goto LABEL_27;
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v21, v19, _9__39_1, 500, 0, 0, 0, 1, 0, 0, 0, 0, 0.0, 0, 0);
  v31 = Method_MissionNaviTransitionBoardItem___c__DisplayClass39_0__GetNaviQuestTransitionAction_b__0__;
  if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass39_0__GetNaviQuestTransitionAction_b__0__ + 83)
      & 2) != 0 )
    v31 = (_QWORD *)sub_2213A78(Method_MissionNaviTransitionBoardItem___c__DisplayClass39_0__GetNaviQuestTransitionAction_b__0__);
  v32 = (System_Reflection_MethodBase_o *)sub_2213A44(v31, v31[4]);
  OverwriteAssetSoundName__PlaySystemSe(v32, 2, 0, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass39_0___GetNaviQuestTransitionAction_b__2(
        MissionNaviTransitionBoardItem___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  MapControl_QuestInfo_o *tempQuestInfo; // x20
  __int64 v8; // x2
  BalanceConfig_c *v9; // x0
  int32_t OrdealCallWarId; // w19
  const MethodInfo_47A29F8 *v11; // x0
  struct MissionNaviQuestEntity_o *naviQuestEntity; // x8
  int questTransitionType; // w8
  __int64 v14; // x2
  int32_t SpotID; // w20
  struct MapControl_QuestInfo_o *v16; // x8
  int32_t v17; // w0
  struct MapControl_QuestInfo_o *v18; // x8
  int32_t warId; // w19
  int32_t questId; // w19
  struct MapControl_QuestInfo_o *v21; // x8
  int32_t v22; // w19
  TerminalPramsManager_c *v23; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_596A0D7 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CommonUI_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A0D7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  CommonUI__CloseMasterMission(Instance, 0);
  tempQuestInfo = this->fields.tempQuestInfo;
  if ( !*(&CommonUI_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, v5, v6);
  Instance = (CommonUI_o *)CommonUI__IsBlankEarthQuestByQuestInfo(tempQuestInfo, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v8);
    Instance = (CommonUI_o *)TerminalPramsManager__ExistBlankEarthTutorial(0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v9 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4, v8);
        v9 = BalanceConfig_TypeInfo;
      }
      OrdealCallWarId = v9->static_fields->OrdealCallWarId;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v8);
      TerminalPramsManager__SetAutoResumeByWarId(OrdealCallWarId, 0);
      v11 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
      goto LABEL_49;
    }
  }
  naviQuestEntity = this->fields.naviQuestEntity;
  if ( !naviQuestEntity )
    goto LABEL_52;
  questTransitionType = naviQuestEntity->fields.questTransitionType;
  if ( questTransitionType > 1 )
  {
    if ( questTransitionType != 2 )
    {
      if ( questTransitionType == 3 )
      {
        v18 = this->fields.tempQuestInfo;
        if ( !v18 )
          goto LABEL_52;
        warId = v18->fields.warId;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v8);
        TerminalPramsManager__SetAutoResumeForFolder(warId, 0);
      }
      goto LABEL_42;
    }
    v21 = this->fields.tempQuestInfo;
    if ( !v21 )
      goto LABEL_52;
    v22 = v21->fields.warId;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v8);
    v17 = v22;
    goto LABEL_41;
  }
  if ( !questTransitionType )
  {
    questId = this->fields.questId;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v8);
    TerminalPramsManager__SetAutoResumeByQuestId(questId, 0);
    goto LABEL_42;
  }
  if ( questTransitionType == 1 )
  {
    Instance = (CommonUI_o *)this->fields.tempQuestInfo;
    if ( Instance )
    {
      SpotID = MapControl_QuestInfo__GetSpotID((MapControl_QuestInfo_o *)Instance, 0);
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v14);
      if ( !byte_596A15A )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596A15A = 1;
      }
      Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v14);
        Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      }
      v16 = this->fields.tempQuestInfo;
      LODWORD(Instance->fields.errorDialog->fields.m_CachedPtr) = SpotID;
      if ( v16 )
      {
        v17 = v16->fields.warId;
LABEL_41:
        TerminalPramsManager__SetAutoResumeByWarId(v17, 0);
        goto LABEL_42;
      }
    }
LABEL_52:
    sub_2213CDC(Instance, v4);
  }
LABEL_42:
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v8);
  if ( !byte_596A094 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A094 = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v8);
    v23 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v23->static_fields;
  v11 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
  static_fields->_IsDirectTransition_k__BackingField = 1;
LABEL_49:
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance(v11);
  if ( !Instance )
    goto LABEL_52;
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 0, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass40_0___ctor(
        MissionNaviTransitionBoardItem___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass40_0___GetNaviWarOrSpotTransitionAction_b__0(
        MissionNaviTransitionBoardItem___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *spotInfo; // x8
  QuestTree_o *Instance; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  CommonUI_o *v7; // x20
  System_Action_o *_9__2; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *v17; // x19
  __int64 v18; // x2
  MissionNaviTransitionBoardItem___c_c *v19; // x8
  System_String_o *v20; // x20
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x9
  System_String_o *v22; // x21
  System_Action_o *_9__40_1; // x22
  Il2CppObject *v24; // x23
  struct MissionNaviTransitionBoardItem___c_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0

  if ( (byte_596A0D8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__40_1__);
    sub_2213A60(&Method_MissionNaviTransitionBoardItem___c__DisplayClass40_0__GetNaviWarOrSpotTransitionAction_b__0__);
    sub_2213A60(&Method_MissionNaviTransitionBoardItem___c__DisplayClass40_0__GetNaviWarOrSpotTransitionAction_b__2__);
    sub_2213A60(&MissionNaviTransitionBoardItem___c_TypeInfo);
    sub_2213A60(&StringLiteral_5177/*"DIALOG_OUT_OF_TERM"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A0D8 = 1;
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
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
    v5 = Method_MissionNaviTransitionBoardItem___c__DisplayClass40_0__GetNaviWarOrSpotTransitionAction_b__0__;
    if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass40_0__GetNaviWarOrSpotTransitionAction_b__0__
          + 83)
        & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_MissionNaviTransitionBoardItem___c__DisplayClass40_0__GetNaviWarOrSpotTransitionAction_b__0__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    Instance = (QuestTree_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( Instance )
    {
      AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 1, 0);
      Instance = (QuestTree_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v7 = (CommonUI_o *)Instance;
      _9__2 = this->fields.__9__2;
      if ( !_9__2 )
      {
        _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__2,
          (Il2CppObject *)this,
          Method_MissionNaviTransitionBoardItem___c__DisplayClass40_0__GetNaviWarOrSpotTransitionAction_b__2__,
          0);
        this->fields.__9__2 = _9__2;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.__9__2,
          (int32_t)_9__2,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14);
      }
      if ( v7 )
      {
        CommonUI__CloseMissionNaviTransitionConfirmDialog_37477452(v7, _9__2, 0);
        return;
      }
    }
LABEL_33:
    sub_2213CDC(Instance, method);
  }
LABEL_21:
  v17 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
  Instance = (QuestTree_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5177/*"DIALOG_OUT_OF_TERM"*/, 0);
  v19 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v20 = (System_String_o *)Instance;
  if ( !*(&MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo, method, v18);
    v19 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  v22 = (System_String_o *)StringLiteral_1/*""*/;
  _9__40_1 = static_fields->__9__40_1;
  if ( !_9__40_1 )
  {
    if ( !*(&v19->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v19, method, v18);
      static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__40_1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__40_1,
      v24,
      Method_MissionNaviTransitionBoardItem___c__GetNaviWarOrSpotTransitionAction_b__40_1__,
      0);
    v25 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    v25->__9__40_1 = _9__40_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->__9__40_1, (int32_t)_9__40_1, v26, v27, v28, v29, v30, v31);
  }
  if ( !v17 )
    goto LABEL_33;
  CommonUI__OpenNotificationDialog((CommonUI_o *)v17, v22, v20, _9__40_1, 500, 0, 0, 0, 1, 0, 0, 0, 0, 0.0, 0, 0);
  v32 = Method_MissionNaviTransitionBoardItem___c__DisplayClass40_0__GetNaviWarOrSpotTransitionAction_b__0__;
  if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass40_0__GetNaviWarOrSpotTransitionAction_b__0__
        + 83)
      & 2) != 0 )
    v32 = (_QWORD *)sub_2213A78(Method_MissionNaviTransitionBoardItem___c__DisplayClass40_0__GetNaviWarOrSpotTransitionAction_b__0__);
  v33 = (System_Reflection_MethodBase_o *)sub_2213A44(v32, v32[4]);
  OverwriteAssetSoundName__PlaySystemSe(v33, 2, 0, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass40_0___GetNaviWarOrSpotTransitionAction_b__2(
        MissionNaviTransitionBoardItem___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t targetWarId; // w20
  bool IsBlankEarthWarByWarId; // w20
  struct SpotEntity_o *spotEnt; // x8
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  WarEntity_o *Mine; // x0
  int32_t parentBlankEarthSpotId; // w1
  unsigned __int64 v13; // x8
  BalanceConfig_c *v14; // x0
  int32_t OrdealCallWarId; // w19
  struct SpotEntity_o *v16; // x8
  int32_t warId; // w20
  int32_t targetSpotId; // w25
  TerminalPramsManager_c *v19; // x0
  TerminalPramsManager_c *v20; // x0
  _BOOL4 isMainScenario; // w8
  _BOOL4 isGrandQuestWar; // w9
  int32_t v23; // w19
  int v24; // w9
  int v25; // w8
  __int64 v26; // x1
  __int64 v27; // x2
  TerminalPramsManager_c *v28; // x0
  unsigned __int64 v29; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596A0D9 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A0D9 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0);
  if ( this->fields.isWar )
  {
    targetWarId = this->fields.targetWarId;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v6);
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
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v6);
  Instance = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Instance )
    goto LABEL_63;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          this->fields.targetSpotId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__) )
  {
    if ( this->fields.spotEnt )
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      spotEnt = this->fields.spotEnt;
      if ( spotEnt && Instance )
      {
        WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)Instance, spotEnt->fields.warId, 0);
        if ( WarInfoByWarID && (Mine = MapControl_WarInfo__GetMine(WarInfoByWarID, 0)) != 0 )
        {
          parentBlankEarthSpotId = Mine->fields.parentBlankEarthSpotId;
          v29 = 0;
          System_Nullable_int____ctor(
            (System_Nullable_int__o)&v29,
            parentBlankEarthSpotId,
            (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
          v13 = v29;
        }
        else
        {
          v13 = 0;
        }
        if ( HIDWORD(v13) == 0 && !IsBlankEarthWarByWarId )
          goto LABEL_32;
        goto LABEL_24;
      }
LABEL_63:
      sub_2213CDC(Instance, v4);
    }
    goto LABEL_20;
  }
LABEL_24:
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v6);
  if ( TerminalPramsManager__ExistBlankEarthTutorial(0) )
  {
    v14 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5, v6);
      v14 = BalanceConfig_TypeInfo;
    }
    OrdealCallWarId = v14->static_fields->OrdealCallWarId;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v6);
    TerminalPramsManager__SetAutoResumeByWarId(OrdealCallWarId, 0);
    goto LABEL_60;
  }
LABEL_32:
  if ( this->fields.isSpot )
  {
    v16 = this->fields.spotEnt;
    if ( v16 )
    {
      warId = v16->fields.warId;
      targetSpotId = this->fields.targetSpotId;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v6);
      if ( !byte_596A15A )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596A15A = 1;
      }
      v19 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v6);
        v19 = TerminalPramsManager_TypeInfo;
      }
      v19->static_fields->_SpotId_k__BackingField = targetSpotId;
      TerminalPramsManager__SetAutoResumeByWarId(warId, 0);
      if ( !byte_596A094 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596A094 = 1;
      }
      v20 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v6);
        v20 = TerminalPramsManager_TypeInfo;
      }
      v20->static_fields->_IsDirectTransition_k__BackingField = 1;
    }
  }
  if ( this->fields.isWar )
  {
    isMainScenario = this->fields.isMainScenario;
    isGrandQuestWar = this->fields.isGrandQuestWar;
    v23 = this->fields.targetWarId;
    v24 = isGrandQuestWar || isMainScenario;
    v25 = *(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1);
    if ( v24 )
    {
      if ( !v25 )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v6);
      TerminalPramsManager__SetAutoResumeForFolder(v23, 0);
    }
    else
    {
      if ( !v25 )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v6);
      TerminalPramsManager__SetAutoResumeByWarId(v23, 0);
    }
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v26, v27);
    if ( !byte_596A094 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A094 = 1;
    }
    v28 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v26, v27);
      v28 = TerminalPramsManager_TypeInfo;
    }
    v28->static_fields->_IsDirectTransition_k__BackingField = 1;
  }
LABEL_60:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 0, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass41_0___ctor(
        MissionNaviTransitionBoardItem___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass41_0___GetNaviSceneTransitionAction_b__0(
        MissionNaviTransitionBoardItem___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  __int64 sceneDetail; // x0
  __int64 v4; // x20
  System_String_o *v5; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _BOOL4 v10; // w22
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x2
  int v14; // w8
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  CommonUI_o *v17; // x20
  System_Action_o *_9__2; // x22
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x1
  __int64 v26; // x2
  Il2CppObject *Instance; // x19
  __int64 v28; // x2
  MissionNaviTransitionBoardItem___c_c *v29; // x8
  System_String_o *v30; // x20
  struct MissionNaviTransitionBoardItem___c_StaticFields *static_fields; // x9
  System_String_o *v32; // x21
  System_Action_o *_9__41_1; // x22
  Il2CppObject *v34; // x23
  struct MissionNaviTransitionBoardItem___c_StaticFields *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  _QWORD *v42; // x0
  System_Reflection_MethodBase_o *v43; // x0
  Il2CppObject *v44; // [xsp+40h] [xbp-60h] BYREF
  int32_t key; // [xsp+4Ch] [xbp-54h] BYREF
  Il2CppObject *entity; // [xsp+50h] [xbp-50h] BYREF
  int32_t result; // [xsp+5Ch] [xbp-44h] BYREF

  if ( (byte_596A0DA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_GachaMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ShopMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_2213A60(&Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__41_1__);
    sub_2213A60(&Method_MissionNaviTransitionBoardItem___c__DisplayClass41_0__GetNaviSceneTransitionAction_b__0__);
    sub_2213A60(&Method_MissionNaviTransitionBoardItem___c__DisplayClass41_0__GetNaviSceneTransitionAction_b__2__);
    sub_2213A60(&MissionNaviTransitionBoardItem___c_TypeInfo);
    sub_2213A60(&StringLiteral_5177/*"DIALOG_OUT_OF_TERM"*/);
    sub_2213A60(&StringLiteral_6511/*"EventReward"*/);
    sub_2213A60(&StringLiteral_13719/*"Summon"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A0DA = 1;
  }
  sceneDetail = (__int64)this->fields.sceneDetail;
  result = 0;
  entity = 0;
  key = 0;
  v44 = 0;
  if ( !sceneDetail )
    goto LABEL_55;
  sceneDetail = (__int64)System_String__Split((System_String_o *)sceneDetail, 0x2Fu, 0, 0);
  if ( !sceneDetail )
    goto LABEL_55;
  v4 = sceneDetail;
  if ( !*(_DWORD *)(sceneDetail + 24) )
    sub_2213CE4(sceneDetail);
  v5 = *(System_String_o **)(sceneDetail + 32);
  if ( !System_String__op_Equality(v5, (System_String_o *)StringLiteral_6511/*"EventReward"*/, 0)
    || *(int *)(v4 + 24) < 2
    || !System_Int32__TryParse(*(System_String_o **)(v4 + 40), &result, 0) )
  {
    goto LABEL_17;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
  sceneDetail = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !sceneDetail )
    goto LABEL_55;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)sceneDetail,
         &entity,
         result,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8, v9);
    sceneDetail = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !sceneDetail )
      goto LABEL_55;
    v10 = !ShopMaster__IsEventShopOpen((ShopMaster_o *)sceneDetail, result, 0);
  }
  else
  {
LABEL_17:
    v10 = 0;
  }
  if ( !System_String__op_Equality(v5, (System_String_o *)StringLiteral_13719/*"Summon"*/, 0) || *(int *)(v4 + 24) < 2 )
    goto LABEL_30;
  System_Int32__TryParse(*(System_String_o **)(v4 + 40), &key, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11, v12);
  sceneDetail = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !sceneDetail )
    goto LABEL_55;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)sceneDetail,
          &v44,
          key,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__) )
    goto LABEL_30;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v13);
  sceneDetail = NetworkManager__getTime(0);
  if ( !v44 )
    goto LABEL_55;
  if ( sceneDetail < (__int64)v44[6].monitor || sceneDetail > (__int64)v44[7].klass )
    v14 = 1;
  else
LABEL_30:
    v14 = 0;
  if ( !(v14 | v10) )
  {
    sceneDetail = (__int64)this->fields.item;
    if ( !sceneDetail )
      goto LABEL_55;
    sceneDetail = (__int64)MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)sceneDetail, 0);
    if ( !sceneDetail )
      goto LABEL_55;
    if ( EventMissionEntity__isNowMission((EventMissionEntity_o *)sceneDetail, 0) )
    {
      v15 = Method_MissionNaviTransitionBoardItem___c__DisplayClass41_0__GetNaviSceneTransitionAction_b__0__;
      if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass41_0__GetNaviSceneTransitionAction_b__0__
            + 83)
          & 2) != 0 )
        v15 = (_QWORD *)sub_2213A78(Method_MissionNaviTransitionBoardItem___c__DisplayClass41_0__GetNaviSceneTransitionAction_b__0__);
      v16 = (System_Reflection_MethodBase_o *)sub_2213A44(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0);
      sceneDetail = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( sceneDetail )
      {
        AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)sceneDetail, 1, 0);
        sceneDetail = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v17 = (CommonUI_o *)sceneDetail;
        _9__2 = this->fields.__9__2;
        if ( !_9__2 )
        {
          _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            _9__2,
            (Il2CppObject *)this,
            Method_MissionNaviTransitionBoardItem___c__DisplayClass41_0__GetNaviSceneTransitionAction_b__2__,
            0);
          this->fields.__9__2 = _9__2;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.__9__2,
            (int32_t)_9__2,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24);
        }
        if ( v17 )
        {
          CommonUI__CloseMissionNaviTransitionConfirmDialog_37477452(v17, _9__2, 0);
          return;
        }
      }
LABEL_55:
      sub_2213CDC(sceneDetail, method);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25, v26);
  sceneDetail = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5177/*"DIALOG_OUT_OF_TERM"*/, 0);
  v29 = MissionNaviTransitionBoardItem___c_TypeInfo;
  v30 = (System_String_o *)sceneDetail;
  if ( !*(&MissionNaviTransitionBoardItem___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionBoardItem___c_TypeInfo, method, v28);
    v29 = MissionNaviTransitionBoardItem___c_TypeInfo;
  }
  static_fields = v29->static_fields;
  v32 = (System_String_o *)StringLiteral_1/*""*/;
  _9__41_1 = static_fields->__9__41_1;
  if ( !_9__41_1 )
  {
    if ( !*(&v29->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v29, method, v28);
      static_fields = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__41_1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__41_1,
      v34,
      Method_MissionNaviTransitionBoardItem___c__GetNaviSceneTransitionAction_b__41_1__,
      0);
    v35 = MissionNaviTransitionBoardItem___c_TypeInfo->static_fields;
    v35->__9__41_1 = _9__41_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v35->__9__41_1, (int32_t)_9__41_1, v36, v37, v38, v39, v40, v41);
  }
  if ( !Instance )
    goto LABEL_55;
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v32, v30, _9__41_1, 500, 0, 0, 0, 1, 0, 0, 0, 0, 0.0, 0, 0);
  v42 = Method_MissionNaviTransitionBoardItem___c__DisplayClass41_0__GetNaviSceneTransitionAction_b__0__;
  if ( (*((_BYTE *)Method_MissionNaviTransitionBoardItem___c__DisplayClass41_0__GetNaviSceneTransitionAction_b__0__ + 83)
      & 2) != 0 )
    v42 = (_QWORD *)sub_2213A78(Method_MissionNaviTransitionBoardItem___c__DisplayClass41_0__GetNaviSceneTransitionAction_b__0__);
  v43 = (System_Reflection_MethodBase_o *)sub_2213A44(v42, v42[4]);
  OverwriteAssetSoundName__PlaySystemSe(v43, 2, 0, 0);
}


void MissionNaviTransitionBoardItem___c__DisplayClass41_0___GetNaviSceneTransitionAction_b__2(
        MissionNaviTransitionBoardItem___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596A0DB & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_596A0DB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0),
        ActionExtensions__Call(this->fields.transitionSceneAction, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__)) == 0) )
  {
    sub_2213CDC(Instance, v4);
  }
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 0, 0);
}