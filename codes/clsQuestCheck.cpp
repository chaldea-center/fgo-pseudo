void __fastcall clsQuestCheck___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_48DF4F5 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_10791/*"QuestStartEffect"*/, v1);
    sub_1B00CCC(&clsQuestCheck_TypeInfo, v4);
    byte_48DF4F5 = 1;
  }
  clsQuestCheck_TypeInfo->static_fields->KEY_QUEST_START_EFFECT = (struct System_String_o *)StringLiteral_10791/*"QuestStartEffect"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)clsQuestCheck_TypeInfo->static_fields, StringLiteral_10791/*"QuestStartEffect"*/, v2, v3);
}


void __fastcall clsQuestCheck___ctor(clsQuestCheck_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_48DF4F4 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, method);
    sub_1B00CCC(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v3);
    sub_1B00CCC(&Method_SingletonTemplate_clsQuestCheck___ctor__, v4);
    byte_48DF4F4 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v5;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v5, v6, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.cQuestReleaseListP = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v8;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.cQuestReleaseListP, (int32_t)v8, v9, v10);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_35FC108 *)Method_SingletonTemplate_clsQuestCheck___ctor__);
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
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x24
  int64_t SpotID; // x0
  __int64 v53; // x1
  int32_t v54; // w2
  int32_t v55; // w3
  MapControl_QuestInfo_o **v56; // x19
  int32_t v57; // w2
  int32_t v58; // w3
  int32_t v59; // w23
  MapControl_QuestInfo_o *v60; // x8
  int32_t v61; // w20
  int32_t questPhase; // w29
  int32_t v63; // w28
  MapControl_QuestInfo_o *v64; // x8
  _BOOL4 isNotItemConsume; // w21
  int32_t v66; // w25
  int v67; // w26
  bool IsQuestReleaseAll; // w0
  Il2CppObject *MasterData_object; // x26
  UserQuestEntity_o *Entity; // x0
  __int64 v71; // x26
  int64_t Time; // x0
  System_String_o *v73; // x19
  System_String_o *v74; // x20
  CommonUI_o *v75; // x21
  clsQuestCheck___c_c *v76; // x8
  System_Action_o *_9__41_3; // x22
  Il2CppObject *v78; // x23
  int32_t v79; // w2
  int32_t v80; // w3
  int32_t v81; // w1
  struct clsQuestCheck___c_StaticFields *static_fields; // x0
  ServantStatusBattleListViewItem_o *p__9__41_3; // x0
  UserGameEntity_o *v84; // x26
  QuestEntity_o *v85; // x27
  clsQuestCheck___c_c *v86; // x8
  Il2CppObject *v87; // x23
  struct clsQuestCheck___c_StaticFields *v88; // x0
  TerminalPramsManager_c *v89; // x0
  int32_t v90; // w20
  int32_t v91; // w23
  int64_t v92; // x28
  struct TerminalPramsManager_StaticFields *v93; // x8
  UserServantMaster_o *v94; // x28
  Il2CppObject *v95; // x29
  CommonUI_o *v96; // x19
  int32_t v97; // w20
  int32_t svtKeep; // w21
  ServantFrameShortDlgComponent_CallbackFunc_o *v99; // x22
  Il2CppObject *v100; // x23
  struct clsQuestCheck___c_StaticFields *v101; // x0
  int32_t v102; // w2
  int32_t v103; // w3
  CommonUI_o *v104; // x0
  int32_t v105; // w1
  int32_t v106; // w2
  int32_t v107; // w3
  CommonUI_o *v108; // x19
  int32_t v109; // w20
  int32_t svtEquipKeep; // w21
  Il2CppObject *v111; // x23
  struct clsQuestCheck___c_StaticFields *v112; // x0
  int32_t v113; // w2
  int32_t v114; // w3
  int32_t Count; // w19
  CommonUI_o *v116; // x20
  BalanceConfig_c *v117; // x8
  Il2CppObject *v118; // x23
  struct clsQuestCheck___c_StaticFields *v119; // x0
  int32_t v120; // w2
  int32_t v121; // w3
  bool v122; // w25
  int32_t v124; // w29
  int32_t v125; // w28
  Il2CppObject *Instance; // x19
  RecoverDlgComponent_CallbackFunc_o *v127; // x20
  CommonUI_o *v128; // x0
  int32_t v129; // w1
  RecoverDlgComponent_CallbackFunc_o *v130; // x2
  bool v131; // w3
  Il2CppObject *v132; // x19
  RecoverDlgComponent_CallbackFunc_o *v133; // x20
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x24
  Il2CppObject *v135; // x25
  Il2CppObject *v136; // x27
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v138; // x23
  System_String_o *v139; // x21
  int32_t v140; // w29
  System_String_o *v141; // x20
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v143; // x8
  int64_t v144; // x28
  int64_t v145; // x26
  int32_t qp; // w8
  struct System_Int32_array *nums; // x9
  System_String_o *v148; // x0
  System_String_o *v149; // x0
  System_String_o *v150; // x19
  System_String_o *v151; // x0
  System_String_o *v152; // x19
  CommonUI_o *v153; // x20
  clsQuestCheck___c_c *v154; // x8
  System_String_o *v155; // x21
  System_Action_o *_9__41_11; // x22
  Il2CppObject *v157; // x23
  int32_t v158; // w2
  int32_t v159; // w3
  struct clsQuestCheck___c_StaticFields *v160; // x0
  ServantStatusBattleListViewItem_o *p__9__41_11; // x0
  Il2CppObject *v162; // x19
  RecoverDlgComponent_CallbackFunc_o *v163; // x20
  QuestConsumeItemEntity_o *v164; // x24
  Il2CppObject *v165; // x25
  Il2CppObject *v166; // x27
  UserGameEntity_o *v167; // x0
  UserGameEntity_o *v168; // x23
  System_String_o *v169; // x21
  int32_t v170; // w29
  System_String_o *v171; // x20
  struct System_Int32_array *v172; // x8
  struct System_Int32_array *v173; // x8
  int64_t v174; // x28
  int64_t v175; // x26
  int32_t v176; // w8
  struct System_Int32_array *v177; // x9
  Il2CppObject *v178; // x0
  __int64 v179; // x1
  TerminalPramsManager_c *v180; // x0
  int v181; // w8
  TerminalPramsManager_c *v182; // x0
  __int64 v183; // x1
  int32_t VaildPayType; // w21
  TerminalPramsManager_c *v185; // x0
  MapControl_QuestInfo_o *v186; // x8
  QuestMessageMaster_o *v187; // x19
  int32_t v188; // w2
  System_String_o *ValidMessage; // x0
  System_String_o *v190; // x19
  Il2CppObject *v191; // x20
  System_String_o *v192; // x21
  System_String_o *v193; // x22
  clsQuestCheck___c_c *v194; // x8
  CommonConfirmDialog_ClickDelegate_o *_9__41_2; // x24
  System_String_o *v196; // x23
  Il2CppObject *v197; // x25
  struct clsQuestCheck___c_StaticFields *v198; // x0
  int32_t v199; // w2
  int32_t v200; // w3
  System_String_o *v201; // x0
  System_String_o *v202; // x0
  System_String_o *v203; // x19
  System_String_o *v204; // x0
  clsQuestCheck___c_c *v205; // x8
  Il2CppObject *v206; // x23
  struct clsQuestCheck___c_StaticFields *v207; // x0
  int32_t v208; // [xsp+34h] [xbp-7Ch]
  int32_t v209; // [xsp+34h] [xbp-7Ch]
  int32_t v210; // [xsp+38h] [xbp-78h]
  int32_t v211; // [xsp+38h] [xbp-78h]
  char v212; // [xsp+3Ch] [xbp-74h]
  char v213; // [xsp+3Ch] [xbp-74h]
  int32_t v214; // [xsp+40h] [xbp-70h]
  int32_t questId; // [xsp+44h] [xbp-6Ch]
  int32_t servantEquipSum[2]; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_48DF4F2 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, questInfo);
    sub_1B00CCC(&RecoverDlgComponent_CallbackFunc_TypeInfo, v9);
    sub_1B00CCC(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, v10);
    sub_1B00CCC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11);
    sub_1B00CCC(&Method_DataManager_GetMasterData_GachaMaster___, v12);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ItemMaster___, v13);
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestMessageMaster___, v14);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v15);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserItemMaster___, v16);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserQuestMaster___, v17);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserServantMaster___, v18);
    sub_1B00CCC(&Method_DataManager_GetMasterData_WarMaster___, v19);
    sub_1B00CCC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v20);
    sub_1B00CCC(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v21);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v22);
    sub_1B00CCC(&NetworkManager_TypeInfo, v23);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v24);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v26);
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v27);
    sub_1B00CCC(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_0__, v28);
    sub_1B00CCC(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_11__, v29);
    sub_1B00CCC(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_13__, v30);
    sub_1B00CCC(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_1__, v31);
    sub_1B00CCC(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_2__, v32);
    sub_1B00CCC(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_3__, v33);
    sub_1B00CCC(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_4__, v34);
    sub_1B00CCC(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_7__, v35);
    sub_1B00CCC(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__10__, v36);
    sub_1B00CCC(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__12__, v37);
    sub_1B00CCC(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__9__, v38);
    sub_1B00CCC(&clsQuestCheck___c__DisplayClass41_0_TypeInfo, v39);
    sub_1B00CCC(&clsQuestCheck___c_TypeInfo, v40);
    sub_1B00CCC(&StringLiteral_43/*"\n"*/, v41);
    sub_1B00CCC(&StringLiteral_10750/*"QUEST_MESSAGE_DLG_DECIDE"*/, v42);
    sub_1B00CCC(&StringLiteral_10749/*"QUEST_MESSAGE_DLG_CANCEL"*/, v43);
    sub_1B00CCC(&StringLiteral_10748/*"QUEST_ITEM_COST_OVER"*/, v44);
    sub_1B00CCC(&StringLiteral_10777/*"QUEST_TIME_OVER"*/, v45);
    sub_1B00CCC(&StringLiteral_11914/*"SHORT_DLG_TITLE"*/, v46);
    sub_1B00CCC(&StringLiteral_44/*"\n\n"*/, v47);
    sub_1B00CCC(&StringLiteral_2949/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, v48);
    sub_1B00CCC(&StringLiteral_1/*""*/, v49);
    sub_1B00CCC(&StringLiteral_10691/*"QUEST_AP_MAX_OVER"*/, v50);
    byte_48DF4F2 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  v51 = sub_1B00F18(clsQuestCheck___c__DisplayClass41_0_TypeInfo);
  clsQuestCheck___c__DisplayClass41_0___ctor((clsQuestCheck___c__DisplayClass41_0_o *)v51, 0LL);
  if ( !v51 )
    goto LABEL_251;
  *(_QWORD *)(v51 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v51 + 16), (int32_t)this, v54, v55);
  *(_QWORD *)(v51 + 24) = questInfo;
  v56 = (MapControl_QuestInfo_o **)(v51 + 24);
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v51 + 24), (int32_t)questInfo, v57, v58);
  SpotID = *(_QWORD *)(v51 + 24);
  *(_QWORD *)(v51 + 32) = srcEndTime;
  *(_DWORD *)(v51 + 40) = boostId;
  if ( !SpotID )
    goto LABEL_251;
  v59 = *(_DWORD *)(SpotID + 64);
  SpotID = MapControl_QuestInfo__GetSpotID((MapControl_QuestInfo_o *)SpotID, 0LL);
  v60 = *v56;
  if ( !*v56 )
    goto LABEL_251;
  v61 = v60->fields.questId;
  questPhase = v60->fields.questPhase;
  v63 = SpotID;
  SpotID = (int64_t)MapControl_QuestInfo__GetMine(*v56, 0LL);
  if ( !*v56 )
    goto LABEL_251;
  if ( !SpotID )
    goto LABEL_251;
  SpotID = QuestEntity__getActConsume((QuestEntity_o *)SpotID, (*v56)->fields.costCalcVal, 0LL);
  v64 = *v56;
  if ( !*v56 )
    goto LABEL_251;
  isNotItemConsume = v64->fields.isNotItemConsume;
  v66 = v64->fields._fixedCostVal_k__BackingField >= 0 ? v64->fields._fixedCostVal_k__BackingField : SpotID;
  SpotID = (int64_t)MapControl_QuestInfo__GetMine(*v56, 0LL);
  if ( !SpotID )
    goto LABEL_251;
  v67 = *(_DWORD *)(SpotID + 80);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IsQuestReleaseAll = TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
  if ( v67 != 1 && !IsQuestReleaseAll )
  {
    SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SpotID )
      goto LABEL_251;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)SpotID,
                          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    SpotID = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      goto LABEL_251;
    Entity = UserQuestMaster__GetEntity((UserQuestMaster_o *)MasterData_object, SpotID, v61, 0LL);
    if ( !Entity || !UserQuestEntity__IsNotExpired(Entity, 0LL) )
    {
      v71 = *(_QWORD *)(v51 + 32);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      if ( v71 >= 1 && v71 - Time <= 0 )
      {
        v73 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v74 = LocalizationManager__Get((System_String_o *)StringLiteral_10777/*"QUEST_TIME_OVER"*/, 0LL);
        SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v75 = (CommonUI_o *)SpotID;
        v76 = clsQuestCheck___c_TypeInfo;
        if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
          v76 = clsQuestCheck___c_TypeInfo;
        }
        _9__41_3 = v76->static_fields->__9__41_3;
        if ( _9__41_3 )
          goto LABEL_49;
        if ( !v76->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v76);
          v76 = clsQuestCheck___c_TypeInfo;
        }
        v78 = (Il2CppObject *)v76->static_fields->__9;
        _9__41_3 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
        System_Action___ctor(_9__41_3, v78, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_3__, 0LL);
        v81 = (int)_9__41_3;
        static_fields = clsQuestCheck___c_TypeInfo->static_fields;
        static_fields->__9__41_3 = _9__41_3;
        p__9__41_3 = (ServantStatusBattleListViewItem_o *)&static_fields->__9__41_3;
