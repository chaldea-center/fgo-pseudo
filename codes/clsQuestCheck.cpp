void __fastcall clsQuestCheck___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1

  if ( (byte_4B18E5E & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_10851/*"QuestStartEffect"*/, v1);
    sub_1BCAFF8(&clsQuestCheck_TypeInfo, v4);
    byte_4B18E5E = 1;
  }
  clsQuestCheck_TypeInfo->static_fields->KEY_QUEST_START_EFFECT = (struct System_String_o *)StringLiteral_10851/*"QuestStartEffect"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)clsQuestCheck_TypeInfo->static_fields, StringLiteral_10851/*"QuestStartEffect"*/, v2, v3);
}


void __fastcall clsQuestCheck___ctor(clsQuestCheck_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B18E5D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, method);
    sub_1BCAFF8(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v3);
    sub_1BCAFF8(&Method_SingletonTemplate_clsQuestCheck___ctor__, v4);
    byte_4B18E5D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v5;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)v5, v6, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.cQuestReleaseListP = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v8;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.cQuestReleaseListP, (int32_t)v8, v9, v10);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_38F8FF0 *)Method_SingletonTemplate_clsQuestCheck___ctor__);
}


bool __fastcall clsQuestCheck__CheckQuestPlayable(
        clsQuestCheck_o *this,
        MapControl_QuestInfo_o *questInfo,
        int64_t srcEndTime,
        int32_t boostId,
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
  __int64 v49; // x24
  void *SpotID; // x0
  MapControl_QuestInfo_o *v51; // x1
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  MapControl_QuestInfo_o **v54; // x19
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  int32_t v57; // w28
  MapControl_QuestInfo_o *v58; // x8
  int32_t questId; // w23
  int32_t questPhase; // w29
  int32_t v61; // w20
  const MethodInfo *v62; // x3
  _BOOL4 isNotItemConsume; // w21
  int32_t v64; // w25
  UserGameEntity_o *v65; // x26
  QuestEntity_o *v66; // x27
  System_String_o *v67; // x19
  System_String_o *v68; // x20
  CommonUI_o *v69; // x21
  clsQuestCheck___c_c *v70; // x8
  System_Action_o *_9__41_3; // x22
  Il2CppObject *v72; // x23
  struct clsQuestCheck___c_StaticFields *static_fields; // x0
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  System_Action_o *v76; // x19
  clsQuestCheck_o *v77; // x0
  const MethodInfo *v78; // x2
  TerminalPramsManager_c *v79; // x0
  int32_t v80; // w22
  int64_t v81; // x28
  struct TerminalPramsManager_StaticFields *v82; // x8
  UserServantMaster_o *v83; // x28
  Il2CppObject *MasterData_object; // x29
  CommonUI_o *v85; // x19
  int32_t v86; // w20
  int32_t svtKeep; // w21
  ServantFrameShortDlgComponent_CallbackFunc_o *v88; // x22
  Il2CppObject *v89; // x23
  struct clsQuestCheck___c_StaticFields *v90; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  CommonUI_o *v93; // x0
  int32_t v94; // w1
  int32_t v95; // w2
  int32_t v96; // w3
  CommonUI_o *v97; // x19
  int32_t v98; // w20
  int32_t svtEquipKeep; // w21
  Il2CppObject *v100; // x23
  struct clsQuestCheck___c_StaticFields *v101; // x0
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  int32_t Count; // w19
  CommonUI_o *v105; // x20
  BalanceConfig_c *v106; // x8
  Il2CppObject *v107; // x23
  struct clsQuestCheck___c_StaticFields *v108; // x0
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  bool v111; // w25
  int32_t v113; // w29
  int32_t v114; // w28
  Il2CppObject *Instance; // x19
  RecoverDlgComponent_CallbackFunc_o *v116; // x20
  CommonUI_o *v117; // x0
  int32_t v118; // w1
  RecoverDlgComponent_CallbackFunc_o *v119; // x2
  bool v120; // w3
  Il2CppObject *v121; // x19
  RecoverDlgComponent_CallbackFunc_o *v122; // x20
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x24
  Il2CppObject *v124; // x25
  Il2CppObject *v125; // x27
  System_String_o *v126; // x20
  __int64 v127; // x2
  int32_t v128; // w29
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v130; // x8
  int *v131; // x26
  System_String_o **v132; // x28
  int64_t qp; // x8
  struct System_Int32_array *nums; // x9
  System_String_o *v135; // x0
  System_String_o *v136; // x0
  System_String_o *v137; // x19
  System_String_o *v138; // x0
  System_String_o *v139; // x19
  CommonUI_o *v140; // x20
  clsQuestCheck___c_c *v141; // x8
  System_String_o *v142; // x21
  System_Action_o *_9__41_10; // x22
  Il2CppObject *v144; // x23
  int32_t v145; // w2
  const MethodInfo *v146; // x3
  struct clsQuestCheck___c_StaticFields *v147; // x0
  CGThumbnailListItem_o *p__9__41_10; // x0
  Il2CppObject *v149; // x19
  RecoverDlgComponent_CallbackFunc_o *v150; // x20
  QuestConsumeItemEntity_o *v151; // x24
  Il2CppObject *v152; // x25
  Il2CppObject *v153; // x27
  System_String_o *v154; // x20
  int32_t v155; // w29
  struct System_Int32_array *v156; // x8
  struct System_Int32_array *v157; // x8
  int *v158; // x26
  System_String_o **v159; // x28
  int64_t v160; // x8
  struct System_Int32_array *v161; // x9
  Il2CppObject *Entity; // x0
  __int64 v163; // x1
  TerminalPramsManager_c *v164; // x0
  int v165; // w8
  TerminalPramsManager_c *v166; // x0
  __int64 v167; // x1
  int32_t VaildPayType; // w21
  TerminalPramsManager_c *v169; // x0
  MapControl_QuestInfo_o *v170; // x8
  QuestMessageMaster_o *v171; // x19
  int32_t v172; // w2
  System_String_o *ValidMessage; // x0
  System_String_o *v174; // x19
  Il2CppObject *v175; // x20
  System_String_o *v176; // x21
  System_String_o *v177; // x22
  clsQuestCheck___c_c *v178; // x8
  CommonConfirmDialog_ClickDelegate_o *_9__41_2; // x24
  System_String_o *v180; // x23
  Il2CppObject *v181; // x25
  struct clsQuestCheck___c_StaticFields *v182; // x0
  int32_t v183; // w2
  const MethodInfo *v184; // x3
  System_String_o *v185; // x0
  System_String_o *v186; // x0
  System_String_o *v187; // x19
  System_String_o *v188; // x0
  clsQuestCheck___c_c *v189; // x8
  Il2CppObject *v190; // x23
  struct clsQuestCheck___c_StaticFields *v191; // x0
  char v192; // [xsp+3Ch] [xbp-84h]
  char v193; // [xsp+3Ch] [xbp-84h]
  UserGameEntity_o *SelfUserGame; // [xsp+40h] [xbp-80h]
  UserGameEntity_o *v195; // [xsp+40h] [xbp-80h]
  int32_t v196; // [xsp+4Ch] [xbp-74h]
  int32_t key; // [xsp+50h] [xbp-70h]
  int32_t servantEquipSum[2]; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4B18E56 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, questInfo);
    sub_1BCAFF8(&RecoverDlgComponent_CallbackFunc_TypeInfo, v9);
    sub_1BCAFF8(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, v10);
    sub_1BCAFF8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_GachaMaster___, v12);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ItemMaster___, v13);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestMessageMaster___, v14);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v15);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserItemMaster___, v16);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, v17);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_WarMaster___, v18);
    sub_1BCAFF8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v19);
    sub_1BCAFF8(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v20);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v21);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v22);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v25);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v26);
    sub_1BCAFF8(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_0__, v27);
    sub_1BCAFF8(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_10__, v28);
    sub_1BCAFF8(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_12__, v29);
    sub_1BCAFF8(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_1__, v30);
    sub_1BCAFF8(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_2__, v31);
    sub_1BCAFF8(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_3__, v32);
    sub_1BCAFF8(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_6__, v33);
    sub_1BCAFF8(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__11__, v34);
    sub_1BCAFF8(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__8__, v35);
    sub_1BCAFF8(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__9__, v36);
    sub_1BCAFF8(&clsQuestCheck___c__DisplayClass41_0_TypeInfo, v37);
    sub_1BCAFF8(&clsQuestCheck___c_TypeInfo, v38);
    sub_1BCAFF8(&StringLiteral_43/*"\n"*/, v39);
    sub_1BCAFF8(&StringLiteral_10803/*"QUEST_MESSAGE_DLG_DECIDE"*/, v40);
    sub_1BCAFF8(&StringLiteral_10802/*"QUEST_MESSAGE_DLG_CANCEL"*/, v41);
    sub_1BCAFF8(&StringLiteral_10801/*"QUEST_ITEM_COST_OVER"*/, v42);
    sub_1BCAFF8(&StringLiteral_12083/*"SHORT_DLG_TITLE"*/, v43);
    sub_1BCAFF8(&StringLiteral_44/*"\n\n"*/, v44);
    sub_1BCAFF8(&StringLiteral_2847/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, v45);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v46);
    sub_1BCAFF8(&StringLiteral_10742/*"QUEST_AP_MAX_OVER"*/, v47);
    sub_1BCAFF8(&Method_clsQuestCheck_RefreshTerminalScene__, v48);
    byte_4B18E56 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  v49 = sub_1BCB244(clsQuestCheck___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v49, 0LL);
  if ( !v49 )
    goto LABEL_232;
  *(_QWORD *)(v49 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v49 + 16), (int32_t)this, v52, v53);
  *(_QWORD *)(v49 + 24) = questInfo;
  v54 = (MapControl_QuestInfo_o **)(v49 + 24);
  sub_1BCAF9C((CGThumbnailListItem_o *)(v49 + 24), (int32_t)questInfo, v55, v56);
  SpotID = *(void **)(v49 + 24);
  *(_QWORD *)(v49 + 32) = srcEndTime;
  *(_DWORD *)(v49 + 40) = boostId;
  if ( !SpotID )
    goto LABEL_232;
  v57 = *((_DWORD *)SpotID + 16);
  SpotID = (void *)MapControl_QuestInfo__GetSpotID((MapControl_QuestInfo_o *)SpotID, 0LL);
  v58 = *v54;
  if ( !*v54 )
    goto LABEL_232;
  questId = v58->fields.questId;
  questPhase = v58->fields.questPhase;
  v61 = (int)SpotID;
  SpotID = (void *)MapControl_QuestInfo__GetActConsumeCost(*v54, 0LL);
  v51 = *v54;
  if ( !*v54 )
    goto LABEL_232;
  isNotItemConsume = v51->fields.isNotItemConsume;
  v64 = (int)SpotID;
  if ( !clsQuestCheck__IsQuestValid(this, v51, *(_QWORD *)(v49 + 32), v62) )
  {
    v76 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v76, (Il2CppObject *)this, Method_clsQuestCheck_RefreshTerminalScene__, 0LL);
    clsQuestCheck__OpenQuestTimeOverNoticeDialog(v77, v76, v78);
    goto LABEL_74;
  }
  SpotID = UserGameMaster__getSelfUserGame(0LL);
  if ( !*v54 )
    goto LABEL_232;
  v65 = (UserGameEntity_o *)SpotID;
  SpotID = MapControl_QuestInfo__GetMine(*v54, 0LL);
  if ( !SpotID )
    goto LABEL_232;
  v66 = (QuestEntity_o *)SpotID;
  SpotID = (void *)QuestEntity__GetConsumeType((QuestEntity_o *)SpotID, 0LL);
  if ( (_DWORD)SpotID == 1 )
  {
    if ( !v65 )
      goto LABEL_232;
    if ( v64 > v65->fields.actMax )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v67 = LocalizationManager__Get((System_String_o *)StringLiteral_12083/*"SHORT_DLG_TITLE"*/, 0LL);
      v68 = LocalizationManager__Get((System_String_o *)StringLiteral_10742/*"QUEST_AP_MAX_OVER"*/, 0LL);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v69 = (CommonUI_o *)SpotID;
      v70 = clsQuestCheck___c_TypeInfo;
      if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
        v70 = clsQuestCheck___c_TypeInfo;
      }
      _9__41_3 = v70->static_fields->__9__41_3;
      if ( !_9__41_3 )
      {
        if ( !v70->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v70);
          v70 = clsQuestCheck___c_TypeInfo;
        }
        v72 = (Il2CppObject *)v70->static_fields->__9;
        _9__41_3 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
        System_Action___ctor(_9__41_3, v72, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_3__, 0LL);
        static_fields = clsQuestCheck___c_TypeInfo->static_fields;
        static_fields->__9__41_3 = _9__41_3;
        sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__41_3, (int32_t)_9__41_3, v74, v75);
      }
      if ( !v69 )
        goto LABEL_232;
      CommonUI__OpenNotificationDialog(v69, v67, v68, _9__41_3, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0, 0LL);
      goto LABEL_74;
    }
  }
  v196 = v61;
  key = v57;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B18E80 )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v51);
    byte_4B18E80 = 1;
  }
  v79 = TerminalPramsManager_TypeInfo;
  v80 = questPhase;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v79 = TerminalPramsManager_TypeInfo;
  }
  v79->static_fields->_QuestId_k__BackingField = questId;
  v81 = *(_QWORD *)(v49 + 32);
  if ( !byte_4B18E81 )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v51);
    v79 = TerminalPramsManager_TypeInfo;
    byte_4B18E81 = 1;
  }
  if ( !v79->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v79);
    v79 = TerminalPramsManager_TypeInfo;
  }
  v82 = v79->static_fields;
  v82->_EndTime_k__BackingField = v81;
  v82->lastPlayQuestConsumeAp = v64;
  TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(0LL);
  SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_232;
  SpotID = DataManager__GetMasterData_object_(
             (DataManager_o *)SpotID,
             (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SpotID )
    goto LABEL_232;
  v83 = (UserServantMaster_o *)SpotID;
  UserServantMaster__getCount((UserServantMaster_o *)SpotID, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_232;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)SpotID,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v83, 1, 0LL) )
  {
    SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v65 )
      goto LABEL_232;
    v85 = (CommonUI_o *)SpotID;
    v86 = servantEquipSum[1];
    svtKeep = v65->fields.svtKeep;
    SpotID = clsQuestCheck___c_TypeInfo;
    if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
      SpotID = clsQuestCheck___c_TypeInfo;
    }
    v88 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)SpotID + 23) + 32LL);
    if ( !v88 )
    {
      if ( !*((_DWORD *)SpotID + 56) )
      {
        j_il2cpp_runtime_class_init_0(SpotID);
        SpotID = clsQuestCheck___c_TypeInfo;
      }
      v89 = (Il2CppObject *)**((_QWORD **)SpotID + 23);
      v88 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1BCB244(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v88,
        v89,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__41_0__,
        0LL);
      v90 = clsQuestCheck___c_TypeInfo->static_fields;
      v90->__9__41_0 = v88;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v90->__9__41_0, (int32_t)v88, v91, v92);
    }
    if ( !v85 )
      goto LABEL_232;
    v93 = v85;
    v94 = v86;
    v95 = svtKeep;
    v96 = 0;
    goto LABEL_73;
  }
  SpotID = (void *)UserServantMaster__CheckEquipAdd(v83, 1, 1, 0LL);
  if ( ((unsigned __int8)SpotID & 1) != 0 )
  {
    SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v65 )
      goto LABEL_232;
    v97 = (CommonUI_o *)SpotID;
    v98 = servantEquipSum[0];
    svtEquipKeep = v65->fields.svtEquipKeep;
    SpotID = clsQuestCheck___c_TypeInfo;
    if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
      SpotID = clsQuestCheck___c_TypeInfo;
    }
    v88 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)SpotID + 23) + 40LL);
    if ( !v88 )
    {
      if ( !*((_DWORD *)SpotID + 56) )
      {
        j_il2cpp_runtime_class_init_0(SpotID);
        SpotID = clsQuestCheck___c_TypeInfo;
      }
      v100 = (Il2CppObject *)**((_QWORD **)SpotID + 23);
      v88 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1BCB244(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v88,
        v100,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__41_1__,
        0LL);
      v101 = clsQuestCheck___c_TypeInfo->static_fields;
      v101->__9__41_1 = v88;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v101->__9__41_1, (int32_t)v88, v102, v103);
    }
    if ( !v97 )
      goto LABEL_232;
    v96 = 1;
    v93 = v97;
    v94 = v98;
