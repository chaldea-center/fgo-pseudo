void clsQuestCheck___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4CEAE21 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_10976/*"QuestStartEffect"*/);
    sub_1C7BAE8(&clsQuestCheck_TypeInfo);
    byte_4CEAE21 = 1;
  }
  clsQuestCheck_TypeInfo->static_fields->KEY_QUEST_START_EFFECT = (struct System_String_o *)StringLiteral_10976/*"QuestStartEffect"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)clsQuestCheck_TypeInfo->static_fields,
    StringLiteral_10976/*"QuestStartEffect"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void clsQuestCheck___ctor(clsQuestCheck_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CEAE20 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1C7BAE8(&Method_SingletonTemplate_clsQuestCheck___ctor__);
    byte_4CEAE20 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.cQuestReleaseListP = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v10;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.cQuestReleaseListP,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_3A8CB90 *)Method_SingletonTemplate_clsQuestCheck___ctor__);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  MapControl_QuestInfo_o **v18; // x19
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w28
  MapControl_QuestInfo_o *v26; // x8
  int32_t questId; // w23
  int32_t questPhase; // w29
  int32_t v29; // w20
  const MethodInfo *v30; // x3
  _BOOL4 isNotItemConsume; // w21
  int32_t v32; // w25
  UserGameEntity_o *v33; // x26
  QuestEntity_o *v34; // x27
  System_String_o *v35; // x19
  System_String_o *v36; // x20
  CommonUI_o *v37; // x21
  clsQuestCheck___c_c *v38; // x8
  System_Action_o *_9__43_3; // x22
  Il2CppObject *v40; // x23
  struct clsQuestCheck___c_StaticFields *static_fields; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  System_Action_o *v48; // x19
  clsQuestCheck_o *v49; // x0
  const MethodInfo *v50; // x2
  TerminalPramsManager_c *v51; // x0
  int32_t v52; // w22
  int64_t v53; // x28
  struct TerminalPramsManager_StaticFields *v54; // x8
  UserServantMaster_o *v55; // x28
  Il2CppObject *MasterData_object; // x29
  CommonUI_o *v57; // x19
  int32_t v58; // w20
  int32_t svtKeep; // w21
  ServantFrameShortDlgComponent_CallbackFunc_o *v60; // x22
  Il2CppObject *v61; // x23
  struct clsQuestCheck___c_StaticFields *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  CommonUI_o *v69; // x0
  int32_t v70; // w1
  int32_t v71; // w2
  int32_t v72; // w3
  CommonUI_o *v73; // x19
  int32_t v74; // w20
  int32_t svtEquipKeep; // w21
  Il2CppObject *v76; // x23
  struct clsQuestCheck___c_StaticFields *v77; // x0
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  int32_t Count; // w19
  CommonUI_o *v85; // x20
  BalanceConfig_c *v86; // x8
  Il2CppObject *v87; // x23
  struct clsQuestCheck___c_StaticFields *v88; // x0
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  bool v95; // w25
  int32_t v97; // w29
  int32_t v98; // w28
  Il2CppObject *Instance; // x19
  RecoverDlgComponent_CallbackFunc_o *v100; // x20
  CommonUI_o *v101; // x0
  int32_t v102; // w1
  RecoverDlgComponent_CallbackFunc_o *v103; // x2
  bool v104; // w3
  Il2CppObject *v105; // x19
  RecoverDlgComponent_CallbackFunc_o *v106; // x20
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x24
  Il2CppObject *v108; // x25
  Il2CppObject *v109; // x27
  System_String_o *v110; // x20
  int32_t v111; // w29
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v113; // x8
  int *v114; // x26
  System_String_o **v115; // x28
  int64_t qp; // x8
  struct System_Int32_array *nums; // x9
  System_String_o *v118; // x0
  System_String_o *v119; // x0
  System_String_o *v120; // x19
  System_String_o *v121; // x0
  System_String_o *v122; // x19
  CommonUI_o *v123; // x20
  clsQuestCheck___c_c *v124; // x8
  System_String_o *v125; // x21
  System_Action_o *_9__43_10; // x22
  Il2CppObject *v127; // x23
  int32_t v128; // w2
  int32_t v129; // w3
  System_String_o *v130; // x4
  int32_t v131; // w5
  int64_t v132; // x6
  System_String_o *v133; // x7
  struct clsQuestCheck___c_StaticFields *v134; // x0
  GrandQuestFolderBoardItem_o *p__9__43_10; // x0
  Il2CppObject *v136; // x19
  RecoverDlgComponent_CallbackFunc_o *v137; // x20
  QuestConsumeItemEntity_o *v138; // x24
  Il2CppObject *v139; // x25
  Il2CppObject *v140; // x27
  System_String_o *v141; // x20
  int32_t v142; // w29
  struct System_Int32_array *v143; // x8
  struct System_Int32_array *v144; // x8
  int *v145; // x26
  System_String_o **v146; // x28
  int64_t v147; // x8
  struct System_Int32_array *v148; // x9
  Il2CppObject *Entity; // x0
  TerminalPramsManager_c *v150; // x0
  int v151; // w8
  TerminalPramsManager_c *v152; // x0
  int32_t VaildPayType; // w21
  TerminalPramsManager_c *v154; // x0
  MapControl_QuestInfo_o *v155; // x8
  QuestMessageMaster_o *v156; // x19
  int32_t v157; // w2
  System_String_o *ValidMessage; // x0
  System_String_o *v159; // x19
  Il2CppObject *v160; // x20
  System_String_o *v161; // x21
  System_String_o *v162; // x22
  clsQuestCheck___c_c *v163; // x8
  CommonConfirmDialog_ClickDelegate_o *_9__43_2; // x24
  System_String_o *v165; // x23
  Il2CppObject *v166; // x25
  struct clsQuestCheck___c_StaticFields *v167; // x0
  int32_t v168; // w2
  int32_t v169; // w3
  System_String_o *v170; // x4
  int32_t v171; // w5
  int64_t v172; // x6
  System_String_o *v173; // x7
  System_String_o *v174; // x0
  System_String_o *v175; // x0
  System_String_o *v176; // x19
  System_String_o *v177; // x0
  clsQuestCheck___c_c *v178; // x8
  Il2CppObject *v179; // x23
  struct clsQuestCheck___c_StaticFields *v180; // x0
  char v181; // [xsp+3Ch] [xbp-84h]
  char v182; // [xsp+3Ch] [xbp-84h]
  UserGameEntity_o *SelfUserGame; // [xsp+40h] [xbp-80h]
  UserGameEntity_o *v184; // [xsp+40h] [xbp-80h]
  int32_t v185; // [xsp+4Ch] [xbp-74h]
  int32_t key; // [xsp+50h] [xbp-70h]
  int32_t servantEquipSum[2]; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4CEAE19 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&RecoverDlgComponent_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestMessageMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    sub_1C7BAE8(&Method_clsQuestCheck___c__CheckQuestPlayable_b__43_0__);
    sub_1C7BAE8(&Method_clsQuestCheck___c__CheckQuestPlayable_b__43_10__);
    sub_1C7BAE8(&Method_clsQuestCheck___c__CheckQuestPlayable_b__43_12__);
    sub_1C7BAE8(&Method_clsQuestCheck___c__CheckQuestPlayable_b__43_1__);
    sub_1C7BAE8(&Method_clsQuestCheck___c__CheckQuestPlayable_b__43_2__);
    sub_1C7BAE8(&Method_clsQuestCheck___c__CheckQuestPlayable_b__43_3__);
    sub_1C7BAE8(&Method_clsQuestCheck___c__CheckQuestPlayable_b__43_6__);
    sub_1C7BAE8(&Method_clsQuestCheck___c__DisplayClass43_0__CheckQuestPlayable_b__11__);
    sub_1C7BAE8(&Method_clsQuestCheck___c__DisplayClass43_0__CheckQuestPlayable_b__8__);
    sub_1C7BAE8(&Method_clsQuestCheck___c__DisplayClass43_0__CheckQuestPlayable_b__9__);
    sub_1C7BAE8(&clsQuestCheck___c__DisplayClass43_0_TypeInfo);
    sub_1C7BAE8(&clsQuestCheck___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_43/*"\n"*/);
    sub_1C7BAE8(&StringLiteral_10926/*"QUEST_MESSAGE_DLG_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_10925/*"QUEST_MESSAGE_DLG_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_10924/*"QUEST_ITEM_COST_OVER"*/);
    sub_1C7BAE8(&StringLiteral_12235/*"SHORT_DLG_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_44/*"\n\n"*/);
    sub_1C7BAE8(&StringLiteral_2861/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_10865/*"QUEST_AP_MAX_OVER"*/);
    sub_1C7BAE8(&Method_clsQuestCheck_RefreshTerminalScene__);
    byte_4CEAE19 = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  v9 = sub_1C7BD34(clsQuestCheck___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_232;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = questInfo;
  v18 = (MapControl_QuestInfo_o **)(v9 + 24);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)questInfo, v19, v20, v21, v22, v23, v24);
  SpotID = *(void **)(v9 + 24);
  *(_QWORD *)(v9 + 32) = srcEndTime;
  *(_DWORD *)(v9 + 40) = boostId;
  if ( !SpotID )
    goto LABEL_232;
  v25 = *((_DWORD *)SpotID + 16);
  SpotID = (void *)MapControl_QuestInfo__GetSpotID((MapControl_QuestInfo_o *)SpotID, 0);
  v26 = *v18;
  if ( !*v18 )
    goto LABEL_232;
  questId = v26->fields.questId;
  questPhase = v26->fields.questPhase;
  v29 = (int)SpotID;
  SpotID = (void *)MapControl_QuestInfo__GetActConsumeCost(*v18, 0);
  v11 = *v18;
  if ( !*v18 )
    goto LABEL_232;
  isNotItemConsume = v11->fields.isNotItemConsume;
  v32 = (int)SpotID;
  if ( !clsQuestCheck__IsQuestValid(this, v11, *(_QWORD *)(v9 + 32), v30) )
  {
    v48 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v48, (Il2CppObject *)this, Method_clsQuestCheck_RefreshTerminalScene__, 0);
    clsQuestCheck__OpenQuestTimeOverNoticeDialog(v49, v48, v50);
    goto LABEL_74;
  }
  SpotID = UserGameMaster__getSelfUserGame(0);
  if ( !*v18 )
    goto LABEL_232;
  v33 = (UserGameEntity_o *)SpotID;
  SpotID = MapControl_QuestInfo__GetMine(*v18, 0);
  if ( !SpotID )
    goto LABEL_232;
  v34 = (QuestEntity_o *)SpotID;
  SpotID = (void *)QuestEntity__GetConsumeType((QuestEntity_o *)SpotID, 0);
  if ( (_DWORD)SpotID == 1 )
  {
    if ( !v33 )
      goto LABEL_232;
    if ( v32 > v33->fields.actMax )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12235/*"SHORT_DLG_TITLE"*/, 0);
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_10865/*"QUEST_AP_MAX_OVER"*/, 0);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v37 = (CommonUI_o *)SpotID;
      v38 = clsQuestCheck___c_TypeInfo;
      if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
        v38 = clsQuestCheck___c_TypeInfo;
      }
      _9__43_3 = v38->static_fields->__9__43_3;
      if ( !_9__43_3 )
      {
        if ( !v38->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v38);
          v38 = clsQuestCheck___c_TypeInfo;
        }
        v40 = (Il2CppObject *)v38->static_fields->__9;
        _9__43_3 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
        System_Action___ctor(_9__43_3, v40, Method_clsQuestCheck___c__CheckQuestPlayable_b__43_3__, 0);
        static_fields = clsQuestCheck___c_TypeInfo->static_fields;
        static_fields->__9__43_3 = _9__43_3;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__43_3,
          (int32_t)_9__43_3,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47);
      }
      if ( !v37 )
        goto LABEL_232;
      CommonUI__OpenNotificationDialog(v37, v35, v36, _9__43_3, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
      goto LABEL_74;
    }
  }
  v185 = v29;
  key = v25;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CEAE38 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEAE38 = 1;
  }
  v51 = TerminalPramsManager_TypeInfo;
  v52 = questPhase;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v51 = TerminalPramsManager_TypeInfo;
  }
  v51->static_fields->_QuestId_k__BackingField = questId;
  v53 = *(_QWORD *)(v9 + 32);
  if ( !byte_4CEAE39 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    v51 = TerminalPramsManager_TypeInfo;
    byte_4CEAE39 = 1;
  }
  if ( !v51->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v51);
    v51 = TerminalPramsManager_TypeInfo;
  }
  v54 = v51->static_fields;
  v54->_EndTime_k__BackingField = v53;
  v54->lastPlayQuestConsumeAp = v32;
  TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(0);
  SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_232;
  SpotID = DataManager__GetMasterData_object_(
             (DataManager_o *)SpotID,
             (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SpotID )
    goto LABEL_232;
  v55 = (UserServantMaster_o *)SpotID;
  UserServantMaster__getCount((UserServantMaster_o *)SpotID, &servantEquipSum[1], servantEquipSum, 1, 0);
  SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_232;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)SpotID,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v55, 1, 0) )
  {
    SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v33 )
      goto LABEL_232;
    v57 = (CommonUI_o *)SpotID;
    v58 = servantEquipSum[1];
    svtKeep = v33->fields.svtKeep;
    SpotID = clsQuestCheck___c_TypeInfo;
    if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
      SpotID = clsQuestCheck___c_TypeInfo;
    }
    v60 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)SpotID + 23) + 32LL);
    if ( !v60 )
    {
      if ( !*((_DWORD *)SpotID + 56) )
      {
        j_il2cpp_runtime_class_init_0(SpotID);
        SpotID = clsQuestCheck___c_TypeInfo;
      }
      v61 = (Il2CppObject *)**((_QWORD **)SpotID + 23);
      v60 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C7BD34(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v60,
        v61,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__43_0__,
        0);
      v62 = clsQuestCheck___c_TypeInfo->static_fields;
      v62->__9__43_0 = v60;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v62->__9__43_0, (int32_t)v60, v63, v64, v65, v66, v67, v68);
    }
    if ( !v57 )
      goto LABEL_232;
    v69 = v57;
    v70 = v58;
    v71 = svtKeep;
    v72 = 0;
    goto LABEL_73;
  }
  SpotID = (void *)UserServantMaster__CheckEquipAdd(v55, 1, 1, 0);
  if ( ((unsigned __int8)SpotID & 1) != 0 )
  {
    SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v33 )
      goto LABEL_232;
    v73 = (CommonUI_o *)SpotID;
    v74 = servantEquipSum[0];
    svtEquipKeep = v33->fields.svtEquipKeep;
    SpotID = clsQuestCheck___c_TypeInfo;
    if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
      SpotID = clsQuestCheck___c_TypeInfo;
    }
    v60 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)SpotID + 23) + 40LL);
    if ( !v60 )
    {
      if ( !*((_DWORD *)SpotID + 56) )
      {
        j_il2cpp_runtime_class_init_0(SpotID);
        SpotID = clsQuestCheck___c_TypeInfo;
      }
      v76 = (Il2CppObject *)**((_QWORD **)SpotID + 23);
      v60 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C7BD34(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v60,
        v76,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__43_1__,
        0);
      v77 = clsQuestCheck___c_TypeInfo->static_fields;
      v77->__9__43_1 = v60;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v77->__9__43_1, (int32_t)v60, v78, v79, v80, v81, v82, v83);
    }
    if ( !v73 )
      goto LABEL_232;
    v72 = 1;
    v69 = v73;
    v70 = v74;
