void clsQuestCheck___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C34295 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_10932/*"QuestStartEffect"*/);
    sub_1C32C20(&clsQuestCheck_TypeInfo);
    byte_4C34295 = 1;
  }
  clsQuestCheck_TypeInfo->static_fields->KEY_QUEST_START_EFFECT = (struct System_String_o *)StringLiteral_10932/*"QuestStartEffect"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)clsQuestCheck_TypeInfo->static_fields, StringLiteral_10932/*"QuestStartEffect"*/, v1, v2);
}


void clsQuestCheck___ctor(clsQuestCheck_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C34294 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_clsQuestCheck___ctor__);
    byte_4C34294 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.cQuestReleaseListP = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.cQuestReleaseListP, (int32_t)v6, v7, v8);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_39E2EEC *)Method_SingletonTemplate_clsQuestCheck___ctor__);
}


bool clsQuestCheck__CheckQuestPlayable(
        clsQuestCheck_o *this,
        MapControl_QuestInfo_o *questInfo,
        int64_t srcEndTime,
        int32_t boostId,
        const MethodInfo *method)
{
  __int64 v9; // x24
  void *SpotID; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  MapControl_QuestInfo_o **v13; // x19
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w28
  MapControl_QuestInfo_o *v17; // x8
  int32_t questId; // w23
  int32_t questPhase; // w29
  int32_t v20; // w20
  const MethodInfo *v21; // x3
  MapControl_QuestInfo_o *v22; // x1
  _BOOL4 isNotItemConsume; // w21
  int32_t v24; // w25
  UserGameEntity_o *v25; // x26
  QuestEntity_o *v26; // x27
  System_String_o *v27; // x19
  System_String_o *v28; // x20
  CommonUI_o *v29; // x21
  clsQuestCheck___c_c *v30; // x8
  System_Action_o *_9__43_3; // x22
  Il2CppObject *v32; // x23
  struct clsQuestCheck___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Action_o *v36; // x19
  clsQuestCheck_o *v37; // x0
  const MethodInfo *v38; // x2
  TerminalPramsManager_c *v39; // x0
  int32_t v40; // w22
  int64_t v41; // x28
  struct TerminalPramsManager_StaticFields *v42; // x8
  UserServantMaster_o *v43; // x28
  Il2CppObject *MasterData_object; // x29
  CommonUI_o *v45; // x19
  int32_t v46; // w20
  int32_t svtKeep; // w21
  ServantFrameShortDlgComponent_CallbackFunc_o *v48; // x22
  Il2CppObject *v49; // x23
  struct clsQuestCheck___c_StaticFields *v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  CommonUI_o *v53; // x0
  int32_t v54; // w1
  int32_t v55; // w2
  int32_t v56; // w3
  CommonUI_o *v57; // x19
  int32_t v58; // w20
  int32_t svtEquipKeep; // w21
  Il2CppObject *v60; // x23
  struct clsQuestCheck___c_StaticFields *v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  int32_t Count; // w19
  CommonUI_o *v65; // x20
  BalanceConfig_c *v66; // x8
  Il2CppObject *v67; // x23
  struct clsQuestCheck___c_StaticFields *v68; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  bool v71; // w25
  int32_t v73; // w29
  int32_t v74; // w28
  Il2CppObject *Instance; // x19
  RecoverDlgComponent_CallbackFunc_o *v76; // x20
  CommonUI_o *v77; // x0
  int32_t v78; // w1
  RecoverDlgComponent_CallbackFunc_o *v79; // x2
  bool v80; // w3
  Il2CppObject *v81; // x19
  RecoverDlgComponent_CallbackFunc_o *v82; // x20
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x24
  Il2CppObject *v84; // x25
  Il2CppObject *v85; // x27
  System_String_o *v86; // x20
  int32_t v87; // w29
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v89; // x8
  int *v90; // x26
  System_String_o **v91; // x28
  int64_t qp; // x8
  struct System_Int32_array *nums; // x9
  System_String_o *v94; // x0
  System_String_o *v95; // x0
  System_String_o *v96; // x19
  System_String_o *v97; // x0
  System_String_o *v98; // x19
  CommonUI_o *v99; // x20
  clsQuestCheck___c_c *v100; // x8
  System_String_o *v101; // x21
  System_Action_o *_9__43_10; // x22
  Il2CppObject *v103; // x23
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  struct clsQuestCheck___c_StaticFields *v106; // x0
  CGThumbnailListItem_o *p__9__43_10; // x0
  Il2CppObject *v108; // x19
  RecoverDlgComponent_CallbackFunc_o *v109; // x20
  QuestConsumeItemEntity_o *v110; // x24
  Il2CppObject *v111; // x25
  Il2CppObject *v112; // x27
  System_String_o *v113; // x20
  int32_t v114; // w29
  struct System_Int32_array *v115; // x8
  struct System_Int32_array *v116; // x8
  int *v117; // x26
  System_String_o **v118; // x28
  int64_t v119; // x8
  struct System_Int32_array *v120; // x9
  Il2CppObject *Entity; // x0
  TerminalPramsManager_c *v122; // x0
  int v123; // w8
  TerminalPramsManager_c *v124; // x0
  int32_t VaildPayType; // w21
  TerminalPramsManager_c *v126; // x0
  MapControl_QuestInfo_o *v127; // x8
  QuestMessageMaster_o *v128; // x19
  int32_t v129; // w2
  System_String_o *ValidMessage; // x0
  System_String_o *v131; // x19
  Il2CppObject *v132; // x20
  System_String_o *v133; // x21
  System_String_o *v134; // x22
  clsQuestCheck___c_c *v135; // x8
  CommonConfirmDialog_ClickDelegate_o *_9__43_2; // x24
  System_String_o *v137; // x23
  Il2CppObject *v138; // x25
  struct clsQuestCheck___c_StaticFields *v139; // x0
  int32_t v140; // w2
  const MethodInfo *v141; // x3
  System_String_o *v142; // x0
  System_String_o *v143; // x0
  System_String_o *v144; // x19
  System_String_o *v145; // x0
  clsQuestCheck___c_c *v146; // x8
  Il2CppObject *v147; // x23
  struct clsQuestCheck___c_StaticFields *v148; // x0
  char v149; // [xsp+3Ch] [xbp-84h]
  char v150; // [xsp+3Ch] [xbp-84h]
  UserGameEntity_o *SelfUserGame; // [xsp+40h] [xbp-80h]
  UserGameEntity_o *v152; // [xsp+40h] [xbp-80h]
  int32_t v153; // [xsp+4Ch] [xbp-74h]
  int32_t key; // [xsp+50h] [xbp-70h]
  int32_t servantEquipSum[2]; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4C3428D & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&RecoverDlgComponent_CallbackFunc_TypeInfo);
    sub_1C32C20(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_1C32C20(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestMessageMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&Method_clsQuestCheck___c__CheckQuestPlayable_b__43_0__);
    sub_1C32C20(&Method_clsQuestCheck___c__CheckQuestPlayable_b__43_10__);
    sub_1C32C20(&Method_clsQuestCheck___c__CheckQuestPlayable_b__43_12__);
    sub_1C32C20(&Method_clsQuestCheck___c__CheckQuestPlayable_b__43_1__);
    sub_1C32C20(&Method_clsQuestCheck___c__CheckQuestPlayable_b__43_2__);
    sub_1C32C20(&Method_clsQuestCheck___c__CheckQuestPlayable_b__43_3__);
    sub_1C32C20(&Method_clsQuestCheck___c__CheckQuestPlayable_b__43_6__);
    sub_1C32C20(&Method_clsQuestCheck___c__DisplayClass43_0__CheckQuestPlayable_b__11__);
    sub_1C32C20(&Method_clsQuestCheck___c__DisplayClass43_0__CheckQuestPlayable_b__8__);
    sub_1C32C20(&Method_clsQuestCheck___c__DisplayClass43_0__CheckQuestPlayable_b__9__);
    sub_1C32C20(&clsQuestCheck___c__DisplayClass43_0_TypeInfo);
    sub_1C32C20(&clsQuestCheck___c_TypeInfo);
    sub_1C32C20(&StringLiteral_43/*"\n"*/);
    sub_1C32C20(&StringLiteral_10884/*"QUEST_MESSAGE_DLG_DECIDE"*/);
    sub_1C32C20(&StringLiteral_10883/*"QUEST_MESSAGE_DLG_CANCEL"*/);
    sub_1C32C20(&StringLiteral_10882/*"QUEST_ITEM_COST_OVER"*/);
    sub_1C32C20(&StringLiteral_12184/*"SHORT_DLG_TITLE"*/);
    sub_1C32C20(&StringLiteral_44/*"\n\n"*/);
    sub_1C32C20(&StringLiteral_2864/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_10823/*"QUEST_AP_MAX_OVER"*/);
    sub_1C32C20(&Method_clsQuestCheck_RefreshTerminalScene__);
    byte_4C3428D = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  v9 = sub_1C32E6C(clsQuestCheck___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_232;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 24) = questInfo;
  v13 = (MapControl_QuestInfo_o **)(v9 + 24);
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 24), (int32_t)questInfo, v14, v15);
  SpotID = *(void **)(v9 + 24);
  *(_QWORD *)(v9 + 32) = srcEndTime;
  *(_DWORD *)(v9 + 40) = boostId;
  if ( !SpotID )
    goto LABEL_232;
  v16 = *((_DWORD *)SpotID + 16);
  SpotID = (void *)MapControl_QuestInfo__GetSpotID((MapControl_QuestInfo_o *)SpotID, 0);
  v17 = *v13;
  if ( !*v13 )
    goto LABEL_232;
  questId = v17->fields.questId;
  questPhase = v17->fields.questPhase;
  v20 = (int)SpotID;
  SpotID = (void *)MapControl_QuestInfo__GetActConsumeCost(*v13, 0);
  v22 = *v13;
  if ( !*v13 )
    goto LABEL_232;
  isNotItemConsume = v22->fields.isNotItemConsume;
  v24 = (int)SpotID;
  if ( !clsQuestCheck__IsQuestValid(this, v22, *(_QWORD *)(v9 + 32), v21) )
  {
    v36 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v36, (Il2CppObject *)this, Method_clsQuestCheck_RefreshTerminalScene__, 0);
    clsQuestCheck__OpenQuestTimeOverNoticeDialog(v37, v36, v38);
    goto LABEL_74;
  }
  SpotID = UserGameMaster__getSelfUserGame(0);
  if ( !*v13 )
    goto LABEL_232;
  v25 = (UserGameEntity_o *)SpotID;
  SpotID = MapControl_QuestInfo__GetMine(*v13, 0);
  if ( !SpotID )
    goto LABEL_232;
  v26 = (QuestEntity_o *)SpotID;
  SpotID = (void *)QuestEntity__GetConsumeType((QuestEntity_o *)SpotID, 0);
  if ( (_DWORD)SpotID == 1 )
  {
    if ( !v25 )
      goto LABEL_232;
    if ( v24 > v25->fields.actMax )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12184/*"SHORT_DLG_TITLE"*/, 0);
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_10823/*"QUEST_AP_MAX_OVER"*/, 0);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v29 = (CommonUI_o *)SpotID;
      v30 = clsQuestCheck___c_TypeInfo;
      if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
        v30 = clsQuestCheck___c_TypeInfo;
      }
      _9__43_3 = v30->static_fields->__9__43_3;
      if ( !_9__43_3 )
      {
        if ( !v30->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v30);
          v30 = clsQuestCheck___c_TypeInfo;
        }
        v32 = (Il2CppObject *)v30->static_fields->__9;
        _9__43_3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(_9__43_3, v32, Method_clsQuestCheck___c__CheckQuestPlayable_b__43_3__, 0);
        static_fields = clsQuestCheck___c_TypeInfo->static_fields;
        static_fields->__9__43_3 = _9__43_3;
        sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__43_3, (int32_t)_9__43_3, v34, v35);
      }
      if ( !v29 )
        goto LABEL_232;
      CommonUI__OpenNotificationDialog(v29, v27, v28, _9__43_3, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
      goto LABEL_74;
    }
  }
  v153 = v20;
  key = v16;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C342AC )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C342AC = 1;
  }
  v39 = TerminalPramsManager_TypeInfo;
  v40 = questPhase;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v39 = TerminalPramsManager_TypeInfo;
  }
  v39->static_fields->_QuestId_k__BackingField = questId;
  v41 = *(_QWORD *)(v9 + 32);
  if ( !byte_4C342AD )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    v39 = TerminalPramsManager_TypeInfo;
    byte_4C342AD = 1;
  }
  if ( !v39->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v39);
    v39 = TerminalPramsManager_TypeInfo;
  }
  v42 = v39->static_fields;
  v42->_EndTime_k__BackingField = v41;
  v42->lastPlayQuestConsumeAp = v24;
  TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(0);
  SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_232;
  SpotID = DataManager__GetMasterData_object_(
             (DataManager_o *)SpotID,
             (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SpotID )
    goto LABEL_232;
  v43 = (UserServantMaster_o *)SpotID;
  UserServantMaster__getCount((UserServantMaster_o *)SpotID, &servantEquipSum[1], servantEquipSum, 1, 0);
  SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_232;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)SpotID,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v43, 1, 0) )
  {
    SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v25 )
      goto LABEL_232;
    v45 = (CommonUI_o *)SpotID;
    v46 = servantEquipSum[1];
    svtKeep = v25->fields.svtKeep;
    SpotID = clsQuestCheck___c_TypeInfo;
    if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
      SpotID = clsQuestCheck___c_TypeInfo;
    }
    v48 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)SpotID + 23) + 32LL);
    if ( !v48 )
    {
      if ( !*((_DWORD *)SpotID + 56) )
      {
        j_il2cpp_runtime_class_init_0(SpotID);
        SpotID = clsQuestCheck___c_TypeInfo;
      }
      v49 = (Il2CppObject *)**((_QWORD **)SpotID + 23);
      v48 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C32E6C(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v48,
        v49,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__43_0__,
        0);
      v50 = clsQuestCheck___c_TypeInfo->static_fields;
      v50->__9__43_0 = v48;
      sub_1C32BC4((CGThumbnailListItem_o *)&v50->__9__43_0, (int32_t)v48, v51, v52);
    }
    if ( !v45 )
      goto LABEL_232;
    v53 = v45;
    v54 = v46;
    v55 = svtKeep;
    v56 = 0;
    goto LABEL_73;
  }
  SpotID = (void *)UserServantMaster__CheckEquipAdd(v43, 1, 1, 0);
  if ( ((unsigned __int8)SpotID & 1) != 0 )
  {
    SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v25 )
      goto LABEL_232;
    v57 = (CommonUI_o *)SpotID;
    v58 = servantEquipSum[0];
    svtEquipKeep = v25->fields.svtEquipKeep;
    SpotID = clsQuestCheck___c_TypeInfo;
    if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
      SpotID = clsQuestCheck___c_TypeInfo;
    }
    v48 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)SpotID + 23) + 40LL);
    if ( !v48 )
    {
      if ( !*((_DWORD *)SpotID + 56) )
      {
        j_il2cpp_runtime_class_init_0(SpotID);
        SpotID = clsQuestCheck___c_TypeInfo;
      }
      v60 = (Il2CppObject *)**((_QWORD **)SpotID + 23);
      v48 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C32E6C(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v48,
        v60,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__43_1__,
        0);
      v61 = clsQuestCheck___c_TypeInfo->static_fields;
      v61->__9__43_1 = v48;
      sub_1C32BC4((CGThumbnailListItem_o *)&v61->__9__43_1, (int32_t)v48, v62, v63);
    }
    if ( !v57 )
      goto LABEL_232;
    v56 = 1;
    v53 = v57;
    v54 = v58;
LABEL_72:
    v55 = svtEquipKeep;
LABEL_73:
    CommonUI__OpenSvtFrameShortDlg(v53, v54, v55, v56, 1, v48, 0, 0);