LABEL_72:
    v95 = svtEquipKeep;
LABEL_73:
    CommonUI__OpenSvtFrameShortDlg(v93, v94, v95, v96, 1, v88, 0, 0LL);
LABEL_74:
    SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( SpotID )
    {
      ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)SpotID, 0LL);
      return 0;
    }
    goto LABEL_232;
  }
  if ( !MasterData_object )
    goto LABEL_232;
  if ( UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)MasterData_object, 0, 0LL) )
  {
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)MasterData_object, 0LL);
    SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v65 )
      goto LABEL_232;
    v105 = (CommonUI_o *)SpotID;
    if ( !byte_4B1692D )
    {
      sub_1BCAFF8(&BalanceConfig_TypeInfo, v51);
      byte_4B1692D = 1;
    }
    v106 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v106 = BalanceConfig_TypeInfo;
    }
    SpotID = clsQuestCheck___c_TypeInfo;
    svtEquipKeep = v106->static_fields->CommandCodeFrameMax;
    if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
      SpotID = clsQuestCheck___c_TypeInfo;
    }
    v88 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)SpotID + 23) + 48LL);
    if ( !v88 )
    {
      if ( !*((_DWORD *)SpotID + 56) )
      {
        j_il2cpp_runtime_class_init_0(SpotID);
        SpotID = clsQuestCheck___c_TypeInfo;
      }
      v107 = (Il2CppObject *)**((_QWORD **)SpotID + 23);
      v88 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1BCB244(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v88,
        v107,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__41_6__,
        0LL);
      v108 = clsQuestCheck___c_TypeInfo->static_fields;
      v108->__9__41_6 = v88;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v108->__9__41_6, (int32_t)v88, v109, v110);
    }
    if ( !v105 )
      goto LABEL_232;
    v96 = 2;
    v93 = v105;
    v94 = Count;
    goto LABEL_72;
  }
  SpotID = (void *)QuestEntity__GetConsumeType(v66, 0LL);
  v113 = v61;
  v114 = v80;
  switch ( (int)SpotID )
  {
    case 1:
      if ( !v65 )
        goto LABEL_232;
      if ( v64 <= UserGameEntity__getAct(v65, 0LL) )
        goto LABEL_162;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v116 = (RecoverDlgComponent_CallbackFunc_o *)sub_1BCB244(RecoverDlgComponent_CallbackFunc_TypeInfo);
      RecoverDlgComponent_CallbackFunc___ctor(
        v116,
        (Il2CppObject *)v49,
        Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__8__,
        0LL);
      if ( !Instance )
        goto LABEL_232;
      v117 = (CommonUI_o *)Instance;
      v118 = v64;
      v119 = v116;
      v120 = 0;
      goto LABEL_130;
    case 2:
      if ( !v65 )
        goto LABEL_232;
      if ( v64 <= UserGameEntity__getRp(v65, 0LL) )
        goto LABEL_162;
      v121 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v122 = (RecoverDlgComponent_CallbackFunc_o *)sub_1BCB244(RecoverDlgComponent_CallbackFunc_TypeInfo);
      RecoverDlgComponent_CallbackFunc___ctor(
        v122,
        (Il2CppObject *)v49,
        Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__9__,
        0LL);
      if ( !v121 )
        goto LABEL_232;
      CommonUI__OpenRpRecoverItemListDialog((CommonUI_o *)v121, v64, v122, 0, 0LL);
      return 0;
    case 3:
      ItemConsumeEntity = QuestEntity__getItemConsumeEntity(v66, isNotItemConsume, 0LL);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      v124 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      v125 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ItemMaster___);
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      if ( !ItemConsumeEntity )
        goto LABEL_162;
      v126 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL) )
        goto LABEL_162;
      v192 = 0;
      v128 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B165D1 )
        {
          sub_1BCAFF8(&NetworkManager_TypeInfo, v51);
          byte_4B165D1 = 1;
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
        if ( v128 >= itemIds->max_length )
          goto LABEL_233;
        if ( !v124 )
          goto LABEL_232;
        SpotID = UserItemMaster__GetEntity(
                   (UserItemMaster_o *)v124,
                   *(_QWORD *)(*((_QWORD *)SpotID + 23) + 64LL),
                   itemIds->m_Items[v128 + 1],
                   0LL);
        v130 = ItemConsumeEntity->fields.itemIds;
        if ( !v130 )
          goto LABEL_232;
        if ( v128 >= v130->max_length )
          goto LABEL_233;
        if ( !v125 )
          goto LABEL_232;
        v131 = (int *)SpotID;
        SpotID = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)v125,
                   v130->m_Items[v128 + 1],
                   (const MethodInfo_32C7E00 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !SpotID )
          goto LABEL_232;
        v132 = (System_String_o **)SpotID;
        if ( *((_DWORD *)SpotID + 12) == 1 )
        {
          if ( !SelfUserGame )
            goto LABEL_232;
          qp = SelfUserGame->fields.qp;
        }
        else if ( v131 )
        {
          SpotID = (void *)ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0LL);
          qp = 0LL;
          if ( ((unsigned __int8)SpotID & 1) != 0 )
            qp = v131[7];
        }
        else
        {
          qp = 0LL;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_232;
        if ( v128 >= nums->max_length )
          goto LABEL_233;
        if ( qp < nums->m_Items[v128 + 1] )
        {
          v126 = System_String__Concat_62488672(v126, (System_String_o *)StringLiteral_43/*"\n"*/, v132[3], 0LL);
          v192 = 1;
        }
        ++v128;
      }
      while ( QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, v128, 0LL) );
      v114 = v80;
      v113 = v196;
      if ( (v192 & 1) == 0 )
        goto LABEL_162;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v135 = LocalizationManager__Get((System_String_o *)StringLiteral_10801/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v136 = System_String__Format(v135, (Il2CppObject *)v126, 0LL);
      v137 = System_String__Concat_62450424(v136, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
      v138 = LocalizationManager__Get((System_String_o *)StringLiteral_2847/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v139 = System_String__Concat_62450424(v137, v138, 0LL);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v140 = (CommonUI_o *)SpotID;
      v141 = clsQuestCheck___c_TypeInfo;
      if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
        v141 = clsQuestCheck___c_TypeInfo;
      }
      v142 = (System_String_o *)StringLiteral_1/*""*/;
      _9__41_10 = v141->static_fields->__9__41_10;
      if ( _9__41_10 )
        goto LABEL_230;
      if ( !v141->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v141);
        v141 = clsQuestCheck___c_TypeInfo;
      }
      v144 = (Il2CppObject *)v141->static_fields->__9;
      _9__41_10 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(_9__41_10, v144, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_10__, 0LL);
      v147 = clsQuestCheck___c_TypeInfo->static_fields;
      v147->__9__41_10 = _9__41_10;
      p__9__41_10 = (CGThumbnailListItem_o *)&v147->__9__41_10;
      goto LABEL_229;
    case 4:
      if ( !v65 )
        goto LABEL_232;
      if ( v64 > UserGameEntity__getAct(v65, 0LL) )
      {
        v149 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v150 = (RecoverDlgComponent_CallbackFunc_o *)sub_1BCB244(RecoverDlgComponent_CallbackFunc_TypeInfo);
        RecoverDlgComponent_CallbackFunc___ctor(
          v150,
          (Il2CppObject *)v49,
          Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__11__,
          0LL);
        if ( v149 )
        {
          v120 = 1;
          v117 = (CommonUI_o *)v149;
          v118 = v64;
          v119 = v150;
LABEL_130:
          CommonUI__OpenApRecoverItemListDialog(v117, v118, v119, v120, 0LL);
          return 0;
        }
LABEL_232:
        sub_1BCB254(SpotID, v51);
      }
      v151 = QuestEntity__getItemConsumeEntity(v66, isNotItemConsume, 0LL);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      v152 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      v153 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ItemMaster___);
      v195 = UserGameMaster__getSelfUserGame(0LL);
      if ( v151 )
      {
        v154 = (System_String_o *)StringLiteral_1/*""*/;
        if ( QuestConsumeItemEntity__IsAvailableAt(v151, 0, 0LL) )
        {
          v193 = 0;
          v155 = 0;
          do
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4B165D1 )
            {
              sub_1BCAFF8(&NetworkManager_TypeInfo, v51);
              byte_4B165D1 = 1;
            }
            SpotID = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              SpotID = NetworkManager_TypeInfo;
            }
            v156 = v151->fields.itemIds;
            if ( !v156 )
              goto LABEL_232;
            if ( v155 >= v156->max_length )
              goto LABEL_233;
            if ( !v152 )
              goto LABEL_232;
            SpotID = UserItemMaster__GetEntity(
                       (UserItemMaster_o *)v152,
                       *(_QWORD *)(*((_QWORD *)SpotID + 23) + 64LL),
                       v156->m_Items[v155 + 1],
                       0LL);
            v157 = v151->fields.itemIds;
            if ( !v157 )
              goto LABEL_232;
            if ( v155 >= v157->max_length )
              goto LABEL_233;
            if ( !v153 )
              goto LABEL_232;
            v158 = (int *)SpotID;
            SpotID = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v153,
                       v157->m_Items[v155 + 1],
                       (const MethodInfo_32C7E00 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( !SpotID )
              goto LABEL_232;
            v159 = (System_String_o **)SpotID;
            if ( *((_DWORD *)SpotID + 12) == 1 )
            {
              if ( !v195 )
                goto LABEL_232;
              v160 = v195->fields.qp;
            }
            else if ( v158 )
            {
              SpotID = (void *)ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0LL);
              v160 = 0LL;
              if ( ((unsigned __int8)SpotID & 1) != 0 )
                v160 = v158[7];
            }
            else
            {
              v160 = 0LL;
            }
            v161 = v151->fields.nums;
            if ( !v161 )
              goto LABEL_232;
            if ( v155 >= v161->max_length )
LABEL_233:
              sub_1BCB25C(SpotID, v51, v127);
            if ( v160 < v161->m_Items[v155 + 1] )
            {
              v154 = System_String__Concat_62488672(v154, (System_String_o *)StringLiteral_43/*"\n"*/, v159[3], 0LL);
              v193 = 1;
            }
            ++v155;
          }
          while ( QuestConsumeItemEntity__IsAvailableAt(v151, v155, 0LL) );
          v114 = v80;
          v113 = v196;
          if ( (v193 & 1) != 0 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v185 = LocalizationManager__Get((System_String_o *)StringLiteral_10801/*"QUEST_ITEM_COST_OVER"*/, 0LL);
            v186 = System_String__Format(v185, (Il2CppObject *)v154, 0LL);
            v187 = System_String__Concat_62450424(v186, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
            v188 = LocalizationManager__Get((System_String_o *)StringLiteral_2847/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
            v139 = System_String__Concat_62450424(v187, v188, 0LL);
            SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v140 = (CommonUI_o *)SpotID;
            v189 = clsQuestCheck___c_TypeInfo;
            if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
              v189 = clsQuestCheck___c_TypeInfo;
            }
            v142 = (System_String_o *)StringLiteral_1/*""*/;
            _9__41_10 = v189->static_fields->__9__41_12;
            if ( !_9__41_10 )
            {
              if ( !v189->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v189);
                v189 = clsQuestCheck___c_TypeInfo;
              }
              v190 = (Il2CppObject *)v189->static_fields->__9;
              _9__41_10 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
              System_Action___ctor(_9__41_10, v190, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_12__, 0LL);
              v191 = clsQuestCheck___c_TypeInfo->static_fields;
              v191->__9__41_12 = _9__41_10;
              p__9__41_10 = (CGThumbnailListItem_o *)&v191->__9__41_12;
LABEL_229:
              sub_1BCAF9C(p__9__41_10, (int32_t)_9__41_10, v145, v146);
            }
LABEL_230:
            if ( !v140 )
              goto LABEL_232;
            CommonUI__OpenNotificationDialog(v140, v142, v139, _9__41_10, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0, 0LL);
            goto LABEL_74;
          }
        }
      }
LABEL_162:
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      SpotID = DataManager__GetMasterData_object_(
                 (DataManager_o *)SpotID,
                 (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !SpotID )
        goto LABEL_232;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)SpotID,
                 key,
                 (const MethodInfo_32C7E00 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( Entity && WarEntity__IsFolder((WarEntity_o *)Entity, 0LL) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4B18E82 )
        {
          sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v163);
          byte_4B18E82 = 1;
        }
        v164 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v164 = TerminalPramsManager_TypeInfo;
        }
        v165 = 3;
      }
      else
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4B18E82 )
        {
          sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v163);
          byte_4B18E82 = 1;
        }
        v164 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v164 = TerminalPramsManager_TypeInfo;
        }
        v165 = 2;
      }
      v164->static_fields->_DispState_k__BackingField = v165;
      if ( !v164->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v164);
      if ( !byte_4B18E83 )
      {
        sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v163);
        byte_4B18E83 = 1;
      }
      v166 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v166 = TerminalPramsManager_TypeInfo;
      }
      v166->static_fields->_IsDoneShortcut_k__BackingField = 0;
      if ( !byte_4B18E84 )
      {
        sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v163);
        v166 = TerminalPramsManager_TypeInfo;
        byte_4B18E84 = 1;
      }
      if ( !v166->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v166);
        v166 = TerminalPramsManager_TypeInfo;
      }
      v166->static_fields->_PhaseCnt_k__BackingField = v114;
      if ( !byte_4B18E85 )
      {
        sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v163);
        v166 = TerminalPramsManager_TypeInfo;
        byte_4B18E85 = 1;
      }
      if ( !v166->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v166);
        v166 = TerminalPramsManager_TypeInfo;
      }
      v166->static_fields->_SpotId_k__BackingField = v113;
      if ( !byte_4B18E86 )
      {
        sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v163);
        v166 = TerminalPramsManager_TypeInfo;
        byte_4B18E86 = 1;
      }
      if ( !v166->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v166);
        v166 = TerminalPramsManager_TypeInfo;
      }
      v166->static_fields->_WarId_k__BackingField = key;
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      SpotID = DataManager__GetMasterData_object_(
                 (DataManager_o *)SpotID,
                 (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_GachaMaster___);
      if ( !SpotID )
        goto LABEL_232;
      VaildPayType = GachaMaster__getVaildPayType((GachaMaster_o *)SpotID, 0LL);
      if ( !byte_4B18A80 )
      {
        sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v167);
        byte_4B18A80 = 1;
      }
      v169 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v169 = TerminalPramsManager_TypeInfo;
      }
      v169->static_fields->_SummonType_k__BackingField = VaildPayType;
      SpotID = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_232;
      SpotID = DataManager__GetMasterData_object_(
                 (DataManager_o *)SpotID,
                 (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestMessageMaster___);
      v170 = *v54;
      if ( !*v54 )
        goto LABEL_232;
      v171 = (QuestMessageMaster_o *)SpotID;
      SpotID = (void *)MapControl_QuestInfo__GetPhaseMax(v170, 0LL);
      if ( !v171 )
        goto LABEL_232;
      if ( v114 + 1 >= (int)SpotID )
        v172 = (int)SpotID;
      else
        v172 = v114 + 1;
      v111 = 1;
      ValidMessage = QuestMessageMaster__GetValidMessage(v171, questId, v172, 1, 0LL);
      if ( ValidMessage )
      {
        v174 = ValidMessage;
        v175 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v176 = LocalizationManager__Get((System_String_o *)StringLiteral_10803/*"QUEST_MESSAGE_DLG_DECIDE"*/, 0LL);
        SpotID = LocalizationManager__Get((System_String_o *)StringLiteral_10802/*"QUEST_MESSAGE_DLG_CANCEL"*/, 0LL);
        v177 = (System_String_o *)SpotID;
        v178 = clsQuestCheck___c_TypeInfo;
        if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
          v178 = clsQuestCheck___c_TypeInfo;
        }
        _9__41_2 = v178->static_fields->__9__41_2;
        v180 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !_9__41_2 )
        {
          if ( !v178->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v178);
            v178 = clsQuestCheck___c_TypeInfo;
          }
          v181 = (Il2CppObject *)v178->static_fields->__9;
          _9__41_2 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCB244(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            _9__41_2,
            v181,
            Method_clsQuestCheck___c__CheckQuestPlayable_b__41_2__,
            0LL);
          v182 = clsQuestCheck___c_TypeInfo->static_fields;
          v182->__9__41_2 = _9__41_2;
          sub_1BCAF9C((CGThumbnailListItem_o *)&v182->__9__41_2, (int32_t)_9__41_2, v183, v184);
        }
        if ( v175 )
        {
          v111 = 1;
          CommonUI__OpenConfirmDialog_30763412((CommonUI_o *)v175, v180, v174, v176, v177, _9__41_2, 0, 1, 0, 0LL);
          return v111;
        }
        goto LABEL_232;
      }
      return v111;
    default:
      goto LABEL_162;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__CheckQuestPlayableNow(clsQuestCheck_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Master_object; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x0
  bool v12; // w0
  const MethodInfo *v13; // x2
  bool IsOpenByTime; // w8
  Il2CppObject *v16; // [xsp+8h] [xbp-48h] BYREF
  UserQuestEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B18E39 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestMaster___, *(_QWORD *)&questId);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserQuestMaster___, v5);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v7);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    byte_4B18E39 = 1;
  }
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, method) )
    return 0;
  entity = 0LL;
  v16 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v9);
    byte_4B165D1 = 1;
  }
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_26;
  if ( UserQuestMaster__TryGetEntity(
         (UserQuestMaster_o *)Master_object,
         &entity,
         (int64_t)v11[2].fields.list[1].monitor,
         questId,
         0LL) )
  {
    v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_26;
    if ( UserQuestEntity__IsNotExpired(entity, 0LL) )
      return 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !v11 )
