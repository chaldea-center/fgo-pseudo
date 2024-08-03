void __fastcall clsQuestCheck___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49F9037 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_10875/*"QuestStartEffect"*/, v1);
    sub_1B640C8(&clsQuestCheck_TypeInfo, v4);
    byte_49F9037 = 1;
  }
  clsQuestCheck_TypeInfo->static_fields->KEY_QUEST_START_EFFECT = (struct System_String_o *)StringLiteral_10875/*"QuestStartEffect"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)clsQuestCheck_TypeInfo->static_fields, StringLiteral_10875/*"QuestStartEffect"*/, v2, v3);
}


void __fastcall clsQuestCheck___ctor(clsQuestCheck_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49F9036 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v4);
    sub_1B640C8(&Method_SingletonTemplate_clsQuestCheck___ctor__, v5);
    byte_49F9036 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v6, v7, v8);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                       v9,
                                                       v10);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.cQuestReleaseListP = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.cQuestReleaseListP, (int32_t)v11, v12, v13);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_36EC554 *)Method_SingletonTemplate_clsQuestCheck___ctor__);
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
  int32_t v53; // w2
  int32_t v54; // w3
  MapControl_QuestInfo_o **v55; // x19
  int32_t v56; // w2
  int32_t v57; // w3
  int32_t v58; // w28
  MapControl_QuestInfo_o *v59; // x8
  int32_t v60; // w20
  int32_t questPhase; // w29
  int32_t v62; // w21
  _BOOL4 isNotItemConsume; // w22
  int32_t v64; // w25
  int v65; // w26
  bool IsQuestReleaseAll; // w0
  Il2CppObject *MasterData_object; // x26
  UserQuestEntity_o *Entity; // x0
  __int64 v69; // x26
  int64_t Time; // x0
  System_String_o *v71; // x19
  System_String_o *v72; // x20
  __int64 v73; // x1
  __int64 v74; // x2
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
  __int64 v86; // x1
  __int64 v87; // x1
  __int64 v88; // x2
  clsQuestCheck___c_c *v89; // x8
  Il2CppObject *v90; // x23
  struct clsQuestCheck___c_StaticFields *v91; // x0
  TerminalPramsManager_c *v92; // x0
  int32_t v93; // w20
  int64_t v94; // x28
  struct TerminalPramsManager_StaticFields *v95; // x8
  UserServantMaster_o *v96; // x28
  Il2CppObject *v97; // x29
  __int64 v98; // x1
  __int64 v99; // x2
  CommonUI_o *v100; // x19
  int32_t v101; // w20
  int32_t svtKeep; // w21
  ServantFrameShortDlgComponent_CallbackFunc_o *v103; // x22
  Il2CppObject *v104; // x23
  struct clsQuestCheck___c_StaticFields *v105; // x0
  int32_t v106; // w2
  int32_t v107; // w3
  CommonUI_o *v108; // x0
  int32_t v109; // w1
  int32_t v110; // w2
  int32_t v111; // w3
  __int64 v112; // x1
  __int64 v113; // x2
  CommonUI_o *v114; // x19
  int32_t v115; // w20
  int32_t svtEquipKeep; // w21
  Il2CppObject *v117; // x23
  struct clsQuestCheck___c_StaticFields *v118; // x0
  int32_t v119; // w2
  int32_t v120; // w3
  int32_t Count; // w19
  __int64 v122; // x1
  __int64 v123; // x2
  CommonUI_o *v124; // x20
  BalanceConfig_c *v125; // x8
  Il2CppObject *v126; // x23
  struct clsQuestCheck___c_StaticFields *v127; // x0
  int32_t v128; // w2
  int32_t v129; // w3
  bool v130; // w25
  int32_t v132; // w28
  Il2CppObject *Instance; // x19
  __int64 v134; // x1
  __int64 v135; // x2
  RecoverDlgComponent_CallbackFunc_o *v136; // x20
  CommonUI_o *v137; // x0
  int32_t v138; // w1
  RecoverDlgComponent_CallbackFunc_o *v139; // x2
  bool v140; // w3
  Il2CppObject *v141; // x19
  __int64 v142; // x1
  __int64 v143; // x2
  RecoverDlgComponent_CallbackFunc_o *v144; // x20
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x24
  Il2CppObject *v146; // x25
  Il2CppObject *v147; // x27
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v149; // x23
  System_String_o *v150; // x20
  int32_t v151; // w29
  __int64 v152; // x1
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v154; // x8
  int64_t v155; // x28
  int64_t v156; // x26
  int32_t qp; // w8
  struct System_Int32_array *nums; // x9
  System_String_o *v159; // x0
  System_String_o *v160; // x0
  System_String_o *v161; // x19
  System_String_o *v162; // x0
  System_String_o *v163; // x19
  __int64 v164; // x1
  __int64 v165; // x2
  CommonUI_o *v166; // x20
  clsQuestCheck___c_c *v167; // x8
  System_String_o *v168; // x21
  System_Action_o *_9__41_11; // x22
  Il2CppObject *v170; // x23
  int32_t v171; // w2
  int32_t v172; // w3
  struct clsQuestCheck___c_StaticFields *v173; // x0
  ServantStatusBattleListViewItem_o *p__9__41_11; // x0
  Il2CppObject *v175; // x19
  __int64 v176; // x1
  __int64 v177; // x2
  RecoverDlgComponent_CallbackFunc_o *v178; // x20
  QuestConsumeItemEntity_o *v179; // x24
  Il2CppObject *v180; // x25
  Il2CppObject *v181; // x27
  UserGameEntity_o *v182; // x0
  UserGameEntity_o *v183; // x23
  System_String_o *v184; // x20
  int32_t v185; // w29
  struct System_Int32_array *v186; // x8
  struct System_Int32_array *v187; // x8
  int64_t v188; // x28
  int64_t v189; // x26
  int32_t v190; // w8
  struct System_Int32_array *v191; // x9
  Il2CppObject *v192; // x0
  __int64 v193; // x1
  TerminalPramsManager_c *v194; // x0
  int v195; // w8
  TerminalPramsManager_c *v196; // x0
  __int64 v197; // x1
  int32_t VaildPayType; // w22
  TerminalPramsManager_c *v199; // x0
  MapControl_QuestInfo_o *v200; // x8
  QuestMessageMaster_o *v201; // x19
  int32_t v202; // w2
  System_String_o *ValidMessage; // x0
  System_String_o *v204; // x19
  Il2CppObject *v205; // x20
  System_String_o *v206; // x21
  __int64 v207; // x1
  __int64 v208; // x2
  System_String_o *v209; // x22
  clsQuestCheck___c_c *v210; // x8
  CommonConfirmDialog_ClickDelegate_o *_9__41_2; // x24
  System_String_o *v212; // x23
  Il2CppObject *v213; // x25
  struct clsQuestCheck___c_StaticFields *v214; // x0
  int32_t v215; // w2
  int32_t v216; // w3
  System_String_o *v217; // x0
  System_String_o *v218; // x0
  System_String_o *v219; // x19
  System_String_o *v220; // x0
  __int64 v221; // x1
  __int64 v222; // x2
  clsQuestCheck___c_c *v223; // x8
  Il2CppObject *v224; // x23
  struct clsQuestCheck___c_StaticFields *v225; // x0
  int32_t v226; // [xsp+34h] [xbp-7Ch]
  int32_t v227; // [xsp+34h] [xbp-7Ch]
  char v228; // [xsp+38h] [xbp-78h]
  char v229; // [xsp+38h] [xbp-78h]
  int32_t key; // [xsp+3Ch] [xbp-74h]
  int32_t questId; // [xsp+44h] [xbp-6Ch]
  int32_t servantEquipSum[2]; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_49F9034 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, questInfo);
    sub_1B640C8(&RecoverDlgComponent_CallbackFunc_TypeInfo, v9);
    sub_1B640C8(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, v10);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11);
    sub_1B640C8(&Method_DataManager_GetMasterData_GachaMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMessageMaster___, v14);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v15);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v16);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserQuestMaster___, v17);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v18);
    sub_1B640C8(&Method_DataManager_GetMasterData_WarMaster___, v19);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v20);
    sub_1B640C8(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v21);
    sub_1B640C8(&LocalizationManager_TypeInfo, v22);
    sub_1B640C8(&NetworkManager_TypeInfo, v23);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v24);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v26);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v27);
    sub_1B640C8(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_0__, v28);
    sub_1B640C8(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_11__, v29);
    sub_1B640C8(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_13__, v30);
    sub_1B640C8(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_1__, v31);
    sub_1B640C8(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_2__, v32);
    sub_1B640C8(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_3__, v33);
    sub_1B640C8(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_4__, v34);
    sub_1B640C8(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_7__, v35);
    sub_1B640C8(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__10__, v36);
    sub_1B640C8(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__12__, v37);
    sub_1B640C8(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__9__, v38);
    sub_1B640C8(&clsQuestCheck___c__DisplayClass41_0_TypeInfo, v39);
    sub_1B640C8(&clsQuestCheck___c_TypeInfo, v40);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v41);
    sub_1B640C8(&StringLiteral_10833/*"QUEST_MESSAGE_DLG_DECIDE"*/, v42);
    sub_1B640C8(&StringLiteral_10832/*"QUEST_MESSAGE_DLG_CANCEL"*/, v43);
    sub_1B640C8(&StringLiteral_10831/*"QUEST_ITEM_COST_OVER"*/, v44);
    sub_1B640C8(&StringLiteral_10860/*"QUEST_TIME_OVER"*/, v45);
    sub_1B640C8(&StringLiteral_12050/*"SHORT_DLG_TITLE"*/, v46);
    sub_1B640C8(&StringLiteral_44/*"\n\n"*/, v47);
    sub_1B640C8(&StringLiteral_2955/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, v48);
    sub_1B640C8(&StringLiteral_1/*""*/, v49);
    sub_1B640C8(&StringLiteral_10774/*"QUEST_AP_MAX_OVER"*/, v50);
    byte_49F9034 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  v51 = sub_1B64314(clsQuestCheck___c__DisplayClass41_0_TypeInfo, questInfo, srcEndTime);
  clsQuestCheck___c__DisplayClass41_0___ctor((clsQuestCheck___c__DisplayClass41_0_o *)v51, 0LL);
  if ( !v51 )
    goto LABEL_246;
  *(_QWORD *)(v51 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 16), (int32_t)this, v53, v54);
  *(_QWORD *)(v51 + 24) = questInfo;
  v55 = (MapControl_QuestInfo_o **)(v51 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 24), (int32_t)questInfo, v56, v57);
  SpotID = *(_QWORD *)(v51 + 24);
  *(_QWORD *)(v51 + 32) = srcEndTime;
  *(_DWORD *)(v51 + 40) = boostId;
  if ( !SpotID )
    goto LABEL_246;
  v58 = *(_DWORD *)(SpotID + 64);
  SpotID = MapControl_QuestInfo__GetSpotID((MapControl_QuestInfo_o *)SpotID, 0LL);
  v59 = *v55;
  if ( !*v55 )
    goto LABEL_246;
  v60 = v59->fields.questId;
  questPhase = v59->fields.questPhase;
  v62 = SpotID;
  SpotID = MapControl_QuestInfo__GetActConsumeCost(*v55, 0LL);
  if ( !*v55 )
    goto LABEL_246;
  isNotItemConsume = (*v55)->fields.isNotItemConsume;
  v64 = SpotID;
  SpotID = (int64_t)MapControl_QuestInfo__GetMine(*v55, 0LL);
  if ( !SpotID )
    goto LABEL_246;
  v65 = *(_DWORD *)(SpotID + 80);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IsQuestReleaseAll = TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
  if ( v65 != 1 && !IsQuestReleaseAll )
  {
    SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SpotID )
      goto LABEL_246;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)SpotID,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    SpotID = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      goto LABEL_246;
    Entity = UserQuestMaster__GetEntity((UserQuestMaster_o *)MasterData_object, SpotID, v60, 0LL);
    if ( !Entity || !UserQuestEntity__IsNotExpired(Entity, 0LL) )
    {
      v69 = *(_QWORD *)(v51 + 32);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      if ( v69 >= 1 && v69 - Time <= 0 )
      {
        v71 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v72 = LocalizationManager__Get((System_String_o *)StringLiteral_10860/*"QUEST_TIME_OVER"*/, 0LL);
        SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v75 = (CommonUI_o *)SpotID;
        v76 = clsQuestCheck___c_TypeInfo;
        if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
          v76 = clsQuestCheck___c_TypeInfo;
        }
        _9__41_3 = v76->static_fields->__9__41_3;
        if ( _9__41_3 )
          goto LABEL_44;
        if ( !v76->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v76);
          v76 = clsQuestCheck___c_TypeInfo;
        }
        v78 = (Il2CppObject *)v76->static_fields->__9;
        _9__41_3 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v73, v74);
        System_Action___ctor(_9__41_3, v78, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_3__, 0LL);
        v81 = (int)_9__41_3;
        static_fields = clsQuestCheck___c_TypeInfo->static_fields;
        static_fields->__9__41_3 = _9__41_3;
        p__9__41_3 = (ServantStatusBattleListViewItem_o *)&static_fields->__9__41_3;