LABEL_72:
    v71 = svtEquipKeep;
LABEL_73:
    CommonUI__OpenSvtFrameShortDlg(v69, v70, v71, v72, 1, v60, 0, 0);
LABEL_74:
    SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v33 )
      goto LABEL_232;
    v85 = (CommonUI_o *)SpotID;
    if ( !byte_4CE8865 )
    {
      sub_1C7BAE8(&BalanceConfig_TypeInfo);
      byte_4CE8865 = 1;
    }
    v86 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v86 = BalanceConfig_TypeInfo;
    }
    SpotID = clsQuestCheck___c_TypeInfo;
    svtEquipKeep = v86->static_fields->CommandCodeFrameMax;
    if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
      SpotID = clsQuestCheck___c_TypeInfo;
    }
    v60 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)SpotID + 23) + 48LL);
    if ( !v60 )
    {
      if ( !*((_DWORD *)SpotID + 56) )
      {
        j_il2cpp_runtime_class_init_0(SpotID);
        SpotID = clsQuestCheck___c_TypeInfo;
      }
      v87 = (Il2CppObject *)**((_QWORD **)SpotID + 23);
      v60 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C7BD34(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v60,
        v87,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__43_6__,
        0);
      v88 = clsQuestCheck___c_TypeInfo->static_fields;
      v88->__9__43_6 = v60;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v88->__9__43_6, (int32_t)v60, v89, v90, v91, v92, v93, v94);
    }
    if ( !v85 )
      goto LABEL_232;
    v72 = 2;
    v69 = v85;
    v70 = Count;
    goto LABEL_72;
  }
  SpotID = (void *)QuestEntity__GetConsumeType(v34, 0);
  v97 = v29;
  v98 = v52;
  switch ( (int)SpotID )
  {
    case 1:
      if ( !v33 )
        goto LABEL_232;
      if ( v32 <= UserGameEntity__getAct(v33, 0) )
        goto LABEL_162;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v100 = (RecoverDlgComponent_CallbackFunc_o *)sub_1C7BD34(RecoverDlgComponent_CallbackFunc_TypeInfo);
      RecoverDlgComponent_CallbackFunc___ctor(
        v100,
        (Il2CppObject *)v9,
        Method_clsQuestCheck___c__DisplayClass43_0__CheckQuestPlayable_b__8__,
        0);
      if ( !Instance )
        goto LABEL_232;
      v101 = (CommonUI_o *)Instance;
      v102 = v32;
      v103 = v100;
      v104 = 0;
      goto LABEL_130;
    case 2:
      if ( !v33 )
        goto LABEL_232;
      if ( v32 <= UserGameEntity__getRp(v33, 0) )
        goto LABEL_162;
      v105 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v106 = (RecoverDlgComponent_CallbackFunc_o *)sub_1C7BD34(RecoverDlgComponent_CallbackFunc_TypeInfo);
      RecoverDlgComponent_CallbackFunc___ctor(
        v106,
        (Il2CppObject *)v9,
        Method_clsQuestCheck___c__DisplayClass43_0__CheckQuestPlayable_b__9__,
        0);
      if ( !v105 )
        goto LABEL_232;
      CommonUI__OpenRpRecoverItemListDialog((CommonUI_o *)v105, v32, v106, 0, 0);
      return 0;
    case 3:
      ItemConsumeEntity = QuestEntity__getItemConsumeEntity(v34, isNotItemConsume, 0);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      v108 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserItemMaster___);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      v109 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ItemMaster___);
      SelfUserGame = UserGameMaster__getSelfUserGame(0);
      if ( !ItemConsumeEntity )
        goto LABEL_162;
      v110 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0) )
        goto LABEL_162;
      v181 = 0;
      v111 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4CE827C )
        {
          sub_1C7BAE8(&NetworkManager_TypeInfo);
          byte_4CE827C = 1;
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
        if ( (unsigned int)v111 >= LODWORD(itemIds->max_length) )
          goto LABEL_233;
        if ( !v108 )
          goto LABEL_232;
        SpotID = UserItemMaster__GetEntity(
                   (UserItemMaster_o *)v108,
                   *(_QWORD *)(*((_QWORD *)SpotID + 23) + 64LL),
                   itemIds->m_Items[v111],
                   0);
        v113 = ItemConsumeEntity->fields.itemIds;
        if ( !v113 )
          goto LABEL_232;
        if ( (unsigned int)v111 >= LODWORD(v113->max_length) )
          goto LABEL_233;
        if ( !v109 )
          goto LABEL_232;
        v114 = (int *)SpotID;
        SpotID = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)v109,
                   v113->m_Items[v111],
                   (const MethodInfo_342E2FC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !SpotID )
          goto LABEL_232;
        v115 = (System_String_o **)SpotID;
        if ( *((_DWORD *)SpotID + 12) == 1 )
        {
          if ( !SelfUserGame )
            goto LABEL_232;
          qp = SelfUserGame->fields.qp;
        }
        else if ( v114 )
        {
          SpotID = (void *)ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0);
          qp = 0;
          if ( ((unsigned __int8)SpotID & 1) != 0 )
            qp = v114[7];
        }
        else
        {
          qp = 0;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_232;
        if ( (unsigned int)v111 >= LODWORD(nums->max_length) )
          goto LABEL_233;
        if ( qp < nums->m_Items[v111] )
        {
          v110 = System_String__Concat_64215176(v110, (System_String_o *)StringLiteral_43/*"\n"*/, v115[3], 0);
          v181 = 1;
        }
        ++v111;
      }
      while ( QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, v111, 0) );
      v98 = v52;
      v97 = v185;
      if ( (v181 & 1) == 0 )
        goto LABEL_162;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v118 = LocalizationManager__Get((System_String_o *)StringLiteral_10924/*"QUEST_ITEM_COST_OVER"*/, 0);
      v119 = System_String__Format(v118, (Il2CppObject *)v110, 0);
      v120 = System_String__Concat_64176912(v119, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0);
      v121 = LocalizationManager__Get((System_String_o *)StringLiteral_2861/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0);
      v122 = System_String__Concat_64176912(v120, v121, 0);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v123 = (CommonUI_o *)SpotID;
      v124 = clsQuestCheck___c_TypeInfo;
      if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
        v124 = clsQuestCheck___c_TypeInfo;
      }
      v125 = (System_String_o *)StringLiteral_1/*""*/;
      _9__43_10 = v124->static_fields->__9__43_10;
      if ( _9__43_10 )
        goto LABEL_230;
      if ( !v124->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v124);
        v124 = clsQuestCheck___c_TypeInfo;
      }
      v127 = (Il2CppObject *)v124->static_fields->__9;
      _9__43_10 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(_9__43_10, v127, Method_clsQuestCheck___c__CheckQuestPlayable_b__43_10__, 0);
      v134 = clsQuestCheck___c_TypeInfo->static_fields;
      v134->__9__43_10 = _9__43_10;
      p__9__43_10 = (GrandQuestFolderBoardItem_o *)&v134->__9__43_10;
      goto LABEL_229;
    case 4:
      if ( !v33 )
        goto LABEL_232;
      if ( v32 > UserGameEntity__getAct(v33, 0) )
      {
        v136 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v137 = (RecoverDlgComponent_CallbackFunc_o *)sub_1C7BD34(RecoverDlgComponent_CallbackFunc_TypeInfo);
        RecoverDlgComponent_CallbackFunc___ctor(
          v137,
          (Il2CppObject *)v9,
          Method_clsQuestCheck___c__DisplayClass43_0__CheckQuestPlayable_b__11__,
          0);
        if ( v136 )
        {
          v104 = 1;
          v101 = (CommonUI_o *)v136;
          v102 = v32;
          v103 = v137;
LABEL_130:
          CommonUI__OpenApRecoverItemListDialog(v101, v102, v103, v104, 0);
          return 0;
        }
LABEL_232:
        sub_1C7BD40(SpotID, v11);
      }
      v138 = QuestEntity__getItemConsumeEntity(v34, isNotItemConsume, 0);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      v139 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserItemMaster___);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      v140 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ItemMaster___);
      v184 = UserGameMaster__getSelfUserGame(0);
      if ( v138 )
      {
        v141 = (System_String_o *)StringLiteral_1/*""*/;
        if ( QuestConsumeItemEntity__IsAvailableAt(v138, 0, 0) )
        {
          v182 = 0;
          v142 = 0;
          do
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4CE827C )
            {
              sub_1C7BAE8(&NetworkManager_TypeInfo);
              byte_4CE827C = 1;
            }
            SpotID = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              SpotID = NetworkManager_TypeInfo;
            }
            v143 = v138->fields.itemIds;
            if ( !v143 )
              goto LABEL_232;
            if ( (unsigned int)v142 >= LODWORD(v143->max_length) )
              goto LABEL_233;
            if ( !v139 )
              goto LABEL_232;
            SpotID = UserItemMaster__GetEntity(
                       (UserItemMaster_o *)v139,
                       *(_QWORD *)(*((_QWORD *)SpotID + 23) + 64LL),
                       v143->m_Items[v142],
                       0);
            v144 = v138->fields.itemIds;
            if ( !v144 )
              goto LABEL_232;
            if ( (unsigned int)v142 >= LODWORD(v144->max_length) )
              goto LABEL_233;
            if ( !v140 )
              goto LABEL_232;
            v145 = (int *)SpotID;
            SpotID = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v140,
                       v144->m_Items[v142],
                       (const MethodInfo_342E2FC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( !SpotID )
              goto LABEL_232;
            v146 = (System_String_o **)SpotID;
            if ( *((_DWORD *)SpotID + 12) == 1 )
            {
              if ( !v184 )
                goto LABEL_232;
              v147 = v184->fields.qp;
            }
            else if ( v145 )
            {
              SpotID = (void *)ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0);
              v147 = 0;
              if ( ((unsigned __int8)SpotID & 1) != 0 )
                v147 = v145[7];
            }
            else
            {
              v147 = 0;
            }
            v148 = v138->fields.nums;
            if ( !v148 )
              goto LABEL_232;
            if ( (unsigned int)v142 >= LODWORD(v148->max_length) )
