void __fastcall clsQuestCheck___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A57D27 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_10927/*"QuestStartEffect"*/);
    sub_1B885B0(&clsQuestCheck_TypeInfo);
    byte_4A57D27 = 1;
  }
  clsQuestCheck_TypeInfo->static_fields->KEY_QUEST_START_EFFECT = (struct System_String_o *)StringLiteral_10927/*"QuestStartEffect"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)clsQuestCheck_TypeInfo->static_fields, StringLiteral_10927/*"QuestStartEffect"*/, v1, v2);
}


void __fastcall clsQuestCheck___ctor(clsQuestCheck_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A57D26 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck___ctor__);
    byte_4A57D26 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.cQuestReleaseListP = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.cQuestReleaseListP, (int32_t)v6, v7, v8);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_3739C30 *)Method_SingletonTemplate_clsQuestCheck___ctor__);
}


bool __fastcall clsQuestCheck__CheckQuestPlayable(
        clsQuestCheck_o *this,
        MapControl_QuestInfo_o *questInfo,
        int64_t srcEndTime,
        int32_t boostId,
        const MethodInfo *method)
{
  __int64 v9; // x24
  int64_t SpotID; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  MapControl_QuestInfo_o **v14; // x19
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w28
  MapControl_QuestInfo_o *v18; // x8
  int32_t v19; // w20
  int32_t questPhase; // w29
  int32_t v21; // w21
  _BOOL4 isNotItemConsume; // w22
  int32_t v23; // w25
  int v24; // w26
  bool IsQuestReleaseAll; // w0
  Il2CppObject *MasterData_object; // x26
  UserQuestEntity_o *Entity; // x0
  __int64 v28; // x26
  int64_t Time; // x0
  System_String_o *v30; // x19
  System_String_o *v31; // x20
  CommonUI_o *v32; // x21
  clsQuestCheck___c_c *v33; // x8
  System_Action_o *_9__41_3; // x22
  Il2CppObject *v35; // x23
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w1
  struct clsQuestCheck___c_StaticFields *static_fields; // x0
  ServantStatusBattleListViewItem_o *p__9__41_3; // x0
  UserGameEntity_o *v41; // x26
  QuestEntity_o *v42; // x27
  clsQuestCheck___c_c *v43; // x8
  Il2CppObject *v44; // x23
  struct clsQuestCheck___c_StaticFields *v45; // x0
  TerminalPramsManager_c *v46; // x0
  int32_t v47; // w20
  int64_t v48; // x28
  struct TerminalPramsManager_StaticFields *v49; // x8
  UserServantMaster_o *v50; // x28
  Il2CppObject *v51; // x29
  CommonUI_o *v52; // x19
  int32_t v53; // w20
  int32_t svtKeep; // w21
  ServantFrameShortDlgComponent_CallbackFunc_o *v55; // x22
  Il2CppObject *v56; // x23
  struct clsQuestCheck___c_StaticFields *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  CommonUI_o *v60; // x0
  int32_t v61; // w1
  int32_t v62; // w2
  int32_t v63; // w3
  CommonUI_o *v64; // x19
  int32_t v65; // w20
  int32_t svtEquipKeep; // w21
  Il2CppObject *v67; // x23
  struct clsQuestCheck___c_StaticFields *v68; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  int32_t Count; // w19
  CommonUI_o *v72; // x20
  BalanceConfig_c *v73; // x8
  Il2CppObject *v74; // x23
  struct clsQuestCheck___c_StaticFields *v75; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  bool v78; // w25
  int32_t v80; // w28
  Il2CppObject *Instance; // x19
  RecoverDlgComponent_CallbackFunc_o *v82; // x20
  CommonUI_o *v83; // x0
  int32_t v84; // w1
  RecoverDlgComponent_CallbackFunc_o *v85; // x2
  bool v86; // w3
  Il2CppObject *v87; // x19
  RecoverDlgComponent_CallbackFunc_o *v88; // x20
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x24
  Il2CppObject *v90; // x25
  Il2CppObject *v91; // x27
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v93; // x23
  System_String_o *v94; // x20
  int32_t v95; // w29
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v97; // x8
  int64_t v98; // x28
  int64_t v99; // x26
  int32_t qp; // w8
  struct System_Int32_array *nums; // x9
  System_String_o *v102; // x0
  System_String_o *v103; // x0
  System_String_o *v104; // x19
  System_String_o *v105; // x0
  System_String_o *v106; // x19
  CommonUI_o *v107; // x20
  clsQuestCheck___c_c *v108; // x8
  System_String_o *v109; // x21
  System_Action_o *_9__41_11; // x22
  Il2CppObject *v111; // x23
  int32_t v112; // w2
  int32_t v113; // w3
  struct clsQuestCheck___c_StaticFields *v114; // x0
  ServantStatusBattleListViewItem_o *p__9__41_11; // x0
  Il2CppObject *v116; // x19
  RecoverDlgComponent_CallbackFunc_o *v117; // x20
  QuestConsumeItemEntity_o *v118; // x24
  Il2CppObject *v119; // x25
  Il2CppObject *v120; // x27
  UserGameEntity_o *v121; // x0
  UserGameEntity_o *v122; // x23
  System_String_o *v123; // x20
  int32_t v124; // w29
  struct System_Int32_array *v125; // x8
  struct System_Int32_array *v126; // x8
  int64_t v127; // x28
  int64_t v128; // x26
  int32_t v129; // w8
  struct System_Int32_array *v130; // x9
  Il2CppObject *v131; // x0
  TerminalPramsManager_c *v132; // x0
  int v133; // w8
  TerminalPramsManager_c *v134; // x0
  int32_t VaildPayType; // w22
  TerminalPramsManager_c *v136; // x0
  MapControl_QuestInfo_o *v137; // x8
  QuestMessageMaster_o *v138; // x19
  int32_t v139; // w2
  System_String_o *ValidMessage; // x0
  System_String_o *v141; // x19
  Il2CppObject *v142; // x20
  System_String_o *v143; // x21
  System_String_o *v144; // x22
  clsQuestCheck___c_c *v145; // x8
  CommonConfirmDialog_ClickDelegate_o *_9__41_2; // x24
  System_String_o *v147; // x23
  Il2CppObject *v148; // x25
  struct clsQuestCheck___c_StaticFields *v149; // x0
  int32_t v150; // w2
  int32_t v151; // w3
  System_String_o *v152; // x0
  System_String_o *v153; // x0
  System_String_o *v154; // x19
  System_String_o *v155; // x0
  clsQuestCheck___c_c *v156; // x8
  Il2CppObject *v157; // x23
  struct clsQuestCheck___c_StaticFields *v158; // x0
  int32_t v159; // [xsp+34h] [xbp-7Ch]
  int32_t v160; // [xsp+34h] [xbp-7Ch]
  char v161; // [xsp+38h] [xbp-78h]
  char v162; // [xsp+38h] [xbp-78h]
  int32_t key; // [xsp+3Ch] [xbp-74h]
  int32_t questId; // [xsp+44h] [xbp-6Ch]
  int32_t servantEquipSum[2]; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4A57D24 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&RecoverDlgComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMessageMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_0__);
    sub_1B885B0(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_11__);
    sub_1B885B0(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_13__);
    sub_1B885B0(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_1__);
    sub_1B885B0(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_2__);
    sub_1B885B0(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_3__);
    sub_1B885B0(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_4__);
    sub_1B885B0(&Method_clsQuestCheck___c__CheckQuestPlayable_b__41_7__);
    sub_1B885B0(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__10__);
    sub_1B885B0(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__12__);
    sub_1B885B0(&Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__9__);
    sub_1B885B0(&clsQuestCheck___c__DisplayClass41_0_TypeInfo);
    sub_1B885B0(&clsQuestCheck___c_TypeInfo);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    sub_1B885B0(&StringLiteral_10885/*"QUEST_MESSAGE_DLG_DECIDE"*/);
    sub_1B885B0(&StringLiteral_10884/*"QUEST_MESSAGE_DLG_CANCEL"*/);
    sub_1B885B0(&StringLiteral_10883/*"QUEST_ITEM_COST_OVER"*/);
    sub_1B885B0(&StringLiteral_10912/*"QUEST_TIME_OVER"*/);
    sub_1B885B0(&StringLiteral_12105/*"SHORT_DLG_TITLE"*/);
    sub_1B885B0(&StringLiteral_44/*"\n\n"*/);
    sub_1B885B0(&StringLiteral_2975/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_10826/*"QUEST_AP_MAX_OVER"*/);
    byte_4A57D24 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  v9 = sub_1B887FC(clsQuestCheck___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_246;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = questInfo;
  v14 = (MapControl_QuestInfo_o **)(v9 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)questInfo, v15, v16);
  SpotID = *(_QWORD *)(v9 + 24);
  *(_QWORD *)(v9 + 32) = srcEndTime;
  *(_DWORD *)(v9 + 40) = boostId;
  if ( !SpotID )
    goto LABEL_246;
  v17 = *(_DWORD *)(SpotID + 64);
  SpotID = MapControl_QuestInfo__GetSpotID((MapControl_QuestInfo_o *)SpotID, 0LL);
  v18 = *v14;
  if ( !*v14 )
    goto LABEL_246;
  v19 = v18->fields.questId;
  questPhase = v18->fields.questPhase;
  v21 = SpotID;
  SpotID = MapControl_QuestInfo__GetActConsumeCost(*v14, 0LL);
  if ( !*v14 )
    goto LABEL_246;
  isNotItemConsume = (*v14)->fields.isNotItemConsume;
  v23 = SpotID;
  SpotID = (int64_t)MapControl_QuestInfo__GetMine(*v14, 0LL);
  if ( !SpotID )
    goto LABEL_246;
  v24 = *(_DWORD *)(SpotID + 80);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IsQuestReleaseAll = TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
  if ( v24 != 1 && !IsQuestReleaseAll )
  {
    SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SpotID )
      goto LABEL_246;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)SpotID,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    SpotID = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      goto LABEL_246;
    Entity = UserQuestMaster__GetEntity((UserQuestMaster_o *)MasterData_object, SpotID, v19, 0LL);
    if ( !Entity || !UserQuestEntity__IsNotExpired(Entity, 0LL) )
    {
      v28 = *(_QWORD *)(v9 + 32);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      if ( v28 >= 1 && v28 - Time <= 0 )
      {
        v30 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v31 = LocalizationManager__Get((System_String_o *)StringLiteral_10912/*"QUEST_TIME_OVER"*/, 0LL);
        SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v32 = (CommonUI_o *)SpotID;
        v33 = clsQuestCheck___c_TypeInfo;
        if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
          v33 = clsQuestCheck___c_TypeInfo;
        }
        _9__41_3 = v33->static_fields->__9__41_3;
        if ( _9__41_3 )
          goto LABEL_44;
        if ( !v33->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v33);
          v33 = clsQuestCheck___c_TypeInfo;
        }
        v35 = (Il2CppObject *)v33->static_fields->__9;
        _9__41_3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(_9__41_3, v35, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_3__, 0LL);
        v38 = (int)_9__41_3;
        static_fields = clsQuestCheck___c_TypeInfo->static_fields;
        static_fields->__9__41_3 = _9__41_3;
        p__9__41_3 = (ServantStatusBattleListViewItem_o *)&static_fields->__9__41_3;
LABEL_43:
        sub_1B88554(p__9__41_3, v38, v36, v37);
