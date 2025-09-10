void clsQuestCheck___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C23BC2 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_10926/*"QuestStartEffect"*/);
    sub_1C2D490(&clsQuestCheck_TypeInfo);
    byte_4C23BC2 = 1;
  }
  clsQuestCheck_TypeInfo->static_fields->KEY_QUEST_START_EFFECT = (struct System_String_o *)StringLiteral_10926/*"QuestStartEffect"*/;
  sub_1C2D434((CGThumbnailListItem_o *)clsQuestCheck_TypeInfo->static_fields, StringLiteral_10926/*"QuestStartEffect"*/, v1, v2);
}


void clsQuestCheck___ctor(clsQuestCheck_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C23BC1 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_clsQuestCheck___ctor__);
    byte_4C23BC1 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.cQuestReleaseListP = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.cQuestReleaseListP, (int32_t)v6, v7, v8);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_39D41E4 *)Method_SingletonTemplate_clsQuestCheck___ctor__);
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
  MapControl_QuestInfo_o *v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  MapControl_QuestInfo_o **v14; // x19
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w28
  MapControl_QuestInfo_o *v18; // x8
  int32_t questId; // w23
  int32_t questPhase; // w29
  int32_t v21; // w20
  const MethodInfo *v22; // x3
  _BOOL4 isNotItemConsume; // w21
  int32_t v24; // w25
  UserGameEntity_o *v25; // x26
  QuestEntity_o *v26; // x27
  System_String_o *v27; // x19
  System_String_o *v28; // x20
  CommonUI_o *v29; // x21
  clsQuestCheck___c_c *v30; // x8
  System_Action_o *_9__41_3; // x22
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
  __int64 v87; // x2
  int32_t v88; // w29
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v90; // x8
  int *v91; // x26
  System_String_o **v92; // x28
  int64_t qp; // x8
  struct System_Int32_array *nums; // x9
  System_String_o *v95; // x0
  System_String_o *v96; // x0
  System_String_o *v97; // x19
  System_String_o *v98; // x0
  System_String_o *v99; // x19
  CommonUI_o *v100; // x20
  clsQuestCheck___c_c *v101; // x8
  System_String_o *v102; // x21
  System_Action_o *_9__41_10; // x22
  Il2CppObject *v104; // x23
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  struct clsQuestCheck___c_StaticFields *v107; // x0
  CGThumbnailListItem_o *p__9__41_10; // x0
  Il2CppObject *v109; // x19
  RecoverDlgComponent_CallbackFunc_o *v110; // x20
  QuestConsumeItemEntity_o *v111; // x24
  Il2CppObject *v112; // x25
  Il2CppObject *v113; // x27
  System_String_o *v114; // x20
  int32_t v115; // w29
  struct System_Int32_array *v116; // x8
  struct System_Int32_array *v117; // x8
  int *v118; // x26
  System_String_o **v119; // x28
  int64_t v120; // x8
  struct System_Int32_array *v121; // x9
  Il2CppObject *Entity; // x0
  TerminalPramsManager_c *v123; // x0
  int v124; // w8
  TerminalPramsManager_c *v125; // x0
  int32_t VaildPayType; // w21
  TerminalPramsManager_c *v127; // x0
  MapControl_QuestInfo_o *v128; // x8
  QuestMessageMaster_o *v129; // x19
  int32_t v130; // w2
  System_String_o *ValidMessage; // x0
  System_String_o *v132; // x19
  Il2CppObject *v133; // x20
  System_String_o *v134; // x21
  System_String_o *v135; // x22
  clsQuestCheck___c_c *v136; // x8
  CommonConfirmDialog_ClickDelegate_o *_9__41_2; // x24
  System_String_o *v138; // x23
  Il2CppObject *v139; // x25
  struct clsQuestCheck___c_StaticFields *v140; // x0
  int32_t v141; // w2
  const MethodInfo *v142; // x3
  System_String_o *v143; // x0
  System_String_o *v144; // x0
  System_String_o *v145; // x19
  System_String_o *v146; // x0
  clsQuestCheck___c_c *v147; // x8
  Il2CppObject *v148; // x23
  struct clsQuestCheck___c_StaticFields *v149; // x0
  char v150; // [xsp+3Ch] [xbp-84h]
  char v151; // [xsp+3Ch] [xbp-84h]
  UserGameEntity_o *SelfUserGame; // [xsp+40h] [xbp-80h]
  UserGameEntity_o *v153; // [xsp+40h] [xbp-80h]
  int32_t v154; // [xsp+4Ch] [xbp-74h]
  int32_t key; // [xsp+50h] [xbp-70h]
  int32_t servantEquipSum[2]; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4C23BBA & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&RecoverDlgComponent_CallbackFunc_TypeInfo);
    sub_1C2D490(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_1C2D490(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMessageMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_0__);
    sub_1C2D490(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_10__);
    sub_1C2D490(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_12__);
    sub_1C2D490(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_1__);
    sub_1C2D490(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_2__);
    sub_1C2D490(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_3__);
    sub_1C2D490(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_6__);
    sub_1C2D490(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__11__);
    sub_1C2D490(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__8__);
    sub_1C2D490(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__9__);
    sub_1C2D490(&clsQuestCheck___c__DisplayClass41_0_TypeInfo);
    sub_1C2D490(&clsQuestCheck___c_TypeInfo);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    sub_1C2D490(&StringLiteral_10878/*"QUEST_MESSAGE_DLG_DECIDE"*/);
    sub_1C2D490(&StringLiteral_10877/*"QUEST_MESSAGE_DLG_CANCEL"*/);
    sub_1C2D490(&StringLiteral_10876/*"QUEST_ITEM_COST_OVER"*/);
    sub_1C2D490(&StringLiteral_12181/*"SHORT_DLG_TITLE"*/);
    sub_1C2D490(&StringLiteral_44/*"\n\n"*/);
    sub_1C2D490(&StringLiteral_2861/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_10817/*"QUEST_AP_MAX_OVER"*/);
    sub_1C2D490(&Method_clsQuestCheck_RefreshTerminalScene__);
    byte_4C23BBA = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  v9 = sub_1C2D6DC(clsQuestCheck___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_232;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = questInfo;
  v14 = (MapControl_QuestInfo_o **)(v9 + 24);
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 24), (int32_t)questInfo, v15, v16);
  SpotID = *(void **)(v9 + 24);
  *(_QWORD *)(v9 + 32) = srcEndTime;
  *(_DWORD *)(v9 + 40) = boostId;
  if ( !SpotID )
    goto LABEL_232;
  v17 = *((_DWORD *)SpotID + 16);
  SpotID = (void *)MapControl_QuestInfo__GetSpotID((MapControl_QuestInfo_o *)SpotID, 0);
  v18 = *v14;
  if ( !*v14 )
    goto LABEL_232;
  questId = v18->fields.questId;
  questPhase = v18->fields.questPhase;
  v21 = (int)SpotID;
  SpotID = (void *)MapControl_QuestInfo__GetActConsumeCost(*v14, 0);
  v11 = *v14;
  if ( !*v14 )
    goto LABEL_232;
  isNotItemConsume = v11->fields.isNotItemConsume;
  v24 = (int)SpotID;
  if ( !clsQuestCheck__IsQuestValid(this, v11, *(_QWORD *)(v9 + 32), v22) )
  {
    v36 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v36, (Il2CppObject *)this, Method_clsQuestCheck_RefreshTerminalScene__, 0);
    clsQuestCheck__OpenQuestTimeOverNoticeDialog(v37, v36, v38);
    goto LABEL_74;
  }
  SpotID = UserGameMaster__getSelfUserGame(0);
  if ( !*v14 )
    goto LABEL_232;
  v25 = (UserGameEntity_o *)SpotID;
  SpotID = MapControl_QuestInfo__GetMine(*v14, 0);
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
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12181/*"SHORT_DLG_TITLE"*/, 0);
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_10817/*"QUEST_AP_MAX_OVER"*/, 0);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v29 = (CommonUI_o *)SpotID;
      v30 = clsQuestCheck___c_TypeInfo;
      if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
        v30 = clsQuestCheck___c_TypeInfo;
      }
      _9__41_3 = v30->static_fields->__9__41_3;
      if ( !_9__41_3 )
      {
        if ( !v30->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v30);
          v30 = clsQuestCheck___c_TypeInfo;
        }
        v32 = (Il2CppObject *)v30->static_fields->__9;
        _9__41_3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(_9__41_3, v32, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_3__, 0);
        static_fields = clsQuestCheck___c_TypeInfo->static_fields;
        static_fields->__9__41_3 = _9__41_3;
        sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__41_3, (int32_t)_9__41_3, v34, v35);
      }
      if ( !v29 )
        goto LABEL_232;
      CommonUI__OpenNotificationDialog(v29, v27, v28, _9__41_3, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
      goto LABEL_74;
    }
  }
  v154 = v21;
  key = v17;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23BE1 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23BE1 = 1;
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
  if ( !byte_4C23BE2 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v39 = TerminalPramsManager_TypeInfo;
    byte_4C23BE2 = 1;
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
  SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_232;
  SpotID = DataManager__GetMasterData_object_(
             (DataManager_o *)SpotID,
             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SpotID )
    goto LABEL_232;
  v43 = (UserServantMaster_o *)SpotID;
  UserServantMaster__getCount((UserServantMaster_o *)SpotID, &servantEquipSum[1], servantEquipSum, 1, 0);
  SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_232;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)SpotID,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v43, 1, 0) )
  {
    SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v48 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C2D6DC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v48,
        v49,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__41_0__,
        0);
      v50 = clsQuestCheck___c_TypeInfo->static_fields;
      v50->__9__41_0 = v48;
      sub_1C2D434((CGThumbnailListItem_o *)&v50->__9__41_0, (int32_t)v48, v51, v52);
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
    SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v48 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C2D6DC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v48,
        v60,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__41_1__,
        0);
      v61 = clsQuestCheck___c_TypeInfo->static_fields;
      v61->__9__41_1 = v48;
      sub_1C2D434((CGThumbnailListItem_o *)&v61->__9__41_1, (int32_t)v48, v62, v63);
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
    SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v25 )
      goto LABEL_232;
    v65 = (CommonUI_o *)SpotID;
    if ( !byte_4C2162B )
    {
      sub_1C2D490(&BalanceConfig_TypeInfo);
      byte_4C2162B = 1;
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
      v48 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C2D6DC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v48,
        v67,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__41_6__,
        0);
      v68 = clsQuestCheck___c_TypeInfo->static_fields;
      v68->__9__41_6 = v48;
      sub_1C2D434((CGThumbnailListItem_o *)&v68->__9__41_6, (int32_t)v48, v69, v70);
    }
    if ( !v65 )
      goto LABEL_232;
    v56 = 2;
    v53 = v65;
    v54 = Count;
    goto LABEL_72;
  }
  SpotID = (void *)QuestEntity__GetConsumeType(v26, 0);
  v73 = v21;
  v74 = v40;
  switch ( (int)SpotID )
  {
    case 1:
      if ( !v25 )
        goto LABEL_232;
      if ( v24 <= UserGameEntity__getAct(v25, 0) )
        goto LABEL_162;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v76 = (RecoverDlgComponent_CallbackFunc_o *)sub_1C2D6DC(RecoverDlgComponent_CallbackFunc_TypeInfo);
      RecoverDlgComponent_CallbackFunc___ctor(
        v76,
        (Il2CppObject *)v9,
        Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__8__,
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
      v81 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v82 = (RecoverDlgComponent_CallbackFunc_o *)sub_1C2D6DC(RecoverDlgComponent_CallbackFunc_TypeInfo);
      RecoverDlgComponent_CallbackFunc___ctor(
        v82,
        (Il2CppObject *)v9,
        Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__9__,
        0);
      if ( !v81 )
        goto LABEL_232;
      CommonUI__OpenRpRecoverItemListDialog((CommonUI_o *)v81, v24, v82, 0, 0);
      return 0;
    case 3:
      ItemConsumeEntity = QuestEntity__getItemConsumeEntity(v26, isNotItemConsume, 0);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      v84 = DataManager__GetMasterData_object_(
              (DataManager_o *)SpotID,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserItemMaster___);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      v85 = DataManager__GetMasterData_object_(
              (DataManager_o *)SpotID,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
      SelfUserGame = UserGameMaster__getSelfUserGame(0);
      if ( !ItemConsumeEntity )
        goto LABEL_162;
      v86 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0) )
        goto LABEL_162;
      v150 = 0;
      v88 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C211E1 )
        {
          sub_1C2D490(&NetworkManager_TypeInfo);
          byte_4C211E1 = 1;
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
        if ( (unsigned int)v88 >= LODWORD(itemIds->max_length) )
          goto LABEL_233;
        if ( !v84 )
          goto LABEL_232;
        SpotID = UserItemMaster__GetEntity(
                   (UserItemMaster_o *)v84,
                   *(_QWORD *)(*((_QWORD *)SpotID + 23) + 64LL),
                   itemIds->m_Items[v88],
                   0);
        v90 = ItemConsumeEntity->fields.itemIds;
        if ( !v90 )
          goto LABEL_232;
        if ( (unsigned int)v88 >= LODWORD(v90->max_length) )
          goto LABEL_233;
        if ( !v85 )
          goto LABEL_232;
        v91 = (int *)SpotID;
        SpotID = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)v85,
                   v90->m_Items[v88],
                   (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !SpotID )
          goto LABEL_232;
        v92 = (System_String_o **)SpotID;
        if ( *((_DWORD *)SpotID + 12) == 1 )
        {
          if ( !SelfUserGame )
            goto LABEL_232;
          qp = SelfUserGame->fields.qp;
        }
        else if ( v91 )
        {
          SpotID = (void *)ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0);
          qp = 0;
          if ( ((unsigned __int8)SpotID & 1) != 0 )
            qp = v91[7];
        }
        else
        {
          qp = 0;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_232;
        if ( (unsigned int)v88 >= LODWORD(nums->max_length) )
          goto LABEL_233;
        if ( qp < nums->m_Items[v88] )
        {
          v86 = System_String__Concat_63496112(v86, (System_String_o *)StringLiteral_43/*"\n"*/, v92[3], 0);
          v150 = 1;
        }
        ++v88;
      }
      while ( QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, v88, 0) );
      v74 = v40;
      v73 = v154;
      if ( (v150 & 1) == 0 )
        goto LABEL_162;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v95 = LocalizationManager__Get((System_String_o *)StringLiteral_10876/*"QUEST_ITEM_COST_OVER"*/, 0);
      v96 = System_String__Format(v95, (Il2CppObject *)v86, 0);
      v97 = System_String__Concat_63457864(v96, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0);
      v98 = LocalizationManager__Get((System_String_o *)StringLiteral_2861/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0);
      v99 = System_String__Concat_63457864(v97, v98, 0);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v100 = (CommonUI_o *)SpotID;
      v101 = clsQuestCheck___c_TypeInfo;
      if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
        v101 = clsQuestCheck___c_TypeInfo;
      }
      v102 = (System_String_o *)StringLiteral_1/*""*/;
      _9__41_10 = v101->static_fields->__9__41_10;
      if ( _9__41_10 )
        goto LABEL_230;
      if ( !v101->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v101);
        v101 = clsQuestCheck___c_TypeInfo;
      }
      v104 = (Il2CppObject *)v101->static_fields->__9;
      _9__41_10 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(_9__41_10, v104, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_10__, 0);
      v107 = clsQuestCheck___c_TypeInfo->static_fields;
      v107->__9__41_10 = _9__41_10;
      p__9__41_10 = (CGThumbnailListItem_o *)&v107->__9__41_10;
      goto LABEL_229;
    case 4:
      if ( !v25 )
        goto LABEL_232;
      if ( v24 > UserGameEntity__getAct(v25, 0) )
      {
        v109 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v110 = (RecoverDlgComponent_CallbackFunc_o *)sub_1C2D6DC(RecoverDlgComponent_CallbackFunc_TypeInfo);
        RecoverDlgComponent_CallbackFunc___ctor(
          v110,
          (Il2CppObject *)v9,
          Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__11__,
          0);
        if ( v109 )
        {
          v80 = 1;
          v77 = (CommonUI_o *)v109;
          v78 = v24;
          v79 = v110;
LABEL_130:
          CommonUI__OpenApRecoverItemListDialog(v77, v78, v79, v80, 0);
          return 0;
        }
LABEL_232:
        sub_1C2D6EC(SpotID, v11);
      }
      v111 = QuestEntity__getItemConsumeEntity(v26, isNotItemConsume, 0);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      v112 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserItemMaster___);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      v113 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
      v153 = UserGameMaster__getSelfUserGame(0);
      if ( v111 )
      {
        v114 = (System_String_o *)StringLiteral_1/*""*/;
        if ( QuestConsumeItemEntity__IsAvailableAt(v111, 0, 0) )
        {
          v151 = 0;
          v115 = 0;
          do
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4C211E1 )
            {
              sub_1C2D490(&NetworkManager_TypeInfo);
              byte_4C211E1 = 1;
            }
            SpotID = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              SpotID = NetworkManager_TypeInfo;
            }
            v116 = v111->fields.itemIds;
            if ( !v116 )
              goto LABEL_232;
            if ( (unsigned int)v115 >= LODWORD(v116->max_length) )
              goto LABEL_233;
            if ( !v112 )
              goto LABEL_232;
            SpotID = UserItemMaster__GetEntity(
                       (UserItemMaster_o *)v112,
                       *(_QWORD *)(*((_QWORD *)SpotID + 23) + 64LL),
                       v116->m_Items[v115],
                       0);
            v117 = v111->fields.itemIds;
            if ( !v117 )
              goto LABEL_232;
            if ( (unsigned int)v115 >= LODWORD(v117->max_length) )
              goto LABEL_233;
            if ( !v113 )
              goto LABEL_232;
            v118 = (int *)SpotID;
            SpotID = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v113,
                       v117->m_Items[v115],
                       (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( !SpotID )
              goto LABEL_232;
            v119 = (System_String_o **)SpotID;
            if ( *((_DWORD *)SpotID + 12) == 1 )
            {
              if ( !v153 )
                goto LABEL_232;
              v120 = v153->fields.qp;
            }
            else if ( v118 )
            {
              SpotID = (void *)ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0);
              v120 = 0;
              if ( ((unsigned __int8)SpotID & 1) != 0 )
                v120 = v118[7];
            }
            else
            {
              v120 = 0;
            }
            v121 = v111->fields.nums;
            if ( !v121 )
              goto LABEL_232;
            if ( (unsigned int)v115 >= LODWORD(v121->max_length) )