LABEL_233:
              sub_1C7BD48(SpotID);
            if ( v147 < v148->m_Items[v142] )
            {
              v141 = System_String__Concat_64215176(v141, (System_String_o *)StringLiteral_43/*"\n"*/, v146[3], 0);
              v182 = 1;
            }
            ++v142;
          }
          while ( QuestConsumeItemEntity__IsAvailableAt(v138, v142, 0) );
          v98 = v52;
          v97 = v185;
          if ( (v182 & 1) != 0 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v174 = LocalizationManager__Get((System_String_o *)StringLiteral_10924/*"QUEST_ITEM_COST_OVER"*/, 0);
            v175 = System_String__Format(v174, (Il2CppObject *)v141, 0);
            v176 = System_String__Concat_64176912(v175, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0);
            v177 = LocalizationManager__Get((System_String_o *)StringLiteral_2861/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0);
            v122 = System_String__Concat_64176912(v176, v177, 0);
            SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v123 = (CommonUI_o *)SpotID;
            v178 = clsQuestCheck___c_TypeInfo;
            if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
              v178 = clsQuestCheck___c_TypeInfo;
            }
            v125 = (System_String_o *)StringLiteral_1/*""*/;
            _9__43_10 = v178->static_fields->__9__43_12;
            if ( !_9__43_10 )
            {
              if ( !v178->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v178);
                v178 = clsQuestCheck___c_TypeInfo;
              }
              v179 = (Il2CppObject *)v178->static_fields->__9;
              _9__43_10 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
              System_Action___ctor(_9__43_10, v179, Method_clsQuestCheck___c__CheckQuestPlayable_b__43_12__, 0);
              v180 = clsQuestCheck___c_TypeInfo->static_fields;
              v180->__9__43_12 = _9__43_10;
              p__9__43_10 = (GrandQuestFolderBoardItem_o *)&v180->__9__43_12;
LABEL_229:
              sub_1C7BA8C(p__9__43_10, (int32_t)_9__43_10, v128, v129, v130, v131, v132, v133);
            }
LABEL_230:
            if ( !v123 )
              goto LABEL_232;
            CommonUI__OpenNotificationDialog(v123, v125, v122, _9__43_10, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
            goto LABEL_74;
          }
        }
      }
LABEL_162:
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      SpotID = DataManager__GetMasterData_object_(
                 (DataManager_o *)SpotID,
                 (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !SpotID )
        goto LABEL_232;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)SpotID,
                 key,
                 (const MethodInfo_342E2FC *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( Entity && WarEntity__IsFolder((WarEntity_o *)Entity, 0) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4CEAE3A )
        {
          sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
          byte_4CEAE3A = 1;
        }
        v150 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v150 = TerminalPramsManager_TypeInfo;
        }
        v151 = 3;
      }
      else
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4CEAE3A )
        {
          sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
          byte_4CEAE3A = 1;
        }
        v150 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v150 = TerminalPramsManager_TypeInfo;
        }
        v151 = 2;
      }
      v150->static_fields->_DispState_k__BackingField = v151;
      if ( !v150->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v150);
      if ( !byte_4CEAE3B )
      {
        sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
        byte_4CEAE3B = 1;
      }
      v152 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v152 = TerminalPramsManager_TypeInfo;
      }
      v152->static_fields->_IsDoneShortcut_k__BackingField = 0;
      if ( !byte_4CEAE3C )
      {
        sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
        v152 = TerminalPramsManager_TypeInfo;
        byte_4CEAE3C = 1;
      }
      if ( !v152->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v152);
        v152 = TerminalPramsManager_TypeInfo;
      }
      v152->static_fields->_PhaseCnt_k__BackingField = v98;
      if ( !byte_4CEAE3D )
      {
        sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
        v152 = TerminalPramsManager_TypeInfo;
        byte_4CEAE3D = 1;
      }
      if ( !v152->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v152);
        v152 = TerminalPramsManager_TypeInfo;
      }
      v152->static_fields->_SpotId_k__BackingField = v97;
      if ( !byte_4CEAE3E )
      {
        sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
        v152 = TerminalPramsManager_TypeInfo;
        byte_4CEAE3E = 1;
      }
      if ( !v152->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v152);
        v152 = TerminalPramsManager_TypeInfo;
      }
      v152->static_fields->_WarId_k__BackingField = key;
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      SpotID = DataManager__GetMasterData_object_(
                 (DataManager_o *)SpotID,
                 (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_GachaMaster___);
      if ( !SpotID )
        goto LABEL_232;
      VaildPayType = GachaMaster__getVaildPayType((GachaMaster_o *)SpotID, 0);
      if ( !byte_4CEAABD )
      {
        sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
        byte_4CEAABD = 1;
      }
      v154 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v154 = TerminalPramsManager_TypeInfo;
      }
      v154->static_fields->_SummonType_k__BackingField = VaildPayType;
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      SpotID = DataManager__GetMasterData_object_(
                 (DataManager_o *)SpotID,
                 (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestMessageMaster___);
      v155 = *v18;
      if ( !*v18 )
        goto LABEL_232;
      v156 = (QuestMessageMaster_o *)SpotID;
      SpotID = (void *)MapControl_QuestInfo__GetPhaseMax(v155, 0);
      if ( !v156 )
        goto LABEL_232;
      if ( v98 + 1 >= (int)SpotID )
        v157 = (int)SpotID;
      else
        v157 = v98 + 1;
      v95 = 1;
      ValidMessage = QuestMessageMaster__GetValidMessage(v156, questId, v157, 1, 0);
      if ( ValidMessage )
      {
        v159 = ValidMessage;
        v160 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v161 = LocalizationManager__Get((System_String_o *)StringLiteral_10926/*"QUEST_MESSAGE_DLG_DECIDE"*/, 0);
        SpotID = LocalizationManager__Get((System_String_o *)StringLiteral_10925/*"QUEST_MESSAGE_DLG_CANCEL"*/, 0);
        v162 = (System_String_o *)SpotID;
        v163 = clsQuestCheck___c_TypeInfo;
        if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
          v163 = clsQuestCheck___c_TypeInfo;
        }
        _9__43_2 = v163->static_fields->__9__43_2;
        v165 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !_9__43_2 )
        {
          if ( !v163->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v163);
            v163 = clsQuestCheck___c_TypeInfo;
          }
          v166 = (Il2CppObject *)v163->static_fields->__9;
          _9__43_2 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C7BD34(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            _9__43_2,
            v166,
            Method_clsQuestCheck___c__CheckQuestPlayable_b__43_2__,
            0);
          v167 = clsQuestCheck___c_TypeInfo->static_fields;
          v167->__9__43_2 = _9__43_2;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&v167->__9__43_2,
            (int32_t)_9__43_2,
            v168,
            v169,
            v170,
            v171,
            v172,
            v173);
        }
        if ( v160 )
        {
          v95 = 1;
          CommonUI__OpenConfirmDialog_31482460((CommonUI_o *)v160, v165, v159, v161, v162, _9__43_2, 0, 1, 0, 0);
          return v95;
        }
        goto LABEL_232;
      }
      return v95;
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
  __int64 v7; // x1
  Il2CppObject *Master_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x0
  bool v10; // w0
  const MethodInfo *v11; // x3
  bool IsOpenByTime; // w8
  QuestEntity_o *v14; // [xsp+0h] [xbp-50h] BYREF
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CEADFA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CEADFA = 1;
  }
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, (const MethodInfo *)isIncludeTempData) )
    return 0;
  v14 = 0;
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_26;
  if ( UserQuestMaster__TryGetEntity(
         (UserQuestMaster_o *)Master_object,
         &entity,
         (int64_t)v9[2].fields.list[1].monitor,
         questId,
         0) )
  {
    v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_26;
    if ( UserQuestEntity__IsNotExpired(entity, 0) )
      return 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !v9 )
LABEL_26:
    sub_1C7BD40(v9, v7);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v9,
          (Il2CppObject **)&v14,
          questId,
          (const MethodInfo_342E348 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)v14;
  if ( !v14 )
    goto LABEL_26;
  IsOpenByTime = QuestEntity__IsOpenByTime(v14, 0, 0);
  v10 = 0;
  if ( IsOpenByTime )
    return clsQuestCheck__IsReleasedQuest(this, questId, isIncludeTempData, v11);
  return v10;
}