LABEL_44:
        if ( !v32 )
          goto LABEL_246;
        CommonUI__OpenNotificationDialog(v32, v30, v31, _9__41_3, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
        goto LABEL_96;
      }
    }
  }
  SpotID = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !*v14 )
    goto LABEL_246;
  v41 = (UserGameEntity_o *)SpotID;
  SpotID = (int64_t)MapControl_QuestInfo__GetMine(*v14, 0LL);
  if ( !SpotID )
    goto LABEL_246;
  v42 = (QuestEntity_o *)SpotID;
  SpotID = QuestEntity__GetConsumeType((QuestEntity_o *)SpotID, 0LL);
  if ( (_DWORD)SpotID == 1 )
  {
    if ( !v41 )
      goto LABEL_246;
    if ( v23 > v41->fields.actMax )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12105/*"SHORT_DLG_TITLE"*/, 0LL);
      v31 = LocalizationManager__Get((System_String_o *)StringLiteral_10826/*"QUEST_AP_MAX_OVER"*/, 0LL);
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v32 = (CommonUI_o *)SpotID;
      v43 = clsQuestCheck___c_TypeInfo;
      if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
        v43 = clsQuestCheck___c_TypeInfo;
      }
      _9__41_3 = v43->static_fields->__9__41_4;
      if ( _9__41_3 )
        goto LABEL_44;
      if ( !v43->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v43);
        v43 = clsQuestCheck___c_TypeInfo;
      }
      v44 = (Il2CppObject *)v43->static_fields->__9;
      _9__41_3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(_9__41_3, v44, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_4__, 0LL);
      v38 = (int)_9__41_3;
      v45 = clsQuestCheck___c_TypeInfo->static_fields;
      v45->__9__41_4 = _9__41_3;
      p__9__41_3 = (ServantStatusBattleListViewItem_o *)&v45->__9__41_4;
      goto LABEL_43;
    }
  }
  key = v17;
  questId = v19;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC4 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC4 = 1;
  }
  v46 = TerminalPramsManager_TypeInfo;
  v47 = questPhase;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v46 = TerminalPramsManager_TypeInfo;
  }
  v46->static_fields->_QuestId_k__BackingField = questId;
  v48 = *(_QWORD *)(v9 + 32);
  if ( !byte_4A57DC5 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v46 = TerminalPramsManager_TypeInfo;
    byte_4A57DC5 = 1;
  }
  if ( !v46->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v46);
    v46 = TerminalPramsManager_TypeInfo;
  }
  v49 = v46->static_fields;
  v49->_EndTime_k__BackingField = v48;
  v49->lastPlayQuestConsumeAp = v23;
  TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(0LL);
  SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_246;
  SpotID = (int64_t)DataManager__GetMasterData_object_(
                      (DataManager_o *)SpotID,
                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SpotID )
    goto LABEL_246;
  v50 = (UserServantMaster_o *)SpotID;
  UserServantMaster__getCount((UserServantMaster_o *)SpotID, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SpotID )
    goto LABEL_246;
  v51 = DataManager__GetMasterData_object_(
          (DataManager_o *)SpotID,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v50, 1, 0LL) )
  {
    SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v41 )
      goto LABEL_246;
    v52 = (CommonUI_o *)SpotID;
    v53 = servantEquipSum[1];
    svtKeep = v41->fields.svtKeep;
    SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
      SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    }
    v55 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(SpotID + 184) + 40LL);
    if ( !v55 )
    {
      if ( !*(_DWORD *)(SpotID + 224) )
      {
        j_il2cpp_runtime_class_init_0(SpotID);
        SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
      }
      v56 = **(Il2CppObject ***)(SpotID + 184);
      v55 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B887FC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v55,
        v56,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__41_0__,
        0LL);
      v57 = clsQuestCheck___c_TypeInfo->static_fields;
      v57->__9__41_0 = v55;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v57->__9__41_0, (int32_t)v55, v58, v59);
    }
    if ( !v52 )
      goto LABEL_246;
    v60 = v52;
    v61 = v53;
    v62 = svtKeep;
    v63 = 0;
    goto LABEL_95;
  }
  SpotID = UserServantMaster__CheckEquipAdd(v50, 1, 1, 0LL);
  if ( (SpotID & 1) != 0 )
  {
    SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v41 )
      goto LABEL_246;
    v64 = (CommonUI_o *)SpotID;
    v65 = servantEquipSum[0];
    svtEquipKeep = v41->fields.svtEquipKeep;
    SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
      SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    }
    v55 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(SpotID + 184) + 48LL);
    if ( !v55 )
    {
      if ( !*(_DWORD *)(SpotID + 224) )
      {
        j_il2cpp_runtime_class_init_0(SpotID);
        SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
      }
      v67 = **(Il2CppObject ***)(SpotID + 184);
      v55 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B887FC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v55,
        v67,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__41_1__,
        0LL);
      v68 = clsQuestCheck___c_TypeInfo->static_fields;
      v68->__9__41_1 = v55;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v68->__9__41_1, (int32_t)v55, v69, v70);
    }
    if ( !v64 )
      goto LABEL_246;
    v63 = 1;
    v60 = v64;
    v61 = v65;
LABEL_94:
    v62 = svtEquipKeep;
LABEL_95:
    CommonUI__OpenSvtFrameShortDlg(v60, v61, v62, v63, 1, v55, 0, 0LL);