LABEL_233:
              sub_1C2D6F4(SpotID, v11, v87);
            if ( v120 < v121->m_Items[v115] )
            {
              v114 = System_String__Concat_63496112(v114, (System_String_o *)StringLiteral_43/*"\n"*/, v119[3], 0);
              v151 = 1;
            }
            ++v115;
          }
          while ( QuestConsumeItemEntity__IsAvailableAt(v111, v115, 0) );
          v74 = v40;
          v73 = v154;
          if ( (v151 & 1) != 0 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v143 = LocalizationManager__Get((System_String_o *)StringLiteral_10876/*"QUEST_ITEM_COST_OVER"*/, 0);
            v144 = System_String__Format(v143, (Il2CppObject *)v114, 0);
            v145 = System_String__Concat_63457864(v144, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0);
            v146 = LocalizationManager__Get((System_String_o *)StringLiteral_2861/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0);
            v99 = System_String__Concat_63457864(v145, v146, 0);
            SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v100 = (CommonUI_o *)SpotID;
            v147 = clsQuestCheck___c_TypeInfo;
            if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
              v147 = clsQuestCheck___c_TypeInfo;
            }
            v102 = (System_String_o *)StringLiteral_1/*""*/;
            _9__41_10 = v147->static_fields->__9__41_12;
            if ( !_9__41_10 )
            {
              if ( !v147->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v147);
                v147 = clsQuestCheck___c_TypeInfo;
              }
              v148 = (Il2CppObject *)v147->static_fields->__9;
              _9__41_10 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
              System_Action___ctor(_9__41_10, v148, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_12__, 0);
              v149 = clsQuestCheck___c_TypeInfo->static_fields;
              v149->__9__41_12 = _9__41_10;
              p__9__41_10 = (CGThumbnailListItem_o *)&v149->__9__41_12;
LABEL_229:
              sub_1C2D434(p__9__41_10, (int32_t)_9__41_10, v105, v106);
            }
LABEL_230:
            if ( !v100 )
              goto LABEL_232;
            CommonUI__OpenNotificationDialog(v100, v102, v99, _9__41_10, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
            goto LABEL_74;
          }
        }
      }
LABEL_162:
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      SpotID = DataManager__GetMasterData_object_(
                 (DataManager_o *)SpotID,
                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !SpotID )
        goto LABEL_232;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)SpotID,
                 key,
                 (const MethodInfo_3387D98 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( Entity && WarEntity__IsFolder((WarEntity_o *)Entity, 0) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C23BE3 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C23BE3 = 1;
        }
        v123 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v123 = TerminalPramsManager_TypeInfo;
        }
        v124 = 3;
      }
      else
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C23BE3 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C23BE3 = 1;
        }
        v123 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v123 = TerminalPramsManager_TypeInfo;
        }
        v124 = 2;
      }
      v123->static_fields->_DispState_k__BackingField = v124;
      if ( !v123->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v123);
      if ( !byte_4C23BE4 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C23BE4 = 1;
      }
      v125 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v125 = TerminalPramsManager_TypeInfo;
      }
      v125->static_fields->_IsDoneShortcut_k__BackingField = 0;
      if ( !byte_4C23BE5 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        v125 = TerminalPramsManager_TypeInfo;
        byte_4C23BE5 = 1;
      }
      if ( !v125->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v125);
        v125 = TerminalPramsManager_TypeInfo;
      }
      v125->static_fields->_PhaseCnt_k__BackingField = v74;
      if ( !byte_4C23BE6 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        v125 = TerminalPramsManager_TypeInfo;
        byte_4C23BE6 = 1;
      }
      if ( !v125->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v125);
        v125 = TerminalPramsManager_TypeInfo;
      }
      v125->static_fields->_SpotId_k__BackingField = v73;
      if ( !byte_4C23BE7 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        v125 = TerminalPramsManager_TypeInfo;
        byte_4C23BE7 = 1;
      }
      if ( !v125->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v125);
        v125 = TerminalPramsManager_TypeInfo;
      }
      v125->static_fields->_WarId_k__BackingField = key;
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      SpotID = DataManager__GetMasterData_object_(
                 (DataManager_o *)SpotID,
                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_GachaMaster___);
      if ( !SpotID )
        goto LABEL_232;
      VaildPayType = GachaMaster__getVaildPayType((GachaMaster_o *)SpotID, 0);
      if ( !byte_4C237DB )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C237DB = 1;
      }
      v127 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v127 = TerminalPramsManager_TypeInfo;
      }
      v127->static_fields->_SummonType_k__BackingField = VaildPayType;
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      SpotID = DataManager__GetMasterData_object_(
                 (DataManager_o *)SpotID,
                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMessageMaster___);
      v128 = *v14;
      if ( !*v14 )
        goto LABEL_232;
      v129 = (QuestMessageMaster_o *)SpotID;
      SpotID = (void *)MapControl_QuestInfo__GetPhaseMax(v128, 0);
      if ( !v129 )
        goto LABEL_232;
      if ( v74 + 1 >= (int)SpotID )
        v130 = (int)SpotID;
      else
        v130 = v74 + 1;
      v71 = 1;
      ValidMessage = QuestMessageMaster__GetValidMessage(v129, questId, v130, 1, 0);
      if ( ValidMessage )
      {
        v132 = ValidMessage;
        v133 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v134 = LocalizationManager__Get((System_String_o *)StringLiteral_10878/*"QUEST_MESSAGE_DLG_DECIDE"*/, 0);
        SpotID = LocalizationManager__Get((System_String_o *)StringLiteral_10877/*"QUEST_MESSAGE_DLG_CANCEL"*/, 0);
        v135 = (System_String_o *)SpotID;
        v136 = clsQuestCheck___c_TypeInfo;
        if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
          v136 = clsQuestCheck___c_TypeInfo;
        }
        _9__41_2 = v136->static_fields->__9__41_2;
        v138 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !_9__41_2 )
        {
          if ( !v136->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v136);
            v136 = clsQuestCheck___c_TypeInfo;
          }
          v139 = (Il2CppObject *)v136->static_fields->__9;
          _9__41_2 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            _9__41_2,
            v139,
            Method_clsQuestCheck___c__CheckQuestPlayable_b__41_2__,
            0);
          v140 = clsQuestCheck___c_TypeInfo->static_fields;
          v140->__9__41_2 = _9__41_2;
          sub_1C2D434((CGThumbnailListItem_o *)&v140->__9__41_2, (int32_t)_9__41_2, v141, v142);
        }
        if ( v133 )
        {
          v71 = 1;
          CommonUI__OpenConfirmDialog_31167304((CommonUI_o *)v133, v138, v132, v134, v135, _9__41_2, 0, 1, 0, 0);
          return v71;
        }
        goto LABEL_232;
      }
      return v71;
    default:
      goto LABEL_162;
  }
}