LABEL_48:
        sub_1B00C70(p__9__41_3, v81, v79, v80);
LABEL_49:
        if ( !v75 )
          goto LABEL_251;
        CommonUI__OpenNotificationDialog(v75, v73, v74, _9__41_3, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
        goto LABEL_101;
      }
    }
  }
  SpotID = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !*v56 )
    goto LABEL_251;
  v84 = (UserGameEntity_o *)SpotID;
  SpotID = (int64_t)MapControl_QuestInfo__GetMine(*v56, 0LL);
  if ( !SpotID )
    goto LABEL_251;
  v85 = (QuestEntity_o *)SpotID;
  SpotID = QuestEntity__GetConsumeType((QuestEntity_o *)SpotID, 0LL);
  if ( (_DWORD)SpotID == 1 )
  {
    if ( !v84 )
      goto LABEL_251;
    if ( v66 > v84->fields.actMax )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v73 = LocalizationManager__Get((System_String_o *)StringLiteral_11914/*"SHORT_DLG_TITLE"*/, 0LL);
      v74 = LocalizationManager__Get((System_String_o *)StringLiteral_10691/*"QUEST_AP_MAX_OVER"*/, 0LL);
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v75 = (CommonUI_o *)SpotID;
      v86 = clsQuestCheck___c_TypeInfo;
      if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
        v86 = clsQuestCheck___c_TypeInfo;
      }
      _9__41_3 = v86->static_fields->__9__41_4;
      if ( _9__41_3 )
        goto LABEL_49;
      if ( !v86->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v86);
        v86 = clsQuestCheck___c_TypeInfo;
      }
      v87 = (Il2CppObject *)v86->static_fields->__9;
      _9__41_3 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(_9__41_3, v87, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_4__, 0LL);
      v81 = (int)_9__41_3;
      v88 = clsQuestCheck___c_TypeInfo->static_fields;
      v88->__9__41_4 = _9__41_3;
      p__9__41_3 = (ServantStatusBattleListViewItem_o *)&v88->__9__41_4;
      goto LABEL_48;
    }
  }
  v214 = v63;
  questId = v61;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_48DF507 )
  {
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v53);
    byte_48DF507 = 1;
  }
  v89 = TerminalPramsManager_TypeInfo;
  v90 = v59;
  v91 = questPhase;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v89 = TerminalPramsManager_TypeInfo;
  }
  v89->static_fields->_QuestId_k__BackingField = questId;
  v92 = *(_QWORD *)(v51 + 32);
  if ( !byte_48DF508 )
  {
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v53);
    v89 = TerminalPramsManager_TypeInfo;
    byte_48DF508 = 1;
  }
  if ( !v89->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v89);
    v89 = TerminalPramsManager_TypeInfo;
  }
  v93 = v89->static_fields;
  v93->_EndTime_k__BackingField = v92;
  v93->lastPlayQuestConsumeAp = v66;
  TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(0LL);
  SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_251;
  SpotID = (int64_t)DataManager__GetMasterData_object_(
                      (DataManager_o *)SpotID,
                      (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SpotID )
    goto LABEL_251;
  v94 = (UserServantMaster_o *)SpotID;
  UserServantMaster__getCount((UserServantMaster_o *)SpotID, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_251;
  v95 = DataManager__GetMasterData_object_(
          (DataManager_o *)SpotID,
          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v94, 1, 0LL) )
  {
    SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v84 )
      goto LABEL_251;
    v96 = (CommonUI_o *)SpotID;
    v97 = servantEquipSum[1];
    svtKeep = v84->fields.svtKeep;
    SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
      SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    }
    v99 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(SpotID + 184) + 40LL);
    if ( !v99 )
    {
      if ( !*(_DWORD *)(SpotID + 224) )
      {
        j_il2cpp_runtime_class_init_0(SpotID);
        SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
      }
      v100 = **(Il2CppObject ***)(SpotID + 184);
      v99 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B00F18(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v99,
        v100,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__41_0__,
        0LL);
      v101 = clsQuestCheck___c_TypeInfo->static_fields;
      v101->__9__41_0 = v99;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v101->__9__41_0, (int32_t)v99, v102, v103);
    }
    if ( !v96 )
      goto LABEL_251;
    v104 = v96;
    v105 = v97;
    v106 = svtKeep;
    v107 = 0;
    goto LABEL_100;
  }
  SpotID = UserServantMaster__CheckEquipAdd(v94, 1, 1, 0LL);
  if ( (SpotID & 1) != 0 )
  {
    SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v84 )
      goto LABEL_251;
    v108 = (CommonUI_o *)SpotID;
    v109 = servantEquipSum[0];
    svtEquipKeep = v84->fields.svtEquipKeep;
    SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
      SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    }
    v99 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(SpotID + 184) + 48LL);
    if ( !v99 )
    {
      if ( !*(_DWORD *)(SpotID + 224) )
      {
        j_il2cpp_runtime_class_init_0(SpotID);
        SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
      }
      v111 = **(Il2CppObject ***)(SpotID + 184);
      v99 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B00F18(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v99,
        v111,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__41_1__,
        0LL);
      v112 = clsQuestCheck___c_TypeInfo->static_fields;
      v112->__9__41_1 = v99;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v112->__9__41_1, (int32_t)v99, v113, v114);
    }
    if ( !v108 )
      goto LABEL_251;
    v107 = 1;
    v104 = v108;
    v105 = v109;
LABEL_99:
    v106 = svtEquipKeep;
LABEL_100:
    CommonUI__OpenSvtFrameShortDlg(v104, v105, v106, v107, 1, v99, 0, 0LL);
LABEL_101:
    SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( SpotID )
    {
      ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)SpotID, 0LL);
      return 0;
    }
    goto LABEL_251;
  }
  if ( !v95 )
    goto LABEL_251;
  if ( UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)v95, 0, 0LL) )
  {
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)v95, 0LL);
    SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v84 )
      goto LABEL_251;
    v116 = (CommonUI_o *)SpotID;
    if ( !byte_48DE284 )
    {
      sub_1B00CCC(&BalanceConfig_TypeInfo, v53);
      byte_48DE284 = 1;
    }
    v117 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v117 = BalanceConfig_TypeInfo;
    }
    SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    svtEquipKeep = v117->static_fields->CommandCodeFrameMax;
    if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
      SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    }
    v99 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(SpotID + 184) + 56LL);
    if ( !v99 )
    {
      if ( !*(_DWORD *)(SpotID + 224) )
      {
        j_il2cpp_runtime_class_init_0(SpotID);
        SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
      }
      v118 = **(Il2CppObject ***)(SpotID + 184);
      v99 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B00F18(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v99,
        v118,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__41_7__,
        0LL);
      v119 = clsQuestCheck___c_TypeInfo->static_fields;
      v119->__9__41_7 = v99;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v119->__9__41_7, (int32_t)v99, v120, v121);
    }
    if ( !v116 )
      goto LABEL_251;
    v107 = 2;
    v104 = v116;
    v105 = Count;
    goto LABEL_99;
  }
  SpotID = QuestEntity__GetConsumeType(v85, 0LL);
  v124 = v90;
  v125 = v91;
  switch ( (int)SpotID )
  {
    case 1:
      if ( !v84 )
        goto LABEL_251;
      if ( v66 <= UserGameEntity__getAct(v84, 0LL) )
        goto LABEL_181;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v127 = (RecoverDlgComponent_CallbackFunc_o *)sub_1B00F18(RecoverDlgComponent_CallbackFunc_TypeInfo);
      RecoverDlgComponent_CallbackFunc___ctor(
        v127,
        (Il2CppObject *)v51,
        Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__9__,
        0LL);
      if ( !Instance )
        goto LABEL_251;
      v128 = (CommonUI_o *)Instance;
      v129 = v66;
      v130 = v127;
      v131 = 0;
      goto LABEL_153;
    case 2:
      if ( !v84 )
        goto LABEL_251;
      if ( v66 <= UserGameEntity__getRp(v84, 0LL) )
        goto LABEL_181;
      v132 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v133 = (RecoverDlgComponent_CallbackFunc_o *)sub_1B00F18(RecoverDlgComponent_CallbackFunc_TypeInfo);
      RecoverDlgComponent_CallbackFunc___ctor(
        v133,
        (Il2CppObject *)v51,
        Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__10__,
        0LL);
      if ( !v132 )
        goto LABEL_251;
      CommonUI__OpenRpRecoverItemListDialog((CommonUI_o *)v132, v66, v133, 0, 0LL);
      return 0;
    case 3:
      ItemConsumeEntity = QuestEntity__getItemConsumeEntity(v85, isNotItemConsume, 0LL);
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_251;
      v135 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserItemMaster___);
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_251;
      v136 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ItemMaster___);
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      if ( !ItemConsumeEntity )
        goto LABEL_181;
      v138 = SelfUserGame;
      v139 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL) )
        goto LABEL_181;
      v208 = v90;
      v210 = v125;
      v140 = 0;
      v141 = v139;
      v212 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        SpotID = NetworkManager__get_UserId(0LL);
        itemIds = ItemConsumeEntity->fields.itemIds;
        if ( !itemIds )
          goto LABEL_251;
        if ( v140 >= itemIds->max_length )
          goto LABEL_252;
        if ( !v135 )
          goto LABEL_251;
        SpotID = (int64_t)UserItemMaster__GetEntity((UserItemMaster_o *)v135, SpotID, itemIds->m_Items[v140 + 1], 0LL);
        v143 = ItemConsumeEntity->fields.itemIds;
        if ( !v143 )
          goto LABEL_251;
        if ( v140 >= v143->max_length )
          goto LABEL_252;
        if ( !v136 )
          goto LABEL_251;
        v144 = SpotID;
        SpotID = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)v136,
                            v143->m_Items[v140 + 1],
                            (const MethodInfo_2FE6A4C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !SpotID )
          goto LABEL_251;
        v145 = SpotID;
        if ( *(_DWORD *)(SpotID + 48) == 1 )
        {
          if ( !v138 )
            goto LABEL_251;
          qp = v138->fields.qp;
        }
        else if ( v144 && (SpotID = ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0LL), (SpotID & 1) != 0) )
        {
          qp = *(_DWORD *)(v144 + 28);
        }
        else
        {
          qp = 0;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_251;
        if ( v140 >= nums->max_length )
          goto LABEL_252;
        if ( nums->m_Items[v140 + 1] > qp )
        {
          v141 = System_String__Concat_60337008(
                   v141,
                   (System_String_o *)StringLiteral_43/*"\n"*/,
                   *(System_String_o **)(v145 + 24),
                   0LL);
          v212 = 1;
        }
        ++v140;
      }
      while ( QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, v140, 0LL) );
      v124 = v208;
      v125 = v210;
      if ( (v212 & 1) == 0 )
        goto LABEL_181;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v148 = LocalizationManager__Get((System_String_o *)StringLiteral_10748/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v149 = System_String__Format(v148, (Il2CppObject *)v141, 0LL);
      v150 = System_String__Concat_60325748(v149, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
      v151 = LocalizationManager__Get((System_String_o *)StringLiteral_2949/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v152 = System_String__Concat_60325748(v150, v151, 0LL);
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v153 = (CommonUI_o *)SpotID;
      v154 = clsQuestCheck___c_TypeInfo;
      if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
        v154 = clsQuestCheck___c_TypeInfo;
      }
      v155 = (System_String_o *)StringLiteral_1/*""*/;
      _9__41_11 = v154->static_fields->__9__41_11;
      if ( _9__41_11 )
        goto LABEL_249;
      if ( !v154->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v154);
        v154 = clsQuestCheck___c_TypeInfo;
      }
      v157 = (Il2CppObject *)v154->static_fields->__9;
      _9__41_11 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(_9__41_11, v157, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_11__, 0LL);
      v160 = clsQuestCheck___c_TypeInfo->static_fields;
      v160->__9__41_11 = _9__41_11;
      p__9__41_11 = (ServantStatusBattleListViewItem_o *)&v160->__9__41_11;
      goto LABEL_248;
    case 4:
      if ( !v84 )
        goto LABEL_251;
      if ( v66 > UserGameEntity__getAct(v84, 0LL) )
      {
        v162 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v163 = (RecoverDlgComponent_CallbackFunc_o *)sub_1B00F18(RecoverDlgComponent_CallbackFunc_TypeInfo);
        RecoverDlgComponent_CallbackFunc___ctor(
          v163,
          (Il2CppObject *)v51,
          Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__12__,
          0LL);
        if ( v162 )
        {
          v131 = 1;
          v128 = (CommonUI_o *)v162;
          v129 = v66;
          v130 = v163;
LABEL_153:
          CommonUI__OpenApRecoverItemListDialog(v128, v129, v130, v131, 0LL);
          return 0;
        }
LABEL_251:
        sub_1B00F28(SpotID, v53);
      }
      v164 = QuestEntity__getItemConsumeEntity(v85, isNotItemConsume, 0LL);
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_251;
      v165 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserItemMaster___);
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_251;
      v166 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ItemMaster___);
      v167 = UserGameMaster__getSelfUserGame(0LL);
      if ( v164 )
      {
        v168 = v167;
        v169 = (System_String_o *)StringLiteral_1/*""*/;
        if ( QuestConsumeItemEntity__IsAvailableAt(v164, 0, 0LL) )
        {
          v209 = v90;
          v211 = v125;
          v170 = 0;
          v171 = v169;
          v213 = 0;
          do
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            SpotID = NetworkManager__get_UserId(0LL);
            v172 = v164->fields.itemIds;
            if ( !v172 )
              goto LABEL_251;
            if ( v170 >= v172->max_length )
              goto LABEL_252;
            if ( !v165 )
              goto LABEL_251;
            SpotID = (int64_t)UserItemMaster__GetEntity((UserItemMaster_o *)v165, SpotID, v172->m_Items[v170 + 1], 0LL);
            v173 = v164->fields.itemIds;
            if ( !v173 )
              goto LABEL_251;
            if ( v170 >= v173->max_length )
              goto LABEL_252;
            if ( !v166 )
              goto LABEL_251;
            v174 = SpotID;
            SpotID = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v166,
                                v173->m_Items[v170 + 1],
                                (const MethodInfo_2FE6A4C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( !SpotID )
              goto LABEL_251;
            v175 = SpotID;
            if ( *(_DWORD *)(SpotID + 48) == 1 )
            {
              if ( !v168 )
                goto LABEL_251;
              v176 = v168->fields.qp;
            }
            else if ( v174 && (SpotID = ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0LL), (SpotID & 1) != 0) )
            {
              v176 = *(_DWORD *)(v174 + 28);
            }
            else
            {
              v176 = 0;
            }
            v177 = v164->fields.nums;
            if ( !v177 )
              goto LABEL_251;
            if ( v170 >= v177->max_length )
LABEL_252:
              sub_1B00F30(SpotID, v53);
            if ( v177->m_Items[v170 + 1] > v176 )
            {
              v171 = System_String__Concat_60337008(
                       v171,
                       (System_String_o *)StringLiteral_43/*"\n"*/,
                       *(System_String_o **)(v175 + 24),
                       0LL);
              v213 = 1;
            }
            ++v170;
          }
          while ( QuestConsumeItemEntity__IsAvailableAt(v164, v170, 0LL) );
          v124 = v209;
          v125 = v211;
          if ( (v213 & 1) != 0 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v201 = LocalizationManager__Get((System_String_o *)StringLiteral_10748/*"QUEST_ITEM_COST_OVER"*/, 0LL);
            v202 = System_String__Format(v201, (Il2CppObject *)v171, 0LL);
            v203 = System_String__Concat_60325748(v202, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
            v204 = LocalizationManager__Get((System_String_o *)StringLiteral_2949/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
            v152 = System_String__Concat_60325748(v203, v204, 0LL);
            SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v153 = (CommonUI_o *)SpotID;
            v205 = clsQuestCheck___c_TypeInfo;
            if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
              v205 = clsQuestCheck___c_TypeInfo;
            }
            v155 = (System_String_o *)StringLiteral_1/*""*/;
            _9__41_11 = v205->static_fields->__9__41_13;
            if ( !_9__41_11 )
            {
              if ( !v205->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v205);
                v205 = clsQuestCheck___c_TypeInfo;
              }
              v206 = (Il2CppObject *)v205->static_fields->__9;
              _9__41_11 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
              System_Action___ctor(_9__41_11, v206, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_13__, 0LL);
              v207 = clsQuestCheck___c_TypeInfo->static_fields;
              v207->__9__41_13 = _9__41_11;
              p__9__41_11 = (ServantStatusBattleListViewItem_o *)&v207->__9__41_13;
LABEL_248:
              sub_1B00C70(p__9__41_11, (int32_t)_9__41_11, v158, v159);
            }
LABEL_249:
            if ( !v153 )
              goto LABEL_251;
            CommonUI__OpenNotificationDialog(v153, v155, v152, _9__41_11, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
            goto LABEL_101;
          }
        }
      }