LABEL_26:
    sub_1BCB254(v11, v9);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v11,
          &v16,
          questId,
          (const MethodInfo_32C7E4C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)v16;
  if ( !v16 )
    goto LABEL_26;
  IsOpenByTime = QuestEntity__IsOpenByTime((QuestEntity_o *)v16, 0, 0LL);
  v12 = 0;
  if ( IsOpenByTime )
    return clsQuestCheck__IsReleasedQuest(this, questId, v13);
  return v12;
}


void __fastcall clsQuestCheck__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  clsQuestCheck_c *v3; // x0
  System_String_o *KEY_QUEST_START_EFFECT; // x19

  if ( (byte_4B18E36 & 1) == 0 )
  {
    sub_1BCAFF8(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_1BCAFF8(&clsQuestCheck_TypeInfo, v2);
    byte_4B18E36 = 1;
  }
  v3 = clsQuestCheck_TypeInfo;
  if ( !clsQuestCheck_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
    v3 = clsQuestCheck_TypeInfo;
  }
  KEY_QUEST_START_EFFECT = v3->static_fields->KEY_QUEST_START_EFFECT;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__DeleteKey(KEY_QUEST_START_EFFECT, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall clsQuestCheck__GetBeforeClearQuestId(
        clsQuestCheck_o *this,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  bool v8; // w8
  int32_t result; // w0
  __int64 v10; // x1
  TerminalPramsManager_c *v11; // x0

  if ( (byte_4B18E49 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, is_quest_after_action);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v5);
    byte_4B18E49 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v8 = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0LL);
  result = -1;
  if ( !v8 || !is_quest_after_action )
    return result;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
LABEL_17:
    sub_1BCB254(Instance, v7);
  if ( !QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0LL) )
    return -1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B1684E )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v10);
    byte_4B1684E = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  return v11->static_fields->_QuestId_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall clsQuestCheck__GetEventQuestIdListPlayable(
        clsQuestCheck_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x20
  System_Int32_array *Master_object; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  __int64 v15; // x8
  System_Int32_array *v16; // x21
  unsigned __int64 v17; // x23
  int32_t v18; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10

  if ( (byte_4B18E52 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestGroupMaster___, *(_QWORD *)&eventId);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&int___TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4B18E52 = 1;
  }
  if ( eventId <= 0 )
    return (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 0LL);
  v11 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Master_object )
    goto LABEL_21;
  Master_object = QuestGroupMaster__GetQuestIdListByEventId((QuestGroupMaster_o *)Master_object, eventId, 0LL);
  if ( !Master_object )
    goto LABEL_21;
  v15 = *(_QWORD *)&Master_object->max_length;
  v16 = Master_object;
  if ( (int)v15 >= 1 )
  {
    v17 = 0LL;
    do
    {
      if ( v17 >= (unsigned int)v15 )
        sub_1BCB25C(Master_object, v13, v14);
      v18 = v16->m_Items[v17 + 1];
      Master_object = (System_Int32_array *)clsQuestCheck__CheckQuestPlayableNow(this, v18, v14);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v11 )
          goto LABEL_21;
        items = v11->fields._items;
        v20 = Method_System_Collections_Generic_List_int__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v11,
            v18,
            *(const MethodInfo_369CBAC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v11->fields._size = size + 1;
          items->m_Items[size + 1] = v18;
        }
      }
      LODWORD(v15) = v16->max_length;
    }
    while ( (__int64)++v17 < (int)v15 );
  }
  if ( !v11 )
LABEL_21:
    sub_1BCB254(Master_object, v13);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall clsQuestCheck__GetNewPlayableEventQuestId(
        clsQuestCheck_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  TerminalPramsManager_c *v12; // x0
  __int64 v13; // x1
  TerminalPramsManager_c *v14; // x0
  System_String_o *ClearEventQuestIds_k__BackingField; // x0
  System_String_array *v16; // x21
  System_Converter_object__int__o *v17; // x22
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Int32_array *v26; // x19
  CGThumbnailListItem_c *v27; // x20
  TerminalPramsManager_c *v28; // x0
  CGThumbnailListItem_o *v29; // x0
  CGThumbnailListItem_c *v31; // x19
  TerminalPramsManager_c *v32; // x0
  CGThumbnailListItem_o *p_ClearEventQuestIds_k__BackingField; // x0

  if ( (byte_4B18E51 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_ConvertAll_string__int___, *(_QWORD *)&eventId);
    sub_1BCAFF8(&System_Converter_string__int__TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Except_int___, v6);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1BCAFF8(&int___TypeInfo, v8);
    sub_1BCAFF8(&Method_System_Int32_Parse__, v9);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v10);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v11);
    byte_4B18E51 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B18E7F )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4B18E7F = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  if ( System_String__IsNullOrEmpty(v12->static_fields->_ClearEventQuestIds_k__BackingField, 0LL) )
    return (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B18E7F )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v13);
    byte_4B18E7F = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  ClearEventQuestIds_k__BackingField = v14->static_fields->_ClearEventQuestIds_k__BackingField;
  if ( !ClearEventQuestIds_k__BackingField
    || (v16 = System_String__Split(ClearEventQuestIds_k__BackingField, 0x2Cu, 0, 0LL),
        v17 = (System_Converter_object__int__o *)sub_1BCB244(System_Converter_string__int__TypeInfo),
        System_Converter_object__int____ctor(v17, 0LL, Method_System_Int32_Parse__, 0LL),
        (ClearEventQuestIds_k__BackingField = (System_String_o *)System_Array__ConvertAll_object__int_(
                                                                   (System_Object_array *)v16,
                                                                   (System_Converter_TInput__TOutput__o *)v17,
                                                                   (const MethodInfo_311563C *)Method_System_Array_ConvertAll_string__int___)) == 0LL) )
  {
    sub_1BCB254(ClearEventQuestIds_k__BackingField, v13);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)ClearEventQuestIds_k__BackingField;
  if ( !ClearEventQuestIds_k__BackingField[1].klass )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v31 = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
    if ( !byte_4B18E7E )
    {
      sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v13);
      byte_4B18E7E = 1;
    }
    v32 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v32 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (CGThumbnailListItem_o *)&v32->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = v31;
    sub_1BCAF9C(p_ClearEventQuestIds_k__BackingField, (int32_t)v31, (int32_t)v18, v19);
    TerminalPramsManager__ClearEventQuestIds_SaveData(0LL);
    return (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 0LL);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)clsQuestCheck__GetEventQuestIdListPlayable(
                                                               this,
                                                               eventId,
                                                               v18);
  v22 = System_Linq_Enumerable__Except_int_(
          v21,
          v20,
          (const MethodInfo_303C310 *)Method_System_Linq_Enumerable_Except_int___);
  v26 = System_Linq_Enumerable__ToArray_int_(
          v22,
          (const MethodInfo_305712C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v27 = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
  if ( !byte_4B18E7E )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v23);
    byte_4B18E7E = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v28 = TerminalPramsManager_TypeInfo;
  }
  v29 = (CGThumbnailListItem_o *)&v28->static_fields->_ClearEventQuestIds_k__BackingField;
  v29->klass = v27;
  sub_1BCAF9C(v29, (int32_t)v27, v24, v25);
  TerminalPramsManager__ClearEventQuestIds_SaveData(0LL);
  return v26;
}


System_Collections_Generic_List_QuestEntity__o *__fastcall clsQuestCheck__GetQuestEntityByQuestId(
        clsQuestCheck_o *this,
        System_Collections_Generic_List_int__o *qids,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x19
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x21
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *Entity; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_int__o v28; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v29; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B18E4F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestMaster___, qids);
    sub_1BCAFF8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestEntity__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_QuestEntity__TypeInfo, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B18E4F = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestMaster___),
        !qids) )
  {
    sub_1BCB254(Instance, v15);
  }
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    qids,
    (const MethodInfo_369D680 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v29,
            (const MethodInfo_344B704 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v17 )
      break;
    if ( !v16 )
      sub_1BCB254(v17, v18);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v16,
               v29.fields._current,
               (const MethodInfo_32C7E00 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    v22 = Entity;
    if ( !v13 )
      sub_1BCB254(Entity, Entity);
    items = v13->fields._items;
    v24 = Method_System_Collections_Generic_List_QuestEntity__Add__;
    ++v13->fields._version;
    if ( !items )
      sub_1BCB254(Entity, Entity);
    size = v13->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v13,
        Entity,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + size;
      v13->fields._size = size + 1;
      v26[4] = (Il2CppClass *)v22;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v22, v20, v21);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v29,
    (const MethodInfo_344B700 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return (System_Collections_Generic_List_QuestEntity__o *)v13;
}


System_Collections_Generic_List_QuestEntity__o *__fastcall clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
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


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantFriendShip(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldFriendShipRank,
        int32_t type_flag,
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
  System_Collections_Generic_List_int__o *v23; // x19
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  QuestReleaseEntity_array *ListByType; // x24
  __int64 v27; // x2
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x25
  unsigned int v30; // w28
  QuestReleaseEntity_o *v31; // x8
  int32_t questId; // w26
  const MethodInfo *v33; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v37; // x23
  const MethodInfo *v38; // x4
  int32_t v39; // w20
  int v40; // w21
  System_Collections_Generic_List_Enumerator_int__o v42; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v43; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B18E4E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9);
    sub_1BCAFF8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__RemoveAt__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor___76866480, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4B18E4E = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v23 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_32;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 9, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_32;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v30 = 0;
    while ( 1 )
    {
      if ( v30 >= max_length )
        sub_1BCB25C(Instance, v25, v27);
      v31 = ListByType->m_Items[v30];
      if ( !v31 )
        break;
      if ( v31->fields.targetId == svt_id )
      {
        if ( !v29 )
          break;
        questId = v31->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v29,
                                      questId,
                                      (const MethodInfo_32C7E00 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, questId, oldFriendShipRank, 9, v33);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v23 )
              break;
            items = v23->fields._items;
            v35 = Method_System_Collections_Generic_List_int__Add__;
            ++v23->fields._version;
            if ( !items )
              break;
            size = v23->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v23,
                questId,
                *(const MethodInfo_369CBAC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v23->fields._size = size + 1;
              items->m_Items[size + 1] = questId;
            }
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v30 >= max_length )
        goto LABEL_22;
    }
LABEL_32:
    sub_1BCB254(Instance, v25);
  }
LABEL_22:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v37 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_57263232(
      v37,
      (System_Collections_Generic_IEnumerable_T__o *)v23,
      (const MethodInfo_369C480 *)Method_System_Collections_Generic_List_int___ctor___76866480);
    Instance = (DataManager_o *)clsQuestCheck__GetReleaseQuestIdByServantFriendShip(this, svt_id, -1, type_flag, v38);
    if ( !Instance )
      goto LABEL_32;
    v23 = (System_Collections_Generic_List_int__o *)Instance;
    v39 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v39 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_int___get_Item(
                                      v23,
                                      v39,
                                      (const MethodInfo_369C8BC *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v37 )
          goto LABEL_32;
        v40 = (int)Instance;
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v42,
          v37,
          (const MethodInfo_369D680 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v43 = v42;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v43,
                  (const MethodInfo_344B704 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v40 == v43.fields._current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v23,
              v39,
              (const MethodInfo_369E32C *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v43,
          (const MethodInfo_344B700 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( --v39 < 0 )
          return v23;
      }
    }
  }
  return v23;
}


System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLimitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__GetReleaseQuestIdByServantLimit_35191820(this, svt_id, oldLimitCount, 494, v4);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit_35191820(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLimitCount,
        int32_t type_flag,
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
  System_Collections_Generic_List_int__o *v23; // x19
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  QuestReleaseEntity_array *ListByType; // x24
  __int64 v27; // x2
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x25
  unsigned int v30; // w28
  QuestReleaseEntity_o *v31; // x8
  int32_t questId; // w26
  const MethodInfo *v33; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v37; // x23
  const MethodInfo *v38; // x4
  int32_t v39; // w20
  int v40; // w21
  System_Collections_Generic_List_Enumerator_int__o v42; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v43; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B18E4B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9);
    sub_1BCAFF8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__RemoveAt__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor___76866480, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4B18E4B = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v23 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_32;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_32;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v30 = 0;
    while ( 1 )
    {
      if ( v30 >= max_length )
        sub_1BCB25C(Instance, v25, v27);
      v31 = ListByType->m_Items[v30];
      if ( !v31 )
        break;
      if ( v31->fields.targetId == svt_id )
      {
        if ( !v29 )
          break;
        questId = v31->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v29,
                                      questId,
                                      (const MethodInfo_32C7E00 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, questId, oldLimitCount, 7, v33);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v23 )
              break;
            items = v23->fields._items;
            v35 = Method_System_Collections_Generic_List_int__Add__;
            ++v23->fields._version;
            if ( !items )
              break;
            size = v23->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v23,
                questId,
                *(const MethodInfo_369CBAC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v23->fields._size = size + 1;
              items->m_Items[size + 1] = questId;
            }
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v30 >= max_length )
        goto LABEL_22;
    }