void clsQuestCheck__DeleteContinueData(const MethodInfo *method)
{
  clsQuestCheck_c *v1; // x0
  System_String_o *KEY_QUEST_START_EFFECT; // x19

  if ( (byte_4CEADF7 & 1) == 0 )
  {
    sub_1C7BAE8(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C7BAE8(&clsQuestCheck_TypeInfo);
    byte_4CEADF7 = 1;
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

  if ( (byte_4CEAE0C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEAE0C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v6 = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0);
  result = -1;
  if ( !v6 || !is_quest_after_action )
    return result;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
LABEL_17:
    sub_1C7BD40(Instance, v5);
  if ( !QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0) )
    return -1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CE84EC )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CE84EC = 1;
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
  const MethodInfo *v8; // x3
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v10; // x21
  unsigned __int64 v11; // x23
  int32_t v12; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10

  if ( (byte_4CEAE15 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CEAE15 = 1;
  }
  if ( eventId <= 0 )
    return (System_Int32_array *)sub_1C7BB90(int___TypeInfo, 0);
  v5 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestGroupMaster___);
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
        sub_1C7BD48(Master_object);
      v12 = v10->m_Items[v11];
      Master_object = (System_Int32_array *)clsQuestCheck__CheckQuestPlayableNow(this, v12, 0, v8);
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
            *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
    sub_1C7BD40(Master_object, v7);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Int32_array *v26; // x19
  __int64 v27; // x20
  TerminalPramsManager_c *v28; // x0
  GrandQuestFolderBoardItem_o *v29; // x0
  __int64 v31; // x19
  TerminalPramsManager_c *v32; // x0
  GrandQuestFolderBoardItem_o *p_ClearEventQuestIds_k__BackingField; // x0

  if ( (byte_4CEAE14 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_ConvertAll_string__int___);
    sub_1C7BAE8(&System_Converter_string__int__TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Except_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&Method_System_Int32_Parse__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEAE14 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CEAE37 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEAE37 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( System_String__IsNullOrEmpty(v5->static_fields->_ClearEventQuestIds_k__BackingField, 0) )
    return (System_Int32_array *)sub_1C7BB90(int___TypeInfo, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CEAE37 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEAE37 = 1;
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
        v10 = (System_Converter_object__int__o *)sub_1C7BD34(System_Converter_string__int__TypeInfo),
        System_Converter_object__int____ctor(v10, 0, Method_System_Int32_Parse__, 0),
        (ClearEventQuestIds_k__BackingField = (System_String_o *)System_Array__ConvertAll_object__int_(
                                                                   (System_Object_array *)v9,
                                                                   (System_Converter_TInput__TOutput__o *)v10,
                                                                   (const MethodInfo_3271804 *)Method_System_Array_ConvertAll_string__int___)) == 0) )
  {
    sub_1C7BD40(ClearEventQuestIds_k__BackingField, v6);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)ClearEventQuestIds_k__BackingField;
  if ( !ClearEventQuestIds_k__BackingField[1].klass )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v31 = StringLiteral_1/*""*/;
    if ( !byte_4CEAE36 )
    {
      sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
      byte_4CEAE36 = 1;
    }
    v32 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v32 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (GrandQuestFolderBoardItem_o *)&v32->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v31;
    sub_1C7BA8C(p_ClearEventQuestIds_k__BackingField, v31, (int32_t)v11, v12, v13, v14, v15, v16);
    TerminalPramsManager__ClearEventQuestIds_SaveData(0);
    return (System_Int32_array *)sub_1C7BB90(int___TypeInfo, 0);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)clsQuestCheck__GetEventQuestIdListPlayable(
                                                               this,
                                                               eventId,
                                                               v11);
  v19 = System_Linq_Enumerable__Except_int_(
          v18,
          v17,
          (const MethodInfo_3194F88 *)Method_System_Linq_Enumerable_Except_int___);
  v26 = System_Linq_Enumerable__ToArray_int_(
          v19,
          (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v27 = StringLiteral_1/*""*/;
  if ( !byte_4CEAE36 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEAE36 = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v28 = TerminalPramsManager_TypeInfo;
  }
  v29 = (GrandQuestFolderBoardItem_o *)&v28->static_fields->_ClearEventQuestIds_k__BackingField;
  v29->klass = (GrandQuestFolderBoardItem_c *)v27;
  sub_1C7BA8C(v29, v27, v20, v21, v22, v23, v24, v25);
  TerminalPramsManager__ClearEventQuestIds_SaveData(0);
  return v26;
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  Il2CppObject *v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_int__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v24; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CEAE12 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_QuestEntity__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEAE12 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v4 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestMaster___),
        !qids) )
  {
    sub_1C7BD40(Instance, v6);
  }
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    qids,
    (const MethodInfo_38228AC *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_int___MoveNext(
           &v24,
           (const MethodInfo_35BA180 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v8 )
      break;
    if ( !v7 )
      sub_1C7BD40(v8, v9);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v7,
               v24.fields._current,
               (const MethodInfo_342E2FC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    v17 = Entity;
    if ( !v4 )
      sub_1C7BD40(Entity, Entity);
    items = v4->fields._items;
    v19 = Method_System_Collections_Generic_List_QuestEntity__Add__;
    ++v4->fields._version;
    if ( !items )
      sub_1C7BD40(Entity, Entity);
    size = v4->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v4,
        Entity,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &items->obj.klass + size;
      v4->fields._size = size + 1;
      v21[4] = (Il2CppClass *)v17;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v17, v11, v12, v13, v14, v15, v16);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v24,
    (const MethodInfo_35BA17C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x25
  unsigned int v15; // w28
  QuestReleaseEntity_o *v16; // x8
  int32_t questId; // w26
  const MethodInfo *v18; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v22; // x23
  const MethodInfo *v23; // x4
  int32_t v24; // w20
  int v25; // w21
  System_Collections_Generic_List_Enumerator_int__o v27; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v28; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CEAE11 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor___78742272);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEAE11 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v9 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_32;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 9, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_32;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_1C7BD48(Instance);
      v16 = ListByType->m_Items[v15];
      if ( !v16 )
        break;
      if ( v16->fields.targetId == svt_id )
      {
        if ( !v14 )
          break;
        questId = v16->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v14,
                                      questId,
                                      (const MethodInfo_342E2FC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, questId, oldFriendShipRank, 9, v18);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v9 )
              break;
            items = v9->fields._items;
            v20 = Method_System_Collections_Generic_List_int__Add__;
            ++v9->fields._version;
            if ( !items )
              break;
            size = v9->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v9,
                questId,
                *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
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
      if ( (int)++v15 >= max_length )
        goto LABEL_22;
    }
LABEL_32:
    sub_1C7BD40(Instance, v11);
  }
LABEL_22:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v22 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_58857132(
      v22,
      (System_Collections_Generic_IEnumerable_T__o *)v9,
      (const MethodInfo_38216AC *)Method_System_Collections_Generic_List_int___ctor___78742272);
    Instance = (DataManager_o *)clsQuestCheck__GetReleaseQuestIdByServantFriendShip(this, svt_id, -1, type_flag, v23);
    if ( !Instance )
      goto LABEL_32;
    v9 = (System_Collections_Generic_List_int__o *)Instance;
    v24 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v24 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_int___get_Item(
                                      v9,
                                      v24,
                                      (const MethodInfo_3821AE8 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v22 )
          goto LABEL_32;
        v25 = (int)Instance;
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v27,
          v22,
          (const MethodInfo_38228AC *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v28 = v27;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v28,
                  (const MethodInfo_35BA180 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v25 == v28.fields._current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v9,
              v24,
              (const MethodInfo_3823558 *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v28,
          (const MethodInfo_35BA17C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( --v24 < 0 )
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

  return clsQuestCheck__GetReleaseQuestIdByServantLimit_36357448(this, svt_id, oldLimitCount, 494, v4);
}


System_Collections_Generic_List_int__o *clsQuestCheck__GetReleaseQuestIdByServantLimit_36357448(
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
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x25
  unsigned int v15; // w28
  QuestReleaseEntity_o *v16; // x8
  int32_t questId; // w26
  const MethodInfo *v18; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v22; // x23
  const MethodInfo *v23; // x4
  int32_t v24; // w20
  int v25; // w21
  System_Collections_Generic_List_Enumerator_int__o v27; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v28; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CEAE0E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor___78742272);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEAE0E = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v9 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_32;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_32;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_1C7BD48(Instance);
      v16 = ListByType->m_Items[v15];
      if ( !v16 )
        break;
      if ( v16->fields.targetId == svt_id )
      {
        if ( !v14 )
          break;
        questId = v16->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v14,
                                      questId,
                                      (const MethodInfo_342E2FC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, questId, oldLimitCount, 7, v18);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v9 )
              break;
            items = v9->fields._items;
            v20 = Method_System_Collections_Generic_List_int__Add__;
            ++v9->fields._version;
            if ( !items )
              break;
            size = v9->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v9,
                questId,
                *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
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
      if ( (int)++v15 >= max_length )
        goto LABEL_22;
    }
LABEL_32:
    sub_1C7BD40(Instance, v11);
  }
LABEL_22:
  if ( (oldLimitCount & 0x80000000) == 0 )
  {
    v22 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_58857132(
      v22,
      (System_Collections_Generic_IEnumerable_T__o *)v9,
      (const MethodInfo_38216AC *)Method_System_Collections_Generic_List_int___ctor___78742272);
    Instance = (DataManager_o *)clsQuestCheck__GetReleaseQuestIdByServantLimit_36357448(
                                  this,
                                  svt_id,
                                  -1,
                                  type_flag,
                                  v23);
    if ( !Instance )
      goto LABEL_32;
    v9 = (System_Collections_Generic_List_int__o *)Instance;
    v24 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v24 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_int___get_Item(
                                      v9,
                                      v24,
                                      (const MethodInfo_3821AE8 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v22 )
          goto LABEL_32;
        v25 = (int)Instance;
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v27,
          v22,
          (const MethodInfo_38228AC *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v28 = v27;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v28,
                  (const MethodInfo_35BA180 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v25 == v28.fields._current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v9,
              v24,
              (const MethodInfo_3823558 *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v28,
          (const MethodInfo_35BA17C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( --v24 < 0 )
          return v9;
      }
    }
  }
  return v9;
}


System_Collections_Generic_List_int__o *clsQuestCheck__GetReleaseQuestIdByServantLimit_36358464(
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
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x26
  unsigned int v16; // w21
  QuestReleaseEntity_o *v17; // x8
  int32_t questId; // w27
  const MethodInfo *v19; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v23; // x24
  int v24; // w8
  __int64 v25; // x29
  QuestReleaseEntity_o *v26; // x8
  int32_t v27; // w27
  const MethodInfo *v28; // x4
  struct System_Int32_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  int32_t v32; // w20
  int v33; // w21
  System_Collections_Generic_List_Enumerator_int__o v36; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v37; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CEAE0F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEAE0F = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v10 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_46;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_46;
  max_length = ListByType->max_length;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( v16 < max_length )
    {
      v17 = ListByType->m_Items[v16];
      if ( !v17 )
        goto LABEL_46;
      if ( v17->fields.targetId == svt_id )
      {
        if ( !v15 )
          goto LABEL_46;
        questId = v17->fields.questId;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v15,
                     questId,
                     (const MethodInfo_342E2FC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_46;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (Il2CppObject *)clsQuestCheck__IsQuestRelease(this, questId, oldLimitCount, 7, v19);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v10 )
              goto LABEL_46;
            items = v10->fields._items;
            v21 = Method_System_Collections_Generic_List_int__Add__;
            ++v10->fields._version;
            if ( !items )
              goto LABEL_46;
            size = v10->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v10,
                questId,
                *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
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
      if ( (int)++v16 >= max_length )
        goto LABEL_22;
    }
LABEL_47:
    sub_1C7BD48(Instance);
  }
LABEL_22:
  v23 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  v24 = ListByType->max_length;
  if ( v24 >= 1 )
  {
    v25 = 0;
    while ( (unsigned int)v25 < v24 )
    {
      v26 = ListByType->m_Items[v25];
      if ( !v26 )
        goto LABEL_46;
      if ( v26->fields.targetId == svt_id )
      {
        if ( !v15 )
          goto LABEL_46;
        v27 = v26->fields.questId;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v15,
                     v27,
                     (const MethodInfo_342E2FC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_46;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (Il2CppObject *)clsQuestCheck__IsQuestRelease(this, v27, newLimitCount, 7, v28);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v23 )
              goto LABEL_46;
            v29 = v23->fields._items;
            v30 = Method_System_Collections_Generic_List_int__Add__;
            ++v23->fields._version;
            if ( !v29 )
              goto LABEL_46;
            v31 = v23->fields._size;
            if ( (unsigned int)v31 >= LODWORD(v29->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v23,
                v27,
                *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
            }
            else
            {
              v23->fields._size = v31 + 1;
              v29->m_Items[v31] = v27;
            }
          }
        }
      }
      v24 = ListByType->max_length;
      if ( (int)++v25 >= v24 )
        goto LABEL_37;
    }
    goto LABEL_47;
  }
LABEL_37:
  if ( !v23 )
LABEL_46:
    sub_1C7BD40(Instance, v12);
  v32 = v23->fields._size - 1;
  if ( v32 >= 0 )
  {
    while ( 1 )
    {
      Instance = (Il2CppObject *)System_Collections_Generic_List_int___get_Item(
                                   v23,
                                   v32,
                                   (const MethodInfo_3821AE8 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v10 )
        goto LABEL_46;
      v33 = (int)Instance;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v36,
        v10,
        (const MethodInfo_38228AC *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v37 = v36;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v37,
                (const MethodInfo_35BA180 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        if ( v33 == v37.fields._current )
        {
          System_Collections_Generic_List_int___RemoveAt(
            v23,
            v32,
            (const MethodInfo_3823558 *)Method_System_Collections_Generic_List_int__RemoveAt__);
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v37,
        (const MethodInfo_35BA17C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      if ( --v32 < 0 )
        return v23;
    }
  }
  return v23;
}


System_Collections_Generic_List_int__o *clsQuestCheck__GetReleaseQuestIdByServantLv(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLv,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__GetReleaseQuestIdByServantLv_36356888(this, svt_id, oldLv, 494, v4);
}


System_Collections_Generic_List_int__o *clsQuestCheck__GetReleaseQuestIdByServantLv_36356888(
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
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x25
  unsigned int v15; // w27
  QuestReleaseEntity_o *v16; // x8
  int32_t questId; // w26
  const MethodInfo *v18; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10

  if ( (byte_4CEAE0D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEAE0D = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_23;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 6, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_23;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_1C7BD48(Instance);
      v16 = ListByType->m_Items[v15];
      if ( !v16 )
        break;
      if ( v16->fields.targetId == svt_id )
      {
        if ( !v14 )
          break;
        questId = v16->fields.questId;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v14,
                     questId,
                     (const MethodInfo_342E2FC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (Il2CppObject *)clsQuestCheck__IsQuestRelease(this, questId, oldLv, 6, v18);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v9 )
              break;
            items = v9->fields._items;
            v20 = Method_System_Collections_Generic_List_int__Add__;
            ++v9->fields._version;
            if ( !items )
              break;
            size = v9->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v9,
                questId,
                *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
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
      if ( (int)++v15 >= max_length )
        return v9;
    }
LABEL_23:
    sub_1C7BD40(Instance, v11);
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
  int max_length; // w8
  QuestReleaseEntity_array *v12; // x26
  unsigned int v13; // w19
  QuestReleaseEntity_o *v14; // x25
  __int64 v15; // x29
  int32_t questId; // w27
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  QuestReleaseEntity_array **v23; // x28
  System_Func_object__bool__o *v24; // x25
  const MethodInfo *v25; // x4
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  ServantGroupEntity_array *ListByServantID; // x19
  il2cpp_array_size_t v37; // x8
  QuestReleaseEntity_array *v38; // x24
  unsigned __int64 v39; // x29
  int v40; // w8
  unsigned int v41; // w23
  __int64 v42; // x19
  QuestReleaseEntity_o *v43; // x25
  __int64 v44; // x27
  int32_t v45; // w25
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  QuestReleaseEntity_array **v52; // x26
  System_Func_object__bool__o *v53; // x28
  const MethodInfo *v54; // x4
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass **v64; // x0
  QuestReleaseMaster_o *v66; // [xsp+0h] [xbp-80h]
  DataManager_o *v67; // [xsp+8h] [xbp-78h]

  if ( (byte_4CEAE10 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Any_QuestEntity___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantGroupMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C7BAE8(&System_Func_QuestEntity__bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_QuestEntity__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_clsQuestCheck___c__DisplayClass33_0__GetReleasedQuestEntityListByServantGet_b__0__);
    sub_1C7BAE8(&clsQuestCheck___c__DisplayClass33_0_TypeInfo);
    sub_1C7BAE8(&Method_clsQuestCheck___c__DisplayClass33_1__GetReleasedQuestEntityListByServantGet_b__1__);
    sub_1C7BAE8(&clsQuestCheck___c__DisplayClass33_1_TypeInfo);
    byte_4CEAE10 = 1;
  }
  Instance = (QuestReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  v7 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestMaster___);
  v9 = DataManager__GetMasterData_object_(
         v7,
         (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  if ( !v9 )
    goto LABEL_49;
  v66 = (QuestReleaseMaster_o *)v9;
  Instance = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)v9, 8, 0);
  if ( !Instance )
    goto LABEL_49;
  max_length = Instance->max_length;
  v12 = Instance;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( v13 < max_length )
    {
      v14 = v12->m_Items[v13];
      v15 = sub_1C7BD34(clsQuestCheck___c__DisplayClass33_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v15, 0);
      if ( !v14 )
        goto LABEL_49;
      if ( v14->fields.targetId == servantId )
      {
        if ( !MasterData_object )
          goto LABEL_49;
        questId = v14->fields.questId;
        Instance = (QuestReleaseEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                 questId,
                                                 (const MethodInfo_342E2FC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v15 )
          goto LABEL_49;
        *(_QWORD *)(v15 + 16) = Instance;
        v23 = (QuestReleaseEntity_array **)(v15 + 16);
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v15 + 16), (int32_t)Instance, v17, v18, v19, v20, v21, v22);
        v24 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_QuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v24,
          (Il2CppObject *)v15,
          Method_clsQuestCheck___c__DisplayClass33_0__GetReleasedQuestEntityListByServantGet_b__0__,
          0);
        Instance = (QuestReleaseEntity_array *)BasicHelper__Any_object_(
                                                 (System_Collections_Generic_List_T__o *)v10,
                                                 (System_Func_T__bool__o *)v24,
                                                 (const MethodInfo_3159728 *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = *v23;
          if ( !*v23 )
            goto LABEL_49;
          Instance = (QuestReleaseEntity_array *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0);
          if ( ((unsigned int)Instance & typeFlag) != 0 )
          {
            Instance = (QuestReleaseEntity_array *)clsQuestCheck__IsQuestRelease(this, questId, -1, 0, v25);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v10 )
                goto LABEL_49;
              v6 = (Il2CppObject *)*v23;
              items = v10->fields._items;
              v33 = Method_System_Collections_Generic_List_QuestEntity__Add__;
              ++v10->fields._version;
              if ( !items )
                goto LABEL_49;
              size = v10->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v10,
                  v6,
                  *(const MethodInfo_383EDFC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
              }
              else
              {
                v35 = &items->obj.klass + size;
                v10->fields._size = size + 1;
                v35[4] = (Il2CppClass *)v6;
                sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v35 + 4), (int32_t)v6, v26, v27, v28, v29, v30, v31);
              }
            }
          }
        }
      }
      max_length = v12->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_23;
    }
LABEL_50:
    sub_1C7BD48(Instance);
  }
LABEL_23:
  Instance = (QuestReleaseEntity_array *)DataManager__GetMasterData_object_(
                                           v7,
                                           (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantGroupMaster___);
  if ( !Instance
    || (ListByServantID = ServantGroupMaster__getListByServantID((ServantGroupMaster_o *)Instance, servantId, 0),
        Instance = QuestReleaseMaster__getListByType(v66, 10, 0),
        !ListByServantID) )
  {
LABEL_49:
    sub_1C7BD40(Instance, v6);
  }
  v37 = ListByServantID->max_length;
  if ( (int)v37 >= 1 )
  {
    v38 = Instance;
    v39 = 0;
    v67 = (DataManager_o *)ListByServantID;
    while ( 1 )
    {
      if ( v39 >= (unsigned int)v37 )
        goto LABEL_50;
      if ( !v38 )
        goto LABEL_49;
      v40 = v38->max_length;
      if ( v40 >= 1 )
        break;
LABEL_47:
      ++v39;
      LODWORD(v37) = v67->fields.m_CancellationTokenSource;
      if ( (__int64)v39 >= (int)v37 )
        return (System_Collections_Generic_List_QuestEntity__o *)v10;
    }
    v41 = 0;
    v42 = *((_QWORD *)&v67->fields._DispLog + v39);
    while ( v41 < v40 )
    {
      v43 = v38->m_Items[v41];
      v44 = sub_1C7BD34(clsQuestCheck___c__DisplayClass33_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v44, 0);
      if ( !v42 || !v43 )
        goto LABEL_49;
      if ( *(_DWORD *)(v42 + 16) == v43->fields.targetId )
      {
        if ( !MasterData_object )
          goto LABEL_49;
        v45 = v43->fields.questId;
        Instance = (QuestReleaseEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                 v45,
                                                 (const MethodInfo_342E2FC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v44 )
          goto LABEL_49;
        *(_QWORD *)(v44 + 16) = Instance;
        v52 = (QuestReleaseEntity_array **)(v44 + 16);
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v44 + 16), (int32_t)Instance, v46, v47, v48, v49, v50, v51);
        v53 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_QuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v53,
          (Il2CppObject *)v44,
          Method_clsQuestCheck___c__DisplayClass33_1__GetReleasedQuestEntityListByServantGet_b__1__,
          0);
        Instance = (QuestReleaseEntity_array *)BasicHelper__Any_object_(
                                                 (System_Collections_Generic_List_T__o *)v10,
                                                 (System_Func_T__bool__o *)v53,
                                                 (const MethodInfo_3159728 *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = *v52;
          if ( !*v52 )
            goto LABEL_49;
          Instance = (QuestReleaseEntity_array *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0);
          if ( ((unsigned int)Instance & typeFlag) != 0 )
          {
            Instance = (QuestReleaseEntity_array *)clsQuestCheck__IsQuestRelease(this, v45, -1, 0, v54);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v10 )
                goto LABEL_49;
              v6 = (Il2CppObject *)*v52;
              v61 = v10->fields._items;
              v62 = Method_System_Collections_Generic_List_QuestEntity__Add__;
              ++v10->fields._version;
              if ( !v61 )
                goto LABEL_49;
              v63 = v10->fields._size;
              if ( (unsigned int)v63 >= LODWORD(v61->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v10,
                  v6,
                  *(const MethodInfo_383EDFC **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
              }
              else
              {
                v64 = &v61->obj.klass + v63;
                v10->fields._size = v63 + 1;
                v64[4] = (Il2CppClass *)v6;
                sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v64 + 4), (int32_t)v6, v55, v56, v57, v58, v59, v60);
              }
            }
          }
        }
      }
      v40 = v38->max_length;
      if ( (int)++v41 >= v40 )
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
  bool v9; // w22
  unsigned int v10; // w21
  struct System_Int32_array *itemIds; // x8
  QuestMaster_o *v12; // x8
  BalanceConfig_c *v13; // x0
  int32_t MasterKind_k__BackingField; // w22
  QuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CEAE1F & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    byte_4CEAE1F = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestMaster___);
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
  v7 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !ItemConsumeEntity )
    return 0;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)v7;
  Master_object = (QuestMaster_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0);
  v9 = 0;
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v10 = 0;
    while ( 1 )
    {
      itemIds = ItemConsumeEntity->fields.itemIds;
      if ( !itemIds )
        break;
      if ( v10 >= LODWORD(itemIds->max_length) )
        sub_1C7BD48(Master_object);
      if ( !v8 )
        break;
      Master_object = (QuestMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                         v8,
                                         itemIds->m_Items[v10],
                                         (const MethodInfo_342E2FC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Master_object )
        break;
      v12 = Master_object;
      v13 = BalanceConfig_TypeInfo;
      MasterKind_k__BackingField = v12->fields._MasterKind_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v13 = BalanceConfig_TypeInfo;
      }
      v9 = MasterKind_k__BackingField == v13->static_fields->stormPodItemId;
      if ( !v9 )
      {
        Master_object = (QuestMaster_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v10, 0);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          continue;
      }
      return v9;
    }
LABEL_26:
    sub_1C7BD40(Master_object, v5);
  }
  return v9;
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

  if ( (byte_4CEAE1C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserPrivilegeMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CEAE1C = 1;
  }
  v14 = 0;
  entity = 0;
  v12 = 0;
  startAt = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
  v10 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserPrivilegeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
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
    sub_1C7BD40(Master_object, v7);
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
  const MethodInfo *v14; // x4
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v16; // x20
  unsigned __int64 v17; // x21

  if ( (byte_4CEAE00 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4CEAE00 = 1;
  }
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_18;
  v9 = (EventRaidMaster_o *)Instance;
  RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId((EventRaidMaster_o *)Instance, eventId, day, 0);
  Instance = (System_Int32_array *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
    sub_1C7BD40(Instance, v8);
  max_length = Instance->max_length;
  v16 = Instance;
  if ( (int)max_length < 1 )
  {
    LOBYTE(Instance) = 0;
  }
  else
  {
    v17 = 0;
    do
    {
      if ( v17 >= (unsigned int)max_length )
        sub_1C7BD48(Instance);
      Instance = (System_Int32_array *)clsQuestCheck__IsQuestRelease(this, v16->m_Items[v17], -1, 0, v14);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      LODWORD(max_length) = v16->max_length;
      ++v17;
    }
    while ( (__int64)v17 < (int)max_length );
  }
  return (unsigned __int8)Instance & 1;
}


bool clsQuestCheck__IsLastWarClear(clsQuestCheck_o *this, const MethodInfo *method)
{
  clsQuestCheck_o *Value; // x0
  const MethodInfo *v3; // x2

  if ( (byte_4CEAE02 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_8279/*"LAST_WAR_ID"*/);
    byte_4CEAE02 = 1;
  }
  Value = (clsQuestCheck_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8279/*"LAST_WAR_ID"*/, 0);
  return clsQuestCheck__IsWarClear(Value, (int32_t)Value, v3);
}


bool clsQuestCheck__IsMainInterlude(clsQuestCheck_o *this, int32_t war_id, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4CEAE03 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEAE03 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_WarMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v5);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             war_id,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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

  if ( (byte_4CEAE09 & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_1C7BAE8(&CondType_TypeInfo);
    byte_4CEAE09 = 1;
  }
  v6 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_40887944(qid, v6, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
bool clsQuestCheck__IsQuestClearRaw(
        clsQuestCheck_o *this,
        int32_t qid,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  int32_t v6; // w20

  if ( (byte_4CEAE0A & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_1C7BAE8(&CondType_TypeInfo);
    byte_4CEAE0A = 1;
  }
  v6 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_40887944(qid, v6, 0, 0);
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

  if ( (byte_4CEAE0B & 1) == 0 )
  {
    sub_1C7BAE8(&CondType_TypeInfo);
    this = (clsQuestCheck_o *)sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CEAE0B = 1;
  }
  v8 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, *(const MethodInfo **)&phase);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
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

  if ( (byte_4CEADFF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__getEntityList__);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_QuestReleaseEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    byte_4CEADFF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object || (monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor) == 0 )
    sub_1C7BD40(Master_object, v10);
  v12 = System_Collections_ObjectModel_Collection_object___get_Count(
          (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor,
          (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__) > 0;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 monitor,
                 (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C7BD40(0, v13);
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
      v18 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v22 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_QuestReleaseEntity__TypeInfo, 0);
    }
    v23 = (QuestReleaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                                    Enumerator,
                                    *(_QWORD *)(v22 + 8));
    if ( !v23 )
      sub_1C7BD40(0, v24);
    if ( v23->fields.questId == quest_id )
    {
      if ( old_val < 0 )
        v26 = -1;
      else
        v26 = v23->fields.type == old_val_qr_type ? old_val : -1;
      if ( !clsQuestCheck__IsQuestRelease_36353916(this, v23, v26, 0, v25) )
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
    v30 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return v12;
}


bool clsQuestCheck__IsQuestRelease_36348856(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        MapControl_QuestInfo_o *qinf,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_36353916(this, qrd, -1, qinf, v4);
}


bool clsQuestCheck__IsQuestRelease_36353024(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        int32_t old_val,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_36353916(this, qrd, old_val, 0, v4);
}


bool clsQuestCheck__IsQuestRelease_36353916(
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

  if ( (byte_4CEAE05 & 1) == 0 )
  {
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    this = (clsQuestCheck_o *)sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEAE05 = 1;
  }
  entity = 0;
  sameGroupQuestIds = 0;
  v43 = 0;
  is_release = 0;
  if ( !qrd )
LABEL_101:
    sub_1C7BD40(this, qrd);
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
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_101;
        v27 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                qrd->fields.questId,
                (const MethodInfo_342E2FC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v27 )
          return is_release;
        v28 = (int32_t *)v27;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Time = NetworkManager__getTime(0);
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestAddMaster___);
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
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_101;
        v34 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                qrd->fields.questId,
                (const MethodInfo_342E2FC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventRaidMaster___);
        if ( !this )
          goto LABEL_101;
        if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)this, &entity, v11, v12, 0) )
          return is_release;
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
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

  if ( (byte_4CEAE1B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEAE1B = 1;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  IsQuestReleaseAll = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    IsQuestReleaseAll = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
LABEL_28:
    sub_1C7BD40(IsQuestReleaseAll, v7);
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

  if ( (byte_4CEADFE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CEADFE = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !loginQuestEnt || !Master_object )
    goto LABEL_24;
  p_fields = &this->fields;
  QuestReleaseMaster__getListByQuestID_43092084(Master_object, loginQuestEnt->fields.questId, &this->fields.qrs, 0);
  if ( !this->fields.qrs )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (QuestReleaseMaster_o *)NetworkManager__getTime(0);
  qrs = (System_Collections_Generic_List_object__o *)p_fields->qrs;
  if ( !p_fields->qrs )
LABEL_24:
    sub_1C7BD40(Master_object, v6);
  v9 = (int64_t)Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    qrs,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v10 )
      break;
    if ( !v15.fields._current )
      sub_1C7BD40(v10, v11);
    if ( *(_DWORD *)((char *)&v15.fields._current->klass + (unsigned __int64)&dword_14) == 12 )
    {
      if ( !LoginQuestEntity__IsEnablePeriod(loginQuestEnt, v9, 0) )
        goto LABEL_18;
    }
    else if ( !clsQuestCheck__IsQuestRelease_36353916(this, (QuestReleaseEntity_o *)v15.fields._current, -1, 0, v12) )
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
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v13 != 6;
}


bool clsQuestCheck__IsReleasedQuest(
        clsQuestCheck_o *this,
        int32_t questId,
        bool isIncludeTempData,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_List_QuestReleaseEntity__o *qrs; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x4
  int klass_high; // w9
  int32_t monitor; // w22
  Il2CppClass *klass; // x21
  uint32_t cctor_finished; // w8
  int v18; // w19
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CEADFB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1C7BAE8(&clsQuestCheck_TypeInfo);
    byte_4CEADFB = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object )
    sub_1C7BD40(0, v8);
  QuestReleaseMaster__getListByQuestID_43092084((QuestReleaseMaster_o *)Master_object, questId, &this->fields.qrs, 0);
  qrs = this->fields.qrs;
  if ( qrs )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      (System_Collections_Generic_List_object__o *)qrs,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    v21 = v20;
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
      if ( !v10 )
        break;
      if ( !v21.fields._current )
        sub_1C7BD40(v10, v11);
      klass_high = HIDWORD(v21.fields._current[1].klass);
      if ( (unsigned int)(klass_high - 101) <= 1 && isIncludeTempData )
      {
        monitor = (int32_t)v21.fields._current[1].monitor;
        klass = v21.fields._current[2].klass;
        cctor_finished = clsQuestCheck_TypeInfo->_2.cctor_finished;
        if ( klass_high == 101 )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
          if ( !clsQuestCheck__IsRouteSelectIncludeTempData(monitor, (int32_t)klass, v12) )
            goto LABEL_22;
        }
        else
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
          if ( clsQuestCheck__IsRouteSelectIncludeTempData(monitor, (int32_t)klass, v12) )
          {
LABEL_22:
            v18 = 9;
            goto LABEL_24;
          }
        }
      }
      else if ( !clsQuestCheck__IsQuestRelease_36353916(this, (QuestReleaseEntity_o *)v21.fields._current, -1, 0, v13) )
      {
        goto LABEL_22;
      }
    }
    v18 = 10;
LABEL_24:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    LOBYTE(qrs) = v18 != 9;
  }
  return (char)qrs;
}


bool clsQuestCheck__IsRouteSelectIncludeTempData(int32_t questId, int32_t routeId, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_IList_int__o *v7; // x20
  const MethodInfo *v8; // x4
  System_Collections_Generic_IList_int__o *v9; // x21

  if ( (byte_4CEADFC & 1) == 0 )
  {
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&clsQuestCheck_TypeInfo);
    byte_4CEADFC = 1;
  }
  v5 = sub_1C7BB90(int___TypeInfo, 1);
  if ( !v5 )
    goto LABEL_10;
  v7 = (System_Collections_Generic_IList_int__o *)v5;
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_11;
  *(_DWORD *)(v5 + 32) = questId;
  v5 = sub_1C7BB90(int___TypeInfo, 1);
  if ( !v5 )
LABEL_10:
    sub_1C7BD40(v5, v6);
  v9 = (System_Collections_Generic_IList_int__o *)v5;
  if ( !*(_DWORD *)(v5 + 24) )
LABEL_11:
    sub_1C7BD48(v5);
  *(_DWORD *)(v5 + 32) = routeId;
  if ( !clsQuestCheck_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
  return clsQuestCheck__IsRouteSelectIncludeTempData_36349688(v7, v9, 1, 0, v8);
}


bool clsQuestCheck__IsRouteSelectIncludeTempData_36349688(
        System_Collections_Generic_IList_int__o *questIds,
        System_Collections_Generic_IList_int__o *routeIds,
        int32_t count,
        int32_t checkType,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v8; // x23
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_IList_int__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x24
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  System_Collections_Generic_IList_int__c *v28; // x8
  int v29; // w27
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x26
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  int32_t v43; // w28
  ScriptManager_c *v44; // x8
  System_Collections_ICollection_o *SelectRouteArray; // x0
  System_Int32_array *v46; // x0
  __int64 v47; // x1
  int max_length; // w9
  int v49; // w10
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  int32_t v59; // [xsp+8h] [xbp-78h]

  if ( (byte_4CEADFD & 1) == 0 )
  {
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    byte_4CEADFD = 1;
  }
  v8 = (System_Collections_Generic_HashSet_int__o *)sub_1C7BD34(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v8,
    (const MethodInfo_36E9940 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !questIds )
    sub_1C7BD40(v9, v10);
  klass = questIds->klass;
  v59 = count;
  v12 = *(unsigned __int16 *)&questIds->klass->_2.rank;
  if ( *(_WORD *)&questIds->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_8;
    }
    v14 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v14 = sub_1C51E70(questIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v14)(
          questIds,
          *(_QWORD *)(v14 + 8));
  v17 = v15;
  while ( 1 )
  {
    if ( !v17 )
      sub_1C7BD40(v15, v16);
    v18 = *(_QWORD *)v17;
    v19 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
    {
      v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_16;
      }
      v21 = v18 + 16LL * *v20 + 312;
    }
    else
    {
LABEL_16:
      v21 = sub_1C51E70(v17, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8)) & 1) == 0 )
      break;
    v22 = *(_QWORD *)v17;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v24 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_23;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_23:
      v25 = sub_1C51E70(v17, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v17, *(_QWORD *)(v25 + 8));
    if ( !routeIds )
      sub_1C7BD40(v26, v27);
    v28 = routeIds->klass;
    v29 = v26;
    v30 = *(unsigned __int16 *)&routeIds->klass->_2.rank;
    if ( *(_WORD *)&routeIds->klass->_2.rank )
    {
      v31 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)v31 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_30;
      }
      v32 = (__int64)&v28->vtable[*v31];
    }
    else
    {
LABEL_30:
      v32 = sub_1C51E70(routeIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
    }
    v34 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v32)(
            routeIds,
            *(_QWORD *)(v32 + 8));
    if ( !v34 )
      sub_1C7BD40(0, v33);
    while ( 1 )
    {
LABEL_33:
      v35 = *(_QWORD *)v34;
      v36 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
      {
        v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v37 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v36;
          v37 += 4;
          if ( !v36 )
            goto LABEL_37;
        }
        v38 = v35 + 16LL * *v37 + 312;
      }
      else
      {
LABEL_37:
        v38 = sub_1C51E70(v34, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v34, *(_QWORD *)(v38 + 8)) & 1) == 0 )
        break;
      v39 = *(_QWORD *)v34;
      v40 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
      {
        v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_int__c **)v41 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
        {
          --v40;
          v41 += 4;
          if ( !v40 )
            goto LABEL_44;
        }
        v42 = v39 + 16LL * *v41 + 312;
      }
      else
      {
LABEL_44:
        v42 = sub_1C51E70(v34, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
      }
      v43 = (*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v34, *(_QWORD *)(v42 + 8));
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      if ( !byte_4CEAE35 )
      {
        sub_1C7BAE8(&ScriptManager_TypeInfo);
        byte_4CEAE35 = 1;
      }
      v44 = ScriptManager_TypeInfo;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        v44 = ScriptManager_TypeInfo;
      }
      if ( v44->static_fields->questId == v29 )
      {
        if ( !v44->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v44);
        SelectRouteArray = (System_Collections_ICollection_o *)ScriptManager__GetSelectRouteArray(0);
        if ( !BasicHelper__IsNullOrEmpty(SelectRouteArray, 0) )
        {
          if ( !ScriptManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
          v46 = ScriptManager__GetSelectRouteArray(0);
          if ( !v46 )
            sub_1C7BD40(0, v47);
          max_length = v46->max_length;
          if ( max_length >= 1 )
          {
            v49 = 0;
            while ( 1 )
            {
              if ( max_length == v49 )
                sub_1C7BD48(v46);
              if ( v43 == v46->m_Items[v49] )
                break;
              if ( max_length == ++v49 )
                goto LABEL_33;
            }
            if ( !v8 )
              sub_1C7BD40(v46, v47);
            System_Collections_Generic_HashSet_int___Add(
              v8,
              v43,
              (const MethodInfo_36EAB44 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
        }
      }
    }
    v50 = *(_QWORD *)v34;
    v51 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
    {
      v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
      {
        --v51;
        v52 += 4;
        if ( !v51 )
          goto LABEL_71;
      }
      v53 = v50 + 16LL * *v52 + 312;
    }
    else
    {
LABEL_71:
      v53 = sub_1C51E70(v34, System_IDisposable_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v34, *(_QWORD *)(v53 + 8));
  }
  v54 = *(_QWORD *)v17;
  v55 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
  {
    v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
    {
      --v55;
      v56 += 4;
      if ( !v55 )
        goto LABEL_82;
    }
    v57 = v54 + 16LL * *v56 + 312;
  }
  else
  {
LABEL_82:
    v57 = sub_1C51E70(v17, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v57)(v17, *(_QWORD *)(v57 + 8));
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsRouteSelect_40953472(questIds, routeIds, v59, checkType, v8, 0);
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t ScriptIntParam; // w22
  int v20; // w8
  clsQuestCheck_c *v22; // x0
  System_String_o *KEY_QUEST_START_EFFECT; // x21
  System_String_o *String; // x21
  System_String_array *v25; // x0
  System_Object_array *v26; // x23
  System_Func_object__bool__o *v27; // x20
  Il2CppObject *object; // x20
  System_String_o *v29; // x0
  char v30; // w8
  System_String_o *v31; // x19
  clsQuestCheck_c *v32; // x0
  System_String_o *v33; // x20
  Il2CppObject *v34; // [xsp+0h] [xbp-50h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CEAE18 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Find_string___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C7BAE8(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C7BAE8(&System_Func_string__bool__TypeInfo);
    sub_1C7BAE8(&Method_clsQuestCheck___c__DisplayClass42_0__IsTapSkipQuestStart_b__0__);
    sub_1C7BAE8(&clsQuestCheck___c__DisplayClass42_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_23087/*"questStartEffectSkip"*/);
    sub_1C7BAE8(&StringLiteral_1042/*"/"*/);
    sub_1C7BAE8(&clsQuestCheck_TypeInfo);
    byte_4CEAE18 = 1;
  }
  v34 = 0;
  entity = 0;
  v10 = sub_1C7BD34(clsQuestCheck___c__DisplayClass42_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !v10 )
    goto LABEL_41;
  *(_QWORD *)(v10 + 16) = effectName;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v10 + 16), (int32_t)effectName, v13, v14, v15, v16, v17, v18);
  if ( isMyRoomMaterial )
    return 0;
  if ( questPhase <= 1 )
    questPhase = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_41;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, questId, questPhase, 0) )
    goto LABEL_44;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_41;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_23087/*"questStartEffectSkip"*/, 0, 0);
  if ( !ScriptIntParam )
  {
LABEL_44:
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !Master_object )
      goto LABEL_41;
    Master_object = (QuestPhaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            &v34,
                                            questId,
                                            (const MethodInfo_342E348 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !v34 )
        goto LABEL_41;
      v20 = LODWORD(v34[2].monitor) - 1;
      if ( (unsigned int)v20 > 7 )
        ScriptIntParam = 0;
      else
        ScriptIntParam = dword_D287A4[v20];
      goto LABEL_22;
    }
    return 0;
  }