LABEL_181:
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_251;
      SpotID = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)SpotID,
                          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !SpotID )
        goto LABEL_251;
      v178 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)SpotID,
               v124,
               (const MethodInfo_2FE6A4C *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( v178 && WarEntity__IsFolder((WarEntity_o *)v178, 0LL) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_48DF509 )
        {
          sub_1B00CCC(&TerminalPramsManager_TypeInfo, v179);
          byte_48DF509 = 1;
        }
        v180 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v180 = TerminalPramsManager_TypeInfo;
        }
        v181 = 3;
      }
      else
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_48DF509 )
        {
          sub_1B00CCC(&TerminalPramsManager_TypeInfo, v179);
          byte_48DF509 = 1;
        }
        v180 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v180 = TerminalPramsManager_TypeInfo;
        }
        v181 = 2;
      }
      v180->static_fields->_DispState_k__BackingField = v181;
      if ( !v180->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v180);
      if ( !byte_48DF50A )
      {
        sub_1B00CCC(&TerminalPramsManager_TypeInfo, v179);
        byte_48DF50A = 1;
      }
      v182 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v182 = TerminalPramsManager_TypeInfo;
      }
      v182->static_fields->_IsDoneShortcut_k__BackingField = 0;
      if ( !byte_48DF50B )
      {
        sub_1B00CCC(&TerminalPramsManager_TypeInfo, v179);
        v182 = TerminalPramsManager_TypeInfo;
        byte_48DF50B = 1;
      }
      if ( !v182->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v182);
        v182 = TerminalPramsManager_TypeInfo;
      }
      v182->static_fields->_PhaseCnt_k__BackingField = v125;
      if ( !byte_48DF50C )
      {
        sub_1B00CCC(&TerminalPramsManager_TypeInfo, v179);
        v182 = TerminalPramsManager_TypeInfo;
        byte_48DF50C = 1;
      }
      if ( !v182->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v182);
        v182 = TerminalPramsManager_TypeInfo;
      }
      v182->static_fields->_SpotId_k__BackingField = v214;
      if ( !byte_48DF50D )
      {
        sub_1B00CCC(&TerminalPramsManager_TypeInfo, v179);
        v182 = TerminalPramsManager_TypeInfo;
        byte_48DF50D = 1;
      }
      if ( !v182->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v182);
        v182 = TerminalPramsManager_TypeInfo;
      }
      v182->static_fields->_WarId_k__BackingField = v124;
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_251;
      SpotID = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)SpotID,
                          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_GachaMaster___);
      if ( !SpotID )
        goto LABEL_251;
      VaildPayType = GachaMaster__getVaildPayType((GachaMaster_o *)SpotID, 0LL);
      if ( !byte_48DF172 )
      {
        sub_1B00CCC(&TerminalPramsManager_TypeInfo, v183);
        byte_48DF172 = 1;
      }
      v185 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v185 = TerminalPramsManager_TypeInfo;
      }
      v185->static_fields->_SummonType_k__BackingField = VaildPayType;
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_251;
      SpotID = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)SpotID,
                          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestMessageMaster___);
      v186 = *v56;
      if ( !*v56 )
        goto LABEL_251;
      v187 = (QuestMessageMaster_o *)SpotID;
      SpotID = MapControl_QuestInfo__GetPhaseMax(v186, 0LL);
      if ( !v187 )
        goto LABEL_251;
      if ( v125 + 1 >= (int)SpotID )
        v188 = SpotID;
      else
        v188 = v125 + 1;
      v122 = 1;
      ValidMessage = QuestMessageMaster__GetValidMessage(v187, questId, v188, 1, 0LL);
      if ( ValidMessage )
      {
        v190 = ValidMessage;
        v191 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v192 = LocalizationManager__Get((System_String_o *)StringLiteral_10750/*"QUEST_MESSAGE_DLG_DECIDE"*/, 0LL);
        SpotID = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10749/*"QUEST_MESSAGE_DLG_CANCEL"*/, 0LL);
        v193 = (System_String_o *)SpotID;
        v194 = clsQuestCheck___c_TypeInfo;
        if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
          v194 = clsQuestCheck___c_TypeInfo;
        }
        _9__41_2 = v194->static_fields->__9__41_2;
        v196 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !_9__41_2 )
        {
          if ( !v194->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v194);
            v194 = clsQuestCheck___c_TypeInfo;
          }
          v197 = (Il2CppObject *)v194->static_fields->__9;
          _9__41_2 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B00F18(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            _9__41_2,
            v197,
            Method_clsQuestCheck___c__CheckQuestPlayable_b__41_2__,
            0LL);
          v198 = clsQuestCheck___c_TypeInfo->static_fields;
          v198->__9__41_2 = _9__41_2;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&v198->__9__41_2, (int32_t)_9__41_2, v199, v200);
        }
        if ( v191 )
        {
          v122 = 1;
          CommonUI__OpenConfirmDialog_29936704((CommonUI_o *)v191, v196, v190, v192, v193, _9__41_2, 0, 1, 0, 0LL);
          return v122;
        }
        goto LABEL_251;
      }
      return v122;
    default:
      goto LABEL_181;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__CheckQuestPlayableNow(clsQuestCheck_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *UserId; // x0
  __int64 v11; // x1
  bool v12; // w0
  const MethodInfo *v13; // x2
  bool IsOpenByTime; // w8
  QuestEntity_o *v16; // [xsp+0h] [xbp-40h] BYREF
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_48DF4D5 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_QuestMaster___, *(_QWORD *)&questId);
    sub_1B00CCC(&Method_DataManager_GetMaster_UserQuestMaster___, v5);
    sub_1B00CCC(&DataManager_TypeInfo, v6);
    sub_1B00CCC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v7);
    sub_1B00CCC(&NetworkManager_TypeInfo, v8);
    byte_48DF4D5 = 1;
  }
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, method) )
    return 0;
  v16 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_22;
  if ( UserQuestMaster__TryGetEntity((UserQuestMaster_o *)Master_object, &entity, (int64_t)UserId, questId, 0LL) )
  {
    UserId = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_22;
    if ( UserQuestEntity__IsNotExpired(entity, 0LL) )
      return 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserId = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !UserId )