LABEL_32:
    sub_1BCB254(Instance, v25);
  }
LABEL_22:
  if ( (oldLimitCount & 0x80000000) == 0 )
  {
    v37 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_57263232(
      v37,
      (System_Collections_Generic_IEnumerable_T__o *)v23,
      (const MethodInfo_369C480 *)Method_System_Collections_Generic_List_int___ctor___76866480);
    Instance = (DataManager_o *)clsQuestCheck__GetReleaseQuestIdByServantLimit_35191820(
                                  this,
                                  svt_id,
                                  -1,
                                  type_flag,
                                  v38);
    if ( !Instance )
      goto LABEL_32;
    v23 = (System_Collections_Generic_List_int__o *)Instance;
    v39 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v39 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_int___get_Item(
                                      v23,
                                      v39,
                                      (const MethodInfo_369C8BC *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v37 )
          goto LABEL_32;
        v40 = (int)Instance;
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v42,
          v37,
          (const MethodInfo_369D680 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v43 = v42;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v43,
                  (const MethodInfo_344B704 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v40 == v43.fields._current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v23,
              v39,
              (const MethodInfo_369E32C *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v43,
          (const MethodInfo_344B700 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( --v39 < 0 )
          return v23;
      }
    }
  }
  return v23;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit_35192836(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLimitCount,
        int32_t newLimitCount,
        int32_t type_flag,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_int__o *v23; // x19
  Il2CppObject *Instance; // x0
  __int64 v25; // x1
  QuestReleaseEntity_array *ListByType; // x25
  __int64 v27; // x2
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x26
  unsigned int v30; // w21
  QuestReleaseEntity_o *v31; // x8
  int32_t questId; // w27
  const MethodInfo *v33; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v37; // x24
  int v38; // w8
  __int64 v39; // x29
  QuestReleaseEntity_o *v40; // x8
  int32_t v41; // w27
  const MethodInfo *v42; // x4
  struct System_Int32_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  int32_t v46; // w20
  int v47; // w21
  System_Collections_Generic_List_Enumerator_int__o v50; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v51; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B18E4C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v10);
    sub_1BCAFF8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__RemoveAt__, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4B18E4C = 1;
  }
  memset(&v51, 0, sizeof(v51));
  v23 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_46;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_46;
  max_length = ListByType->max_length;
  v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( max_length >= 1 )
  {
    v30 = 0;
    while ( v30 < max_length )
    {
      v31 = ListByType->m_Items[v30];
      if ( !v31 )
        goto LABEL_46;
      if ( v31->fields.targetId == svt_id )
      {
        if ( !v29 )
          goto LABEL_46;
        questId = v31->fields.questId;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v29,
                     questId,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_46;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (Il2CppObject *)clsQuestCheck__IsQuestRelease(this, questId, oldLimitCount, 7, v33);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v23 )
              goto LABEL_46;
            items = v23->fields._items;
            v35 = Method_System_Collections_Generic_List_int__Add__;
            ++v23->fields._version;
            if ( !items )
              goto LABEL_46;
            size = v23->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v23,
                questId,
                *(const MethodInfo_369CBAC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v23->fields._size = size + 1;
              items->m_Items[size + 1] = questId;
            }
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v30 >= max_length )
        goto LABEL_22;
    }
LABEL_47:
    sub_1BCB25C(Instance, v25, v27);
  }
LABEL_22:
  v37 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v37,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  v38 = ListByType->max_length;
  if ( v38 >= 1 )
  {
    v39 = 0LL;
    while ( (unsigned int)v39 < v38 )
    {
      v40 = ListByType->m_Items[v39];
      if ( !v40 )
        goto LABEL_46;
      if ( v40->fields.targetId == svt_id )
      {
        if ( !v29 )
          goto LABEL_46;
        v41 = v40->fields.questId;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v29,
                     v41,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_46;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (Il2CppObject *)clsQuestCheck__IsQuestRelease(this, v41, newLimitCount, 7, v42);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v37 )
              goto LABEL_46;
            v43 = v37->fields._items;
            v44 = Method_System_Collections_Generic_List_int__Add__;
            ++v37->fields._version;
            if ( !v43 )
              goto LABEL_46;
            v45 = v37->fields._size;
            if ( (unsigned int)v45 >= v43->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v37,
                v41,
                *(const MethodInfo_369CBAC **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
            }
            else
            {
              v37->fields._size = v45 + 1;
              v43->m_Items[v45 + 1] = v41;
            }
          }
        }
      }
      v38 = ListByType->max_length;
      if ( (int)++v39 >= v38 )
        goto LABEL_37;
    }
    goto LABEL_47;
  }
LABEL_37:
  if ( !v37 )
LABEL_46:
    sub_1BCB254(Instance, v25);
  v46 = v37->fields._size - 1;
  if ( v46 >= 0 )
  {
    while ( 1 )
    {
      Instance = (Il2CppObject *)System_Collections_Generic_List_int___get_Item(
                                   v37,
                                   v46,
                                   (const MethodInfo_369C8BC *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v23 )
        goto LABEL_46;
      v47 = (int)Instance;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v50,
        v23,
        (const MethodInfo_369D680 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v51 = v50;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v51,
                (const MethodInfo_344B704 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        if ( v47 == v51.fields._current )
        {
          System_Collections_Generic_List_int___RemoveAt(
            v37,
            v46,
            (const MethodInfo_369E32C *)Method_System_Collections_Generic_List_int__RemoveAt__);
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v51,
        (const MethodInfo_344B700 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      if ( --v46 < 0 )
        return v37;
    }
  }
  return v37;
}


System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLv(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLv,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__GetReleaseQuestIdByServantLv_35191260(this, svt_id, oldLv, 494, v4);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLv_35191260(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLv,
        int32_t type_flag,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_int__o *v15; // x23
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  QuestReleaseEntity_array *ListByType; // x24
  __int64 v19; // x2
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x25
  unsigned int v22; // w27
  QuestReleaseEntity_o *v23; // x8
  int32_t questId; // w26
  const MethodInfo *v25; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10

  if ( (byte_4B18E4A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9);
    sub_1BCAFF8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B18E4A = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_23;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 6, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_23;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= max_length )
        sub_1BCB25C(Instance, v17, v19);
      v23 = ListByType->m_Items[v22];
      if ( !v23 )
        break;
      if ( v23->fields.targetId == svt_id )
      {
        if ( !v21 )
          break;
        questId = v23->fields.questId;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v21,
                     questId,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (Il2CppObject *)clsQuestCheck__IsQuestRelease(this, questId, oldLv, 6, v25);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v15 )
              break;
            items = v15->fields._items;
            v27 = Method_System_Collections_Generic_List_int__Add__;
            ++v15->fields._version;
            if ( !items )
              break;
            size = v15->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v15,
                questId,
                *(const MethodInfo_369CBAC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
            }
            else
            {
              v15->fields._size = size + 1;
              items->m_Items[size + 1] = questId;
            }
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v22 >= max_length )
        return v15;
    }
LABEL_23:
    sub_1BCB254(Instance, v17);
  }
  return v15;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestEntity__o *__fastcall clsQuestCheck__GetReleasedQuestEntityListByServantGet(
        clsQuestCheck_o *this,
        int32_t servantId,
        int32_t typeFlag,
        const MethodInfo *method)
{
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
  QuestReleaseEntity_array *Instance; // x0
  Il2CppObject *v19; // x1
  DataManager_o *v20; // x23
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v22; // x19
  System_Collections_Generic_List_object__o *v23; // x22
  __int64 v24; // x2
  int max_length; // w8
  QuestReleaseEntity_array *v26; // x26
  unsigned int v27; // w19
  QuestReleaseEntity_o *v28; // x25
  __int64 v29; // x29
  int32_t questId; // w27
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  QuestReleaseEntity_array **v33; // x28
  System_Func_object__bool__o *v34; // x25
  const MethodInfo *v35; // x4
  const MethodInfo *v36; // x3
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  ServantGroupEntity_array *ListByServantID; // x19
  __int64 v42; // x8
  QuestReleaseEntity_array *v43; // x24
  unsigned __int64 v44; // x29
  int v45; // w8
  unsigned int v46; // w23
  __int64 v47; // x19
  QuestReleaseEntity_o *v48; // x25
  __int64 v49; // x27
  int32_t v50; // w25
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  QuestReleaseEntity_array **v53; // x26
  System_Func_object__bool__o *v54; // x28
  const MethodInfo *v55; // x4
  const MethodInfo *v56; // x3
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  Il2CppClass **v60; // x0
  QuestReleaseMaster_o *v62; // [xsp+0h] [xbp-80h]
  DataManager_o *v63; // [xsp+8h] [xbp-78h]

  if ( (byte_4B18E4D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Any_QuestEntity___, *(_QWORD *)&servantId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v6);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantGroupMaster___, v7);
    sub_1BCAFF8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v8);
    sub_1BCAFF8(&System_Func_QuestEntity__bool__TypeInfo, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestEntity__Add__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v11);
    sub_1BCAFF8(&System_Collections_Generic_List_QuestEntity__TypeInfo, v12);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BCAFF8(&Method_clsQuestCheck___c__DisplayClass31_0__GetReleasedQuestEntityListByServantGet_b__0__, v14);
    sub_1BCAFF8(&clsQuestCheck___c__DisplayClass31_0_TypeInfo, v15);
    sub_1BCAFF8(&Method_clsQuestCheck___c__DisplayClass31_1__GetReleasedQuestEntityListByServantGet_b__1__, v16);
    sub_1BCAFF8(&clsQuestCheck___c__DisplayClass31_1_TypeInfo, v17);
    byte_4B18E4D = 1;
  }
  Instance = (QuestReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  v20 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestMaster___);
  v22 = DataManager__GetMasterData_object_(
          v20,
          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  if ( !v22 )
    goto LABEL_49;
  v62 = (QuestReleaseMaster_o *)v22;
  Instance = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)v22, 8, 0LL);
  if ( !Instance )
    goto LABEL_49;
  max_length = Instance->max_length;
  v26 = Instance;
  if ( max_length >= 1 )
  {
    v27 = 0;
    while ( v27 < max_length )
    {
      v28 = v26->m_Items[v27];
      v29 = sub_1BCB244(clsQuestCheck___c__DisplayClass31_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v29, 0LL);
      if ( !v28 )
        goto LABEL_49;
      if ( v28->fields.targetId == servantId )
      {
        if ( !MasterData_object )
          goto LABEL_49;
        questId = v28->fields.questId;
        Instance = (QuestReleaseEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                 questId,
                                                 (const MethodInfo_32C7E00 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v29 )
          goto LABEL_49;
        *(_QWORD *)(v29 + 16) = Instance;
        v33 = (QuestReleaseEntity_array **)(v29 + 16);
        sub_1BCAF9C((CGThumbnailListItem_o *)(v29 + 16), (int32_t)Instance, v31, v32);
        v34 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_QuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v34,
          (Il2CppObject *)v29,
          Method_clsQuestCheck___c__DisplayClass31_0__GetReleasedQuestEntityListByServantGet_b__0__,
          0LL);
        Instance = (QuestReleaseEntity_array *)BasicHelper__Any_object_(
                                                 (System_Collections_Generic_List_T__o *)v23,
                                                 (System_Func_T__bool__o *)v34,
                                                 (const MethodInfo_3003F1C *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = *v33;
          if ( !*v33 )
            goto LABEL_49;
          Instance = (QuestReleaseEntity_array *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
          if ( ((unsigned int)Instance & typeFlag) != 0 )
          {
            Instance = (QuestReleaseEntity_array *)clsQuestCheck__IsQuestRelease(this, questId, -1, 0, v35);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v23 )
                goto LABEL_49;
              v19 = (Il2CppObject *)*v33;
              items = v23->fields._items;
              v38 = Method_System_Collections_Generic_List_QuestEntity__Add__;
              ++v23->fields._version;
              if ( !items )
                goto LABEL_49;
              size = v23->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v23,
                  v19,
                  *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
              }
              else
              {
                v40 = &items->obj.klass + size;
                v23->fields._size = size + 1;
                v40[4] = (Il2CppClass *)v19;
                sub_1BCAF9C((CGThumbnailListItem_o *)(v40 + 4), (int32_t)v19, v24, v36);
              }
            }
          }
        }
      }
      max_length = v26->max_length;
      if ( (int)++v27 >= max_length )
        goto LABEL_23;
    }
LABEL_50:
    sub_1BCB25C(Instance, v19, v24);
  }
LABEL_23:
  Instance = (QuestReleaseEntity_array *)DataManager__GetMasterData_object_(
                                           v20,
                                           (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantGroupMaster___);
  if ( !Instance
    || (ListByServantID = ServantGroupMaster__getListByServantID((ServantGroupMaster_o *)Instance, servantId, 0LL),
        Instance = QuestReleaseMaster__getListByType(v62, 10, 0LL),
        !ListByServantID) )
  {
LABEL_49:
    sub_1BCB254(Instance, v19);
  }
  v42 = *(_QWORD *)&ListByServantID->max_length;
  if ( (int)v42 >= 1 )
  {
    v43 = Instance;
    v44 = 0LL;
    v63 = (DataManager_o *)ListByServantID;
    while ( 1 )
    {
      if ( v44 >= (unsigned int)v42 )
        goto LABEL_50;
      if ( !v43 )
        goto LABEL_49;
      v45 = v43->max_length;
      if ( v45 >= 1 )
        break;
LABEL_47:
      ++v44;
      LODWORD(v42) = v63->fields.m_CancellationTokenSource;
      if ( (__int64)v44 >= (int)v42 )
        return (System_Collections_Generic_List_QuestEntity__o *)v23;
    }
    v46 = 0;
    v47 = *((_QWORD *)&v63->fields._DispLog + v44);
    while ( v46 < v45 )
    {
      v48 = v43->m_Items[v46];
      v49 = sub_1BCB244(clsQuestCheck___c__DisplayClass31_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v49, 0LL);
      if ( !v47 || !v48 )
        goto LABEL_49;
      if ( *(_DWORD *)(v47 + 16) == v48->fields.targetId )
      {
        if ( !MasterData_object )
          goto LABEL_49;
        v50 = v48->fields.questId;
        Instance = (QuestReleaseEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                 v50,
                                                 (const MethodInfo_32C7E00 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v49 )
          goto LABEL_49;
        *(_QWORD *)(v49 + 16) = Instance;
        v53 = (QuestReleaseEntity_array **)(v49 + 16);
        sub_1BCAF9C((CGThumbnailListItem_o *)(v49 + 16), (int32_t)Instance, v51, v52);
        v54 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_QuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v54,
          (Il2CppObject *)v49,
          Method_clsQuestCheck___c__DisplayClass31_1__GetReleasedQuestEntityListByServantGet_b__1__,
          0LL);
        Instance = (QuestReleaseEntity_array *)BasicHelper__Any_object_(
                                                 (System_Collections_Generic_List_T__o *)v23,
                                                 (System_Func_T__bool__o *)v54,
                                                 (const MethodInfo_3003F1C *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = *v53;
          if ( !*v53 )
            goto LABEL_49;
          Instance = (QuestReleaseEntity_array *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
          if ( ((unsigned int)Instance & typeFlag) != 0 )
          {
            Instance = (QuestReleaseEntity_array *)clsQuestCheck__IsQuestRelease(this, v50, -1, 0, v55);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v23 )
                goto LABEL_49;
              v19 = (Il2CppObject *)*v53;
              v57 = v23->fields._items;
              v58 = Method_System_Collections_Generic_List_QuestEntity__Add__;
              ++v23->fields._version;
              if ( !v57 )
                goto LABEL_49;
              v59 = v23->fields._size;
              if ( (unsigned int)v59 >= v57->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v23,
                  v19,
                  *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
              }
              else
              {
                v60 = &v57->obj.klass + v59;
                v23->fields._size = v59 + 1;
                v60[4] = (Il2CppClass *)v19;
                sub_1BCAF9C((CGThumbnailListItem_o *)(v60 + 4), (int32_t)v19, v24, v56);
              }
            }
          }
        }
      }
      v45 = v43->max_length;
      if ( (int)++v46 >= v45 )
        goto LABEL_47;
    }
    goto LABEL_50;
  }
  return (System_Collections_Generic_List_QuestEntity__o *)v23;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsConsumeStormPod(clsQuestCheck_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  QuestMaster_o *Master_object; // x0
  __int64 v9; // x1
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x19
  Il2CppObject *v11; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x20
  __int64 v13; // x2
  bool v14; // w22
  il2cpp_array_size_t v15; // w21
  struct System_Int32_array *itemIds; // x8
  QuestMaster_o *v17; // x8
  BalanceConfig_c *v18; // x0
  int32_t MasterKind_k__BackingField; // w22
  QuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B18E5C & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, *(_QWORD *)&questId);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ItemMaster___, v4);
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestMaster___, v5);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v7);
    byte_4B18E5C = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_26;
  if ( !QuestMaster__TryGetQuestEntity(Master_object, &entity, questId, 0LL) )
    return 0;
  Master_object = (QuestMaster_o *)entity;
  if ( !entity )
    goto LABEL_26;
  if ( (unsigned int)(QuestEntity__GetConsumeType(entity, 0LL) - 3) > 1 )
    return 0;
  Master_object = (QuestMaster_o *)entity;
  if ( !entity )
    goto LABEL_26;
  ItemConsumeEntity = QuestEntity__getItemConsumeEntity(entity, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v11 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !ItemConsumeEntity )
    return 0;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)v11;
  Master_object = (QuestMaster_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL);
  v14 = 0;
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v15 = 0;
    while ( 1 )
    {
      itemIds = ItemConsumeEntity->fields.itemIds;
      if ( !itemIds )
        break;
      if ( v15 >= itemIds->max_length )
        sub_1BCB25C(Master_object, v9, v13);
      if ( !v12 )
        break;
      Master_object = (QuestMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                         v12,
                                         itemIds->m_Items[v15 + 1],
                                         (const MethodInfo_32C7E00 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Master_object )
        break;
      v17 = Master_object;
      v18 = BalanceConfig_TypeInfo;
      MasterKind_k__BackingField = v17->fields._MasterKind_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v18 = BalanceConfig_TypeInfo;
      }
      v14 = MasterKind_k__BackingField == v18->static_fields->stormPodItemId;
      if ( !v14 )
      {
        Master_object = (QuestMaster_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v15, 0LL);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          continue;
      }
      return v14;
    }