bool clsQuestCheck__CheckQuestPlayableNow(clsQuestCheck_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Master_object; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x0
  bool v8; // w0
  const MethodInfo *v9; // x2
  bool IsOpenByTime; // w8
  Il2CppObject *v12; // [xsp+8h] [xbp-48h] BYREF
  UserQuestEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C23B9D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C23B9D = 1;
  }
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, method) )
    return 0;
  entity = 0;
  v12 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_26;
  if ( UserQuestMaster__TryGetEntity(
         (UserQuestMaster_o *)Master_object,
         &entity,
         (int64_t)v7[2].fields.list[1].monitor,
         questId,
         0) )
  {
    v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_26;
    if ( UserQuestEntity__IsNotExpired(entity, 0) )
      return 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !v7 )
LABEL_26:
    sub_1C2D6EC(v7, v5);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v7,
          &v12,
          questId,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)v12;
  if ( !v12 )
    goto LABEL_26;
  IsOpenByTime = QuestEntity__IsOpenByTime((QuestEntity_o *)v12, 0, 0);
  v8 = 0;
  if ( IsOpenByTime )
    return clsQuestCheck__IsReleasedQuest(this, questId, v9);
  return v8;
}


void clsQuestCheck__DeleteContinueData(const MethodInfo *method)
{
  clsQuestCheck_c *v1; // x0
  System_String_o *KEY_QUEST_START_EFFECT; // x19

  if ( (byte_4C23B9A & 1) == 0 )
  {
    sub_1C2D490(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C2D490(&clsQuestCheck_TypeInfo);
    byte_4C23B9A = 1;
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
  __int64 v5; // x1
  bool v6; // w8
  int32_t result; // w0
  TerminalPramsManager_c *v8; // x0

  if ( (byte_4C23BAD & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23BAD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v6 = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0);
  result = -1;
  if ( !v6 || !is_quest_after_action )
    return result;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
LABEL_17:
    sub_1C2D6EC(Instance, v5);
  if ( !QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0) )
    return -1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21464 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  return v8->static_fields->_QuestId_k__BackingField;
}


System_Int32_array *clsQuestCheck__GetEventQuestIdListPlayable(
        clsQuestCheck_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x20
  System_Int32_array *Master_object; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v10; // x21
  unsigned __int64 v11; // x23
  int32_t v12; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10

  if ( (byte_4C23BB6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C23BB6 = 1;
  }
  if ( eventId <= 0 )
    return (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  v5 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Master_object )
    goto LABEL_21;
  Master_object = QuestGroupMaster__GetQuestIdListByEventId((QuestGroupMaster_o *)Master_object, eventId, 0);
  if ( !Master_object )
    goto LABEL_21;
  max_length = Master_object->max_length;
  v10 = Master_object;
  if ( (int)max_length >= 1 )
  {
    v11 = 0;
    do
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1C2D6F4(Master_object, v7, v8);
      v12 = v10->m_Items[v11];
      Master_object = (System_Int32_array *)clsQuestCheck__CheckQuestPlayableNow(this, v12, v8);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v5 )
          goto LABEL_21;
        items = v5->fields._items;
        v14 = Method_System_Collections_Generic_List_int__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v5,
            v12,
            *(const MethodInfo_376CB60 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v5->fields._size = size + 1;
          items->m_Items[size] = v12;
        }
      }
      LODWORD(max_length) = v10->max_length;
    }
    while ( (__int64)++v11 < (int)max_length );
  }
  if ( !v5 )
LABEL_21:
    sub_1C2D6EC(Master_object, v7);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *clsQuestCheck__GetNewPlayableEventQuestId(
        clsQuestCheck_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0
  System_String_o *ClearEventQuestIds_k__BackingField; // x0
  System_String_array *v9; // x21
  System_Converter_object__int__o *v10; // x22
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Int32_array *v18; // x19
  __int64 v19; // x20
  TerminalPramsManager_c *v20; // x0
  CGThumbnailListItem_o *v21; // x0
  __int64 v23; // x19
  TerminalPramsManager_c *v24; // x0
  CGThumbnailListItem_o *p_ClearEventQuestIds_k__BackingField; // x0

  if ( (byte_4C23BB5 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_ConvertAll_string__int___);
    sub_1C2D490(&System_Converter_string__int__TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Except_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Int32_Parse__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C23BB5 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23BE0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23BE0 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( System_String__IsNullOrEmpty(v5->static_fields->_ClearEventQuestIds_k__BackingField, 0) )
    return (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23BE0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23BE0 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  ClearEventQuestIds_k__BackingField = v7->static_fields->_ClearEventQuestIds_k__BackingField;
  if ( !ClearEventQuestIds_k__BackingField
    || (v9 = System_String__Split(ClearEventQuestIds_k__BackingField, 0x2Cu, 0, 0),
        v10 = (System_Converter_object__int__o *)sub_1C2D6DC(System_Converter_string__int__TypeInfo),
        System_Converter_object__int____ctor(v10, 0, Method_System_Int32_Parse__, 0),
        (ClearEventQuestIds_k__BackingField = (System_String_o *)System_Array__ConvertAll_object__int_(
                                                                   (System_Object_array *)v9,
                                                                   (System_Converter_TInput__TOutput__o *)v10,
                                                                   (const MethodInfo_31D1FD4 *)Method_System_Array_ConvertAll_string__int___)) == 0) )
  {
    sub_1C2D6EC(ClearEventQuestIds_k__BackingField, v6);
  }
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)ClearEventQuestIds_k__BackingField;
  if ( !ClearEventQuestIds_k__BackingField[1].klass )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = StringLiteral_1/*""*/;
    if ( !byte_4C23BDF )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23BDF = 1;
    }
    v24 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v24 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (CGThumbnailListItem_o *)&v24->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = (CGThumbnailListItem_c *)v23;
    sub_1C2D434(p_ClearEventQuestIds_k__BackingField, v23, (int32_t)v11, v12);
    TerminalPramsManager__ClearEventQuestIds_SaveData(0);
    return (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)clsQuestCheck__GetEventQuestIdListPlayable(
                                                               this,
                                                               eventId,
                                                               v11);
  v15 = System_Linq_Enumerable__Except_int_(
          v14,
          v13,
          (const MethodInfo_30F4194 *)Method_System_Linq_Enumerable_Except_int___);
  v18 = System_Linq_Enumerable__ToArray_int_(
          v15,
          (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v19 = StringLiteral_1/*""*/;
  if ( !byte_4C23BDF )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23BDF = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  v21 = (CGThumbnailListItem_o *)&v20->static_fields->_ClearEventQuestIds_k__BackingField;
  v21->klass = (CGThumbnailListItem_c *)v19;
  sub_1C2D434(v21, v19, v16, v17);
  TerminalPramsManager__ClearEventQuestIds_SaveData(0);
  return v18;
}


System_Collections_Generic_List_QuestEntity__o *clsQuestCheck__GetQuestEntityByQuestId(
        clsQuestCheck_o *this,
        System_Collections_Generic_List_int__o *qids,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *Entity; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *v13; // x1
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Collections_Generic_List_Enumerator_int__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v20; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C23BB3 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_QuestEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23BB3 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v4 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___),
        !qids) )
  {
    sub_1C2D6EC(Instance, v6);
  }
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    qids,
    (const MethodInfo_376D634 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_int___MoveNext(
           &v20,
           (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v8 )
      break;
    if ( !v7 )
      sub_1C2D6EC(v8, v9);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v7,
               v20.fields._current,
               (const MethodInfo_3387D98 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    v13 = Entity;
    if ( !v4 )
      sub_1C2D6EC(Entity, Entity);
    items = v4->fields._items;
    v15 = Method_System_Collections_Generic_List_QuestEntity__Add__;
    ++v4->fields._version;
    if ( !items )
      sub_1C2D6EC(Entity, Entity);
    size = v4->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v4,
        Entity,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v17 = &items->obj.klass + size;
      v4->fields._size = size + 1;
      v17[4] = (Il2CppClass *)v13;
      sub_1C2D434((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v13, v11, v12);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v20,
    (const MethodInfo_35106EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  __int64 v11; // x1
  QuestReleaseEntity_array *ListByType; // x24
  __int64 v13; // x2
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x25
  unsigned int v16; // w28
  QuestReleaseEntity_o *v17; // x8
  int32_t questId; // w26
  const MethodInfo *v19; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v23; // x23
  const MethodInfo *v24; // x4
  int32_t v25; // w20
  int v26; // w21
  System_Collections_Generic_List_Enumerator_int__o v28; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v29; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C23BB2 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor___77944936);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23BB2 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v9 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_32;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 9, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_32;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_1C2D6F4(Instance, v11, v13);
      v17 = ListByType->m_Items[v16];
      if ( !v17 )
        break;
      if ( v17->fields.targetId == svt_id )
      {
        if ( !v15 )
          break;
        questId = v17->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v15,
                                      questId,
                                      (const MethodInfo_3387D98 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, questId, oldFriendShipRank, 9, v19);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v9 )
              break;
            items = v9->fields._items;
            v21 = Method_System_Collections_Generic_List_int__Add__;
            ++v9->fields._version;
            if ( !items )
              break;
            size = v9->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v9,
                questId,
                *(const MethodInfo_376CB60 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
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
      if ( (int)++v16 >= max_length )
        goto LABEL_22;
    }
LABEL_32:
    sub_1C2D6EC(Instance, v11);
  }
LABEL_22:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v23 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_58115124(
      v23,
      (System_Collections_Generic_IEnumerable_T__o *)v9,
      (const MethodInfo_376C434 *)Method_System_Collections_Generic_List_int___ctor___77944936);
    Instance = (DataManager_o *)clsQuestCheck__GetReleaseQuestIdByServantFriendShip(this, svt_id, -1, type_flag, v24);
    if ( !Instance )
      goto LABEL_32;
    v9 = (System_Collections_Generic_List_int__o *)Instance;
    v25 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v25 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_int___get_Item(
                                      v9,
                                      v25,
                                      (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v23 )
          goto LABEL_32;
        v26 = (int)Instance;
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v28,
          v23,
          (const MethodInfo_376D634 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v29 = v28;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v29,
                  (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v26 == v29.fields._current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v9,
              v25,
              (const MethodInfo_376E2E0 *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v29,
          (const MethodInfo_35106EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( --v25 < 0 )
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

  return clsQuestCheck__GetReleaseQuestIdByServantLimit_35752908(this, svt_id, oldLimitCount, 494, v4);
}


System_Collections_Generic_List_int__o *clsQuestCheck__GetReleaseQuestIdByServantLimit_35752908(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLimitCount,
        int32_t type_flag,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v9; // x19
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  QuestReleaseEntity_array *ListByType; // x24
  __int64 v13; // x2
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x25
  unsigned int v16; // w28
  QuestReleaseEntity_o *v17; // x8
  int32_t questId; // w26
  const MethodInfo *v19; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v23; // x23
  const MethodInfo *v24; // x4
  int32_t v25; // w20
  int v26; // w21
  System_Collections_Generic_List_Enumerator_int__o v28; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v29; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C23BAF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor___77944936);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23BAF = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v9 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_32;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_32;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_1C2D6F4(Instance, v11, v13);
      v17 = ListByType->m_Items[v16];
      if ( !v17 )
        break;
      if ( v17->fields.targetId == svt_id )
      {
        if ( !v15 )
          break;
        questId = v17->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v15,
                                      questId,
                                      (const MethodInfo_3387D98 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, questId, oldLimitCount, 7, v19);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v9 )
              break;
            items = v9->fields._items;
            v21 = Method_System_Collections_Generic_List_int__Add__;
            ++v9->fields._version;
            if ( !items )
              break;
            size = v9->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v9,
                questId,
                *(const MethodInfo_376CB60 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
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
      if ( (int)++v16 >= max_length )
        goto LABEL_22;
    }
LABEL_32:
    sub_1C2D6EC(Instance, v11);
  }
LABEL_22:
  if ( (oldLimitCount & 0x80000000) == 0 )
  {
    v23 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_58115124(
      v23,
      (System_Collections_Generic_IEnumerable_T__o *)v9,
      (const MethodInfo_376C434 *)Method_System_Collections_Generic_List_int___ctor___77944936);
    Instance = (DataManager_o *)clsQuestCheck__GetReleaseQuestIdByServantLimit_35752908(
                                  this,
                                  svt_id,
                                  -1,
                                  type_flag,
                                  v24);
    if ( !Instance )
      goto LABEL_32;
    v9 = (System_Collections_Generic_List_int__o *)Instance;
    v25 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v25 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_int___get_Item(
                                      v9,
                                      v25,
                                      (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v23 )
          goto LABEL_32;
        v26 = (int)Instance;
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v28,
          v23,
          (const MethodInfo_376D634 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v29 = v28;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v29,
                  (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v26 == v29.fields._current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v9,
              v25,
              (const MethodInfo_376E2E0 *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v29,
          (const MethodInfo_35106EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( --v25 < 0 )
          return v9;
      }
    }
  }
  return v9;
}


System_Collections_Generic_List_int__o *clsQuestCheck__GetReleaseQuestIdByServantLimit_35753924(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLimitCount,
        int32_t newLimitCount,
        int32_t type_flag,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v10; // x19
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  QuestReleaseEntity_array *ListByType; // x25
  __int64 v14; // x2
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x26
  unsigned int v17; // w21
  QuestReleaseEntity_o *v18; // x8
  int32_t questId; // w27
  const MethodInfo *v20; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v24; // x24
  int v25; // w8
  __int64 v26; // x29
  QuestReleaseEntity_o *v27; // x8
  int32_t v28; // w27
  const MethodInfo *v29; // x4
  struct System_Int32_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  int32_t v33; // w20
  int v34; // w21
  System_Collections_Generic_List_Enumerator_int__o v37; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v38; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C23BB0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23BB0 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v10 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_46;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_46;
  max_length = ListByType->max_length;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( v17 < max_length )
    {
      v18 = ListByType->m_Items[v17];
      if ( !v18 )
        goto LABEL_46;
      if ( v18->fields.targetId == svt_id )
      {
        if ( !v16 )
          goto LABEL_46;
        questId = v18->fields.questId;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v16,
                     questId,
                     (const MethodInfo_3387D98 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_46;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (Il2CppObject *)clsQuestCheck__IsQuestRelease(this, questId, oldLimitCount, 7, v20);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v10 )
              goto LABEL_46;
            items = v10->fields._items;
            v22 = Method_System_Collections_Generic_List_int__Add__;
            ++v10->fields._version;
            if ( !items )
              goto LABEL_46;
            size = v10->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v10,
                questId,
                *(const MethodInfo_376CB60 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
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
      if ( (int)++v17 >= max_length )
        goto LABEL_22;
    }
LABEL_47:
    sub_1C2D6F4(Instance, v12, v14);
  }
LABEL_22:
  v24 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  v25 = ListByType->max_length;
  if ( v25 >= 1 )
  {
    v26 = 0;
    while ( (unsigned int)v26 < v25 )
    {
      v27 = ListByType->m_Items[v26];
      if ( !v27 )
        goto LABEL_46;
      if ( v27->fields.targetId == svt_id )
      {
        if ( !v16 )
          goto LABEL_46;
        v28 = v27->fields.questId;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v16,
                     v28,
                     (const MethodInfo_3387D98 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_46;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (Il2CppObject *)clsQuestCheck__IsQuestRelease(this, v28, newLimitCount, 7, v29);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v24 )
              goto LABEL_46;
            v30 = v24->fields._items;
            v31 = Method_System_Collections_Generic_List_int__Add__;
            ++v24->fields._version;
            if ( !v30 )
              goto LABEL_46;
            v32 = v24->fields._size;
            if ( (unsigned int)v32 >= LODWORD(v30->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v24,
                v28,
                *(const MethodInfo_376CB60 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              v24->fields._size = v32 + 1;
              v30->m_Items[v32] = v28;
            }
          }
        }
      }
      v25 = ListByType->max_length;
      if ( (int)++v26 >= v25 )
        goto LABEL_37;
    }
    goto LABEL_47;
  }
LABEL_37:
  if ( !v24 )
LABEL_46:
    sub_1C2D6EC(Instance, v12);
  v33 = v24->fields._size - 1;
  if ( v33 >= 0 )
  {
    while ( 1 )
    {
      Instance = (Il2CppObject *)System_Collections_Generic_List_int___get_Item(
                                   v24,
                                   v33,
                                   (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v10 )
        goto LABEL_46;
      v34 = (int)Instance;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v37,
        v10,
        (const MethodInfo_376D634 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v38 = v37;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v38,
                (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        if ( v34 == v38.fields._current )
        {
          System_Collections_Generic_List_int___RemoveAt(
            v24,
            v33,
            (const MethodInfo_376E2E0 *)Method_System_Collections_Generic_List_int__RemoveAt__);
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v38,
        (const MethodInfo_35106EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      if ( --v33 < 0 )
        return v24;
    }
  }
  return v24;
}


System_Collections_Generic_List_int__o *clsQuestCheck__GetReleaseQuestIdByServantLv(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLv,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__GetReleaseQuestIdByServantLv_35752348(this, svt_id, oldLv, 494, v4);
}


System_Collections_Generic_List_int__o *clsQuestCheck__GetReleaseQuestIdByServantLv_35752348(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLv,
        int32_t type_flag,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v9; // x23
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  QuestReleaseEntity_array *ListByType; // x24
  __int64 v13; // x2
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x25
  unsigned int v16; // w27
  QuestReleaseEntity_o *v17; // x8
  int32_t questId; // w26
  const MethodInfo *v19; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10

  if ( (byte_4C23BAE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23BAE = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_23;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 6, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_23;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_1C2D6F4(Instance, v11, v13);
      v17 = ListByType->m_Items[v16];
      if ( !v17 )
        break;
      if ( v17->fields.targetId == svt_id )
      {
        if ( !v15 )
          break;
        questId = v17->fields.questId;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v15,
                     questId,
                     (const MethodInfo_3387D98 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (Il2CppObject *)clsQuestCheck__IsQuestRelease(this, questId, oldLv, 6, v19);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v9 )
              break;
            items = v9->fields._items;
            v21 = Method_System_Collections_Generic_List_int__Add__;
            ++v9->fields._version;
            if ( !items )
              break;
            size = v9->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v9,
                questId,
                *(const MethodInfo_376CB60 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
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
      if ( (int)++v16 >= max_length )
        return v9;
    }
LABEL_23:
    sub_1C2D6EC(Instance, v11);
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
  Il2CppObject *v6; // x1
  DataManager_o *v7; // x23
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v9; // x19
  System_Collections_Generic_List_object__o *v10; // x22
  __int64 v11; // x2
  int max_length; // w8
  QuestReleaseEntity_array *v13; // x26
  unsigned int v14; // w19
  QuestReleaseEntity_o *v15; // x25
  __int64 v16; // x29
  int32_t questId; // w27
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  QuestReleaseEntity_array **v20; // x28
  System_Func_object__bool__o *v21; // x25
  const MethodInfo *v22; // x4
  const MethodInfo *v23; // x3
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
  const MethodInfo *v43; // x3
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass **v47; // x0
  QuestReleaseMaster_o *v49; // [xsp+0h] [xbp-80h]
  DataManager_o *v50; // [xsp+8h] [xbp-78h]

  if ( (byte_4C23BB1 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_QuestEntity___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantGroupMaster___);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C2D490(&System_Func_QuestEntity__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_QuestEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_clsQuestCheck___c__DisplayClass31_0__GetReleasedQuestEntityListByServantGet_b__0__);
    sub_1C2D490(&clsQuestCheck___c__DisplayClass31_0_TypeInfo);
    sub_1C2D490(&Method_clsQuestCheck___c__DisplayClass31_1__GetReleasedQuestEntityListByServantGet_b__1__);
    sub_1C2D490(&clsQuestCheck___c__DisplayClass31_1_TypeInfo);
    byte_4C23BB1 = 1;
  }
  Instance = (QuestReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  v7 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
  v9 = DataManager__GetMasterData_object_(
         v7,
         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  if ( !v9 )
    goto LABEL_49;
  v49 = (QuestReleaseMaster_o *)v9;
  Instance = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)v9, 8, 0);
  if ( !Instance )
    goto LABEL_49;
  max_length = Instance->max_length;
  v13 = Instance;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( v14 < max_length )
    {
      v15 = v13->m_Items[v14];
      v16 = sub_1C2D6DC(clsQuestCheck___c__DisplayClass31_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v16, 0);
      if ( !v15 )
        goto LABEL_49;
      if ( v15->fields.targetId == servantId )
      {
        if ( !MasterData_object )
          goto LABEL_49;
        questId = v15->fields.questId;
        Instance = (QuestReleaseEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                 questId,
                                                 (const MethodInfo_3387D98 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v16 )
          goto LABEL_49;
        *(_QWORD *)(v16 + 16) = Instance;
        v20 = (QuestReleaseEntity_array **)(v16 + 16);
        sub_1C2D434((CGThumbnailListItem_o *)(v16 + 16), (int32_t)Instance, v18, v19);
        v21 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_QuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v21,
          (Il2CppObject *)v16,
          Method_clsQuestCheck___c__DisplayClass31_0__GetReleasedQuestEntityListByServantGet_b__0__,
          0);
        Instance = (QuestReleaseEntity_array *)BasicHelper__Any_object_(
                                                 (System_Collections_Generic_List_T__o *)v10,
                                                 (System_Func_T__bool__o *)v21,
                                                 (const MethodInfo_30B7CF0 *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = *v20;
          if ( !*v20 )
            goto LABEL_49;
          Instance = (QuestReleaseEntity_array *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0);
          if ( ((unsigned int)Instance & typeFlag) != 0 )
          {
            Instance = (QuestReleaseEntity_array *)clsQuestCheck__IsQuestRelease(this, questId, -1, 0, v22);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v10 )
                goto LABEL_49;
              v6 = (Il2CppObject *)*v20;
              items = v10->fields._items;
              v25 = Method_System_Collections_Generic_List_QuestEntity__Add__;
              ++v10->fields._version;
              if ( !items )
                goto LABEL_49;
              size = v10->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v10,
                  v6,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
              }
              else
              {
                v27 = &items->obj.klass + size;
                v10->fields._size = size + 1;
                v27[4] = (Il2CppClass *)v6;
                sub_1C2D434((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v6, v11, v23);
              }
            }
          }
        }
      }
      max_length = v13->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_23;
    }
LABEL_50:
    sub_1C2D6F4(Instance, v6, v11);
  }
LABEL_23:
  Instance = (QuestReleaseEntity_array *)DataManager__GetMasterData_object_(
                                           v7,
                                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantGroupMaster___);
  if ( !Instance
    || (ListByServantID = ServantGroupMaster__getListByServantID((ServantGroupMaster_o *)Instance, servantId, 0),
        Instance = QuestReleaseMaster__getListByType(v49, 10, 0),
        !ListByServantID) )
  {
LABEL_49:
    sub_1C2D6EC(Instance, v6);
  }
  v29 = ListByServantID->max_length;
  if ( (int)v29 >= 1 )
  {
    v30 = Instance;
    v31 = 0;
    v50 = (DataManager_o *)ListByServantID;
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
      LODWORD(v29) = v50->fields.m_CancellationTokenSource;
      if ( (__int64)v31 >= (int)v29 )
        return (System_Collections_Generic_List_QuestEntity__o *)v10;
    }
    v33 = 0;
    v34 = *((_QWORD *)&v50->fields._DispLog + v31);
    while ( v33 < v32 )
    {
      v35 = v30->m_Items[v33];
      v36 = sub_1C2D6DC(clsQuestCheck___c__DisplayClass31_1_TypeInfo);
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
                                                 (const MethodInfo_3387D98 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v36 )
          goto LABEL_49;
        *(_QWORD *)(v36 + 16) = Instance;
        v40 = (QuestReleaseEntity_array **)(v36 + 16);
        sub_1C2D434((CGThumbnailListItem_o *)(v36 + 16), (int32_t)Instance, v38, v39);
        v41 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_QuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v41,
          (Il2CppObject *)v36,
          Method_clsQuestCheck___c__DisplayClass31_1__GetReleasedQuestEntityListByServantGet_b__1__,
          0);
        Instance = (QuestReleaseEntity_array *)BasicHelper__Any_object_(
                                                 (System_Collections_Generic_List_T__o *)v10,
                                                 (System_Func_T__bool__o *)v41,
                                                 (const MethodInfo_30B7CF0 *)Method_BasicHelper_Any_QuestEntity___);
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
              if ( !v10 )
                goto LABEL_49;
              v6 = (Il2CppObject *)*v40;
              v44 = v10->fields._items;
              v45 = Method_System_Collections_Generic_List_QuestEntity__Add__;
              ++v10->fields._version;
              if ( !v44 )
                goto LABEL_49;
              v46 = v10->fields._size;
              if ( (unsigned int)v46 >= LODWORD(v44->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v10,
                  v6,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
              }
              else
              {
                v47 = &v44->obj.klass + v46;
                v10->fields._size = v46 + 1;
                v47[4] = (Il2CppClass *)v6;
                sub_1C2D434((CGThumbnailListItem_o *)(v47 + 4), (int32_t)v6, v11, v43);
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
  return (System_Collections_Generic_List_QuestEntity__o *)v10;
}


bool clsQuestCheck__IsConsumeStormPod(clsQuestCheck_o *this, int32_t questId, const MethodInfo *method)
{
  QuestMaster_o *Master_object; // x0
  __int64 v5; // x1
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x19
  Il2CppObject *v7; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  __int64 v9; // x2
  bool v10; // w22
  unsigned int v11; // w21
  struct System_Int32_array *itemIds; // x8
  QuestMaster_o *v13; // x8
  BalanceConfig_c *v14; // x0
  int32_t MasterKind_k__BackingField; // w22
  QuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C23BC0 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    byte_4C23BC0 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestMaster___);
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
  v7 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !ItemConsumeEntity )
    return 0;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)v7;
  Master_object = (QuestMaster_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0);
  v10 = 0;
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v11 = 0;
    while ( 1 )
    {
      itemIds = ItemConsumeEntity->fields.itemIds;
      if ( !itemIds )
        break;
      if ( v11 >= LODWORD(itemIds->max_length) )
        sub_1C2D6F4(Master_object, v5, v9);
      if ( !v8 )
        break;
      Master_object = (QuestMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                         v8,
                                         itemIds->m_Items[v11],
                                         (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Master_object )
        break;
      v13 = Master_object;
      v14 = BalanceConfig_TypeInfo;
      MasterKind_k__BackingField = v13->fields._MasterKind_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v14 = BalanceConfig_TypeInfo;
      }
      v10 = MasterKind_k__BackingField == v14->static_fields->stormPodItemId;
      if ( !v10 )
      {
        Master_object = (QuestMaster_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v11, 0);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          continue;
      }
      return v10;
    }
LABEL_26:
    sub_1C2D6EC(Master_object, v5);
  }
  return v10;
}


bool clsQuestCheck__IsEnabledPrivilegePeriod(
        clsQuestCheck_o *this,
        int32_t questId,
        int64_t nowTime,
        const MethodInfo *method)
{
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v7; // x1
  int32_t OpenedPeriodPrivilegeId; // w0
  int32_t v9; // w20
  Il2CppObject *v10; // x21
  int64_t v12; // [xsp+0h] [xbp-50h] BYREF
  int64_t startAt; // [xsp+8h] [xbp-48h] BYREF
  UserPrivilegeEntity_o *v14; // [xsp+10h] [xbp-40h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C23BBD & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserPrivilegeMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C23BBD = 1;
  }
  v14 = 0;
  entity = 0;
  v12 = 0;
  startAt = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
  v9 = OpenedPeriodPrivilegeId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v10 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserPrivilegeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Master_object = (QuestPhaseMaster_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (QuestPhaseMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v10 )
    goto LABEL_24;
  if ( !UserPrivilegeMaster__TryGetEntity(
          (UserPrivilegeMaster_o *)v10,
          &v14,
          *((_QWORD *)Master_object[2].monitor + 8),
          v9,
          0) )
    return 0;
  Master_object = (QuestPhaseMaster_o *)v14;
  if ( !v14 )
LABEL_24:
    sub_1C2D6EC(Master_object, v7);
  return UserPrivilegeEntity__IsValidPeriod(v14, &startAt, &v12, nowTime, 0);
}


bool clsQuestCheck__IsEncountRaidBoss(clsQuestCheck_o *this, int32_t eventId, int32_t day, const MethodInfo *method)
{
  System_Int32_array *Instance; // x0
  __int64 v8; // x1
  EventRaidMaster_o *v9; // x22
  int32_t RaidDeadQuestId; // w23
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4
  __int64 v14; // x2
  const MethodInfo *v15; // x4
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v17; // x20
  unsigned __int64 v18; // x21

  if ( (byte_4C23BA1 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4C23BA1 = 1;
  }
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_18;
  v9 = (EventRaidMaster_o *)Instance;
  RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId((EventRaidMaster_o *)Instance, eventId, day, 0);
  Instance = (System_Int32_array *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, RaidDeadQuestId, 0, v11)
    || clsQuestCheck__IsQuestRelease(this, RaidDeadQuestId, -1, 0, v12) )
  {
    LOBYTE(Instance) = 1;
    return (unsigned __int8)Instance & 1;
  }
  Instance = EventRaidMaster__GetRaidAliveQuestIds(v9, eventId, day, 0);
  if ( !Instance )
LABEL_18:
    sub_1C2D6EC(Instance, v8);
  max_length = Instance->max_length;
  v17 = Instance;
  if ( (int)max_length < 1 )
  {
    LOBYTE(Instance) = 0;
  }
  else
  {
    v18 = 0;
    do
    {
      if ( v18 >= (unsigned int)max_length )
        sub_1C2D6F4(Instance, v8, v14);
      Instance = (System_Int32_array *)clsQuestCheck__IsQuestRelease(this, v17->m_Items[v18], -1, 0, v15);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      LODWORD(max_length) = v17->max_length;
      ++v18;
    }
    while ( (__int64)v18 < (int)max_length );
  }
  return (unsigned __int8)Instance & 1;
}


bool clsQuestCheck__IsLastWarClear(clsQuestCheck_o *this, const MethodInfo *method)
{
  clsQuestCheck_o *Value; // x0
  const MethodInfo *v3; // x2

  if ( (byte_4C23BA3 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_8249/*"LAST_WAR_ID"*/);
    byte_4C23BA3 = 1;
  }
  Value = (clsQuestCheck_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8249/*"LAST_WAR_ID"*/, 0);
  return clsQuestCheck__IsWarClear(Value, (int32_t)Value, v3);
}


bool clsQuestCheck__IsMainInterlude(clsQuestCheck_o *this, int32_t war_id, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4C23BA4 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C2D490(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23BA4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_WarMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v5);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             war_id,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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

  if ( (byte_4C23BAA & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_1C2D490(&CondType_TypeInfo);
    byte_4C23BAA = 1;
  }
  v6 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_40102980(qid, v6, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
bool clsQuestCheck__IsQuestClearRaw(
        clsQuestCheck_o *this,
        int32_t qid,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  int32_t v6; // w20

  if ( (byte_4C23BAB & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_1C2D490(&CondType_TypeInfo);
    byte_4C23BAB = 1;
  }
  v6 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_40102980(qid, v6, 0, 0);
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

  if ( (byte_4C23BAC & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    this = (clsQuestCheck_o *)sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C23BAC = 1;
  }
  v8 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, *(const MethodInfo **)&phase);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
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
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *monitor; // x19
  bool v12; // w20
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  QuestReleaseEntity_o *v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x4
  int32_t v26; // w2
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4C23BA0 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__getEntityList__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_QuestReleaseEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    byte_4C23BA0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object || (monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor) == 0 )
    sub_1C2D6EC(Master_object, v10);
  v12 = System_Collections_ObjectModel_Collection_object___get_Count(
          (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor,
          (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__) > 0;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 monitor,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_12;
      }
      v18 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v18 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8))
        & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestReleaseEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_QuestReleaseEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_19;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_19:
      v22 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_QuestReleaseEntity__TypeInfo, 0);
    }
    v23 = (QuestReleaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                                    Enumerator,
                                    *(_QWORD *)(v22 + 8));
    if ( !v23 )
      sub_1C2D6EC(0, v24);
    if ( v23->fields.questId == quest_id )
    {
      if ( old_val < 0 )
        v26 = -1;
      else
        v26 = v23->fields.type == old_val_qr_type ? old_val : -1;
      if ( !clsQuestCheck__IsQuestRelease_35749376(this, v23, v26, 0, v25) )
      {
        v12 = 0;
        break;
      }
    }
  }
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_34;
    }
    v30 = (__int64)&v27->vtable[*v29];
  }
  else
  {
LABEL_34:
    v30 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return v12;
}


bool clsQuestCheck__IsQuestRelease_35746608(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        MapControl_QuestInfo_o *qinf,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_35749376(this, qrd, -1, qinf, v4);
}


bool clsQuestCheck__IsQuestRelease_35748484(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        int32_t old_val,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_35749376(this, qrd, old_val, 0, v4);
}


bool clsQuestCheck__IsQuestRelease_35749376(
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

  if ( (byte_4C23BA6 & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    this = (clsQuestCheck_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23BA6 = 1;
  }
  entity = 0;
  sameGroupQuestIds = 0;
  v43 = 0;
  is_release = 0;
  if ( !qrd )
LABEL_101:
    sub_1C2D6EC(this, qrd);
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
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_101;
        v27 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                qrd->fields.questId,
                (const MethodInfo_3387D98 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v27 )
          return is_release;
        v28 = (int32_t *)v27;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Time = NetworkManager__getTime(0);
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestAddMaster___);
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
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_101;
        v34 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                qrd->fields.questId,
                (const MethodInfo_3387D98 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventRaidMaster___);
        if ( !this )
          goto LABEL_101;
        if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)this, &entity, v11, v12, 0) )
          return is_release;
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
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
  __int64 v7; // x1
  Il2CppObject *Master_object; // x21
  clsQuestCheck_o *Time; // x0
  const MethodInfo *v12; // x3
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C23BBC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23BBC = 1;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  IsQuestReleaseAll = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    IsQuestReleaseAll = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
LABEL_28:
    sub_1C2D6EC(IsQuestReleaseAll, v7);
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
      && clsQuestCheck__IsEnabledPrivilegePeriod(Time, questInfo->fields.questId, (int64_t)Time, v12);
}


bool clsQuestCheck__IsReleasedLoginQuest(
        clsQuestCheck_o *this,
        LoginQuestEntity_o *loginQuestEnt,
        const MethodInfo *method)
{
  QuestReleaseMaster_o *Master_object; // x0
  __int64 v6; // x1
  clsQuestCheck_Fields *p_fields; // x21
  System_Collections_Generic_List_object__o *qrs; // x9
  int64_t v9; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  int v13; // w19
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C23B9F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C23B9F = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !loginQuestEnt || !Master_object )
    goto LABEL_24;
  p_fields = &this->fields;
  QuestReleaseMaster__getListByQuestID_42296884(Master_object, loginQuestEnt->fields.questId, &this->fields.qrs, 0);
  if ( !this->fields.qrs )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (QuestReleaseMaster_o *)NetworkManager__getTime(0);
  qrs = (System_Collections_Generic_List_object__o *)p_fields->qrs;
  if ( !p_fields->qrs )
LABEL_24:
    sub_1C2D6EC(Master_object, v6);
  v9 = (int64_t)Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    qrs,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v10 )
      break;
    if ( !v15.fields._current )
      sub_1C2D6EC(v10, v11);
    if ( *(_DWORD *)((char *)&v15.fields._current->klass + (unsigned __int64)&dword_14) == 12 )
    {
      if ( !LoginQuestEntity__IsEnablePeriod(loginQuestEnt, v9, 0) )
        goto LABEL_18;
    }
    else if ( !clsQuestCheck__IsQuestRelease_35749376(this, (QuestReleaseEntity_o *)v15.fields._current, -1, 0, v12) )
    {
LABEL_18:
      v13 = 6;
      goto LABEL_21;
    }
  }
  v13 = 7;
LABEL_21:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v13 != 6;
}


bool clsQuestCheck__IsReleasedQuest(clsQuestCheck_o *this, int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_QuestReleaseEntity__o *qrs; // x0
  const MethodInfo *v8; // x4
  int v9; // w19
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C23B9E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    byte_4C23B9E = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object )
    sub_1C2D6EC(0, v6);
  QuestReleaseMaster__getListByQuestID_42296884((QuestReleaseMaster_o *)Master_object, questId, &this->fields.qrs, 0);
  qrs = this->fields.qrs;
  if ( qrs )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      (System_Collections_Generic_List_object__o *)qrs,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
    {
      if ( !clsQuestCheck__IsQuestRelease_35749376(this, (QuestReleaseEntity_o *)v11.fields._current, -1, 0, v8) )
      {
        v9 = 5;
        goto LABEL_12;
      }
    }
    v9 = 6;
LABEL_12:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    LOBYTE(qrs) = v9 != 5;
  }
  return (char)qrs;
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
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t ScriptIntParam; // w22
  int v16; // w8
  clsQuestCheck_c *v18; // x0
  System_String_o *KEY_QUEST_START_EFFECT; // x21
  System_String_o *String; // x21
  System_String_array *v21; // x0
  System_Object_array *v22; // x23
  System_Func_object__bool__o *v23; // x20
  Il2CppObject *object; // x20
  System_String_o *v25; // x0
  char v26; // w8
  System_String_o *v27; // x19
  clsQuestCheck_c *v28; // x0
  System_String_o *v29; // x20
  Il2CppObject *v30; // [xsp+0h] [xbp-50h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C23BB9 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Find_string___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C2D490(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C2D490(&System_Func_string__bool__TypeInfo);
    sub_1C2D490(&Method_clsQuestCheck___c__DisplayClass40_0__IsTapSkipQuestStart_b__0__);
    sub_1C2D490(&clsQuestCheck___c__DisplayClass40_0_TypeInfo);
    sub_1C2D490(&StringLiteral_22846/*"questStartEffectSkip"*/);
    sub_1C2D490(&StringLiteral_1048/*"/"*/);
    sub_1C2D490(&clsQuestCheck_TypeInfo);
    byte_4C23BB9 = 1;
  }
  v30 = 0;
  entity = 0;
  v10 = sub_1C2D6DC(clsQuestCheck___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !v10 )
    goto LABEL_41;
  *(_QWORD *)(v10 + 16) = effectName;
  sub_1C2D434((CGThumbnailListItem_o *)(v10 + 16), (int32_t)effectName, v13, v14);
  if ( isMyRoomMaterial )
    return 0;
  if ( questPhase <= 1 )
    questPhase = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_41;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, questId, questPhase, 0) )
    goto LABEL_44;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_41;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_22846/*"questStartEffectSkip"*/, 0, 0);
  if ( !ScriptIntParam )
  {
LABEL_44:
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !Master_object )
      goto LABEL_41;
    Master_object = (QuestPhaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            &v30,
                                            questId,
                                            (const MethodInfo_3387DE4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !v30 )
        goto LABEL_41;
      v16 = LODWORD(v30[2].monitor) - 1;
      if ( (unsigned int)v16 > 7 )
        ScriptIntParam = 0;
      else
        ScriptIntParam = dword_C4187C[v16];
      goto LABEL_22;
    }
    return 0;
  }
LABEL_22:
  v18 = clsQuestCheck_TypeInfo;
  if ( !clsQuestCheck_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
    v18 = clsQuestCheck_TypeInfo;
  }
  KEY_QUEST_START_EFFECT = v18->static_fields->KEY_QUEST_START_EFFECT;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  String = EncryptedPlayerPrefs__GetString(KEY_QUEST_START_EFFECT, 0);
  Master_object = (QuestPhaseMaster_o *)System_String__IsNullOrEmpty(String, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    goto LABEL_31;
  if ( !String )
LABEL_41:
    sub_1C2D6EC(Master_object, v12);
  v21 = System_String__Split(String, 0x2Fu, 0, 0);
  if ( !v21 )
  {
LABEL_31:
    v27 = *(System_String_o **)(v10 + 16);
LABEL_32:
    v28 = clsQuestCheck_TypeInfo;
    if ( !clsQuestCheck_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
      v28 = clsQuestCheck_TypeInfo;
    }
    v29 = v28->static_fields->KEY_QUEST_START_EFFECT;
    if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    EncryptedPlayerPrefs__SetString(v29, v27, 0);
    UnityEngine_PlayerPrefs__Save(0);
    v26 = 1;
    goto LABEL_37;
  }
  v22 = (System_Object_array *)v21;
  v23 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v10,
    Method_clsQuestCheck___c__DisplayClass40_0__IsTapSkipQuestStart_b__0__,
    0);
  object = BasicHelper__Find_object_(
             v22,
             (System_Func_T__bool__o *)v23,
             (const MethodInfo_30B88BC *)Method_BasicHelper_Find_string___);
  v25 = System_String__Concat_63496112(
          String,
          (System_String_o *)StringLiteral_1048/*"/"*/,
          *(System_String_o **)(v10 + 16),
          0);
  if ( !object )
  {
    v27 = v25;
    goto LABEL_32;
  }
  v26 = 0;
LABEL_37:
  if ( ScriptIntParam == 1 )
    return 1;
  else
    return (ScriptIntParam == 2) & (v26 ^ 1);
}


bool clsQuestCheck__IsValidQuestRandomGroup(
        clsQuestCheck_o *this,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  QuestRandomGroupMaster_o *v6; // x21
  QuestRandomGroupEntity_o *EntityFromQuestId; // x0
  QuestRandomGroupEntity_o *v8; // x19
  int32_t randomGroupId; // w20
  TerminalPramsManager_c *v10; // x0
  bool v11; // w0
  uint32_t cctor_finished; // w9
  TerminalPramsManager_c *v13; // x0
  int32_t Item; // w22
  QuestRandomGroupEntity_o *RandomRangeQuest; // x0
  TerminalPramsManager_c *v16; // x0
  QuestRandomGroupEntity_o *v17; // x21
  TerminalPramsManager_c *v18; // x0
  TerminalPramsManager_c *v19; // x0

  if ( (byte_4C23B9C & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestRandomGroupMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23B9C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestRandomGroupMaster___);
  if ( !questInfo )
    goto LABEL_53;
  v6 = (QuestRandomGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_53;
  EntityFromQuestId = QuestRandomGroupMaster__GetEntityFromQuestId(
                        (QuestRandomGroupMaster_o *)Instance,
                        questInfo->fields.questId,
                        0);
  if ( EntityFromQuestId )
  {
    v8 = EntityFromQuestId;
    randomGroupId = EntityFromQuestId->fields.randomGroupId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__LoadQuestRandomGroupList(0);
    if ( !byte_4C23BDE )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23BDE = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    Instance = (Il2CppObject *)v10->static_fields->_QuestRandomGroupList_k__BackingField;
    if ( !Instance )
      goto LABEL_53;
    v11 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
            (System_Collections_Generic_Dictionary_int__int__o *)Instance,
            randomGroupId,
            (const MethodInfo_33D89B0 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    cctor_finished = TerminalPramsManager_TypeInfo->_2.cctor_finished;
    if ( v11 )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C23BDE )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C23BDE = 1;
      }
      v13 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v13 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v13->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_53;
      Item = System_Collections_Generic_Dictionary_int__int___get_Item(
               (System_Collections_Generic_Dictionary_int__int__o *)Instance,
               randomGroupId,
               (const MethodInfo_33D8728 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsQuestClear_40102980(Item, -1, 0, 0) )
        goto LABEL_44;
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C23BDE )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C23BDE = 1;
      }
      v16 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v16->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_53;
      System_Collections_Generic_Dictionary_int__int___Add(
        (System_Collections_Generic_Dictionary_int__int__o *)Instance,
        randomGroupId,
        0,
        (const MethodInfo_33D87C4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
    RandomRangeQuest = QuestRandomGroupMaster__GetRandomRangeQuest(v6, randomGroupId, 0);
    if ( RandomRangeQuest )
    {
      v17 = RandomRangeQuest;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C23BDE )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C23BDE = 1;
      }
      v18 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v18 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v18->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_53;
      System_Collections_Generic_Dictionary_int__int___set_Item(
        (System_Collections_Generic_Dictionary_int__int__o *)Instance,
        randomGroupId,
        v17->fields.questId,
        (const MethodInfo_33D87B0 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      TerminalPramsManager__SaveQuestRandomGroupList(0);
LABEL_44:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C23BDE )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C23BDE = 1;
      }
      v19 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v19 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v19->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( Instance )
      {
        LOBYTE(RandomRangeQuest) = System_Collections_Generic_Dictionary_int__int___get_Item(
                                     (System_Collections_Generic_Dictionary_int__int__o *)Instance,
                                     randomGroupId,
                                     (const MethodInfo_33D8728 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) == v8->fields.questId;
        return (char)RandomRangeQuest;
      }
LABEL_53:
      sub_1C2D6EC(Instance, v5);
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
  __int64 v5; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v7; // x3

  if ( (byte_4C23BA2 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C2D490(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23BA2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_WarMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v5);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             war_id,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Entity, HIDWORD(Entity[6].klass), 0, v7);
  return (char)Entity;
}


void clsQuestCheck__OpenQuestTimeOverNoticeDialog(
        clsQuestCheck_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1

  if ( (byte_4C23BBE & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_10906/*"QUEST_TIME_OVER"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C23BBE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10906/*"QUEST_TIME_OVER"*/, 0);
  if ( !Instance )
    sub_1C2D6EC(v5, v6);
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

  if ( (byte_4C23BB8 & 1) == 0 )
  {
    sub_1C2D490(&ScriptManager_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23BB8 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C216DE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C216DE = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v4->static_fields->_WarId_k__BackingField;
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4C21464 = 1;
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
  __int64 v12; // x1
  _QWORD *v13; // x19
  __int64 naturalAligment; // x9
  __int64 v15; // x8
  TerminalPramsManager_c *v16; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w20
  BattleSetupInfo_o *v20; // x23
  Il2CppObject *v21; // x20
  clsQuestCheck_o *v22; // x0
  int32_t v23; // w1
  int64_t v24; // x2
  const MethodInfo *v25; // x3

  if ( (byte_4C23BBB & 1) == 0 )
  {
    sub_1C2D490(&BattleRootComponent_TypeInfo);
    sub_1C2D490(&BattleSetupInfo_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23BBB = 1;
  }
  if ( result == 2 )
  {
    if ( clsQuestCheck__CheckQuestPlayable(this, qinf, endTime, boostId, *(const MethodInfo **)&boostId) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C216DE )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C216DE = 1;
      }
      v16 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
      }
      WarId_k__BackingField = v16->static_fields->_WarId_k__BackingField;
      if ( !byte_4C21464 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
        byte_4C21464 = 1;
      }
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = TerminalPramsManager_TypeInfo;
      }
      QuestId_k__BackingField = v16->static_fields->_QuestId_k__BackingField;
      if ( !byte_4C21463 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
        byte_4C21463 = 1;
      }
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = TerminalPramsManager_TypeInfo;
      }
      PhaseCnt_k__BackingField = v16->static_fields->_PhaseCnt_k__BackingField;
      v20 = (BattleSetupInfo_o *)sub_1C2D6DC(BattleSetupInfo_TypeInfo);
      BattleSetupInfo___ctor(v20, 0);
      if ( !v20 )
        goto LABEL_38;
      Instance = BattleSetupInfo__ConvertBattleSetupInfo(
                   v20,
                   WarId_k__BackingField,
                   QuestId_k__BackingField,
                   PhaseCnt_k__BackingField,
                   0,
                   0,
                   0,
                   0);
      v21 = (Il2CppObject *)Instance;
      if ( boostId )
      {
        if ( !Instance )
          goto LABEL_38;
        *((_DWORD *)Instance + 15) = boostId;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance
        || (*((_BYTE *)Instance + 148) = 1,
            (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__)) == 0)
        || (*((_DWORD *)Instance + 38) = 1,
            (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
      {
LABEL_38:
        sub_1C2D6EC(Instance, v12);
      }
      AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 35, 1, v21, 0);
    }
LABEL_36:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0);
      return;
    }
    goto LABEL_38;
  }
  if ( result )
    goto LABEL_36;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v13 = (_QWORD *)*((_QWORD *)Instance + 4);
  if ( !v13 )
    goto LABEL_38;
  naturalAligment = BattleRootComponent_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*v13 + 304LL) >= (unsigned int)naturalAligment
    && *(BattleRootComponent_c **)(*(_QWORD *)(*v13 + 200LL) + 8 * naturalAligment - 8) == BattleRootComponent_TypeInfo )
  {
    Instance = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)Instance + 4), 0);
    if ( !Instance )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    v15 = v13[10];
    if ( !v15 )
      goto LABEL_38;
    Instance = *(void **)(v15 + 528);
    if ( !Instance )
      goto LABEL_38;
    BattleResultComponent__EndResult((BattleResultComponent_o *)Instance, 0);
    goto LABEL_36;
  }
  sub_1C2D9AC(*((_QWORD *)Instance + 4));
  clsQuestCheck__IsEnabledPrivilegePeriod(v22, v23, v24, v25);
}