LABEL_96:
    SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( SpotID )
    {
      ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)SpotID, 0LL);
      return 0;
    }
    goto LABEL_246;
  }
  if ( !v51 )
    goto LABEL_246;
  if ( UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)v51, 0, 0LL) )
  {
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)v51, 0LL);
    SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v41 )
      goto LABEL_246;
    v72 = (CommonUI_o *)SpotID;
    if ( !byte_4A567BB )
    {
      sub_1B885B0(&BalanceConfig_TypeInfo);
      byte_4A567BB = 1;
    }
    v73 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v73 = BalanceConfig_TypeInfo;
    }
    SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    svtEquipKeep = v73->static_fields->CommandCodeFrameMax;
    if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
      SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
    }
    v55 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(SpotID + 184) + 56LL);
    if ( !v55 )
    {
      if ( !*(_DWORD *)(SpotID + 224) )
      {
        j_il2cpp_runtime_class_init_0(SpotID);
        SpotID = (int64_t)clsQuestCheck___c_TypeInfo;
      }
      v74 = **(Il2CppObject ***)(SpotID + 184);
      v55 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B887FC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v55,
        v74,
        Method_clsQuestCheck___c__CheckQuestPlayable_b__41_7__,
        0LL);
      v75 = clsQuestCheck___c_TypeInfo->static_fields;
      v75->__9__41_7 = v55;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v75->__9__41_7, (int32_t)v55, v76, v77);
    }
    if ( !v72 )
      goto LABEL_246;
    v63 = 2;
    v60 = v72;
    v61 = Count;
    goto LABEL_94;
  }
  SpotID = QuestEntity__GetConsumeType(v42, 0LL);
  v80 = v47;
  switch ( (int)SpotID )
  {
    case 1:
      if ( !v41 )
        goto LABEL_246;
      if ( v23 <= UserGameEntity__getAct(v41, 0LL) )
        goto LABEL_176;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v82 = (RecoverDlgComponent_CallbackFunc_o *)sub_1B887FC(RecoverDlgComponent_CallbackFunc_TypeInfo);
      RecoverDlgComponent_CallbackFunc___ctor(
        v82,
        (Il2CppObject *)v9,
        Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__9__,
        0LL);
      if ( !Instance )
        goto LABEL_246;
      v83 = (CommonUI_o *)Instance;
      v84 = v23;
      v85 = v82;
      v86 = 0;
      goto LABEL_148;
    case 2:
      if ( !v41 )
        goto LABEL_246;
      if ( v23 <= UserGameEntity__getRp(v41, 0LL) )
        goto LABEL_176;
      v87 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v88 = (RecoverDlgComponent_CallbackFunc_o *)sub_1B887FC(RecoverDlgComponent_CallbackFunc_TypeInfo);
      RecoverDlgComponent_CallbackFunc___ctor(
        v88,
        (Il2CppObject *)v9,
        Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__10__,
        0LL);
      if ( !v87 )
        goto LABEL_246;
      CommonUI__OpenRpRecoverItemListDialog((CommonUI_o *)v87, v23, v88, 0, 0LL);
      return 0;
    case 3:
      ItemConsumeEntity = QuestEntity__getItemConsumeEntity(v42, isNotItemConsume, 0LL);
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_246;
      v90 = DataManager__GetMasterData_object_(
              (DataManager_o *)SpotID,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_246;
      v91 = DataManager__GetMasterData_object_(
              (DataManager_o *)SpotID,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      if ( !ItemConsumeEntity )
        goto LABEL_176;
      v93 = SelfUserGame;
      v94 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL) )
        goto LABEL_176;
      v95 = 0;
      v159 = v80;
      v161 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        SpotID = NetworkManager__get_UserId(0LL);
        itemIds = ItemConsumeEntity->fields.itemIds;
        if ( !itemIds )
          goto LABEL_246;
        if ( v95 >= itemIds->max_length )
          goto LABEL_247;
        if ( !v90 )
          goto LABEL_246;
        SpotID = (int64_t)UserItemMaster__GetEntity((UserItemMaster_o *)v90, SpotID, itemIds->m_Items[v95 + 1], 0LL);
        v97 = ItemConsumeEntity->fields.itemIds;
        if ( !v97 )
          goto LABEL_246;
        if ( v95 >= v97->max_length )
          goto LABEL_247;
        if ( !v91 )
          goto LABEL_246;
        v98 = SpotID;
        SpotID = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)v91,
                            v97->m_Items[v95 + 1],
                            (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !SpotID )
          goto LABEL_246;
        v99 = SpotID;
        if ( *(_DWORD *)(SpotID + 48) == 1 )
        {
          if ( !v93 )
            goto LABEL_246;
          qp = v93->fields.qp;
        }
        else if ( v98 && (SpotID = ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0LL), (SpotID & 1) != 0) )
        {
          qp = *(_DWORD *)(v98 + 28);
        }
        else
        {
          qp = 0;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_246;
        if ( v95 >= nums->max_length )
          goto LABEL_247;
        if ( nums->m_Items[v95 + 1] > qp )
        {
          v94 = System_String__Concat_61718292(
                  v94,
                  (System_String_o *)StringLiteral_43/*"\n"*/,
                  *(System_String_o **)(v99 + 24),
                  0LL);
          v161 = 1;
        }
        ++v95;
      }
      while ( QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, v95, 0LL) );
      v80 = v159;
      if ( (v161 & 1) == 0 )
        goto LABEL_176;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v102 = LocalizationManager__Get((System_String_o *)StringLiteral_10883/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v103 = System_String__Format(v102, (Il2CppObject *)v94, 0LL);
      v104 = System_String__Concat_61707032(v103, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
      v105 = LocalizationManager__Get((System_String_o *)StringLiteral_2975/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v106 = System_String__Concat_61707032(v104, v105, 0LL);
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v107 = (CommonUI_o *)SpotID;
      v108 = clsQuestCheck___c_TypeInfo;
      if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
        v108 = clsQuestCheck___c_TypeInfo;
      }
      v109 = (System_String_o *)StringLiteral_1/*""*/;
      _9__41_11 = v108->static_fields->__9__41_11;
      if ( _9__41_11 )
        goto LABEL_244;
      if ( !v108->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v108);
        v108 = clsQuestCheck___c_TypeInfo;
      }
      v111 = (Il2CppObject *)v108->static_fields->__9;
      _9__41_11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(_9__41_11, v111, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_11__, 0LL);
      v114 = clsQuestCheck___c_TypeInfo->static_fields;
      v114->__9__41_11 = _9__41_11;
      p__9__41_11 = (ServantStatusBattleListViewItem_o *)&v114->__9__41_11;
      goto LABEL_243;
    case 4:
      if ( !v41 )
        goto LABEL_246;
      if ( v23 > UserGameEntity__getAct(v41, 0LL) )
      {
        v116 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v117 = (RecoverDlgComponent_CallbackFunc_o *)sub_1B887FC(RecoverDlgComponent_CallbackFunc_TypeInfo);
        RecoverDlgComponent_CallbackFunc___ctor(
          v117,
          (Il2CppObject *)v9,
          Method_clsQuestCheck___c__DisplayClass41_0__CheckQuestPlayable_b__12__,
          0LL);
        if ( v116 )
        {
          v86 = 1;
          v83 = (CommonUI_o *)v116;
          v84 = v23;
          v85 = v117;
LABEL_148:
          CommonUI__OpenApRecoverItemListDialog(v83, v84, v85, v86, 0LL);
          return 0;
        }
LABEL_246:
        sub_1B8880C(SpotID, v11);
      }
      v118 = QuestEntity__getItemConsumeEntity(v42, isNotItemConsume, 0LL);
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_246;
      v119 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_246;
      v120 = DataManager__GetMasterData_object_(
               (DataManager_o *)SpotID,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
      v121 = UserGameMaster__getSelfUserGame(0LL);
      if ( v118 )
      {
        v122 = v121;
        v123 = (System_String_o *)StringLiteral_1/*""*/;
        if ( QuestConsumeItemEntity__IsAvailableAt(v118, 0, 0LL) )
        {
          v124 = 0;
          v160 = v80;
          v162 = 0;
          do
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            SpotID = NetworkManager__get_UserId(0LL);
            v125 = v118->fields.itemIds;
            if ( !v125 )
              goto LABEL_246;
            if ( v124 >= v125->max_length )
              goto LABEL_247;
            if ( !v119 )
              goto LABEL_246;
            SpotID = (int64_t)UserItemMaster__GetEntity((UserItemMaster_o *)v119, SpotID, v125->m_Items[v124 + 1], 0LL);
            v126 = v118->fields.itemIds;
            if ( !v126 )
              goto LABEL_246;
            if ( v124 >= v126->max_length )
              goto LABEL_247;
            if ( !v120 )
              goto LABEL_246;
            v127 = SpotID;
            SpotID = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v120,
                                v126->m_Items[v124 + 1],
                                (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( !SpotID )
              goto LABEL_246;
            v128 = SpotID;
            if ( *(_DWORD *)(SpotID + 48) == 1 )
            {
              if ( !v122 )
                goto LABEL_246;
              v129 = v122->fields.qp;
            }
            else if ( v127 && (SpotID = ItemEntity__IsEnable((ItemEntity_o *)SpotID, 0LL), (SpotID & 1) != 0) )
            {
              v129 = *(_DWORD *)(v127 + 28);
            }
            else
            {
              v129 = 0;
            }
            v130 = v118->fields.nums;
            if ( !v130 )
              goto LABEL_246;
            if ( v124 >= v130->max_length )
LABEL_247:
              sub_1B88814(SpotID, v11);
            if ( v130->m_Items[v124 + 1] > v129 )
            {
              v123 = System_String__Concat_61718292(
                       v123,
                       (System_String_o *)StringLiteral_43/*"\n"*/,
                       *(System_String_o **)(v128 + 24),
                       0LL);
              v162 = 1;
            }
            ++v124;
          }
          while ( QuestConsumeItemEntity__IsAvailableAt(v118, v124, 0LL) );
          v80 = v160;
          if ( (v162 & 1) != 0 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v152 = LocalizationManager__Get((System_String_o *)StringLiteral_10883/*"QUEST_ITEM_COST_OVER"*/, 0LL);
            v153 = System_String__Format(v152, (Il2CppObject *)v123, 0LL);
            v154 = System_String__Concat_61707032(v153, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
            v155 = LocalizationManager__Get((System_String_o *)StringLiteral_2975/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
            v106 = System_String__Concat_61707032(v154, v155, 0LL);
            SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v107 = (CommonUI_o *)SpotID;
            v156 = clsQuestCheck___c_TypeInfo;
            if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
              v156 = clsQuestCheck___c_TypeInfo;
            }
            v109 = (System_String_o *)StringLiteral_1/*""*/;
            _9__41_11 = v156->static_fields->__9__41_13;
            if ( !_9__41_11 )
            {
              if ( !v156->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v156);
                v156 = clsQuestCheck___c_TypeInfo;
              }
              v157 = (Il2CppObject *)v156->static_fields->__9;
              _9__41_11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
              System_Action___ctor(_9__41_11, v157, Method_clsQuestCheck___c__CheckQuestPlayable_b__41_13__, 0LL);
              v158 = clsQuestCheck___c_TypeInfo->static_fields;
              v158->__9__41_13 = _9__41_11;
              p__9__41_11 = (ServantStatusBattleListViewItem_o *)&v158->__9__41_13;
LABEL_243:
              sub_1B88554(p__9__41_11, (int32_t)_9__41_11, v112, v113);
            }
LABEL_244:
            if ( !v107 )
              goto LABEL_246;
            CommonUI__OpenNotificationDialog(v107, v109, v106, _9__41_11, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
            goto LABEL_96;
          }
        }
      }
LABEL_176:
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_246;
      SpotID = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)SpotID,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !SpotID )
        goto LABEL_246;
      v131 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)SpotID,
               key,
               (const MethodInfo_311D934 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( v131 && WarEntity__IsFolder((WarEntity_o *)v131, 0LL) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A57DC6 )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A57DC6 = 1;
        }
        v132 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v132 = TerminalPramsManager_TypeInfo;
        }
        v133 = 3;
      }
      else
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A57DC6 )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A57DC6 = 1;
        }
        v132 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v132 = TerminalPramsManager_TypeInfo;
        }
        v133 = 2;
      }
      v132->static_fields->_DispState_k__BackingField = v133;
      if ( !v132->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v132);
      if ( !byte_4A57DC7 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57DC7 = 1;
      }
      v134 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v134 = TerminalPramsManager_TypeInfo;
      }
      v134->static_fields->_IsDoneShortcut_k__BackingField = 0;
      if ( !byte_4A57DC8 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        v134 = TerminalPramsManager_TypeInfo;
        byte_4A57DC8 = 1;
      }
      if ( !v134->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v134);
        v134 = TerminalPramsManager_TypeInfo;
      }
      v134->static_fields->_PhaseCnt_k__BackingField = v80;
      if ( !byte_4A57DC9 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        v134 = TerminalPramsManager_TypeInfo;
        byte_4A57DC9 = 1;
      }
      if ( !v134->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v134);
        v134 = TerminalPramsManager_TypeInfo;
      }
      v134->static_fields->_SpotId_k__BackingField = v21;
      if ( !byte_4A57DCA )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        v134 = TerminalPramsManager_TypeInfo;
        byte_4A57DCA = 1;
      }
      if ( !v134->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v134);
        v134 = TerminalPramsManager_TypeInfo;
      }
      v134->static_fields->_WarId_k__BackingField = key;
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_246;
      SpotID = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)SpotID,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GachaMaster___);
      if ( !SpotID )
        goto LABEL_246;
      VaildPayType = GachaMaster__getVaildPayType((GachaMaster_o *)SpotID, 0LL);
      if ( !byte_4A579F2 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A579F2 = 1;
      }
      v136 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v136 = TerminalPramsManager_TypeInfo;
      }
      v136->static_fields->_SummonType_k__BackingField = VaildPayType;
      SpotID = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpotID )
        goto LABEL_246;
      SpotID = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)SpotID,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMessageMaster___);
      v137 = *v14;
      if ( !*v14 )
        goto LABEL_246;
      v138 = (QuestMessageMaster_o *)SpotID;
      SpotID = MapControl_QuestInfo__GetPhaseMax(v137, 0LL);
      if ( !v138 )
        goto LABEL_246;
      if ( v80 + 1 >= (int)SpotID )
        v139 = SpotID;
      else
        v139 = v80 + 1;
      v78 = 1;
      ValidMessage = QuestMessageMaster__GetValidMessage(v138, questId, v139, 1, 0LL);
      if ( ValidMessage )
      {
        v141 = ValidMessage;
        v142 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v143 = LocalizationManager__Get((System_String_o *)StringLiteral_10885/*"QUEST_MESSAGE_DLG_DECIDE"*/, 0LL);
        SpotID = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10884/*"QUEST_MESSAGE_DLG_CANCEL"*/, 0LL);
        v144 = (System_String_o *)SpotID;
        v145 = clsQuestCheck___c_TypeInfo;
        if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
          v145 = clsQuestCheck___c_TypeInfo;
        }
        _9__41_2 = v145->static_fields->__9__41_2;
        v147 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !_9__41_2 )
        {
          if ( !v145->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v145);
            v145 = clsQuestCheck___c_TypeInfo;
          }
          v148 = (Il2CppObject *)v145->static_fields->__9;
          _9__41_2 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            _9__41_2,
            v148,
            Method_clsQuestCheck___c__CheckQuestPlayable_b__41_2__,
            0LL);
          v149 = clsQuestCheck___c_TypeInfo->static_fields;
          v149->__9__41_2 = _9__41_2;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v149->__9__41_2, (int32_t)_9__41_2, v150, v151);
        }
        if ( v142 )
        {
          v78 = 1;
          CommonUI__OpenConfirmDialog_30493912((CommonUI_o *)v142, v147, v141, v143, v144, _9__41_2, 0, 1, 0, 0LL);
          return v78;
        }
        goto LABEL_246;
      }
      return v78;
    default:
      goto LABEL_176;
  }
}


bool __fastcall clsQuestCheck__CheckQuestPlayableNow(clsQuestCheck_o *this, int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *UserId; // x0
  __int64 v7; // x1
  bool v8; // w0
  const MethodInfo *v9; // x2
  bool IsOpenByTime; // w8
  QuestEntity_o *v12; // [xsp+0h] [xbp-40h] BYREF
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A57D07 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A57D07 = 1;
  }
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, method) )
    return 0;
  v12 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserQuestMaster___);
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
  UserId = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !UserId )
LABEL_22:
    sub_1B8880C(UserId, v7);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          UserId,
          (Il2CppObject **)&v12,
          questId,
          (const MethodInfo_311D988 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  UserId = (DataMasterBase_TMaster__TEntity__PKType__o *)v12;
  if ( !v12 )
    goto LABEL_22;
  IsOpenByTime = QuestEntity__IsOpenByTime(v12, 0, 0LL);
  v8 = 0;
  if ( IsOpenByTime )
    return clsQuestCheck__IsReleasedQuest(this, questId, v9);
  return v8;
}