LABEL_43:
        sub_1B6406C(p__9__41_3, v81, v79, v80);
LABEL_44:
        if ( !v75 )
          goto LABEL_246;
        CommonUI__OpenNotificationDialog(v75, v71, v72, _9__41_3, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
        goto LABEL_96;
      }
    }
  }
  SpotID = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !*v55 )
    goto LABEL_246;
  v84 = (UserGameEntity_o *)SpotID;
  SpotID = (int64_t)MapControl_QuestInfo__GetMine(*v55, 0LL);
  if ( !SpotID )
    goto LABEL_246;
  v85 = (QuestEntity_o *)SpotID;
  SpotID = QuestEntity__GetConsumeType((QuestEntity_o *)SpotID, 0LL);
  if ( (_DWORD)SpotID == 1 )
  {
    if ( !v84 )
      goto LABEL_246;
    if ( v64 > v84->fields.actMax )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v71 = LocalizationManager__Get((System_String_o *)StringLiteral_12050/*"SHORT_DLG_TITLE"*/, 0LL);
      v72 = LocalizationManager__Get((System_String_o *)StringLiteral_10774/*"QUEST_AP_MAX_OVER"*/, 0LL);
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v75 = (CommonUI_o *)SpotID;
      v89 = clsQuestCheck___c_TypeInfo;
      if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
        v89 = clsQuestCheck___c_TypeInfo;
      }
      _9__41_3 = v89->static_fields->__9__41_4;
      if ( _9__41_3 )
        goto LABEL_44;
      if ( !v89->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v89);
        v89 = clsQuestCheck___c_TypeInfo;
      }
      v90 = (Il2CppObject *)v89->static_fields->__9;
      _9__41_3 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v87, v88);
      System_Action___ctor(_9__41_3, v90, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_4__, 0LL);
      v81 = (int)_9__41_3;
      v91 = clsQuestCheck___c_TypeInfo->static_fields;
      v91->__9__41_4 = _9__41_3;
      p__9__41_3 = (ServantStatusBattleListViewItem_o *)&v91->__9__41_4;
      goto LABEL_43;
    }
  }
  key = v58;
  questId = v60;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9049 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v86);
    byte_49F9049 = 1;
  }
  v92 = TerminalPramsManager_TypeInfo;
  v93 = questPhase;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v92 = TerminalPramsManager_TypeInfo;
  }
  v92->static_fields->_QuestId_k__BackingField = questId;
  v94 = *(_QWORD *)(v51 + 32);
  if ( !byte_49F904A )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v86);
    v92 = TerminalPramsManager_TypeInfo;
    byte_49F904A = 1;
  }
  if ( !v92->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v92);
    v92 = TerminalPramsManager_TypeInfo;
  }
  v95 = v92->static_fields;
  v95->_EndTime_k__BackingField = v94;
  v95->lastPlayQuestConsumeAp = v64;
  TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(0LL);
  SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_246;
  SpotID = (int64_t)DataManager__GetMasterData_object_(
                      (DataManager_o *)SpotID,
                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SpotID )
    goto LABEL_246;
  v96 = (UserServantMaster_o *)SpotID;
  UserServantMaster__getCount((UserServantMaster_o *)SpotID, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_246;
  v97 = DataManager__GetMasterData_object_(
          (DataManager_o *)SpotID,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v96, 1, 0LL) )
  {
    SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v84 )
      goto LABEL_246;
    v100 = (CommonUI_o *)SpotID;
    v101 = servantEquipSum[1];
    svtKeep = v84->fields.svtKeep;
    SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
      SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    }
    v103 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(SpotID + 184) + 40LL);
    if ( !v103 )
    {
      if ( !*(_DWORD *)(SpotID + 224) )
      {
        j_il2cpp_runtime_class_init_0(SpotID);
        SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
      }
      v104 = **(Il2CppObject ***)(SpotID + 184);
      v103 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                               ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                               v98,
                                                               v99);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v103,
        v104,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__41_0__,
        0LL);
      v105 = clsQuestCheck___c_TypeInfo->static_fields;
      v105->__9__41_0 = v103;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v105->__9__41_0, (int32_t)v103, v106, v107);
    }
    if ( !v100 )
      goto LABEL_246;
    v108 = v100;
    v109 = v101;
    v110 = svtKeep;
    v111 = 0;
    goto LABEL_95;
  }
  SpotID = UserServantMaster__CheckEquipAdd(v96, 1, 1, 0LL);
  if ( (SpotID & 1) != 0 )
  {
    SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v84 )
      goto LABEL_246;
    v114 = (CommonUI_o *)SpotID;
    v115 = servantEquipSum[0];
    svtEquipKeep = v84->fields.svtEquipKeep;
    SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
      SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    }
    v103 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(SpotID + 184) + 48LL);
    if ( !v103 )
    {
      if ( !*(_DWORD *)(SpotID + 224) )
      {
        j_il2cpp_runtime_class_init_0(SpotID);
        SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
      }
      v117 = **(Il2CppObject ***)(SpotID + 184);
      v103 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                               ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                               v112,
                                                               v113);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v103,
        v117,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__41_1__,
        0LL);
      v118 = clsQuestCheck___c_TypeInfo->static_fields;
      v118->__9__41_1 = v103;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v118->__9__41_1, (int32_t)v103, v119, v120);
    }
    if ( !v114 )
      goto LABEL_246;
    v111 = 1;
    v108 = v114;
    v109 = v115;
LABEL_94:
    v110 = svtEquipKeep;
LABEL_95:
    CommonUI__OpenSvtFrameShortDlg(v108, v109, v110, v111, 1, v103, 0, 0LL);