LABEL_22:
    sub_1B00F28(UserId, v11);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          UserId,
          (Il2CppObject **)&v16,
          questId,
          (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  UserId = (DataMasterBase_TMaster__TEntity__PKType__o *)v16;
  if ( !v16 )
    goto LABEL_22;
  IsOpenByTime = QuestEntity__IsOpenByTime(v16, 0, 0LL);
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

  if ( (byte_48DF4D2 & 1) == 0 )
  {
    sub_1B00CCC(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_1B00CCC(&clsQuestCheck_TypeInfo, v2);
    byte_48DF4D2 = 1;
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

  if ( (byte_48DF4E5 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, is_quest_after_action);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v5);
    byte_48DF4E5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v8 = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0LL);
  result = -1;
  if ( !v8 || !is_quest_after_action )
    return result;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
LABEL_17:
    sub_1B00F28(Instance, v7);
  if ( !QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0LL) )
    return -1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_48DF503 )
  {
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v10);
    byte_48DF503 = 1;
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

  if ( (byte_48DF4EE & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_QuestGroupMaster___, *(_QWORD *)&eventId);
    sub_1B00CCC(&DataManager_TypeInfo, v5);
    sub_1B00CCC(&int___TypeInfo, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_48DF4EE = 1;
  }
  if ( eventId <= 0 )
    return (System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
  v11 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_QuestGroupMaster___);
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
        sub_1B00F30(Master_object, v13);
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
            *(const MethodInfo_33A49AC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
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
    sub_1B00F28(Master_object, v13);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  int32_t v19; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  System_Int32_array *v26; // x19
  ServantStatusBattleListViewItem_c *v27; // x20
  TerminalPramsManager_c *v28; // x0
  ServantStatusBattleListViewItem_o *v29; // x0
  ServantStatusBattleListViewItem_c *v31; // x19
  TerminalPramsManager_c *v32; // x0
  ServantStatusBattleListViewItem_o *p_ClearEventQuestIds_k__BackingField; // x0

  if ( (byte_48DF4ED & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Array_ConvertAll_string__int___, *(_QWORD *)&eventId);
    sub_1B00CCC(&System_Converter_string__int__TypeInfo, v5);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Except_int___, v6);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1B00CCC(&int___TypeInfo, v8);
    sub_1B00CCC(&Method_System_Int32_Parse__, v9);
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v10);
    sub_1B00CCC(&StringLiteral_1/*""*/, v11);
    byte_48DF4ED = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_48DF505 )
  {
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, *(_QWORD *)&eventId);
    byte_48DF505 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  if ( System_String__IsNullOrEmpty(v12->static_fields->_ClearEventQuestIds_k__BackingField, 0LL) )
    return (System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_48DF505 )
  {
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v13);
    byte_48DF505 = 1;
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
        v17 = (System_Converter_object__int__o *)sub_1B00F18(System_Converter_string__int__TypeInfo),
        System_Converter_object__int____ctor(v17, 0LL, Method_System_Int32_Parse__, 0LL),
        (ClearEventQuestIds_k__BackingField = (System_String_o *)System_Array__ConvertAll_object__int_(
                                                                   (System_Object_array *)v16,
                                                                   (System_Converter_TInput__TOutput__o *)v17,
                                                                   (const MethodInfo_2E41C88 *)Method_System_Array_ConvertAll_string__int___)) == 0LL) )
  {
    sub_1B00F28(ClearEventQuestIds_k__BackingField, v13);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)ClearEventQuestIds_k__BackingField;
  if ( !ClearEventQuestIds_k__BackingField[1].klass )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v31 = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
    if ( !byte_48DF504 )
    {
      sub_1B00CCC(&TerminalPramsManager_TypeInfo, v13);
      byte_48DF504 = 1;
    }
    v32 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v32 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (ServantStatusBattleListViewItem_o *)&v32->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = v31;
    sub_1B00C70(p_ClearEventQuestIds_k__BackingField, (int32_t)v31, (int32_t)v18, v19);
    TerminalPramsManager__ClearEventQuestIds_SaveData(0LL);
    return (System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)clsQuestCheck__GetEventQuestIdListPlayable(
                                                               this,
                                                               eventId,
                                                               v18);
  v22 = System_Linq_Enumerable__Except_int_(
          v21,
          v20,
          (const MethodInfo_2D81264 *)Method_System_Linq_Enumerable_Except_int___);
  v26 = System_Linq_Enumerable__ToArray_int_(
          v22,
          (const MethodInfo_2D97524 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v27 = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  if ( !byte_48DF504 )
  {
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v23);
    byte_48DF504 = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v28 = TerminalPramsManager_TypeInfo;
  }
  v29 = (ServantStatusBattleListViewItem_o *)&v28->static_fields->_ClearEventQuestIds_k__BackingField;
  v29->klass = v27;
  sub_1B00C70(v29, (int32_t)v27, v24, v25);
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
  int32_t v21; // w3
  Il2CppObject *v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_int__o v28; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v29; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_48DF4EB & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestMaster___, qids);
    sub_1B00CCC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestEntity__Add__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v10);
    sub_1B00CCC(&System_Collections_Generic_List_QuestEntity__TypeInfo, v11);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_48DF4EB = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v13 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestMaster___),
        !qids) )
  {
    sub_1B00F28(Instance, v15);
  }
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    qids,
    (const MethodInfo_33A5480 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v29,
            (const MethodInfo_313A14C *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v17 )
      break;
    if ( !v16 )
      sub_1B00F28(v17, v18);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v16,
               v29.fields._current,
               (const MethodInfo_2FE6A4C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    v22 = Entity;
    if ( !v13 )
      sub_1B00F28(Entity, Entity);
    items = v13->fields._items;
    v24 = Method_System_Collections_Generic_List_QuestEntity__Add__;
    ++v13->fields._version;
    if ( !items )
      sub_1B00F28(Entity, Entity);
    size = v13->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v13,
        Entity,
        *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + size;
      v13->fields._size = size + 1;
      v26[4] = (Il2CppClass *)v22;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v22, v20, v21);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v29,
    (const MethodInfo_313A148 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x25
  unsigned int v29; // w28
  QuestReleaseEntity_o *v30; // x8
  int32_t questId; // w26
  const MethodInfo *v32; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v36; // x23
  const MethodInfo *v37; // x4
  int32_t v38; // w20
  int v39; // w21
  System_Collections_Generic_List_Enumerator_int__o v41; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v42; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_48DF4EA & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id);
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9);
    sub_1B00CCC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__RemoveAt__, v16);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor___74529920, v18);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_48DF4EA = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v23 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_32;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 9, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_32;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v29 = 0;
    while ( 1 )
    {
      if ( v29 >= max_length )
        sub_1B00F30(Instance, v25);
      v30 = ListByType->m_Items[v29];
      if ( !v30 )
        break;
      if ( v30->fields.targetId == svt_id )
      {
        if ( !v28 )
          break;
        questId = v30->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v28,
                                      questId,
                                      (const MethodInfo_2FE6A4C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, questId, oldFriendShipRank, 9, v32);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v23 )
              break;
            items = v23->fields._items;
            v34 = Method_System_Collections_Generic_List_int__Add__;
            ++v23->fields._version;
            if ( !items )
              break;
            size = v23->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v23,
                questId,
                *(const MethodInfo_33A49AC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
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
      if ( (int)++v29 >= max_length )
        goto LABEL_22;
    }
LABEL_32:
    sub_1B00F28(Instance, v25);
  }