LABEL_22:
  v22 = clsQuestCheck_TypeInfo;
  if ( !clsQuestCheck_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
    v22 = clsQuestCheck_TypeInfo;
  }
  KEY_QUEST_START_EFFECT = v22->static_fields->KEY_QUEST_START_EFFECT;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  String = EncryptedPlayerPrefs__GetString(KEY_QUEST_START_EFFECT, 0);
  Master_object = (QuestPhaseMaster_o *)System_String__IsNullOrEmpty(String, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    goto LABEL_31;
  if ( !String )
LABEL_41:
    sub_1C7BD40(Master_object, v12);
  v25 = System_String__Split(String, 0x2Fu, 0, 0);
  if ( !v25 )
  {
LABEL_31:
    v31 = *(System_String_o **)(v10 + 16);
LABEL_32:
    v32 = clsQuestCheck_TypeInfo;
    if ( !clsQuestCheck_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
      v32 = clsQuestCheck_TypeInfo;
    }
    v33 = v32->static_fields->KEY_QUEST_START_EFFECT;
    if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    EncryptedPlayerPrefs__SetString(v33, v31, 0);
    UnityEngine_PlayerPrefs__Save(0);
    v30 = 1;
    goto LABEL_37;
  }
  v26 = (System_Object_array *)v25;
  v27 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v27,
    (Il2CppObject *)v10,
    Method_clsQuestCheck___c__DisplayClass42_0__IsTapSkipQuestStart_b__0__,
    0);
  object = BasicHelper__Find_object_(
             v26,
             (System_Func_T__bool__o *)v27,
             (const MethodInfo_315A2F4 *)Method_BasicHelper_Find_string___);
  v29 = System_String__Concat_64215176(
          String,
          (System_String_o *)StringLiteral_1042/*"/"*/,
          *(System_String_o **)(v10 + 16),
          0);
  if ( !object )
  {
    v31 = v29;
    goto LABEL_32;
  }
  v30 = 0;