LABEL_96:
    SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( SpotID )
    {
      ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)SpotID, 0LL);
      return 0;
    }
    goto LABEL_246;
  }
  if ( !v97 )
    goto LABEL_246;
  if ( UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)v97, 0, 0LL) )
  {
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)v97, 0LL);
    SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v84 )
      goto LABEL_246;
    v124 = (CommonUI_o *)SpotID;
    if ( !byte_49F7B7B )
    {
      sub_1B640C8(&BalanceConfig_TypeInfo, v122);
      byte_49F7B7B = 1;
    }
    v125 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v125 = BalanceConfig_TypeInfo;
    }
    SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    svtEquipKeep = v125->static_fields->CommandCodeFrameMax;
    if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
      SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    }
    v103 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(SpotID + 184) + 56LL);
    if ( !v103 )
    {
      if ( !*(_DWORD *)(SpotID + 224) )
      {
        j_il2cpp_runtime_class_init_0(SpotID);
        SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
      }
      v126 = **(Il2CppObject ***)(SpotID + 184);
      v103 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                               ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                               v122,
                                                               v123);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v103,
        v126,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__41_7__,
        0LL);
      v127 = clsQuestCheck___c_TypeInfo->static_fields;
      v127->__9__41_7 = v103;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v127->__9__41_7, (int32_t)v103, v128, v129);
    }
    if ( !v124 )
      goto LABEL_246;
    v111 = 2;
    v108 = v124;
    v109 = Count;
    goto LABEL_94;
  }
  SpotID = QuestEntity__GetConsumeType(v85, 0LL);
  v132 = v93;
  switch ( (int)SpotID )
  {
    case 1:
      if ( !v84 )
        goto LABEL_246;
      if ( v64 <= UserGameEntity__getAct(v84, 0LL) )
        goto LABEL_176;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v136 = (RecoverDlgComponent_CallbackFunc_o *)sub_1B64314(RecoverDlgComponent_CallbackFunc_TypeInfo, v134, v135);
      RecoverDlgComponent_CallbackFunc___ctor(
        v136,
        (Il2CppObject *)v51,
        Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__9__,
        0LL);
      if ( !Instance )
        goto LABEL_246;
      v137 = (CommonUI_o *)Instance;
      v138 = v64;
      v139 = v136;
      v140 = 0;
      goto LABEL_148;
    case 2:
      if ( !v84 )
        goto LABEL_246;
      if ( v64 <= UserGameEntity__getRp(v84, 0LL) )
        goto LABEL_176;
      v141 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v144 = (RecoverDlgComponent_CallbackFunc_o *)sub_1B64314(RecoverDlgComponent_CallbackFunc_TypeInfo, v142, v143);
      RecoverDlgComponent_CallbackFunc___ctor(
        v144,
        (Il2CppObject *)v51,
        Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__10__,
        0LL);
      if ( !v141 )
        goto LABEL_246;
      CommonUI__OpenRpRecoverItemListDialog((CommonUI_o *)v141, v64, v144, 0, 0LL);
      return 0;
    case 3:
      ItemConsumeEntity = QuestEntity__getItemConsumeEntity(v85, isNotItemConsume, 0LL);
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_246;
      v146 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_246;
      v147 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      if ( !ItemConsumeEntity )
        goto LABEL_176;
      v149 = SelfUserGame;
      v150 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL) )
        goto LABEL_176;
      v151 = 0;
      v226 = v132;
      v228 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        SpotID = NetworkManager__get_UserId(0LL);
        itemIds = ItemConsumeEntity->fields.itemIds;
        if ( !itemIds )
          goto LABEL_246;
        if ( v151 >= itemIds->max_length )
          goto LABEL_247;
        if ( !v146 )
          goto LABEL_246;
        SpotID = (int64_t)UserItemMaster__GetEntity((UserItemMaster_o *)v146, SpotID, itemIds->m_Items[v151 + 1], 0LL);
        v154 = ItemConsumeEntity->fields.itemIds;
        if ( !v154 )
          goto LABEL_246;
        if ( v151 >= v154->max_length )
          goto LABEL_247;
        if ( !v147 )
          goto LABEL_246;
        v155 = SpotID;
        SpotID = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)v147,
                            v154->m_Items[v151 + 1],
                            (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !SpotID )
          goto LABEL_246;
        v156 = SpotID;
        if ( *(_DWORD *)(SpotID + 48) == 1 )
        {
          if ( !v149 )
            goto LABEL_246;
          qp = v149->fields.qp;
        }
        else if ( v155 && (SpotID = ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0LL), (SpotID & 1) != 0) )
        {
          qp = *(_DWORD *)(v155 + 28);
        }
        else
        {
          qp = 0;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_246;
        if ( v151 >= nums->max_length )
          goto LABEL_247;
        if ( nums->m_Items[v151 + 1] > qp )
        {
          v150 = System_String__Concat_61386656(
                   v150,
                   (System_String_o *)StringLiteral_43/*"\n"*/,
                   *(System_String_o **)(v156 + 24),
                   0LL);
          v228 = 1;
        }
        ++v151;
      }
      while ( QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, v151, 0LL) );
      v132 = v226;
      if ( (v228 & 1) == 0 )
        goto LABEL_176;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v159 = LocalizationManager__Get((System_String_o *)StringLiteral_10831/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v160 = System_String__Format(v159, (Il2CppObject *)v150, 0LL);
      v161 = System_String__Concat_61375396(v160, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
      v162 = LocalizationManager__Get((System_String_o *)StringLiteral_2955/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v163 = System_String__Concat_61375396(v161, v162, 0LL);
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v166 = (CommonUI_o *)SpotID;
      v167 = clsQuestCheck___c_TypeInfo;
      if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
        v167 = clsQuestCheck___c_TypeInfo;
      }
      v168 = (System_String_o *)StringLiteral_1/*""*/;
      _9__41_11 = v167->static_fields->__9__41_11;
      if ( _9__41_11 )
        goto LABEL_244;
      if ( !v167->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v167);
        v167 = clsQuestCheck___c_TypeInfo;
      }
      v170 = (Il2CppObject *)v167->static_fields->__9;
      _9__41_11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v164, v165);
      System_Action___ctor(_9__41_11, v170, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_11__, 0LL);
      v173 = clsQuestCheck___c_TypeInfo->static_fields;
      v173->__9__41_11 = _9__41_11;
      p__9__41_11 = (ServantStatusBattleListViewItem_o *)&v173->__9__41_11;
      goto LABEL_243;
    case 4:
      if ( !v84 )
        goto LABEL_246;
      if ( v64 > UserGameEntity__getAct(v84, 0LL) )
      {
        v175 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v178 = (RecoverDlgComponent_CallbackFunc_o *)sub_1B64314(RecoverDlgComponent_CallbackFunc_TypeInfo, v176, v177);
        RecoverDlgComponent_CallbackFunc___ctor(
          v178,
          (Il2CppObject *)v51,
          Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__12__,
          0LL);
        if ( v175 )
        {
          v140 = 1;
          v137 = (CommonUI_o *)v175;
          v138 = v64;
          v139 = v178;
LABEL_148:
          CommonUI__OpenApRecoverItemListDialog(v137, v138, v139, v140, 0LL);
          return 0;
        }
LABEL_246:
        sub_1B64324(SpotID);
      }
      v179 = QuestEntity__getItemConsumeEntity(v85, isNotItemConsume, 0LL);
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_246;
      v180 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_246;
      v181 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
      v182 = UserGameMaster__getSelfUserGame(0LL);
      if ( v179 )
      {
        v183 = v182;
        v184 = (System_String_o *)StringLiteral_1/*""*/;
        if ( QuestConsumeItemEntity__IsAvailableAt(v179, 0, 0LL) )
        {
          v185 = 0;
          v227 = v132;
          v229 = 0;
          do
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            SpotID = NetworkManager__get_UserId(0LL);
            v186 = v179->fields.itemIds;
            if ( !v186 )
              goto LABEL_246;
            if ( v185 >= v186->max_length )
              goto LABEL_247;
            if ( !v180 )
              goto LABEL_246;
            SpotID = (int64_t)UserItemMaster__GetEntity((UserItemMaster_o *)v180, SpotID, v186->m_Items[v185 + 1], 0LL);
            v187 = v179->fields.itemIds;
            if ( !v187 )
              goto LABEL_246;
            if ( v185 >= v187->max_length )
              goto LABEL_247;
            if ( !v181 )
              goto LABEL_246;
            v188 = SpotID;
            SpotID = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v181,
                                v187->m_Items[v185 + 1],
                                (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( !SpotID )
              goto LABEL_246;
            v189 = SpotID;
            if ( *(_DWORD *)(SpotID + 48) == 1 )
            {
              if ( !v183 )
                goto LABEL_246;
              v190 = v183->fields.qp;
            }
            else if ( v188 && (SpotID = ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0LL), (SpotID & 1) != 0) )
            {
              v190 = *(_DWORD *)(v188 + 28);
            }
            else
            {
              v190 = 0;
            }
            v191 = v179->fields.nums;
            if ( !v191 )
              goto LABEL_246;
            if ( v185 >= v191->max_length )
LABEL_247:
              sub_1B6432C(SpotID, v152);
            if ( v191->m_Items[v185 + 1] > v190 )
            {
              v184 = System_String__Concat_61386656(
                       v184,
                       (System_String_o *)StringLiteral_43/*"\n"*/,
                       *(System_String_o **)(v189 + 24),
                       0LL);
              v229 = 1;
            }
            ++v185;
          }
          while ( QuestConsumeItemEntity__IsAvailableAt(v179, v185, 0LL) );
          v132 = v227;
          if ( (v229 & 1) != 0 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v217 = LocalizationManager__Get((System_String_o *)StringLiteral_10831/*"QUEST_ITEM_COST_OVER"*/, 0LL);
            v218 = System_String__Format(v217, (Il2CppObject *)v184, 0LL);
            v219 = System_String__Concat_61375396(v218, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
            v220 = LocalizationManager__Get((System_String_o *)StringLiteral_2955/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
            v163 = System_String__Concat_61375396(v219, v220, 0LL);
            SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v166 = (CommonUI_o *)SpotID;
            v223 = clsQuestCheck___c_TypeInfo;
            if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
              v223 = clsQuestCheck___c_TypeInfo;
            }
            v168 = (System_String_o *)StringLiteral_1/*""*/;
            _9__41_11 = v223->static_fields->__9__41_13;
            if ( !_9__41_11 )
            {
              if ( !v223->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v223);
                v223 = clsQuestCheck___c_TypeInfo;
              }
              v224 = (Il2CppObject *)v223->static_fields->__9;
              _9__41_11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v221, v222);
              System_Action___ctor(_9__41_11, v224, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_13__, 0LL);
              v225 = clsQuestCheck___c_TypeInfo->static_fields;
              v225->__9__41_13 = _9__41_11;
              p__9__41_11 = (ServantStatusBattleListViewItem_o *)&v225->__9__41_13;
LABEL_243:
              sub_1B6406C(p__9__41_11, (int32_t)_9__41_11, v171, v172);
            }
LABEL_244:
            if ( !v166 )
              goto LABEL_246;
            CommonUI__OpenNotificationDialog(v166, v168, v163, _9__41_11, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
            goto LABEL_96;
          }
        }
      }
LABEL_176:
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_246;
      SpotID = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)SpotID,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !SpotID )
        goto LABEL_246;
      v192 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)SpotID,
               key,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( v192 && WarEntity__IsFolder((WarEntity_o *)v192, 0LL) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49F904B )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, v193);
          byte_49F904B = 1;
        }
        v194 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v194 = TerminalPramsManager_TypeInfo;
        }
        v195 = 3;
      }
      else
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49F904B )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, v193);
          byte_49F904B = 1;
        }
        v194 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v194 = TerminalPramsManager_TypeInfo;
        }
        v195 = 2;
      }
      v194->static_fields->_DispState_k__BackingField = v195;
      if ( !v194->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v194);
      if ( !byte_49F904C )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v193);
        byte_49F904C = 1;
      }
      v196 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v196 = TerminalPramsManager_TypeInfo;
      }
      v196->static_fields->_IsDoneShortcut_k__BackingField = 0;
      if ( !byte_49F904D )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v193);
        v196 = TerminalPramsManager_TypeInfo;
        byte_49F904D = 1;
      }
      if ( !v196->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v196);
        v196 = TerminalPramsManager_TypeInfo;
      }
      v196->static_fields->_PhaseCnt_k__BackingField = v132;
      if ( !byte_49F904E )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v193);
        v196 = TerminalPramsManager_TypeInfo;
        byte_49F904E = 1;
      }
      if ( !v196->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v196);
        v196 = TerminalPramsManager_TypeInfo;
      }
      v196->static_fields->_SpotId_k__BackingField = v62;
      if ( !byte_49F904F )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v193);
        v196 = TerminalPramsManager_TypeInfo;
        byte_49F904F = 1;
      }
      if ( !v196->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v196);
        v196 = TerminalPramsManager_TypeInfo;
      }
      v196->static_fields->_WarId_k__BackingField = key;
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_246;
      SpotID = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)SpotID,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GachaMaster___);
      if ( !SpotID )
        goto LABEL_246;
      VaildPayType = GachaMaster__getVaildPayType((GachaMaster_o *)SpotID, 0LL);
      if ( !byte_49F8D23 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v197);
        byte_49F8D23 = 1;
      }
      v199 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v199 = TerminalPramsManager_TypeInfo;
      }
      v199->static_fields->_SummonType_k__BackingField = VaildPayType;
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_246;
      SpotID = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)SpotID,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMessageMaster___);
      v200 = *v55;
      if ( !*v55 )
        goto LABEL_246;
      v201 = (QuestMessageMaster_o *)SpotID;
      SpotID = MapControl_QuestInfo__GetPhaseMax(v200, 0LL);
      if ( !v201 )
        goto LABEL_246;
      if ( v132 + 1 >= (int)SpotID )
        v202 = SpotID;
      else
        v202 = v132 + 1;
      v130 = 1;
      ValidMessage = QuestMessageMaster__GetValidMessage(v201, questId, v202, 1, 0LL);
      if ( ValidMessage )
      {
        v204 = ValidMessage;
        v205 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v206 = LocalizationManager__Get((System_String_o *)StringLiteral_10833/*"QUEST_MESSAGE_DLG_DECIDE"*/, 0LL);
        SpotID = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10832/*"QUEST_MESSAGE_DLG_CANCEL"*/, 0LL);
        v209 = (System_String_o *)SpotID;
        v210 = clsQuestCheck___c_TypeInfo;
        if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
          v210 = clsQuestCheck___c_TypeInfo;
        }
        _9__41_2 = v210->static_fields->__9__41_2;
        v212 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !_9__41_2 )
        {
          if ( !v210->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v210);
            v210 = clsQuestCheck___c_TypeInfo;
          }
          v213 = (Il2CppObject *)v210->static_fields->__9;
          _9__41_2 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                              CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                              v207,
                                                              v208);
          CommonConfirmDialog_ClickDelegate___ctor(
            _9__41_2,
            v213,
            Method_clsQuestCheck___c__CheckQuestPlayable_b__41_2__,
            0LL);
          v214 = clsQuestCheck___c_TypeInfo->static_fields;
          v214->__9__41_2 = _9__41_2;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v214->__9__41_2, (int32_t)_9__41_2, v215, v216);
        }
        if ( v205 )
        {
          v130 = 1;
          CommonUI__OpenConfirmDialog_30344968((CommonUI_o *)v205, v212, v204, v206, v209, _9__41_2, 0, 1, 0, 0LL);
          return v130;
        }
        goto LABEL_246;
      }
      return v130;
    default:
      goto LABEL_176;
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
  bool v11; // w0
  const MethodInfo *v12; // x2
  bool IsOpenByTime; // w8
  QuestEntity_o *v15; // [xsp+0h] [xbp-40h] BYREF
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F9017 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_QuestMaster___, *(_QWORD *)&questId);
    sub_1B640C8(&Method_DataManager_GetMaster_UserQuestMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v7);
    sub_1B640C8(&NetworkManager_TypeInfo, v8);
    byte_49F9017 = 1;
  }
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, method) )
    return 0;
  v15 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserQuestMaster___);
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
  UserId = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !UserId )
LABEL_22:
    sub_1B64324(UserId);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          UserId,
          (Il2CppObject **)&v15,
          questId,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  UserId = (DataMasterBase_TMaster__TEntity__PKType__o *)v15;
  if ( !v15 )
    goto LABEL_22;
  IsOpenByTime = QuestEntity__IsOpenByTime(v15, 0, 0LL);
  v11 = 0;
  if ( IsOpenByTime )
    return clsQuestCheck__IsReleasedQuest(this, questId, v12);
  return v11;
}