LABEL_22:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v36 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_54149760(
      v36,
      (System_Collections_Generic_IEnumerable_T__o *)v23,
      (const MethodInfo_33A4280 *)Method_System_Collections_Generic_List_int___ctor___74529920);
    Instance = (DataManager_o *)clsQuestCheck__GetReleaseQuestIdByServantFriendShip(this, svt_id, -1, type_flag, v37);
    if ( !Instance )
      goto LABEL_32;
    v23 = (System_Collections_Generic_List_int__o *)Instance;
    v38 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v38 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_int___get_Item(
                                      v23,
                                      v38,
                                      (const MethodInfo_33A46BC *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v36 )
          goto LABEL_32;
        v39 = (int)Instance;
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v41,
          v36,
          (const MethodInfo_33A5480 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v42 = v41;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v42,
                  (const MethodInfo_313A14C *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v39 == v42.fields._current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v23,
              v38,
              (const MethodInfo_33A612C *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v42,
          (const MethodInfo_313A148 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( --v38 < 0 )
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

  return clsQuestCheck__GetReleaseQuestIdByServantLimit_32374668(this, svt_id, oldLimitCount, 238, v4);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit_32374668(
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
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x25
  unsigned int v29; // w28
  QuestReleaseEntity_o *v30; // x8
  int32_t questId; // w26
  const MethodInfo *v32; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v36; // x23
  const MethodInfo *v37; // x4
  int32_t v38; // w20
  int v39; // w21
  System_Collections_Generic_List_Enumerator_int__o v41; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v42; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_48DF4E7 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id);
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9);
    sub_1B00CCC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__RemoveAt__, v16);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor___74529920, v18);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_48DF4E7 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v23 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_32;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_32;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v29 = 0;
    while ( 1 )
    {
      if ( v29 >= max_length )
        sub_1B00F30(Instance, v25);
      v30 = ListByType->m_Items[v29];
      if ( !v30 )
        break;
      if ( v30->fields.targetId == svt_id )
      {
        if ( !v28 )
          break;
        questId = v30->fields.questId;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v28,
                                      questId,
                                      (const MethodInfo_2FE6A4C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (DataManager_o *)clsQuestCheck__IsQuestRelease(this, questId, oldLimitCount, 7, v32);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v23 )
              break;
            items = v23->fields._items;
            v34 = Method_System_Collections_Generic_List_int__Add__;
            ++v23->fields._version;
            if ( !items )
              break;
            size = v23->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v23,
                questId,
                *(const MethodInfo_33A49AC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
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
      if ( (int)++v29 >= max_length )
        goto LABEL_22;
    }
LABEL_32:
    sub_1B00F28(Instance, v25);
  }
LABEL_22:
  if ( (oldLimitCount & 0x80000000) == 0 )
  {
    v36 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_54149760(
      v36,
      (System_Collections_Generic_IEnumerable_T__o *)v23,
      (const MethodInfo_33A4280 *)Method_System_Collections_Generic_List_int___ctor___74529920);
    Instance = (DataManager_o *)clsQuestCheck__GetReleaseQuestIdByServantLimit_32374668(
                                  this,
                                  svt_id,
                                  -1,
                                  type_flag,
                                  v37);
    if ( !Instance )
      goto LABEL_32;
    v23 = (System_Collections_Generic_List_int__o *)Instance;
    v38 = LODWORD(Instance->fields.m_CancellationTokenSource) - 1;
    if ( v38 >= 0 )
    {
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_int___get_Item(
                                      v23,
                                      v38,
                                      (const MethodInfo_33A46BC *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v36 )
          goto LABEL_32;
        v39 = (int)Instance;
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v41,
          v36,
          (const MethodInfo_33A5480 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v42 = v41;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v42,
                  (const MethodInfo_313A14C *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v39 == v42.fields._current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v23,
              v38,
              (const MethodInfo_33A612C *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v42,
          (const MethodInfo_313A148 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( --v38 < 0 )
          return v23;
      }
    }
  }
  return v23;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit_32375684(
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
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x26
  unsigned int v29; // w21
  QuestReleaseEntity_o *v30; // x8
  int32_t questId; // w27
  const MethodInfo *v32; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v36; // x24
  int v37; // w8
  __int64 v38; // x29
  QuestReleaseEntity_o *v39; // x8
  int32_t v40; // w27
  const MethodInfo *v41; // x4
  struct System_Int32_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  int32_t v45; // w20
  int v46; // w21
  System_Collections_Generic_List_Enumerator_int__o v49; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v50; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_48DF4E8 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id);
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v10);
    sub_1B00CCC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v16);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__RemoveAt__, v17);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_48DF4E8 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  v23 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_46;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_46;
  max_length = ListByType->max_length;
  v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( max_length >= 1 )
  {
    v29 = 0;
    while ( v29 < max_length )
    {
      v30 = ListByType->m_Items[v29];
      if ( !v30 )
        goto LABEL_46;
      if ( v30->fields.targetId == svt_id )
      {
        if ( !v28 )
          goto LABEL_46;
        questId = v30->fields.questId;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v28,
                     questId,
                     (const MethodInfo_2FE6A4C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_46;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (Il2CppObject *)clsQuestCheck__IsQuestRelease(this, questId, oldLimitCount, 7, v32);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v23 )
              goto LABEL_46;
            items = v23->fields._items;
            v34 = Method_System_Collections_Generic_List_int__Add__;
            ++v23->fields._version;
            if ( !items )
              goto LABEL_46;
            size = v23->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v23,
                questId,
                *(const MethodInfo_33A49AC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
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
      if ( (int)++v29 >= max_length )
        goto LABEL_22;
    }
LABEL_47:
    sub_1B00F30(Instance, v25);
  }
LABEL_22:
  v36 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v36,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  v37 = ListByType->max_length;
  if ( v37 >= 1 )
  {
    v38 = 0LL;
    while ( (unsigned int)v38 < v37 )
    {
      v39 = ListByType->m_Items[v38];
      if ( !v39 )
        goto LABEL_46;
      if ( v39->fields.targetId == svt_id )
      {
        if ( !v28 )
          goto LABEL_46;
        v40 = v39->fields.questId;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v28,
                     v40,
                     (const MethodInfo_2FE6A4C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_46;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (Il2CppObject *)clsQuestCheck__IsQuestRelease(this, v40, newLimitCount, 7, v41);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v36 )
              goto LABEL_46;
            v42 = v36->fields._items;
            v43 = Method_System_Collections_Generic_List_int__Add__;
            ++v36->fields._version;
            if ( !v42 )
              goto LABEL_46;
            v44 = v36->fields._size;
            if ( (unsigned int)v44 >= v42->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v36,
                v40,
                *(const MethodInfo_33A49AC **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
            }
            else
            {
              v36->fields._size = v44 + 1;
              v42->m_Items[v44 + 1] = v40;
            }
          }
        }
      }
      v37 = ListByType->max_length;
      if ( (int)++v38 >= v37 )
        goto LABEL_37;
    }
    goto LABEL_47;
  }
LABEL_37:
  if ( !v36 )
LABEL_46:
    sub_1B00F28(Instance, v25);
  v45 = v36->fields._size - 1;
  if ( v45 >= 0 )
  {
    while ( 1 )
    {
      Instance = (Il2CppObject *)System_Collections_Generic_List_int___get_Item(
                                   v36,
                                   v45,
                                   (const MethodInfo_33A46BC *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v23 )
        goto LABEL_46;
      v46 = (int)Instance;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v49,
        v23,
        (const MethodInfo_33A5480 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v50 = v49;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v50,
                (const MethodInfo_313A14C *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        if ( v46 == v50.fields._current )
        {
          System_Collections_Generic_List_int___RemoveAt(
            v36,
            v45,
            (const MethodInfo_33A612C *)Method_System_Collections_Generic_List_int__RemoveAt__);
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v50,
        (const MethodInfo_313A148 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      if ( --v45 < 0 )
        return v36;
    }
  }
  return v36;
}


System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLv(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLv,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__GetReleaseQuestIdByServantLv_32374108(this, svt_id, oldLv, 238, v4);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLv_32374108(
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
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x25
  unsigned int v21; // w27
  QuestReleaseEntity_o *v22; // x8
  int32_t questId; // w26
  const MethodInfo *v24; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10

  if ( (byte_48DF4E6 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id);
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9);
    sub_1B00CCC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_48DF4E6 = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_23;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 6, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !ListByType )
    goto LABEL_23;
  max_length = ListByType->max_length;
  if ( max_length >= 1 )
  {
    v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length )
        sub_1B00F30(Instance, v17);
      v22 = ListByType->m_Items[v21];
      if ( !v22 )
        break;
      if ( v22->fields.targetId == svt_id )
      {
        if ( !v20 )
          break;
        questId = v22->fields.questId;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v20,
                     questId,
                     (const MethodInfo_2FE6A4C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
        if ( ((unsigned int)Instance & type_flag) != 0 )
        {
          Instance = (Il2CppObject *)clsQuestCheck__IsQuestRelease(this, questId, oldLv, 6, v24);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v15 )
              break;
            items = v15->fields._items;
            v26 = Method_System_Collections_Generic_List_int__Add__;
            ++v15->fields._version;
            if ( !items )
              break;
            size = v15->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v15,
                questId,
                *(const MethodInfo_33A49AC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
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
      if ( (int)++v21 >= max_length )
        return v15;
    }
LABEL_23:
    sub_1B00F28(Instance, v17);
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
  int max_length; // w8
  QuestReleaseEntity_array *v25; // x26
  unsigned int v26; // w19
  QuestReleaseEntity_o *v27; // x25
  __int64 v28; // x29
  int32_t questId; // w27
  int32_t v30; // w2
  int32_t v31; // w3
  QuestReleaseEntity_array **v32; // x28
  System_Func_object__bool__o *v33; // x25
  const MethodInfo *v34; // x4
  int32_t v35; // w2
  int32_t v36; // w3
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
  int32_t v52; // w3
  QuestReleaseEntity_array **v53; // x26
  System_Func_object__bool__o *v54; // x28
  const MethodInfo *v55; // x4
  int32_t v56; // w2
  int32_t v57; // w3
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  Il2CppClass **v61; // x0
  QuestReleaseMaster_o *v63; // [xsp+0h] [xbp-80h]
  DataManager_o *v64; // [xsp+8h] [xbp-78h]

  if ( (byte_48DF4E9 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_Any_QuestEntity___, *(_QWORD *)&servantId);
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestMaster___, v5);
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v6);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantGroupMaster___, v7);
    sub_1B00CCC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v8);
    sub_1B00CCC(&System_Func_QuestEntity__bool__TypeInfo, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestEntity__Add__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v11);
    sub_1B00CCC(&System_Collections_Generic_List_QuestEntity__TypeInfo, v12);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B00CCC(&Method_clsQuestCheck___c__DisplayClass31_0__GetReleasedQuestEntityListByServantGet_b__0__, v14);
    sub_1B00CCC(&clsQuestCheck___c__DisplayClass31_0_TypeInfo, v15);
    sub_1B00CCC(&Method_clsQuestCheck___c__DisplayClass31_1__GetReleasedQuestEntityListByServantGet_b__1__, v16);
    sub_1B00CCC(&clsQuestCheck___c__DisplayClass31_1_TypeInfo, v17);
    byte_48DF4E9 = 1;
  }
  Instance = (QuestReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  v20 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestMaster___);
  v22 = DataManager__GetMasterData_object_(
          v20,
          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v23 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  if ( !v22 )
    goto LABEL_49;
  v63 = (QuestReleaseMaster_o *)v22;
  Instance = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)v22, 8, 0LL);
  if ( !Instance )
    goto LABEL_49;
  max_length = Instance->max_length;
  v25 = Instance;
  if ( max_length >= 1 )
  {
    v26 = 0;
    while ( v26 < max_length )
    {
      v27 = v25->m_Items[v26];
      v28 = sub_1B00F18(clsQuestCheck___c__DisplayClass31_0_TypeInfo);
      clsQuestCheck___c__DisplayClass31_0___ctor((clsQuestCheck___c__DisplayClass31_0_o *)v28, 0LL);
      if ( !v27 )
        goto LABEL_49;
      if ( v27->fields.targetId == servantId )
      {
        if ( !MasterData_object )
          goto LABEL_49;
        questId = v27->fields.questId;
        Instance = (QuestReleaseEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                 questId,
                                                 (const MethodInfo_2FE6A4C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v28 )
          goto LABEL_49;
        *(_QWORD *)(v28 + 16) = Instance;
        v32 = (QuestReleaseEntity_array **)(v28 + 16);
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v28 + 16), (int32_t)Instance, v30, v31);
        v33 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_QuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v33,
          (Il2CppObject *)v28,
          Method_clsQuestCheck___c__DisplayClass31_0__GetReleasedQuestEntityListByServantGet_b__0__,
          0LL);
        Instance = (QuestReleaseEntity_array *)BasicHelper__Any_object_(
                                                 (System_Collections_Generic_List_T__o *)v23,
                                                 (System_Func_T__bool__o *)v33,
                                                 (const MethodInfo_2D4E780 *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = *v32;
          if ( !*v32 )
            goto LABEL_49;
          Instance = (QuestReleaseEntity_array *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
          if ( ((unsigned int)Instance & typeFlag) != 0 )
          {
            Instance = (QuestReleaseEntity_array *)clsQuestCheck__IsQuestRelease(this, questId, -1, 0, v34);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v23 )
                goto LABEL_49;
              v19 = (Il2CppObject *)*v32;
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
                  *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
              }
              else
              {
                v40 = &items->obj.klass + size;
                v23->fields._size = size + 1;
                v40[4] = (Il2CppClass *)v19;
                sub_1B00C70((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)v19, v35, v36);
              }
            }
          }
        }
      }
      max_length = v25->max_length;
      if ( (int)++v26 >= max_length )
        goto LABEL_23;
    }
LABEL_50:
    sub_1B00F30(Instance, v19);
  }
LABEL_23:
  Instance = (QuestReleaseEntity_array *)DataManager__GetMasterData_object_(
                                           v20,
                                           (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantGroupMaster___);
  if ( !Instance
    || (ListByServantID = ServantGroupMaster__getListByServantID((ServantGroupMaster_o *)Instance, servantId, 0LL),
        Instance = QuestReleaseMaster__getListByType(v63, 10, 0LL),
        !ListByServantID) )
  {
LABEL_49:
    sub_1B00F28(Instance, v19);
  }
  v42 = *(_QWORD *)&ListByServantID->max_length;
  if ( (int)v42 >= 1 )
  {
    v43 = Instance;
    v44 = 0LL;
    v64 = (DataManager_o *)ListByServantID;
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
      LODWORD(v42) = v64->fields.m_CancellationTokenSource;
      if ( (__int64)v44 >= (int)v42 )
        return (System_Collections_Generic_List_QuestEntity__o *)v23;
    }
    v46 = 0;
    v47 = *((_QWORD *)&v64->fields._DispLog + v44);
    while ( v46 < v45 )
    {
      v48 = v43->m_Items[v46];
      v49 = sub_1B00F18(clsQuestCheck___c__DisplayClass31_1_TypeInfo);
      clsQuestCheck___c__DisplayClass31_1___ctor((clsQuestCheck___c__DisplayClass31_1_o *)v49, 0LL);
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
                                                 (const MethodInfo_2FE6A4C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v49 )
          goto LABEL_49;
        *(_QWORD *)(v49 + 16) = Instance;
        v53 = (QuestReleaseEntity_array **)(v49 + 16);
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v49 + 16), (int32_t)Instance, v51, v52);
        v54 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_QuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v54,
          (Il2CppObject *)v49,
          Method_clsQuestCheck___c__DisplayClass31_1__GetReleasedQuestEntityListByServantGet_b__1__,
          0LL);
        Instance = (QuestReleaseEntity_array *)BasicHelper__Any_object_(
                                                 (System_Collections_Generic_List_T__o *)v23,
                                                 (System_Func_T__bool__o *)v54,
                                                 (const MethodInfo_2D4E780 *)Method_BasicHelper_Any_QuestEntity___);
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
              v58 = v23->fields._items;
              v59 = Method_System_Collections_Generic_List_QuestEntity__Add__;
              ++v23->fields._version;
              if ( !v58 )
                goto LABEL_49;
              v60 = v23->fields._size;
              if ( (unsigned int)v60 >= v58->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v23,
                  v19,
                  *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
              }
              else
              {
                v61 = &v58->obj.klass + v60;
                v23->fields._size = v60 + 1;
                v61[4] = (Il2CppClass *)v19;
                sub_1B00C70((ServantStatusBattleListViewItem_o *)(v61 + 4), (int32_t)v19, v56, v57);
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
  const MethodInfo *v16; // x4
  __int64 v17; // x8
  System_Int32_array *v18; // x20
  unsigned __int64 v19; // x21

  if ( (byte_48DF4D9 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B00CCC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v8);
    byte_48DF4D9 = 1;
  }
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_18;
  v11 = (EventRaidMaster_o *)Instance;
  RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId((EventRaidMaster_o *)Instance, eventId, day, 0LL);
  Instance = (System_Int32_array *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
    sub_1B00F28(Instance, v10);
  v17 = *(_QWORD *)&Instance->max_length;
  v18 = Instance;
  if ( (int)v17 < 1 )
  {
    LOBYTE(Instance) = 0;
  }
  else
  {
    v19 = 0LL;
    do
    {
      if ( v19 >= (unsigned int)v17 )
        sub_1B00F30(Instance, v10);
      Instance = (System_Int32_array *)clsQuestCheck__IsQuestRelease(this, v18->m_Items[v19 + 1], -1, 0, v16);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      LODWORD(v17) = v18->max_length;
      ++v19;
    }
    while ( (__int64)v19 < (int)v17 );
  }
  return (unsigned __int8)Instance & 1;
}


bool __fastcall clsQuestCheck__IsLastWarClear(clsQuestCheck_o *this, const MethodInfo *method)
{
  clsQuestCheck_o *Value; // x0
  const MethodInfo *v3; // x2

  if ( (byte_48DF4DB & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_8138/*"LAST_WAR_ID"*/, method);
    byte_48DF4DB = 1;
  }
  Value = (clsQuestCheck_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8138/*"LAST_WAR_ID"*/, 0LL);
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

  if ( (byte_48DF4DC & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&war_id);
    sub_1B00CCC(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_48DF4DC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1B00F28(Instance, v7);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             war_id,
             (const MethodInfo_2FE6A4C *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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

  if ( (byte_48DF4E2 & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_1B00CCC(&CondType_TypeInfo, *(_QWORD *)&qid);
    byte_48DF4E2 = 1;
  }
  v6 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_36399468(qid, v6, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsQuestClearRaw(
        clsQuestCheck_o *this,
        int32_t qid,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  int32_t v6; // w20

  if ( (byte_48DF4E3 & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_1B00CCC(&CondType_TypeInfo, *(_QWORD *)&qid);
    byte_48DF4E3 = 1;
  }
  v6 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_36399468(qid, v6, 0, 0LL);
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
  int32_t v9; // w21
  int64_t UserId; // x22

  if ( (byte_48DF4E4 & 1) == 0 )
  {
    sub_1B00CCC(&CondType_TypeInfo, *(_QWORD *)&qid);
    this = (clsQuestCheck_o *)sub_1B00CCC(&NetworkManager_TypeInfo, v8);
    byte_48DF4E4 = 1;
  }
  v9 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, *(const MethodInfo **)&phase);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestPhaseClear(UserId, qid, phase, v9, 0, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  System_Collections_ObjectModel_Collection_T__o *v18; // x19
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
  __int64 methodPtr_low; // x10
  int32_t v34; // w2
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0

  if ( (byte_48DF4D8 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&quest_id);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v9);
    sub_1B00CCC(&Method_DataManager_getEntityList_QuestReleaseMaster___, v10);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v11);
    sub_1B00CCC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12);
    sub_1B00CCC(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_1B00CCC(&QuestReleaseEntity_TypeInfo, v14);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_48DF4D8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__getEntityList_object_(
                                      Instance,
                                      (const MethodInfo_2D62E0C *)Method_DataManager_getEntityList_QuestReleaseMaster___)) == 0LL )
  {
    sub_1B00F28(Instance, v17);
  }
  v18 = (System_Collections_ObjectModel_Collection_T__o *)Instance;
  v19 = System_Collections_ObjectModel_Collection_object___get_Count(
          (System_Collections_ObjectModel_Collection_T__o *)Instance,
          (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) > 0;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v18,
                 (const MethodInfo_2F83C88 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B00F28(0LL, v20);
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
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1B52CAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_17;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_17:
      v29 = sub_1B52CAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v30 = (QuestReleaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                                    Enumerator,
                                    *(_QWORD *)(v29 + 8));
    if ( !v30 )
      goto LABEL_38;
    methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v30->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestReleaseEntity_c *)v30->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestReleaseEntity_TypeInfo )
    {
      sub_1B011E8(v30);
LABEL_38:
      sub_1B00F28(v30, v31);
    }
    if ( v30->fields.questId == quest_id )
    {
      if ( (old_val & 0x80000000) != 0 )
        v34 = -1;
      else
        v34 = v30->fields.type == old_val_qr_type ? old_val : -1;
      if ( !clsQuestCheck__IsQuestRelease_32371416(this, v30, v34, 0LL, v32) )
      {
        v19 = 0;
        break;
      }
    }
  }
  v35 = Enumerator->klass;
  v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_34;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_34:
    v38 = sub_1B52CAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  return v19;
}


bool __fastcall clsQuestCheck__IsQuestRelease_32368588(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        MapControl_QuestInfo_o *qinf,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_32371416(this, qrd, -1, qinf, v4);
}


bool __fastcall clsQuestCheck__IsQuestRelease_32370524(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        int32_t old_val,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_32371416(this, qrd, old_val, 0LL, v4);
}


bool __fastcall clsQuestCheck__IsQuestRelease_32371416(
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
  int32_t type; // w22
  int32_t v17; // w20
  int32_t v18; // w21
  int32_t targetId; // w20
  int64_t value; // x19
  int32_t v22; // w0
  int32_t v23; // w20
  int32_t v24; // w21
  int32_t v25; // w19
  int32_t v26; // w0
  int32_t v27; // w1
  int32_t v28; // w2
  bool v29; // w3
  bool v31; // w3
  QuestReleaseEntity_o *v32; // x2
  Il2CppObject *v33; // x0
  QuestEntity_o *v34; // x19
  int64_t Time; // x20
  Il2CppObject *v36; // x0
  int32_t v37; // w19
  int32_t v38; // w20
  int32_t questId; // w22
  int32_t ValueInt; // w19
  int32_t v41; // w20
  int32_t v42; // w21
  int32_t v43; // w19
  TotalEventRaidEntity_o *v45; // [xsp+8h] [xbp-48h] BYREF
  EventRaidEntity_o *entity; // [xsp+10h] [xbp-40h] BYREF
  System_Int32_array *sameGroupQuestIds; // [xsp+18h] [xbp-38h] BYREF
  bool is_release; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_48DF4DE & 1) == 0 )
  {
    sub_1B00CCC(&CondType_TypeInfo, qrd);
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventRaidMaster___, v10);
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestMaster___, v11);
    sub_1B00CCC(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v12);
    sub_1B00CCC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v13);
    sub_1B00CCC(&NetworkManager_TypeInfo, v14);
    this = (clsQuestCheck_o *)sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_48DF4DE = 1;
  }
  entity = 0LL;
  sameGroupQuestIds = 0LL;
  v45 = 0LL;
  is_release = 0;
  if ( !qrd )
LABEL_97:
    sub_1B00F28(this, qrd);
  type = qrd->fields.type;
  if ( !v6 & v5 )
  {
LABEL_20:
    targetId = qrd->fields.targetId;
    value = qrd->fields.value;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v22 = type;
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
        v31 = 1;
        v32 = qrd;
        goto LABEL_85;
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
        v22 = 6;
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
        v22 = 7;
        break;
      case 8:
        if ( clsQuestCheck__IsQuestClear(this, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v22 = 8;
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
        v22 = 9;
        break;
      case 10:
        if ( clsQuestCheck__IsQuestClear(this, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v22 = 10;
        break;
      case 11:
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v22 = 11;
        break;
      case 12:
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_97;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_97;
        v33 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                qrd->fields.questId,
                (const MethodInfo_2FE6A4C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v33 )
          return is_release;
        v34 = (QuestEntity_o *)v33;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Time = NetworkManager__getTime(0LL);
        if ( QuestEntity__getOpenedAt(v34, 0LL) > Time || QuestEntity__getClosedAt(v34, 0LL) <= Time )
          return is_release;
        return 1;
      case 13:
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_97;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_97;
        v36 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                qrd->fields.questId,
                (const MethodInfo_2FE6A4C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v36 )
          return is_release;
        return QuestEntity__IsOpenByTime((QuestEntity_o *)v36, 1, 0LL);
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
        v37 = qrd->fields.targetId;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return CondType__IsMissionAchive(v37, 0LL);
      case 26:
        v38 = qrd->fields.targetId;
        questId = qrd->fields.questId;
        ValueInt = QuestReleaseEntity__getValueInt(qrd, 0LL);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        is_release = CondType__IsNotQuestGroupClear(questId, v38, ValueInt, &sameGroupQuestIds, 1, 0LL);
        if ( qinf )
        {
          qinf->fields._GroupId_k__BackingField = v38;
          MapControl_QuestInfo__AddSameGroupQuestIds(qinf, sameGroupQuestIds, 0LL);
        }
        return is_release;
      case 27:
      case 28:
        v17 = qrd->fields.targetId;
        v18 = QuestReleaseEntity__getValueInt(qrd, 0LL);
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_97;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventRaidMaster___);
        if ( !this )
          goto LABEL_97;
        if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)this, &entity, v17, v18, 0LL) )
          return is_release;
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_97;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
        if ( !this )
          goto LABEL_97;
        this = (clsQuestCheck_o *)TotalEventRaidMaster__TryGetEntity(
                                    (TotalEventRaidMaster_o *)this,
                                    &v45,
                                    v17,
                                    v18,
                                    0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          return is_release;
        if ( !entity || !v45 )
          goto LABEL_97;
        return (entity->fields.maxHp > v45->fields.totalDamage) ^ (qrd->fields.type != 27);
      case 32:
        v41 = qrd->fields.questId;
        v42 = qrd->fields.targetId;
        v43 = QuestReleaseEntity__getValueInt(qrd, 0LL);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v29 = 1;
        v26 = v41;
        v27 = v42;
        v28 = v43;
        return CondType__IsQuestGroupClear(v26, v27, v28, v29, 0LL);
      case 38:
        if ( clsQuestCheck__IsQuestClear(this, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v22 = 38;
        break;
      case 53:
        v32 = qrd;
        v31 = 0;
LABEL_85:
        clsQuestCheck__checkCondTypeItemGet(this, &is_release, v32, v31, method);
        return is_release;
      case 54:
        if ( clsQuestCheck__IsQuestClear(this, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v22 = 54;
        break;
      default:
        if ( type == 58 )
        {
          v23 = qrd->fields.questId;
          v24 = qrd->fields.targetId;
          v25 = QuestReleaseEntity__getValueInt(qrd, 0LL);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v26 = v23;
          v27 = v24;
          v28 = v25;
          v29 = 0;
          return CondType__IsQuestGroupClear(v26, v27, v28, v29, 0LL);
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
        v22 = 64;
        break;
    }
  }
  return CondType__IsOpen(v22, targetId, value, 0, 0LL);
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

  if ( (byte_48DF4D7 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_QuestReleaseMaster___, loginQuestEnt);
    sub_1B00CCC(&DataManager_TypeInfo, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v9);
    sub_1B00CCC(&NetworkManager_TypeInfo, v10);
    byte_48DF4D7 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !loginQuestEnt || !Master_object )
    goto LABEL_24;
  p_fields = &this->fields;
  QuestReleaseMaster__getListByQuestID_38270468(Master_object, loginQuestEnt->fields.questId, &this->fields.qrs, 0LL);
  if ( !this->fields.qrs )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (QuestReleaseMaster_o *)NetworkManager__getTime(0LL);
  qrs = (System_Collections_Generic_List_object__o *)p_fields->qrs;
  if ( !p_fields->qrs )
LABEL_24:
    sub_1B00F28(Master_object, v12);
  v15 = (int64_t)Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    qrs,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v16 )
      break;
    if ( !v21.fields._current )
      sub_1B00F28(v16, v17);
    if ( HIDWORD(v21.fields._current[1].klass) == 12 )
    {
      if ( !LoginQuestEntity__IsEnablePeriod(loginQuestEnt, v15, 0LL) )
        goto LABEL_18;
    }
    else if ( !clsQuestCheck__IsQuestRelease_32371416(this, (QuestReleaseEntity_o *)v21.fields._current, -1, 0LL, v18) )
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
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
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

  if ( (byte_48DF4D6 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_QuestReleaseMaster___, *(_QWORD *)&questId);
    sub_1B00CCC(&DataManager_TypeInfo, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v9);
    byte_48DF4D6 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object )
    sub_1B00F28(0LL, v11);
  QuestReleaseMaster__getListByQuestID_38270468((QuestReleaseMaster_o *)Master_object, questId, &this->fields.qrs, 0LL);
  qrs = this->fields.qrs;
  if ( qrs )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)qrs,
      (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
    {
      if ( !clsQuestCheck__IsQuestRelease_32371416(this, (QuestReleaseEntity_o *)v16.fields._current, -1, 0LL, v13) )
      {
        v14 = 5;
        goto LABEL_12;
      }
    }
    v14 = 6;
LABEL_12:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
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
  int32_t v25; // w3
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

  if ( (byte_48DF4F1 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_Find_string___, *(_QWORD *)&questId);
    sub_1B00CCC(&Method_DataManager_GetMaster_QuestMaster___, v10);
    sub_1B00CCC(&Method_DataManager_GetMaster_QuestPhaseMaster___, v11);
    sub_1B00CCC(&DataManager_TypeInfo, v12);
    sub_1B00CCC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v13);
    sub_1B00CCC(&EncryptedPlayerPrefs_TypeInfo, v14);
    sub_1B00CCC(&System_Func_string__bool__TypeInfo, v15);
    sub_1B00CCC(&Method_clsQuestCheck___c__DisplayClass40_0__IsTapSkipQuestStart_b__0__, v16);
    sub_1B00CCC(&clsQuestCheck___c__DisplayClass40_0_TypeInfo, v17);
    sub_1B00CCC(&StringLiteral_22384/*"questStartEffectSkip"*/, v18);
    sub_1B00CCC(&StringLiteral_1120/*"/"*/, v19);
    sub_1B00CCC(&clsQuestCheck_TypeInfo, v20);
    byte_48DF4F1 = 1;
  }
  v41 = 0LL;
  entity = 0LL;
  v21 = sub_1B00F18(clsQuestCheck___c__DisplayClass40_0_TypeInfo);
  clsQuestCheck___c__DisplayClass40_0___ctor((clsQuestCheck___c__DisplayClass40_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_41;
  *(_QWORD *)(v21 + 16) = effectName;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v21 + 16), (int32_t)effectName, v24, v25);
  if ( isMyRoomMaterial )
    return 0;
  if ( questPhase <= 1 )
    questPhase = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_41;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, questId, questPhase, 0LL) )
    goto LABEL_44;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_41;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_22384/*"questStartEffectSkip"*/, 0, 0LL);
  if ( !ScriptIntParam )
  {
LABEL_44:
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !Master_object )
      goto LABEL_41;
    Master_object = (QuestPhaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            &v41,
                                            questId,
                                            (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !v41 )
        goto LABEL_41;
      v27 = LODWORD(v41[2].monitor) - 1;
      if ( (unsigned int)v27 > 4 )
        ScriptIntParam = 0;
      else
        ScriptIntParam = dword_BA989C[v27];
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
    sub_1B00F28(Master_object, v23);
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
  v34 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v34,
    (Il2CppObject *)v21,
    Method_clsQuestCheck___c__DisplayClass40_0__IsTapSkipQuestStart_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             v33,
             (System_Func_T__bool__o *)v34,
             (const MethodInfo_2D4F34C *)Method_BasicHelper_Find_string___);
  v36 = System_String__Concat_60337008(
          String,
          (System_String_o *)StringLiteral_1120/*"/"*/,
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

  if ( (byte_48DF4D4 & 1) == 0 )
  {
    sub_1B00CCC(&CondType_TypeInfo, questInfo);
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestRandomGroupMaster___, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v8);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v10);
    byte_48DF4D4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestRandomGroupMaster___);
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
    if ( !byte_48DF502 )
    {
      sub_1B00CCC(&TerminalPramsManager_TypeInfo, v12);
      byte_48DF502 = 1;
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
            (const MethodInfo_302DC48 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    cctor_finished = TerminalPramsManager_TypeInfo->_2.cctor_finished;
    if ( v18 )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_48DF502 )
      {
        sub_1B00CCC(&TerminalPramsManager_TypeInfo, v12);
        byte_48DF502 = 1;
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
               (const MethodInfo_302D9C0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsQuestClear_36399468(Item, -1, 0, 0LL) )
        goto LABEL_44;
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_48DF502 )
      {
        sub_1B00CCC(&TerminalPramsManager_TypeInfo, v12);
        byte_48DF502 = 1;
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
        (const MethodInfo_302DA5C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
    RandomRangeQuest = QuestRandomGroupMaster__GetRandomRangeQuest(v13, randomGroupId, 0LL);
    if ( RandomRangeQuest )
    {
      v24 = RandomRangeQuest;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_48DF502 )
      {
        sub_1B00CCC(&TerminalPramsManager_TypeInfo, v12);
        byte_48DF502 = 1;
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
        (const MethodInfo_302DA48 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      TerminalPramsManager__SaveQuestRandomGroupList(0LL);
LABEL_44:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_48DF502 )
      {
        sub_1B00CCC(&TerminalPramsManager_TypeInfo, v12);
        byte_48DF502 = 1;
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
                                     (const MethodInfo_302D9C0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) == v15->fields.questId;
        return (char)RandomRangeQuest;
      }
LABEL_53:
      sub_1B00F28(Instance, v12);
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

  if ( (byte_48DF4DA & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&war_id);
    sub_1B00CCC(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_48DF4DA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1B00F28(Instance, v7);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             war_id,
             (const MethodInfo_2FE6A4C *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Entity, HIDWORD(Entity[6].klass), 0, v9);
  return (char)Entity;
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

  if ( (byte_48DF4F0 & 1) == 0 )
  {
    sub_1B00CCC(&ScriptManager_TypeInfo, end_act);
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v4);
    byte_48DF4F0 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_48DF506 )
  {
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, end_act);
    byte_48DF506 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v5->static_fields->_WarId_k__BackingField;
  if ( !byte_48DF503 )
  {
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, end_act);
    v5 = TerminalPramsManager_TypeInfo;
    byte_48DF503 = 1;
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
  const MethodInfo *v29; // x1

  if ( (byte_48DF4F3 & 1) == 0 )
  {
    sub_1B00CCC(&BattleRootComponent_TypeInfo, qinf);
    sub_1B00CCC(&BattleSetupInfo_TypeInfo, v11);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v13);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v14);
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v15);
    byte_48DF4F3 = 1;
  }
  if ( result == 2 )
  {
    if ( clsQuestCheck__CheckQuestPlayable(this, qinf, endTime, boostId, *(const MethodInfo **)&boostId) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_48DF506 )
      {
        sub_1B00CCC(&TerminalPramsManager_TypeInfo, v21);
        byte_48DF506 = 1;
      }
      v22 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v22 = TerminalPramsManager_TypeInfo;
      }
      WarId_k__BackingField = v22->static_fields->_WarId_k__BackingField;
      if ( !byte_48DF503 )
      {
        sub_1B00CCC(&TerminalPramsManager_TypeInfo, v21);
        v22 = TerminalPramsManager_TypeInfo;
        byte_48DF503 = 1;
      }
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = TerminalPramsManager_TypeInfo;
      }
      QuestId_k__BackingField = v22->static_fields->_QuestId_k__BackingField;
      if ( !byte_48DF50E )
      {
        sub_1B00CCC(&TerminalPramsManager_TypeInfo, v21);
        v22 = TerminalPramsManager_TypeInfo;
        byte_48DF50E = 1;
      }
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = TerminalPramsManager_TypeInfo;
      }
      PhaseCnt_k__BackingField = v22->static_fields->_PhaseCnt_k__BackingField;
      v26 = (BattleSetupInfo_o *)sub_1B00F18(BattleSetupInfo_TypeInfo);
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
        *((_DWORD *)Instance + 14) = boostId;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance
        || (*((_BYTE *)Instance + 148) = 1,
            (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__)) == 0LL)
        || (*((_DWORD *)Instance + 38) = 1,
            (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
      {
LABEL_38:
        sub_1B00F28(Instance, v17);
      }
      AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 35, 1, v27, 0LL);
    }
LABEL_36:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0LL);
      return;
    }
    goto LABEL_38;
  }
  if ( result )
    goto LABEL_36;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    Instance = *(void **)(v20 + 496);
    if ( !Instance )
      goto LABEL_38;
    BattleResultComponent__EndResult((BattleResultComponent_o *)Instance, 0LL);
    goto LABEL_36;
  }
  sub_1B011E8(*((_QWORD *)Instance + 4));
  clsQuestCheck___ctor(v28, v29);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall clsQuestCheck__SaveEventQuestIdListPlayable(
        clsQuestCheck_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ServantStatusBattleListViewItem_c *v9; // x21
  TerminalPramsManager_c *v10; // x0
  ServantStatusBattleListViewItem_o *p_ClearEventQuestIds_k__BackingField; // x0
  const MethodInfo *v12; // x2
  System_Collections_Generic_IEnumerable_T__o *v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x19
  TerminalPramsManager_c *v18; // x0
  ServantStatusBattleListViewItem_o *v19; // x0

  if ( (byte_48DF4EC & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_String_Join_int___, *(_QWORD *)&eventId);
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v6);
    sub_1B00CCC(&StringLiteral_865/*","*/, v7);
    sub_1B00CCC(&StringLiteral_1/*""*/, v8);
    byte_48DF4EC = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v9 = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  if ( !byte_48DF504 )
  {
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, *(_QWORD *)&eventId);
    byte_48DF504 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  p_ClearEventQuestIds_k__BackingField = (ServantStatusBattleListViewItem_o *)&v10->static_fields->_ClearEventQuestIds_k__BackingField;
  p_ClearEventQuestIds_k__BackingField->klass = v9;
  sub_1B00C70(p_ClearEventQuestIds_k__BackingField, (int32_t)v9, (int32_t)method, v3);
  v13 = (System_Collections_Generic_IEnumerable_T__o *)clsQuestCheck__GetEventQuestIdListPlayable(this, eventId, v12);
  v17 = System_String__Join_int_(
          (System_String_o *)StringLiteral_865/*","*/,
          v13,
          (const MethodInfo_2DF38A4 *)Method_System_String_Join_int___);
  if ( !byte_48DF504 )
  {
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v14);
    byte_48DF504 = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v19 = (ServantStatusBattleListViewItem_o *)&v18->static_fields->_ClearEventQuestIds_k__BackingField;
  v19->klass = (ServantStatusBattleListViewItem_c *)v17;
  sub_1B00C70(v19, (int32_t)v17, v15, v16);
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
  int64_t Instance; // x0
  __int64 v11; // x1
  UserItemMaster_o *v12; // x22
  int32_t targetId; // w23
  int32_t num; // w22
  bool v15; // w8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_48DF4DF & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserItemMaster___, is_release);
    sub_1B00CCC(&NetworkManager_TypeInfo, v8);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_48DF4DF = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !qrd )
    goto LABEL_13;
  v12 = (UserItemMaster_o *)Instance;
  targetId = qrd->fields.targetId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v12 )
    goto LABEL_13;
  Instance = UserItemMaster__TryGetEntity(v12, &entity, Instance, targetId, 0LL);
  if ( (Instance & 1) == 0 )
  {
    v15 = 1;
    goto LABEL_12;
  }
  if ( !entity )