LABEL_74:
    SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( SpotID )
    {
      ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)SpotID, 0);
      return 0;
    }
    goto LABEL_232;
  }
  if ( !MasterData_object )
    goto LABEL_232;
  if ( UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)MasterData_object, 0, 0) )
  {
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)MasterData_object, 0);
    SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v25 )
      goto LABEL_232;
    v65 = (CommonUI_o *)SpotID;
    if ( !byte_4C31CFA )
    {
      sub_1C32C20(&BalanceConfig_TypeInfo);
      byte_4C31CFA = 1;
    }
    v66 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v66 = BalanceConfig_TypeInfo;
    }
    SpotID = clsQuestCheck___c_TypeInfo;
    svtEquipKeep = v66->static_fields->CommandCodeFrameMax;
    if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
      SpotID = clsQuestCheck___c_TypeInfo;
    }
    v48 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)SpotID + 23) + 48LL);
    if ( !v48 )
    {
      if ( !*((_DWORD *)SpotID + 56) )
      {
        j_il2cpp_runtime_class_init_0(SpotID);
        SpotID = clsQuestCheck___c_TypeInfo;
      }
      v67 = (Il2CppObject *)**((_QWORD **)SpotID + 23);
      v48 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C32E6C(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v48,
        v67,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__43_6__,
        0);
      v68 = clsQuestCheck___c_TypeInfo->static_fields;
      v68->__9__43_6 = v48;
      sub_1C32BC4((CGThumbnailListItem_o *)&v68->__9__43_6, (int32_t)v48, v69, v70);
    }
    if ( !v65 )
      goto LABEL_232;
    v56 = 2;
    v53 = v65;
    v54 = Count;
    goto LABEL_72;
  }
  SpotID = (void *)QuestEntity__GetConsumeType(v26, 0);
  v73 = v20;
  v74 = v40;
  switch ( (int)SpotID )
  {
    case 1:
      if ( !v25 )
        goto LABEL_232;
      if ( v24 <= UserGameEntity__getAct(v25, 0) )
        goto LABEL_162;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v76 = (RecoverDlgComponent_CallbackFunc_o *)sub_1C32E6C(RecoverDlgComponent_CallbackFunc_TypeInfo);
      RecoverDlgComponent_CallbackFunc___ctor(
        v76,
        (Il2CppObject *)v9,
        Method_clsQuestCheck___c__DisplayClass43_0__CheckQuestPlayable_b__8__,
        0);
      if ( !Instance )
        goto LABEL_232;
      v77 = (CommonUI_o *)Instance;
      v78 = v24;
      v79 = v76;
      v80 = 0;
      goto LABEL_130;
    case 2:
      if ( !v25 )
        goto LABEL_232;
      if ( v24 <= UserGameEntity__getRp(v25, 0) )
        goto LABEL_162;
      v81 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v82 = (RecoverDlgComponent_CallbackFunc_o *)sub_1C32E6C(RecoverDlgComponent_CallbackFunc_TypeInfo);
      RecoverDlgComponent_CallbackFunc___ctor(
        v82,
        (Il2CppObject *)v9,
        Method_clsQuestCheck___c__DisplayClass43_0__CheckQuestPlayable_b__9__,
        0);
      if ( !v81 )
        goto LABEL_232;
      CommonUI__OpenRpRecoverItemListDialog((CommonUI_o *)v81, v24, v82, 0, 0);
      return 0;
    case 3:
      ItemConsumeEntity = QuestEntity__getItemConsumeEntity(v26, isNotItemConsume, 0);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      v84 = DataManager__GetMasterData_object_(
              (DataManager_o *)SpotID,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      v85 = DataManager__GetMasterData_object_(
              (DataManager_o *)SpotID,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
      SelfUserGame = UserGameMaster__getSelfUserGame(0);
      if ( !ItemConsumeEntity )
        goto LABEL_162;
      v86 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0) )
        goto LABEL_162;
      v149 = 0;
      v87 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C31812 )
        {
          sub_1C32C20(&NetworkManager_TypeInfo);
          byte_4C31812 = 1;
        }
        SpotID = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          SpotID = NetworkManager_TypeInfo;
        }
        itemIds = ItemConsumeEntity->fields.itemIds;
        if ( !itemIds )
          goto LABEL_232;
        if ( (unsigned int)v87 >= LODWORD(itemIds->max_length) )
          goto LABEL_233;
        if ( !v84 )
          goto LABEL_232;
        SpotID = UserItemMaster__GetEntity(
                   (UserItemMaster_o *)v84,
                   *(_QWORD *)(*((_QWORD *)SpotID + 23) + 64LL),
                   itemIds->m_Items[v87],
                   0);
        v89 = ItemConsumeEntity->fields.itemIds;
        if ( !v89 )
          goto LABEL_232;
        if ( (unsigned int)v87 >= LODWORD(v89->max_length) )
          goto LABEL_233;
        if ( !v85 )
          goto LABEL_232;
        v90 = (int *)SpotID;
        SpotID = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)v85,
                   v89->m_Items[v87],
                   (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !SpotID )
          goto LABEL_232;
        v91 = (System_String_o **)SpotID;
        if ( *((_DWORD *)SpotID + 12) == 1 )
        {
          if ( !SelfUserGame )
            goto LABEL_232;
          qp = SelfUserGame->fields.qp;
        }
        else if ( v90 )
        {
          SpotID = (void *)ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0);
          qp = 0;
          if ( ((unsigned __int8)SpotID & 1) != 0 )
            qp = v90[7];
        }
        else
        {
          qp = 0;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_232;
        if ( (unsigned int)v87 >= LODWORD(nums->max_length) )
          goto LABEL_233;
        if ( qp < nums->m_Items[v87] )
        {
          v86 = System_String__Concat_63556792(v86, (System_String_o *)StringLiteral_43/*"\n"*/, v91[3], 0);
          v149 = 1;
        }
        ++v87;
      }
      while ( QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, v87, 0) );
      v74 = v40;
      v73 = v153;
      if ( (v149 & 1) == 0 )
        goto LABEL_162;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v94 = LocalizationManager__Get((System_String_o *)StringLiteral_10882/*"QUEST_ITEM_COST_OVER"*/, 0);
      v95 = System_String__Format(v94, (Il2CppObject *)v86, 0);
      v96 = System_String__Concat_63518544(v95, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0);
      v97 = LocalizationManager__Get((System_String_o *)StringLiteral_2864/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0);
      v98 = System_String__Concat_63518544(v96, v97, 0);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v99 = (CommonUI_o *)SpotID;
      v100 = clsQuestCheck___c_TypeInfo;
      if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
        v100 = clsQuestCheck___c_TypeInfo;
      }
      v101 = (System_String_o *)StringLiteral_1/*""*/;
      _9__43_10 = v100->static_fields->__9__43_10;
      if ( _9__43_10 )
        goto LABEL_230;
      if ( !v100->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v100);
        v100 = clsQuestCheck___c_TypeInfo;
      }
      v103 = (Il2CppObject *)v100->static_fields->__9;
      _9__43_10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(_9__43_10, v103, Method_clsQuestCheck___c__CheckQuestPlayable_b__43_10__, 0);
      v106 = clsQuestCheck___c_TypeInfo->static_fields;
      v106->__9__43_10 = _9__43_10;
      p__9__43_10 = (CGThumbnailListItem_o *)&v106->__9__43_10;
      goto LABEL_229;
    case 4:
      if ( !v25 )
        goto LABEL_232;
      if ( v24 > UserGameEntity__getAct(v25, 0) )
      {
        v108 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v109 = (RecoverDlgComponent_CallbackFunc_o *)sub_1C32E6C(RecoverDlgComponent_CallbackFunc_TypeInfo);
        RecoverDlgComponent_CallbackFunc___ctor(
          v109,
          (Il2CppObject *)v9,
          Method_clsQuestCheck___c__DisplayClass43_0__CheckQuestPlayable_b__11__,
          0);
        if ( v108 )
        {
          v80 = 1;
          v77 = (CommonUI_o *)v108;
          v78 = v24;
          v79 = v109;
LABEL_130:
          CommonUI__OpenApRecoverItemListDialog(v77, v78, v79, v80, 0);
          return 0;
        }
LABEL_232:
        sub_1C32E7C(SpotID);
      }
      v110 = QuestEntity__getItemConsumeEntity(v26, isNotItemConsume, 0);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      v111 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      v112 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
      v152 = UserGameMaster__getSelfUserGame(0);
      if ( v110 )
      {
        v113 = (System_String_o *)StringLiteral_1/*""*/;
        if ( QuestConsumeItemEntity__IsAvailableAt(v110, 0, 0) )
        {
          v150 = 0;
          v114 = 0;
          do
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4C31812 )
            {
              sub_1C32C20(&NetworkManager_TypeInfo);
              byte_4C31812 = 1;
            }
            SpotID = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              SpotID = NetworkManager_TypeInfo;
            }
            v115 = v110->fields.itemIds;
            if ( !v115 )
              goto LABEL_232;
            if ( (unsigned int)v114 >= LODWORD(v115->max_length) )
              goto LABEL_233;
            if ( !v111 )
              goto LABEL_232;
            SpotID = UserItemMaster__GetEntity(
                       (UserItemMaster_o *)v111,
                       *(_QWORD *)(*((_QWORD *)SpotID + 23) + 64LL),
                       v115->m_Items[v114],
                       0);
            v116 = v110->fields.itemIds;
            if ( !v116 )
              goto LABEL_232;
            if ( (unsigned int)v114 >= LODWORD(v116->max_length) )
              goto LABEL_233;
            if ( !v112 )
              goto LABEL_232;
            v117 = (int *)SpotID;
            SpotID = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v112,
                       v116->m_Items[v114],
                       (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( !SpotID )
              goto LABEL_232;
            v118 = (System_String_o **)SpotID;
            if ( *((_DWORD *)SpotID + 12) == 1 )
            {
              if ( !v152 )
                goto LABEL_232;
              v119 = v152->fields.qp;
            }
            else if ( v117 )
            {
              SpotID = (void *)ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0);
              v119 = 0;
              if ( ((unsigned __int8)SpotID & 1) != 0 )
                v119 = v117[7];
            }
            else
            {
              v119 = 0;
            }
            v120 = v110->fields.nums;
            if ( !v120 )
              goto LABEL_232;
            if ( (unsigned int)v114 >= LODWORD(v120->max_length) )
LABEL_233:
              sub_1C32E84(SpotID);
            if ( v119 < v120->m_Items[v114] )
            {
              v113 = System_String__Concat_63556792(v113, (System_String_o *)StringLiteral_43/*"\n"*/, v118[3], 0);
              v150 = 1;
            }
            ++v114;
          }
          while ( QuestConsumeItemEntity__IsAvailableAt(v110, v114, 0) );
          v74 = v40;
          v73 = v153;
          if ( (v150 & 1) != 0 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v142 = LocalizationManager__Get((System_String_o *)StringLiteral_10882/*"QUEST_ITEM_COST_OVER"*/, 0);
            v143 = System_String__Format(v142, (Il2CppObject *)v113, 0);
            v144 = System_String__Concat_63518544(v143, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0);
            v145 = LocalizationManager__Get((System_String_o *)StringLiteral_2864/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0);
            v98 = System_String__Concat_63518544(v144, v145, 0);
            SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v99 = (CommonUI_o *)SpotID;
            v146 = clsQuestCheck___c_TypeInfo;
            if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
              v146 = clsQuestCheck___c_TypeInfo;
            }
            v101 = (System_String_o *)StringLiteral_1/*""*/;
            _9__43_10 = v146->static_fields->__9__43_12;
            if ( !_9__43_10 )
            {
              if ( !v146->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v146);
                v146 = clsQuestCheck___c_TypeInfo;
              }
              v147 = (Il2CppObject *)v146->static_fields->__9;
              _9__43_10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
              System_Action___ctor(_9__43_10, v147, Method_clsQuestCheck___c__CheckQuestPlayable_b__43_12__, 0);
              v148 = clsQuestCheck___c_TypeInfo->static_fields;
              v148->__9__43_12 = _9__43_10;
              p__9__43_10 = (CGThumbnailListItem_o *)&v148->__9__43_12;
LABEL_229:
              sub_1C32BC4(p__9__43_10, (int32_t)_9__43_10, v104, v105);
            }
LABEL_230:
            if ( !v99 )
              goto LABEL_232;
            CommonUI__OpenNotificationDialog(v99, v101, v98, _9__43_10, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
            goto LABEL_74;
          }
        }
      }
LABEL_162:
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      SpotID = DataManager__GetMasterData_object_(
                 (DataManager_o *)SpotID,
                 (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !SpotID )
        goto LABEL_232;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)SpotID,
                 key,
                 (const MethodInfo_3396838 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( Entity && WarEntity__IsFolder((WarEntity_o *)Entity, 0) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C342AE )
        {
          sub_1C32C20(&TerminalPramsManager_TypeInfo);
          byte_4C342AE = 1;
        }
        v122 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v122 = TerminalPramsManager_TypeInfo;
        }
        v123 = 3;
      }
      else
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C342AE )
        {
          sub_1C32C20(&TerminalPramsManager_TypeInfo);
          byte_4C342AE = 1;
        }
        v122 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v122 = TerminalPramsManager_TypeInfo;
        }
        v123 = 2;
      }
      v122->static_fields->_DispState_k__BackingField = v123;
      if ( !v122->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v122);
      if ( !byte_4C342AF )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C342AF = 1;
      }
      v124 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v124 = TerminalPramsManager_TypeInfo;
      }
      v124->static_fields->_IsDoneShortcut_k__BackingField = 0;
      if ( !byte_4C342B0 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        v124 = TerminalPramsManager_TypeInfo;
        byte_4C342B0 = 1;
      }
      if ( !v124->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v124);
        v124 = TerminalPramsManager_TypeInfo;
      }
      v124->static_fields->_PhaseCnt_k__BackingField = v74;
      if ( !byte_4C342B1 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        v124 = TerminalPramsManager_TypeInfo;
        byte_4C342B1 = 1;
      }
      if ( !v124->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v124);
        v124 = TerminalPramsManager_TypeInfo;
      }
      v124->static_fields->_SpotId_k__BackingField = v73;
      if ( !byte_4C342B2 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        v124 = TerminalPramsManager_TypeInfo;
        byte_4C342B2 = 1;
      }
      if ( !v124->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v124);
        v124 = TerminalPramsManager_TypeInfo;
      }
      v124->static_fields->_WarId_k__BackingField = key;
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      SpotID = DataManager__GetMasterData_object_(
                 (DataManager_o *)SpotID,
                 (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_GachaMaster___);
      if ( !SpotID )
        goto LABEL_232;
      VaildPayType = GachaMaster__getVaildPayType((GachaMaster_o *)SpotID, 0);
      if ( !byte_4C33F3A )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C33F3A = 1;
      }
      v126 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v126 = TerminalPramsManager_TypeInfo;
      }
      v126->static_fields->_SummonType_k__BackingField = VaildPayType;
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      SpotID = DataManager__GetMasterData_object_(
                 (DataManager_o *)SpotID,
                 (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMessageMaster___);
      v127 = *v13;
      if ( !*v13 )
        goto LABEL_232;
      v128 = (QuestMessageMaster_o *)SpotID;
      SpotID = (void *)MapControl_QuestInfo__GetPhaseMax(v127, 0);
      if ( !v128 )
        goto LABEL_232;
      if ( v74 + 1 >= (int)SpotID )
        v129 = (int)SpotID;
      else
        v129 = v74 + 1;
      v71 = 1;
      ValidMessage = QuestMessageMaster__GetValidMessage(v128, questId, v129, 1, 0);
      if ( ValidMessage )
      {
        v131 = ValidMessage;
        v132 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v133 = LocalizationManager__Get((System_String_o *)StringLiteral_10884/*"QUEST_MESSAGE_DLG_DECIDE"*/, 0);
        SpotID = LocalizationManager__Get((System_String_o *)StringLiteral_10883/*"QUEST_MESSAGE_DLG_CANCEL"*/, 0);
        v134 = (System_String_o *)SpotID;
        v135 = clsQuestCheck___c_TypeInfo;
        if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
          v135 = clsQuestCheck___c_TypeInfo;
        }
        _9__43_2 = v135->static_fields->__9__43_2;
        v137 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !_9__43_2 )
        {
          if ( !v135->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v135);
            v135 = clsQuestCheck___c_TypeInfo;
          }
          v138 = (Il2CppObject *)v135->static_fields->__9;
          _9__43_2 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C32E6C(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            _9__43_2,
            v138,
            Method_clsQuestCheck___c__CheckQuestPlayable_b__43_2__,
            0);
          v139 = clsQuestCheck___c_TypeInfo->static_fields;
          v139->__9__43_2 = _9__43_2;
          sub_1C32BC4((CGThumbnailListItem_o *)&v139->__9__43_2, (int32_t)_9__43_2, v140, v141);
        }
        if ( v132 )
        {
          v71 = 1;
          CommonUI__OpenConfirmDialog_31190412((CommonUI_o *)v132, v137, v131, v133, v134, _9__43_2, 0, 1, 0, 0);
          return v71;
        }
        goto LABEL_232;
      }
      return v71;
    default:
      goto LABEL_162;
  }
}