void __fastcall clsQuestCheck__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  clsQuestCheck_c *v3; // x0
  System_String_o *KEY_QUEST_START_EFFECT; // x19

  if ( (byte_49F9014 & 1) == 0 )
  {
    sub_1B640C8(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_1B640C8(&clsQuestCheck_TypeInfo, v2);
    byte_49F9014 = 1;
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
  bool v7; // w8
  int32_t result; // w0
  __int64 v9; // x1
  TerminalPramsManager_c *v10; // x0

  if ( (byte_49F9027 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, is_quest_after_action);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
    byte_49F9027 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v7 = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0LL);
  result = -1;
  if ( !v7 || !is_quest_after_action )
    return result;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
LABEL_17:
    sub_1B64324(Instance);
  if ( !QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0LL) )
    return -1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v9);
    byte_49F9045 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  return v10->static_fields->_QuestId_k__BackingField;
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

  if ( (byte_49F9030 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_QuestGroupMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&int___TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_49F9030 = 1;
  }
  if ( eventId <= 0 )
    return (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  v11 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&eventId,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestGroupMaster___);
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
        sub_1B6432C(Master_object, v13);
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
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
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
    sub_1B64324(Master_object);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v17; // x1
  __int64 v18; // x2
  System_Converter_object__int__o *v19; // x22
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  int32_t v22; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  System_Int32_array *v29; // x19
  ServantStatusBattleListViewItem_c *v30; // x20
  TerminalPramsManager_c *v31; // x0
  ServantStatusBattleListViewItem_o *v32; // x0
  ServantStatusBattleListViewItem_c *v34; // x19
  TerminalPramsManager_c *v35; // x0
  ServantStatusBattleListViewItem_o *p_ClearEventQuestIds_k__BackingField; // x0

  if ( (byte_49F902F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_ConvertAll_string__int___, *(_QWORD *)&eventId);
    sub_1B640C8(&System_Converter_string__int__TypeInfo, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Except_int___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1B640C8(&int___TypeInfo, v8);
    sub_1B640C8(&Method_System_Int32_Parse__, v9);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_1/*""*/, v11);
    byte_49F902F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9047 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, *(_QWORD *)&eventId);
    byte_49F9047 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  if ( System_String__IsNullOrEmpty(v12->static_fields->_ClearEventQuestIds_k__BackingField, 0LL) )
    return (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9047 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v13);
    byte_49F9047 = 1;
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
        v19 = (System_Converter_object__int__o *)sub_1B64314(System_Converter_string__int__TypeInfo, v17, v18),
        System_Converter_object__int____ctor(v19, 0LL, Method_System_Int32_Parse__, 0LL),
        (ClearEventQuestIds_k__BackingField = (System_String_o *)System_Array__ConvertAll_object__int_(
                                                                   (System_Object_array *)v16,
                                                                   (System_Converter_TInput__TOutput__o *)v19,
                                                                   (const MethodInfo_2F2E8A0 *)Method_System_Array_ConvertAll_string__int___)) == 0LL) )
  {
    sub_1B64324(ClearEventQuestIds_k__BackingField);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)ClearEventQuestIds_k__BackingField;
  if ( !ClearEventQuestIds_k__BackingField[1].klass )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v34 = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
    if ( !byte_49F9046 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v20);
      byte_49F9046 = 1;
    }
    v35 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v35 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (ServantStatusBattleListViewItem_o *)&v35->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = v34;
    sub_1B6406C(p_ClearEventQuestIds_k__BackingField, (int32_t)v34, (int32_t)v21, v22);
    TerminalPramsManager__ClearEventQuestIds_SaveData(0LL);
    return (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)clsQuestCheck__GetEventQuestIdListPlayable(
                                                               this,
                                                               eventId,
                                                               v21);
  v25 = System_Linq_Enumerable__Except_int_(
          v24,
          v23,
          (const MethodInfo_2E599D4 *)Method_System_Linq_Enumerable_Except_int___);
  v29 = System_Linq_Enumerable__ToArray_int_(
          v25,
          (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v30 = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  if ( !byte_49F9046 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v26);
    byte_49F9046 = 1;
  }
  v31 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v31 = TerminalPramsManager_TypeInfo;
  }
  v32 = (ServantStatusBattleListViewItem_o *)&v31->static_fields->_ClearEventQuestIds_k__BackingField;
  v32->klass = v30;
  sub_1B6406C(v32, (int32_t)v30, v27, v28);
  TerminalPramsManager__ClearEventQuestIds_SaveData(0LL);
  return v29;
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
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x21
  _BOOL8 v16; // x0
  Il2CppObject *Entity; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_int__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49F902D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, qids);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestEntity__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_QuestEntity__TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49F902D = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_QuestEntity__TypeInfo,
                                                       qids,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___),
        !qids) )
  {
    sub_1B64324(Instance);
  }
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    qids,
    (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v27,
            (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v16 )
      break;
    if ( !v15 )
      sub_1B64324(v16);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v15,
               v27.fields._current,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    v20 = Entity;
    if ( !v13 )
      sub_1B64324(Entity);
    items = v13->fields._items;
    v22 = Method_System_Collections_Generic_List_QuestEntity__Add__;
    ++v13->fields._version;
    if ( !items )
      sub_1B64324(Entity);
    size = v13->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v13,
        Entity,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    }
    else
    {
      v24 = &items->obj.klass + size;
      v13->fields._size = size + 1;
      v24[4] = (Il2CppClass *)v20;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v27,
    (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  QuestReleaseEntity_array *ListByType; // x24
  __int64 v26; // x1
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

  if ( (byte_49F902C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__RemoveAt__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor___75657200, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_49F902C = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v23 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&svt_id,
                                                    *(_QWORD *)&oldFriendShipRank);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_32;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 9, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
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
        sub_1B6432C(Instance, v26);
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
                                      (const MethodInfo_30D3EA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
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
    sub_1B64324(Instance);
  }
LABEL_22:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v37 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v26, v27);
    System_Collections_Generic_List_int____ctor_55113648(
      v37,
      (System_Collections_Generic_IEnumerable_T__o *)v23,
      (const MethodInfo_348F7B0 *)Method_System_Collections_Generic_List_int___ctor___75657200);
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
                                      (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v37 )
          goto LABEL_32;
        v40 = (int)Instance;
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v42,
          v37,
          (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v43 = v42;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v43,
                  (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v40 == v43.fields._current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v23,
              v39,
              (const MethodInfo_34916FC *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v43,
          (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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

  return clsQuestCheck__GetReleaseQuestIdByServantLimit_33214736(this, svt_id, oldLimitCount, 238, v4);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit_33214736(
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
  QuestReleaseEntity_array *ListByType; // x24
  __int64 v26; // x1
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

  if ( (byte_49F9029 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__RemoveAt__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor___75657200, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_49F9029 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v23 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&svt_id,
                                                    *(_QWORD *)&oldLimitCount);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_32;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
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
        sub_1B6432C(Instance, v26);
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
                                      (const MethodInfo_30D3EA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
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
    sub_1B64324(Instance);
  }
LABEL_22:
  if ( (oldLimitCount & 0x80000000) == 0 )
  {
    v37 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v26, v27);
    System_Collections_Generic_List_int____ctor_55113648(
      v37,
      (System_Collections_Generic_IEnumerable_T__o *)v23,
      (const MethodInfo_348F7B0 *)Method_System_Collections_Generic_List_int___ctor___75657200);
    Instance = (DataManager_o *)clsQuestCheck__GetReleaseQuestIdByServantLimit_33214736(
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
                                      (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v37 )
          goto LABEL_32;
        v40 = (int)Instance;
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v42,
          v37,
          (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v43 = v42;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v43,
                  (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v40 == v43.fields._current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v23,
              v39,
              (const MethodInfo_34916FC *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v43,
          (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( --v39 < 0 )
          return v23;
      }
    }
  }
  return v23;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit_33215752(
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
  QuestReleaseEntity_array *ListByType; // x25
  __int64 v26; // x1
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

  if ( (byte_49F902A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v10);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__RemoveAt__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_49F902A = 1;
  }
  memset(&v51, 0, sizeof(v51));
  v23 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&svt_id,
                                                    *(_QWORD *)&oldLimitCount);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_46;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
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
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
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
    sub_1B6432C(Instance, v26);
  }
LABEL_22:
  v37 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v26, v27);
  System_Collections_Generic_List_int____ctor(
    v37,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
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
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
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
    sub_1B64324(Instance);
  v46 = v37->fields._size - 1;
  if ( v46 >= 0 )
  {
    while ( 1 )
    {
      Instance = (Il2CppObject *)System_Collections_Generic_List_int___get_Item(
                                   v37,
                                   v46,
                                   (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v23 )
        goto LABEL_46;
      v47 = (int)Instance;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v50,
        v23,
        (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v51 = v50;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v51,
                (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        if ( v47 == v51.fields._current )
        {
          System_Collections_Generic_List_int___RemoveAt(
            v37,
            v46,
            (const MethodInfo_34916FC *)Method_System_Collections_Generic_List_int__RemoveAt__);
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v51,
        (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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

  return clsQuestCheck__GetReleaseQuestIdByServantLv_33214176(this, svt_id, oldLv, 238, v4);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLv_33214176(
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
  QuestReleaseEntity_array *ListByType; // x24
  __int64 v18; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x25
  unsigned int v21; // w27
  QuestReleaseEntity_o *v22; // x8
  int32_t questId; // w26
  const MethodInfo *v24; // x4
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10

  if ( (byte_49F9028 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&svt_id);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_49F9028 = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&svt_id,
                                                    *(_QWORD *)&oldLv);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_23;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 6, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
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
        sub_1B6432C(Instance, v18);
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
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
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
    sub_1B64324(Instance);
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
  DataManager_o *v19; // x23
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v21; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_object__o *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  int max_length; // w8
  QuestReleaseEntity_array *v28; // x26
  unsigned int v29; // w19
  QuestReleaseEntity_o *v30; // x25
  __int64 v31; // x29
  int32_t questId; // w27
  int32_t v33; // w2
  int32_t v34; // w3
  QuestReleaseEntity_array **v35; // x28
  __int64 v36; // x1
  __int64 v37; // x2
  System_Func_object__bool__o *v38; // x25
  const MethodInfo *v39; // x4
  int32_t v40; // w3
  Il2CppObject *v41; // x1
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  ServantGroupEntity_array *ListByServantID; // x19
  __int64 v47; // x2
  __int64 v48; // x8
  QuestReleaseEntity_array *v49; // x24
  unsigned __int64 v50; // x29
  int v51; // w8
  unsigned int v52; // w23
  __int64 v53; // x19
  QuestReleaseEntity_o *v54; // x25
  __int64 v55; // x27
  int32_t v56; // w25
  int32_t v57; // w2
  int32_t v58; // w3
  QuestReleaseEntity_array **v59; // x26
  __int64 v60; // x1
  __int64 v61; // x2
  System_Func_object__bool__o *v62; // x28
  const MethodInfo *v63; // x4
  int32_t v64; // w3
  Il2CppObject *v65; // x1
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x0
  QuestReleaseMaster_o *v71; // [xsp+0h] [xbp-80h]
  DataManager_o *v72; // [xsp+8h] [xbp-78h]

  if ( (byte_49F902B & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_QuestEntity___, *(_QWORD *)&servantId);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantGroupMaster___, v7);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v8);
    sub_1B640C8(&System_Func_QuestEntity__bool__TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestEntity__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestEntity___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_QuestEntity__TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B640C8(&Method_clsQuestCheck___c__DisplayClass31_0__GetReleasedQuestEntityListByServantGet_b__0__, v14);
    sub_1B640C8(&clsQuestCheck___c__DisplayClass31_0_TypeInfo, v15);
    sub_1B640C8(&Method_clsQuestCheck___c__DisplayClass31_1__GetReleasedQuestEntityListByServantGet_b__1__, v16);
    sub_1B640C8(&clsQuestCheck___c__DisplayClass31_1_TypeInfo, v17);
    byte_49F902B = 1;
  }
  Instance = (QuestReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  v19 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
  v21 = DataManager__GetMasterData_object_(
          v19,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v24 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_QuestEntity__TypeInfo,
                                                       v22,
                                                       v23);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  if ( !v21 )
    goto LABEL_49;
  v71 = (QuestReleaseMaster_o *)v21;
  Instance = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)v21, 8, 0LL);
  if ( !Instance )
    goto LABEL_49;
  max_length = Instance->max_length;
  v28 = Instance;
  if ( max_length >= 1 )
  {
    v29 = 0;
    while ( v29 < max_length )
    {
      v30 = v28->m_Items[v29];
      v31 = sub_1B64314(clsQuestCheck___c__DisplayClass31_0_TypeInfo, v25, v26);
      clsQuestCheck___c__DisplayClass31_0___ctor((clsQuestCheck___c__DisplayClass31_0_o *)v31, 0LL);
      if ( !v30 )
        goto LABEL_49;
      if ( v30->fields.targetId == servantId )
      {
        if ( !MasterData_object )
          goto LABEL_49;
        questId = v30->fields.questId;
        Instance = (QuestReleaseEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                 questId,
                                                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v31 )
          goto LABEL_49;
        *(_QWORD *)(v31 + 16) = Instance;
        v35 = (QuestReleaseEntity_array **)(v31 + 16);
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 16), (int32_t)Instance, v33, v34);
        v38 = (System_Func_object__bool__o *)sub_1B64314(System_Func_QuestEntity__bool__TypeInfo, v36, v37);
        System_Func_object__bool____ctor(
          v38,
          (Il2CppObject *)v31,
          Method_clsQuestCheck___c__DisplayClass31_0__GetReleasedQuestEntityListByServantGet_b__0__,
          0LL);
        Instance = (QuestReleaseEntity_array *)BasicHelper__Any_object_(
                                                 (System_Collections_Generic_List_T__o *)v24,
                                                 (System_Func_T__bool__o *)v38,
                                                 (const MethodInfo_2E24870 *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = *v35;
          if ( !*v35 )
            goto LABEL_49;
          Instance = (QuestReleaseEntity_array *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
          if ( ((unsigned int)Instance & typeFlag) != 0 )
          {
            Instance = (QuestReleaseEntity_array *)clsQuestCheck__IsQuestRelease(this, questId, -1, 0, v39);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v24 )
                goto LABEL_49;
              v41 = (Il2CppObject *)*v35;
              items = v24->fields._items;
              v43 = Method_System_Collections_Generic_List_QuestEntity__Add__;
              ++v24->fields._version;
              if ( !items )
                goto LABEL_49;
              size = v24->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v24,
                  v41,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
              }
              else
              {
                v45 = &items->obj.klass + size;
                v24->fields._size = size + 1;
                v45[4] = (Il2CppClass *)v41;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)v41, v26, v40);
              }
            }
          }
        }
      }
      max_length = v28->max_length;
      if ( (int)++v29 >= max_length )
        goto LABEL_23;
    }
LABEL_50:
    sub_1B6432C(Instance, v25);
  }
LABEL_23:
  Instance = (QuestReleaseEntity_array *)DataManager__GetMasterData_object_(
                                           v19,
                                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantGroupMaster___);
  if ( !Instance
    || (ListByServantID = ServantGroupMaster__getListByServantID((ServantGroupMaster_o *)Instance, servantId, 0LL),
        Instance = QuestReleaseMaster__getListByType(v71, 10, 0LL),
        !ListByServantID) )
  {
LABEL_49:
    sub_1B64324(Instance);
  }
  v48 = *(_QWORD *)&ListByServantID->max_length;
  if ( (int)v48 >= 1 )
  {
    v49 = Instance;
    v50 = 0LL;
    v72 = (DataManager_o *)ListByServantID;
    while ( 1 )
    {
      if ( v50 >= (unsigned int)v48 )
        goto LABEL_50;
      if ( !v49 )
        goto LABEL_49;
      v51 = v49->max_length;
      if ( v51 >= 1 )
        break;
LABEL_47:
      ++v50;
      LODWORD(v48) = v72->fields.m_CancellationTokenSource;
      if ( (__int64)v50 >= (int)v48 )
        return (System_Collections_Generic_List_QuestEntity__o *)v24;
    }
    v52 = 0;
    v53 = *((_QWORD *)&v72->fields._DispLog + v50);
    while ( v52 < v51 )
    {
      v54 = v49->m_Items[v52];
      v55 = sub_1B64314(clsQuestCheck___c__DisplayClass31_1_TypeInfo, v25, v47);
      clsQuestCheck___c__DisplayClass31_1___ctor((clsQuestCheck___c__DisplayClass31_1_o *)v55, 0LL);
      if ( !v53 || !v54 )
        goto LABEL_49;
      if ( *(_DWORD *)(v53 + 16) == v54->fields.targetId )
      {
        if ( !MasterData_object )
          goto LABEL_49;
        v56 = v54->fields.questId;
        Instance = (QuestReleaseEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                 v56,
                                                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v55 )
          goto LABEL_49;
        *(_QWORD *)(v55 + 16) = Instance;
        v59 = (QuestReleaseEntity_array **)(v55 + 16);
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v55 + 16), (int32_t)Instance, v57, v58);
        v62 = (System_Func_object__bool__o *)sub_1B64314(System_Func_QuestEntity__bool__TypeInfo, v60, v61);
        System_Func_object__bool____ctor(
          v62,
          (Il2CppObject *)v55,
          Method_clsQuestCheck___c__DisplayClass31_1__GetReleasedQuestEntityListByServantGet_b__1__,
          0LL);
        Instance = (QuestReleaseEntity_array *)BasicHelper__Any_object_(
                                                 (System_Collections_Generic_List_T__o *)v24,
                                                 (System_Func_T__bool__o *)v62,
                                                 (const MethodInfo_2E24870 *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = *v59;
          if ( !*v59 )
            goto LABEL_49;
          Instance = (QuestReleaseEntity_array *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
          if ( ((unsigned int)Instance & typeFlag) != 0 )
          {
            Instance = (QuestReleaseEntity_array *)clsQuestCheck__IsQuestRelease(this, v56, -1, 0, v63);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v24 )
                goto LABEL_49;
              v65 = (Il2CppObject *)*v59;
              v66 = v24->fields._items;
              v67 = Method_System_Collections_Generic_List_QuestEntity__Add__;
              ++v24->fields._version;
              if ( !v66 )
                goto LABEL_49;
              v68 = v24->fields._size;
              if ( (unsigned int)v68 >= v66->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v24,
                  v65,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
              }
              else
              {
                v69 = &v66->obj.klass + v68;
                v24->fields._size = v68 + 1;
                v69[4] = (Il2CppClass *)v65;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v69 + 4), (int32_t)v65, v47, v64);
              }
            }
          }
        }
      }
      v51 = v49->max_length;
      if ( (int)++v52 >= v51 )
        goto LABEL_47;
    }
    goto LABEL_50;
  }
  return (System_Collections_Generic_List_QuestEntity__o *)v24;
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
  EventRaidMaster_o *v10; // x22
  int32_t RaidDeadQuestId; // w23
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x4
  __int64 v15; // x1
  const MethodInfo *v16; // x4
  __int64 v17; // x8
  System_Int32_array *v18; // x20
  unsigned __int64 v19; // x21

  if ( (byte_49F901B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v8);
    byte_49F901B = 1;
  }
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_18;
  v10 = (EventRaidMaster_o *)Instance;
  RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId((EventRaidMaster_o *)Instance, eventId, day, 0LL);
  Instance = (System_Int32_array *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, RaidDeadQuestId, 0, v12)
    || clsQuestCheck__IsQuestRelease(this, RaidDeadQuestId, -1, 0, v13) )
  {
    LOBYTE(Instance) = 1;
    return (unsigned __int8)Instance & 1;
  }
  Instance = EventRaidMaster__GetRaidAliveQuestIds(v10, eventId, day, 0LL);
  if ( !Instance )
LABEL_18:
    sub_1B64324(Instance);
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
        sub_1B6432C(Instance, v15);
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

  if ( (byte_49F901D & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_8191/*"LAST_WAR_ID"*/, method);
    byte_49F901D = 1;
  }
  Value = (clsQuestCheck_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8191/*"LAST_WAR_ID"*/, 0LL);
  return clsQuestCheck__IsWarClear(Value, (int32_t)Value, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsMainInterlude(clsQuestCheck_o *this, int32_t war_id, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x0

  if ( (byte_49F901E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&war_id);
    sub_1B640C8(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49F901E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             war_id,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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

  if ( (byte_49F9024 & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_1B640C8(&CondType_TypeInfo, *(_QWORD *)&qid);
    byte_49F9024 = 1;
  }
  v6 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_37285996(qid, v6, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsQuestClearRaw(
        clsQuestCheck_o *this,
        int32_t qid,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  int32_t v6; // w20

  if ( (byte_49F9025 & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_1B640C8(&CondType_TypeInfo, *(_QWORD *)&qid);
    byte_49F9025 = 1;
  }
  v6 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_37285996(qid, v6, 0, 0LL);
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

  if ( (byte_49F9026 & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, *(_QWORD *)&qid);
    this = (clsQuestCheck_o *)sub_1B640C8(&NetworkManager_TypeInfo, v8);
    byte_49F9026 = 1;
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
  System_Collections_ObjectModel_Collection_T__o *v17; // x19
  bool v18; // w20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  QuestReleaseEntity_o *v28; // x0
  const MethodInfo *v29; // x4
  __int64 methodPtr_low; // x10
  int32_t v31; // w2
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0

  if ( (byte_49F901A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&quest_id);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v9);
    sub_1B640C8(&Method_DataManager_getEntityList_QuestReleaseMaster___, v10);
    sub_1B640C8(&System_IDisposable_TypeInfo, v11);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_1B640C8(&QuestReleaseEntity_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_49F901A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__getEntityList_object_(
                                      Instance,
                                      (const MethodInfo_2E395E8 *)Method_DataManager_getEntityList_QuestReleaseMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  v17 = (System_Collections_ObjectModel_Collection_T__o *)Instance;
  v18 = System_Collections_ObjectModel_Collection_object___get_Count(
          (System_Collections_ObjectModel_Collection_T__o *)Instance,
          (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) > 0;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v17,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_17;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_17:
      v27 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v28 = (QuestReleaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                                    Enumerator,
                                    *(_QWORD *)(v27 + 8));
    if ( !v28 )
      goto LABEL_38;
    methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v28->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestReleaseEntity_c *)v28->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestReleaseEntity_TypeInfo )
    {
      sub_1B645E4(v28);
LABEL_38:
      sub_1B64324(v28);
    }
    if ( v28->fields.questId == quest_id )
    {
      if ( (old_val & 0x80000000) != 0 )
        v31 = -1;
      else
        v31 = v28->fields.type == old_val_qr_type ? old_val : -1;
      if ( !clsQuestCheck__IsQuestRelease_33211484(this, v28, v31, 0LL, v29) )
      {
        v18 = 0;
        break;
      }
    }
  }
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_34;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_34:
    v35 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  return v18;
}


bool __fastcall clsQuestCheck__IsQuestRelease_33208656(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        MapControl_QuestInfo_o *qinf,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_33211484(this, qrd, -1, qinf, v4);
}


bool __fastcall clsQuestCheck__IsQuestRelease_33210592(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        int32_t old_val,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_33211484(this, qrd, old_val, 0LL, v4);
}


bool __fastcall clsQuestCheck__IsQuestRelease_33211484(
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

  if ( (byte_49F9020 & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, qrd);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventRaidMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v12);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v13);
    sub_1B640C8(&NetworkManager_TypeInfo, v14);
    this = (clsQuestCheck_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_49F9020 = 1;
  }
  entity = 0LL;
  sameGroupQuestIds = 0LL;
  v45 = 0LL;
  is_release = 0;
  if ( !qrd )
LABEL_97:
    sub_1B64324(this);
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
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_97;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_97;
        v33 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                qrd->fields.questId,
                (const MethodInfo_30D3EA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_97;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_97;
        v36 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                qrd->fields.questId,
                (const MethodInfo_30D3EA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_97;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventRaidMaster___);
        if ( !this )
          goto LABEL_97;
        if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)this, &entity, v17, v18, 0LL) )
          return is_release;
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_97;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
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
  clsQuestCheck_Fields *p_fields; // x21
  System_Collections_Generic_List_object__o *qrs; // x9
  int64_t v14; // x21
  _BOOL8 v15; // x0
  const MethodInfo *v16; // x4
  int v17; // w19
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49F9019 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_QuestReleaseMaster___, loginQuestEnt);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    byte_49F9019 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !loginQuestEnt || !Master_object )
    goto LABEL_24;
  p_fields = &this->fields;
  QuestReleaseMaster__getListByQuestID_39200912(Master_object, loginQuestEnt->fields.questId, &this->fields.qrs, 0LL);
  if ( !this->fields.qrs )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (QuestReleaseMaster_o *)NetworkManager__getTime(0LL);
  qrs = (System_Collections_Generic_List_object__o *)p_fields->qrs;
  if ( !p_fields->qrs )
LABEL_24:
    sub_1B64324(Master_object);
  v14 = (int64_t)Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    qrs,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v15 )
      break;
    if ( !v19.fields._current )
      sub_1B64324(v15);
    if ( HIDWORD(v19.fields._current[1].klass) == 12 )
    {
      if ( !LoginQuestEntity__IsEnablePeriod(loginQuestEnt, v14, 0LL) )
        goto LABEL_18;
    }
    else if ( !clsQuestCheck__IsQuestRelease_33211484(this, (QuestReleaseEntity_o *)v19.fields._current, -1, 0LL, v16) )
    {
LABEL_18:
      v17 = 6;
      goto LABEL_21;
    }
  }
  v17 = 7;
LABEL_21:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v17 != 6;
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
  struct System_Collections_Generic_List_QuestReleaseEntity__o *qrs; // x0
  const MethodInfo *v12; // x4
  int v13; // w19
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49F9018 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_QuestReleaseMaster___, *(_QWORD *)&questId);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v9);
    byte_49F9018 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object )
    sub_1B64324(0LL);
  QuestReleaseMaster__getListByQuestID_39200912((QuestReleaseMaster_o *)Master_object, questId, &this->fields.qrs, 0LL);
  qrs = this->fields.qrs;
  if ( qrs )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)qrs,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
    {
      if ( !clsQuestCheck__IsQuestRelease_33211484(this, (QuestReleaseEntity_o *)v15.fields._current, -1, 0LL, v12) )
      {
        v13 = 5;
        goto LABEL_12;
      }
    }
    v13 = 6;
LABEL_12:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    LOBYTE(qrs) = v13 != 5;
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
  int v8; // w22
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
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t ScriptIntParam; // w22
  int v26; // w8
  clsQuestCheck_c *v28; // x0
  System_String_o *KEY_QUEST_START_EFFECT; // x21
  System_String_o *String; // x21
  System_String_array *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  System_Object_array *v34; // x23
  System_Func_object__bool__o *v35; // x20
  Il2CppObject *object; // x20
  System_String_o *v37; // x0
  char v38; // w8
  System_String_o *v39; // x19
  clsQuestCheck_c *v40; // x0
  System_String_o *v41; // x20
  Il2CppObject *v42; // [xsp+0h] [xbp-50h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v8 = questPhase;
  if ( (byte_49F9033 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Find_string___, *(_QWORD *)&questId);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestPhaseMaster___, v11);
    sub_1B640C8(&DataManager_TypeInfo, v12);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v13);
    sub_1B640C8(&EncryptedPlayerPrefs_TypeInfo, v14);
    sub_1B640C8(&System_Func_string__bool__TypeInfo, v15);
    sub_1B640C8(&Method_clsQuestCheck___c__DisplayClass40_0__IsTapSkipQuestStart_b__0__, v16);
    sub_1B640C8(&clsQuestCheck___c__DisplayClass40_0_TypeInfo, v17);
    sub_1B640C8(&StringLiteral_22602/*"questStartEffectSkip"*/, v18);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v19);
    sub_1B640C8(&clsQuestCheck_TypeInfo, v20);
    byte_49F9033 = 1;
  }
  v42 = 0LL;
  entity = 0LL;
  v21 = sub_1B64314(clsQuestCheck___c__DisplayClass40_0_TypeInfo, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
  clsQuestCheck___c__DisplayClass40_0___ctor((clsQuestCheck___c__DisplayClass40_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_41;
  *(_QWORD *)(v21 + 16) = effectName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 16), (int32_t)effectName, v23, v24);
  if ( isMyRoomMaterial )
    return 0;
  if ( v8 <= 1 )
    v8 = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_41;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, questId, v8, 0LL) )
    goto LABEL_44;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_41;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_22602/*"questStartEffectSkip"*/, 0, 0LL);
  if ( !ScriptIntParam )
  {
LABEL_44:
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !Master_object )
      goto LABEL_41;
    Master_object = (QuestPhaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            &v42,
                                            questId,
                                            (const MethodInfo_30D3EF8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !v42 )
        goto LABEL_41;
      v26 = LODWORD(v42[2].monitor) - 1;
      if ( (unsigned int)v26 > 4 )
        ScriptIntParam = 0;
      else
        ScriptIntParam = dword_BDC4D8[v26];
      goto LABEL_22;
    }
    return 0;
  }