void clsQuestCheck__RefreshTerminalScene(clsQuestCheck_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C23BBF & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C23BBF = 1;
  }
  TopLoginRequest__ResetAccesTime(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
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

  if ( (byte_4C23BB4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_String_Join_int___);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_811/*","*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C23BB4 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v6 = StringLiteral_1/*""*/;
  if ( !byte_4C23BDF )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23BDF = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  p_ClearEventQuestIds_k__BackingField = (CGThumbnailListItem_o *)&v7->static_fields->_ClearEventQuestIds_k__BackingField;
  p_ClearEventQuestIds_k__BackingField->klass = (CGThumbnailListItem_c *)v6;
  sub_1C2D434(p_ClearEventQuestIds_k__BackingField, v6, (int32_t)method, v3);
  v10 = (System_Collections_Generic_IEnumerable_T__o *)clsQuestCheck__GetEventQuestIdListPlayable(this, eventId, v9);
  v13 = System_String__Join_int_(
          (System_String_o *)StringLiteral_811/*","*/,
          v10,
          (const MethodInfo_3179BD4 *)Method_System_String_Join_int___);
  if ( !byte_4C23BDF )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23BDF = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v15 = (CGThumbnailListItem_o *)&v14->static_fields->_ClearEventQuestIds_k__BackingField;
  v15->klass = (CGThumbnailListItem_c *)v13;
  sub_1C2D434(v15, (int32_t)v13, v11, v12);
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
  __int64 v9; // x1
  UserItemMaster_o *v10; // x22
  int32_t targetId; // w23
  int32_t num; // w22
  bool v13; // w8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C23BA7 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23BA7 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !qrd )
    goto LABEL_17;
  v10 = (UserItemMaster_o *)Instance;
  targetId = qrd->fields.targetId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !v10 )
    goto LABEL_17;
  Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                v10,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                targetId,
                                0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v13 = 1;
    goto LABEL_16;
  }
  if ( !entity )