LABEL_26:
    sub_1BCB254(Master_object, v9);
  }
  return v14;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsEnabledPrivilegePeriod(
        clsQuestCheck_o *this,
        int32_t questId,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v10; // x1
  int32_t OpenedPeriodPrivilegeId; // w0
  int32_t v12; // w20
  Il2CppObject *v13; // x21
  int64_t v15; // [xsp+0h] [xbp-50h] BYREF
  int64_t startAt; // [xsp+8h] [xbp-48h] BYREF
  UserPrivilegeEntity_o *v17; // [xsp+10h] [xbp-40h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B18E59 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestPhaseMaster___, *(_QWORD *)&questId);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserPrivilegeMaster___, v6);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    byte_4B18E59 = 1;
  }
  v17 = 0LL;
  entity = 0LL;
  v15 = 0LL;
  startAt = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_24;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, questId, 1, 0LL) )
    return 0;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_24;
  OpenedPeriodPrivilegeId = QuestPhaseEntity__GetOpenedPeriodPrivilegeId(entity, 0LL);
  if ( OpenedPeriodPrivilegeId < 1 )
    return 1;
  v12 = OpenedPeriodPrivilegeId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v13 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserPrivilegeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
    byte_4B165D1 = 1;
  }
  Master_object = (QuestPhaseMaster_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (QuestPhaseMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v13 )
    goto LABEL_24;
  if ( !UserPrivilegeMaster__TryGetEntity(
          (UserPrivilegeMaster_o *)v13,
          &v17,
          *((_QWORD *)Master_object[2].monitor + 8),
          v12,
          0LL) )
    return 0;
  Master_object = (QuestPhaseMaster_o *)v17;
  if ( !v17 )
LABEL_24:
    sub_1BCB254(Master_object, v10);
  return UserPrivilegeEntity__IsValidPeriod(v17, &startAt, &v15, nowTime, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsEncountRaidBoss(
        clsQuestCheck_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Int32_array *Instance; // x0
  __int64 v10; // x1
  EventRaidMaster_o *v11; // x22
  int32_t RaidDeadQuestId; // w23
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x4
  __int64 v16; // x2
  const MethodInfo *v17; // x4
  __int64 v18; // x8
  System_Int32_array *v19; // x20
  unsigned __int64 v20; // x21

  if ( (byte_4B18E3D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BCAFF8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v8);
    byte_4B18E3D = 1;
  }
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_18;
  v11 = (EventRaidMaster_o *)Instance;
  RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId((EventRaidMaster_o *)Instance, eventId, day, 0LL);
  Instance = (System_Int32_array *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, RaidDeadQuestId, 0, v13)
    || clsQuestCheck__IsQuestRelease(this, RaidDeadQuestId, -1, 0, v14) )
  {
    LOBYTE(Instance) = 1;
    return (unsigned __int8)Instance & 1;
  }
  Instance = EventRaidMaster__GetRaidAliveQuestIds(v11, eventId, day, 0LL);
  if ( !Instance )
LABEL_18:
    sub_1BCB254(Instance, v10);
  v18 = *(_QWORD *)&Instance->max_length;
  v19 = Instance;
  if ( (int)v18 < 1 )
  {
    LOBYTE(Instance) = 0;
  }
  else
  {
    v20 = 0LL;
    do
    {
      if ( v20 >= (unsigned int)v18 )
        sub_1BCB25C(Instance, v10, v16);
      Instance = (System_Int32_array *)clsQuestCheck__IsQuestRelease(this, v19->m_Items[v20 + 1], -1, 0, v17);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      LODWORD(v18) = v19->max_length;
      ++v20;
    }
    while ( (__int64)v20 < (int)v18 );
  }
  return (unsigned __int8)Instance & 1;
}


bool __fastcall clsQuestCheck__IsLastWarClear(clsQuestCheck_o *this, const MethodInfo *method)
{
  clsQuestCheck_o *Value; // x0
  const MethodInfo *v3; // x2

  if ( (byte_4B18E3F & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_8186/*"LAST_WAR_ID"*/, method);
    byte_4B18E3F = 1;
  }
  Value = (clsQuestCheck_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8186/*"LAST_WAR_ID"*/, 0LL);
  return clsQuestCheck__IsWarClear(Value, (int32_t)Value, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsMainInterlude(clsQuestCheck_o *this, int32_t war_id, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4B18E40 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&war_id);
    sub_1BCAFF8(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B18E40 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v7);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             war_id,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = WarEntity__IsMainInterlude((WarEntity_o *)Entity, 0LL);
  return (char)Entity;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsQuestClear(
        clsQuestCheck_o *this,
        int32_t qid,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  int32_t v6; // w20

  if ( (byte_4B18E46 & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&qid);
    byte_4B18E46 = 1;
  }
  v6 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_39516796(qid, v6, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsQuestClearRaw(
        clsQuestCheck_o *this,
        int32_t qid,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  int32_t v6; // w20

  if ( (byte_4B18E47 & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&qid);
    byte_4B18E47 = 1;
  }
  v6 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_39516796(qid, v6, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsQuestPhaseClear(
        clsQuestCheck_o *this,
        int32_t qid,
        int32_t phase,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t v10; // w21
  NetworkManager_c *v11; // x0
  int64_t userIdNumber; // x22

  if ( (byte_4B18E48 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&qid);
    this = (clsQuestCheck_o *)sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    byte_4B18E48 = 1;
  }
  v10 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, *(const MethodInfo **)&phase);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v9);
    byte_4B165D1 = 1;
  }
  v11 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v11 = NetworkManager_TypeInfo;
  }
  userIdNumber = v11->static_fields->userIdNumber;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestPhaseClear(userIdNumber, qid, phase, v10, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsQuestRelease(
        clsQuestCheck_o *this,
        int32_t quest_id,
        int32_t old_val,
        int32_t old_val_qr_type,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  Il2CppObject *Master_object; // x0
  __int64 v17; // x1
  System_Collections_ObjectModel_Collection_T__o *monitor; // x19
  bool v19; // w20
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  QuestReleaseEntity_o *v30; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x4
  int32_t v33; // w2
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0

  if ( (byte_4B18E3C & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__GetEnumerator__,
      *(_QWORD *)&quest_id);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__, v9);
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestReleaseMaster___, v10);
    sub_1BCAFF8(&DataManager_TypeInfo, v11);
    sub_1BCAFF8(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__getEntityList__, v12);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v13);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_QuestReleaseEntity__TypeInfo, v14);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v15);
    byte_4B18E3C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object || (monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor) == 0LL )
    sub_1BCB254(Master_object, v17);
  v19 = System_Collections_ObjectModel_Collection_object___get_Count(
          (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor,
          (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__get_Count__) > 0;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 monitor,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_QuestReleaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v20);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        p_offset += 4;
        if ( !v23 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestReleaseEntity__c **)v28 - 1) != System_Collections_Generic_IEnumerator_QuestReleaseEntity__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_19;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_19:
      v29 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_QuestReleaseEntity__TypeInfo, 0LL);
    }
    v30 = (QuestReleaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                                    Enumerator,
                                    *(_QWORD *)(v29 + 8));
    if ( !v30 )
      sub_1BCB254(0LL, v31);
    if ( v30->fields.questId == quest_id )
    {
      if ( (old_val & 0x80000000) != 0 )
        v33 = -1;
      else
        v33 = v30->fields.type == old_val_qr_type ? old_val : -1;
      if ( !clsQuestCheck__IsQuestRelease_35188288(this, v30, v33, 0LL, v32) )
      {
        v19 = 0;
        break;
      }
    }
  }
  v34 = Enumerator->klass;
  v35 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_34;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_34:
    v37 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  return v19;
}


bool __fastcall clsQuestCheck__IsQuestRelease_35185520(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        MapControl_QuestInfo_o *qinf,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_35188288(this, qrd, -1, qinf, v4);
}


bool __fastcall clsQuestCheck__IsQuestRelease_35187396(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        int32_t old_val,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_35188288(this, qrd, old_val, 0LL, v4);
}


bool __fastcall clsQuestCheck__IsQuestRelease_35188288(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        int32_t old_val,
        MapControl_QuestInfo_o *qinf,
        const MethodInfo *method)
{
  char v5; // cf
  char v6; // zf
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  int32_t type; // w22
  int32_t v18; // w20
  int32_t v19; // w21
  int32_t targetId; // w20
  int64_t value; // x19
  int32_t v23; // w0
  int32_t v24; // w20
  int32_t v25; // w21
  int32_t v26; // w19
  int32_t v27; // w0
  int32_t v28; // w1
  int32_t v29; // w2
  bool v30; // w3
  bool v32; // w3
  QuestReleaseEntity_o *v33; // x2
  Il2CppObject *v34; // x0
  int32_t *v35; // x19
  int64_t Time; // x20
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_openedAt; // x8
  int32_t *p_closedAt; // x9
  int64_t v40; // x8
  Il2CppObject *v41; // x0
  int32_t v42; // w19
  int32_t v43; // w20
  int32_t questId; // w22
  int32_t ValueInt; // w19
  int32_t v46; // w20
  int32_t v47; // w21
  int32_t v48; // w19
  TotalEventRaidEntity_o *v50; // [xsp+8h] [xbp-48h] BYREF
  EventRaidEntity_o *entity; // [xsp+10h] [xbp-40h] BYREF
  System_Int32_array *sameGroupQuestIds; // [xsp+18h] [xbp-38h] BYREF
  bool is_release; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_4B18E42 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, qrd);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventRaidMaster___, v10);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestAddMaster___, v11);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestMaster___, v12);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v13);
    sub_1BCAFF8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v14);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v15);
    this = (clsQuestCheck_o *)sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4B18E42 = 1;
  }
  entity = 0LL;
  sameGroupQuestIds = 0LL;
  v50 = 0LL;
  is_release = 0;
  if ( !qrd )