LABEL_22:
  v28 = clsQuestCheck_TypeInfo;
  if ( !clsQuestCheck_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
    v28 = clsQuestCheck_TypeInfo;
  }
  KEY_QUEST_START_EFFECT = v28->static_fields->KEY_QUEST_START_EFFECT;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  String = EncryptedPlayerPrefs__GetString(KEY_QUEST_START_EFFECT, 0LL);
  Master_object = (QuestPhaseMaster_o *)System_String__IsNullOrEmpty(String, 0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    goto LABEL_31;
  if ( !String )
LABEL_41:
    sub_1B64324(Master_object);
  v31 = System_String__Split(String, 0x2Fu, 0, 0LL);
  if ( !v31 )
  {
LABEL_31:
    v39 = *(System_String_o **)(v21 + 16);
LABEL_32:
    v40 = clsQuestCheck_TypeInfo;
    if ( !clsQuestCheck_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck_TypeInfo);
      v40 = clsQuestCheck_TypeInfo;
    }
    v41 = v40->static_fields->KEY_QUEST_START_EFFECT;
    if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    EncryptedPlayerPrefs__SetString(v41, v39, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
    v38 = 1;
    goto LABEL_37;
  }
  v34 = (System_Object_array *)v31;
  v35 = (System_Func_object__bool__o *)sub_1B64314(System_Func_string__bool__TypeInfo, v32, v33);
  System_Func_object__bool____ctor(
    v35,
    (Il2CppObject *)v21,
    Method_clsQuestCheck___c__DisplayClass40_0__IsTapSkipQuestStart_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             v34,
             (System_Func_T__bool__o *)v35,
             (const MethodInfo_2E2543C *)Method_BasicHelper_Find_string___);
  v37 = System_String__Concat_61386656(
          String,
          (System_String_o *)StringLiteral_1124/*"/"*/,
          *(System_String_o **)(v21 + 16),
          0LL);
  if ( !object )
  {
    v39 = v37;
    goto LABEL_32;
  }
  v38 = 0;
LABEL_37:
  if ( ScriptIntParam == 1 )
    return 1;
  else
    return (ScriptIntParam == 2) & (v38 ^ 1);
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
  QuestRandomGroupMaster_o *v12; // x21
  QuestRandomGroupEntity_o *EntityFromQuestId; // x0
  QuestRandomGroupEntity_o *v14; // x19
  int32_t randomGroupId; // w20
  __int64 v16; // x1
  TerminalPramsManager_c *v17; // x0
  bool v18; // w0
  __int64 v19; // x1
  uint32_t cctor_finished; // w9
  TerminalPramsManager_c *v21; // x0
  int32_t Item; // w22
  __int64 v23; // x1
  QuestRandomGroupEntity_o *RandomRangeQuest; // x0
  TerminalPramsManager_c *v25; // x0
  __int64 v26; // x1
  QuestRandomGroupEntity_o *v27; // x21
  TerminalPramsManager_c *v28; // x0
  TerminalPramsManager_c *v29; // x0

  if ( (byte_49F9016 & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, questInfo);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestRandomGroupMaster___, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v10);
    byte_49F9016 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestRandomGroupMaster___);
  if ( !questInfo )
    goto LABEL_53;
  v12 = (QuestRandomGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_53;
  EntityFromQuestId = QuestRandomGroupMaster__GetEntityFromQuestId(
                        (QuestRandomGroupMaster_o *)Instance,
                        questInfo->fields.questId,
                        0LL);
  if ( EntityFromQuestId )
  {
    v14 = EntityFromQuestId;
    randomGroupId = EntityFromQuestId->fields.randomGroupId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__LoadQuestRandomGroupList(0LL);
    if ( !byte_49F9044 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v16);
      byte_49F9044 = 1;
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
            (const MethodInfo_311B0A0 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    cctor_finished = TerminalPramsManager_TypeInfo->_2.cctor_finished;
    if ( v18 )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9044 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v19);
        byte_49F9044 = 1;
      }
      v21 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v21 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v21->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_53;
      Item = System_Collections_Generic_Dictionary_int__int___get_Item(
               (System_Collections_Generic_Dictionary_int__int__o *)Instance,
               randomGroupId,
               (const MethodInfo_311AE18 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsQuestClear_37285996(Item, -1, 0, 0LL) )
        goto LABEL_44;
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9044 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v19);
        byte_49F9044 = 1;
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
      System_Collections_Generic_Dictionary_int__int___Add(
        (System_Collections_Generic_Dictionary_int__int__o *)Instance,
        randomGroupId,
        0,
        (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
    RandomRangeQuest = QuestRandomGroupMaster__GetRandomRangeQuest(v12, randomGroupId, 0LL);
    if ( RandomRangeQuest )
    {
      v27 = RandomRangeQuest;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9044 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v26);
        byte_49F9044 = 1;
      }
      v28 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v28 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v28->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( !Instance )
        goto LABEL_53;
      System_Collections_Generic_Dictionary_int__int___set_Item(
        (System_Collections_Generic_Dictionary_int__int__o *)Instance,
        randomGroupId,
        v27->fields.questId,
        (const MethodInfo_311AEA0 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      TerminalPramsManager__SaveQuestRandomGroupList(0LL);
LABEL_44:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9044 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v23);
        byte_49F9044 = 1;
      }
      v29 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v29 = TerminalPramsManager_TypeInfo;
      }
      Instance = (Il2CppObject *)v29->static_fields->_QuestRandomGroupList_k__BackingField;
      if ( Instance )
      {
        LOBYTE(RandomRangeQuest) = System_Collections_Generic_Dictionary_int__int___get_Item(
                                     (System_Collections_Generic_Dictionary_int__int__o *)Instance,
                                     randomGroupId,
                                     (const MethodInfo_311AE18 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) == v14->fields.questId;
        return (char)RandomRangeQuest;
      }
LABEL_53:
      sub_1B64324(Instance);
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
  Il2CppObject *Entity; // x0
  const MethodInfo *v8; // x3

  if ( (byte_49F901C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&war_id);
    sub_1B640C8(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49F901C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             war_id,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Entity, HIDWORD(Entity[6].klass), 0, v8);
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

  if ( (byte_49F9032 & 1) == 0 )
  {
    sub_1B640C8(&ScriptManager_TypeInfo, end_act);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v4);
    byte_49F9032 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9048 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, end_act);
    byte_49F9048 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v5->static_fields->_WarId_k__BackingField;
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, end_act);
    v5 = TerminalPramsManager_TypeInfo;
    byte_49F9045 = 1;
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
  _QWORD *v17; // x19
  __int64 methodPtr_low; // x9
  __int64 v19; // x8
  __int64 v20; // x1
  __int64 v21; // x2
  TerminalPramsManager_c *v22; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w20
  BattleSetupInfo_o *v26; // x23
  Il2CppObject *v27; // x20
  clsQuestCheck_o *v28; // x0
  const MethodInfo *v29; // x1

  if ( (byte_49F9035 & 1) == 0 )
  {
    sub_1B640C8(&BattleRootComponent_TypeInfo, qinf);
    sub_1B640C8(&BattleSetupInfo_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v14);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v15);
    byte_49F9035 = 1;
  }
  if ( result == 2 )
  {
    if ( clsQuestCheck__CheckQuestPlayable(this, qinf, endTime, boostId, *(const MethodInfo **)&boostId) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9048 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v20);
        byte_49F9048 = 1;
      }
      v22 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v22 = TerminalPramsManager_TypeInfo;
      }
      WarId_k__BackingField = v22->static_fields->_WarId_k__BackingField;
      if ( !byte_49F9045 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v20);
        v22 = TerminalPramsManager_TypeInfo;
        byte_49F9045 = 1;
      }
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = TerminalPramsManager_TypeInfo;
      }
      QuestId_k__BackingField = v22->static_fields->_QuestId_k__BackingField;
      if ( !byte_49F9050 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v20);
        v22 = TerminalPramsManager_TypeInfo;
        byte_49F9050 = 1;
      }
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = TerminalPramsManager_TypeInfo;
      }
      PhaseCnt_k__BackingField = v22->static_fields->_PhaseCnt_k__BackingField;
      v26 = (BattleSetupInfo_o *)sub_1B64314(BattleSetupInfo_TypeInfo, v20, v21);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance
        || (*((_BYTE *)Instance + 148) = 1,
            (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__)) == 0LL)
        || (*((_DWORD *)Instance + 38) = 1,
            (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
      {
LABEL_38:
        sub_1B64324(Instance);
      }
      AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 35, 1, v27, 0LL);
    }