void __fastcall clsQuestCheck__DeleteContinueData(const MethodInfo *method)
{
  clsQuestCheck_c *v1; // x0
  System_String_o *KEY_QUEST_START_EFFECT; // x19

  if ( (byte_4A57D04 & 1) == 0 )
  {
    sub_1B885B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1B885B0(&clsQuestCheck_TypeInfo);
    byte_4A57D04 = 1;
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
  EncryptedPlayerPrefs__DeleteKey(KEY_QUEST_START_EFFECT, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


int32_t __fastcall clsQuestCheck__GetBeforeClearQuestId(
        clsQuestCheck_o *this,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  bool v6; // w8
  int32_t result; // w0
  TerminalPramsManager_c *v8; // x0

  if ( (byte_4A57D17 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57D17 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v6 = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0LL);
  result = -1;
  if ( !v6 || !is_quest_after_action )
    return result;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
LABEL_17:
    sub_1B8880C(Instance, v5);
  if ( !QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0LL) )
    return -1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC0 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  return v8->static_fields->_QuestId_k__BackingField;
}


System_Int32_array *__fastcall clsQuestCheck__GetEventQuestIdListPlayable(
        clsQuestCheck_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x20
  System_Int32_array *Master_object; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  __int64 v9; // x8
  System_Int32_array *v10; // x21
  unsigned __int64 v11; // x23
  int32_t v12; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10

  if ( (byte_4A57D20 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A57D20 = 1;
  }
  if ( eventId <= 0 )
    return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  v5 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Master_object )
    goto LABEL_21;
  Master_object = QuestGroupMaster__GetQuestIdListByEventId((QuestGroupMaster_o *)Master_object, eventId, 0LL);
  if ( !Master_object )
    goto LABEL_21;
  v9 = *(_QWORD *)&Master_object->max_length;
  v10 = Master_object;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    do
    {
      if ( v11 >= (unsigned int)v9 )
        sub_1B88814(Master_object, v7);
      v12 = v10->m_Items[v11 + 1];
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
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v5,
            v12,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v5->fields._size = size + 1;
          items->m_Items[size + 1] = v12;
        }
      }
      LODWORD(v9) = v10->max_length;
    }
    while ( (__int64)++v11 < (int)v9 );
  }
  if ( !v5 )
LABEL_21:
    sub_1B8880C(Master_object, v7);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall clsQuestCheck__GetNewPlayableEventQuestId(
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
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Int32_array *v18; // x19
  ServantStatusBattleListViewItem_c *v19; // x20
  TerminalPramsManager_c *v20; // x0
  ServantStatusBattleListViewItem_o *v21; // x0
  ServantStatusBattleListViewItem_c *v23; // x19
  TerminalPramsManager_c *v24; // x0
  ServantStatusBattleListViewItem_o *p_ClearEventQuestIds_k__BackingField; // x0

  if ( (byte_4A57D1F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_ConvertAll_string__int___);
    sub_1B885B0(&System_Converter_string__int__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Except_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Int32_Parse__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57D1F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC2 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC2 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( System_String__IsNullOrEmpty(v5->static_fields->_ClearEventQuestIds_k__BackingField, 0LL) )
    return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC2 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC2 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  ClearEventQuestIds_k__BackingField = v7->static_fields->_ClearEventQuestIds_k__BackingField;
  if ( !ClearEventQuestIds_k__BackingField
    || (v9 = System_String__Split(ClearEventQuestIds_k__BackingField, 0x2Cu, 0, 0LL),
        v10 = (System_Converter_object__int__o *)sub_1B887FC(System_Converter_string__int__TypeInfo),
        System_Converter_object__int____ctor(v10, 0LL, Method_System_Int32_Parse__, 0LL),
        (ClearEventQuestIds_k__BackingField = (System_String_o *)System_Array__ConvertAll_object__int_(
                                                                   (System_Object_array *)v9,
                                                                   (System_Converter_TInput__TOutput__o *)v10,
                                                                   (const MethodInfo_2F76E10 *)Method_System_Array_ConvertAll_string__int___)) == 0LL) )
  {
    sub_1B8880C(ClearEventQuestIds_k__BackingField, v6);
  }
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)ClearEventQuestIds_k__BackingField;
  if ( !ClearEventQuestIds_k__BackingField[1].klass )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
    if ( !byte_4A57DC1 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC1 = 1;
    }
    v24 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v24 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (ServantStatusBattleListViewItem_o *)&v24->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = v23;
    sub_1B88554(p_ClearEventQuestIds_k__BackingField, (int32_t)v23, (int32_t)v11, v12);
    TerminalPramsManager__ClearEventQuestIds_SaveData(0LL);
    return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)clsQuestCheck__GetEventQuestIdListPlayable(
                                                               this,
                                                               eventId,
                                                               v11);
  v15 = System_Linq_Enumerable__Except_int_(
          v14,
          v13,
          (const MethodInfo_2EA0740 *)Method_System_Linq_Enumerable_Except_int___);
  v18 = System_Linq_Enumerable__ToArray_int_(
          v15,
          (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v19 = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  if ( !byte_4A57DC1 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC1 = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  v21 = (ServantStatusBattleListViewItem_o *)&v20->static_fields->_ClearEventQuestIds_k__BackingField;
  v21->klass = v19;
  sub_1B88554(v21, (int32_t)v19, v16, v17);
  TerminalPramsManager__ClearEventQuestIds_SaveData(0LL);
  return v18;
}


System_Collections_Generic_List_QuestEntity__o *__fastcall clsQuestCheck__GetQuestEntityByQuestId(
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
  Il2CppObject *v13; // x1
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Collections_Generic_List_Enumerator_int__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v20; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A57D1D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57D1D = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___),
        !qids) )
  {
    sub_1B8880C(Instance, v6);
  }
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    qids,
    (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_int___MoveNext(
           &v20,
           (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v8 )
      break;
    if ( !v7 )
      sub_1B8880C(v8, v9);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v7,
               v20.fields._current,
               (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    v13 = Entity;
    if ( !v4 )
      sub_1B8880C(Entity, Entity);
    items = v4->fields._items;
    v15 = Method_System_Collections_Generic_List_QuestEntity__Add__;
    ++v4->fields._version;
    if ( !items )
      sub_1B8880C(Entity, Entity);
    size = v4->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v4,
        Entity,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v17 = &items->obj.klass + size;
      v4->fields._size = size + 1;
      v17[4] = (Il2CppClass *)v13;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v13, v11, v12);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v20,
    (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return (System_Collections_Generic_List_QuestEntity__o *)v4;
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


System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantFriendShip(
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

  if ( (byte_4A57D1C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor___76036512);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57D1C = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v9 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_32;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 9, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
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
        sub_1B88814(Instance, v11);
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
                                      (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
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
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v9,
                questId,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v9->fields._size = size + 1;
              items->m_Items[size + 1] = questId;
            }
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_22;
    }
LABEL_32:
    sub_1B8880C(Instance, v11);
  }
LABEL_22:
  if ( (oldFriendShipRank & 0x80000000) == 0 )
  {
    v22 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_55443684(
      v22,
      (System_Collections_Generic_IEnumerable_T__o *)v9,
      (const MethodInfo_34E00E4 *)Method_System_Collections_Generic_List_int___ctor___76036512);
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
                                      (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v22 )
          goto LABEL_32;
        v25 = (int)Instance;
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v27,
          v22,
          (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v28 = v27;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v28,
                  (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v25 == v28.fields._current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v9,
              v24,
              (const MethodInfo_34E1F90 *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v28,
          (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( --v24 < 0 )
          return v9;
      }
    }
  }
  return v9;
}


System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLimitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__GetReleaseQuestIdByServantLimit_33492208(this, svt_id, oldLimitCount, 238, v4);
}


System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit_33492208(
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

  if ( (byte_4A57D19 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor___76036512);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57D19 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v9 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_32;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
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
        sub_1B88814(Instance, v11);
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
                                      (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
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
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v9,
                questId,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v9->fields._size = size + 1;
              items->m_Items[size + 1] = questId;
            }
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_22;
    }
LABEL_32:
    sub_1B8880C(Instance, v11);
  }
LABEL_22:
  if ( (oldLimitCount & 0x80000000) == 0 )
  {
    v22 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_55443684(
      v22,
      (System_Collections_Generic_IEnumerable_T__o *)v9,
      (const MethodInfo_34E00E4 *)Method_System_Collections_Generic_List_int___ctor___76036512);
    Instance = (DataManager_o *)clsQuestCheck__GetReleaseQuestIdByServantLimit_33492208(
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
                                      (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v22 )
          goto LABEL_32;
        v25 = (int)Instance;
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v27,
          v22,
          (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v28 = v27;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v28,
                  (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( v25 == v28.fields._current )
          {
            System_Collections_Generic_List_int___RemoveAt(
              v9,
              v24,
              (const MethodInfo_34E1F90 *)Method_System_Collections_Generic_List_int__RemoveAt__);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v28,
          (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        if ( --v24 < 0 )
          return v9;
      }
    }
  }
  return v9;
}


System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLimit_33493224(
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

  if ( (byte_4A57D1A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57D1A = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v10 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_46;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 7, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
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
                     (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_46;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
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
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v10,
                questId,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v10->fields._size = size + 1;
              items->m_Items[size + 1] = questId;
            }
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_22;
    }
LABEL_47:
    sub_1B88814(Instance, v12);
  }
LABEL_22:
  v23 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  v24 = ListByType->max_length;
  if ( v24 >= 1 )
  {
    v25 = 0LL;
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
                     (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_46;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
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
            if ( (unsigned int)v31 >= v29->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v23,
                v27,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
            }
            else
            {
              v23->fields._size = v31 + 1;
              v29->m_Items[v31 + 1] = v27;
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
    sub_1B8880C(Instance, v12);
  v32 = v23->fields._size - 1;
  if ( v32 >= 0 )
  {
    while ( 1 )
    {
      Instance = (Il2CppObject *)System_Collections_Generic_List_int___get_Item(
                                   v23,
                                   v32,
                                   (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v10 )
        goto LABEL_46;
      v33 = (int)Instance;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v36,
        v10,
        (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v37 = v36;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v37,
                (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        if ( v33 == v37.fields._current )
        {
          System_Collections_Generic_List_int___RemoveAt(
            v23,
            v32,
            (const MethodInfo_34E1F90 *)Method_System_Collections_Generic_List_int__RemoveAt__);
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v37,
        (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      if ( --v32 < 0 )
        return v23;
    }
  }
  return v23;
}


System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLv(
        clsQuestCheck_o *this,
        int32_t svt_id,
        int32_t oldLv,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__GetReleaseQuestIdByServantLv_33491648(this, svt_id, oldLv, 238, v4);
}


System_Collections_Generic_List_int__o *__fastcall clsQuestCheck__GetReleaseQuestIdByServantLv_33491648(
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

  if ( (byte_4A57D18 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57D18 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !Instance )
    goto LABEL_23;
  ListByType = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)Instance, 6, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
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
        sub_1B88814(Instance, v11);
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
                     (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !Instance )
          break;
        Instance = (Il2CppObject *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
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
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v9,
                questId,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v9->fields._size = size + 1;
              items->m_Items[size + 1] = questId;
            }
          }
        }
      }
      max_length = ListByType->max_length;
      if ( (int)++v15 >= max_length )
        return v9;
    }
LABEL_23:
    sub_1B8880C(Instance, v11);
  }
  return v9;
}


System_Collections_Generic_List_QuestEntity__o *__fastcall clsQuestCheck__GetReleasedQuestEntityListByServantGet(
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
  QuestReleaseEntity_array **v19; // x28
  System_Func_object__bool__o *v20; // x25
  const MethodInfo *v21; // x4
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  ServantGroupEntity_array *ListByServantID; // x19
  __int64 v29; // x8
  QuestReleaseEntity_array *v30; // x24
  unsigned __int64 v31; // x29
  int v32; // w8
  unsigned int v33; // w23
  __int64 v34; // x19
  QuestReleaseEntity_o *v35; // x25
  __int64 v36; // x27
  int32_t v37; // w25
  int32_t v38; // w2
  int32_t v39; // w3
  QuestReleaseEntity_array **v40; // x26
  System_Func_object__bool__o *v41; // x28
  const MethodInfo *v42; // x4
  int32_t v43; // w2
  int32_t v44; // w3
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0
  QuestReleaseMaster_o *v50; // [xsp+0h] [xbp-80h]
  DataManager_o *v51; // [xsp+8h] [xbp-78h]

  if ( (byte_4A57D1B & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_QuestEntity___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantGroupMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&System_Func_QuestEntity__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_clsQuestCheck___c__DisplayClass31_0__GetReleasedQuestEntityListByServantGet_b__0__);
    sub_1B885B0(&clsQuestCheck___c__DisplayClass31_0_TypeInfo);
    sub_1B885B0(&Method_clsQuestCheck___c__DisplayClass31_1__GetReleasedQuestEntityListByServantGet_b__1__);
    sub_1B885B0(&clsQuestCheck___c__DisplayClass31_1_TypeInfo);
    byte_4A57D1B = 1;
  }
  Instance = (QuestReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  v7 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
  v9 = DataManager__GetMasterData_object_(
         v7,
         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  if ( !v9 )
    goto LABEL_49;
  v50 = (QuestReleaseMaster_o *)v9;
  Instance = QuestReleaseMaster__getListByType((QuestReleaseMaster_o *)v9, 8, 0LL);
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
      v15 = sub_1B887FC(clsQuestCheck___c__DisplayClass31_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v15, 0LL);
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
                                                 (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v15 )
          goto LABEL_49;
        *(_QWORD *)(v15 + 16) = Instance;
        v19 = (QuestReleaseEntity_array **)(v15 + 16);
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)Instance, v17, v18);
        v20 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_QuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v20,
          (Il2CppObject *)v15,
          Method_clsQuestCheck___c__DisplayClass31_0__GetReleasedQuestEntityListByServantGet_b__0__,
          0LL);
        Instance = (QuestReleaseEntity_array *)BasicHelper__Any_object_(
                                                 (System_Collections_Generic_List_T__o *)v10,
                                                 (System_Func_T__bool__o *)v20,
                                                 (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = *v19;
          if ( !*v19 )
            goto LABEL_49;
          Instance = (QuestReleaseEntity_array *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
          if ( ((unsigned int)Instance & typeFlag) != 0 )
          {
            Instance = (QuestReleaseEntity_array *)clsQuestCheck__IsQuestRelease(this, questId, -1, 0, v21);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v10 )
                goto LABEL_49;
              v6 = (Il2CppObject *)*v19;
              items = v10->fields._items;
              v25 = Method_System_Collections_Generic_List_QuestEntity__Add__;
              ++v10->fields._version;
              if ( !items )
                goto LABEL_49;
              size = v10->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v10,
                  v6,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
              }
              else
              {
                v27 = &items->obj.klass + size;
                v10->fields._size = size + 1;
                v27[4] = (Il2CppClass *)v6;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v6, v22, v23);
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
    sub_1B88814(Instance, v6);
  }
LABEL_23:
  Instance = (QuestReleaseEntity_array *)DataManager__GetMasterData_object_(
                                           v7,
                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantGroupMaster___);
  if ( !Instance
    || (ListByServantID = ServantGroupMaster__getListByServantID((ServantGroupMaster_o *)Instance, servantId, 0LL),
        Instance = QuestReleaseMaster__getListByType(v50, 10, 0LL),
        !ListByServantID) )
  {
LABEL_49:
    sub_1B8880C(Instance, v6);
  }
  v29 = *(_QWORD *)&ListByServantID->max_length;
  if ( (int)v29 >= 1 )
  {
    v30 = Instance;
    v31 = 0LL;
    v51 = (DataManager_o *)ListByServantID;
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
      LODWORD(v29) = v51->fields.m_CancellationTokenSource;
      if ( (__int64)v31 >= (int)v29 )
        return (System_Collections_Generic_List_QuestEntity__o *)v10;
    }
    v33 = 0;
    v34 = *((_QWORD *)&v51->fields._DispLog + v31);
    while ( v33 < v32 )
    {
      v35 = v30->m_Items[v33];
      v36 = sub_1B887FC(clsQuestCheck___c__DisplayClass31_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v36, 0LL);
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
                                                 (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v36 )
          goto LABEL_49;
        *(_QWORD *)(v36 + 16) = Instance;
        v40 = (QuestReleaseEntity_array **)(v36 + 16);
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 16), (int32_t)Instance, v38, v39);
        v41 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_QuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v41,
          (Il2CppObject *)v36,
          Method_clsQuestCheck___c__DisplayClass31_1__GetReleasedQuestEntityListByServantGet_b__1__,
          0LL);
        Instance = (QuestReleaseEntity_array *)BasicHelper__Any_object_(
                                                 (System_Collections_Generic_List_T__o *)v10,
                                                 (System_Func_T__bool__o *)v41,
                                                 (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_QuestEntity___);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = *v40;
          if ( !*v40 )
            goto LABEL_49;
          Instance = (QuestReleaseEntity_array *)QuestEntity__GetTypeFlag((QuestEntity_o *)Instance, 0LL);
          if ( ((unsigned int)Instance & typeFlag) != 0 )
          {
            Instance = (QuestReleaseEntity_array *)clsQuestCheck__IsQuestRelease(this, v37, -1, 0, v42);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v10 )
                goto LABEL_49;
              v6 = (Il2CppObject *)*v40;
              v45 = v10->fields._items;
              v46 = Method_System_Collections_Generic_List_QuestEntity__Add__;
              ++v10->fields._version;
              if ( !v45 )
                goto LABEL_49;
              v47 = v10->fields._size;
              if ( (unsigned int)v47 >= v45->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v10,
                  v6,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
              }
              else
              {
                v48 = &v45->obj.klass + v47;
                v10->fields._size = v47 + 1;
                v48[4] = (Il2CppClass *)v6;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v48 + 4), (int32_t)v6, v43, v44);
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


bool __fastcall clsQuestCheck__IsEncountRaidBoss(
        clsQuestCheck_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  System_Int32_array *Instance; // x0
  __int64 v8; // x1
  EventRaidMaster_o *v9; // x22
  int32_t RaidDeadQuestId; // w23
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4
  const MethodInfo *v14; // x4
  __int64 v15; // x8
  System_Int32_array *v16; // x20
  unsigned __int64 v17; // x21

  if ( (byte_4A57D0B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4A57D0B = 1;
  }
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_18;
  v9 = (EventRaidMaster_o *)Instance;
  RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId((EventRaidMaster_o *)Instance, eventId, day, 0LL);
  Instance = (System_Int32_array *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, RaidDeadQuestId, 0, v11)
    || clsQuestCheck__IsQuestRelease(this, RaidDeadQuestId, -1, 0, v12) )
  {
    LOBYTE(Instance) = 1;
    return (unsigned __int8)Instance & 1;
  }
  Instance = EventRaidMaster__GetRaidAliveQuestIds(v9, eventId, day, 0LL);
  if ( !Instance )
LABEL_18:
    sub_1B8880C(Instance, v8);
  v15 = *(_QWORD *)&Instance->max_length;
  v16 = Instance;
  if ( (int)v15 < 1 )
  {
    LOBYTE(Instance) = 0;
  }
  else
  {
    v17 = 0LL;
    do
    {
      if ( v17 >= (unsigned int)v15 )
        sub_1B88814(Instance, v8);
      Instance = (System_Int32_array *)clsQuestCheck__IsQuestRelease(this, v16->m_Items[v17 + 1], -1, 0, v14);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      LODWORD(v15) = v16->max_length;
      ++v17;
    }
    while ( (__int64)v17 < (int)v15 );
  }
  return (unsigned __int8)Instance & 1;
}


bool __fastcall clsQuestCheck__IsLastWarClear(clsQuestCheck_o *this, const MethodInfo *method)
{
  int32_t Value; // w1
  const MethodInfo *v4; // x2

  if ( (byte_4A57D0D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8229/*"LAST_WAR_ID"*/);
    byte_4A57D0D = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8229/*"LAST_WAR_ID"*/, 0LL);
  return clsQuestCheck__IsWarClear(this, Value, v4);
}


bool __fastcall clsQuestCheck__IsMainInterlude(clsQuestCheck_o *this, int32_t war_id, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4A57D0E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1B885B0(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57D0E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v5);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             war_id,
             (const MethodInfo_311D934 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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

  if ( (byte_4A57D14 & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_1B885B0(&CondType_TypeInfo);
    byte_4A57D14 = 1;
  }
  v6 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_37596684(qid, v6, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsQuestClearRaw(
        clsQuestCheck_o *this,
        int32_t qid,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  int32_t v6; // w20

  if ( (byte_4A57D15 & 1) == 0 )
  {
    this = (clsQuestCheck_o *)sub_1B885B0(&CondType_TypeInfo);
    byte_4A57D15 = 1;
  }
  v6 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, (const MethodInfo *)is_quest_after_action);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_37596684(qid, v6, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall clsQuestCheck__IsQuestPhaseClear(
        clsQuestCheck_o *this,
        int32_t qid,
        int32_t phase,
        bool is_quest_after_action,
        const MethodInfo *method)
{
  int32_t v8; // w21
  int64_t UserId; // x22

  if ( (byte_4A57D16 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    this = (clsQuestCheck_o *)sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A57D16 = 1;
  }
  v8 = clsQuestCheck__GetBeforeClearQuestId(this, is_quest_after_action, *(const MethodInfo **)&phase);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestPhaseClear(UserId, qid, phase, v8, 0, 0LL);
}


bool __fastcall clsQuestCheck__IsQuestRelease(
        clsQuestCheck_o *this,
        int32_t quest_id,
        int32_t old_val,
        int32_t old_val_qr_type,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *v11; // x19
  bool v12; // w20
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  QuestReleaseEntity_o *v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x4
  __int64 methodPtr_low; // x10
  int32_t v27; // w2
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4A57D0A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_DataManager_getEntityList_QuestReleaseMaster___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&QuestReleaseEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57D0A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__getEntityList_object_(
                                      Instance,
                                      (const MethodInfo_2E7FB04 *)Method_DataManager_getEntityList_QuestReleaseMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v10);
  }
  v11 = (System_Collections_ObjectModel_Collection_T__o *)Instance;
  v12 = System_Collections_ObjectModel_Collection_object___get_Count(
          (System_Collections_ObjectModel_Collection_T__o *)Instance,
          (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) > 0;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v11,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_17;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_17:
      v22 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (QuestReleaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                                    Enumerator,
                                    *(_QWORD *)(v22 + 8));
    if ( !v23 )
      goto LABEL_38;
    methodPtr_low = LOBYTE(QuestReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v23->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestReleaseEntity_c *)v23->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestReleaseEntity_TypeInfo )
    {
      sub_1B88ACC(v23);
LABEL_38:
      sub_1B8880C(v23, v24);
    }
    if ( v23->fields.questId == quest_id )
    {
      if ( (old_val & 0x80000000) != 0 )
        v27 = -1;
      else
        v27 = v23->fields.type == old_val_qr_type ? old_val : -1;
      if ( !clsQuestCheck__IsQuestRelease_33488656(this, v23, v27, 0LL, v25) )
      {
        v12 = 0;
        break;
      }
    }
  }
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_34;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_34:
    v31 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return v12;
}


bool __fastcall clsQuestCheck__IsQuestRelease_33485800(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        MapControl_QuestInfo_o *qinf,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_33488656(this, qrd, -1, qinf, v4);
}


bool __fastcall clsQuestCheck__IsQuestRelease_33487736(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        int32_t old_val,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return clsQuestCheck__IsQuestRelease_33488656(this, qrd, old_val, 0LL, v4);
}


bool __fastcall clsQuestCheck__IsQuestRelease_33488656(
        clsQuestCheck_o *this,
        QuestReleaseEntity_o *qrd,
        int32_t old_val,
        MapControl_QuestInfo_o *qinf,
        const MethodInfo *method)
{
  char v5; // cf
  char v6; // zf
  clsQuestCheck_o *v10; // x22
  int32_t type; // w23
  int32_t v12; // w20
  int32_t v13; // w21
  int32_t targetId; // w20
  int64_t value; // x19
  int32_t v17; // w0
  int32_t v18; // w20
  int32_t v19; // w21
  int32_t v20; // w19
  int32_t v21; // w0
  int32_t v22; // w1
  int32_t v23; // w2
  bool v24; // w3
  bool v26; // w3
  QuestReleaseEntity_o *v27; // x2
  Il2CppObject *v28; // x0
  QuestEntity_o *v29; // x19
  int64_t Time; // x20
  Il2CppObject *v31; // x0
  int32_t v32; // w19
  int32_t v33; // w20
  int32_t questId; // w22
  int32_t ValueInt; // w19
  int32_t v36; // w20
  int32_t v37; // w21
  int32_t v38; // w19
  TotalEventRaidEntity_o *v40; // [xsp+0h] [xbp-50h] BYREF
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  System_Int32_array *sameGroupQuestIds; // [xsp+10h] [xbp-40h] BYREF
  bool is_release; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = this;
  if ( (byte_4A57D10 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    this = (clsQuestCheck_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57D10 = 1;
  }
  entity = 0LL;
  sameGroupQuestIds = 0LL;
  v40 = 0LL;
  is_release = 0;
  if ( !qrd )
LABEL_97:
    sub_1B8880C(this, qrd);
  type = qrd->fields.type;
  if ( !v6 & v5 )
  {
LABEL_20:
    targetId = qrd->fields.targetId;
    value = qrd->fields.value;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v17 = type;
  }
  else
  {
    switch ( type )
    {
      case 0:
        return 1;
      case 1:
        return clsQuestCheck__IsQuestClear(v10, qrd->fields.targetId, 0, (const MethodInfo *)qinf);
      case 2:
        v26 = 1;
        v27 = qrd;
        goto LABEL_85;
      case 3:
      case 4:
      case 5:
        return is_release;
      case 6:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        if ( (old_val & 0x80000000) == 0 )
          return QuestReleaseEntity__getValueInt(qrd, 0LL) <= old_val;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v17 = 6;
        break;
      case 7:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        if ( (old_val & 0x80000000) == 0 )
          return QuestReleaseEntity__getValueInt(qrd, 0LL) <= old_val;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v17 = 7;
        break;
      case 8:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v17 = 8;
        break;
      case 9:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        if ( (old_val & 0x80000000) == 0 )
          return QuestReleaseEntity__getValueInt(qrd, 0LL) <= old_val;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v17 = 9;
        break;
      case 10:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v17 = 10;
        break;
      case 11:
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v17 = 11;
        break;
      case 12:
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_97;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_97;
        v28 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                qrd->fields.questId,
                (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v28 )
          return is_release;
        v29 = (QuestEntity_o *)v28;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Time = NetworkManager__getTime(0LL);
        if ( QuestEntity__getOpenedAt(v29, 0LL) > Time || QuestEntity__getClosedAt(v29, 0LL) <= Time )
          return is_release;
        return 1;
      case 13:
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_97;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_97;
        v31 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                qrd->fields.questId,
                (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !v31 )
          return is_release;
        return QuestEntity__IsOpenByTime((QuestEntity_o *)v31, 1, 0LL);
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
        v32 = qrd->fields.targetId;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return CondType__IsMissionAchive(v32, 0LL);
      case 26:
        v33 = qrd->fields.targetId;
        questId = qrd->fields.questId;
        ValueInt = QuestReleaseEntity__getValueInt(qrd, 0LL);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        is_release = CondType__IsNotQuestGroupClear(questId, v33, ValueInt, &sameGroupQuestIds, 1, 0LL);
        if ( qinf )
        {
          qinf->fields._GroupId_k__BackingField = v33;
          MapControl_QuestInfo__AddSameGroupQuestIds(qinf, sameGroupQuestIds, 0LL);
        }
        return is_release;
      case 27:
      case 28:
        v12 = qrd->fields.targetId;
        v13 = QuestReleaseEntity__getValueInt(qrd, 0LL);
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_97;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaidMaster___);
        if ( !this )
          goto LABEL_97;
        if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)this, &entity, v12, v13, 0LL) )
          return is_release;
        this = (clsQuestCheck_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_97;
        this = (clsQuestCheck_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
        if ( !this )
          goto LABEL_97;
        this = (clsQuestCheck_o *)TotalEventRaidMaster__TryGetEntity(
                                    (TotalEventRaidMaster_o *)this,
                                    &v40,
                                    v12,
                                    v13,
                                    0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          return is_release;
        if ( !entity || !v40 )
          goto LABEL_97;
        return (entity->fields.maxHp > v40->fields.totalDamage) ^ (qrd->fields.type != 27);
      case 32:
        v36 = qrd->fields.questId;
        v37 = qrd->fields.targetId;
        v38 = QuestReleaseEntity__getValueInt(qrd, 0LL);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v24 = 1;
        v21 = v36;
        v22 = v37;
        v23 = v38;
        return CondType__IsQuestGroupClear(v21, v22, v23, v24, 0LL);
      case 38:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v17 = 38;
        break;
      case 53:
        v27 = qrd;
        v26 = 0;
LABEL_85:
        clsQuestCheck__checkCondTypeItemGet(this, &is_release, v27, v26, method);
        return is_release;
      case 54:
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v17 = 54;
        break;
      default:
        if ( type == 58 )
        {
          v18 = qrd->fields.questId;
          v19 = qrd->fields.targetId;
          v20 = QuestReleaseEntity__getValueInt(qrd, 0LL);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v21 = v18;
          v22 = v19;
          v23 = v20;
          v24 = 0;
          return CondType__IsQuestGroupClear(v21, v22, v23, v24, 0LL);
        }
        if ( type != 64 )
        {
          if ( type != 92 )
            goto LABEL_20;
          return 0;
        }
        if ( clsQuestCheck__IsQuestClear(v10, qrd->fields.questId, 0, (const MethodInfo *)qinf) )
          return 1;
        targetId = qrd->fields.targetId;
        value = qrd->fields.value;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v17 = 64;
        break;
    }
  }
  return CondType__IsOpen(v17, targetId, value, 0, 0LL, 0LL);
}


bool __fastcall clsQuestCheck__IsReleasedLoginQuest(
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

  if ( (byte_4A57D09 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A57D09 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !loginQuestEnt || !Master_object )
    goto LABEL_24;
  p_fields = &this->fields;
  QuestReleaseMaster__getListByQuestID_39525884(Master_object, loginQuestEnt->fields.questId, &this->fields.qrs, 0LL);
  if ( !this->fields.qrs )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (QuestReleaseMaster_o *)NetworkManager__getTime(0LL);
  qrs = (System_Collections_Generic_List_object__o *)p_fields->qrs;
  if ( !p_fields->qrs )
LABEL_24:
    sub_1B8880C(Master_object, v6);
  v9 = (int64_t)Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    qrs,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v10 )
      break;
    if ( !v15.fields._current )
      sub_1B8880C(v10, v11);
    if ( HIDWORD(v15.fields._current[1].klass) == 12 )
    {
      if ( !LoginQuestEntity__IsEnablePeriod(loginQuestEnt, v9, 0LL) )
        goto LABEL_18;
    }
    else if ( !clsQuestCheck__IsQuestRelease_33488656(this, (QuestReleaseEntity_o *)v15.fields._current, -1, 0LL, v12) )
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
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v13 != 6;
}


bool __fastcall clsQuestCheck__IsReleasedQuest(clsQuestCheck_o *this, int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_QuestReleaseEntity__o *qrs; // x0
  const MethodInfo *v8; // x4
  int v9; // w19
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A57D08 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    byte_4A57D08 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v6);
  QuestReleaseMaster__getListByQuestID_39525884((QuestReleaseMaster_o *)Master_object, questId, &this->fields.qrs, 0LL);
  qrs = this->fields.qrs;
  if ( qrs )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      (System_Collections_Generic_List_object__o *)qrs,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
    {
      if ( !clsQuestCheck__IsQuestRelease_33488656(this, (QuestReleaseEntity_o *)v11.fields._current, -1, 0LL, v8) )
      {
        v9 = 5;
        goto LABEL_12;
      }
    }
    v9 = 6;
LABEL_12:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    LOBYTE(qrs) = v9 != 5;
  }
  return (char)qrs;
}


bool __fastcall clsQuestCheck__IsTapSkipQuestStart(
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

  if ( (byte_4A57D23 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Find_string___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1B885B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1B885B0(&System_Func_string__bool__TypeInfo);
    sub_1B885B0(&Method_clsQuestCheck___c__DisplayClass40_0__IsTapSkipQuestStart_b__0__);
    sub_1B885B0(&clsQuestCheck___c__DisplayClass40_0_TypeInfo);
    sub_1B885B0(&StringLiteral_22694/*"questStartEffectSkip"*/);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    sub_1B885B0(&clsQuestCheck_TypeInfo);
    byte_4A57D23 = 1;
  }
  v30 = 0LL;
  entity = 0LL;
  v10 = sub_1B887FC(clsQuestCheck___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_41;
  *(_QWORD *)(v10 + 16) = effectName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)effectName, v13, v14);
  if ( isMyRoomMaterial )
    return 0;
  if ( questPhase <= 1 )
    questPhase = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_41;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, questId, questPhase, 0LL) )
    goto LABEL_44;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_41;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_22694/*"questStartEffectSkip"*/, 0, 0LL);
  if ( !ScriptIntParam )
  {
LABEL_44:
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !Master_object )
      goto LABEL_41;
    Master_object = (QuestPhaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            &v30,
                                            questId,
                                            (const MethodInfo_311D988 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !v30 )
        goto LABEL_41;
      v16 = LODWORD(v30[2].monitor) - 1;
      if ( (unsigned int)v16 > 4 )
        ScriptIntParam = 0;
      else
        ScriptIntParam = dword_BEDDB8[v16];
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
  String = EncryptedPlayerPrefs__GetString(KEY_QUEST_START_EFFECT, 0LL);
  Master_object = (QuestPhaseMaster_o *)System_String__IsNullOrEmpty(String, 0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    goto LABEL_31;
  if ( !String )
LABEL_41:
    sub_1B8880C(Master_object, v12);
  v21 = System_String__Split(String, 0x2Fu, 0, 0LL);
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
    EncryptedPlayerPrefs__SetString(v29, v27, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
    v26 = 1;
    goto LABEL_37;
  }
  v22 = (System_Object_array *)v21;
  v23 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v10,
    Method_clsQuestCheck___c__DisplayClass40_0__IsTapSkipQuestStart_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             v22,
             (System_Func_T__bool__o *)v23,
             (const MethodInfo_2E6B89C *)Method_BasicHelper_Find_string___);
  v25 = System_String__Concat_61718292(
          String,
          (System_String_o *)StringLiteral_1123/*"/"*/,
          *(System_String_o **)(v10 + 16),
          0LL);
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


bool __fastcall clsQuestCheck__IsValidQuestRandomGroup(
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

  if ( (byte_4A57D06 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestRandomGroupMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57D06 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestRandomGroupMaster___);
  if ( !questInfo )
    goto LABEL_53;
  v6 = (QuestRandomGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_53;
  EntityFromQuestId = QuestRandomGroupMaster__GetEntityFromQuestId(
                        (QuestRandomGroupMaster_o *)Instance,
                        questInfo->fields.questId,
                        0LL);
  if ( EntityFromQuestId )
  {
    v8 = EntityFromQuestId;
    randomGroupId = EntityFromQuestId->fields.randomGroupId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__LoadQuestRandomGroupList(0LL);
    if ( !byte_4A57DBF )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DBF = 1;
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
            (const MethodInfo_3165074 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    cctor_finished = TerminalPramsManager_TypeInfo->_2.cctor_finished;
    if ( v11 )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A57DBF )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57DBF = 1;
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
               (const MethodInfo_3164DEC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsQuestClear_37596684(Item, -1, 0, 0LL) )
        goto LABEL_44;
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A57DBF )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57DBF = 1;
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
        (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
    RandomRangeQuest = QuestRandomGroupMaster__GetRandomRangeQuest(v6, randomGroupId, 0LL);
    if ( RandomRangeQuest )
    {
      v17 = RandomRangeQuest;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A57DBF )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57DBF = 1;
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
        (const MethodInfo_3164E74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      TerminalPramsManager__SaveQuestRandomGroupList(0LL);
LABEL_44:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A57DBF )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57DBF = 1;
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
                                     (const MethodInfo_3164DEC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) == v8->fields.questId;
        return (char)RandomRangeQuest;
      }
LABEL_53:
      sub_1B8880C(Instance, v5);
    }
  }
  else
  {
    LOBYTE(RandomRangeQuest) = 1;
  }
  return (char)RandomRangeQuest;
}


bool __fastcall clsQuestCheck__IsWarClear(clsQuestCheck_o *this, int32_t war_id, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4A57D0C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1B885B0(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57D0C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             war_id,
             (const MethodInfo_311D934 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = clsQuestCheck__IsQuestClear(this, HIDWORD(Entity[6].klass), 0, v8);
  return (char)Entity;
}


void __fastcall clsQuestCheck__PlayQuestStartAction(
        clsQuestCheck_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w20

  if ( (byte_4A57D22 & 1) == 0 )
  {
    sub_1B885B0(&ScriptManager_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57D22 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC3 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC3 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v4->static_fields->_WarId_k__BackingField;
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4A57DC0 = 1;
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
  void *Instance; // x0
  __int64 v12; // x1
  _QWORD *v13; // x19
  __int64 methodPtr_low; // x9
  __int64 v15; // x8
  TerminalPramsManager_c *v16; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w20
  BattleSetupInfo_o *v20; // x23
  Il2CppObject *v21; // x20
  clsQuestCheck_o *v22; // x0
  const MethodInfo *v23; // x1

  if ( (byte_4A57D25 & 1) == 0 )
  {
    sub_1B885B0(&BattleRootComponent_TypeInfo);
    sub_1B885B0(&BattleSetupInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57D25 = 1;
  }
  if ( result == 2 )
  {
    if ( clsQuestCheck__CheckQuestPlayable(this, qinf, endTime, boostId, *(const MethodInfo **)&boostId) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A57DC3 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57DC3 = 1;
      }
      v16 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
      }
      WarId_k__BackingField = v16->static_fields->_WarId_k__BackingField;
      if ( !byte_4A57DC0 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
        byte_4A57DC0 = 1;
      }
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = TerminalPramsManager_TypeInfo;
      }
      QuestId_k__BackingField = v16->static_fields->_QuestId_k__BackingField;
      if ( !byte_4A57DCB )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
        byte_4A57DCB = 1;
      }
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = TerminalPramsManager_TypeInfo;
      }
      PhaseCnt_k__BackingField = v16->static_fields->_PhaseCnt_k__BackingField;
      v20 = (BattleSetupInfo_o *)sub_1B887FC(BattleSetupInfo_TypeInfo);
      BattleSetupInfo___ctor(v20, 0LL);
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
                   0LL);
      v21 = (Il2CppObject *)Instance;
      if ( boostId )
      {
        if ( !Instance )
          goto LABEL_38;
        *((_DWORD *)Instance + 14) = boostId;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance
        || (*((_BYTE *)Instance + 148) = 1,
            (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__)) == 0LL)
        || (*((_DWORD *)Instance + 38) = 1,
            (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
      {
LABEL_38:
        sub_1B8880C(Instance, v12);
      }
      AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 35, 1, v21, 0LL);
    }
LABEL_36:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0LL);
      return;
    }
    goto LABEL_38;
  }
  if ( result )
    goto LABEL_36;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v13 = (_QWORD *)*((_QWORD *)Instance + 4);
  if ( !v13 )
    goto LABEL_38;
  methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*v13 + 304LL) >= (unsigned int)methodPtr_low
    && *(BattleRootComponent_c **)(*(_QWORD *)(*v13 + 200LL) + 8 * methodPtr_low - 8) == BattleRootComponent_TypeInfo )
  {
    Instance = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)Instance + 4), 0LL);
    if ( !Instance )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v15 = v13[10];
    if ( !v15 )
      goto LABEL_38;
    Instance = *(void **)(v15 + 496);
    if ( !Instance )
      goto LABEL_38;
    BattleResultComponent__EndResult((BattleResultComponent_o *)Instance, 0LL);
    goto LABEL_36;
  }
  sub_1B88ACC(*((_QWORD *)Instance + 4));
  clsQuestCheck___ctor(v22, v23);
}


void __fastcall clsQuestCheck__SaveEventQuestIdListPlayable(
        clsQuestCheck_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_c *v6; // x21
  TerminalPramsManager_c *v7; // x0
  ServantStatusBattleListViewItem_o *p_ClearEventQuestIds_k__BackingField; // x0
  const MethodInfo *v9; // x2
  System_Collections_Generic_IEnumerable_T__o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x19
  TerminalPramsManager_c *v14; // x0
  ServantStatusBattleListViewItem_o *v15; // x0

  if ( (byte_4A57D1E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_String_Join_int___);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_868/*","*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57D1E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v6 = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  if ( !byte_4A57DC1 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC1 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  p_ClearEventQuestIds_k__BackingField = (ServantStatusBattleListViewItem_o *)&v7->static_fields->_ClearEventQuestIds_k__BackingField;
  p_ClearEventQuestIds_k__BackingField->klass = v6;
  sub_1B88554(p_ClearEventQuestIds_k__BackingField, (int32_t)v6, (int32_t)method, v3);
  v10 = (System_Collections_Generic_IEnumerable_T__o *)clsQuestCheck__GetEventQuestIdListPlayable(this, eventId, v9);
  v13 = System_String__Join_int_(
          (System_String_o *)StringLiteral_868/*","*/,
          v10,
          (const MethodInfo_2F21A08 *)Method_System_String_Join_int___);
  if ( !byte_4A57DC1 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC1 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v15 = (ServantStatusBattleListViewItem_o *)&v14->static_fields->_ClearEventQuestIds_k__BackingField;
  v15->klass = (ServantStatusBattleListViewItem_c *)v13;
  sub_1B88554(v15, (int32_t)v13, v11, v12);
  TerminalPramsManager__ClearEventQuestIds_SaveData(0LL);
}


void __fastcall clsQuestCheck__checkCondTypeItemGet(
        clsQuestCheck_o *this,
        bool *is_release,
        QuestReleaseEntity_o *qrd,
        bool itemGet,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v9; // x1
  UserItemMaster_o *v10; // x22
  int32_t targetId; // w23
  int32_t num; // w22
  bool v13; // w8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A57D11 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57D11 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !qrd )
    goto LABEL_13;
  v10 = (UserItemMaster_o *)Instance;
  targetId = qrd->fields.targetId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v10 )
    goto LABEL_13;
  Instance = UserItemMaster__TryGetEntity(v10, &entity, Instance, targetId, 0LL);
  if ( (Instance & 1) == 0 )
  {
    v13 = 1;
    goto LABEL_12;
  }
  if ( !entity )
LABEL_13:
    sub_1B8880C(Instance, v9);
  num = entity->fields.num;
  v13 = num < QuestReleaseEntity__getValueInt(qrd, 0LL);
LABEL_12:
  *is_release = (v13 ^ itemGet) & 1;
}


bool __fastcall clsQuestCheck__isPlayQuestStartAction(clsQuestCheck_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalPramsManager_c *v3; // x0
  int32_t WarId_k__BackingField; // w20
  int32_t QuestId_k__BackingField; // w19

  if ( (byte_4A57D21 & 1) == 0 )
  {
    sub_1B885B0(&ScriptManager_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57D21 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC3 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC3 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v3->static_fields->_WarId_k__BackingField;
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4A57DC0 = 1;
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
  return ScriptManager__isPlayQuestStart(WarId_k__BackingField, QuestId_k__BackingField, 0LL);
}


bool __fastcall clsQuestCheck__mfCheck_IsQuestNew(clsQuestCheck_o *this, int32_t qid, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A57D12 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57D12 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
    sub_1B8880C(Instance, v5);
  }
  return 1;
}


int32_t __fastcall clsQuestCheck__mfGetQuestPhaseByQuestID(
        clsQuestCheck_o *this,
        int32_t qid,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A57D13 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57D13 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
    sub_1B8880C(Instance, v5);
  }
  return 0;
}


bool __fastcall clsQuestCheck__mfQuestReleaseCheckAlreadyClear(
        clsQuestCheck_o *this,
        int32_t qid,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  bool v8; // w8
  bool result; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A57D0F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57D0F = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               qid,
                               (const MethodInfo_311D988 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 1;
  if ( !entity )
LABEL_12:
    sub_1B8880C(Instance, v6);
  if ( (HIDWORD(entity[5].klass) | 4) != 5 )
    return 0;
  v8 = clsQuestCheck__IsQuestClear(this, qid, 0, v7);
  result = 0;
  if ( v8 )
    return 1;
  return result;
}


bool __fastcall clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(
        clsQuestCheck_o *this,
        int32_t questId,
        QuestReleaseEntity_o **questReleaseNG,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x2
  int64_t Master_object; // x0
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
  int32_t v24; // w3
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
  int32_t v40; // w3
  Il2CppObject *v41; // x23
  const MethodInfo *v42; // x4
  QuestReleaseEntity_o *current; // x22
  _BOOL8 HasStatus; // x0
  __int64 v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  int v48; // w19
  int32_t klass; // w24
  System_Collections_Generic_IEnumerable_T__o *v50; // x25
  System_Collections_Generic_List_object__o *v51; // x24
  const MethodInfo *v52; // x2
  BalanceConfig_c *v53; // x0
  const MethodInfo *v54; // x2
  BalanceConfig_c *v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *v60; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF
  UserQuestEntity_o *v62; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_4A57D05 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_BasicHelper_Any_QuestReleaseEntity___);
    sub_1B885B0(&System_Comparison_QuestReleaseEntity__TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1B885B0(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___76041400);
    sub_1B885B0(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__);
    sub_1B885B0(&Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__);
    sub_1B885B0(&clsQuestCheck___c_TypeInfo);
    byte_4A57D05 = 1;
  }
  v60 = 0LL;
  entity = 0LL;
  memset(&v59, 0, sizeof(v59));
  *questReleaseNG = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)questReleaseNG, 0, (int32_t)questReleaseNG, (int32_t)questInfo);
  if ( clsQuestCheck__mfQuestReleaseCheckAlreadyClear(this, questId, v9) )
    return 0;
  v62 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !questInfo || !Master_object )
    goto LABEL_98;
  IsShop = DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             questInfo->fields.warId,
             (const MethodInfo_311D988 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
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
      v14 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = NetworkManager__get_UserId(0LL);
      if ( !v14 )
        goto LABEL_98;
      IsShop = UserQuestMaster__TryGetEntity((UserQuestMaster_o *)v14, &v62, Master_object, questId, 0LL);
      if ( IsShop )
      {
        Master_object = (int64_t)v62;
        if ( !v62 )
          goto LABEL_98;
        IsShop = UserQuestEntity__IsNotExpired(v62, 0LL);
        if ( IsShop )
          return 1;
      }
    }
  }
  if ( !clsQuestCheck__IsValidQuestRandomGroup((clsQuestCheck_o *)IsShop, questInfo, v13) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !Master_object )
    goto LABEL_98;
  p_fields = &this->fields;
  QuestReleaseMaster__getListByQuestID_39525884((QuestReleaseMaster_o *)Master_object, questId, &this->fields.qrs, 0LL);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !entity || !Master_object )
    goto LABEL_98;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &v60,
         (int32_t)entity[6].klass,
         (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Master_object = (int64_t)v60;
    if ( !v60 )
      goto LABEL_98;
    if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v60, 0LL) )
    {
      Master_object = (int64_t)v60;
      if ( !v60 )
        goto LABEL_98;
      UseDiceSpotId = EventDetailEntity__GetUseDiceSpotId((EventDetailEntity_o *)v60, 0LL);
      if ( UseDiceSpotId == MapControl_QuestInfo__GetSpotID(questInfo, 0LL)
        && MapControl_QuestInfo__GetQuestType(questInfo, 0LL) == 1 )
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
          _9__5_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_QuestReleaseEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__5_0,
            v21,
            Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_0__,
            0LL);
          static_fields = clsQuestCheck___c_TypeInfo->static_fields;
          static_fields->__9__5_0 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__5_0;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v23, v24);
        }
        if ( !BasicHelper__Any_object_(
                qrs,
                (System_Func_T__bool__o *)_9__5_0,
                (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_QuestReleaseEntity___) )
        {
          Master_object = (int64_t)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Master_object = (int64_t)BalanceConfig_TypeInfo;
          }
          v25 = *(struct BalanceConfig_StaticFields **)(Master_object + 184);
          if ( v25->EventBoardGameNextBoardQuestId != questId )
          {
            if ( !*(_DWORD *)(Master_object + 224) )
            {
              j_il2cpp_runtime_class_init_0(Master_object);
              v25 = BalanceConfig_TypeInfo->static_fields;
            }
            if ( v25->EventBoardGameNextRoundQuestId != questId )
            {
              if ( !entity )
                goto LABEL_98;
              klass = (int32_t)entity[6].klass;
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              if ( CondType__IsUserEventStatus(klass, 7, 0LL) )
                return 0;
              v50 = (System_Collections_Generic_IEnumerable_T__o *)p_fields->qrs;
              v51 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor_55562536(
                v51,
                v50,
                (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor___76041400);
              v53 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v53 = BalanceConfig_TypeInfo;
              }
              if ( clsQuestCheck__CheckQuestPlayableNow(this, v53->static_fields->EventBoardGameNextBoardQuestId, v52) )
                return 0;
              v55 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v55 = BalanceConfig_TypeInfo;
              }
              if ( clsQuestCheck__CheckQuestPlayableNow(this, v55->static_fields->EventBoardGameNextRoundQuestId, v54) )
                return 0;
              p_fields->qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v51;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v51, v56, v57);
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
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventQuestCooltimeMaster___);
    if ( !questInfo->fields._WarInfo_k__BackingField )
      goto LABEL_98;
    v27 = (UserEventQuestCooltimeMaster_o *)Master_object;
    Master_object = MapControl_WarInfo__GetEventId(questInfo->fields._WarInfo_k__BackingField, 0LL);
    if ( !v27 )
      goto LABEL_98;
    v28 = UserEventQuestCooltimeMaster__getEntity(v27, Master_object, questInfo->fields.questId, 1, 0LL);
    if ( v28 )
    {
      v29 = v28;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      clearedAt = v29->fields.clearedAt;
      v32 = Time;
      Master_object = (int64_t)UserEventQuestCooltimeEntity__GetMasterEntity(v29, 0LL);
      if ( !Master_object )
        goto LABEL_98;
      if ( v32 < clearedAt + *(int *)(Master_object + 28) )
        return 0;
    }
  }
  if ( !p_fields->qrs )
    return 0;
  Master_object = (int64_t)this->fields.cQuestReleaseListP;
  if ( !Master_object )
    goto LABEL_98;
  v33 = *(_DWORD *)(Master_object + 24);
  v34 = *(_DWORD *)(Master_object + 28) + 1;
  *(_DWORD *)(Master_object + 24) = 0;
  *(_DWORD *)(Master_object + 28) = v34;
  if ( v33 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(Master_object + 16), 0, v33, 0LL);
    Master_object = (int64_t)this->fields.cQuestReleaseListP;
    if ( !Master_object )
      goto LABEL_98;
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Master_object,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.qrs,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_QuestReleaseEntity__AddRange__);
  cQuestReleaseListP = this->fields.cQuestReleaseListP;
  Master_object = (int64_t)clsQuestCheck___c_TypeInfo;
  if ( !clsQuestCheck___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clsQuestCheck___c_TypeInfo);
    Master_object = (int64_t)clsQuestCheck___c_TypeInfo;
  }
  v36 = *(System_Comparison_T__o **)(*(_QWORD *)(Master_object + 184) + 16LL);
  if ( !v36 )
  {
    if ( !*(_DWORD *)(Master_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = (int64_t)clsQuestCheck___c_TypeInfo;
    }
    v37 = **(Il2CppObject ***)(Master_object + 184);
    v36 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_QuestReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(
      v36,
      v37,
      Method_clsQuestCheck___c__mfQuestReleaseCheckGetEntityByQuestID_b__5_1__,
      0LL);
    v38 = clsQuestCheck___c_TypeInfo->static_fields;
    v38->__9__5_1 = (struct System_Comparison_QuestReleaseEntity__o *)v36;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v38->__9__5_1, (int32_t)v36, v39, v40);
  }
  if ( !cQuestReleaseListP )
    goto LABEL_98;
  System_Collections_Generic_List_object___Sort_55571192(
    (System_Collections_Generic_List_object__o *)cQuestReleaseListP,
    v36,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  if ( v62 )
    goto LABEL_74;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v41 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = NetworkManager__get_UserId(0LL);
  if ( !v41 )
LABEL_98:
    sub_1B8880C(Master_object, v11);
  UserQuestMaster__TryGetEntity((UserQuestMaster_o *)v41, &v62, Master_object, questId, 0LL);
LABEL_74:
  Master_object = (int64_t)this->fields.cQuestReleaseListP;
  if ( !Master_object )
    goto LABEL_98;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v59 = v58;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v59,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
  {
    current = (QuestReleaseEntity_o *)v59.fields._current;
    if ( !v62 )
      goto LABEL_81;
    HasStatus = UserQuestEntity__HasStatus(v62, 8, 0LL);
    if ( !HasStatus )
      goto LABEL_81;
    if ( !current )
      sub_1B8880C(HasStatus, v45);
    if ( current->fields.type != 12 )
    {
LABEL_81:
      if ( !clsQuestCheck__IsQuestRelease_33488656(this, current, -1, questInfo, v42) )
      {
        *questReleaseNG = current;
        sub_1B88554((ServantStatusBattleListViewItem_o *)questReleaseNG, (int32_t)current, v46, v47);
        v48 = 17;
        goto LABEL_84;
      }
    }
  }
  v48 = 18;
LABEL_84:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v59,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v48 != 17;
}