LABEL_37:
  if ( ScriptIntParam == 1 )
    return 1;
  else
    return (ScriptIntParam == 2) & (v30 ^ 1);
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

  if ( (byte_4CEADF9 & 1) == 0 )
  {
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestRandomGroupMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEADF9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestRandomGroupMaster___);
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
    if ( !byte_4CEAE34 )
    {
      sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
      byte_4CEAE34 = 1;
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
            (const MethodInfo_347EE44 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    cctor_finished = TerminalPramsManager_TypeInfo->_2.cctor_finished;
    if ( v11 )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4CEAE34 )
      {
        sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
        byte_4CEAE34 = 1;
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
               (const MethodInfo_347EBBC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsQuestClear_40887944(Item, -1, 0, 0) )
        goto LABEL_44;
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4CEAE34 )
      {
        sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
        byte_4CEAE34 = 1;
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
        (const MethodInfo_347EC58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
    RandomRangeQuest = QuestRandomGroupMaster__GetRandomRangeQuest(v6, randomGroupId, 0);
    if ( RandomRangeQuest )
    {
      v17 = RandomRangeQuest;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4CEAE34 )
      {
        sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
        byte_4CEAE34 = 1;
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
        (const MethodInfo_347EC44 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      TerminalPramsManager__SaveQuestRandomGroupList(0);
LABEL_44:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4CEAE34 )
      {
        sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
        byte_4CEAE34 = 1;
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
                                     (const MethodInfo_347EBBC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) == v8->fields.questId;
        return (char)RandomRangeQuest;
      }
LABEL_53:
      sub_1C7BD40(Instance, v5);
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

  if ( (byte_4CEAE01 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEAE01 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_WarMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v5);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             war_id,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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

  if ( (byte_4CEAE1D & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&StringLiteral_10955/*"QUEST_TIME_OVER"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEAE1D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10955/*"QUEST_TIME_OVER"*/, 0);
  if ( !Instance )
    sub_1C7BD40(v5, v6);
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

  if ( (byte_4CEAE17 & 1) == 0 )
  {
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEAE17 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CE8917 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CE8917 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v4->static_fields->_WarId_k__BackingField;
  if ( !byte_4CE84EC )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4CE84EC = 1;
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

  if ( (byte_4CEAE1A & 1) == 0 )
  {
    sub_1C7BAE8(&BattleRootComponent_TypeInfo);
    sub_1C7BAE8(&BattleSetupInfo_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEAE1A = 1;
  }
  if ( result == 2 )
  {
    if ( clsQuestCheck__CheckQuestPlayable(this, qinf, endTime, boostId, *(const MethodInfo **)&boostId) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4CE8917 )
      {
        sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
        byte_4CE8917 = 1;
      }
      v16 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
      }
      WarId_k__BackingField = v16->static_fields->_WarId_k__BackingField;
      if ( !byte_4CE84EC )
      {
        sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
        byte_4CE84EC = 1;
      }
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = TerminalPramsManager_TypeInfo;
      }
      QuestId_k__BackingField = v16->static_fields->_QuestId_k__BackingField;
      if ( !byte_4CE84EB )
      {
        sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
        byte_4CE84EB = 1;
      }
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = TerminalPramsManager_TypeInfo;
      }
      PhaseCnt_k__BackingField = v16->static_fields->_PhaseCnt_k__BackingField;
      v20 = (BattleSetupInfo_o *)sub_1C7BD34(BattleSetupInfo_TypeInfo);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance
        || (*((_BYTE *)Instance + 148) = 1,
            (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__)) == 0)
        || (*((_DWORD *)Instance + 38) = 1,
            (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
      {
LABEL_38:
        sub_1C7BD40(Instance, v12);
      }
      AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 35, 1, v21, 0);
    }
LABEL_36:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0);
      return;
    }
    goto LABEL_38;
  }
  if ( result )
    goto LABEL_36;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    Instance = *(void **)(v15 + 536);
    if ( !Instance )
      goto LABEL_38;
    BattleResultComponent__EndResult((BattleResultComponent_o *)Instance, 0);
    goto LABEL_36;
  }
  sub_1C7C0DC(*((_QWORD *)Instance + 4));
  clsQuestCheck__IsEnabledPrivilegePeriod(v22, v23, v24, v25);
}