LABEL_36:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0LL);
      return;
    }
    goto LABEL_38;
  }
  if ( result )
    goto LABEL_36;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v17 = (_QWORD *)*((_QWORD *)Instance + 4);
  if ( !v17 )
    goto LABEL_38;
  methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*v17 + 304LL) >= (unsigned int)methodPtr_low
    && *(BattleRootComponent_c **)(*(_QWORD *)(*v17 + 200LL) + 8 * methodPtr_low - 8) == BattleRootComponent_TypeInfo )
  {
    Instance = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)Instance + 4), 0LL);
    if ( !Instance )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v19 = v17[10];
    if ( !v19 )
      goto LABEL_38;
    Instance = *(void **)(v19 + 496);
    if ( !Instance )
      goto LABEL_38;
    BattleResultComponent__EndResult((BattleResultComponent_o *)Instance, 0LL);
    goto LABEL_36;
  }
  sub_1B645E4(*((_QWORD *)Instance + 4));
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

  if ( (byte_49F902E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_String_Join_int___, *(_QWORD *)&eventId);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_869/*","*/, v7);
    sub_1B640C8(&StringLiteral_1/*""*/, v8);
    byte_49F902E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v9 = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  if ( !byte_49F9046 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, *(_QWORD *)&eventId);
    byte_49F9046 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  p_ClearEventQuestIds_k__BackingField = (ServantStatusBattleListViewItem_o *)&v10->static_fields->_ClearEventQuestIds_k__BackingField;
  p_ClearEventQuestIds_k__BackingField->klass = v9;
  sub_1B6406C(p_ClearEventQuestIds_k__BackingField, (int32_t)v9, (int32_t)method, v3);
  v13 = (System_Collections_Generic_IEnumerable_T__o *)clsQuestCheck__GetEventQuestIdListPlayable(this, eventId, v12);
  v17 = System_String__Join_int_(
          (System_String_o *)StringLiteral_869/*","*/,
          v13,
          (const MethodInfo_2EDA900 *)Method_System_String_Join_int___);
  if ( !byte_49F9046 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v14);
    byte_49F9046 = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v19 = (ServantStatusBattleListViewItem_o *)&v18->static_fields->_ClearEventQuestIds_k__BackingField;
  v19->klass = (ServantStatusBattleListViewItem_c *)v17;
  sub_1B6406C(v19, (int32_t)v17, v15, v16);
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
  UserItemMaster_o *v11; // x22
  int32_t targetId; // w23
  int32_t num; // w22
  bool v14; // w8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F9021 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, is_release);
    sub_1B640C8(&NetworkManager_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49F9021 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !qrd )
    goto LABEL_13;
  v11 = (UserItemMaster_o *)Instance;
  targetId = qrd->fields.targetId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v11 )
    goto LABEL_13;
  Instance = UserItemMaster__TryGetEntity(v11, &entity, Instance, targetId, 0LL);
  if ( (Instance & 1) == 0 )
  {
    v14 = 1;
    goto LABEL_12;
  }
  if ( !entity )