// local variable allocation has failed, the output may be wrong!
bool clsQuestCheck__CheckQuestPlayableNow(
        clsQuestCheck_o *this,
        int32_t questId,
        bool isIncludeTempData,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x0
  bool v9; // w0
  const MethodInfo *v10; // x3
  bool IsOpenByTime; // w8
  QuestEntity_o *v13; // [xsp+0h] [xbp-50h] BYREF
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3426E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C3426E = 1;
  }
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, (const MethodInfo *)isIncludeTempData) )
    return 0;
  v13 = 0;
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_26;
  if ( UserQuestMaster__TryGetEntity(
         (UserQuestMaster_o *)Master_object,
         &entity,
         (int64_t)v8[2].fields.list[1].monitor,
         questId,
         0) )
  {
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_26;
    if ( UserQuestEntity__IsNotExpired(entity, 0) )
      return 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !v8 )
LABEL_26:
    sub_1C32E7C(v8);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v8,
          (Il2CppObject **)&v13,
          questId,
          (const MethodInfo_3396884 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)v13;
  if ( !v13 )
    goto LABEL_26;
  IsOpenByTime = QuestEntity__IsOpenByTime(v13, 0, 0);
  v9 = 0;
  if ( IsOpenByTime )
    return clsQuestCheck__IsReleasedQuest(this, questId, isIncludeTempData, v10);
  return v9;
}


void clsQuestCheck__DeleteContinueData(const MethodInfo *method)
{
  clsQuestCheck_c *v1; // x0
  System_String_o *KEY_QUEST_START_EFFECT; // x19

  if ( (byte_4C3426B & 1) == 0 )
  {
    sub_1C32C20(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C32C20(&clsQuestCheck_TypeInfo);
    byte_4C3426B = 1;
  }
  v1 = clsQuestCheck_TypeInfo;
  if ( !clsQuestCheck_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
    v1 = clsQuestCheck_TypeInfo;
  }
  KEY_QUEST_START_EFFECT = v1->static_fields->KEY_QUEST_START_EFFECT;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__DeleteKey(KEY_QUEST_START_EFFECT, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


int32_t clsQuestCheck__GetBeforeClearQuestId(
        clsQuestCheck_o *this,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  bool v5; // w8
  int32_t result; // w0
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4C34280 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C34280 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v5 = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0);
  result = -1;
  if ( !v5 || !is_quest_after_action )
    return result;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
LABEL_17:
    sub_1C32E7C(Instance);
  if ( !QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0) )
    return -1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C31A97 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C31A97 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  return v7->static_fields->_QuestId_k__BackingField;
}


System_Int32_array *clsQuestCheck__GetEventQuestIdListPlayable(
        clsQuestCheck_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x20
  System_Int32_array *Master_object; // x0
  const MethodInfo *v7; // x3
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v9; // x21
  unsigned __int64 v10; // x23
  int32_t v11; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_4C34289 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C34289 = 1;
  }
  if ( eventId <= 0 )
    return (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 0);
  v5 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Master_object )
    goto LABEL_21;
  Master_object = QuestGroupMaster__GetQuestIdListByEventId((QuestGroupMaster_o *)Master_object, eventId, 0);
  if ( !Master_object )
    goto LABEL_21;
  max_length = Master_object->max_length;
  v9 = Master_object;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    do
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1C32E84(Master_object);
      v11 = v9->m_Items[v10];
      Master_object = (System_Int32_array *)clsQuestCheck__CheckQuestPlayableNow(this, v11, 0, v7);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v5 )
          goto LABEL_21;
        items = v5->fields._items;
        v13 = Method_System_Collections_Generic_List_int__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v5,
            v11,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v5->fields._size = size + 1;
          items->m_Items[size] = v11;
        }
      }
      LODWORD(max_length) = v9->max_length;
    }
    while ( (__int64)++v10 < (int)max_length );
  }
  if ( !v5 )
LABEL_21:
    sub_1C32E7C(Master_object);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *clsQuestCheck__GetNewPlayableEventQuestId(
        clsQuestCheck_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  TerminalPramsManager_c *v6; // x0
  System_String_o *ClearEventQuestIds_k__BackingField; // x0
  System_String_array *v8; // x21
  System_Converter_object__int__o *v9; // x22
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Int32_array *v17; // x19
  __int64 v18; // x20
  TerminalPramsManager_c *v19; // x0
  CGThumbnailListItem_o *v20; // x0
  __int64 v22; // x19
  TerminalPramsManager_c *v23; // x0
  CGThumbnailListItem_o *p_ClearEventQuestIds_k__BackingField; // x0

  if ( (byte_4C34288 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_ConvertAll_string__int___);
    sub_1C32C20(&System_Converter_string__int__TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Except_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Int32_Parse__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C34288 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C342AB )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C342AB = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( System_String__IsNullOrEmpty(v5->static_fields->_ClearEventQuestIds_k__BackingField, 0) )
    return (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C342AB )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C342AB = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  ClearEventQuestIds_k__BackingField = v6->static_fields->_ClearEventQuestIds_k__BackingField;
  if ( !ClearEventQuestIds_k__BackingField
    || (v8 = System_String__Split(ClearEventQuestIds_k__BackingField, 0x2Cu, 0, 0),
        v9 = (System_Converter_object__int__o *)sub_1C32E6C(System_Converter_string__int__TypeInfo),
        System_Converter_object__int____ctor(v9, 0, Method_System_Int32_Parse__, 0),
        (ClearEventQuestIds_k__BackingField = (System_String_o *)System_Array__ConvertAll_object__int_(
                                                                   (System_Object_array *)v8,
                                                                   (System_Converter_TInput__TOutput__o *)v9,
                                                                   (const MethodInfo_31E0A74 *)Method_System_Array_ConvertAll_string__int___)) == 0) )
  {
    sub_1C32E7C(ClearEventQuestIds_k__BackingField);
  }
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)ClearEventQuestIds_k__BackingField;
  if ( !ClearEventQuestIds_k__BackingField[1].klass )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = StringLiteral_1/*""*/;
    if ( !byte_4C342AA )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C342AA = 1;
    }
    v23 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v23 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (CGThumbnailListItem_o *)&v23->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = (CGThumbnailListItem_c *)v22;
    sub_1C32BC4(p_ClearEventQuestIds_k__BackingField, v22, (int32_t)v10, v11);
    TerminalPramsManager__ClearEventQuestIds_SaveData(0);
    return (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 0);
  }
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)clsQuestCheck__GetEventQuestIdListPlayable(
                                                               this,
                                                               eventId,
                                                               v10);
  v14 = System_Linq_Enumerable__Except_int_(
          v13,
          v12,
          (const MethodInfo_3102C34 *)Method_System_Linq_Enumerable_Except_int___);
  v17 = System_Linq_Enumerable__ToArray_int_(
          v14,
          (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v18 = StringLiteral_1/*""*/;
  if ( !byte_4C342AA )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C342AA = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v20 = (CGThumbnailListItem_o *)&v19->static_fields->_ClearEventQuestIds_k__BackingField;
  v20->klass = (CGThumbnailListItem_c *)v18;
  sub_1C32BC4(v20, v18, v15, v16);
  TerminalPramsManager__ClearEventQuestIds_SaveData(0);
  return v17;
}


System_Collections_Generic_List_QuestEntity__o *clsQuestCheck__GetQuestEntityByQuestId(
        clsQuestCheck_o *this,
        System_Collections_Generic_List_int__o *qids,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x19
  Il2CppObject *Instance; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x21
  _BOOL8 v7; // x0
  Il2CppObject *Entity; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x1
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  System_Collections_Generic_List_Enumerator_int__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C34286 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_QuestEntity__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C34286 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v4 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___),
        !qids) )
  {
    sub_1C32E7C(Instance);
  }
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    qids,
    (const MethodInfo_377C26C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v18 = v17;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_int___MoveNext(
           &v18,
           (const MethodInfo_351F190 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v7 )
      break;
    if ( !v6 )
      sub_1C32E7C(v7);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v6,
               v18.fields._current,
               (const MethodInfo_3396838 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    v11 = Entity;
    if ( !v4 )
      sub_1C32E7C(Entity);
    items = v4->fields._items;
    v13 = Method_System_Collections_Generic_List_QuestEntity__Add__;
    ++v4->fields._version;
    if ( !items )
      sub_1C32E7C(Entity);
    size = v4->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v4,
        Entity,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    }
    else
    {
      v15 = &items->obj.klass + size;
      v4->fields._size = size + 1;
      v15[4] = (Il2CppClass *)v11;
      sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v11, v9, v10);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v18,
    (const MethodInfo_351F18C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return (System_Collections_Generic_List_QuestEntity__o *)v4;
}


System_Collections_Generic_List_QuestEntity__o *clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
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


System_Collections_Generic_List_int__o *clsQuestCheck__GetReleaseQuestIdByServantFriendShip(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldFriendShipRank,
        int32_t type_flag,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v9; // x19
  DataManager_o *Instance; // x0
  QuestReleaseEntity_array *ListByType; // x24
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x25
  unsigned int v14; // w28
  QuestReleaseEntity_o *v15; // x8
  int32_t questId; // w26
  const MethodInfo *v17; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v21; // x23
  const MethodInfo *v22; // x4
  int32_t v23; // w20
  int v24; // w21
  System_Collections_Generic_List_Enumerator_int__o v26; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v27; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C34285 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor___78010240);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C34285 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v9 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_32;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 9, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_32;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1C32E84(Instance);
      v15 = ListByType->m_Items[v14];
      if ( !v15 )
        break;
      if ( v15->fields.targetId == svt_id )
      {
        if ( !v13 )
          break;
        questId = v15->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v13,
                                      questId,
                                      (const MethodInfo_3396838 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, questId, oldFriendShipRank, 9, v17);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v9 )
              break;
            items = v9->fields._items;
            v19 = Method_System_Collections_Generic_List_int__Add__;
            ++v9->fields._version;
            if ( !items )
              break;
            size = v9->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v9,
                questId,
                *(const MethodInfo_377B798 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              v9->fields._size = size + 1;
              items->m_Items[size] = questId;
            }
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_22;
    }
LABEL_32:
    sub_1C32E7C(Instance);
  }
LABEL_22:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v21 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_58175596(
      v21,
      (System_Collections_Generic_IEnumerable_T__o *)v9,
      (const MethodInfo_377B06C *)Method_System_Collections_Generic_List_int___ctor___78010240);
    Instance = (DataManager_o *)clsQuestCheck__GetReleaseQuestIdByServantFriendShip(this, svt_id, -1, type_flag, v22);
    if ( !Instance )
      goto LABEL_32;
    v9 = (System_Collections_Generic_List_int__o *)Instance;
    v23 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v23 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_int___get_Item(
                                      v9,
                                      v23,
                                      (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v21 )
          goto LABEL_32;
        v24 = (int)Instance;
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v26,
          v21,
          (const MethodInfo_377C26C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v27 = v26;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v27,
                  (const MethodInfo_351F190 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v24 == v27.fields._current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v9,
              v23,
              (const MethodInfo_377CF18 *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v27,
          (const MethodInfo_351F18C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( --v23 < 0 )
          return v9;
      }
    }
  }
  return v9;
}


System_Collections_Generic_List_int__o *clsQuestCheck__GetReleaseQuestIdByServantLimit(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLimitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__GetReleaseQuestIdByServantLimit_35871164(this, svt_id, oldLimitCount, 494, v4);
}


System_Collections_Generic_List_int__o *clsQuestCheck__GetReleaseQuestIdByServantLimit_35871164(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLimitCount,
        int32_t type_flag,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v9; // x19
  DataManager_o *Instance; // x0
  QuestReleaseEntity_array *ListByType; // x24
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x25
  unsigned int v14; // w28
  QuestReleaseEntity_o *v15; // x8
  int32_t questId; // w26
  const MethodInfo *v17; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v21; // x23
  const MethodInfo *v22; // x4
  int32_t v23; // w20
  int v24; // w21
  System_Collections_Generic_List_Enumerator_int__o v26; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v27; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C34282 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor___78010240);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C34282 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v9 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_32;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_32;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1C32E84(Instance);
      v15 = ListByType->m_Items[v14];
      if ( !v15 )
        break;
      if ( v15->fields.targetId == svt_id )
      {
        if ( !v13 )
          break;
        questId = v15->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v13,
                                      questId,
                                      (const MethodInfo_3396838 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, questId, oldLimitCount, 7, v17);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v9 )
              break;
            items = v9->fields._items;
            v19 = Method_System_Collections_Generic_List_int__Add__;
            ++v9->fields._version;
            if ( !items )
              break;
            size = v9->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v9,
                questId,
                *(const MethodInfo_377B798 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              v9->fields._size = size + 1;
              items->m_Items[size] = questId;
            }
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_22;
    }
LABEL_32:
    sub_1C32E7C(Instance);
  }