void clsQuestCheck__RefreshTerminalScene(clsQuestCheck_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CEAE1E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CEAE1E = 1;
  }
  TopLoginRequest__ResetAccesTime(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v3);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


void clsQuestCheck__SaveEventQuestIdListPlayable(clsQuestCheck_o *this, int32_t eventId, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v10; // x21
  TerminalPramsManager_c *v11; // x0
  GrandQuestFolderBoardItem_o *p_ClearEventQuestIds_k__BackingField; // x0
  const MethodInfo *v13; // x2
  System_Collections_Generic_IEnumerable_T__o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_String_o *v21; // x19
  TerminalPramsManager_c *v22; // x0
  GrandQuestFolderBoardItem_o *v23; // x0

  if ( (byte_4CEAE13 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_String_Join_int___);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_809/*","*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEAE13 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v10 = StringLiteral_1/*""*/;
  if ( !byte_4CEAE36 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEAE36 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  p_ClearEventQuestIds_k__BackingField = (GrandQuestFolderBoardItem_o *)&v11->static_fields->_ClearEventQuestIds_k__BackingField;
  p_ClearEventQuestIds_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v10;
  sub_1C7BA8C(p_ClearEventQuestIds_k__BackingField, v10, (int32_t)method, v3, v4, v5, v6, v7);
  v14 = (System_Collections_Generic_IEnumerable_T__o *)clsQuestCheck__GetEventQuestIdListPlayable(this, eventId, v13);
  v21 = System_String__Join_int_(
          (System_String_o *)StringLiteral_809/*","*/,
          v14,
          (const MethodInfo_321B12C *)Method_System_String_Join_int___);
  if ( !byte_4CEAE36 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEAE36 = 1;
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = TerminalPramsManager_TypeInfo;
  }
  v23 = (GrandQuestFolderBoardItem_o *)&v22->static_fields->_ClearEventQuestIds_k__BackingField;
  v23->klass = (GrandQuestFolderBoardItem_c *)v21;
  sub_1C7BA8C(v23, (int32_t)v21, v15, v16, v17, v18, v19, v20);
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

  if ( (byte_4CEAE06 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEAE06 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !qrd )
    goto LABEL_17;
  v10 = (UserItemMaster_o *)Instance;
  targetId = qrd->fields.targetId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
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
    sub_1C7BD40(Instance, v9);
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

  if ( (byte_4CEAE16 & 1) == 0 )
  {
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEAE16 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CE8917 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CE8917 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v3->static_fields->_WarId_k__BackingField;
  if ( !byte_4CE84EC )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4CE84EC = 1;
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

  if ( (byte_4CEAE07 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEAE07 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
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
    sub_1C7BD40(Instance, v5);
  }
  return 1;
}


int32_t clsQuestCheck__mfGetQuestPhaseByQuestID(clsQuestCheck_o *this, int32_t qid, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEAE08 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEAE08 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
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
    sub_1C7BD40(Instance, v5);
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

  if ( (byte_4CEAE04 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEAE04 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               qid,
                               (const MethodInfo_342E348 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 1;
  if ( !entity )
LABEL_12:
    sub_1C7BD40(Instance, v5);
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
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v12; // x2
  void *Master_object; // x0
  __int64 v14; // x1
  _BOOL8 IsShop; // x0
  const MethodInfo *v16; // x2
  Il2CppObject *v17; // x23
  bool result; // w0
  clsQuestCheck_Fields *p_fields; // x23
  int32_t UseDiceSpotId; // w24
  System_Collections_Generic_List_T__o *qrs; // x24
  clsQuestCheck___c_c *v22; // x0
  System_Func_object__bool__o *_9__5_0; // x25
  Il2CppObject *v24; // x26
  struct clsQuestCheck___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct BalanceConfig_StaticFields *v32; // x8
  QuestEntity_o *Mine; // x0
  UserEventQuestCooltimeMaster_o *v34; // x24
  UserEventQuestCooltimeEntity_o *v35; // x0
  UserEventQuestCooltimeEntity_o *v36; // x24
  int64_t Time; // x0
  int64_t clearedAt; // x26
  int64_t v39; // x25
  int32_t v40; // w2
  int v41; // w8
  struct System_Collections_Generic_List_QuestReleaseEntity__o *cQuestReleaseListP; // x23
  System_Comparison_T__o *v43; // x24
  Il2CppObject *v44; // x25
  struct clsQuestCheck___c_StaticFields *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  UserQuestEntity_o *v52; // x0
  Il2CppObject *v53; // x23
  bool v54; // w23
  _BOOL8 v55; // x0
  __int64 v56; // x1
  const MethodInfo *v57; // x4
  Il2CppObject *current; // x22
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  int v65; // w19
  int32_t klass; // w24
  System_Collections_Generic_IEnumerable_T__o *v67; // x25
  System_Collections_Generic_List_object__o *v68; // x24
  const MethodInfo *v69; // x3
  BalanceConfig_c *v70; // x0
  const MethodInfo *v71; // x3
  bool v72; // w8
  BalanceConfig_c *v73; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  bool v80; // w8
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+8h] [xbp-88h] BYREF
  Il2CppObject *v82; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF
  UserQuestEntity_o *v84; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4CEADF8 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_BasicHelper_Any_QuestReleaseEntity___);
    sub_1C7BAE8(&System_Comparison_QuestReleaseEntity__TypeInfo);
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1C7BAE8(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___78747400);
    sub_1C7BAE8(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__);
    sub_1C7BAE8(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__);
    sub_1C7BAE8(&clsQuestCheck___c_TypeInfo);
    byte_4CEADF8 = 1;
  }
  v82 = 0;
  entity = 0;
  memset(&v81, 0, sizeof(v81));
  *questReleaseNG = 0;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)questReleaseNG,
    0,
    (int32_t)questReleaseNG,
    (int32_t)questInfo,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, v12) )
    return 0;
  v84 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !questInfo || !Master_object )
    goto LABEL_107;
  IsShop = DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             questInfo->fields.warId,
             (const MethodInfo_342E348 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
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
      v17 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CE827C )
      {
        sub_1C7BAE8(&NetworkManager_TypeInfo);
        byte_4CE827C = 1;
      }
      Master_object = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Master_object = NetworkManager_TypeInfo;
      }
      if ( !v17 )
        goto LABEL_107;
      IsShop = UserQuestMaster__TryGetEntity(
                 (UserQuestMaster_o *)v17,
                 &v84,
                 *(_QWORD *)(*((_QWORD *)Master_object + 23) + 64LL),
                 questId,
                 0);
      if ( IsShop )
      {
        Master_object = v84;
        if ( !v84 )
          goto LABEL_107;
        IsShop = UserQuestEntity__IsNotExpired(v84, 0);
        if ( IsShop )
          return 1;
      }
    }
  }
  if ( !clsQuestCheck__IsValidQuestRandomGroup((clsQuestCheck_o *)IsShop, questInfo, v16) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object )
    goto LABEL_107;
  p_fields = &this->fields;
  QuestReleaseMaster__getListByQuestID_43092084((QuestReleaseMaster_o *)Master_object, questId, &this->fields.qrs, 0);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !entity || !Master_object )
    goto LABEL_107;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &v82,
         (int32_t)entity[6].klass,
         (const MethodInfo_342E348 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Master_object = v82;
    if ( !v82 )
      goto LABEL_107;
    if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v82, 0) )
    {
      Master_object = v82;
      if ( !v82 )
        goto LABEL_107;
      UseDiceSpotId = EventDetailEntity__GetUseDiceSpotId((EventDetailEntity_o *)v82, 0);
      if ( UseDiceSpotId == MapControl_QuestInfo__GetSpotID(questInfo, 0)
        && MapControl_QuestInfo__GetQuestType(questInfo, 0) == 1 )
      {
        qrs = (System_Collections_Generic_List_T__o *)p_fields->qrs;
        v22 = clsQuestCheck___c_TypeInfo;
        if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
          v22 = clsQuestCheck___c_TypeInfo;
        }
        _9__5_0 = (System_Func_object__bool__o *)v22->static_fields->__9__5_0;
        if ( !_9__5_0 )
        {
          if ( !v22->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v22);
            v22 = clsQuestCheck___c_TypeInfo;
          }
          v24 = (Il2CppObject *)v22->static_fields->__9;
          _9__5_0 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_QuestReleaseEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__5_0,
            v24,
            Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__,
            0);
          static_fields = clsQuestCheck___c_TypeInfo->static_fields;
          static_fields->__9__5_0 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__5_0;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&static_fields->__9__5_0,
            (int32_t)_9__5_0,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31);
        }
        if ( !BasicHelper__Any_object_(
                qrs,
                (System_Func_T__bool__o *)_9__5_0,
                (const MethodInfo_3159728 *)Method_BasicHelper_Any_QuestReleaseEntity___) )
        {
          Master_object = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Master_object = BalanceConfig_TypeInfo;
          }
          v32 = (struct BalanceConfig_StaticFields *)*((_QWORD *)Master_object + 23);
          if ( v32->EventBoardGameNextBoardQuestId != questId )
          {
            if ( !*((_DWORD *)Master_object + 56) )
            {
              j_il2cpp_runtime_class_init_0(Master_object);
              v32 = BalanceConfig_TypeInfo->static_fields;
            }
            if ( v32->EventBoardGameNextRoundQuestId != questId )
            {
              if ( !entity )
                goto LABEL_107;
              klass = (int32_t)entity[6].klass;
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              if ( CondType__IsUserEventStatus(klass, 7, 0) )
                return 0;
              v67 = (System_Collections_Generic_IEnumerable_T__o *)p_fields->qrs;
              v68 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor_58975984(
                v68,
                v67,
                (const MethodInfo_383E6F0 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___78747400);
              v70 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v70 = BalanceConfig_TypeInfo;
              }
              v72 = clsQuestCheck__CheckQuestPlayableNow(
                      this,
                      v70->static_fields->EventBoardGameNextBoardQuestId,
                      0,
                      v69);
              result = 0;
              if ( v72 )
                return result;
              v73 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v73 = BalanceConfig_TypeInfo;
              }
              v80 = clsQuestCheck__CheckQuestPlayableNow(
                      this,
                      v73->static_fields->EventBoardGameNextRoundQuestId,
                      0,
                      v71);
              result = 0;
              if ( v80 )
                return result;
              p_fields->qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v68;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v68, v74, v75, v76, v77, v78, v79);
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___);
    if ( !questInfo->fields._WarInfo_k__BackingField )
      goto LABEL_107;
    v34 = (UserEventQuestCooltimeMaster_o *)Master_object;
    Master_object = (void *)MapControl_WarInfo__GetEventId(questInfo->fields._WarInfo_k__BackingField, 0);
    if ( !v34 )
      goto LABEL_107;
    v35 = UserEventQuestCooltimeMaster__getEntity(v34, (int32_t)Master_object, questInfo->fields.questId, 1, 0);
    if ( v35 )
    {
      v36 = v35;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0);
      clearedAt = v36->fields.clearedAt;
      v39 = Time;
      Master_object = UserEventQuestCooltimeEntity__GetMasterEntity(v36, 0);
      if ( !Master_object )
        goto LABEL_107;
      if ( v39 < clearedAt + *((int *)Master_object + 7) )
        return 0;
    }
  }
  if ( !p_fields->qrs )
    return 0;
  Master_object = this->fields.cQuestReleaseListP;
  if ( !Master_object )
    goto LABEL_107;
  v40 = *((_DWORD *)Master_object + 6);
  v41 = *((_DWORD *)Master_object + 7) + 1;
  *((_DWORD *)Master_object + 6) = 0;
  *((_DWORD *)Master_object + 7) = v41;
  if ( v40 >= 1 )
  {
    System_Array__Clear(*((System_Array_o **)Master_object + 2), 0, v40, 0);
    Master_object = this->fields.cQuestReleaseListP;
    if ( !Master_object )
      goto LABEL_107;
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Master_object,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.qrs,
    (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__);
  cQuestReleaseListP = this->fields.cQuestReleaseListP;
  Master_object = clsQuestCheck___c_TypeInfo;
  if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
    Master_object = clsQuestCheck___c_TypeInfo;
  }
  v43 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 16LL);
  if ( !v43 )
  {
    if ( !*((_DWORD *)Master_object + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = clsQuestCheck___c_TypeInfo;
    }
    v44 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
    v43 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_QuestReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(
      v43,
      v44,
      Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__,
      0);
    v45 = clsQuestCheck___c_TypeInfo->static_fields;
    v45->__9__5_1 = (struct System_Comparison_QuestReleaseEntity__o *)v43;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v45->__9__5_1, (int32_t)v43, v46, v47, v48, v49, v50, v51);
  }
  if ( !cQuestReleaseListP )
    goto LABEL_107;
  System_Collections_Generic_List_object___Sort_58984640(
    (System_Collections_Generic_List_object__o *)cQuestReleaseListP,
    v43,
    (const MethodInfo_38408C0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  v52 = v84;
  if ( v84 )
  {
LABEL_82:
    v54 = !UserQuestEntity__HasStatus(v52, 8, 0);
    goto LABEL_83;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v53 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  Master_object = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = NetworkManager_TypeInfo;
  }
  if ( !v53 )
LABEL_107:
    sub_1C7BD40(Master_object, v14);
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)v53,
    &v84,
    *(_QWORD *)(*((_QWORD *)Master_object + 23) + 64LL),
    questId,
    0);
  v52 = v84;
  if ( v84 )
    goto LABEL_82;
  v54 = 1;