void __fastcall clsQuestCheck___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A57D28 & 1) == 0 )
  {
    sub_1B885B0(&clsQuestCheck___c_TypeInfo);
    byte_4A57D28 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(clsQuestCheck___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  clsQuestCheck___c_TypeInfo->static_fields->__9 = (struct clsQuestCheck___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)clsQuestCheck___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall clsQuestCheck___c___ctor(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_0(
        clsQuestCheck___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4A57D2A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_clsQuestCheck___c__DisplayClass41_1__CheckQuestPlayable_b__5__);
    sub_1B885B0(&clsQuestCheck___c__DisplayClass41_1_TypeInfo);
    byte_4A57D2A = 1;
  }
  v4 = sub_1B887FC(clsQuestCheck___c__DisplayClass41_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_clsQuestCheck___c__DisplayClass41_1__CheckQuestPlayable_b__5__,
          0LL),
        !Instance) )
  {
    sub_1B8880C(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_1(
        clsQuestCheck___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4A57D2B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_clsQuestCheck___c__DisplayClass41_2__CheckQuestPlayable_b__6__);
    sub_1B885B0(&clsQuestCheck___c__DisplayClass41_2_TypeInfo);
    byte_4A57D2B = 1;
  }
  v4 = sub_1B887FC(clsQuestCheck___c__DisplayClass41_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_clsQuestCheck___c__DisplayClass41_2__CheckQuestPlayable_b__6__,
          0LL),
        !Instance) )
  {
    sub_1B8880C(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_11(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A57D2D & 1) == 0 )
  {
    sub_1B885B0(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A57D2D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2E69590 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_13(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A57D2E & 1) == 0 )
  {
    sub_1B885B0(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A57D2E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2E69590 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_2(
        clsQuestCheck___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A57D2F & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A57D2F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_3(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A57D29 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A57D29 = 1;
  }
  TopLoginRequest__ResetAccesTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_4(clsQuestCheck___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall clsQuestCheck___c___CheckQuestPlayable_b__41_7(
        clsQuestCheck___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4A57D2C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_clsQuestCheck___c__DisplayClass41_3__CheckQuestPlayable_b__8__);
    sub_1B885B0(&clsQuestCheck___c__DisplayClass41_3_TypeInfo);
    byte_4A57D2C = 1;
  }
  v4 = sub_1B887FC(clsQuestCheck___c__DisplayClass41_3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_clsQuestCheck___c__DisplayClass41_3__CheckQuestPlayable_b__8__,
          0LL),
        !Instance) )
  {
    sub_1B8880C(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0LL);
}


bool __fastcall clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_0(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B8880C(this, 0LL);
  return n->fields.type == 118;
}


int32_t __fastcall clsQuestCheck___c___mfQuestReleaseCheckGetEntityByQuestID_b__5_1(
        clsQuestCheck___c_o *this,
        QuestReleaseEntity_o *a,
        QuestReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B8880C(this, a);
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
    sub_1B8880C(this, n);
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
    sub_1B8880C(this, n);
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
  const MethodInfo *v3; // x5

  if ( !this->fields.__4__this )
    sub_1B8880C(this, result);
  clsQuestCheck__RecoverItemListDialogCallback(
    this->fields.__4__this,
    this->fields.questInfo,
    this->fields.srcEndTime,
    result,
    this->fields.boostId,
    v3);
}


void __fastcall clsQuestCheck___c__DisplayClass41_0___CheckQuestPlayable_b__12(
        clsQuestCheck___c__DisplayClass41_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( !this->fields.__4__this )
    sub_1B8880C(this, result);
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
    sub_1B8880C(this, result);
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


void __fastcall clsQuestCheck___c__DisplayClass41_1___CheckQuestPlayable_b__5(
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

  if ( (byte_4A57D30 & 1) == 0 )
  {
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&StringLiteral_12586/*"SellServant"*/);
    sub_1B885B0(&StringLiteral_12623/*"ServantCombine"*/);
    byte_4A57D30 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38664432(v5, (System_String_o *)StringLiteral_12586/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1B8880C(v6, v7);
    case 1:
      v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v6 )
      {
        v8 = 71;
        v9 = 0LL;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38664344(v5, (System_String_o *)StringLiteral_12623/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v8 = 32;
LABEL_10:
        v6 = Instance;
        v9 = (Il2CppObject *)v5;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v6, v8, 1, v9, 0LL);
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
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1

  if ( (byte_4A57D31 & 1) == 0 )
  {
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&StringLiteral_12627/*"ServantEquipList"*/);
    sub_1B885B0(&StringLiteral_12586/*"SellServant"*/);
    sub_1B885B0(&StringLiteral_12626/*"ServantEQCombine"*/);
    byte_4A57D31 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38664432(v5, (System_String_o *)StringLiteral_12586/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_12;
      }
LABEL_14:
      sub_1B8880C(v6, v7);
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38664344(v5, (System_String_o *)StringLiteral_12627/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v8 = 71;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38664344(v5, (System_String_o *)StringLiteral_12626/*"ServantEQCombine"*/, 0LL);
      if ( Instance )
      {
        v8 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v8, 1, (Il2CppObject *)v5, 0LL);
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
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A57D32 & 1) == 0 )
  {
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&StringLiteral_12586/*"SellServant"*/);
    byte_4A57D32 = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v4 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_38664432(v4, (System_String_o *)StringLiteral_12586/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_1B8880C(v5, v6);
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v4, 0LL);
  }
}