LABEL_13:
    sub_1B64324(Instance);
  num = entity->fields.num;
  v14 = num < QuestReleaseEntity__getValueInt(qrd, 0LL);
LABEL_12:
  *is_release = (v14 ^ itemGet) & 1;
}


bool __fastcall clsQuestCheck__isPlayQuestStartAction(clsQuestCheck_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  int32_t WarId_k__BackingField; // w20
  int32_t QuestId_k__BackingField; // w19

  if ( (byte_49F9031 & 1) == 0 )
  {
    sub_1B640C8(&ScriptManager_TypeInfo, method);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v3);
    byte_49F9031 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9048 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9048 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v4->static_fields->_WarId_k__BackingField;
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
    byte_49F9045 = 1;
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
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F9022 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&qid);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49F9022 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
    sub_1B64324(Instance);
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
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F9023 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&qid);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49F9023 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
    sub_1B64324(Instance);
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
  const MethodInfo *v7; // x3
  bool v8; // w8
  bool result; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F901F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&qid);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49F901F = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               qid,
                               (const MethodInfo_30D3EF8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 1;
  if ( !entity )
LABEL_12:
    sub_1B64324(Instance);
  if ( (HIDWORD(entity[5].klass) | 4) != 5 )
    return 0;
  v8 = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, qid, 0, v7);
  result = 0;
  if ( v8 )
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
  _BOOL8 IsShop; // x0
  const MethodInfo *v37; // x2
  Il2CppObject *v38; // x23
  clsQuestCheck_Fields *p_fields; // x23
  int32_t UseDiceSpotId; // w24
  __int64 v42; // x1
  __int64 v43; // x2
  System_Collections_Generic_List_T__o *qrs; // x24
  clsQuestCheck___c_c *v45; // x0
  System_Func_object__bool__o *_9__5_0; // x25
  Il2CppObject *v47; // x26
  struct clsQuestCheck___c_StaticFields *static_fields; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  struct BalanceConfig_StaticFields *v51; // x8
  QuestEntity_o *Mine; // x0
  UserEventQuestCooltimeMaster_o *v53; // x24
  UserEventQuestCooltimeEntity_o *v54; // x0
  UserEventQuestCooltimeEntity_o *v55; // x24
  int64_t Time; // x0
  int64_t clearedAt; // x26
  int64_t v58; // x25
  int32_t v59; // w2
  int v60; // w8
  __int64 v61; // x1
  __int64 v62; // x2
  struct System_Collections_Generic_List_QuestReleaseEntity__o *cQuestReleaseListP; // x23
  System_Comparison_T__o *v64; // x24
  Il2CppObject *v65; // x25
  struct clsQuestCheck___c_StaticFields *v66; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  Il2CppObject *v69; // x23
  const MethodInfo *v70; // x4
  QuestReleaseEntity_o *current; // x22
  _BOOL8 HasStatus; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  int v75; // w19
  int32_t klass; // w24
  __int64 v77; // x1
  __int64 v78; // x2
  System_Collections_Generic_IEnumerable_T__o *v79; // x25
  System_Collections_Generic_List_object__o *v80; // x24
  const MethodInfo *v81; // x2
  BalanceConfig_c *v82; // x0
  const MethodInfo *v83; // x2
  BalanceConfig_c *v84; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *v89; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF
  UserQuestEntity_o *v91; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_49F9015 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&questId);
    sub_1B640C8(&Method_BasicHelper_Any_QuestReleaseEntity___, v9);
    sub_1B640C8(&System_Comparison_QuestReleaseEntity__TypeInfo, v10);
    sub_1B640C8(&CondType_TypeInfo, v11);
    sub_1B640C8(&Method_DataManager_GetMaster_EventDetailMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestReleaseMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___, v14);
    sub_1B640C8(&Method_DataManager_GetMaster_UserQuestMaster___, v15);
    sub_1B640C8(&Method_DataManager_GetMaster_WarMaster___, v16);
    sub_1B640C8(&DataManager_TypeInfo, v17);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v18);
    sub_1B640C8(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v22);
    sub_1B640C8(&System_Func_QuestReleaseEntity__bool__TypeInfo, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__, v25);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v26);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__, v27);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___75662040, v28);
    sub_1B640C8(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v29);
    sub_1B640C8(&NetworkManager_TypeInfo, v30);
    sub_1B640C8(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__, v31);
    sub_1B640C8(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__, v32);
    sub_1B640C8(&clsQuestCheck___c_TypeInfo, v33);
    byte_49F9015 = 1;
  }
  v89 = 0LL;
  entity = 0LL;
  memset(&v88, 0, sizeof(v88));
  *questReleaseNG = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)questReleaseNG, 0, (int32_t)questReleaseNG, (int32_t)questInfo);
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, v34) )
    return 0;
  v91 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !questInfo || !Master_object )
    goto LABEL_98;
  IsShop = DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             questInfo->fields.warId,
             (const MethodInfo_30D3EF8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
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
      v38 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = NetworkManager__get_UserId(0LL);
      if ( !v38 )
        goto LABEL_98;
      IsShop = UserQuestMaster__TryGetEntity((UserQuestMaster_o *)v38, &v91, Master_object, questId, 0LL);
      if ( IsShop )
      {
        Master_object = (int64_t)v91;
        if ( !v91 )
          goto LABEL_98;
        IsShop = UserQuestEntity__IsNotExpired(v91, 0LL);
        if ( IsShop )
          return 1;
      }
    }
  }
  if ( !clsQuestCheck__IsValidQuestRandomGroup((clsQuestCheck_o *)IsShop, questInfo, v37) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object )
    goto LABEL_98;
  p_fields = &this->fields;
  QuestReleaseMaster__getListByQuestID_39200912((QuestReleaseMaster_o *)Master_object, questId, &this->fields.qrs, 0LL);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !entity || !Master_object )
    goto LABEL_98;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &v89,
         (int32_t)entity[6].klass,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Master_object = (int64_t)v89;
    if ( !v89 )
      goto LABEL_98;
    if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v89, 0LL) )
    {
      Master_object = (int64_t)v89;
      if ( !v89 )
        goto LABEL_98;
      UseDiceSpotId = EventDetailEntity__GetUseDiceSpotId((EventDetailEntity_o *)v89, 0LL);
      if ( UseDiceSpotId == MapControl_QuestInfo__GetSpotID(questInfo, 0LL)
        && MapControl_QuestInfo__GetQuestType(questInfo, 0LL) == 1 )
      {
        qrs = (System_Collections_Generic_List_T__o *)p_fields->qrs;
        v45 = clsQuestCheck___c_TypeInfo;
        if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
          v45 = clsQuestCheck___c_TypeInfo;
        }
        _9__5_0 = (System_Func_object__bool__o *)v45->static_fields->__9__5_0;
        if ( !_9__5_0 )
        {
          if ( !v45->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v45);
            v45 = clsQuestCheck___c_TypeInfo;
          }
          v47 = (Il2CppObject *)v45->static_fields->__9;
          _9__5_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_QuestReleaseEntity__bool__TypeInfo, v42, v43);
          System_Func_object__bool____ctor(
            _9__5_0,
            v47,
            Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__,
            0LL);
          static_fields = clsQuestCheck___c_TypeInfo->static_fields;
          static_fields->__9__5_0 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__5_0;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v49, v50);
        }
        if ( !BasicHelper__Any_object_(
                qrs,
                (System_Func_T__bool__o *)_9__5_0,
                (const MethodInfo_2E24870 *)Method_BasicHelper_Any_QuestReleaseEntity___) )
        {
          Master_object = (int64_t)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Master_object = (int64_t)BalanceConfig_TypeInfo;
          }
          v51 = *(struct BalanceConfig_StaticFields **)(Master_object + 184);
          if ( v51->EventBoardGameNextBoardQuestId != questId )
          {
            if ( !*(_DWORD *)(Master_object + 224) )
            {
              j_il2cpp_runtime_class_init_0(Master_object);
              v51 = BalanceConfig_TypeInfo->static_fields;
            }
            if ( v51->EventBoardGameNextRoundQuestId != questId )
            {
              if ( !entity )
                goto LABEL_98;
              klass = (int32_t)entity[6].klass;
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              if ( CondType__IsUserEventStatus(klass, 7, 0LL) )
                return 0;
              v79 = (System_Collections_Generic_IEnumerable_T__o *)p_fields->qrs;
              v80 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                   System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                                   v77,
                                                                   v78);
              System_Collections_Generic_List_object____ctor_55234504(
                v80,
                v79,
                (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___75662040);
              v82 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v82 = BalanceConfig_TypeInfo;
              }
              if ( clsQuestCheck__CheckQuestPlayableNow(this, v82->static_fields->EventBoardGameNextBoardQuestId, v81) )
                return 0;
              v84 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v84 = BalanceConfig_TypeInfo;
              }
              if ( clsQuestCheck__CheckQuestPlayableNow(this, v84->static_fields->EventBoardGameNextRoundQuestId, v83) )
                return 0;
              p_fields->qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v80;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v80, v85, v86);
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
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___);
    if ( !questInfo->fields._WarInfo_k__BackingField )
      goto LABEL_98;
    v53 = (UserEventQuestCooltimeMaster_o *)Master_object;
    Master_object = MapControl_WarInfo__GetEventId(questInfo->fields._WarInfo_k__BackingField, 0LL);
    if ( !v53 )
      goto LABEL_98;
    v54 = UserEventQuestCooltimeMaster__getEntity(v53, Master_object, questInfo->fields.questId, 1, 0LL);
    if ( v54 )
    {
      v55 = v54;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      clearedAt = v55->fields.clearedAt;
      v58 = Time;
      Master_object = (int64_t)UserEventQuestCooltimeEntity__GetMasterEntity(v55, 0LL);
      if ( !Master_object )
        goto LABEL_98;
      if ( v58 < clearedAt + *(int *)(Master_object + 28) )
        return 0;
    }
  }
  if ( !p_fields->qrs )
    return 0;
  Master_object = (int64_t)this->fields.cQuestReleaseListP;
  if ( !Master_object )
    goto LABEL_98;
  v59 = *(_DWORD *)(Master_object + 24);
  v60 = *(_DWORD *)(Master_object + 28) + 1;
  *(_DWORD *)(Master_object + 24) = 0;
  *(_DWORD *)(Master_object + 28) = v60;
  if ( v59 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(Master_object + 16), 0, v59, 0LL);
    Master_object = (int64_t)this->fields.cQuestReleaseListP;
    if ( !Master_object )
      goto LABEL_98;
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Master_object,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.qrs,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__);
  cQuestReleaseListP = this->fields.cQuestReleaseListP;
  Master_object = (int64_t)clsQuestCheck___c_TypeInfo;
  if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
    Master_object = (int64_t)clsQuestCheck___c_TypeInfo;
  }
  v64 = *(System_Comparison_T__o **)(*(_QWORD *)(Master_object + 184) + 16LL);
  if ( !v64 )
  {
    if ( !*(_DWORD *)(Master_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = (int64_t)clsQuestCheck___c_TypeInfo;
    }
    v65 = **(Il2CppObject ***)(Master_object + 184);
    v64 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_QuestReleaseEntity__TypeInfo, v61, v62);
    System_Comparison_object____ctor(
      v64,
      v65,
      Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__,
      0LL);
    v66 = clsQuestCheck___c_TypeInfo->static_fields;
    v66->__9__5_1 = (struct System_Comparison_QuestReleaseEntity__o *)v64;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v66->__9__5_1, (int32_t)v64, v67, v68);
  }
  if ( !cQuestReleaseListP )
    goto LABEL_98;
  System_Collections_Generic_List_object___Sort_55243320(
    (System_Collections_Generic_List_object__o *)cQuestReleaseListP,
    v64,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  if ( v91 )
    goto LABEL_74;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v69 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = NetworkManager__get_UserId(0LL);
  if ( !v69 )
LABEL_98:
    sub_1B64324(Master_object);
  UserQuestMaster__TryGetEntity((UserQuestMaster_o *)v69, &v91, Master_object, questId, 0LL);
LABEL_74:
  Master_object = (int64_t)this->fields.cQuestReleaseListP;
  if ( !Master_object )
    goto LABEL_98;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v87,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v88 = v87;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v88,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
  {
    current = (QuestReleaseEntity_o *)v88.fields._current;
    if ( !v91 )
      goto LABEL_81;
    HasStatus = UserQuestEntity__HasStatus(v91, 8, 0LL);
    if ( !HasStatus )
      goto LABEL_81;
    if ( !current )
      sub_1B64324(HasStatus);
    if ( current->fields.type != 12 )
    {
LABEL_81:
      if ( !clsQuestCheck__IsQuestRelease_33211484(this, current, -1, questInfo, v70) )
      {
        *questReleaseNG = current;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)questReleaseNG, (int32_t)current, v73, v74);
        v75 = 17;
        goto LABEL_84;
      }
    }
  }
  v75 = 18;