LABEL_13:
    sub_1B00F28(Instance, v11);
  num = entity->fields.num;
  v15 = num < QuestReleaseEntity__getValueInt(qrd, 0LL);
LABEL_12:
  *is_release = (v15 ^ itemGet) & 1;
}


bool __fastcall clsQuestCheck__isPlayQuestStartAction(clsQuestCheck_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  int32_t WarId_k__BackingField; // w20
  int32_t QuestId_k__BackingField; // w19

  if ( (byte_48DF4EF & 1) == 0 )
  {
    sub_1B00CCC(&ScriptManager_TypeInfo, method);
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v3);
    byte_48DF4EF = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_48DF506 )
  {
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, method);
    byte_48DF506 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v4->static_fields->_WarId_k__BackingField;
  if ( !byte_48DF503 )
  {
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
    byte_48DF503 = 1;
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
  int64_t Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_48DF4E0 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&qid);
    sub_1B00CCC(&NetworkManager_TypeInfo, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_48DF4E0 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  Instance = UserQuestMaster__TryGetEntity((UserQuestMaster_o *)MasterData_object, &entity, Instance, qid, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.challengeNum == 0;
LABEL_12:
    sub_1B00F28(Instance, v7);
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

  if ( (byte_48DF4E1 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&qid);
    sub_1B00CCC(&NetworkManager_TypeInfo, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_48DF4E1 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  if ( UserQuestMaster__TryGetEntity((UserQuestMaster_o *)MasterData_object, &entity, (int64_t)Instance, qid, 0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserQuestEntity__getQuestPhase(entity, 0LL);
LABEL_12:
    sub_1B00F28(Instance, v7);
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

  if ( (byte_48DF4DD & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&qid);
    sub_1B00CCC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_48DF4DD = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               qid,
                               (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 1;
  if ( !entity )
LABEL_12:
    sub_1B00F28(Instance, v7);
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
  int64_t Master_object; // x0
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
  int32_t v49; // w3
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
  int32_t v65; // w3
  Il2CppObject *v66; // x23
  const MethodInfo *v67; // x4
  QuestReleaseEntity_o *current; // x22
  _BOOL8 HasStatus; // x0
  __int64 v70; // x1
  int32_t v71; // w2
  int32_t v72; // w3
  int v73; // w19
  int32_t klass; // w24
  System_Collections_Generic_IEnumerable_T__o *v75; // x25
  System_Collections_Generic_List_object__o *v76; // x24
  const MethodInfo *v77; // x2
  BalanceConfig_c *v78; // x0
  const MethodInfo *v79; // x2
  BalanceConfig_c *v80; // x0
  int32_t v81; // w2
  int32_t v82; // w3
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *v85; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF
  UserQuestEntity_o *v87; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_48DF4D3 & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, *(_QWORD *)&questId);
    sub_1B00CCC(&Method_BasicHelper_Any_QuestReleaseEntity___, v9);
    sub_1B00CCC(&System_Comparison_QuestReleaseEntity__TypeInfo, v10);
    sub_1B00CCC(&CondType_TypeInfo, v11);
    sub_1B00CCC(&Method_DataManager_GetMaster_EventDetailMaster___, v12);
    sub_1B00CCC(&Method_DataManager_GetMaster_QuestReleaseMaster___, v13);
    sub_1B00CCC(&Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___, v14);
    sub_1B00CCC(&Method_DataManager_GetMaster_UserQuestMaster___, v15);
    sub_1B00CCC(&Method_DataManager_GetMaster_WarMaster___, v16);
    sub_1B00CCC(&DataManager_TypeInfo, v17);
    sub_1B00CCC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v18);
    sub_1B00CCC(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v19);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v20);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v21);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v22);
    sub_1B00CCC(&System_Func_QuestReleaseEntity__bool__TypeInfo, v23);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__, v24);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__, v25);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v26);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__, v27);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___74534632, v28);
    sub_1B00CCC(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v29);
    sub_1B00CCC(&NetworkManager_TypeInfo, v30);
    sub_1B00CCC(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__, v31);
    sub_1B00CCC(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__, v32);
    sub_1B00CCC(&clsQuestCheck___c_TypeInfo, v33);
    byte_48DF4D3 = 1;
  }
  v85 = 0LL;
  entity = 0LL;
  memset(&v84, 0, sizeof(v84));
  *questReleaseNG = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)questReleaseNG, 0, (int32_t)questReleaseNG, (int32_t)questInfo);
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, v34) )
    return 0;
  v87 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_WarMaster___);
  if ( !questInfo || !Master_object )
    goto LABEL_98;
  IsShop = DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             questInfo->fields.warId,
             (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( IsShop )
  {
    Master_object = (int64_t)entity;
    if ( !entity )
      goto LABEL_98;
    IsShop = WarEntity__IsShop((WarEntity_o *)entity, 0LL);
    if ( !IsShop )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v39 = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = NetworkManager__get_UserId(0LL);
      if ( !v39 )
        goto LABEL_98;
      IsShop = UserQuestMaster__TryGetEntity((UserQuestMaster_o *)v39, &v87, Master_object, questId, 0LL);
      if ( IsShop )
      {
        Master_object = (int64_t)v87;
        if ( !v87 )
          goto LABEL_98;
        IsShop = UserQuestEntity__IsNotExpired(v87, 0LL);
        if ( IsShop )
          return 1;
      }
    }
  }
  if ( !clsQuestCheck__IsValidQuestRandomGroup((clsQuestCheck_o *)IsShop, questInfo, v38) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object )
    goto LABEL_98;
  p_fields = &this->fields;
  QuestReleaseMaster__getListByQuestID_38270468((QuestReleaseMaster_o *)Master_object, questId, &this->fields.qrs, 0LL);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !entity || !Master_object )
    goto LABEL_98;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &v85,
         (int32_t)entity[6].klass,
         (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Master_object = (int64_t)v85;
    if ( !v85 )
      goto LABEL_98;
    if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v85, 0LL) )
    {
      Master_object = (int64_t)v85;
      if ( !v85 )
        goto LABEL_98;
      UseDiceSpotId = EventDetailEntity__GetUseDiceSpotId((EventDetailEntity_o *)v85, 0LL);
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
          _9__5_0 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_QuestReleaseEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__5_0,
            v46,
            Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__,
            0LL);
          static_fields = clsQuestCheck___c_TypeInfo->static_fields;
          static_fields->__9__5_0 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__5_0;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v48, v49);
        }
        if ( !BasicHelper__Any_object_(
                qrs,
                (System_Func_T__bool__o *)_9__5_0,
                (const MethodInfo_2D4E780 *)Method_BasicHelper_Any_QuestReleaseEntity___) )
        {
          Master_object = (int64_t)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Master_object = (int64_t)BalanceConfig_TypeInfo;
          }
          v50 = *(struct BalanceConfig_StaticFields **)(Master_object + 184);
          if ( v50->EventBoardGameNextBoardQuestId != questId )
          {
            if ( !*(_DWORD *)(Master_object + 224) )
            {
              j_il2cpp_runtime_class_init_0(Master_object);
              v50 = BalanceConfig_TypeInfo->static_fields;
            }
            if ( v50->EventBoardGameNextRoundQuestId != questId )
            {
              if ( !entity )
                goto LABEL_98;
              klass = (int32_t)entity[6].klass;
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              if ( CondType__IsUserEventStatus(klass, 7, 0LL) )
                return 0;
              v75 = (System_Collections_Generic_IEnumerable_T__o *)p_fields->qrs;
              v76 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor_54268612(
                v76,
                v75,
                (const MethodInfo_33C12C4 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___74534632);
              v78 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v78 = BalanceConfig_TypeInfo;
              }
              if ( clsQuestCheck__CheckQuestPlayableNow(this, v78->static_fields->EventBoardGameNextBoardQuestId, v77) )
                return 0;
              v80 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v80 = BalanceConfig_TypeInfo;
              }
              if ( clsQuestCheck__CheckQuestPlayableNow(this, v80->static_fields->EventBoardGameNextRoundQuestId, v79) )
                return 0;
              p_fields->qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v76;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v76, v81, v82);
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
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___);
    if ( !questInfo->fields._WarInfo_k__BackingField )
      goto LABEL_98;
    v52 = (UserEventQuestCooltimeMaster_o *)Master_object;
    Master_object = MapControl_WarInfo__GetEventId(questInfo->fields._WarInfo_k__BackingField, 0LL);
    if ( !v52 )
      goto LABEL_98;
    v53 = UserEventQuestCooltimeMaster__getEntity(v52, Master_object, questInfo->fields.questId, 1, 0LL);
    if ( v53 )
    {
      v54 = v53;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      clearedAt = v54->fields.clearedAt;
      v57 = Time;
      Master_object = (int64_t)UserEventQuestCooltimeEntity__GetMasterEntity(v54, 0LL);
      if ( !Master_object )
        goto LABEL_98;
      if ( v57 < clearedAt + *(int *)(Master_object + 28) )
        return 0;
    }
  }
  if ( !p_fields->qrs )
    return 0;
  Master_object = (int64_t)this->fields.cQuestReleaseListP;
  if ( !Master_object )
    goto LABEL_98;
  v58 = *(_DWORD *)(Master_object + 24);
  v59 = *(_DWORD *)(Master_object + 28) + 1;
  *(_DWORD *)(Master_object + 24) = 0;
  *(_DWORD *)(Master_object + 28) = v59;
  if ( v58 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(Master_object + 16), 0, v58, 0LL);
    Master_object = (int64_t)this->fields.cQuestReleaseListP;
    if ( !Master_object )
      goto LABEL_98;
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Master_object,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.qrs,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__);
  cQuestReleaseListP = this->fields.cQuestReleaseListP;
  Master_object = (int64_t)clsQuestCheck___c_TypeInfo;
  if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
    Master_object = (int64_t)clsQuestCheck___c_TypeInfo;
  }
  v61 = *(System_Comparison_T__o **)(*(_QWORD *)(Master_object + 184) + 16LL);
  if ( !v61 )
  {
    if ( !*(_DWORD *)(Master_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = (int64_t)clsQuestCheck___c_TypeInfo;
    }
    v62 = **(Il2CppObject ***)(Master_object + 184);
    v61 = (System_Comparison_T__o *)sub_1B00F18(System_Comparison_QuestReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(
      v61,
      v62,
      Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__,
      0LL);
    v63 = clsQuestCheck___c_TypeInfo->static_fields;
    v63->__9__5_1 = (struct System_Comparison_QuestReleaseEntity__o *)v61;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v63->__9__5_1, (int32_t)v61, v64, v65);
  }
  if ( !cQuestReleaseListP )
    goto LABEL_98;
  System_Collections_Generic_List_object___Sort_54277268(
    (System_Collections_Generic_List_object__o *)cQuestReleaseListP,
    v61,
    (const MethodInfo_33C3494 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  if ( v87 )
    goto LABEL_74;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v66 = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = NetworkManager__get_UserId(0LL);
  if ( !v66 )
LABEL_98:
    sub_1B00F28(Master_object, v36);
  UserQuestMaster__TryGetEntity((UserQuestMaster_o *)v66, &v87, Master_object, questId, 0LL);
LABEL_74:
  Master_object = (int64_t)this->fields.cQuestReleaseListP;
  if ( !Master_object )
    goto LABEL_98;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v83,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v84 = v83;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v84,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
  {
    current = (QuestReleaseEntity_o *)v84.fields._current;
    if ( !v87 )
      goto LABEL_81;
    HasStatus = UserQuestEntity__HasStatus(v87, 8, 0LL);
    if ( !HasStatus )
      goto LABEL_81;
    if ( !current )
      sub_1B00F28(HasStatus, v70);
    if ( current->fields.type != 12 )
    {
LABEL_81:
      if ( !clsQuestCheck__IsQuestRelease_32371416(this, current, -1, questInfo, v67) )
      {
        *questReleaseNG = current;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)questReleaseNG, (int32_t)current, v71, v72);
        v73 = 17;
        goto LABEL_84;
      }
    }
  }
  v73 = 18;
LABEL_84:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v84,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v73 != 17;
}