LABEL_22:
  if ( (oldLimitCount & 0x80000000) == 0 )
  {
    v21 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_58175596(
      v21,
      (System_Collections_Generic_IEnumerable_T__o *)v9,
      (const MethodInfo_377B06C *)Method_System_Collections_Generic_List_int___ctor___78010240);
    Instance = (DataManager_o *)clsQuestCheck__GetReleaseQuestIdByServantLimit_35871164(
                                  this,
                                  svt_id,
                                  -1,
                                  type_flag,
                                  v22);
    if ( !Instance )
      goto LABEL_32;
    v9 = (System_Collections_Generic_List_int__o *)Instance;
    v23 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v23 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_int___get_Item(
                                      v9,
                                      v23,
                                      (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v21 )
          goto LABEL_32;
        v24 = (int)Instance;
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v26,
          v21,
          (const MethodInfo_377C26C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v27 = v26;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v27,
                  (const MethodInfo_351F190 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v24 == v27.fields._current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v9,
              v23,
              (const MethodInfo_377CF18 *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v27,
          (const MethodInfo_351F18C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( --v23 < 0 )
          return v9;
      }
    }
  }
  return v9;
}


System_Collections_Generic_List_int__o *clsQuestCheck__GetReleaseQuestIdByServantLimit_35872180(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLimitCount,
        int32_t newLimitCount,
        int32_t type_flag,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v10; // x19
  Il2CppObject *Instance; // x0
  QuestReleaseEntity_array *ListByType; // x25
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x26
  unsigned int v15; // w21
  QuestReleaseEntity_o *v16; // x8
  int32_t questId; // w27
  const MethodInfo *v18; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v22; // x24
  int v23; // w8
  __int64 v24; // x29
  QuestReleaseEntity_o *v25; // x8
  int32_t v26; // w27
  const MethodInfo *v27; // x4
  struct System_Int32_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  int32_t v31; // w20
  int v32; // w21
  System_Collections_Generic_List_Enumerator_int__o v35; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v36; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C34283 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C34283 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v10 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_46;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_46;
  max_length = ListByType->max_length;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( v15 < max_length )
    {
      v16 = ListByType->m_Items[v15];
      if ( !v16 )
        goto LABEL_46;
      if ( v16->fields.targetId == svt_id )
      {
        if ( !v14 )
          goto LABEL_46;
        questId = v16->fields.questId;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v14,
                     questId,
                     (const MethodInfo_3396838 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_46;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (Il2CppObject *)clsQuestCheck__IsQuestRelease(this, questId, oldLimitCount, 7, v18);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v10 )
              goto LABEL_46;
            items = v10->fields._items;
            v20 = Method_System_Collections_Generic_List_int__Add__;
            ++v10->fields._version;
            if ( !items )
              goto LABEL_46;
            size = v10->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v10,
                questId,
                *(const MethodInfo_377B798 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v10->fields._size = size + 1;
              items->m_Items[size] = questId;
            }
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_22;
    }
LABEL_47:
    sub_1C32E84(Instance);
  }
LABEL_22:
  v22 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  v23 = ListByType->max_length;
  if ( v23 >= 1 )
  {
    v24 = 0;
    while ( (unsigned int)v24 < v23 )
    {
      v25 = ListByType->m_Items[v24];
      if ( !v25 )
        goto LABEL_46;
      if ( v25->fields.targetId == svt_id )
      {
        if ( !v14 )
          goto LABEL_46;
        v26 = v25->fields.questId;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v14,
                     v26,
                     (const MethodInfo_3396838 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_46;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (Il2CppObject *)clsQuestCheck__IsQuestRelease(this, v26, newLimitCount, 7, v27);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v22 )
              goto LABEL_46;
            v28 = v22->fields._items;
            v29 = Method_System_Collections_Generic_List_int__Add__;
            ++v22->fields._version;
            if ( !v28 )
              goto LABEL_46;
            v30 = v22->fields._size;
            if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v22,
                v26,
                *(const MethodInfo_377B798 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
            }
            else
            {
              v22->fields._size = v30 + 1;
              v28->m_Items[v30] = v26;
            }
          }
        }
      }
      v23 = ListByType->max_length;
      if ( (int)++v24 >= v23 )
        goto LABEL_37;
    }
    goto LABEL_47;
  }
LABEL_37:
  if ( !v22 )
LABEL_46:
    sub_1C32E7C(Instance);
  v31 = v22->fields._size - 1;
  if ( v31 >= 0 )
  {
    while ( 1 )
    {
      Instance = (Il2CppObject *)System_Collections_Generic_List_int___get_Item(
                                   v22,
                                   v31,
                                   (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v10 )
        goto LABEL_46;
      v32 = (int)Instance;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v35,
        v10,
        (const MethodInfo_377C26C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v36 = v35;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v36,
                (const MethodInfo_351F190 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        if ( v32 == v36.fields._current )
        {
          System_Collections_Generic_List_int___RemoveAt(
            v22,
            v31,
            (const MethodInfo_377CF18 *)Method_System_Collections_Generic_List_int__RemoveAt__);
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v36,
        (const MethodInfo_351F18C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      if ( --v31 < 0 )
        return v22;
    }
  }
  return v22;
}


System_Collections_Generic_List_int__o *clsQuestCheck__GetReleaseQuestIdByServantLv(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLv,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__GetReleaseQuestIdByServantLv_35870604(this, svt_id, oldLv, 494, v4);
}


System_Collections_Generic_List_int__o *clsQuestCheck__GetReleaseQuestIdByServantLv_35870604(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLv,
        int32_t type_flag,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v9; // x23
  Il2CppObject *Instance; // x0
  QuestReleaseEntity_array *ListByType; // x24
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x25
  unsigned int v14; // w27
  QuestReleaseEntity_o *v15; // x8
  int32_t questId; // w26
  const MethodInfo *v17; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10

  if ( (byte_4C34281 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C34281 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_23;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 6, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_23;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1C32E84(Instance);
      v15 = ListByType->m_Items[v14];
      if ( !v15 )
        break;
      if ( v15->fields.targetId == svt_id )
      {
        if ( !v13 )
          break;
        questId = v15->fields.questId;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v13,
                     questId,
                     (const MethodInfo_3396838 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (Il2CppObject *)clsQuestCheck__IsQuestRelease(this, questId, oldLv, 6, v17);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v9 )
              break;
            items = v9->fields._items;
            v19 = Method_System_Collections_Generic_List_int__Add__;
            ++v9->fields._version;
            if ( !items )
              break;
            size = v9->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v9,
                questId,
                *(const MethodInfo_377B798 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              v9->fields._size = size + 1;
              items->m_Items[size] = questId;
            }
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v14 >= max_length )
        return v9;
    }
LABEL_23:
    sub_1C32E7C(Instance);
  }
  return v9;
}


System_Collections_Generic_List_QuestEntity__o *clsQuestCheck__GetReleasedQuestEntityListByServantGet(
        clsQuestCheck_o *this,
        int32_t servantId,
        int32_t typeFlag,
        const MethodInfo *method)
{
  QuestReleaseEntity_array *Instance; // x0
  DataManager_o *v6; // x23
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v8; // x19
  System_Collections_Generic_List_object__o *v9; // x22
  int max_length; // w8
  QuestReleaseEntity_array *v11; // x26
  unsigned int v12; // w19
  QuestReleaseEntity_o *v13; // x25
  __int64 v14; // x29
  int32_t questId; // w27
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  QuestReleaseEntity_array **v18; // x28
  System_Func_object__bool__o *v19; // x25
  const MethodInfo *v20; // x4
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppObject *v23; // x1
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  ServantGroupEntity_array *ListByServantID; // x19
  il2cpp_array_size_t v29; // x8
  QuestReleaseEntity_array *v30; // x24
  unsigned __int64 v31; // x29
  int v32; // w8
  unsigned int v33; // w23
  __int64 v34; // x19
  QuestReleaseEntity_o *v35; // x25
  __int64 v36; // x27
  int32_t v37; // w25
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  QuestReleaseEntity_array **v40; // x26
  System_Func_object__bool__o *v41; // x28
  const MethodInfo *v42; // x4
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  Il2CppObject *v45; // x1
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass **v49; // x0
  QuestReleaseMaster_o *v51; // [xsp+0h] [xbp-80h]
  DataManager_o *v52; // [xsp+8h] [xbp-78h]

  if ( (byte_4C34284 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_QuestEntity___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantGroupMaster___);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C32C20(&System_Func_QuestEntity__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_QuestEntity__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_clsQuestCheck___c__DisplayClass33_0__GetReleasedQuestEntityListByServantGet_b__0__);
    sub_1C32C20(&clsQuestCheck___c__DisplayClass33_0_TypeInfo);
    sub_1C32C20(&Method_clsQuestCheck___c__DisplayClass33_1__GetReleasedQuestEntityListByServantGet_b__1__);
    sub_1C32C20(&clsQuestCheck___c__DisplayClass33_1_TypeInfo);
    byte_4C34284 = 1;
  }
  Instance = (QuestReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  v6 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___);
  v8 = DataManager__GetMasterData_object_(
         v6,
         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  if ( !v8 )
    goto LABEL_49;
  v51 = (QuestReleaseMaster_o *)v8;
  Instance = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)v8, 8, 0);
  if ( !Instance )
    goto LABEL_49;
  max_length = Instance->max_length;
  v11 = Instance;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( v12 < max_length )
    {
      v13 = v11->m_Items[v12];
      v14 = sub_1C32E6C(clsQuestCheck___c__DisplayClass33_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v14, 0);
      if ( !v13 )
        goto LABEL_49;
      if ( v13->fields.targetId == servantId )
      {
        if ( !MasterData_object )
          goto LABEL_49;
        questId = v13->fields.questId;
        Instance = (QuestReleaseEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                 questId,
                                                 (const MethodInfo_3396838 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v14 )
          goto LABEL_49;
        *(_QWORD *)(v14 + 16) = Instance;
        v18 = (QuestReleaseEntity_array **)(v14 + 16);
        sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 16), (int32_t)Instance, v16, v17);
        v19 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_QuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v19,
          (Il2CppObject *)v14,
          Method_clsQuestCheck___c__DisplayClass33_0__GetReleasedQuestEntityListByServantGet_b__0__,
          0);
        Instance = (QuestReleaseEntity_array *)BasicHelper__Any_object_(
                                                 (System_Collections_Generic_List_T__o *)v9,
                                                 (System_Func_T__bool__o *)v19,
                                                 (const MethodInfo_30C6790 *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = *v18;
          if ( !*v18 )
            goto LABEL_49;
          Instance = (QuestReleaseEntity_array *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0);
          if ( ((unsigned int)Instance & typeFlag) != 0 )
          {
            Instance = (QuestReleaseEntity_array *)clsQuestCheck__IsQuestRelease(this, questId, -1, 0, v20);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v9 )
                goto LABEL_49;
              v23 = (Il2CppObject *)*v18;
              items = v9->fields._items;
              v25 = Method_System_Collections_Generic_List_QuestEntity__Add__;
              ++v9->fields._version;
              if ( !items )
                goto LABEL_49;
              size = v9->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v9,
                  v23,
                  *(const MethodInfo_37987BC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
              }
              else
              {
                v27 = &items->obj.klass + size;
                v9->fields._size = size + 1;
                v27[4] = (Il2CppClass *)v23;
                sub_1C32BC4((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v23, v21, v22);
              }
            }
          }
        }
      }
      max_length = v11->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_23;
    }
LABEL_50:
    sub_1C32E84(Instance);
  }
LABEL_23:
  Instance = (QuestReleaseEntity_array *)DataManager__GetMasterData_object_(
                                           v6,
                                           (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantGroupMaster___);
  if ( !Instance
    || (ListByServantID = ServantGroupMaster__getListByServantID((ServantGroupMaster_o *)Instance, servantId, 0),
        Instance = QuestReleaseMaster__getListByType(v51, 10, 0),
        !ListByServantID) )
  {
LABEL_49:
    sub_1C32E7C(Instance);
  }
  v29 = ListByServantID->max_length;
  if ( (int)v29 >= 1 )
  {
    v30 = Instance;
    v31 = 0;
    v52 = (DataManager_o *)ListByServantID;
    while ( 1 )
    {
      if ( v31 >= (unsigned int)v29 )
        goto LABEL_50;
      if ( !v30 )
        goto LABEL_49;
      v32 = v30->max_length;
      if ( v32 >= 1 )
        break;
LABEL_47:
      ++v31;
      LODWORD(v29) = v52->fields.m_CancellationTokenSource;
      if ( (__int64)v31 >= (int)v29 )
        return (System_Collections_Generic_List_QuestEntity__o *)v9;
    }
    v33 = 0;
    v34 = *((_QWORD *)&v52->fields._DispLog + v31);
    while ( v33 < v32 )
    {
      v35 = v30->m_Items[v33];
      v36 = sub_1C32E6C(clsQuestCheck___c__DisplayClass33_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v36, 0);
      if ( !v34 || !v35 )
        goto LABEL_49;
      if ( *(_DWORD *)(v34 + 16) == v35->fields.targetId )
      {
        if ( !MasterData_object )
          goto LABEL_49;
        v37 = v35->fields.questId;
        Instance = (QuestReleaseEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                 v37,
                                                 (const MethodInfo_3396838 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v36 )
          goto LABEL_49;
        *(_QWORD *)(v36 + 16) = Instance;
        v40 = (QuestReleaseEntity_array **)(v36 + 16);
        sub_1C32BC4((CGThumbnailListItem_o *)(v36 + 16), (int32_t)Instance, v38, v39);
        v41 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_QuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v41,
          (Il2CppObject *)v36,
          Method_clsQuestCheck___c__DisplayClass33_1__GetReleasedQuestEntityListByServantGet_b__1__,
          0);
        Instance = (QuestReleaseEntity_array *)BasicHelper__Any_object_(
                                                 (System_Collections_Generic_List_T__o *)v9,
                                                 (System_Func_T__bool__o *)v41,
                                                 (const MethodInfo_30C6790 *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = *v40;
          if ( !*v40 )
            goto LABEL_49;
          Instance = (QuestReleaseEntity_array *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0);
          if ( ((unsigned int)Instance & typeFlag) != 0 )
          {
            Instance = (QuestReleaseEntity_array *)clsQuestCheck__IsQuestRelease(this, v37, -1, 0, v42);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v9 )
                goto LABEL_49;
              v45 = (Il2CppObject *)*v40;
              v46 = v9->fields._items;
              v47 = Method_System_Collections_Generic_List_QuestEntity__Add__;
              ++v9->fields._version;
              if ( !v46 )
                goto LABEL_49;
              v48 = v9->fields._size;
              if ( (unsigned int)v48 >= LODWORD(v46->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v9,
                  v45,
                  *(const MethodInfo_37987BC **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
              }
              else
              {
                v49 = &v46->obj.klass + v48;
                v9->fields._size = v48 + 1;
                v49[4] = (Il2CppClass *)v45;
                sub_1C32BC4((CGThumbnailListItem_o *)(v49 + 4), (int32_t)v45, v43, v44);
              }
            }
          }
        }
      }
      v32 = v30->max_length;
      if ( (int)++v33 >= v32 )
        goto LABEL_47;
    }
    goto LABEL_50;
  }
  return (System_Collections_Generic_List_QuestEntity__o *)v9;
}


bool clsQuestCheck__IsConsumeStormPod(clsQuestCheck_o *this, int32_t questId, const MethodInfo *method)
{
  QuestMaster_o *Master_object; // x0
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x19
  Il2CppObject *v6; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  bool v8; // w22
  unsigned int v9; // w21
  struct System_Int32_array *itemIds; // x8
  QuestMaster_o *v11; // x8
  BalanceConfig_c *v12; // x0
  int32_t MasterKind_k__BackingField; // w22
  QuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C34293 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    byte_4C34293 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_26;
  if ( !QuestMaster__TryGetQuestEntity(Master_object, &entity, questId, 0) )
    return 0;
  Master_object = (QuestMaster_o *)entity;
  if ( !entity )
    goto LABEL_26;
  if ( (unsigned int)(QuestEntity__GetConsumeType(entity, 0) - 3) > 1 )
    return 0;
  Master_object = (QuestMaster_o *)entity;
  if ( !entity )
    goto LABEL_26;
  ItemConsumeEntity = QuestEntity__getItemConsumeEntity(entity, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v6 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !ItemConsumeEntity )
    return 0;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)v6;
  Master_object = (QuestMaster_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0);
  v8 = 0;
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v9 = 0;
    while ( 1 )
    {
      itemIds = ItemConsumeEntity->fields.itemIds;
      if ( !itemIds )
        break;
      if ( v9 >= LODWORD(itemIds->max_length) )
        sub_1C32E84(Master_object);
      if ( !v7 )
        break;
      Master_object = (QuestMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                         v7,
                                         itemIds->m_Items[v9],
                                         (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Master_object )
        break;
      v11 = Master_object;
      v12 = BalanceConfig_TypeInfo;
      MasterKind_k__BackingField = v11->fields._MasterKind_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v12 = BalanceConfig_TypeInfo;
      }
      v8 = MasterKind_k__BackingField == v12->static_fields->stormPodItemId;
      if ( !v8 )
      {
        Master_object = (QuestMaster_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v9, 0);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          continue;
      }
      return v8;
    }
LABEL_26:
    sub_1C32E7C(Master_object);
  }
  return v8;
}


bool clsQuestCheck__IsEnabledPrivilegePeriod(
        clsQuestCheck_o *this,
        int32_t questId,
        int64_t nowTime,
        const MethodInfo *method)
{
  QuestPhaseMaster_o *Master_object; // x0
  int32_t OpenedPeriodPrivilegeId; // w0
  int32_t v8; // w20
  Il2CppObject *v9; // x21
  int64_t v11; // [xsp+0h] [xbp-50h] BYREF
  int64_t startAt; // [xsp+8h] [xbp-48h] BYREF
  UserPrivilegeEntity_o *v13; // [xsp+10h] [xbp-40h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C34290 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserPrivilegeMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C34290 = 1;
  }
  v13 = 0;
  entity = 0;
  v11 = 0;
  startAt = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_24;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, questId, 1, 0) )
    return 0;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_24;
  OpenedPeriodPrivilegeId = QuestPhaseEntity__GetOpenedPeriodPrivilegeId(entity, 0);
  if ( OpenedPeriodPrivilegeId < 1 )
    return 1;
  v8 = OpenedPeriodPrivilegeId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v9 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserPrivilegeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Master_object = (QuestPhaseMaster_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (QuestPhaseMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v9 )
    goto LABEL_24;
  if ( !UserPrivilegeMaster__TryGetEntity(
          (UserPrivilegeMaster_o *)v9,
          &v13,
          *((_QWORD *)Master_object[2].monitor + 8),
          v8,
          0) )
    return 0;
  Master_object = (QuestPhaseMaster_o *)v13;
  if ( !v13 )
LABEL_24:
    sub_1C32E7C(Master_object);
  return UserPrivilegeEntity__IsValidPeriod(v13, &startAt, &v11, nowTime, 0);
}