LABEL_17:
    sub_1C2D6EC(Instance, v9);
  num = entity->fields.num;
  v13 = num < QuestReleaseEntity__getValueInt(qrd, 0);
LABEL_16:
  *is_release = (v13 ^ itemGet) & 1;
}


bool clsQuestCheck__isPlayQuestStartAction(clsQuestCheck_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalPramsManager_c *v3; // x0
  int32_t WarId_k__BackingField; // w20
  int32_t QuestId_k__BackingField; // w19

  if ( (byte_4C23BB7 & 1) == 0 )
  {
    sub_1C2D490(&ScriptManager_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23BB7 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C216DE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C216DE = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v3->static_fields->_WarId_k__BackingField;
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C21464 = 1;
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
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C23BA8 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23BA8 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
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
    sub_1C2D6EC(Instance, v5);
  }
  return 1;
}


int32_t clsQuestCheck__mfGetQuestPhaseByQuestID(clsQuestCheck_o *this, int32_t qid, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C23BA9 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23BA9 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
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
    sub_1C2D6EC(Instance, v5);
  }
  return 0;
}


bool clsQuestCheck__mfQuestReleaseCheckAlreadyClear(clsQuestCheck_o *this, int32_t qid, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  bool v7; // w8
  bool result; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C23BA5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23BA5 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               qid,
                               (const MethodInfo_3387DE4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 1;
  if ( !entity )
LABEL_12:
    sub_1C2D6EC(Instance, v5);
  if ( (HIDWORD(entity[5].klass) | 4) != 5 )
    return 0;
  v7 = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, qid, 0, v6);
  result = 0;
  if ( v7 )
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
  __int64 v11; // x1
  _BOOL8 IsShop; // x0
  const MethodInfo *v13; // x2
  Il2CppObject *v14; // x23
  clsQuestCheck_Fields *p_fields; // x23
  int32_t UseDiceSpotId; // w24
  System_Collections_Generic_List_T__o *qrs; // x24
  clsQuestCheck___c_c *v19; // x0
  System_Func_object__bool__o *_9__5_0; // x25
  Il2CppObject *v21; // x26
  struct clsQuestCheck___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct BalanceConfig_StaticFields *v25; // x8
  QuestEntity_o *Mine; // x0
  UserEventQuestCooltimeMaster_o *v27; // x24
  UserEventQuestCooltimeEntity_o *v28; // x0
  UserEventQuestCooltimeEntity_o *v29; // x24
  int64_t Time; // x0
  int64_t clearedAt; // x26
  int64_t v32; // x25
  int32_t v33; // w2
  int v34; // w8
  struct System_Collections_Generic_List_QuestReleaseEntity__o *cQuestReleaseListP; // x23
  System_Comparison_T__o *v36; // x24
  Il2CppObject *v37; // x25
  struct clsQuestCheck___c_StaticFields *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  UserQuestEntity_o *v41; // x0
  Il2CppObject *v42; // x23
  bool v43; // w23
  _BOOL8 v44; // x0
  __int64 v45; // x1
  const MethodInfo *v46; // x4
  Il2CppObject *current; // x22
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int v50; // w19
  int32_t klass; // w24
  System_Collections_Generic_IEnumerable_T__o *v52; // x25
  System_Collections_Generic_List_object__o *v53; // x24
  const MethodInfo *v54; // x2
  BalanceConfig_c *v55; // x0
  const MethodInfo *v56; // x2
  BalanceConfig_c *v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+8h] [xbp-88h] BYREF
  Il2CppObject *v61; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF
  UserQuestEntity_o *v63; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4C23B9B & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_BasicHelper_Any_QuestReleaseEntity___);
    sub_1C2D490(&System_Comparison_QuestReleaseEntity__TypeInfo);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1C2D490(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___77950064);
    sub_1C2D490(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__);
    sub_1C2D490(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__);
    sub_1C2D490(&clsQuestCheck___c_TypeInfo);
    byte_4C23B9B = 1;
  }
  v61 = 0;
  entity = 0;
  memset(&v60, 0, sizeof(v60));
  *questReleaseNG = 0;
  sub_1C2D434((CGThumbnailListItem_o *)questReleaseNG, 0, (int32_t)questReleaseNG, (const MethodInfo *)questInfo);
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, v9) )
    return 0;
  v63 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarMaster___);
  if ( !questInfo || !Master_object )
    goto LABEL_107;
  IsShop = DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             questInfo->fields.warId,
             (const MethodInfo_3387DE4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
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
      v14 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C211E1 )
      {
        sub_1C2D490(&NetworkManager_TypeInfo);
        byte_4C211E1 = 1;
      }
      Master_object = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Master_object = NetworkManager_TypeInfo;
      }
      if ( !v14 )
        goto LABEL_107;
      IsShop = UserQuestMaster__TryGetEntity(
                 (UserQuestMaster_o *)v14,
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
  if ( !clsQuestCheck__IsValidQuestRandomGroup((clsQuestCheck_o *)IsShop, questInfo, v13) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object )
    goto LABEL_107;
  p_fields = &this->fields;
  QuestReleaseMaster__getListByQuestID_42296884((QuestReleaseMaster_o *)Master_object, questId, &this->fields.qrs, 0);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !entity || !Master_object )
    goto LABEL_107;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &v61,
         (int32_t)entity[6].klass,
         (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
        v19 = clsQuestCheck___c_TypeInfo;
        if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
          v19 = clsQuestCheck___c_TypeInfo;
        }
        _9__5_0 = (System_Func_object__bool__o *)v19->static_fields->__9__5_0;
        if ( !_9__5_0 )
        {
          if ( !v19->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v19);
            v19 = clsQuestCheck___c_TypeInfo;
          }
          v21 = (Il2CppObject *)v19->static_fields->__9;
          _9__5_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_QuestReleaseEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__5_0,
            v21,
            Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__,
            0);
          static_fields = clsQuestCheck___c_TypeInfo->static_fields;
          static_fields->__9__5_0 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__5_0;
          sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v23, v24);
        }
        if ( !BasicHelper__Any_object_(
                qrs,
                (System_Func_T__bool__o *)_9__5_0,
                (const MethodInfo_30B7CF0 *)Method_BasicHelper_Any_QuestReleaseEntity___) )
        {
          Master_object = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Master_object = BalanceConfig_TypeInfo;
          }
          v25 = (struct BalanceConfig_StaticFields *)*((_QWORD *)Master_object + 23);
          if ( v25->EventBoardGameNextBoardQuestId != questId )
          {
            if ( !*((_DWORD *)Master_object + 56) )
            {
              j_il2cpp_runtime_class_init_0(Master_object);
              v25 = BalanceConfig_TypeInfo->static_fields;
            }
            if ( v25->EventBoardGameNextRoundQuestId != questId )
            {
              if ( !entity )
                goto LABEL_107;
              klass = (int32_t)entity[6].klass;
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              if ( CondType__IsUserEventStatus(klass, 7, 0) )
                return 0;
              v52 = (System_Collections_Generic_IEnumerable_T__o *)p_fields->qrs;
              v53 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor_58233976(
                v53,
                v52,
                (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___77950064);
              v55 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v55 = BalanceConfig_TypeInfo;
              }
              if ( clsQuestCheck__CheckQuestPlayableNow(this, v55->static_fields->EventBoardGameNextBoardQuestId, v54) )
                return 0;
              v57 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v57 = BalanceConfig_TypeInfo;
              }
              if ( clsQuestCheck__CheckQuestPlayableNow(this, v57->static_fields->EventBoardGameNextRoundQuestId, v56) )
                return 0;
              p_fields->qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v53;
              sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)v53, v58, v59);
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___);
    if ( !questInfo->fields._WarInfo_k__BackingField )
      goto LABEL_107;
    v27 = (UserEventQuestCooltimeMaster_o *)Master_object;
    Master_object = (void *)MapControl_WarInfo__GetEventId(questInfo->fields._WarInfo_k__BackingField, 0);
    if ( !v27 )
      goto LABEL_107;
    v28 = UserEventQuestCooltimeMaster__getEntity(v27, (int32_t)Master_object, questInfo->fields.questId, 1, 0);
    if ( v28 )
    {
      v29 = v28;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0);
      clearedAt = v29->fields.clearedAt;
      v32 = Time;
      Master_object = UserEventQuestCooltimeEntity__GetMasterEntity(v29, 0);
      if ( !Master_object )
        goto LABEL_107;
      if ( v32 < clearedAt + *((int *)Master_object + 7) )
        return 0;
    }
  }
  if ( !p_fields->qrs )
    return 0;
  Master_object = this->fields.cQuestReleaseListP;
  if ( !Master_object )
    goto LABEL_107;
  v33 = *((_DWORD *)Master_object + 6);
  v34 = *((_DWORD *)Master_object + 7) + 1;
  *((_DWORD *)Master_object + 6) = 0;
  *((_DWORD *)Master_object + 7) = v34;
  if ( v33 >= 1 )
  {
    System_Array__Clear(*((System_Array_o **)Master_object + 2), 0, v33, 0);
    Master_object = this->fields.cQuestReleaseListP;
    if ( !Master_object )
      goto LABEL_107;
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Master_object,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.qrs,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__);
  cQuestReleaseListP = this->fields.cQuestReleaseListP;
  Master_object = clsQuestCheck___c_TypeInfo;
  if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
    Master_object = clsQuestCheck___c_TypeInfo;
  }
  v36 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 16LL);
  if ( !v36 )
  {
    if ( !*((_DWORD *)Master_object + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = clsQuestCheck___c_TypeInfo;
    }
    v37 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
    v36 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_QuestReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(
      v36,
      v37,
      Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__,
      0);
    v38 = clsQuestCheck___c_TypeInfo->static_fields;
    v38->__9__5_1 = (struct System_Comparison_QuestReleaseEntity__o *)v36;
    sub_1C2D434((CGThumbnailListItem_o *)&v38->__9__5_1, (int32_t)v36, v39, v40);
  }
  if ( !cQuestReleaseListP )
    goto LABEL_107;
  System_Collections_Generic_List_object___Sort_58242632(
    (System_Collections_Generic_List_object__o *)cQuestReleaseListP,
    v36,
    (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  v41 = v63;
  if ( v63 )
  {
LABEL_82:
    v43 = !UserQuestEntity__HasStatus(v41, 8, 0);
    goto LABEL_83;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v42 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Master_object = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = NetworkManager_TypeInfo;
  }
  if ( !v42 )
LABEL_107:
    sub_1C2D6EC(Master_object, v11);
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)v42,
    &v63,
    *(_QWORD *)(*((_QWORD *)Master_object + 23) + 64LL),
    questId,
    0);
  v41 = v63;
  if ( v63 )
    goto LABEL_82;
  v43 = 1;
LABEL_83:
  Master_object = this->fields.cQuestReleaseListP;
  if ( !Master_object )
    goto LABEL_107;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v60,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v44 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v60,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v44 )
      break;
    current = v60.fields._current;
    if ( v43 )
      goto LABEL_89;
    if ( !v60.fields._current )
      sub_1C2D6EC(v44, v45);
    if ( *(_DWORD *)((char *)&v60.fields._current->klass + (unsigned __int64)&dword_14) != 12 )
    {
LABEL_89:
      if ( !clsQuestCheck__IsQuestRelease_35749376(
              this,
              (QuestReleaseEntity_o *)v60.fields._current,
              -1,
              questInfo,
              v46) )
      {
        *questReleaseNG = (QuestReleaseEntity_o *)current;
        sub_1C2D434((CGThumbnailListItem_o *)questReleaseNG, (int32_t)current, v48, v49);
        v50 = 19;
        goto LABEL_92;
      }
    }
  }
  v50 = 20;