LABEL_83:
  Master_object = this->fields.cQuestReleaseListP;
  if ( !Master_object )
    goto LABEL_107;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v81,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v55 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v81,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v55 )
      break;
    current = v81.fields._current;
    if ( v54 )
      goto LABEL_89;
    if ( !v81.fields._current )
      sub_1C7BD40(v55, v56);
    if ( *(_DWORD *)((char *)&v81.fields._current->klass + (unsigned __int64)&dword_14) != 12 )
    {
LABEL_89:
      if ( !clsQuestCheck__IsQuestRelease_36353916(
              this,
              (QuestReleaseEntity_o *)v81.fields._current,
              -1,
              questInfo,
              v57) )
      {
        *questReleaseNG = (QuestReleaseEntity_o *)current;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)questReleaseNG, (int32_t)current, v59, v60, v61, v62, v63, v64);
        v65 = 19;
        goto LABEL_92;
      }
    }
  }
  v65 = 20;
LABEL_92:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v81,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v65 != 19;
}


void clsQuestCheck___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEAE22 & 1) == 0 )
  {
    sub_1C7BAE8(&clsQuestCheck___c_TypeInfo);
    byte_4CEAE22 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(clsQuestCheck___c_TypeInfo);
  System_Object___ctor(v1, 0);
  clsQuestCheck___c_TypeInfo->static_fields->__9 = (struct clsQuestCheck___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)clsQuestCheck___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4CEAE23 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_clsQuestCheck___c__DisplayClass43_1__CheckQuestPlayable_b__4__);
    sub_1C7BAE8(&clsQuestCheck___c__DisplayClass43_1_TypeInfo);
    byte_4CEAE23 = 1;
  }
  v4 = sub_1C7BD34(clsQuestCheck___c__DisplayClass43_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_clsQuestCheck___c__DisplayClass43_1__CheckQuestPlayable_b__4__,
          0),
        !Instance) )
  {
    sub_1C7BD40(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0);
}


void clsQuestCheck___c___CheckQuestPlayable_b__43_1(
        clsQuestCheck___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4CEAE24 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_clsQuestCheck___c__DisplayClass43_2__CheckQuestPlayable_b__5__);
    sub_1C7BAE8(&clsQuestCheck___c__DisplayClass43_2_TypeInfo);
    byte_4CEAE24 = 1;
  }
  v4 = sub_1C7BD34(clsQuestCheck___c__DisplayClass43_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_clsQuestCheck___c__DisplayClass43_2__CheckQuestPlayable_b__5__,
          0),
        !Instance) )
  {
    sub_1C7BD40(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0);
}


void clsQuestCheck___c___CheckQuestPlayable_b__43_10(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CEAE26 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CEAE26 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v3);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_3157CB4 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void clsQuestCheck___c___CheckQuestPlayable_b__43_12(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CEAE27 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CEAE27 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v3);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_3157CB4 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void clsQuestCheck___c___CheckQuestPlayable_b__43_2(clsQuestCheck___c_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CEAE28 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CEAE28 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v4);
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
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4CEAE25 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_clsQuestCheck___c__DisplayClass43_3__CheckQuestPlayable_b__7__);
    sub_1C7BAE8(&clsQuestCheck___c__DisplayClass43_3_TypeInfo);
    byte_4CEAE25 = 1;
  }
  v4 = sub_1C7BD34(clsQuestCheck___c__DisplayClass43_3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_clsQuestCheck___c__DisplayClass43_3__CheckQuestPlayable_b__7__,
          0),
        !Instance) )
  {
    sub_1C7BD40(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0);
}


bool clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_0(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C7BD40(this, 0);
  return n->fields.type == 118;
}


int32_t clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_1(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *a,
        QuestReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C7BD40(this, a);
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
    sub_1C7BD40(this, n);
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
    sub_1C7BD40(this, n);
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
    sub_1C7BD40(this, result);
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
    sub_1C7BD40(this, result);
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
    sub_1C7BD40(this, result);
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
  __int64 v7; // x1
  int32_t v8; // w1
  Il2CppObject *v9; // x3

  if ( (byte_4CEAE29 & 1) == 0 )
  {
    sub_1C7BAE8(&SceneJumpInfo_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_12744/*"SellServant"*/);
    sub_1C7BAE8(&StringLiteral_12780/*"ServantCombine"*/);
    byte_4CEAE29 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C7BD34(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_42057588(v5, (System_String_o *)StringLiteral_12744/*"SellServant"*/, 0, 0);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1C7BD40(v6, v7);
    case 1:
      v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v6 )
      {
        v8 = 71;
        v9 = 0;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C7BD34(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_42057500(v5, (System_String_o *)StringLiteral_12780/*"ServantCombine"*/, 0);
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
  __int64 v7; // x1
  int32_t v8; // w1

  if ( (byte_4CEAE2A & 1) == 0 )
  {
    sub_1C7BAE8(&SceneJumpInfo_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_12784/*"ServantEquipList"*/);
    sub_1C7BAE8(&StringLiteral_12744/*"SellServant"*/);
    sub_1C7BAE8(&StringLiteral_12783/*"ServantEQCombine"*/);
    byte_4CEAE2A = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C7BD34(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_42057588(v5, (System_String_o *)StringLiteral_12744/*"SellServant"*/, 1, 0);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_12;
      }
LABEL_14:
      sub_1C7BD40(v6, v7);
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C7BD34(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_42057500(v5, (System_String_o *)StringLiteral_12784/*"ServantEquipList"*/, 0);
      if ( Instance )
      {
        v8 = 71;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C7BD34(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_42057500(v5, (System_String_o *)StringLiteral_12783/*"ServantEQCombine"*/, 0);
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
  __int64 v6; // x1

  if ( (byte_4CEAE2B & 1) == 0 )
  {
    sub_1C7BAE8(&SceneJumpInfo_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_12744/*"SellServant"*/);
    byte_4CEAE2B = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v4 = (SceneJumpInfo_o *)sub_1C7BD34(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_42057588(v4, (System_String_o *)StringLiteral_12744/*"SellServant"*/, 2, 0);
    if ( !Instance )
      sub_1C7BD40(v5, v6);
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v4, 0);
  }
}