bool clsQuestCheck__IsEncountRaidBoss(clsQuestCheck_o *this, int32_t eventId, int32_t day, const MethodInfo *method)
{
  System_Int32_array *Instance; // x0
  EventRaidMaster_o *v8; // x22
  int32_t RaidDeadQuestId; // w23
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x4
  const MethodInfo *v13; // x4
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v15; // x20
  unsigned __int64 v16; // x21

  if ( (byte_4C34274 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4C34274 = 1;
  }
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_18;
  v8 = (EventRaidMaster_o *)Instance;
  RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId((EventRaidMaster_o *)Instance, eventId, day, 0);
  Instance = (System_Int32_array *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, RaidDeadQuestId, 0, v10)
    || clsQuestCheck__IsQuestRelease(this, RaidDeadQuestId, -1, 0, v11) )
  {
    LOBYTE(Instance) = 1;
    return (unsigned __int8)Instance & 1;
  }
  Instance = EventRaidMaster__GetRaidAliveQuestIds(v8, eventId, day, 0);
  if ( !Instance )
LABEL_18:
    sub_1C32E7C(Instance);
  max_length = Instance->max_length;
  v15 = Instance;
  if ( (int)max_length < 1 )
  {
    LOBYTE(Instance) = 0;
  }
  else
  {
    v16 = 0;
    do
    {
      if ( v16 >= (unsigned int)max_length )
        sub_1C32E84(Instance);
      Instance = (System_Int32_array *)clsQuestCheck__IsQuestRelease(this, v15->m_Items[v16], -1, 0, v13);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      LODWORD(max_length) = v15->max_length;
      ++v16;
    }
    while ( (__int64)v16 < (int)max_length );
  }
  return (unsigned __int8)Instance & 1;
}


bool clsQuestCheck__IsLastWarClear(clsQuestCheck_o *this, const MethodInfo *method)
{
  clsQuestCheck_o *Value; // x0
  const MethodInfo *v3; // x2

  if ( (byte_4C34276 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_8255/*"LAST_WAR_ID"*/);
    byte_4C34276 = 1;
  }
  Value = (clsQuestCheck_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8255/*"LAST_WAR_ID"*/, 0);
  return clsQuestCheck__IsWarClear(Value, (int32_t)Value, v3);
}


bool clsQuestCheck__IsMainInterlude(clsQuestCheck_o *this, int32_t war_id, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x0

  if ( (byte_4C34277 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C32C20(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C34277 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_WarMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             war_id,
             (const MethodInfo_3396838 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = WarEntity__IsMainInterlude((WarEntity_o *)Entity, 0);
  return (char)Entity;
}


// local variable allocation has failed, the output may be wrong!
bool clsQuestCheck__IsQuestClear(
        clsQuestCheck_o *this,
        int32_t qid,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  int32_t v6; // w20

  if ( (byte_4C3427D & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_1C32C20(&CondType_TypeInfo);
    byte_4C3427D = 1;
  }
  v6 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_40225464(qid, v6, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
bool clsQuestCheck__IsQuestClearRaw(
        clsQuestCheck_o *this,
        int32_t qid,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  int32_t v6; // w20

  if ( (byte_4C3427E & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_1C32C20(&CondType_TypeInfo);
    byte_4C3427E = 1;
  }
  v6 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_40225464(qid, v6, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
bool clsQuestCheck__IsQuestPhaseClear(
        clsQuestCheck_o *this,
        int32_t qid,
        int32_t phase,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  int32_t v8; // w21
  NetworkManager_c *v9; // x0
  int64_t userIdNumber; // x22

  if ( (byte_4C3427F & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    this = (clsQuestCheck_o *)sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C3427F = 1;
  }
  v8 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, *(const MethodInfo **)&phase);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  userIdNumber = v9->static_fields->userIdNumber;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestPhaseClear(userIdNumber, qid, phase, v8, 0, 0);
}


bool clsQuestCheck__IsQuestRelease(
        clsQuestCheck_o *this,
        int32_t quest_id,
        int32_t old_val,
        int32_t old_val_qr_type,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  System_Collections_ObjectModel_Collection_T__o *monitor; // x19
  bool v11; // w20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  QuestReleaseEntity_o *v21; // x0
  const MethodInfo *v22; // x4
  int32_t v23; // w2
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0

  if ( (byte_4C34273 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__getEntityList__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_QuestReleaseEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    byte_4C34273 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object || (monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor) == 0 )
    sub_1C32E7C(Master_object);
  v11 = System_Collections_ObjectModel_Collection_object___get_Count(
          (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor,
          (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__) > 0;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 monitor,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_12;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v16 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8))
        & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestReleaseEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_QuestReleaseEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_19;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_19:
      v20 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_QuestReleaseEntity__TypeInfo, 0);
    }
    v21 = (QuestReleaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                    Enumerator,
                                    *(_QWORD *)(v20 + 8));
    if ( !v21 )
      sub_1C32E7C(0);
    if ( v21->fields.questId == quest_id )
    {
      if ( old_val < 0 )
        v23 = -1;
      else
        v23 = v21->fields.type == old_val_qr_type ? old_val : -1;
      if ( !clsQuestCheck__IsQuestRelease_35867632(this, v21, v23, 0, v22) )
      {
        v11 = 0;
        break;
      }
    }
  }
  v24 = Enumerator->klass;
  v25 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_34;
    }
    v27 = (__int64)&v24->vtable[*v26];
  }
  else
  {
LABEL_34:
    v27 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  return v11;
}


bool clsQuestCheck__IsQuestRelease_35862572(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        MapControl_QuestInfo_o *qinf,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_35867632(this, qrd, -1, qinf, v4);
}


bool clsQuestCheck__IsQuestRelease_35866740(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        int32_t old_val,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_35867632(this, qrd, old_val, 0, v4);
}


bool clsQuestCheck__IsQuestRelease_35867632(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        int32_t old_val,
        MapControl_QuestInfo_o *qinf,
        const MethodInfo *method)
{
  char v5; // cf
  char v6; // zf
  int32_t type; // w22
  int32_t v11; // w20
  int32_t v12; // w21
  int32_t targetId; // w20
  int64_t value; // x19
  int32_t v16; // w0
  int32_t v17; // w20
  int32_t v18; // w21
  int32_t v19; // w19
  int32_t v20; // w0
  int32_t v21; // w1
  int32_t v22; // w2
  bool v23; // w3
  bool v25; // w3
  QuestReleaseEntity_o *v26; // x2
  Il2CppObject *v27; // x0
  int32_t *v28; // x19
  int64_t Time; // x20
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_openedAt; // x8
  int32_t *p_closedAt; // x9
  int64_t v33; // x8
  Il2CppObject *v34; // x0
  int32_t v35; // w19
  int32_t v36; // w20
  int32_t questId; // w22
  int32_t ValueInt; // w19
  int32_t v39; // w20
  int32_t v40; // w21
  int32_t v41; // w19
  TotalEventRaidEntity_o *v43; // [xsp+8h] [xbp-48h] BYREF
  EventRaidEntity_o *entity; // [xsp+10h] [xbp-40h] BYREF
  System_Int32_array *sameGroupQuestIds; // [xsp+18h] [xbp-38h] BYREF
  bool is_release; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_4C34279 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    this = (clsQuestCheck_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C34279 = 1;
  }
  entity = 0;
  sameGroupQuestIds = 0;
  v43 = 0;
  is_release = 0;
  if ( !qrd )
LABEL_101:
    sub_1C32E7C(this);
  type = qrd->fields.type;
  if ( !v6 & v5 )
  {
LABEL_20:
    targetId = qrd->fields.targetId;
    value = qrd->fields.value;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v16 = type;
  }
  else
  {
    switch ( type )
    {
      case 0:
        return 1;
      case 1:
        return clsQuestCheck__IsQuestClear(this, qrd->fields.targetId, 0, (const MethodInfo *)qinf);
      case 2:
        v25 = 1;
        v26 = qrd;
        goto LABEL_89;
      case 3:
      case 4:
      case 5:
        return is_release;
      case 6:
        if ( clsQuestCheck__IsQuestClear(this, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        if ( (old_val & 0x80000000) == 0 )
          return QuestReleaseEntity__getValueInt(qrd, 0) <= old_val;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v16 = 6;
        break;
      case 7:
        if ( clsQuestCheck__IsQuestClear(this, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        if ( (old_val & 0x80000000) == 0 )
          return QuestReleaseEntity__getValueInt(qrd, 0) <= old_val;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v16 = 7;
        break;
      case 8:
        if ( clsQuestCheck__IsQuestClear(this, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v16 = 8;
        break;
      case 9:
        if ( clsQuestCheck__IsQuestClear(this, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        if ( (old_val & 0x80000000) == 0 )
          return QuestReleaseEntity__getValueInt(qrd, 0) <= old_val;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v16 = 9;
        break;
      case 10:
        if ( clsQuestCheck__IsQuestClear(this, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v16 = 10;
        break;
      case 11:
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v16 = 11;
        break;
      case 12:
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_101;
        v27 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                qrd->fields.questId,
                (const MethodInfo_3396838 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v27 )
          return is_release;
        v28 = (int32_t *)v27;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Time = NetworkManager__getTime(0);
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestAddMaster___);
        if ( !this )
          goto LABEL_101;
        ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)this, v28[4], 0);
        p_openedAt = &ReplaceDataByQuestId->fields.openedAt;
        p_closedAt = &ReplaceDataByQuestId->fields.closedAt;
        if ( !ReplaceDataByQuestId )
          p_openedAt = v28 + 39;
        v33 = *p_openedAt;
        if ( !ReplaceDataByQuestId )
          p_closedAt = v28 + 40;
        return Time >= v33 && Time < *p_closedAt;
      case 13:
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_101;
        v34 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                qrd->fields.questId,
                (const MethodInfo_3396838 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v34 )
          return is_release;
        return QuestEntity__IsOpenByTime((QuestEntity_o *)v34, 1, 0);
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
        v35 = qrd->fields.targetId;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return CondType__IsMissionAchive(v35, 0);
      case 26:
        v36 = qrd->fields.targetId;
        questId = qrd->fields.questId;
        ValueInt = QuestReleaseEntity__getValueInt(qrd, 0);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        is_release = CondType__IsNotQuestGroupClear(questId, v36, ValueInt, &sameGroupQuestIds, 1, 0);
        if ( qinf )
        {
          qinf->fields._GroupId_k__BackingField = v36;
          MapControl_QuestInfo__AddSameGroupQuestIds(qinf, sameGroupQuestIds, 0);
        }
        return is_release;
      case 27:
      case 28:
        v11 = qrd->fields.targetId;
        v12 = QuestReleaseEntity__getValueInt(qrd, 0);
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventRaidMaster___);
        if ( !this )
          goto LABEL_101;
        if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)this, &entity, v11, v12, 0) )
          return is_release;
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)TotalEventRaidMaster__TryGetEntity((TotalEventRaidMaster_o *)this, &v43, v11, v12, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
          return is_release;
        if ( !entity || !v43 )
          goto LABEL_101;
        return (entity->fields.maxHp > v43->fields.totalDamage) ^ (qrd->fields.type != 27);
      case 32:
        v39 = qrd->fields.questId;
        v40 = qrd->fields.targetId;
        v41 = QuestReleaseEntity__getValueInt(qrd, 0);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v23 = 1;
        v20 = v39;
        v21 = v40;
        v22 = v41;
        return CondType__IsQuestGroupClear(v20, v21, v22, v23, 0);
      case 38:
        if ( clsQuestCheck__IsQuestClear(this, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v16 = 38;
        break;
      case 53:
        v26 = qrd;
        v25 = 0;
LABEL_89:
        clsQuestCheck__checkCondTypeItemGet(this, &is_release, v26, v25, method);
        return is_release;
      case 54:
        if ( clsQuestCheck__IsQuestClear(this, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v16 = 54;
        break;
      default:
        if ( type == 58 )
        {
          v17 = qrd->fields.questId;
          v18 = qrd->fields.targetId;
          v19 = QuestReleaseEntity__getValueInt(qrd, 0);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v20 = v17;
          v21 = v18;
          v22 = v19;
          v23 = 0;
          return CondType__IsQuestGroupClear(v20, v21, v22, v23, 0);
        }
        if ( type != 64 )
        {
          if ( type != 92 )
            goto LABEL_20;
          return 0;
        }
        if ( clsQuestCheck__IsQuestClear(this, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v16 = 64;
        break;
    }
  }
  return CondType__IsOpen(v16, targetId, value, 0, 0, 0);
}


bool clsQuestCheck__IsQuestValid(
        clsQuestCheck_o *this,
        MapControl_QuestInfo_o *questInfo,
        int64_t endTime,
        const MethodInfo *method)
{
  void *IsQuestReleaseAll; // x0
  Il2CppObject *Master_object; // x21
  clsQuestCheck_o *Time; // x0
  const MethodInfo *v11; // x3
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3428F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C3428F = 1;
  }
  entity = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IsQuestReleaseAll = (void *)TerminalPramsManager__get_Debug_IsQuestReleaseAll(0);
  if ( ((unsigned __int8)IsQuestReleaseAll & 1) != 0 )
    return 1;
  if ( !questInfo )
    goto LABEL_28;
  IsQuestReleaseAll = MapControl_QuestInfo__GetMine(questInfo, 0);
  if ( !IsQuestReleaseAll )
    goto LABEL_28;
  if ( *((_DWORD *)IsQuestReleaseAll + 20) == 1 )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  IsQuestReleaseAll = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    IsQuestReleaseAll = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
LABEL_28:
    sub_1C32E7C(IsQuestReleaseAll);
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)Master_object,
    &entity,
    *(_QWORD *)(*((_QWORD *)IsQuestReleaseAll + 23) + 64LL),
    questInfo->fields.questId,
    0);
  if ( entity && UserQuestEntity__IsNotExpired(entity, 0) )
    return 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (clsQuestCheck_o *)NetworkManager__getTime(0);
  return (endTime < 1 || endTime - (__int64)Time >= 1)
      && clsQuestCheck__IsEnabledPrivilegePeriod(Time, questInfo->fields.questId, (int64_t)Time, v11);
}


bool clsQuestCheck__IsReleasedLoginQuest(
        clsQuestCheck_o *this,
        LoginQuestEntity_o *loginQuestEnt,
        const MethodInfo *method)
{
  QuestReleaseMaster_o *Master_object; // x0
  clsQuestCheck_Fields *p_fields; // x21
  System_Collections_Generic_List_object__o *qrs; // x9
  int64_t v8; // x21
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x4
  int v11; // w19
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C34272 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C34272 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !loginQuestEnt || !Master_object )
    goto LABEL_24;
  p_fields = &this->fields;
  QuestReleaseMaster__getListByQuestID_42429532(Master_object, loginQuestEnt->fields.questId, &this->fields.qrs, 0);
  if ( !this->fields.qrs )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (QuestReleaseMaster_o *)NetworkManager__getTime(0);
  qrs = (System_Collections_Generic_List_object__o *)p_fields->qrs;
  if ( !p_fields->qrs )
LABEL_24:
    sub_1C32E7C(Master_object);
  v8 = (int64_t)Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    qrs,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v9 )
      break;
    if ( !v13.fields._current )
      sub_1C32E7C(v9);
    if ( *(_DWORD *)((char *)&v13.fields._current->klass + (unsigned __int64)&dword_14) == 12 )
    {
      if ( !LoginQuestEntity__IsEnablePeriod(loginQuestEnt, v8, 0) )
        goto LABEL_18;
    }
    else if ( !clsQuestCheck__IsQuestRelease_35867632(this, (QuestReleaseEntity_o *)v13.fields._current, -1, 0, v10) )
    {
LABEL_18:
      v11 = 6;
      goto LABEL_21;
    }
  }
  v11 = 7;
LABEL_21:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v11 != 6;
}


bool clsQuestCheck__IsReleasedQuest(
        clsQuestCheck_o *this,
        int32_t questId,
        bool isIncludeTempData,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *qrs; // x0
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x4
  int klass_high; // w9
  int32_t monitor; // w22
  Il2CppClass *klass; // x21
  uint32_t cctor_finished; // w8
  int v16; // w19
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C3426F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1C32C20(&clsQuestCheck_TypeInfo);
    byte_4C3426F = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object )
    sub_1C32E7C(0);
  QuestReleaseMaster__getListByQuestID_42429532((QuestReleaseMaster_o *)Master_object, questId, &this->fields.qrs, 0);
  qrs = this->fields.qrs;
  if ( qrs )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      (System_Collections_Generic_List_object__o *)qrs,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    v19 = v18;
    while ( 1 )
    {
      v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v19,
             (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
      if ( !v9 )
        break;
      if ( !v19.fields._current )
        sub_1C32E7C(v9);
      klass_high = HIDWORD(v19.fields._current[1].klass);
      if ( (unsigned int)(klass_high - 101) <= 1 && isIncludeTempData )
      {
        monitor = (int32_t)v19.fields._current[1].monitor;
        klass = v19.fields._current[2].klass;
        cctor_finished = clsQuestCheck_TypeInfo->_2.cctor_finished;
        if ( klass_high == 101 )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
          if ( !clsQuestCheck__IsRouteSelectIncludeTempData(monitor, (int32_t)klass, v10) )
            goto LABEL_22;
        }
        else
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
          if ( clsQuestCheck__IsRouteSelectIncludeTempData(monitor, (int32_t)klass, v10) )
          {
LABEL_22:
            v16 = 9;
            goto LABEL_24;
          }
        }
      }
      else if ( !clsQuestCheck__IsQuestRelease_35867632(this, (QuestReleaseEntity_o *)v19.fields._current, -1, 0, v11) )
      {
        goto LABEL_22;
      }
    }
    v16 = 10;
LABEL_24:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    LOBYTE(qrs) = v16 != 9;
  }
  return (char)qrs;
}


bool clsQuestCheck__IsRouteSelectIncludeTempData(int32_t questId, int32_t routeId, const MethodInfo *method)
{
  __int64 v5; // x0
  System_Collections_Generic_IList_int__o *v6; // x20
  const MethodInfo *v7; // x4
  System_Collections_Generic_IList_int__o *v8; // x21

  if ( (byte_4C34270 & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&clsQuestCheck_TypeInfo);
    byte_4C34270 = 1;
  }
  v5 = sub_1C32CC8(int___TypeInfo, 1);
  if ( !v5 )
    goto LABEL_10;
  v6 = (System_Collections_Generic_IList_int__o *)v5;
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_11;
  *(_DWORD *)(v5 + 32) = questId;
  v5 = sub_1C32CC8(int___TypeInfo, 1);
  if ( !v5 )
LABEL_10:
    sub_1C32E7C(v5);
  v8 = (System_Collections_Generic_IList_int__o *)v5;
  if ( !*(_DWORD *)(v5 + 24) )
LABEL_11:
    sub_1C32E84(v5);
  *(_DWORD *)(v5 + 32) = routeId;
  if ( !clsQuestCheck_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
  return clsQuestCheck__IsRouteSelectIncludeTempData_35863404(v6, v8, 1, 0, v7);
}


bool clsQuestCheck__IsRouteSelectIncludeTempData_35863404(
        System_Collections_Generic_IList_int__o *questIds,
        System_Collections_Generic_IList_int__o *routeIds,
        int32_t count,
        int32_t checkType,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v8; // x23
  __int64 v9; // x0
  System_Collections_Generic_IList_int__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x24
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  System_Collections_Generic_IList_int__c *v25; // x8
  int v26; // w27
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x26
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  int32_t v39; // w28
  ScriptManager_c *v40; // x8
  System_Collections_ICollection_o *SelectRouteArray; // x0
  System_Int32_array *v42; // x0
  int max_length; // w9
  int v44; // w10
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  __int64 v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  int32_t v54; // [xsp+8h] [xbp-78h]

  if ( (byte_4C34271 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&ScriptManager_TypeInfo);
    byte_4C34271 = 1;
  }
  v8 = (System_Collections_Generic_HashSet_int__o *)sub_1C32E6C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v8,
    (const MethodInfo_3649220 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !questIds )
    sub_1C32E7C(v9);
  klass = questIds->klass;
  v54 = count;
  v11 = *(unsigned __int16 *)&questIds->klass->_2.rank;
  if ( *(_WORD *)&questIds->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_8;
    }
    v13 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v13 = sub_1C83438(questIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v13)(
          questIds,
          *(_QWORD *)(v13 + 8));
  v15 = v14;
  while ( 1 )
  {
    if ( !v15 )
      sub_1C32E7C(v14);
    v16 = *(_QWORD *)v15;
    v17 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
    {
      v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = v16 + 16LL * *v18 + 312;
    }
    else
    {
LABEL_16:
      v19 = sub_1C83438(v15, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8)) & 1) == 0 )
      break;
    v20 = *(_QWORD *)v15;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v22 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_23;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_23:
      v23 = sub_1C83438(v15, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v15, *(_QWORD *)(v23 + 8));
    if ( !routeIds )
      sub_1C32E7C(v24);
    v25 = routeIds->klass;
    v26 = v24;
    v27 = *(unsigned __int16 *)&routeIds->klass->_2.rank;
    if ( *(_WORD *)&routeIds->klass->_2.rank )
    {
      v28 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)v28 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_30;
      }
      v29 = (__int64)&v25->vtable[*v28];
    }
    else
    {
LABEL_30:
      v29 = sub_1C83438(routeIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
    }
    v30 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v29)(
            routeIds,
            *(_QWORD *)(v29 + 8));
    if ( !v30 )
      sub_1C32E7C(0);
    while ( 1 )
    {
LABEL_33:
      v31 = *(_QWORD *)v30;
      v32 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
      {
        v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v33 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v32;
          v33 += 4;
          if ( !v32 )
            goto LABEL_37;
        }
        v34 = v31 + 16LL * *v33 + 312;
      }
      else
      {
LABEL_37:
        v34 = sub_1C83438(v30, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8)) & 1) == 0 )
        break;
      v35 = *(_QWORD *)v30;
      v36 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
      {
        v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_int__c **)v37 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
        {
          --v36;
          v37 += 4;
          if ( !v36 )
            goto LABEL_44;
        }
        v38 = v35 + 16LL * *v37 + 312;
      }
      else
      {
LABEL_44:
        v38 = sub_1C83438(v30, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
      }
      v39 = (*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v30, *(_QWORD *)(v38 + 8));
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      if ( !byte_4C342A9 )
      {
        sub_1C32C20(&ScriptManager_TypeInfo);
        byte_4C342A9 = 1;
      }
      v40 = ScriptManager_TypeInfo;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        v40 = ScriptManager_TypeInfo;
      }
      if ( v40->static_fields->questId == v26 )
      {
        if ( !v40->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v40);
        SelectRouteArray = (System_Collections_ICollection_o *)ScriptManager__GetSelectRouteArray(0);
        if ( !BasicHelper__IsNullOrEmpty(SelectRouteArray, 0) )
        {
          if ( !ScriptManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
          v42 = ScriptManager__GetSelectRouteArray(0);
          if ( !v42 )
            sub_1C32E7C(0);
          max_length = v42->max_length;
          if ( max_length >= 1 )
          {
            v44 = 0;
            while ( 1 )
            {
              if ( max_length == v44 )
                sub_1C32E84(v42);
              if ( v39 == v42->m_Items[v44] )
                break;
              if ( max_length == ++v44 )
                goto LABEL_33;
            }
            if ( !v8 )
              sub_1C32E7C(v42);
            System_Collections_Generic_HashSet_int___Add(
              v8,
              v39,
              (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
        }
      }
    }
    v45 = *(_QWORD *)v30;
    v46 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
      {
        --v46;
        v47 += 4;
        if ( !v46 )
          goto LABEL_71;
      }
      v48 = v45 + 16LL * *v47 + 312;
    }
    else
    {
LABEL_71:
      v48 = sub_1C83438(v30, System_IDisposable_TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v30, *(_QWORD *)(v48 + 8));
  }
  v49 = *(_QWORD *)v15;
  v50 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
  {
    v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_82;
    }
    v52 = v49 + 16LL * *v51 + 312;
  }
  else
  {
LABEL_82:
    v52 = sub_1C83438(v15, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v52)(v15, *(_QWORD *)(v52 + 8));
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsRouteSelect_40291224(questIds, routeIds, v54, checkType, v8, 0);
}


bool clsQuestCheck__IsTapSkipQuestStart(
        clsQuestCheck_o *this,
        int32_t questId,
        int32_t questPhase,
        System_String_o *effectName,
        bool isMyRoomMaterial,
        const MethodInfo *method)
{
  __int64 v10; // x19
  QuestPhaseMaster_o *Master_object; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t ScriptIntParam; // w22
  int v15; // w8
  clsQuestCheck_c *v17; // x0
  System_String_o *KEY_QUEST_START_EFFECT; // x21
  System_String_o *String; // x21
  System_String_array *v20; // x0
  System_Object_array *v21; // x23
  System_Func_object__bool__o *v22; // x20
  Il2CppObject *object; // x20
  System_String_o *v24; // x0
  char v25; // w8
  System_String_o *v26; // x19
  clsQuestCheck_c *v27; // x0
  System_String_o *v28; // x20
  Il2CppObject *v29; // [xsp+0h] [xbp-50h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3428C & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Find_string___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C32C20(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C32C20(&System_Func_string__bool__TypeInfo);
    sub_1C32C20(&Method_clsQuestCheck___c__DisplayClass42_0__IsTapSkipQuestStart_b__0__);
    sub_1C32C20(&clsQuestCheck___c__DisplayClass42_0_TypeInfo);
    sub_1C32C20(&StringLiteral_22863/*"questStartEffectSkip"*/);
    sub_1C32C20(&StringLiteral_1048/*"/"*/);
    sub_1C32C20(&clsQuestCheck_TypeInfo);
    byte_4C3428C = 1;
  }
  v29 = 0;
  entity = 0;
  v10 = sub_1C32E6C(clsQuestCheck___c__DisplayClass42_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !v10 )
    goto LABEL_41;
  *(_QWORD *)(v10 + 16) = effectName;
  sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 16), (int32_t)effectName, v12, v13);
  if ( isMyRoomMaterial )
    return 0;
  if ( questPhase <= 1 )
    questPhase = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_41;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, questId, questPhase, 0) )
    goto LABEL_44;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_41;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_22863/*"questStartEffectSkip"*/, 0, 0);
  if ( !ScriptIntParam )
  {
LABEL_44:
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !Master_object )
      goto LABEL_41;
    Master_object = (QuestPhaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            &v29,
                                            questId,
                                            (const MethodInfo_3396884 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !v29 )
        goto LABEL_41;
      v15 = LODWORD(v29[2].monitor) - 1;
      if ( (unsigned int)v15 > 7 )
        ScriptIntParam = 0;
      else
        ScriptIntParam = dword_C44CE4[v15];
      goto LABEL_22;
    }
    return 0;
  }