LABEL_92:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v60,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v50 != 19;
}


void clsQuestCheck___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C23BC3 & 1) == 0 )
  {
    sub_1C2D490(&clsQuestCheck___c_TypeInfo);
    byte_4C23BC3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(clsQuestCheck___c_TypeInfo);
  System_Object___ctor(v1, 0);
  clsQuestCheck___c_TypeInfo->static_fields->__9 = (struct clsQuestCheck___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)clsQuestCheck___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void clsQuestCheck___c___ctor(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void clsQuestCheck___c___CheckQuestPlayable_b__41_0(
        clsQuestCheck___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4C23BC4 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_clsQuestCheck___c__DisplayClass41_1__CheckQuestPlayable_b__4__);
    sub_1C2D490(&clsQuestCheck___c__DisplayClass41_1_TypeInfo);
    byte_4C23BC4 = 1;
  }
  v4 = sub_1C2D6DC(clsQuestCheck___c__DisplayClass41_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_clsQuestCheck___c__DisplayClass41_1__CheckQuestPlayable_b__4__,
          0),
        !Instance) )
  {
    sub_1C2D6EC(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0);
}


void clsQuestCheck___c___CheckQuestPlayable_b__41_1(
        clsQuestCheck___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4C23BC5 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_clsQuestCheck___c__DisplayClass41_2__CheckQuestPlayable_b__5__);
    sub_1C2D490(&clsQuestCheck___c__DisplayClass41_2_TypeInfo);
    byte_4C23BC5 = 1;
  }
  v4 = sub_1C2D6DC(clsQuestCheck___c__DisplayClass41_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_clsQuestCheck___c__DisplayClass41_2__CheckQuestPlayable_b__5__,
          0),
        !Instance) )
  {
    sub_1C2D6EC(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0);
}