void __fastcall clsQuestCheck___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48DF50F & 1) == 0 )
  {
    sub_1B00CCC(&clsQuestCheck___c_TypeInfo, v1);
    byte_48DF50F = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(clsQuestCheck___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  clsQuestCheck___c_TypeInfo->static_fields->__9 = (struct clsQuestCheck___c_o *)v2;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)clsQuestCheck___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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

  if ( (byte_48DF511 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B00CCC(&Method_clsQuestCheck___c__DisplayClass41_1__CheckQuestPlayable_b__5__, v5);
    sub_1B00CCC(&clsQuestCheck___c__DisplayClass41_1_TypeInfo, v6);
    byte_48DF511 = 1;
  }
  v7 = sub_1B00F18(clsQuestCheck___c__DisplayClass41_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_clsQuestCheck___c__DisplayClass41_1__CheckQuestPlayable_b__5__,
          0LL),
        !Instance) )
  {
    sub_1B00F28(v8, v9);
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

  if ( (byte_48DF512 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B00CCC(&Method_clsQuestCheck___c__DisplayClass41_2__CheckQuestPlayable_b__6__, v5);
    sub_1B00CCC(&clsQuestCheck___c__DisplayClass41_2_TypeInfo, v6);
    byte_48DF512 = 1;
  }
  v7 = sub_1B00F18(clsQuestCheck___c__DisplayClass41_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_clsQuestCheck___c__DisplayClass41_2__CheckQuestPlayable_b__6__,
          0LL),
        !Instance) )
  {
    sub_1B00F28(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v11, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_11(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_48DF514 & 1) == 0 )
  {
    sub_1B00CCC(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_48DF514 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v4);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2D4D040 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_13(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_48DF515 & 1) == 0 )
  {
    sub_1B00CCC(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_48DF515 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v4);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2D4D040 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_2(
        clsQuestCheck___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_48DF516 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_48DF516 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v4);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_3(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_48DF510 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_48DF510 = 1;
  }
  TopLoginRequest__ResetAccesTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v3);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_4(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_7(
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

  if ( (byte_48DF513 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B00CCC(&Method_clsQuestCheck___c__DisplayClass41_3__CheckQuestPlayable_b__8__, v5);
    sub_1B00CCC(&clsQuestCheck___c__DisplayClass41_3_TypeInfo, v6);
    byte_48DF513 = 1;
  }
  v7 = sub_1B00F18(clsQuestCheck___c__DisplayClass41_3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_clsQuestCheck___c__DisplayClass41_3__CheckQuestPlayable_b__8__,
          0LL),
        !Instance) )
  {
    sub_1B00F28(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v11, 0LL);
}


bool __fastcall clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_0(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B00F28(this, 0LL);
  return n->fields.type == 118;
}


int32_t __fastcall clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_1(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *a,
        QuestReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B00F28(this, a);
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
    sub_1B00F28(this, n);
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
    sub_1B00F28(this, n);
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


void __fastcall clsQuestCheck___c__DisplayClass41_0___CheckQuestPlayable_b__10(
        clsQuestCheck___c__DisplayClass41_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  clsQuestCheck_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B00F28(0LL, result);
  clsQuestCheck__RecoverItemListDialogCallback(
    _4__this,
    this->fields.questInfo,
    this->fields.srcEndTime,
    result,
    this->fields.boostId,
    0LL);
}


void __fastcall clsQuestCheck___c__DisplayClass41_0___CheckQuestPlayable_b__12(
        clsQuestCheck___c__DisplayClass41_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  clsQuestCheck_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B00F28(0LL, result);
  clsQuestCheck__RecoverItemListDialogCallback(
    _4__this,
    this->fields.questInfo,
    this->fields.srcEndTime,
    result,
    this->fields.boostId,
    0LL);
}


void __fastcall clsQuestCheck___c__DisplayClass41_0___CheckQuestPlayable_b__9(
        clsQuestCheck___c__DisplayClass41_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  clsQuestCheck_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B00F28(0LL, result);
  clsQuestCheck__RecoverItemListDialogCallback(
    _4__this,
    this->fields.questInfo,
    this->fields.srcEndTime,
    result,
    this->fields.boostId,
    0LL);
}


void __fastcall clsQuestCheck___c__DisplayClass41_1___ctor(
        clsQuestCheck___c__DisplayClass41_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall clsQuestCheck___c__DisplayClass41_1___CheckQuestPlayable_b__5(
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

  if ( (byte_48DF517 & 1) == 0 )
  {
    sub_1B00CCC(&SceneJumpInfo_TypeInfo, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B00CCC(&StringLiteral_12375/*"SellServant"*/, v4);
    sub_1B00CCC(&StringLiteral_12412/*"ServantCombine"*/, v5);
    byte_48DF517 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_1B00F18(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_37367716(v8, (System_String_o *)StringLiteral_12375/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v11 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1B00F28(v9, v10);
    case 1:
      v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v9 )
      {
        v11 = 71;
        v12 = 0LL;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_1B00F18(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_37367628(v8, (System_String_o *)StringLiteral_12412/*"ServantCombine"*/, 0LL);
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


void __fastcall clsQuestCheck___c__DisplayClass41_2___CheckQuestPlayable_b__6(
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

  if ( (byte_48DF518 & 1) == 0 )
  {
    sub_1B00CCC(&SceneJumpInfo_TypeInfo, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B00CCC(&StringLiteral_12416/*"ServantEquipList"*/, v4);
    sub_1B00CCC(&StringLiteral_12375/*"SellServant"*/, v5);
    sub_1B00CCC(&StringLiteral_12415/*"ServantEQCombine"*/, v6);
    byte_48DF518 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_1B00F18(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_37367716(v9, (System_String_o *)StringLiteral_12375/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v12 = 22;
        goto LABEL_12;
      }
LABEL_14:
      sub_1B00F28(v10, v11);
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_1B00F18(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_37367628(v9, (System_String_o *)StringLiteral_12416/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v12 = 71;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_1B00F18(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_37367628(v9, (System_String_o *)StringLiteral_12415/*"ServantEQCombine"*/, 0LL);
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


void __fastcall clsQuestCheck___c__DisplayClass41_3___CheckQuestPlayable_b__8(
        clsQuestCheck___c__DisplayClass41_3_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_48DF519 & 1) == 0 )
  {
    sub_1B00CCC(&SceneJumpInfo_TypeInfo, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B00CCC(&StringLiteral_12375/*"SellServant"*/, v4);
    byte_48DF519 = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v6 = (SceneJumpInfo_o *)sub_1B00F18(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_37367716(v6, (System_String_o *)StringLiteral_12375/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_1B00F28(v7, v8);
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v6, 0LL);
  }
}