LABEL_101:
    sub_1BCB254(this, qrd);
  type = qrd->fields.type;
  if ( !v6 & v5 )
  {
LABEL_20:
    targetId = qrd->fields.targetId;
    value = qrd->fields.value;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v23 = type;
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
        v32 = 1;
        v33 = qrd;
        goto LABEL_89;
      case 3:
      case 4:
      case 5:
        return is_release;
      case 6:
        if ( clsQuestCheck__IsQuestClear(this, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        if ( (old_val & 0x80000000) == 0 )
          return QuestReleaseEntity__getValueInt(qrd, 0LL) <= old_val;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v23 = 6;
        break;
      case 7:
        if ( clsQuestCheck__IsQuestClear(this, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        if ( (old_val & 0x80000000) == 0 )
          return QuestReleaseEntity__getValueInt(qrd, 0LL) <= old_val;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v23 = 7;
        break;
      case 8:
        if ( clsQuestCheck__IsQuestClear(this, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v23 = 8;
        break;
      case 9:
        if ( clsQuestCheck__IsQuestClear(this, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        if ( (old_val & 0x80000000) == 0 )
          return QuestReleaseEntity__getValueInt(qrd, 0LL) <= old_val;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v23 = 9;
        break;
      case 10:
        if ( clsQuestCheck__IsQuestClear(this, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v23 = 10;
        break;
      case 11:
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v23 = 11;
        break;
      case 12:
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_101;
        v34 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                qrd->fields.questId,
                (const MethodInfo_32C7E00 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v34 )
          return is_release;
        v35 = (int32_t *)v34;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Time = NetworkManager__getTime(0LL);
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestAddMaster___);
        if ( !this )
          goto LABEL_101;
        ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)this, v35[4], 0LL);
        p_openedAt = &ReplaceDataByQuestId->fields.openedAt;
        p_closedAt = &ReplaceDataByQuestId->fields.closedAt;
        if ( !ReplaceDataByQuestId )
          p_openedAt = v35 + 39;
        v40 = *p_openedAt;
        if ( !ReplaceDataByQuestId )
          p_closedAt = v35 + 40;
        return Time >= v40 && Time < *p_closedAt;
      case 13:
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_101;
        v41 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                qrd->fields.questId,
                (const MethodInfo_32C7E00 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v41 )
          return is_release;
        return QuestEntity__IsOpenByTime((QuestEntity_o *)v41, 1, 0LL);
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
        v42 = qrd->fields.targetId;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return CondType__IsMissionAchive(v42, 0LL);
      case 26:
        v43 = qrd->fields.targetId;
        questId = qrd->fields.questId;
        ValueInt = QuestReleaseEntity__getValueInt(qrd, 0LL);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        is_release = CondType__IsNotQuestGroupClear(questId, v43, ValueInt, &sameGroupQuestIds, 1, 0LL);
        if ( qinf )
        {
          qinf->fields._GroupId_k__BackingField = v43;
          MapControl_QuestInfo__AddSameGroupQuestIds(qinf, sameGroupQuestIds, 0LL);
        }
        return is_release;
      case 27:
      case 28:
        v18 = qrd->fields.targetId;
        v19 = QuestReleaseEntity__getValueInt(qrd, 0LL);
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventRaidMaster___);
        if ( !this )
          goto LABEL_101;
        if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)this, &entity, v18, v19, 0LL) )
          return is_release;
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
        if ( !this )
          goto LABEL_101;
        this = (clsQuestCheck_o *)TotalEventRaidMaster__TryGetEntity(
                                    (TotalEventRaidMaster_o *)this,
                                    &v50,
                                    v18,
                                    v19,
                                    0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          return is_release;
        if ( !entity || !v50 )
          goto LABEL_101;
        return (entity->fields.maxHp > v50->fields.totalDamage) ^ (qrd->fields.type != 27);
      case 32:
        v46 = qrd->fields.questId;
        v47 = qrd->fields.targetId;
        v48 = QuestReleaseEntity__getValueInt(qrd, 0LL);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v30 = 1;
        v27 = v46;
        v28 = v47;
        v29 = v48;
        return CondType__IsQuestGroupClear(v27, v28, v29, v30, 0LL);
      case 38:
        if ( clsQuestCheck__IsQuestClear(this, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v23 = 38;
        break;
      case 53:
        v33 = qrd;
        v32 = 0;
LABEL_89:
        clsQuestCheck__checkCondTypeItemGet(this, &is_release, v33, v32, method);
        return is_release;
      case 54:
        if ( clsQuestCheck__IsQuestClear(this, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v23 = 54;
        break;
      default:
        if ( type == 58 )
        {
          v24 = qrd->fields.questId;
          v25 = qrd->fields.targetId;
          v26 = QuestReleaseEntity__getValueInt(qrd, 0LL);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v27 = v24;
          v28 = v25;
          v29 = v26;
          v30 = 0;
          return CondType__IsQuestGroupClear(v27, v28, v29, v30, 0LL);
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
        v23 = 64;
        break;
    }
  }
  return CondType__IsOpen(v23, targetId, value, 0, 0LL, 0LL);
}


bool __fastcall clsQuestCheck__IsQuestValid(
        clsQuestCheck_o *this,
        MapControl_QuestInfo_o *questInfo,
        int64_t endTime,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  void *IsQuestReleaseAll; // x0
  __int64 v10; // x1
  Il2CppObject *Master_object; // x21
  clsQuestCheck_o *Time; // x0
  const MethodInfo *v15; // x3
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B18E58 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserQuestMaster___, questInfo);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v8);
    byte_4B18E58 = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IsQuestReleaseAll = (void *)TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
  if ( ((unsigned __int8)IsQuestReleaseAll & 1) != 0 )
    return 1;
  if ( !questInfo )
    goto LABEL_28;
  IsQuestReleaseAll = MapControl_QuestInfo__GetMine(questInfo, 0LL);
  if ( !IsQuestReleaseAll )
    goto LABEL_28;
  if ( *((_DWORD *)IsQuestReleaseAll + 20) == 1 )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
    byte_4B165D1 = 1;
  }
  IsQuestReleaseAll = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    IsQuestReleaseAll = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
LABEL_28:
    sub_1BCB254(IsQuestReleaseAll, v10);
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)Master_object,
    &entity,
    *(_QWORD *)(*((_QWORD *)IsQuestReleaseAll + 23) + 64LL),
    questInfo->fields.questId,
    0LL);
  if ( entity && UserQuestEntity__IsNotExpired(entity, 0LL) )
    return 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (clsQuestCheck_o *)NetworkManager__getTime(0LL);
  return (endTime < 1 || endTime - (__int64)Time >= 1)
      && clsQuestCheck__IsEnabledPrivilegePeriod(Time, questInfo->fields.questId, (int64_t)Time, v15);
}


bool __fastcall clsQuestCheck__IsReleasedLoginQuest(
        clsQuestCheck_o *this,
        LoginQuestEntity_o *loginQuestEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  QuestReleaseMaster_o *Master_object; // x0
  __int64 v12; // x1
  clsQuestCheck_Fields *p_fields; // x21
  System_Collections_Generic_List_object__o *qrs; // x9
  int64_t v15; // x21
  _BOOL8 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x4
  int v19; // w19
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B18E3B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestReleaseMaster___, loginQuestEnt);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v9);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
    byte_4B18E3B = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !loginQuestEnt || !Master_object )
    goto LABEL_24;
  p_fields = &this->fields;
  QuestReleaseMaster__getListByQuestID_41680376(Master_object, loginQuestEnt->fields.questId, &this->fields.qrs, 0LL);
  if ( !this->fields.qrs )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (QuestReleaseMaster_o *)NetworkManager__getTime(0LL);
  qrs = (System_Collections_Generic_List_object__o *)p_fields->qrs;
  if ( !p_fields->qrs )
LABEL_24:
    sub_1BCB254(Master_object, v12);
  v15 = (int64_t)Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    qrs,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v16 )
      break;
    if ( !v21.fields._current )
      sub_1BCB254(v16, v17);
    if ( HIDWORD(v21.fields._current[1].klass) == 12 )
    {
      if ( !LoginQuestEntity__IsEnablePeriod(loginQuestEnt, v15, 0LL) )
        goto LABEL_18;
    }
    else if ( !clsQuestCheck__IsQuestRelease_35188288(this, (QuestReleaseEntity_o *)v21.fields._current, -1, 0LL, v18) )
    {
LABEL_18:
      v19 = 6;
      goto LABEL_21;
    }
  }
  v19 = 7;
LABEL_21:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v19 != 6;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsReleasedQuest(clsQuestCheck_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_QuestReleaseEntity__o *qrs; // x0
  const MethodInfo *v13; // x4
  int v14; // w19
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B18E3A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestReleaseMaster___, *(_QWORD *)&questId);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v9);
    byte_4B18E3A = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object )
    sub_1BCB254(0LL, v11);
  QuestReleaseMaster__getListByQuestID_41680376((QuestReleaseMaster_o *)Master_object, questId, &this->fields.qrs, 0LL);
  qrs = this->fields.qrs;
  if ( qrs )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)qrs,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
    {
      if ( !clsQuestCheck__IsQuestRelease_35188288(this, (QuestReleaseEntity_o *)v16.fields._current, -1, 0LL, v13) )
      {
        v14 = 5;
        goto LABEL_12;
      }
    }
    v14 = 6;
LABEL_12:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    LOBYTE(qrs) = v14 != 5;
  }
  return (char)qrs;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsTapSkipQuestStart(
        clsQuestCheck_o *this,
        int32_t questId,
        int32_t questPhase,
        System_String_o *effectName,
        bool isMyRoomMaterial,
        const MethodInfo *method)
{
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
  __int64 v21; // x19
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t ScriptIntParam; // w22
  int v27; // w8
  clsQuestCheck_c *v29; // x0
  System_String_o *KEY_QUEST_START_EFFECT; // x21
  System_String_o *String; // x21
  System_String_array *v32; // x0
  System_Object_array *v33; // x23
  System_Func_object__bool__o *v34; // x20
  Il2CppObject *object; // x20
  System_String_o *v36; // x0
  char v37; // w8
  System_String_o *v38; // x19
  clsQuestCheck_c *v39; // x0
  System_String_o *v40; // x20
  Il2CppObject *v41; // [xsp+0h] [xbp-50h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B18E55 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Find_string___, *(_QWORD *)&questId);
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestMaster___, v10);
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestPhaseMaster___, v11);
    sub_1BCAFF8(&DataManager_TypeInfo, v12);
    sub_1BCAFF8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v13);
    sub_1BCAFF8(&EncryptedPlayerPrefs_TypeInfo, v14);
    sub_1BCAFF8(&System_Func_string__bool__TypeInfo, v15);
    sub_1BCAFF8(&Method_clsQuestCheck___c__DisplayClass40_0__IsTapSkipQuestStart_b__0__, v16);
    sub_1BCAFF8(&clsQuestCheck___c__DisplayClass40_0_TypeInfo, v17);
    sub_1BCAFF8(&StringLiteral_22660/*"questStartEffectSkip"*/, v18);
    sub_1BCAFF8(&StringLiteral_1039/*"/"*/, v19);
    sub_1BCAFF8(&clsQuestCheck_TypeInfo, v20);
    byte_4B18E55 = 1;
  }
  v41 = 0LL;
  entity = 0LL;
  v21 = sub_1BCB244(clsQuestCheck___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_41;
  *(_QWORD *)(v21 + 16) = effectName;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v21 + 16), (int32_t)effectName, v24, v25);
  if ( isMyRoomMaterial )
    return 0;
  if ( questPhase <= 1 )
    questPhase = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_41;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, questId, questPhase, 0LL) )
    goto LABEL_44;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_41;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_22660/*"questStartEffectSkip"*/, 0, 0LL);
  if ( !ScriptIntParam )
  {
LABEL_44:
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !Master_object )
      goto LABEL_41;
    Master_object = (QuestPhaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            &v41,
                                            questId,
                                            (const MethodInfo_32C7E4C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !v41 )
        goto LABEL_41;
      v27 = LODWORD(v41[2].monitor) - 1;
      if ( (unsigned int)v27 > 7 )
        ScriptIntParam = 0;
      else
        ScriptIntParam = dword_C1A50C[v27];
      goto LABEL_22;
    }
    return 0;
  }
LABEL_22:
  v29 = clsQuestCheck_TypeInfo;
  if ( !clsQuestCheck_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
    v29 = clsQuestCheck_TypeInfo;
  }
  KEY_QUEST_START_EFFECT = v29->static_fields->KEY_QUEST_START_EFFECT;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  String = EncryptedPlayerPrefs__GetString(KEY_QUEST_START_EFFECT, 0LL);
  Master_object = (QuestPhaseMaster_o *)System_String__IsNullOrEmpty(String, 0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    goto LABEL_31;
  if ( !String )
LABEL_41:
    sub_1BCB254(Master_object, v23);
  v32 = System_String__Split(String, 0x2Fu, 0, 0LL);
  if ( !v32 )
  {
LABEL_31:
    v38 = *(System_String_o **)(v21 + 16);
LABEL_32:
    v39 = clsQuestCheck_TypeInfo;
    if ( !clsQuestCheck_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
      v39 = clsQuestCheck_TypeInfo;
    }
    v40 = v39->static_fields->KEY_QUEST_START_EFFECT;
    if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    EncryptedPlayerPrefs__SetString(v40, v38, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
    v37 = 1;
    goto LABEL_37;
  }
  v33 = (System_Object_array *)v32;
  v34 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v34,
    (Il2CppObject *)v21,
    Method_clsQuestCheck___c__DisplayClass40_0__IsTapSkipQuestStart_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             v33,
             (System_Func_T__bool__o *)v34,
             (const MethodInfo_3004AE8 *)Method_BasicHelper_Find_string___);
  v36 = System_String__Concat_62488672(
          String,
          (System_String_o *)StringLiteral_1039/*"/"*/,
          *(System_String_o **)(v21 + 16),
          0LL);
  if ( !object )
  {
    v38 = v36;
    goto LABEL_32;
  }
  v37 = 0;
LABEL_37:
  if ( ScriptIntParam == 1 )
    return 1;
  else
    return (ScriptIntParam == 2) & (v37 ^ 1);
}


bool __fastcall clsQuestCheck__IsValidQuestRandomGroup(
        clsQuestCheck_o *this,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  QuestRandomGroupMaster_o *v13; // x21
  QuestRandomGroupEntity_o *EntityFromQuestId; // x0
  QuestRandomGroupEntity_o *v15; // x19
  int32_t randomGroupId; // w20
  TerminalPramsManager_c *v17; // x0
  bool v18; // w0
  uint32_t cctor_finished; // w9
  TerminalPramsManager_c *v20; // x0
  int32_t Item; // w22
  QuestRandomGroupEntity_o *RandomRangeQuest; // x0
  TerminalPramsManager_c *v23; // x0
  QuestRandomGroupEntity_o *v24; // x21
  TerminalPramsManager_c *v25; // x0
  TerminalPramsManager_c *v26; // x0

  if ( (byte_4B18E38 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, questInfo);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestRandomGroupMaster___, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v10);
    byte_4B18E38 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestRandomGroupMaster___);
  if ( !questInfo )
    goto LABEL_53;
  v13 = (QuestRandomGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_53;
  EntityFromQuestId = QuestRandomGroupMaster__GetEntityFromQuestId(
                        (QuestRandomGroupMaster_o *)Instance,
                        questInfo->fields.questId,
                        0LL);
  if ( EntityFromQuestId )
  {
    v15 = EntityFromQuestId;
    randomGroupId = EntityFromQuestId->fields.randomGroupId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__LoadQuestRandomGroupList(0LL);
    if ( !byte_4B18E7D )
    {
      sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v12);
      byte_4B18E7D = 1;
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
    v18 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
            (System_Collections_Generic_Dictionary_int__int__o *)Instance,
            randomGroupId,
            (const MethodInfo_3318A18 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    cctor_finished = TerminalPramsManager_TypeInfo->_2.cctor_finished;
    if ( v18 )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B18E7D )
      {
        sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v12);
        byte_4B18E7D = 1;
      }
      v20 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v20 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v20->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_53;
      Item = System_Collections_Generic_Dictionary_int__int___get_Item(
               (System_Collections_Generic_Dictionary_int__int__o *)Instance,
               randomGroupId,
               (const MethodInfo_3318790 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsQuestClear_39516796(Item, -1, 0, 0LL) )
        goto LABEL_44;
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B18E7D )
      {
        sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v12);
        byte_4B18E7D = 1;
      }
      v23 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v23 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v23->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_53;
      System_Collections_Generic_Dictionary_int__int___Add(
        (System_Collections_Generic_Dictionary_int__int__o *)Instance,
        randomGroupId,
        0,
        (const MethodInfo_331882C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
    RandomRangeQuest = QuestRandomGroupMaster__GetRandomRangeQuest(v13, randomGroupId, 0LL);
    if ( RandomRangeQuest )
    {
      v24 = RandomRangeQuest;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B18E7D )
      {
        sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v12);
        byte_4B18E7D = 1;
      }
      v25 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v25 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v25->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_53;
      System_Collections_Generic_Dictionary_int__int___set_Item(
        (System_Collections_Generic_Dictionary_int__int__o *)Instance,
        randomGroupId,
        v24->fields.questId,
        (const MethodInfo_3318818 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      TerminalPramsManager__SaveQuestRandomGroupList(0LL);
LABEL_44:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B18E7D )
      {
        sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v12);
        byte_4B18E7D = 1;
      }
      v26 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v26 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v26->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( Instance )
      {
        LOBYTE(RandomRangeQuest) = System_Collections_Generic_Dictionary_int__int___get_Item(
                                     (System_Collections_Generic_Dictionary_int__int__o *)Instance,
                                     randomGroupId,
                                     (const MethodInfo_3318790 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) == v15->fields.questId;
        return (char)RandomRangeQuest;
      }
LABEL_53:
      sub_1BCB254(Instance, v12);
    }
  }
  else
  {
    LOBYTE(RandomRangeQuest) = 1;
  }
  return (char)RandomRangeQuest;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsWarClear(clsQuestCheck_o *this, int32_t war_id, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4B18E3E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&war_id);
    sub_1BCAFF8(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B18E3E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v7);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             war_id,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Entity, HIDWORD(Entity[6].klass), 0, v9);
  return (char)Entity;
}


void __fastcall clsQuestCheck__OpenQuestTimeOverNoticeDialog(
        clsQuestCheck_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_4B18E5A & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, callback);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BCAFF8(&StringLiteral_10831/*"QUEST_TIME_OVER"*/, v5);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v6);
    byte_4B18E5A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_10831/*"QUEST_TIME_OVER"*/, 0LL);
  if ( !Instance )
    sub_1BCB254(v8, v9);
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v8,
    callback,
    -1,
    0,
    0,
    0,
    1,
    0,
    1,
    0,
    0LL,
    0.0,
    0,
    0LL);
}