LABEL_22:
  v17 = clsQuestCheck_TypeInfo;
  if ( !clsQuestCheck_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
    v17 = clsQuestCheck_TypeInfo;
  }
  KEY_QUEST_START_EFFECT = v17->static_fields->KEY_QUEST_START_EFFECT;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  String = EncryptedPlayerPrefs__GetString(KEY_QUEST_START_EFFECT, 0);
  Master_object = (QuestPhaseMaster_o *)System_String__IsNullOrEmpty(String, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    goto LABEL_31;
  if ( !String )
LABEL_41:
    sub_1C32E7C(Master_object);
  v20 = System_String__Split(String, 0x2Fu, 0, 0);
  if ( !v20 )
  {
LABEL_31:
    v26 = *(System_String_o **)(v10 + 16);
LABEL_32:
    v27 = clsQuestCheck_TypeInfo;
    if ( !clsQuestCheck_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
      v27 = clsQuestCheck_TypeInfo;
    }
    v28 = v27->static_fields->KEY_QUEST_START_EFFECT;
    if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    EncryptedPlayerPrefs__SetString(v28, v26, 0);
    UnityEngine_PlayerPrefs__Save(0);
    v25 = 1;
    goto LABEL_37;
  }
  v21 = (System_Object_array *)v20;
  v22 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v22,
    (Il2CppObject *)v10,
    Method_clsQuestCheck___c__DisplayClass42_0__IsTapSkipQuestStart_b__0__,
    0);
  object = BasicHelper__Find_object_(
             v21,
             (System_Func_T__bool__o *)v22,
             (const MethodInfo_30C735C *)Method_BasicHelper_Find_string___);
  v24 = System_String__Concat_63556792(
          String,
          (System_String_o *)StringLiteral_1048/*"/"*/,
          *(System_String_o **)(v10 + 16),
          0);
  if ( !object )
  {
    v26 = v24;
    goto LABEL_32;
  }
  v25 = 0;
LABEL_37:
  if ( ScriptIntParam == 1 )
    return 1;
  else
    return (ScriptIntParam == 2) & (v25 ^ 1);
}