void clsQuestCheck___c___CheckQuestPlayable_b__41_10(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C23BC7 & 1) == 0 )
  {
    sub_1C2D490(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C23BC7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_30B63DC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void clsQuestCheck___c___CheckQuestPlayable_b__41_12(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C23BC8 & 1) == 0 )
  {
    sub_1C2D490(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C23BC8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_30B63DC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void clsQuestCheck___c___CheckQuestPlayable_b__41_2(clsQuestCheck___c_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C23BC9 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C23BC9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void clsQuestCheck___c___CheckQuestPlayable_b__41_3(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  ;
}


void clsQuestCheck___c___CheckQuestPlayable_b__41_6(
        clsQuestCheck___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4C23BC6 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_clsQuestCheck___c__DisplayClass41_3__CheckQuestPlayable_b__7__);
    sub_1C2D490(&clsQuestCheck___c__DisplayClass41_3_TypeInfo);
    byte_4C23BC6 = 1;
  }
  v4 = sub_1C2D6DC(clsQuestCheck___c__DisplayClass41_3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_clsQuestCheck___c__DisplayClass41_3__CheckQuestPlayable_b__7__,
          0),
        !Instance) )
  {
    sub_1C2D6EC(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0);
}


bool clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_0(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C2D6EC(this, 0);
  return n->fields.type == 118;
}


int32_t clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_1(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *a,
        QuestReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C2D6EC(this, a);
  return b->fields.imagePriority - a->fields.imagePriority;
}


void clsQuestCheck___c__DisplayClass31_0___ctor(clsQuestCheck___c__DisplayClass31_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool clsQuestCheck___c__DisplayClass31_0___GetReleasedQuestEntityListByServantGet_b__0(
        clsQuestCheck___c__DisplayClass31_0_o *this,
        QuestEntity_o *n,
        const MethodInfo *method)
{
  struct QuestEntity_o *questEnt; // x8

  if ( !n || (questEnt = this->fields.questEnt) == 0 )
    sub_1C2D6EC(this, n);
  return n->fields.id == questEnt->fields.id;
}


void clsQuestCheck___c__DisplayClass31_1___ctor(clsQuestCheck___c__DisplayClass31_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool clsQuestCheck___c__DisplayClass31_1___GetReleasedQuestEntityListByServantGet_b__1(
        clsQuestCheck___c__DisplayClass31_1_o *this,
        QuestEntity_o *n,
        const MethodInfo *method)
{
  struct QuestEntity_o *questEnt; // x8

  if ( !n || (questEnt = this->fields.questEnt) == 0 )
    sub_1C2D6EC(this, n);
  return n->fields.id == questEnt->fields.id;
}


void clsQuestCheck___c__DisplayClass40_0___ctor(clsQuestCheck___c__DisplayClass40_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool clsQuestCheck___c__DisplayClass40_0___IsTapSkipQuestStart_b__0(
        clsQuestCheck___c__DisplayClass40_0_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_String__op_Equality(a, this->fields.effectName, 0);
}


void clsQuestCheck___c__DisplayClass41_0___ctor(clsQuestCheck___c__DisplayClass41_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void clsQuestCheck___c__DisplayClass41_0___CheckQuestPlayable_b__11(
        clsQuestCheck___c__DisplayClass41_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( !this->fields.__4__this )
    sub_1C2D6EC(this, result);
  clsQuestCheck__RecoverItemListDialogCallback(
    this->fields.__4__this,
    this->fields.questInfo,
    this->fields.srcEndTime,
    result,
    this->fields.boostId,
    v3);
}


void clsQuestCheck___c__DisplayClass41_0___CheckQuestPlayable_b__8(
        clsQuestCheck___c__DisplayClass41_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( !this->fields.__4__this )
    sub_1C2D6EC(this, result);
  clsQuestCheck__RecoverItemListDialogCallback(
    this->fields.__4__this,
    this->fields.questInfo,
    this->fields.srcEndTime,
    result,
    this->fields.boostId,
    v3);
}


void clsQuestCheck___c__DisplayClass41_0___CheckQuestPlayable_b__9(
        clsQuestCheck___c__DisplayClass41_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( !this->fields.__4__this )
    sub_1C2D6EC(this, result);
  clsQuestCheck__RecoverItemListDialogCallback(
    this->fields.__4__this,
    this->fields.questInfo,
    this->fields.srcEndTime,
    result,
    this->fields.boostId,
    v3);
}


void clsQuestCheck___c__DisplayClass41_1___ctor(clsQuestCheck___c__DisplayClass41_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void clsQuestCheck___c__DisplayClass41_1___CheckQuestPlayable_b__4(
        clsQuestCheck___c__DisplayClass41_1_o *this,
        const MethodInfo *method)
{
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v5; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1
  Il2CppObject *v9; // x3

  if ( (byte_4C23BCA & 1) == 0 )
  {
    sub_1C2D490(&SceneJumpInfo_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&StringLiteral_12682/*"SellServant"*/);
    sub_1C2D490(&StringLiteral_12718/*"ServantCombine"*/);
    byte_4C23BCA = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C2D6DC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41257388(v5, (System_String_o *)StringLiteral_12682/*"SellServant"*/, 0, 0);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1C2D6EC(v6, v7);
    case 1:
      v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v6 )
      {
        v8 = 71;
        v9 = 0;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C2D6DC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41257300(v5, (System_String_o *)StringLiteral_12718/*"ServantCombine"*/, 0);
      if ( Instance )
      {
        v8 = 32;
LABEL_10:
        v6 = Instance;
        v9 = (Il2CppObject *)v5;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v6, v8, 1, v9, 0);
        return;
      }
      goto LABEL_15;
  }
}


void clsQuestCheck___c__DisplayClass41_2___ctor(clsQuestCheck___c__DisplayClass41_2_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void clsQuestCheck___c__DisplayClass41_2___CheckQuestPlayable_b__5(
        clsQuestCheck___c__DisplayClass41_2_o *this,
        const MethodInfo *method)
{
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1

  if ( (byte_4C23BCB & 1) == 0 )
  {
    sub_1C2D490(&SceneJumpInfo_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&StringLiteral_12722/*"ServantEquipList"*/);
    sub_1C2D490(&StringLiteral_12682/*"SellServant"*/);
    sub_1C2D490(&StringLiteral_12721/*"ServantEQCombine"*/);
    byte_4C23BCB = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C2D6DC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41257388(v5, (System_String_o *)StringLiteral_12682/*"SellServant"*/, 1, 0);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_12;
      }
LABEL_14:
      sub_1C2D6EC(v6, v7);
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C2D6DC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41257300(v5, (System_String_o *)StringLiteral_12722/*"ServantEquipList"*/, 0);
      if ( Instance )
      {
        v8 = 71;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C2D6DC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41257300(v5, (System_String_o *)StringLiteral_12721/*"ServantEQCombine"*/, 0);
      if ( Instance )
      {
        v8 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v8, 1, (Il2CppObject *)v5, 0);
        return;
      }
      goto LABEL_14;
  }
}


void clsQuestCheck___c__DisplayClass41_3___ctor(clsQuestCheck___c__DisplayClass41_3_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void clsQuestCheck___c__DisplayClass41_3___CheckQuestPlayable_b__7(
        clsQuestCheck___c__DisplayClass41_3_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C23BCC & 1) == 0 )
  {
    sub_1C2D490(&SceneJumpInfo_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&StringLiteral_12682/*"SellServant"*/);
    byte_4C23BCC = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v4 = (SceneJumpInfo_o *)sub_1C2D6DC(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_41257388(v4, (System_String_o *)StringLiteral_12682/*"SellServant"*/, 2, 0);
    if ( !Instance )
      sub_1C2D6EC(v5, v6);
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v4, 0);
  }
}