void __fastcall clsQuestCheck__PlayQuestStartAction(
        clsQuestCheck_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w20

  if ( (byte_4B18E54 & 1) == 0 )
  {
    sub_1BCAFF8(&ScriptManager_TypeInfo, end_act);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v4);
    byte_4B18E54 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B169E0 )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, end_act);
    byte_4B169E0 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v5->static_fields->_WarId_k__BackingField;
  if ( !byte_4B1684E )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, end_act);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4B1684E = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v5->static_fields->_QuestId_k__BackingField;
  if ( clsQuestCheck__mfCheck_IsQuestNew((clsQuestCheck_o *)v5, QuestId_k__BackingField, method) )
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__PlayQuestStart(WarId_k__BackingField, QuestId_k__BackingField, 0, 0, end_act, 0LL, 0, 0LL, 0LL, 0LL);
  }
  else
  {
    ActionExtensions__Call(end_act, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall clsQuestCheck__RecoverItemListDialogCallback(
        clsQuestCheck_o *this,
        MapControl_QuestInfo_o *qinf,
        int64_t endTime,
        int32_t result,
        int32_t boostId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  void *Instance; // x0
  __int64 v17; // x1
  _QWORD *v18; // x19
  __int64 methodPtr_low; // x9
  __int64 v20; // x8
  __int64 v21; // x1
  TerminalPramsManager_c *v22; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w20
  BattleSetupInfo_o *v26; // x23
  Il2CppObject *v27; // x20
  clsQuestCheck_o *v28; // x0
  int32_t v29; // w1
  int64_t v30; // x2
  const MethodInfo *v31; // x3

  if ( (byte_4B18E57 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleRootComponent_TypeInfo, qinf);
    sub_1BCAFF8(&BattleSetupInfo_TypeInfo, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v13);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v14);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v15);
    byte_4B18E57 = 1;
  }
  if ( result == 2 )
  {
    if ( clsQuestCheck__CheckQuestPlayable(this, qinf, endTime, boostId, *(const MethodInfo **)&boostId) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B169E0 )
      {
        sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v21);
        byte_4B169E0 = 1;
      }
      v22 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v22 = TerminalPramsManager_TypeInfo;
      }
      WarId_k__BackingField = v22->static_fields->_WarId_k__BackingField;
      if ( !byte_4B1684E )
      {
        sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v21);
        v22 = TerminalPramsManager_TypeInfo;
        byte_4B1684E = 1;
      }
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = TerminalPramsManager_TypeInfo;
      }
      QuestId_k__BackingField = v22->static_fields->_QuestId_k__BackingField;
      if ( !byte_4B1684D )
      {
        sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v21);
        v22 = TerminalPramsManager_TypeInfo;
        byte_4B1684D = 1;
      }
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = TerminalPramsManager_TypeInfo;
      }
      PhaseCnt_k__BackingField = v22->static_fields->_PhaseCnt_k__BackingField;
      v26 = (BattleSetupInfo_o *)sub_1BCB244(BattleSetupInfo_TypeInfo);
      BattleSetupInfo___ctor(v26, 0LL);
      if ( !v26 )
        goto LABEL_38;
      Instance = BattleSetupInfo__ConvertBattleSetupInfo(
                   v26,
                   WarId_k__BackingField,
                   QuestId_k__BackingField,
                   PhaseCnt_k__BackingField,
                   0,
                   0,
                   0,
                   0LL);
      v27 = (Il2CppObject *)Instance;
      if ( boostId )
      {
        if ( !Instance )
          goto LABEL_38;
        *((_DWORD *)Instance + 15) = boostId;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance
        || (*((_BYTE *)Instance + 148) = 1,
            (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__)) == 0LL)
        || (*((_DWORD *)Instance + 38) = 1,
            (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
      {
LABEL_38:
        sub_1BCB254(Instance, v17);
      }
      AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 35, 1, v27, 0LL);
    }
LABEL_36:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0LL);
      return;
    }
    goto LABEL_38;
  }
  if ( result )
    goto LABEL_36;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v18 = (_QWORD *)*((_QWORD *)Instance + 4);
  if ( !v18 )
    goto LABEL_38;
  methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*v18 + 304LL) >= (unsigned int)methodPtr_low
    && *(BattleRootComponent_c **)(*(_QWORD *)(*v18 + 200LL) + 8 * methodPtr_low - 8) == BattleRootComponent_TypeInfo )
  {
    Instance = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)Instance + 4), 0LL);
    if ( !Instance )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v20 = v18[10];
    if ( !v20 )
      goto LABEL_38;
    Instance = *(void **)(v20 + 536);
    if ( !Instance )
      goto LABEL_38;
    BattleResultComponent__EndResult((BattleResultComponent_o *)Instance, 0LL);
    goto LABEL_36;
  }
  sub_1BCB514(*((_QWORD *)Instance + 4));
  clsQuestCheck__IsEnabledPrivilegePeriod(v28, v29, v30, v31);
}


void __fastcall clsQuestCheck__RefreshTerminalScene(clsQuestCheck_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B18E5B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B18E5B = 1;
  }
  TopLoginRequest__ResetAccesTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v3);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall clsQuestCheck__SaveEventQuestIdListPlayable(
        clsQuestCheck_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  CGThumbnailListItem_c *v9; // x21
  TerminalPramsManager_c *v10; // x0
  CGThumbnailListItem_o *p_ClearEventQuestIds_k__BackingField; // x0
  const MethodInfo *v12; // x2
  System_Collections_Generic_IEnumerable_T__o *v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_String_o *v17; // x19
  TerminalPramsManager_c *v18; // x0
  CGThumbnailListItem_o *v19; // x0

  if ( (byte_4B18E50 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_String_Join_int___, *(_QWORD *)&eventId);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_806/*","*/, v7);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v8);
    byte_4B18E50 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v9 = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
  if ( !byte_4B18E7E )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4B18E7E = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  p_ClearEventQuestIds_k__BackingField = (CGThumbnailListItem_o *)&v10->static_fields->_ClearEventQuestIds_k__BackingField;
  p_ClearEventQuestIds_k__BackingField->klass = v9;
  sub_1BCAF9C(p_ClearEventQuestIds_k__BackingField, (int32_t)v9, (int32_t)method, v3);
  v13 = (System_Collections_Generic_IEnumerable_T__o *)clsQuestCheck__GetEventQuestIdListPlayable(this, eventId, v12);
  v17 = System_String__Join_int_(
          (System_String_o *)StringLiteral_806/*","*/,
          v13,
          (const MethodInfo_30C23B4 *)Method_System_String_Join_int___);
  if ( !byte_4B18E7E )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v14);
    byte_4B18E7E = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v19 = (CGThumbnailListItem_o *)&v18->static_fields->_ClearEventQuestIds_k__BackingField;
  v19->klass = (CGThumbnailListItem_c *)v17;
  sub_1BCAF9C(v19, (int32_t)v17, v15, v16);
  TerminalPramsManager__ClearEventQuestIds_SaveData(0LL);
}


void __fastcall clsQuestCheck__checkCondTypeItemGet(
        clsQuestCheck_o *this,
        bool *is_release,
        QuestReleaseEntity_o *qrd,
        bool itemGet,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  UserItemMaster_o *v12; // x22
  int32_t targetId; // w23
  int32_t num; // w22
  bool v15; // w8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B18E43 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserItemMaster___, is_release);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B18E43 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !qrd )
    goto LABEL_17;
  v12 = (UserItemMaster_o *)Instance;
  targetId = qrd->fields.targetId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v11);
    byte_4B165D1 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !v12 )
    goto LABEL_17;
  Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                v12,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                targetId,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v15 = 1;
    goto LABEL_16;
  }
  if ( !entity )
LABEL_17:
    sub_1BCB254(Instance, v11);
  num = entity->fields.num;
  v15 = num < QuestReleaseEntity__getValueInt(qrd, 0LL);
LABEL_16:
  *is_release = (v15 ^ itemGet) & 1;
}


bool __fastcall clsQuestCheck__isPlayQuestStartAction(clsQuestCheck_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  int32_t WarId_k__BackingField; // w20
  int32_t QuestId_k__BackingField; // w19

  if ( (byte_4B18E53 & 1) == 0 )
  {
    sub_1BCAFF8(&ScriptManager_TypeInfo, method);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v3);
    byte_4B18E53 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B169E0 )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, method);
    byte_4B169E0 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v4->static_fields->_WarId_k__BackingField;
  if ( !byte_4B1684E )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4B1684E = 1;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v4->static_fields->_QuestId_k__BackingField;
  if ( !clsQuestCheck__mfCheck_IsQuestNew((clsQuestCheck_o *)v4, QuestId_k__BackingField, v2) )
    return 0;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  return ScriptManager__isPlayQuestStart(WarId_k__BackingField, QuestId_k__BackingField, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__mfCheck_IsQuestNew(clsQuestCheck_o *this, int32_t qid, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18E44 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&qid);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B18E44 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
    byte_4B165D1 = 1;
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
                                0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.challengeNum == 0;
LABEL_15:
    sub_1BCB254(Instance, v7);
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall clsQuestCheck__mfGetQuestPhaseByQuestID(
        clsQuestCheck_o *this,
        int32_t qid,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18E45 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&qid);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B18E45 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
    byte_4B165D1 = 1;
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
         0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserQuestEntity__getQuestPhase(entity, 0LL);
LABEL_15:
    sub_1BCB254(Instance, v7);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__mfQuestReleaseCheckAlreadyClear(
        clsQuestCheck_o *this,
        int32_t qid,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  bool v9; // w8
  bool result; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18E41 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&qid);
    sub_1BCAFF8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B18E41 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               qid,
                               (const MethodInfo_32C7E4C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 1;
  if ( !entity )
LABEL_12:
    sub_1BCB254(Instance, v7);
  if ( (HIDWORD(entity[5].klass) | 4) != 5 )
    return 0;
  v9 = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, qid, 0, v8);
  result = 0;
  if ( v9 )
    return 1;
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(
        clsQuestCheck_o *this,
        int32_t questId,
        QuestReleaseEntity_o **questReleaseNG,
        MapControl_QuestInfo_o *questInfo,
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
  const MethodInfo *v34; // x2
  void *Master_object; // x0
  __int64 v36; // x1
  _BOOL8 IsShop; // x0
  const MethodInfo *v38; // x2
  Il2CppObject *v39; // x23
  clsQuestCheck_Fields *p_fields; // x23
  int32_t UseDiceSpotId; // w24
  System_Collections_Generic_List_T__o *qrs; // x24
  clsQuestCheck___c_c *v44; // x0
  System_Func_object__bool__o *_9__5_0; // x25
  Il2CppObject *v46; // x26
  struct clsQuestCheck___c_StaticFields *static_fields; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct BalanceConfig_StaticFields *v50; // x8
  QuestEntity_o *Mine; // x0
  UserEventQuestCooltimeMaster_o *v52; // x24
  UserEventQuestCooltimeEntity_o *v53; // x0
  UserEventQuestCooltimeEntity_o *v54; // x24
  int64_t Time; // x0
  int64_t clearedAt; // x26
  int64_t v57; // x25
  int32_t v58; // w2
  int v59; // w8
  struct System_Collections_Generic_List_QuestReleaseEntity__o *cQuestReleaseListP; // x23
  System_Comparison_T__o *v61; // x24
  Il2CppObject *v62; // x25
  struct clsQuestCheck___c_StaticFields *v63; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  UserQuestEntity_o *v66; // x0
  Il2CppObject *v67; // x23
  bool v68; // w23
  _BOOL8 v69; // x0
  __int64 v70; // x1
  const MethodInfo *v71; // x4
  Il2CppObject *current; // x22
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  int v75; // w19
  int32_t klass; // w24
  System_Collections_Generic_IEnumerable_T__o *v77; // x25
  System_Collections_Generic_List_object__o *v78; // x24
  const MethodInfo *v79; // x2
  BalanceConfig_c *v80; // x0
  const MethodInfo *v81; // x2
  BalanceConfig_c *v82; // x0
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  System_Collections_Generic_List_Enumerator_object__o v85; // [xsp+8h] [xbp-88h] BYREF
  Il2CppObject *v86; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF
  UserQuestEntity_o *v88; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4B18E37 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, *(_QWORD *)&questId);
    sub_1BCAFF8(&Method_BasicHelper_Any_QuestReleaseEntity___, v9);
    sub_1BCAFF8(&System_Comparison_QuestReleaseEntity__TypeInfo, v10);
    sub_1BCAFF8(&CondType_TypeInfo, v11);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventDetailMaster___, v12);
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestReleaseMaster___, v13);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___, v14);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserQuestMaster___, v15);
    sub_1BCAFF8(&Method_DataManager_GetMaster_WarMaster___, v16);
    sub_1BCAFF8(&DataManager_TypeInfo, v17);
    sub_1BCAFF8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v18);
    sub_1BCAFF8(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v21);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v22);
    sub_1BCAFF8(&System_Func_QuestReleaseEntity__bool__TypeInfo, v23);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__, v24);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__, v25);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v26);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__, v27);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___76871584, v28);
    sub_1BCAFF8(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v29);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v30);
    sub_1BCAFF8(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__, v31);
    sub_1BCAFF8(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__, v32);
    sub_1BCAFF8(&clsQuestCheck___c_TypeInfo, v33);
    byte_4B18E37 = 1;
  }
  v86 = 0LL;
  entity = 0LL;
  memset(&v85, 0, sizeof(v85));
  *questReleaseNG = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)questReleaseNG, 0, (int32_t)questReleaseNG, (const MethodInfo *)questInfo);
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, v34) )
    return 0;
  v88 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !questInfo || !Master_object )
    goto LABEL_107;
  IsShop = DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             questInfo->fields.warId,
             (const MethodInfo_32C7E4C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( IsShop )
  {
    Master_object = entity;
    if ( !entity )
      goto LABEL_107;
    IsShop = WarEntity__IsShop((WarEntity_o *)entity, 0LL);
    if ( !IsShop )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v39 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v36);
        byte_4B165D1 = 1;
      }
      Master_object = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Master_object = NetworkManager_TypeInfo;
      }
      if ( !v39 )
        goto LABEL_107;
      IsShop = UserQuestMaster__TryGetEntity(
                 (UserQuestMaster_o *)v39,
                 &v88,
                 *(_QWORD *)(*((_QWORD *)Master_object + 23) + 64LL),
                 questId,
                 0LL);
      if ( IsShop )
      {
        Master_object = v88;
        if ( !v88 )
          goto LABEL_107;
        IsShop = UserQuestEntity__IsNotExpired(v88, 0LL);
        if ( IsShop )
          return 1;
      }
    }
  }
  if ( !clsQuestCheck__IsValidQuestRandomGroup((clsQuestCheck_o *)IsShop, questInfo, v38) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object )
    goto LABEL_107;
  p_fields = &this->fields;
  QuestReleaseMaster__getListByQuestID_41680376((QuestReleaseMaster_o *)Master_object, questId, &this->fields.qrs, 0LL);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !entity || !Master_object )
    goto LABEL_107;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &v86,
         (int32_t)entity[6].klass,
         (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Master_object = v86;
    if ( !v86 )
      goto LABEL_107;
    if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v86, 0LL) )
    {
      Master_object = v86;
      if ( !v86 )
        goto LABEL_107;
      UseDiceSpotId = EventDetailEntity__GetUseDiceSpotId((EventDetailEntity_o *)v86, 0LL);
      if ( UseDiceSpotId == MapControl_QuestInfo__GetSpotID(questInfo, 0LL)
        && MapControl_QuestInfo__GetQuestType(questInfo, 0LL) == 1 )
      {
        qrs = (System_Collections_Generic_List_T__o *)p_fields->qrs;
        v44 = clsQuestCheck___c_TypeInfo;
        if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
          v44 = clsQuestCheck___c_TypeInfo;
        }
        _9__5_0 = (System_Func_object__bool__o *)v44->static_fields->__9__5_0;
        if ( !_9__5_0 )
        {
          if ( !v44->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v44);
            v44 = clsQuestCheck___c_TypeInfo;
          }
          v46 = (Il2CppObject *)v44->static_fields->__9;
          _9__5_0 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_QuestReleaseEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__5_0,
            v46,
            Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__,
            0LL);
          static_fields = clsQuestCheck___c_TypeInfo->static_fields;
          static_fields->__9__5_0 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__5_0;
          sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v48, v49);
        }
        if ( !BasicHelper__Any_object_(
                qrs,
                (System_Func_T__bool__o *)_9__5_0,
                (const MethodInfo_3003F1C *)Method_BasicHelper_Any_QuestReleaseEntity___) )
        {
          Master_object = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Master_object = BalanceConfig_TypeInfo;
          }
          v50 = (struct BalanceConfig_StaticFields *)*((_QWORD *)Master_object + 23);
          if ( v50->EventBoardGameNextBoardQuestId != questId )
          {
            if ( !*((_DWORD *)Master_object + 56) )
            {
              j_il2cpp_runtime_class_init_0(Master_object);
              v50 = BalanceConfig_TypeInfo->static_fields;
            }
            if ( v50->EventBoardGameNextRoundQuestId != questId )
            {
              if ( !entity )
                goto LABEL_107;
              klass = (int32_t)entity[6].klass;
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              if ( CondType__IsUserEventStatus(klass, 7, 0LL) )
                return 0;
              v77 = (System_Collections_Generic_IEnumerable_T__o *)p_fields->qrs;
              v78 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor_57382084(
                v78,
                v77,
                (const MethodInfo_36B94C4 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___76871584);
              v80 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v80 = BalanceConfig_TypeInfo;
              }
              if ( clsQuestCheck__CheckQuestPlayableNow(this, v80->static_fields->EventBoardGameNextBoardQuestId, v79) )
                return 0;
              v82 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v82 = BalanceConfig_TypeInfo;
              }
              if ( clsQuestCheck__CheckQuestPlayableNow(this, v82->static_fields->EventBoardGameNextRoundQuestId, v81) )
                return 0;
              p_fields->qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v78;
              sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)v78, v83, v84);
            }
          }
        }
      }
    }
  }
  Mine = MapControl_QuestInfo__GetMine(questInfo, 0LL);
  if ( Mine && QuestEntity__HasFlag(Mine, 0x10000000000000LL, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___);
    if ( !questInfo->fields._WarInfo_k__BackingField )
      goto LABEL_107;
    v52 = (UserEventQuestCooltimeMaster_o *)Master_object;
    Master_object = (void *)MapControl_WarInfo__GetEventId(questInfo->fields._WarInfo_k__BackingField, 0LL);
    if ( !v52 )
      goto LABEL_107;
    v53 = UserEventQuestCooltimeMaster__getEntity(v52, (int32_t)Master_object, questInfo->fields.questId, 1, 0LL);
    if ( v53 )
    {
      v54 = v53;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      clearedAt = v54->fields.clearedAt;
      v57 = Time;
      Master_object = UserEventQuestCooltimeEntity__GetMasterEntity(v54, 0LL);
      if ( !Master_object )
        goto LABEL_107;
      if ( v57 < clearedAt + *((int *)Master_object + 7) )
        return 0;
    }
  }
  if ( !p_fields->qrs )
    return 0;
  Master_object = this->fields.cQuestReleaseListP;
  if ( !Master_object )
    goto LABEL_107;
  v58 = *((_DWORD *)Master_object + 6);
  v59 = *((_DWORD *)Master_object + 7) + 1;
  *((_DWORD *)Master_object + 6) = 0;
  *((_DWORD *)Master_object + 7) = v59;
  if ( v58 >= 1 )
  {
    System_Array__Clear(*((System_Array_o **)Master_object + 2), 0, v58, 0LL);
    Master_object = this->fields.cQuestReleaseListP;
    if ( !Master_object )
      goto LABEL_107;
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Master_object,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.qrs,
    (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__);
  cQuestReleaseListP = this->fields.cQuestReleaseListP;
  Master_object = clsQuestCheck___c_TypeInfo;
  if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
    Master_object = clsQuestCheck___c_TypeInfo;
  }
  v61 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 16LL);
  if ( !v61 )
  {
    if ( !*((_DWORD *)Master_object + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = clsQuestCheck___c_TypeInfo;
    }
    v62 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
    v61 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_QuestReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(
      v61,
      v62,
      Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__,
      0LL);
    v63 = clsQuestCheck___c_TypeInfo->static_fields;
    v63->__9__5_1 = (struct System_Comparison_QuestReleaseEntity__o *)v61;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v63->__9__5_1, (int32_t)v61, v64, v65);
  }
  if ( !cQuestReleaseListP )
    goto LABEL_107;
  System_Collections_Generic_List_object___Sort_57390740(
    (System_Collections_Generic_List_object__o *)cQuestReleaseListP,
    v61,
    (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  v66 = v88;
  if ( v88 )
  {
LABEL_82:
    v68 = !UserQuestEntity__HasStatus(v66, 8, 0LL);
    goto LABEL_83;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v67 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v36);
    byte_4B165D1 = 1;
  }
  Master_object = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = NetworkManager_TypeInfo;
  }
  if ( !v67 )