bool clsQuestCheck__IsValidQuestRandomGroup(
        clsQuestCheck_o *this,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  QuestRandomGroupMaster_o *v5; // x21
  QuestRandomGroupEntity_o *EntityFromQuestId; // x0
  QuestRandomGroupEntity_o *v7; // x19
  int32_t randomGroupId; // w20
  TerminalPramsManager_c *v9; // x0
  bool v10; // w0
  uint32_t cctor_finished; // w9
  TerminalPramsManager_c *v12; // x0
  int32_t Item; // w22
  QuestRandomGroupEntity_o *RandomRangeQuest; // x0
  TerminalPramsManager_c *v15; // x0
  QuestRandomGroupEntity_o *v16; // x21
  TerminalPramsManager_c *v17; // x0
  TerminalPramsManager_c *v18; // x0

  if ( (byte_4C3426D & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestRandomGroupMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C3426D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestRandomGroupMaster___);
  if ( !questInfo )
    goto LABEL_53;
  v5 = (QuestRandomGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_53;
  EntityFromQuestId = QuestRandomGroupMaster__GetEntityFromQuestId(
                        (QuestRandomGroupMaster_o *)Instance,
                        questInfo->fields.questId,
                        0);
  if ( EntityFromQuestId )
  {
    v7 = EntityFromQuestId;
    randomGroupId = EntityFromQuestId->fields.randomGroupId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__LoadQuestRandomGroupList(0);
    if ( !byte_4C342A8 )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C342A8 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    Instance = (Il2CppObject *)v9->static_fields->_QuestRandomGroupList_k__BackingField;
    if ( !Instance )
      goto LABEL_53;
    v10 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
            (System_Collections_Generic_Dictionary_int__int__o *)Instance,
            randomGroupId,
            (const MethodInfo_33E7450 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    cctor_finished = TerminalPramsManager_TypeInfo->_2.cctor_finished;
    if ( v10 )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C342A8 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C342A8 = 1;
      }
      v12 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v12 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v12->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_53;
      Item = System_Collections_Generic_Dictionary_int__int___get_Item(
               (System_Collections_Generic_Dictionary_int__int__o *)Instance,
               randomGroupId,
               (const MethodInfo_33E71C8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsQuestClear_40225464(Item, -1, 0, 0) )
        goto LABEL_44;
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C342A8 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C342A8 = 1;
      }
      v15 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v15 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v15->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_53;
      System_Collections_Generic_Dictionary_int__int___Add(
        (System_Collections_Generic_Dictionary_int__int__o *)Instance,
        randomGroupId,
        0,
        (const MethodInfo_33E7264 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
    RandomRangeQuest = QuestRandomGroupMaster__GetRandomRangeQuest(v5, randomGroupId, 0);
    if ( RandomRangeQuest )
    {
      v16 = RandomRangeQuest;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C342A8 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C342A8 = 1;
      }
      v17 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v17 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v17->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_53;
      System_Collections_Generic_Dictionary_int__int___set_Item(
        (System_Collections_Generic_Dictionary_int__int__o *)Instance,
        randomGroupId,
        v16->fields.questId,
        (const MethodInfo_33E7250 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      TerminalPramsManager__SaveQuestRandomGroupList(0);
LABEL_44:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C342A8 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C342A8 = 1;
      }
      v18 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v18 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v18->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( Instance )
      {
        LOBYTE(RandomRangeQuest) = System_Collections_Generic_Dictionary_int__int___get_Item(
                                     (System_Collections_Generic_Dictionary_int__int__o *)Instance,
                                     randomGroupId,
                                     (const MethodInfo_33E71C8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) == v7->fields.questId;
        return (char)RandomRangeQuest;
      }
LABEL_53:
      sub_1C32E7C(Instance);
    }
  }
  else
  {
    LOBYTE(RandomRangeQuest) = 1;
  }
  return (char)RandomRangeQuest;
}


bool clsQuestCheck__IsWarClear(clsQuestCheck_o *this, int32_t war_id, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4C34275 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C32C20(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C34275 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_WarMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             war_id,
             (const MethodInfo_3396838 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Entity, HIDWORD(Entity[6].klass), 0, v6);
  return (char)Entity;
}


void clsQuestCheck__OpenQuestTimeOverNoticeDialog(
        clsQuestCheck_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_String_o *v5; // x0

  if ( (byte_4C34291 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_10912/*"QUEST_TIME_OVER"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C34291 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10912/*"QUEST_TIME_OVER"*/, 0);
  if ( !Instance )
    sub_1C32E7C(v5);
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v5,
    callback,
    -1,
    0,
    0,
    0,
    1,
    0,
    1,
    0,
    0,
    0.0,
    0,
    0);
}


void clsQuestCheck__PlayQuestStartAction(clsQuestCheck_o *this, System_Action_o *end_act, const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w20

  if ( (byte_4C3428B & 1) == 0 )
  {
    sub_1C32C20(&ScriptManager_TypeInfo);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C3428B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C31DAD )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C31DAD = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v4->static_fields->_WarId_k__BackingField;
  if ( !byte_4C31A97 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4C31A97 = 1;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v4->static_fields->_QuestId_k__BackingField;
  if ( clsQuestCheck__mfCheck_IsQuestNew((clsQuestCheck_o *)v4, QuestId_k__BackingField, method) )
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__PlayQuestStart(WarId_k__BackingField, QuestId_k__BackingField, 0, 0, end_act, 0, 0, 0, 0, 0);
  }
  else
  {
    ActionExtensions__Call(end_act, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void clsQuestCheck__RecoverItemListDialogCallback(
        clsQuestCheck_o *this,
        MapControl_QuestInfo_o *qinf,
        int64_t endTime,
        int32_t result,
        int32_t boostId,
        const MethodInfo *method)
{
  void *Instance; // x0
  _QWORD *v12; // x19
  __int64 naturalAligment; // x9
  __int64 v14; // x8
  TerminalPramsManager_c *v15; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w20
  BattleSetupInfo_o *v19; // x23
  Il2CppObject *v20; // x20
  clsQuestCheck_o *v21; // x0
  int32_t v22; // w1
  int64_t v23; // x2
  const MethodInfo *v24; // x3

  if ( (byte_4C3428E & 1) == 0 )
  {
    sub_1C32C20(&BattleRootComponent_TypeInfo);
    sub_1C32C20(&BattleSetupInfo_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C3428E = 1;
  }
  if ( result == 2 )
  {
    if ( clsQuestCheck__CheckQuestPlayable(this, qinf, endTime, boostId, *(const MethodInfo **)&boostId) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C31DAD )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C31DAD = 1;
      }
      v15 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v15 = TerminalPramsManager_TypeInfo;
      }
      WarId_k__BackingField = v15->static_fields->_WarId_k__BackingField;
      if ( !byte_4C31A97 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        v15 = TerminalPramsManager_TypeInfo;
        byte_4C31A97 = 1;
      }
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = TerminalPramsManager_TypeInfo;
      }
      QuestId_k__BackingField = v15->static_fields->_QuestId_k__BackingField;
      if ( !byte_4C31A96 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        v15 = TerminalPramsManager_TypeInfo;
        byte_4C31A96 = 1;
      }
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = TerminalPramsManager_TypeInfo;
      }
      PhaseCnt_k__BackingField = v15->static_fields->_PhaseCnt_k__BackingField;
      v19 = (BattleSetupInfo_o *)sub_1C32E6C(BattleSetupInfo_TypeInfo);
      BattleSetupInfo___ctor(v19, 0);
      if ( !v19 )
        goto LABEL_38;
      Instance = BattleSetupInfo__ConvertBattleSetupInfo(
                   v19,
                   WarId_k__BackingField,
                   QuestId_k__BackingField,
                   PhaseCnt_k__BackingField,
                   0,
                   0,
                   0,
                   0);
      v20 = (Il2CppObject *)Instance;
      if ( boostId )
      {
        if ( !Instance )
          goto LABEL_38;
        *((_DWORD *)Instance + 15) = boostId;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance
        || (*((_BYTE *)Instance + 148) = 1,
            (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__)) == 0)
        || (*((_DWORD *)Instance + 38) = 1,
            (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
      {
LABEL_38:
        sub_1C32E7C(Instance);
      }
      AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 35, 1, v20, 0);
    }
LABEL_36:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0);
      return;
    }
    goto LABEL_38;
  }
  if ( result )
    goto LABEL_36;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v12 = (_QWORD *)*((_QWORD *)Instance + 4);
  if ( !v12 )
    goto LABEL_38;
  naturalAligment = BattleRootComponent_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*v12 + 304LL) >= (unsigned int)naturalAligment
    && *(BattleRootComponent_c **)(*(_QWORD *)(*v12 + 200LL) + 8 * naturalAligment - 8) == BattleRootComponent_TypeInfo )
  {
    Instance = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)Instance + 4), 0);
    if ( !Instance )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    v14 = v12[10];
    if ( !v14 )
      goto LABEL_38;
    Instance = *(void **)(v14 + 528);
    if ( !Instance )
      goto LABEL_38;
    BattleResultComponent__EndResult((BattleResultComponent_o *)Instance, 0);
    goto LABEL_36;
  }
  sub_1C3313C(*((_QWORD *)Instance + 4));
  clsQuestCheck__IsEnabledPrivilegePeriod(v21, v22, v23, v24);
}


void clsQuestCheck__RefreshTerminalScene(clsQuestCheck_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C34292 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C34292 = 1;
  }
  TopLoginRequest__ResetAccesTime(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


void clsQuestCheck__SaveEventQuestIdListPlayable(clsQuestCheck_o *this, int32_t eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x21
  TerminalPramsManager_c *v7; // x0
  CGThumbnailListItem_o *p_ClearEventQuestIds_k__BackingField; // x0
  const MethodInfo *v9; // x2
  System_Collections_Generic_IEnumerable_T__o *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_String_o *v13; // x19
  TerminalPramsManager_c *v14; // x0
  CGThumbnailListItem_o *v15; // x0

  if ( (byte_4C34287 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_String_Join_int___);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&StringLiteral_811/*","*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C34287 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v6 = StringLiteral_1/*""*/;
  if ( !byte_4C342AA )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C342AA = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  p_ClearEventQuestIds_k__BackingField = (CGThumbnailListItem_o *)&v7->static_fields->_ClearEventQuestIds_k__BackingField;
  p_ClearEventQuestIds_k__BackingField->klass = (CGThumbnailListItem_c *)v6;
  sub_1C32BC4(p_ClearEventQuestIds_k__BackingField, v6, (int32_t)method, v3);
  v10 = (System_Collections_Generic_IEnumerable_T__o *)clsQuestCheck__GetEventQuestIdListPlayable(this, eventId, v9);
  v13 = System_String__Join_int_(
          (System_String_o *)StringLiteral_811/*","*/,
          v10,
          (const MethodInfo_3188674 *)Method_System_String_Join_int___);
  if ( !byte_4C342AA )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C342AA = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v15 = (CGThumbnailListItem_o *)&v14->static_fields->_ClearEventQuestIds_k__BackingField;
  v15->klass = (CGThumbnailListItem_c *)v13;
  sub_1C32BC4(v15, (int32_t)v13, v11, v12);
  TerminalPramsManager__ClearEventQuestIds_SaveData(0);
}


void clsQuestCheck__checkCondTypeItemGet(
        clsQuestCheck_o *this,
        bool *is_release,
        QuestReleaseEntity_o *qrd,
        bool itemGet,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  UserItemMaster_o *v9; // x22
  int32_t targetId; // w23
  int32_t num; // w22
  bool v12; // w8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3427A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3427A = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !qrd )
    goto LABEL_17;
  v9 = (UserItemMaster_o *)Instance;
  targetId = qrd->fields.targetId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !v9 )
    goto LABEL_17;
  Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                v9,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                targetId,
                                0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v12 = 1;
    goto LABEL_16;
  }
  if ( !entity )
LABEL_17:
    sub_1C32E7C(Instance);
  num = entity->fields.num;
  v12 = num < QuestReleaseEntity__getValueInt(qrd, 0);
LABEL_16:
  *is_release = (v12 ^ itemGet) & 1;
}


bool clsQuestCheck__isPlayQuestStartAction(clsQuestCheck_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalPramsManager_c *v3; // x0
  int32_t WarId_k__BackingField; // w20
  int32_t QuestId_k__BackingField; // w19

  if ( (byte_4C3428A & 1) == 0 )
  {
    sub_1C32C20(&ScriptManager_TypeInfo);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C3428A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C31DAD )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C31DAD = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v3->static_fields->_WarId_k__BackingField;
  if ( !byte_4C31A97 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C31A97 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v3->static_fields->_QuestId_k__BackingField;
  if ( !clsQuestCheck__mfCheck_IsQuestNew((clsQuestCheck_o *)v3, QuestId_k__BackingField, v2) )
    return 0;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  return ScriptManager__isPlayQuestStart(WarId_k__BackingField, QuestId_k__BackingField, 0);
}


bool clsQuestCheck__mfCheck_IsQuestNew(clsQuestCheck_o *this, int32_t qid, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3427B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3427B = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_15;
  Instance = (DataManager_o *)UserQuestMaster__TryGetEntity(
                                (UserQuestMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                qid,
                                0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.challengeNum == 0;
LABEL_15:
    sub_1C32E7C(Instance);
  }
  return 1;
}


int32_t clsQuestCheck__mfGetQuestPhaseByQuestID(clsQuestCheck_o *this, int32_t qid, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3427C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3427C = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_15;
  if ( UserQuestMaster__TryGetEntity(
         (UserQuestMaster_o *)MasterData_object,
         &entity,
         *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
         qid,
         0) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserQuestEntity__getQuestPhase(entity, 0);
LABEL_15:
    sub_1C32E7C(Instance);
  }
  return 0;
}


bool clsQuestCheck__mfQuestReleaseCheckAlreadyClear(clsQuestCheck_o *this, int32_t qid, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v5; // x3
  bool v6; // w8
  bool result; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C34278 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C34278 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               qid,
                               (const MethodInfo_3396884 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 1;
  if ( !entity )
LABEL_12:
    sub_1C32E7C(Instance);
  if ( (HIDWORD(entity[5].klass) | 4) != 5 )
    return 0;
  v6 = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, qid, 0, v5);
  result = 0;
  if ( v6 )
    return 1;
  return result;
}


bool clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(
        clsQuestCheck_o *this,
        int32_t questId,
        QuestReleaseEntity_o **questReleaseNG,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x2
  void *Master_object; // x0
  _BOOL8 IsShop; // x0
  const MethodInfo *v12; // x2
  Il2CppObject *v13; // x23
  bool result; // w0
  clsQuestCheck_Fields *p_fields; // x23
  int32_t UseDiceSpotId; // w24
  System_Collections_Generic_List_T__o *qrs; // x24
  clsQuestCheck___c_c *v18; // x0
  System_Func_object__bool__o *_9__5_0; // x25
  Il2CppObject *v20; // x26
  struct clsQuestCheck___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct BalanceConfig_StaticFields *v24; // x8
  QuestEntity_o *Mine; // x0
  UserEventQuestCooltimeMaster_o *v26; // x24
  UserEventQuestCooltimeEntity_o *v27; // x0
  UserEventQuestCooltimeEntity_o *v28; // x24
  int64_t Time; // x0
  int64_t clearedAt; // x26
  int64_t v31; // x25
  int32_t v32; // w2
  int v33; // w8
  struct System_Collections_Generic_List_QuestReleaseEntity__o *cQuestReleaseListP; // x23
  System_Comparison_T__o *v35; // x24
  Il2CppObject *v36; // x25
  struct clsQuestCheck___c_StaticFields *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  UserQuestEntity_o *v40; // x0
  Il2CppObject *v41; // x23
  bool v42; // w23
  _BOOL8 v43; // x0
  const MethodInfo *v44; // x4
  Il2CppObject *current; // x22
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int v48; // w19
  int32_t klass; // w24
  System_Collections_Generic_IEnumerable_T__o *v50; // x25
  System_Collections_Generic_List_object__o *v51; // x24
  const MethodInfo *v52; // x3
  BalanceConfig_c *v53; // x0
  const MethodInfo *v54; // x3
  bool v55; // w8
  BalanceConfig_c *v56; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  bool v59; // w8
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+8h] [xbp-88h] BYREF
  Il2CppObject *v61; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF
  UserQuestEntity_o *v63; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4C3426C & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_BasicHelper_Any_QuestReleaseEntity___);
    sub_1C32C20(&System_Comparison_QuestReleaseEntity__TypeInfo);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1C32C20(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___78015368);
    sub_1C32C20(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__);
    sub_1C32C20(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__);
    sub_1C32C20(&clsQuestCheck___c_TypeInfo);
    byte_4C3426C = 1;
  }
  v61 = 0;
  entity = 0;
  memset(&v60, 0, sizeof(v60));
  *questReleaseNG = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)questReleaseNG, 0, (int32_t)questReleaseNG, (const MethodInfo *)questInfo);
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, v9) )
    return 0;
  v63 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarMaster___);
  if ( !questInfo || !Master_object )
    goto LABEL_107;
  IsShop = DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             questInfo->fields.warId,
             (const MethodInfo_3396884 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( IsShop )
  {
    Master_object = entity;
    if ( !entity )
      goto LABEL_107;
    IsShop = WarEntity__IsShop((WarEntity_o *)entity, 0);
    if ( !IsShop )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v13 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Master_object = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Master_object = NetworkManager_TypeInfo;
      }
      if ( !v13 )
        goto LABEL_107;
      IsShop = UserQuestMaster__TryGetEntity(
                 (UserQuestMaster_o *)v13,
                 &v63,
                 *(_QWORD *)(*((_QWORD *)Master_object + 23) + 64LL),
                 questId,
                 0);
      if ( IsShop )
      {
        Master_object = v63;
        if ( !v63 )
          goto LABEL_107;
        IsShop = UserQuestEntity__IsNotExpired(v63, 0);
        if ( IsShop )
          return 1;
      }
    }
  }
  if ( !clsQuestCheck__IsValidQuestRandomGroup((clsQuestCheck_o *)IsShop, questInfo, v12) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object )
    goto LABEL_107;
  p_fields = &this->fields;
  QuestReleaseMaster__getListByQuestID_42429532((QuestReleaseMaster_o *)Master_object, questId, &this->fields.qrs, 0);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !entity || !Master_object )
    goto LABEL_107;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &v61,
         (int32_t)entity[6].klass,
         (const MethodInfo_3396884 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Master_object = v61;
    if ( !v61 )
      goto LABEL_107;
    if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v61, 0) )
    {
      Master_object = v61;
      if ( !v61 )
        goto LABEL_107;
      UseDiceSpotId = EventDetailEntity__GetUseDiceSpotId((EventDetailEntity_o *)v61, 0);
      if ( UseDiceSpotId == MapControl_QuestInfo__GetSpotID(questInfo, 0)
        && MapControl_QuestInfo__GetQuestType(questInfo, 0) == 1 )
      {
        qrs = (System_Collections_Generic_List_T__o *)p_fields->qrs;
        v18 = clsQuestCheck___c_TypeInfo;
        if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
          v18 = clsQuestCheck___c_TypeInfo;
        }
        _9__5_0 = (System_Func_object__bool__o *)v18->static_fields->__9__5_0;
        if ( !_9__5_0 )
        {
          if ( !v18->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v18);
            v18 = clsQuestCheck___c_TypeInfo;
          }
          v20 = (Il2CppObject *)v18->static_fields->__9;
          _9__5_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_QuestReleaseEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__5_0,
            v20,
            Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__,
            0);
          static_fields = clsQuestCheck___c_TypeInfo->static_fields;
          static_fields->__9__5_0 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__5_0;
          sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v22, v23);
        }
        if ( !BasicHelper__Any_object_(
                qrs,
                (System_Func_T__bool__o *)_9__5_0,
                (const MethodInfo_30C6790 *)Method_BasicHelper_Any_QuestReleaseEntity___) )
        {
          Master_object = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Master_object = BalanceConfig_TypeInfo;
          }
          v24 = (struct BalanceConfig_StaticFields *)*((_QWORD *)Master_object + 23);
          if ( v24->EventBoardGameNextBoardQuestId != questId )
          {
            if ( !*((_DWORD *)Master_object + 56) )
            {
              j_il2cpp_runtime_class_init_0(Master_object);
              v24 = BalanceConfig_TypeInfo->static_fields;
            }
            if ( v24->EventBoardGameNextRoundQuestId != questId )
            {
              if ( !entity )
                goto LABEL_107;
              klass = (int32_t)entity[6].klass;
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              if ( CondType__IsUserEventStatus(klass, 7, 0) )
                return 0;
              v50 = (System_Collections_Generic_IEnumerable_T__o *)p_fields->qrs;
              v51 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor_58294448(
                v51,
                v50,
                (const MethodInfo_37980B0 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___78015368);
              v53 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v53 = BalanceConfig_TypeInfo;
              }
              v55 = clsQuestCheck__CheckQuestPlayableNow(
                      this,
                      v53->static_fields->EventBoardGameNextBoardQuestId,
                      0,
                      v52);
              result = 0;
              if ( v55 )
                return result;
              v56 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v56 = BalanceConfig_TypeInfo;
              }
              v59 = clsQuestCheck__CheckQuestPlayableNow(
                      this,
                      v56->static_fields->EventBoardGameNextRoundQuestId,
                      0,
                      v54);
              result = 0;
              if ( v59 )
                return result;
              p_fields->qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v51;
              sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v51, v57, v58);
            }
          }
        }
      }
    }
  }
  Mine = MapControl_QuestInfo__GetMine(questInfo, 0);
  if ( Mine && QuestEntity__HasFlag(Mine, 0x10000000000000LL, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___);
    if ( !questInfo->fields._WarInfo_k__BackingField )
      goto LABEL_107;
    v26 = (UserEventQuestCooltimeMaster_o *)Master_object;
    Master_object = (void *)MapControl_WarInfo__GetEventId(questInfo->fields._WarInfo_k__BackingField, 0);
    if ( !v26 )
      goto LABEL_107;
    v27 = UserEventQuestCooltimeMaster__getEntity(v26, (int32_t)Master_object, questInfo->fields.questId, 1, 0);
    if ( v27 )
    {
      v28 = v27;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0);
      clearedAt = v28->fields.clearedAt;
      v31 = Time;
      Master_object = UserEventQuestCooltimeEntity__GetMasterEntity(v28, 0);
      if ( !Master_object )
        goto LABEL_107;
      if ( v31 < clearedAt + *((int *)Master_object + 7) )
        return 0;
    }
  }
  if ( !p_fields->qrs )
    return 0;
  Master_object = this->fields.cQuestReleaseListP;
  if ( !Master_object )
    goto LABEL_107;
  v32 = *((_DWORD *)Master_object + 6);
  v33 = *((_DWORD *)Master_object + 7) + 1;
  *((_DWORD *)Master_object + 6) = 0;
  *((_DWORD *)Master_object + 7) = v33;
  if ( v32 >= 1 )
  {
    System_Array__Clear(*((System_Array_o **)Master_object + 2), 0, v32, 0);
    Master_object = this->fields.cQuestReleaseListP;
    if ( !Master_object )
      goto LABEL_107;
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Master_object,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.qrs,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__);
  cQuestReleaseListP = this->fields.cQuestReleaseListP;
  Master_object = clsQuestCheck___c_TypeInfo;
  if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
    Master_object = clsQuestCheck___c_TypeInfo;
  }
  v35 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 16LL);
  if ( !v35 )
  {
    if ( !*((_DWORD *)Master_object + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = clsQuestCheck___c_TypeInfo;
    }
    v36 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
    v35 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_QuestReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(
      v35,
      v36,
      Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__,
      0);
    v37 = clsQuestCheck___c_TypeInfo->static_fields;
    v37->__9__5_1 = (struct System_Comparison_QuestReleaseEntity__o *)v35;
    sub_1C32BC4((CGThumbnailListItem_o *)&v37->__9__5_1, (int32_t)v35, v38, v39);
  }
  if ( !cQuestReleaseListP )
    goto LABEL_107;
  System_Collections_Generic_List_object___Sort_58303104(
    (System_Collections_Generic_List_object__o *)cQuestReleaseListP,
    v35,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  v40 = v63;
  if ( v63 )
  {
LABEL_82:
    v42 = !UserQuestEntity__HasStatus(v40, 8, 0);
    goto LABEL_83;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v41 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Master_object = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = NetworkManager_TypeInfo;
  }
  if ( !v41 )
LABEL_107:
    sub_1C32E7C(Master_object);
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)v41,
    &v63,
    *(_QWORD *)(*((_QWORD *)Master_object + 23) + 64LL),
    questId,
    0);
  v40 = v63;
  if ( v63 )
    goto LABEL_82;
  v42 = 1;