LABEL_84:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v88,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v75 != 17;
}


void __fastcall clsQuestCheck___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F9051 & 1) == 0 )
  {
    sub_1B640C8(&clsQuestCheck___c_TypeInfo, v1);
    byte_49F9051 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(clsQuestCheck___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  clsQuestCheck___c_TypeInfo->static_fields->__9 = (struct clsQuestCheck___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)clsQuestCheck___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
  Il2CppObject *Instance; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21

  if ( (byte_49F9053 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_clsQuestCheck___c__DisplayClass41_1__CheckQuestPlayable_b__5__, v5);
    sub_1B640C8(&clsQuestCheck___c__DisplayClass41_1_TypeInfo, v6);
    byte_49F9053 = 1;
  }
  v7 = sub_1B64314(clsQuestCheck___c__DisplayClass41_1_TypeInfo, *(_QWORD *)&result, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v7,
          Method_clsQuestCheck___c__DisplayClass41_1__CheckQuestPlayable_b__5__,
          0LL),
        !Instance) )
  {
    sub_1B64324(v8);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v12, 0LL);
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
  Il2CppObject *Instance; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21

  if ( (byte_49F9054 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_clsQuestCheck___c__DisplayClass41_2__CheckQuestPlayable_b__6__, v5);
    sub_1B640C8(&clsQuestCheck___c__DisplayClass41_2_TypeInfo, v6);
    byte_49F9054 = 1;
  }
  v7 = sub_1B64314(clsQuestCheck___c__DisplayClass41_2_TypeInfo, *(_QWORD *)&result, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v7,
          Method_clsQuestCheck___c__DisplayClass41_2__CheckQuestPlayable_b__6__,
          0LL),
        !Instance) )
  {
    sub_1B64324(v8);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v12, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_11(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49F9056 & 1) == 0 )
  {
    sub_1B640C8(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_49F9056 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2E23130 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_13(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49F9057 & 1) == 0 )
  {
    sub_1B640C8(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_49F9057 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2E23130 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_2(
        clsQuestCheck___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F9058 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_49F9058 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_3(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F9052 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49F9052 = 1;
  }
  TopLoginRequest__ResetAccesTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  Il2CppObject *Instance; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21

  if ( (byte_49F9055 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_clsQuestCheck___c__DisplayClass41_3__CheckQuestPlayable_b__8__, v5);
    sub_1B640C8(&clsQuestCheck___c__DisplayClass41_3_TypeInfo, v6);
    byte_49F9055 = 1;
  }
  v7 = sub_1B64314(clsQuestCheck___c__DisplayClass41_3_TypeInfo, *(_QWORD *)&result, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v7,
          Method_clsQuestCheck___c__DisplayClass41_3__CheckQuestPlayable_b__8__,
          0LL),
        !Instance) )
  {
    sub_1B64324(v8);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v12, 0LL);
}


bool __fastcall clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_0(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B64324(this);
  return n->fields.type == 118;
}


int32_t __fastcall clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_1(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *a,
        QuestReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
  __int64 v8; // x1
  __int64 v9; // x2
  SceneJumpInfo_o *v10; // x20
  Il2CppObject *v11; // x0
  int32_t v12; // w1
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *v15; // x3

  if ( (byte_49F9059 & 1) == 0 )
  {
    sub_1B640C8(&SceneJumpInfo_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B640C8(&StringLiteral_12525/*"SellServant"*/, v4);
    sub_1B640C8(&StringLiteral_12562/*"ServantCombine"*/, v5);
    byte_49F9059 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v10 = (SceneJumpInfo_o *)sub_1B64314(SceneJumpInfo_TypeInfo, v13, v14);
      SceneJumpInfo___ctor_38274744(v10, (System_String_o *)StringLiteral_12525/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v12 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1B64324(v11);
    case 1:
      v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v11 )
      {
        v12 = 71;
        v15 = 0LL;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v10 = (SceneJumpInfo_o *)sub_1B64314(SceneJumpInfo_TypeInfo, v8, v9);
      SceneJumpInfo___ctor_38274656(v10, (System_String_o *)StringLiteral_12562/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v12 = 32;
LABEL_10:
        v11 = Instance;
        v15 = (Il2CppObject *)v10;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v11, v12, 1, v15, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x2
  SceneJumpInfo_o *v11; // x20
  __int64 v12; // x0
  int32_t v13; // w1
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2

  if ( (byte_49F905A & 1) == 0 )
  {
    sub_1B640C8(&SceneJumpInfo_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B640C8(&StringLiteral_12566/*"ServantEquipList"*/, v4);
    sub_1B640C8(&StringLiteral_12525/*"SellServant"*/, v5);
    sub_1B640C8(&StringLiteral_12565/*"ServantEQCombine"*/, v6);
    byte_49F905A = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v11 = (SceneJumpInfo_o *)sub_1B64314(SceneJumpInfo_TypeInfo, v14, v15);
      SceneJumpInfo___ctor_38274744(v11, (System_String_o *)StringLiteral_12525/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v13 = 22;
        goto LABEL_12;
      }
LABEL_14:
      sub_1B64324(v12);
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v11 = (SceneJumpInfo_o *)sub_1B64314(SceneJumpInfo_TypeInfo, v16, v17);
      SceneJumpInfo___ctor_38274656(v11, (System_String_o *)StringLiteral_12566/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v13 = 71;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v11 = (SceneJumpInfo_o *)sub_1B64314(SceneJumpInfo_TypeInfo, v9, v10);
      SceneJumpInfo___ctor_38274656(v11, (System_String_o *)StringLiteral_12565/*"ServantEQCombine"*/, 0LL);
      if ( Instance )
      {
        v13 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v13, 1, (Il2CppObject *)v11, 0LL);
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
  __int64 v6; // x1
  __int64 v7; // x2
  SceneJumpInfo_o *v8; // x20
  __int64 v9; // x0

  if ( (byte_49F905B & 1) == 0 )
  {
    sub_1B640C8(&SceneJumpInfo_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B640C8(&StringLiteral_12525/*"SellServant"*/, v4);
    byte_49F905B = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v8 = (SceneJumpInfo_o *)sub_1B64314(SceneJumpInfo_TypeInfo, v6, v7);
    SceneJumpInfo___ctor_38274744(v8, (System_String_o *)StringLiteral_12525/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_1B64324(v9);
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v8, 0LL);
  }
}