LABEL_107:
    sub_1BCB254(Master_object, v36);
  UserQuestMaster__TryGetEntity(
    (UserQuestMaster_o *)v67,
    &v88,
    *(_QWORD *)(*((_QWORD *)Master_object + 23) + 64LL),
    questId,
    0LL);
  v66 = v88;
  if ( v88 )
    goto LABEL_82;
  v68 = 1;
LABEL_83:
  Master_object = this->fields.cQuestReleaseListP;
  if ( !Master_object )
    goto LABEL_107;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v85,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v69 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v85,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v69 )
      break;
    current = v85.fields._current;
    if ( v68 )
      goto LABEL_89;
    if ( !v85.fields._current )
      sub_1BCB254(v69, v70);
    if ( HIDWORD(v85.fields._current[1].klass) != 12 )
    {
LABEL_89:
      if ( !clsQuestCheck__IsQuestRelease_35188288(
              this,
              (QuestReleaseEntity_o *)v85.fields._current,
              -1,
              questInfo,
              v71) )
      {
        *questReleaseNG = (QuestReleaseEntity_o *)current;
        sub_1BCAF9C((CGThumbnailListItem_o *)questReleaseNG, (int32_t)current, v73, v74);
        v75 = 19;
        goto LABEL_92;
      }
    }
  }
  v75 = 20;
LABEL_92:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v85,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v75 != 19;
}


void __fastcall clsQuestCheck___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B18E5F & 1) == 0 )
  {
    sub_1BCAFF8(&clsQuestCheck___c_TypeInfo, v1);
    byte_4B18E5F = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(clsQuestCheck___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  clsQuestCheck___c_TypeInfo->static_fields->__9 = (struct clsQuestCheck___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)clsQuestCheck___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall clsQuestCheck___c___ctor(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_0(
        clsQuestCheck___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x21

  if ( (byte_4B18E60 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BCAFF8(&Method_clsQuestCheck___c__DisplayClass41_1__CheckQuestPlayable_b__4__, v5);
    sub_1BCAFF8(&clsQuestCheck___c__DisplayClass41_1_TypeInfo, v6);
    byte_4B18E60 = 1;
  }
  v7 = sub_1BCB244(clsQuestCheck___c__DisplayClass41_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_clsQuestCheck___c__DisplayClass41_1__CheckQuestPlayable_b__4__,
          0LL),
        !Instance) )
  {
    sub_1BCB254(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_1(
        clsQuestCheck___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x21

  if ( (byte_4B18E61 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BCAFF8(&Method_clsQuestCheck___c__DisplayClass41_2__CheckQuestPlayable_b__5__, v5);
    sub_1BCAFF8(&clsQuestCheck___c__DisplayClass41_2_TypeInfo, v6);
    byte_4B18E61 = 1;
  }
  v7 = sub_1BCB244(clsQuestCheck___c__DisplayClass41_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_clsQuestCheck___c__DisplayClass41_2__CheckQuestPlayable_b__5__,
          0LL),
        !Instance) )
  {
    sub_1BCB254(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v11, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_10(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B18E63 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4B18E63 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_30026EC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_12(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B18E64 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4B18E64 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_30026EC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_2(
        clsQuestCheck___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B18E65 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4B18E65 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_3(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_6(
        clsQuestCheck___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x21

  if ( (byte_4B18E62 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BCAFF8(&Method_clsQuestCheck___c__DisplayClass41_3__CheckQuestPlayable_b__7__, v5);
    sub_1BCAFF8(&clsQuestCheck___c__DisplayClass41_3_TypeInfo, v6);
    byte_4B18E62 = 1;
  }
  v7 = sub_1BCB244(clsQuestCheck___c__DisplayClass41_3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_clsQuestCheck___c__DisplayClass41_3__CheckQuestPlayable_b__7__,
          0LL),
        !Instance) )
  {
    sub_1BCB254(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v11, 0LL);
}


bool __fastcall clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_0(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1BCB254(this, 0LL);
  return n->fields.type == 118;
}


int32_t __fastcall clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_1(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *a,
        QuestReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCB254(this, a);
  return b->fields.imagePriority - a->fields.imagePriority;
}


void __fastcall clsQuestCheck___c__DisplayClass31_0___ctor(
        clsQuestCheck___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall clsQuestCheck___c__DisplayClass31_0___GetReleasedQuestEntityListByServantGet_b__0(
        clsQuestCheck___c__DisplayClass31_0_o *this,
        QuestEntity_o *n,
        const MethodInfo *method)
{
  struct QuestEntity_o *questEnt; // x8

  if ( !n || (questEnt = this->fields.questEnt) == 0LL )
    sub_1BCB254(this, n);
  return n->fields.id == questEnt->fields.id;
}


void __fastcall clsQuestCheck___c__DisplayClass31_1___ctor(
        clsQuestCheck___c__DisplayClass31_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall clsQuestCheck___c__DisplayClass31_1___GetReleasedQuestEntityListByServantGet_b__1(
        clsQuestCheck___c__DisplayClass31_1_o *this,
        QuestEntity_o *n,
        const MethodInfo *method)
{
  struct QuestEntity_o *questEnt; // x8

  if ( !n || (questEnt = this->fields.questEnt) == 0LL )
    sub_1BCB254(this, n);
  return n->fields.id == questEnt->fields.id;
}


void __fastcall clsQuestCheck___c__DisplayClass40_0___ctor(
        clsQuestCheck___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall clsQuestCheck___c__DisplayClass40_0___IsTapSkipQuestStart_b__0(
        clsQuestCheck___c__DisplayClass40_0_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_String__op_Equality(a, this->fields.effectName, 0LL);
}


void __fastcall clsQuestCheck___c__DisplayClass41_0___ctor(
        clsQuestCheck___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall clsQuestCheck___c__DisplayClass41_0___CheckQuestPlayable_b__11(
        clsQuestCheck___c__DisplayClass41_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( !this->fields.__4__this )
    sub_1BCB254(this, result);
  clsQuestCheck__RecoverItemListDialogCallback(
    this->fields.__4__this,
    this->fields.questInfo,
    this->fields.srcEndTime,
    result,
    this->fields.boostId,
    v3);
}


void __fastcall clsQuestCheck___c__DisplayClass41_0___CheckQuestPlayable_b__8(
        clsQuestCheck___c__DisplayClass41_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( !this->fields.__4__this )
    sub_1BCB254(this, result);
  clsQuestCheck__RecoverItemListDialogCallback(
    this->fields.__4__this,
    this->fields.questInfo,
    this->fields.srcEndTime,
    result,
    this->fields.boostId,
    v3);
}


void __fastcall clsQuestCheck___c__DisplayClass41_0___CheckQuestPlayable_b__9(
        clsQuestCheck___c__DisplayClass41_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( !this->fields.__4__this )
    sub_1BCB254(this, result);
  clsQuestCheck__RecoverItemListDialogCallback(
    this->fields.__4__this,
    this->fields.questInfo,
    this->fields.srcEndTime,
    result,
    this->fields.boostId,
    v3);
}


void __fastcall clsQuestCheck___c__DisplayClass41_1___ctor(
        clsQuestCheck___c__DisplayClass41_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall clsQuestCheck___c__DisplayClass41_1___CheckQuestPlayable_b__4(
        clsQuestCheck___c__DisplayClass41_1_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v8; // x20
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  int32_t v11; // w1
  Il2CppObject *v12; // x3

  if ( (byte_4B18E66 & 1) == 0 )
  {
    sub_1BCAFF8(&SceneJumpInfo_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1BCAFF8(&StringLiteral_12573/*"SellServant"*/, v4);
    sub_1BCAFF8(&StringLiteral_12609/*"ServantCombine"*/, v5);
    byte_4B18E66 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_1BCB244(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_40654628(v8, (System_String_o *)StringLiteral_12573/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v11 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1BCB254(v9, v10);
    case 1:
      v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v9 )
      {
        v11 = 71;
        v12 = 0LL;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_1BCB244(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_40654540(v8, (System_String_o *)StringLiteral_12609/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v11 = 32;
LABEL_10:
        v9 = Instance;
        v12 = (Il2CppObject *)v8;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v9, v11, 1, v12, 0LL);
        return;
      }
      goto LABEL_15;
  }
}


void __fastcall clsQuestCheck___c__DisplayClass41_2___ctor(
        clsQuestCheck___c__DisplayClass41_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall clsQuestCheck___c__DisplayClass41_2___CheckQuestPlayable_b__5(
        clsQuestCheck___c__DisplayClass41_2_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w1

  if ( (byte_4B18E67 & 1) == 0 )
  {
    sub_1BCAFF8(&SceneJumpInfo_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1BCAFF8(&StringLiteral_12613/*"ServantEquipList"*/, v4);
    sub_1BCAFF8(&StringLiteral_12573/*"SellServant"*/, v5);
    sub_1BCAFF8(&StringLiteral_12612/*"ServantEQCombine"*/, v6);
    byte_4B18E67 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_1BCB244(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_40654628(v9, (System_String_o *)StringLiteral_12573/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v12 = 22;
        goto LABEL_12;
      }
LABEL_14:
      sub_1BCB254(v10, v11);
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_1BCB244(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_40654540(v9, (System_String_o *)StringLiteral_12613/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v12 = 71;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_1BCB244(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_40654540(v9, (System_String_o *)StringLiteral_12612/*"ServantEQCombine"*/, 0LL);
      if ( Instance )
      {
        v12 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v12, 1, (Il2CppObject *)v9, 0LL);
        return;
      }
      goto LABEL_14;
  }
}


void __fastcall clsQuestCheck___c__DisplayClass41_3___ctor(
        clsQuestCheck___c__DisplayClass41_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall clsQuestCheck___c__DisplayClass41_3___CheckQuestPlayable_b__7(
        clsQuestCheck___c__DisplayClass41_3_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B18E68 & 1) == 0 )
  {
    sub_1BCAFF8(&SceneJumpInfo_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1BCAFF8(&StringLiteral_12573/*"SellServant"*/, v4);
    byte_4B18E68 = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v6 = (SceneJumpInfo_o *)sub_1BCB244(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_40654628(v6, (System_String_o *)StringLiteral_12573/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_1BCB254(v7, v8);
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v6, 0LL);
  }
}