LABEL_83:
  Master_object = this->fields.cQuestReleaseListP;
  if ( !Master_object )
    goto LABEL_107;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v60,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v60,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v43 )
      break;
    current = v60.fields._current;
    if ( v42 )
      goto LABEL_89;
    if ( !v60.fields._current )
      sub_1C32E7C(v43);
    if ( *(_DWORD *)((char *)&v60.fields._current->klass + (unsigned __int64)&dword_14) != 12 )
    {
LABEL_89:
      if ( !clsQuestCheck__IsQuestRelease_35867632(
              this,
              (QuestReleaseEntity_o *)v60.fields._current,
              -1,
              questInfo,
              v44) )
      {
        *questReleaseNG = (QuestReleaseEntity_o *)current;
        sub_1C32BC4((CGThumbnailListItem_o *)questReleaseNG, (int32_t)current, v46, v47);
        v48 = 19;
        goto LABEL_92;
      }
    }
  }
  v48 = 20;
LABEL_92:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v60,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v48 != 19;
}


void clsQuestCheck___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C34296 & 1) == 0 )
  {
    sub_1C32C20(&clsQuestCheck___c_TypeInfo);
    byte_4C34296 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(clsQuestCheck___c_TypeInfo);
  System_Object___ctor(v1, 0);
  clsQuestCheck___c_TypeInfo->static_fields->__9 = (struct clsQuestCheck___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)clsQuestCheck___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void clsQuestCheck___c___ctor(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void clsQuestCheck___c___CheckQuestPlayable_b__43_0(
        clsQuestCheck___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v7; // x21

  if ( (byte_4C34297 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_clsQuestCheck___c__DisplayClass43_1__CheckQuestPlayable_b__4__);
    sub_1C32C20(&clsQuestCheck___c__DisplayClass43_1_TypeInfo);
    byte_4C34297 = 1;
  }
  v4 = sub_1C32E6C(clsQuestCheck___c__DisplayClass43_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
        System_Action___ctor(
          v7,
          (Il2CppObject *)v4,
          Method_clsQuestCheck___c__DisplayClass43_1__CheckQuestPlayable_b__4__,
          0),
        !Instance) )
  {
    sub_1C32E7C(v5);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v7, 0);
}


void clsQuestCheck___c___CheckQuestPlayable_b__43_1(
        clsQuestCheck___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v7; // x21

  if ( (byte_4C34298 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_clsQuestCheck___c__DisplayClass43_2__CheckQuestPlayable_b__5__);
    sub_1C32C20(&clsQuestCheck___c__DisplayClass43_2_TypeInfo);
    byte_4C34298 = 1;
  }
  v4 = sub_1C32E6C(clsQuestCheck___c__DisplayClass43_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
        System_Action___ctor(
          v7,
          (Il2CppObject *)v4,
          Method_clsQuestCheck___c__DisplayClass43_2__CheckQuestPlayable_b__5__,
          0),
        !Instance) )
  {
    sub_1C32E7C(v5);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v7, 0);
}


void clsQuestCheck___c___CheckQuestPlayable_b__43_10(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3429A & 1) == 0 )
  {
    sub_1C32C20(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3429A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_30C4E7C *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void clsQuestCheck___c___CheckQuestPlayable_b__43_12(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3429B & 1) == 0 )
  {
    sub_1C32C20(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3429B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_30C4E7C *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void clsQuestCheck___c___CheckQuestPlayable_b__43_2(clsQuestCheck___c_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3429C & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3429C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void clsQuestCheck___c___CheckQuestPlayable_b__43_3(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  ;
}


void clsQuestCheck___c___CheckQuestPlayable_b__43_6(
        clsQuestCheck___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v7; // x21

  if ( (byte_4C34299 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_clsQuestCheck___c__DisplayClass43_3__CheckQuestPlayable_b__7__);
    sub_1C32C20(&clsQuestCheck___c__DisplayClass43_3_TypeInfo);
    byte_4C34299 = 1;
  }
  v4 = sub_1C32E6C(clsQuestCheck___c__DisplayClass43_3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
        System_Action___ctor(
          v7,
          (Il2CppObject *)v4,
          Method_clsQuestCheck___c__DisplayClass43_3__CheckQuestPlayable_b__7__,
          0),
        !Instance) )
  {
    sub_1C32E7C(v5);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v7, 0);
}


bool clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_0(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C32E7C(this);
  return n->fields.type == 118;
}


int32_t clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_1(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *a,
        QuestReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C32E7C(this);
  return b->fields.imagePriority - a->fields.imagePriority;
}


void clsQuestCheck___c__DisplayClass33_0___ctor(clsQuestCheck___c__DisplayClass33_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool clsQuestCheck___c__DisplayClass33_0___GetReleasedQuestEntityListByServantGet_b__0(
        clsQuestCheck___c__DisplayClass33_0_o *this,
        QuestEntity_o *n,
        const MethodInfo *method)
{
  struct QuestEntity_o *questEnt; // x8

  if ( !n || (questEnt = this->fields.questEnt) == 0 )
    sub_1C32E7C(this);
  return n->fields.id == questEnt->fields.id;
}


void clsQuestCheck___c__DisplayClass33_1___ctor(clsQuestCheck___c__DisplayClass33_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool clsQuestCheck___c__DisplayClass33_1___GetReleasedQuestEntityListByServantGet_b__1(
        clsQuestCheck___c__DisplayClass33_1_o *this,
        QuestEntity_o *n,
        const MethodInfo *method)
{
  struct QuestEntity_o *questEnt; // x8

  if ( !n || (questEnt = this->fields.questEnt) == 0 )
    sub_1C32E7C(this);
  return n->fields.id == questEnt->fields.id;
}


void clsQuestCheck___c__DisplayClass42_0___ctor(clsQuestCheck___c__DisplayClass42_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool clsQuestCheck___c__DisplayClass42_0___IsTapSkipQuestStart_b__0(
        clsQuestCheck___c__DisplayClass42_0_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_String__op_Equality(a, this->fields.effectName, 0);
}


void clsQuestCheck___c__DisplayClass43_0___ctor(clsQuestCheck___c__DisplayClass43_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void clsQuestCheck___c__DisplayClass43_0___CheckQuestPlayable_b__11(
        clsQuestCheck___c__DisplayClass43_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( !this->fields.__4__this )
    sub_1C32E7C(this);
  clsQuestCheck__RecoverItemListDialogCallback(
    this->fields.__4__this,
    this->fields.questInfo,
    this->fields.srcEndTime,
    result,
    this->fields.boostId,
    v3);
}


void clsQuestCheck___c__DisplayClass43_0___CheckQuestPlayable_b__8(
        clsQuestCheck___c__DisplayClass43_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( !this->fields.__4__this )
    sub_1C32E7C(this);
  clsQuestCheck__RecoverItemListDialogCallback(
    this->fields.__4__this,
    this->fields.questInfo,
    this->fields.srcEndTime,
    result,
    this->fields.boostId,
    v3);
}


void clsQuestCheck___c__DisplayClass43_0___CheckQuestPlayable_b__9(
        clsQuestCheck___c__DisplayClass43_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( !this->fields.__4__this )
    sub_1C32E7C(this);
  clsQuestCheck__RecoverItemListDialogCallback(
    this->fields.__4__this,
    this->fields.questInfo,
    this->fields.srcEndTime,
    result,
    this->fields.boostId,
    v3);
}


void clsQuestCheck___c__DisplayClass43_1___ctor(clsQuestCheck___c__DisplayClass43_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void clsQuestCheck___c__DisplayClass43_1___CheckQuestPlayable_b__4(
        clsQuestCheck___c__DisplayClass43_1_o *this,
        const MethodInfo *method)
{
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v5; // x20
  Il2CppObject *v6; // x0
  int32_t v7; // w1
  Il2CppObject *v8; // x3

  if ( (byte_4C3429D & 1) == 0 )
  {
    sub_1C32C20(&SceneJumpInfo_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C32C20(&StringLiteral_12686/*"SellServant"*/);
    sub_1C32C20(&StringLiteral_12722/*"ServantCombine"*/);
    byte_4C3429D = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C32E6C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41379640(v5, (System_String_o *)StringLiteral_12686/*"SellServant"*/, 0, 0);
      if ( Instance )
      {
        v7 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1C32E7C(v6);
    case 1:
      v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v6 )
      {
        v7 = 71;
        v8 = 0;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C32E6C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41379552(v5, (System_String_o *)StringLiteral_12722/*"ServantCombine"*/, 0);
      if ( Instance )
      {
        v7 = 32;
LABEL_10:
        v6 = Instance;
        v8 = (Il2CppObject *)v5;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v6, v7, 1, v8, 0);
        return;
      }
      goto LABEL_15;
  }
}


void clsQuestCheck___c__DisplayClass43_2___ctor(clsQuestCheck___c__DisplayClass43_2_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void clsQuestCheck___c__DisplayClass43_2___CheckQuestPlayable_b__5(
        clsQuestCheck___c__DisplayClass43_2_o *this,
        const MethodInfo *method)
{
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v5; // x20
  __int64 v6; // x0
  int32_t v7; // w1

  if ( (byte_4C3429E & 1) == 0 )
  {
    sub_1C32C20(&SceneJumpInfo_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C32C20(&StringLiteral_12726/*"ServantEquipList"*/);
    sub_1C32C20(&StringLiteral_12686/*"SellServant"*/);
    sub_1C32C20(&StringLiteral_12725/*"ServantEQCombine"*/);
    byte_4C3429E = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C32E6C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41379640(v5, (System_String_o *)StringLiteral_12686/*"SellServant"*/, 1, 0);
      if ( Instance )
      {
        v7 = 22;
        goto LABEL_12;
      }
LABEL_14:
      sub_1C32E7C(v6);
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C32E6C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41379552(v5, (System_String_o *)StringLiteral_12726/*"ServantEquipList"*/, 0);
      if ( Instance )
      {
        v7 = 71;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C32E6C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41379552(v5, (System_String_o *)StringLiteral_12725/*"ServantEQCombine"*/, 0);
      if ( Instance )
      {
        v7 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v7, 1, (Il2CppObject *)v5, 0);
        return;
      }
      goto LABEL_14;
  }
}


void clsQuestCheck___c__DisplayClass43_3___ctor(clsQuestCheck___c__DisplayClass43_3_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void clsQuestCheck___c__DisplayClass43_3___CheckQuestPlayable_b__7(
        clsQuestCheck___c__DisplayClass43_3_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v4; // x20
  __int64 v5; // x0

  if ( (byte_4C3429F & 1) == 0 )
  {
    sub_1C32C20(&SceneJumpInfo_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C32C20(&StringLiteral_12686/*"SellServant"*/);
    byte_4C3429F = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v4 = (SceneJumpInfo_o *)sub_1C32E6C(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_41379640(v4, (System_String_o *)StringLiteral_12686/*"SellServant"*/, 2, 0);
    if ( !Instance )
      sub_1C32E7C(v5);
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v4, 0);
  }
}