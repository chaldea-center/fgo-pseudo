void __fastcall BattleScriptRootComponent___ctor(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall BattleScriptRootComponent__ChapterStart(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w19
  System_Action_o *v10; // x21
  BattleScriptRootComponent_TalkScriptInfo_o *v11; // x0
  int32_t JumpLine; // w20

  if ( (byte_40F7515 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_BattleScriptRootComponent__ChapterStart_b__39_0__, v6);
    sub_B16FFC(&ScriptManager_TypeInfo, v7);
    byte_40F7515 = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        v10 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4),
        System_Action___ctor(v10, (Il2CppObject *)this, Method_BattleScriptRootComponent__ChapterStart_b__39_0__, 0LL),
        (v11 = this->fields.talkInfo) == 0LL) )
  {
    sub_B170D4();
  }
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(v11, 0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayChapterStartNotCollection(wId, v10, JumpLine, 0LL);
}


void __fastcall BattleScriptRootComponent__ChapterStartEffect(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w20
  ScriptManager_CallbackFunc_o *v10; // x21

  if ( (byte_40F7517 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleScriptRootComponent__ChapterStartEffect_b__41_0__, method);
    sub_B16FFC(&ScriptManager_CallbackFunc_TypeInfo, v6);
    sub_B16FFC(&ScriptManager_TypeInfo, v7);
    byte_40F7517 = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_B170D4();
  wId = talkInfo->fields.wId;
  v10 = (ScriptManager_CallbackFunc_o *)sub_B170CC(ScriptManager_CallbackFunc_TypeInfo, method, v2, v3, v4);
  ScriptManager_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent__ChapterStartEffect_b__41_0__,
    0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayChapterStartEffect(wId, v10, 0, 0LL);
}


void __fastcall BattleScriptRootComponent__ChapterStartEffectQuest(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w20
  ScriptManager_CallbackFunc_o *v10; // x21

  if ( (byte_40F7518 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleScriptRootComponent__ChapterStartEffectQuest_b__42_0__, method);
    sub_B16FFC(&ScriptManager_CallbackFunc_TypeInfo, v6);
    sub_B16FFC(&ScriptManager_TypeInfo, v7);
    byte_40F7518 = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_B170D4();
  wId = talkInfo->fields.wId;
  v10 = (ScriptManager_CallbackFunc_o *)sub_B170CC(ScriptManager_CallbackFunc_TypeInfo, method, v2, v3, v4);
  ScriptManager_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent__ChapterStartEffectQuest_b__42_0__,
    0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayChapterStartEffect(wId, v10, 0, 0LL);
}


void __fastcall BattleScriptRootComponent__ChapterStartQuest(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w19
  int32_t qId; // w20
  System_Action_o *v11; // x22
  BattleScriptRootComponent_TalkScriptInfo_o *v12; // x0
  int32_t JumpLine; // w21

  if ( (byte_40F7516 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_BattleScriptRootComponent__ChapterStartQuest_b__40_0__, v6);
    sub_B16FFC(&ScriptManager_TypeInfo, v7);
    byte_40F7516 = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        qId = talkInfo->fields.qId,
        v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4),
        System_Action___ctor(
          v11,
          (Il2CppObject *)this,
          Method_BattleScriptRootComponent__ChapterStartQuest_b__40_0__,
          0LL),
        (v12 = this->fields.talkInfo) == 0LL) )
  {
    sub_B170D4();
  }
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(v12, 0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayChapterStartQuestNotCollection(wId, qId, v11, JumpLine, 0LL);
}


void __fastcall BattleScriptRootComponent__ChkCondHavingBranchQuest(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  struct BattleSetupInfo_o *bSetupInfo; // x9
  int32_t qId; // w20
  WebViewManager_o *Instance; // x0
  QuestPhaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v10; // x8
  WebViewManager_o *v11; // x0
  WarQuestSelectionMaster_o *v12; // x0
  CommonReleaseMaster_o *v13; // x20
  System_Int32_array *CondHavingIds; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x8
  System_Int32_array *v18; // x21
  unsigned __int64 v19; // x22
  __int64 v20; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v21; // x8
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F7500 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F7500 = 1;
  }
  entity = 0LL;
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_28;
  bSetupInfo = talkInfo->fields.bSetupInfo;
  if ( !bSetupInfo || (qId = bSetupInfo->fields.originQuestId, qId <= 0) )
    qId = talkInfo->fields.qId;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  v10 = this->fields.talkInfo;
  if ( !v10 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_28;
  if ( !QuestPhaseMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, qId, v10->fields.pId, 0LL) )
    return;
  v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v11 )
    goto LABEL_28;
  v12 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v11,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !entity )
    goto LABEL_28;
  v13 = (CommonReleaseMaster_o *)v12;
  CondHavingIds = QuestPhaseEntity__GetCondHavingIds(entity, 0LL);
  if ( !CondHavingIds )
    goto LABEL_28;
  v17 = *(_QWORD *)&CondHavingIds->max_length;
  v18 = CondHavingIds;
  if ( (int)v17 < 1 )
    return;
  v19 = 0LL;
  while ( 1 )
  {
    if ( v19 >= (unsigned int)v17 )
      goto LABEL_29;
    if ( !v13 )
      goto LABEL_28;
    CondHavingIds = (System_Int32_array *)CommonReleaseMaster__IsOpen(v13, v18->m_Items[v19 + 1], 0LL, 0, 0LL);
    if ( ((unsigned __int8)CondHavingIds & 1) == 0 )
    {
      if ( !entity )
        goto LABEL_28;
      CondHavingIds = QuestPhaseEntity__GetNotHavingQuests(entity, 0LL);
      if ( !CondHavingIds )
        goto LABEL_28;
      v20 = *(_QWORD *)&CondHavingIds->max_length;
      if ( (__int64)v19 < (int)v20 )
        break;
    }
    LODWORD(v17) = v18->max_length;
    if ( (__int64)++v19 >= (int)v17 )
      return;
  }
  if ( (unsigned int)v19 >= (unsigned int)v20 )
  {
LABEL_29:
    sub_B17100(CondHavingIds, v15, v16);
    sub_B170A0();
  }
  v21 = this->fields.talkInfo;
  if ( !v21 )
LABEL_28:
    sub_B170D4();
  v21->fields.qId = CondHavingIds->m_Items[v19 + 1];
}


void __fastcall BattleScriptRootComponent__EndBeforeBattleScript(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _BOOL8 IsBadEndRoute; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x3
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t talkType; // w9
  WebViewManager_o *v11; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *v14; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v15; // x8
  BattleSetupInfo_o *bSetupInfo; // x20
  AvalonSceneManager_o *Instance; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v18; // x8
  Il2CppObject *v19; // x3
  int32_t v20; // w1
  TerminalPramsManager_c *v21; // x0
  __int64 v22; // x1
  TerminalPramsManager_c *v23; // x0
  Il2CppObject *WarBoardData_k__BackingField; // x20
  struct WarBoardDataEntity_o **p_WarBoardData_k__BackingField; // x0

  if ( (byte_40F750C & 1) == 0 )
  {
    sub_B16FFC(&ScriptManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v4);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
    byte_40F750C = 1;
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__DeleteTalkResumeInfo(0LL);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_57;
  talkType = talkInfo->fields.talkType;
  switch ( talkType )
  {
    case 3:
      bSetupInfo = talkInfo->fields.bSetupInfo;
      if ( bSetupInfo )
      {
        if ( bSetupInfo->fields.isScriptBeforePartySelect )
        {
          if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ScriptManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
          }
          bSetupInfo->fields.selectedBranchIdx = ScriptManager__GetSelectBranchIndex(0LL);
          Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          v18 = this->fields.talkInfo;
          if ( !v18 || !Instance )
            goto LABEL_57;
          v19 = (Il2CppObject *)v18->fields.bSetupInfo;
          v20 = 35;
        }
        else
        {
          if ( !bSetupInfo->fields.isScriptBeforeWarBoard )
          {
            BattleScriptRootComponent__GoForBattle(bSetupInfo, v7);
            return;
          }
          if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ScriptManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
          }
          bSetupInfo->fields.selectedBranchIdx = ScriptManager__GetSelectBranchIndex(0LL);
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_40F7590 )
          {
            sub_B16FFC(&TerminalPramsManager_TypeInfo, v22);
            byte_40F7590 = 1;
          }
          v23 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v23 = TerminalPramsManager_TypeInfo;
          }
          WarBoardData_k__BackingField = (Il2CppObject *)v23->static_fields->_WarBoardData_k__BackingField;
          if ( !byte_40F609C )
          {
            sub_B16FFC(&TerminalPramsManager_TypeInfo, v22);
            v23 = TerminalPramsManager_TypeInfo;
            byte_40F609C = 1;
          }
          if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v23);
            v23 = TerminalPramsManager_TypeInfo;
          }
          p_WarBoardData_k__BackingField = &v23->static_fields->_WarBoardData_k__BackingField;
          *p_WarBoardData_k__BackingField = 0LL;
          sub_B16F98(p_WarBoardData_k__BackingField, 0LL);
          Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !Instance )
            goto LABEL_57;
          v20 = 80;
          v19 = WarBoardData_k__BackingField;
        }
      }
      else
      {
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_40F604D )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, v7);
          byte_40F604D = 1;
        }
        v21 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v21 = TerminalPramsManager_TypeInfo;
        }
        v21->static_fields->_IsAutoResume_k__BackingField = 1;
        Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !Instance )
          goto LABEL_57;
        v20 = 34;
        v19 = 0LL;
      }
      AvalonSceneManager__transitionSceneRefresh(Instance, v20, 1, v19, 0, 0LL);
      return;
    case 5:
      v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( v11 )
      {
        IsBadEndRoute = ScriptManager__IsBadEndRoute((ScriptManager_o *)v11, 0LL);
        if ( !IsBadEndRoute )
        {
          BattleScriptRootComponent__RequestBattleSecnarioForNoneBattleQuest(this, 0, v12);
          return;
        }
        talkInfo = this->fields.talkInfo;
        if ( talkInfo )
          goto LABEL_14;
      }
LABEL_57:
      sub_B170D4();
    case 6:
LABEL_14:
      BattleScriptRootComponent__SavePlayedNotMeetsScript(
        (BattleScriptRootComponent_o *)IsBadEndRoute,
        talkInfo->fields.qId,
        talkInfo->fields.pId,
        v8);
      v14 = this->fields.talkInfo;
      if ( v14 )
      {
        v14->fields.talkPhase = 10;
        v15 = this->fields.talkInfo;
        if ( v15 )
        {
          BattleScriptRootComponent__ProcessBattleScripts(this, v15->fields.talkPhase, v13);
          return;
        }
      }
      goto LABEL_57;
  }
}


void __fastcall BattleScriptRootComponent__EndChapterStart(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t qId; // w21
  TerminalPramsManager_c *v8; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v9; // x8
  int32_t pId; // w19
  int v11; // w19
  TerminalPramsManager_c *v12; // x0
  int v13; // w19
  AvalonSceneManager_o *Instance; // x0
  __int64 v15; // x1
  AvalonSceneManager_o *v16; // x0
  TerminalPramsManager_c *v17; // x0
  AvalonSceneManager_o *v18; // x0

  if ( (byte_40F7519 & 1) == 0 )
  {
    sub_B16FFC(&ScriptManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v4);
    byte_40F7519 = 1;
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__DeleteTalkResumeInfo(0LL);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_38;
  qId = talkInfo->fields.qId;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6048 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
    byte_40F6048 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_QuestId_k__BackingField = qId;
  v9 = this->fields.talkInfo;
  if ( !v9 )
    goto LABEL_38;
  pId = v9->fields.pId;
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v8);
  v11 = pId - 1;
  if ( !byte_40F6049 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
    byte_40F6049 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  v13 = v11 & ~(v11 >> 31);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->_PhaseCnt_k__BackingField = v13;
  TerminalPramsManager__SaveQuestInfo_SaveData(0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  if ( AvalonSceneManager__IsStackScene(Instance, 0LL) )
  {
    v16 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( v16 )
    {
      AvalonSceneManager__popSceneRefresh(v16, 2, 0LL, 0LL);
      return;
    }
LABEL_38:
    sub_B170D4();
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F604D )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v15);
    byte_40F604D = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v17->static_fields->_IsAutoResume_k__BackingField = 1;
  v18 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v18 )
    goto LABEL_38;
  AvalonSceneManager__transitionSceneRefresh(v18, 34, 2, 0LL, 0, 0LL);
}


void __fastcall BattleScriptRootComponent__EndRequestBattleScenario(
        BattleScriptRootComponent_o *this,
        System_String_o *jsonstr,
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleScriptRootComponent_TalkScriptInfo_o *v28; // x21
  Il2CppObject *v29; // x21
  BattleResultComponent_resultData_array *v30; // x21
  Il2CppObject *v31; // x0
  UserPresentBoxWindow_resData_array *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  UserPresentBoxWindow_resData_o *v35; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Collections_Generic_List_int__o *v41; // x20
  BattleScriptRootComponent___c_c *v42; // x8
  struct BattleScriptRootComponent___c_StaticFields *static_fields; // x9
  System_Converter_int__string__o *_9__37_1; // x21
  Il2CppObject *v45; // x22
  struct BattleScriptRootComponent___c_StaticFields *v46; // x0
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v47; // x0
  System_String_array *v48; // x0
  System_String_o *v49; // x0
  System_Collections_Generic_IEnumerable_TSource__o *getSvts; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  System_Collections_Generic_List_int__o *v55; // x20
  BattleScriptRootComponent___c_c *v56; // x8
  struct BattleScriptRootComponent___c_StaticFields *v57; // x9
  System_Converter_int__string__o *_9__37_2; // x21
  Il2CppObject *v59; // x22
  struct BattleScriptRootComponent___c_StaticFields *v60; // x0
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v61; // x0
  System_String_array *v62; // x0
  System_String_o *v63; // x0
  WebViewManager_o *Instance; // x0
  __int64 v65; // x1
  QuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  TerminalPramsManager_c *v67; // x0
  QuestEntity_o *QuestEntity; // x0
  const MethodInfo *v69; // x2
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  QuestTree_o *v74; // x20
  TerminalPramsManager_c *v75; // x0
  int32_t WarId_k__BackingField; // w21
  System_Action_o *v77; // x22
  System_Collections_IEnumerator_o *v78; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *v79; // x8

  if ( (byte_40F7513 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, jsonstr);
    sub_B16FFC(&Method_BattleScriptRootComponent__EndRequestBattleScenario_b__37_0__, v5);
    sub_B16FFC(&Method_System_Converter_int__string___ctor__, v6);
    sub_B16FFC(&System_Converter_int__string__TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_int___, v9);
    sub_B16FFC(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___, v10);
    sub_B16FFC(&JsonManager_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ConvertAll_string___, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ToArray__, v13);
    sub_B16FFC(&ScriptManager_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v16);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v17);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v18);
    sub_B16FFC(&Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__37_1__, v19);
    sub_B16FFC(&Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__37_2__, v20);
    sub_B16FFC(&BattleScriptRootComponent___c_TypeInfo, v21);
    sub_B16FFC(&StringLiteral_18817, v22);
    sub_B16FFC(&StringLiteral_21719, v23);
    sub_B16FFC(&StringLiteral_698, v24);
    sub_B16FFC(&StringLiteral_15571, v25);
    sub_B16FFC(&StringLiteral_15807, v26);
    byte_40F7513 = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_67;
  talkInfo->fields.talkPhase = 6;
  v28 = this->fields.talkInfo;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__SaveTalkResumeInfo(v28, 0LL);
  ScriptManager__ClearSelectRouteArray(0LL);
  v29 = (Il2CppObject *)System_String__Concat_43746016(
                          (System_String_o *)StringLiteral_15571,
                          jsonstr,
                          (System_String_o *)StringLiteral_15807,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v30 = (BattleResultComponent_resultData_array *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                    v29,
                                                    (const MethodInfo_19D67B8 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__ReceiveQuestEndResultInfo(v30, 1, 0LL);
  v31 = (Il2CppObject *)System_String__Concat_43746016(
                          (System_String_o *)StringLiteral_15571,
                          jsonstr,
                          (System_String_o *)StringLiteral_15807,
                          0LL);
  v32 = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
          v31,
          (const MethodInfo_19D67B8 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  if ( !v32 )
    goto LABEL_67;
  if ( !v32->max_length )
  {
    sub_B17100(v32, v33, v34);
    sub_B170A0();
  }
  v35 = v32->m_Items[0];
  if ( !v35 )
    goto LABEL_67;
  v36 = *(System_Collections_Generic_IEnumerable_TSource__o **)&v35[5].fields.overflowType;
  if ( v36 )
  {
    v41 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                      v36,
                                                      (const MethodInfo_19C78D8 *)Method_System_Linq_Enumerable_ToList_int___);
    v42 = BattleScriptRootComponent___c_TypeInfo;
    if ( (BYTE3(BattleScriptRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleScriptRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleScriptRootComponent___c_TypeInfo);
      v42 = BattleScriptRootComponent___c_TypeInfo;
    }
    static_fields = v42->static_fields;
    _9__37_1 = static_fields->__9__37_1;
    if ( !_9__37_1 )
    {
      if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        static_fields = BattleScriptRootComponent___c_TypeInfo->static_fields;
      }
      v45 = (Il2CppObject *)static_fields->__9;
      _9__37_1 = (System_Converter_int__string__o *)sub_B170CC(
                                                      System_Converter_int__string__TypeInfo,
                                                      v37,
                                                      v38,
                                                      v39,
                                                      v40);
      System_Converter_int__string____ctor(
        _9__37_1,
        v45,
        Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__37_1__,
        (const MethodInfo_266AF4C *)Method_System_Converter_int__string___ctor__);
      v46 = BattleScriptRootComponent___c_TypeInfo->static_fields;
      v46->__9__37_1 = _9__37_1;
      sub_B16F98(&v46->__9__37_1, _9__37_1);
    }
    if ( !v41 )
      goto LABEL_67;
    v47 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_int___ConvertAll_string_(
                                                                          v41,
                                                                          (System_Converter_T__TOutput__o *)_9__37_1,
                                                                          (const MethodInfo_18FDBA8 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !v47 )
      goto LABEL_67;
    v48 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   v47,
                                   (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
    v49 = System_String__Join((System_String_o *)StringLiteral_698, v48, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_18817, v49, 0LL);
  }
  getSvts = (System_Collections_Generic_IEnumerable_TSource__o *)v35[5].fields.getSvts;
  if ( getSvts )
  {
    v55 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                      getSvts,
                                                      (const MethodInfo_19C78D8 *)Method_System_Linq_Enumerable_ToList_int___);
    v56 = BattleScriptRootComponent___c_TypeInfo;
    if ( (BYTE3(BattleScriptRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleScriptRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleScriptRootComponent___c_TypeInfo);
      v56 = BattleScriptRootComponent___c_TypeInfo;
    }
    v57 = v56->static_fields;
    _9__37_2 = v57->__9__37_2;
    if ( !_9__37_2 )
    {
      if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v56);
        v57 = BattleScriptRootComponent___c_TypeInfo->static_fields;
      }
      v59 = (Il2CppObject *)v57->__9;
      _9__37_2 = (System_Converter_int__string__o *)sub_B170CC(
                                                      System_Converter_int__string__TypeInfo,
                                                      v51,
                                                      v52,
                                                      v53,
                                                      v54);
      System_Converter_int__string____ctor(
        _9__37_2,
        v59,
        Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__37_2__,
        (const MethodInfo_266AF4C *)Method_System_Converter_int__string___ctor__);
      v60 = BattleScriptRootComponent___c_TypeInfo->static_fields;
      v60->__9__37_2 = _9__37_2;
      sub_B16F98(&v60->__9__37_2, _9__37_2);
    }
    if ( !v55 )
      goto LABEL_67;
    v61 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_int___ConvertAll_string_(
                                                                          v55,
                                                                          (System_Converter_T__TOutput__o *)_9__37_2,
                                                                          (const MethodInfo_18FDBA8 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !v61 )
      goto LABEL_67;
    v62 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   v61,
                                   (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
    v63 = System_String__Join((System_String_o *)StringLiteral_698, v62, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_21719, v63, 0LL);
  }
  UnityEngine_PlayerPrefs__Save(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  MasterData_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v65);
    byte_40F6057 = 1;
  }
  v67 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_67;
  QuestEntity = QuestMaster__getQuestEntity(
                  MasterData_WarQuestSelectionMaster,
                  v67->static_fields->_QuestId_k__BackingField,
                  0LL);
  if ( QuestEntity && QuestEntity__HasFlag(QuestEntity, 0x10000000000000LL, 0LL) )
  {
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    v74 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6044 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v70);
      byte_40F6044 = 1;
    }
    v75 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v75 = TerminalPramsManager_TypeInfo;
    }
    WarId_k__BackingField = v75->static_fields->_WarId_k__BackingField;
    v77 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v70, v71, v72, v73);
    System_Action___ctor(
      v77,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent__EndRequestBattleScenario_b__37_0__,
      0LL);
    if ( v74 )
    {
      v78 = QuestTree__mfBaseTreeUpdateWithOpenCheck(v74, WarId_k__BackingField, v77, 0LL);
      UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v78, 0LL);
      return;
    }
LABEL_67:
    sub_B170D4();
  }
  v79 = this->fields.talkInfo;
  if ( !v79 )
    goto LABEL_67;
  BattleScriptRootComponent__ProcessBattleScripts(this, v79->fields.talkPhase, v69);
}


void __fastcall BattleScriptRootComponent__EndRequestBattleSetup(System_String_o *result, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  CommonUI_o *Instance; // x0
  AvalonSceneManager_o *v11; // x0
  DataMasterBase_UserGameMaster__UserGameEntity__long__o *Master_WarQuestSelectionMaster; // x0
  struct System_String_o *name; // x21
  int32_t actMax; // w19
  int32_t birthDay_high; // w20
  const MethodInfo *v16; // x0
  UserGameEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F750E & 1) == 0 )
  {
    sub_B16FFC(&BattleData_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMaster_BattleMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__, v5);
    sub_B16FFC(&ScriptManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&StringLiteral_20980, v9);
    byte_40F750E = 1;
  }
  entity = 0LL;
  if ( !result )
    goto LABEL_22;
  if ( System_String__Equals_43731072(result, (System_String_o *)StringLiteral_20980, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      v11 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v11 )
      {
        AvalonSceneManager__transitionSceneRefresh(v11, 34, 1, 0LL, 0, 0LL);
        return;
      }
    }
LABEL_22:
    sub_B170D4();
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  if ( DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
         Master_WarQuestSelectionMaster,
         &entity,
         (const MethodInfo_266F698 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__) )
  {
    if ( !entity )
      goto LABEL_22;
    name = entity->fields.name;
    birthDay_high = HIDWORD(entity->fields.birthDay);
    actMax = entity->fields.actMax;
    if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    BattleData__setResumeBattleId((int64_t)name, birthDay_high, actMax, 0LL);
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__DeleteTalkResumeInfo(0LL);
  ScriptManager__ClearSelectRouteArray(0LL);
  BattleScriptRootComponent__StartBattle(v16);
}


void __fastcall BattleScriptRootComponent__GoForBattle(BattleSetupInfo_o *battleSetupInfo, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40F7510 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleScriptRootComponent_EndRequestBattleSetup__, method);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&ScriptManager_TypeInfo, v4);
    byte_40F7510 = 1;
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__DeleteTalkResumeInfo(0LL);
  v9 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(NetworkManager_ResultCallbackFunc_TypeInfo, v5, v6, v7, v8);
  NetworkManager_ResultCallbackFunc___ctor(v9, 0LL, Method_BattleScriptRootComponent_EndRequestBattleSetup__, 0LL);
  BattleScriptRootComponent__RequestBattleSetup(battleSetupInfo, v9, v10);
}


void __fastcall BattleScriptRootComponent__LoadPlayScenarioWithMap(
        BattleScriptRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  QuestPhaseDetailMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  AvalonSceneManager_o *v11; // x0
  AvalonSceneManager_o *v12; // x0
  __int64 v13; // x1
  TerminalPramsManager_c *v14; // x0
  TerminalPramsManager_c *v15; // x0
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F7501 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, callback);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v7);
    byte_40F7501 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  MasterData_WarQuestSelectionMaster = (QuestPhaseDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo || !MasterData_WarQuestSelectionMaster )
    goto LABEL_42;
  if ( !QuestPhaseDetailMaster__TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          talkInfo->fields.qId,
          talkInfo->fields.pId,
          0LL) )
    goto LABEL_11;
  if ( !entity )
    goto LABEL_42;
  if ( !QuestPhaseDetailEntity__HasFlag(entity, 0x20000000000LL, 0LL) )
  {
LABEL_11:
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  v11 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v11 )
    goto LABEL_42;
  if ( AvalonSceneManager__checkNowScene(v11, 34, 0LL) )
    goto LABEL_11;
  v12 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v12 )
LABEL_42:
    sub_B170D4();
  AvalonSceneManager__transitionScene_19205640(v12, 34, callback, 1, 0LL, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F604C )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v13);
    byte_40F604C = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_DispState_k__BackingField = 2;
  if ( !byte_40F604D )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v13);
    byte_40F604D = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_40F6E41 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v13);
    v15 = TerminalPramsManager_TypeInfo;
    byte_40F6E41 = 1;
  }
  if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_IsDispOnly_k__BackingField = 1;
  if ( !byte_40F758F )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v13);
    v15 = TerminalPramsManager_TypeInfo;
    byte_40F758F = 1;
  }
  if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_IsScriptDisp_k__BackingField = 1;
  if ( !byte_40F6E0C )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v13);
    v15 = TerminalPramsManager_TypeInfo;
    byte_40F6E0C = 1;
  }
  if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_IsPlayScriptWithMap_k__BackingField = 1;
}


void __fastcall BattleScriptRootComponent__OnDestroy(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  if ( (byte_40F74FA & 1) == 0 )
  {
    sub_B16FFC(&ScriptManager_TypeInfo, method);
    byte_40F74FA = 1;
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__ReleaseBattleDemo(0LL);
}


void __fastcall BattleScriptRootComponent__PlayStaffRoll(
        BattleScriptRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleScriptRootComponent___c__DisplayClass48_0_o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  AssetLoader_LoadEndDataHandler_o *v17; // x19

  if ( (byte_40F751E & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, callback);
    sub_B16FFC(&CommonUI_TypeInfo, v7);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_B16FFC(&Method_BattleScriptRootComponent___c__DisplayClass48_0__PlayStaffRoll_b__0__, v9);
    sub_B16FFC(&BattleScriptRootComponent___c__DisplayClass48_0_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_5974, v11);
    byte_40F751E = 1;
  }
  v12 = (BattleScriptRootComponent___c__DisplayClass48_0_o *)sub_B170CC(
                                                               BattleScriptRootComponent___c__DisplayClass48_0_TypeInfo,
                                                               callback,
                                                               method,
                                                               v3,
                                                               v4);
  BattleScriptRootComponent___c__DisplayClass48_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  v12->fields.__4__this = this;
  sub_B16F98(&v12->fields, this);
  v12->fields.callback = callback;
  sub_B16F98(&v12->fields.callback, callback);
  if ( (BYTE3(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  CommonUI__SetForceObi_16_9(1, 0LL);
  v17 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v13, v14, v15, v16);
  AssetLoader_LoadEndDataHandler___ctor(
    v17,
    (Il2CppObject *)v12,
    Method_BattleScriptRootComponent___c__DisplayClass48_0__PlayStaffRoll_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5974, v17, 1, 0LL);
}


void __fastcall BattleScriptRootComponent__ProceedToNextTalkPhase(
        BattleScriptRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x0
  const MethodInfo *v5; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *v6; // x8

  talkInfo = this->fields.talkInfo;
  if ( !talkInfo
    || (BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(talkInfo, 0LL),
        (v6 = this->fields.talkInfo) == 0LL) )
  {
    sub_B170D4();
  }
  BattleScriptRootComponent__ProcessBattleScripts(this, v6->fields.talkPhase, v5);
}


void __fastcall BattleScriptRootComponent__ProceedToNextTalkPhase_19974488(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleScriptRootComponent__ProcessBattleScripts(
        BattleScriptRootComponent_o *this,
        int32_t phaseType,
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
  BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x21
  const MethodInfo *v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Action_o *v18; // x0
  __int64 *v19; // x8
  clsQuestCheck_o *v20; // x0
  const MethodInfo *v21; // x2
  CommonUI_o *Instance; // x0
  int32_t FadeoutKind; // w20
  CommonUI_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  bool v29; // zf
  CommonUI_o *v30; // x20
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  struct BattleScriptRootComponent_TalkScriptInfo_o *v36; // x8
  System_Action_o *v37; // x20
  const MethodInfo *v38; // x2
  AvalonSceneManager_c *v39; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v41; // x21

  if ( (byte_40F74FF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&phaseType);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v5);
    sub_B16FFC(&Method_BattleScriptRootComponent_StartScriptFinishBattleAfterDemo__, v6);
    sub_B16FFC(&Method_BattleScriptRootComponent_StartScriptFinishBattle__, v7);
    sub_B16FFC(&Method_BattleScriptRootComponent__ProcessBattleScripts_b__15_0__, v8);
    sub_B16FFC(&ScriptManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v11);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v12);
    byte_40F74FF = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__SaveTalkResumeInfo(talkInfo, 0LL);
  switch ( phaseType )
  {
    case 0:
    case 10:
      BattleScriptRootComponent__TransitionTerminal(this, v14);
      return;
    case 1:
      if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
      }
      v20 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !v20 )
        goto LABEL_36;
      if ( !clsQuestCheck__isPlayQuestStartAction(v20, 0LL) )
      {
        BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v21);
        return;
      }
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_36;
      FadeoutKind = CommonUI__maskFadGetFadeoutKind(Instance, 0LL);
      v24 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v29 = FadeoutKind == 1;
      v30 = v24;
      if ( v29 )
      {
        if ( v24 )
        {
          CommonUI__maskFadeout(v24, 1, 0.0, 0LL, 0LL);
          BattleScriptRootComponent__StartBattleQuestStart(this, v31);
          return;
        }
LABEL_36:
        sub_B170D4();
      }
      v39 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v39 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v39->static_fields->DEFAULT_FADE_TIME;
      v41 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v25, v26, v27, v28);
      System_Action___ctor(
        v41,
        (Il2CppObject *)this,
        Method_BattleScriptRootComponent__ProcessBattleScripts_b__15_0__,
        0LL);
      if ( !v30 )
        goto LABEL_36;
      CommonUI__maskFadeout(v30, 1, DEFAULT_FADE_TIME, v41, 0LL);
      return;
    case 2:
      BattleScriptRootComponent__StartScriptBefeoreBattleDemo(this, v14);
      return;
    case 3:
      BattleScriptRootComponent__StartDemoBeforeBattle(this, v14);
      return;
    case 4:
      BattleScriptRootComponent__StartScriptBeforeBattleAfterDemo(this, v14);
      return;
    case 5:
      BattleScriptRootComponent__EndBeforeBattleScript(this, v14);
      return;
    case 6:
      BattleScriptRootComponent__ChkCondHavingBranchQuest(this, v14);
      v36 = this->fields.talkInfo;
      if ( !v36 )
        goto LABEL_36;
      if ( v36->fields.talkType == 5 )
      {
        BattleScriptRootComponent__StartScriptNoBattleAfter(this, v32);
      }
      else
      {
        v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v32, v33, v34, v35);
        v19 = &Method_BattleScriptRootComponent_StartScriptFinishBattle__;
LABEL_30:
        v37 = v18;
        System_Action___ctor(v18, (Il2CppObject *)this, *v19, 0LL);
        BattleScriptRootComponent__LoadPlayScenarioWithMap(this, v37, v38);
      }
      return;
    case 7:
      BattleScriptRootComponent__StartDemoFinishBattle(this, v14);
      return;
    case 8:
      v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      v19 = &Method_BattleScriptRootComponent_StartScriptFinishBattleAfterDemo__;
      goto LABEL_30;
    case 9:
      BattleScriptRootComponent__StartSecondDemoFinishBattle(this, v14);
      return;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleScriptRootComponent__RequestBattleSecnarioForNoneBattleQuest(
        BattleScriptRootComponent_o *this,
        bool isExit,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  WebViewManager_o *Instance; // x0
  LoginQuestMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  const MethodInfo *v19; // x1
  __int64 v20; // x1
  CommonUI_o *v21; // x20
  TerminalPramsManager_c *v22; // x0
  __int64 v23; // x1
  QuestMaster_o *Master_WarQuestSelectionMaster; // x20
  TerminalPramsManager_c *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  QuestEntity_o *v30; // x20
  TerminalPramsManager_c *v31; // x0
  MissionNotifyManager_o *v32; // x0
  NetworkManager_ResultCallbackFunc_o *v33; // x20
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v35; // x8
  BattleScenarioRequest_o *v36; // x19
  int32_t pId; // w20
  int32_t qId; // w21
  System_Int32_array *SelectRouteArray; // x0
  const MethodInfo *v40; // x4
  QuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F7512 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleScriptRootComponent_EndRequestBattleScenario__, isExit);
    sub_B16FFC(&Method_DataManager_GetMasterData_LoginQuestMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_NetworkManager_getRequest_BattleScenarioRequest___, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_B16FFC(&ScriptManager_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v13);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v14);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v15);
    byte_40F7512 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__DeleteTalkResumeInfo(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  MasterData_WarQuestSelectionMaster = (LoginQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_LoginQuestMaster___);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo || !MasterData_WarQuestSelectionMaster )
    goto LABEL_54;
  if ( LoginQuestMaster__GetEntityByQuestId(MasterData_WarQuestSelectionMaster, talkInfo->fields.qId, 0LL) )
  {
    BattleScriptRootComponent__TransitionTerminal(this, v19);
    return;
  }
  v21 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v20);
    byte_40F6057 = 1;
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = TerminalPramsManager_TypeInfo;
  }
  if ( !v21 )
    goto LABEL_54;
  CommonUI__CheckChangeOtherConnectMarkFromQuestClear(
    v21,
    v22->static_fields->_QuestId_k__BackingField,
    v22->static_fields->ConnectMarkEventId,
    0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v23);
    byte_40F6057 = 1;
  }
  v25 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v25 = TerminalPramsManager_TypeInfo;
  }
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_54;
  if ( QuestMaster__TryGetQuestEntity(
         Master_WarQuestSelectionMaster,
         &entity,
         v25->static_fields->_QuestId_k__BackingField,
         0LL) )
  {
    v30 = entity;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6058 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v26);
      byte_40F6058 = 1;
    }
    v31 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v31 = TerminalPramsManager_TypeInfo;
    }
    if ( !v30 )
      goto LABEL_54;
    if ( QuestEntity__HasFlag_23922108(v30, 0x8000LL, v31->static_fields->_PhaseCnt_k__BackingField + 1, 0LL) )
    {
      if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
      }
      v32 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( v32 )
      {
        MissionNotifyManager__StartPause(v32, 0LL);
        goto LABEL_45;
      }
LABEL_54:
      sub_B170D4();
    }
  }
LABEL_45:
  v33 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 v26,
                                                 v27,
                                                 v28,
                                                 v29);
  NetworkManager_ResultCallbackFunc___ctor(
    v33,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent_EndRequestBattleScenario__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v33,
                                        (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  v35 = this->fields.talkInfo;
  if ( !v35 )
    goto LABEL_54;
  v36 = (BattleScenarioRequest_o *)Request_WarBoardWallAttackRequest;
  qId = v35->fields.qId;
  pId = v35->fields.pId;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  SelectRouteArray = ScriptManager__GetSelectRouteArray(0LL);
  if ( !v36 )
    goto LABEL_54;
  BattleScenarioRequest__beginRequest(v36, qId, pId, SelectRouteArray, v40);
}


void __fastcall BattleScriptRootComponent__RequestBattleSetup(
        BattleSetupInfo_o *battleSetupInfo,
        NetworkManager_ResultCallbackFunc_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x0
  BattleSetupRequest_o *Request_WarBoardWallAttackRequest; // x20
  int32_t SelectBranchIndex; // w0
  int32_t questId; // w8
  int32_t boostId; // w28
  int32_t enemySelect; // w21
  int64_t followerId; // x25
  int32_t followerClassId; // w26
  int32_t itemId; // w27
  int32_t v17; // w0
  int64_t userEquipId; // x23
  int32_t followerType; // w24
  int32_t questSelect; // w22
  System_Int32_array *routeSelect; // x0
  int64_t activeDeckId; // [xsp+60h] [xbp-60h]
  int32_t questPhase; // [xsp+68h] [xbp-58h]
  int32_t v24; // [xsp+6Ch] [xbp-54h]

  if ( (byte_40F7511 & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_BattleSetupRequest___, callbackFunc);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&ScriptManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_40F7511 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__SetLoadMode(Instance, 2, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (BattleSetupRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                callbackFunc,
                                                                (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_BattleSetupRequest___);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  SelectBranchIndex = ScriptManager__GetSelectBranchIndex(0LL);
  if ( !battleSetupInfo )
    goto LABEL_13;
  questId = battleSetupInfo->fields.questId;
  boostId = battleSetupInfo->fields.boostId;
  enemySelect = SelectBranchIndex;
  battleSetupInfo->fields.selectedBranchIdx = SelectBranchIndex;
  v24 = questId;
  questPhase = battleSetupInfo->fields.questPhase;
  followerId = battleSetupInfo->fields.followerId;
  activeDeckId = battleSetupInfo->fields.deckId;
  followerClassId = battleSetupInfo->fields.followerClassId;
  itemId = battleSetupInfo->fields.itemId;
  v17 = BattleSetupInfo__TargetQuestBranchIdx(battleSetupInfo, 0LL);
  userEquipId = battleSetupInfo->fields.userEquipId;
  followerType = battleSetupInfo->fields.followerType;
  questSelect = v17;
  routeSelect = ScriptManager__GetSelectRouteArray(0LL);
  if ( !Request_WarBoardWallAttackRequest )
LABEL_13:
    sub_B170D4();
  BattleSetupRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    v24,
    questPhase,
    activeDeckId,
    followerId,
    followerClassId,
    itemId,
    boostId,
    enemySelect,
    questSelect,
    userEquipId,
    followerType,
    routeSelect,
    battleSetupInfo->fields.followrRandomLimitCount,
    battleSetupInfo->fields.choiceRandomLimitCounts,
    battleSetupInfo->fields.followerSpoilerProtectionLimitCount,
    battleSetupInfo->fields.followerSupportDeckId,
    battleSetupInfo->fields.campaignItemId,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleScriptRootComponent__SavePlayedNotMeetsScript(
        BattleScriptRootComponent_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x0
  QuestPhaseEntity_o *Entity; // x0
  System_String_o *ScriptName_NotMeetsCond; // x0
  System_String_o *v13; // x0
  int32_t ScriptIntParam; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F750D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_QuestPhaseMaster___, *(_QWORD *)&questId);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&ScriptManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_16529, v8);
    sub_B16FFC(&StringLiteral_21055, v9);
    byte_40F750D = 1;
  }
  ScriptIntParam = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
  Entity = QuestPhaseMaster__GetEntity(Master_WarQuestSelectionMaster, questId, phase, 0LL);
  if ( Entity )
  {
    ScriptIntParam = QuestPhaseEntity__getScriptIntParam(Entity, (System_String_o *)StringLiteral_16529, 0, 0LL);
    if ( ScriptIntParam )
    {
      ScriptName_NotMeetsCond = System_Int32__ToString((int32_t)&ScriptIntParam, 0LL);
    }
    else
    {
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      ScriptName_NotMeetsCond = ScriptManager__GetScriptName_NotMeetsCond(questId, phase, 0LL);
    }
    v13 = System_String__Concat_43743732((System_String_o *)StringLiteral_21055, ScriptName_NotMeetsCond, 0LL);
    UnityEngine_PlayerPrefs__SetInt(v13, 1, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleScriptRootComponent__ScriptFinishBattleAfterDemoEnd(
        BattleScriptRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleScriptRootComponent___c__DisplayClass24_0_o *v12; // x21
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleRouteSelectRequest_o *v20; // x19
  int32_t pId; // w20
  int32_t qId; // w21
  System_Int32_array *SelectRouteArray; // x0
  const MethodInfo *v24; // x4

  if ( (byte_40F7506 & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___, isExit);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    sub_B16FFC(&ScriptManager_TypeInfo, v9);
    sub_B16FFC(&Method_BattleScriptRootComponent___c__DisplayClass24_0__ScriptFinishBattleAfterDemoEnd_b__0__, v10);
    sub_B16FFC(&BattleScriptRootComponent___c__DisplayClass24_0_TypeInfo, v11);
    byte_40F7506 = 1;
  }
  v12 = (BattleScriptRootComponent___c__DisplayClass24_0_o *)sub_B170CC(
                                                               BattleScriptRootComponent___c__DisplayClass24_0_TypeInfo,
                                                               isExit,
                                                               method,
                                                               v3,
                                                               v4);
  BattleScriptRootComponent___c__DisplayClass24_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_18;
  v12->fields.__4__this = this;
  sub_B16F98(&v12->fields, this);
  v12->fields.isExit = isExit;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  if ( ScriptManager__GetSelectRouteArray(0LL) )
  {
    v17 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   v13,
                                                   v14,
                                                   v15,
                                                   v16);
    NetworkManager_ResultCallbackFunc___ctor(
      v17,
      (Il2CppObject *)v12,
      Method_BattleScriptRootComponent___c__DisplayClass24_0__ScriptFinishBattleAfterDemoEnd_b__0__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                          v17,
                                          (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      v20 = (BattleRouteSelectRequest_o *)Request_WarBoardWallAttackRequest;
      qId = talkInfo->fields.qId;
      pId = talkInfo->fields.pId;
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      SelectRouteArray = ScriptManager__GetSelectRouteArray(0LL);
      if ( v20 )
      {
        BattleRouteSelectRequest__beginRequest(v20, qId, pId, SelectRouteArray, v24);
        return;
      }
    }
LABEL_18:
    sub_B170D4();
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v14);
}


bool __fastcall BattleScriptRootComponent__StartBattle(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  int v6; // w20
  AvalonSceneManager_o *v7; // x0
  AvalonSceneManager_o *v8; // x0
  AvalonSceneManager_o *v9; // x0

  if ( (byte_40F750F & 1) == 0 )
  {
    sub_B16FFC(&Method_AvalonSceneManager_UnloadScene_FollowerRootComponent___, v1);
    sub_B16FFC(&Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___, v2);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_40F750F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v6 = BYTE4(Instance[1].fields.baseWindow);
  v7 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v7 )
    goto LABEL_11;
  if ( !v6 )
  {
    AvalonSceneManager__transitionSceneRefresh(v7, 10, 1, 0LL, 0, 0LL);
    return 1;
  }
  AvalonSceneManager__UnloadScene_PartyOrganizationRootComponent_(
    v7,
    (const MethodInfo_18B4C24 *)Method_AvalonSceneManager_UnloadScene_FollowerRootComponent___);
  v8 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v8
    || (AvalonSceneManager__UnloadScene_PartyOrganizationRootComponent_(
          v8,
          (const MethodInfo_18B4C24 *)Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___),
        (v9 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  AvalonSceneManager__transitionScene(v9, 10, 1, 0LL, 0LL);
  return 1;
}


void __fastcall BattleScriptRootComponent__StartBattleQuestStart(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  clsQuestCheck_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x21

  if ( (byte_40F7508 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_BattleScriptRootComponent_ProceedToNextTalkPhase__, v3);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v4);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v5);
    byte_40F7508 = 1;
  }
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v6 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_BattleScriptRootComponent_ProceedToNextTalkPhase__, 0LL);
  if ( !v6 )
    sub_B170D4();
  clsQuestCheck__PlayQuestStartAction(v6, v11, 0LL);
}


void __fastcall BattleScriptRootComponent__StartDemoBeforeBattle(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t qId; // w20
  int32_t pId; // w21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v12; // x22

  if ( (byte_40F750A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string___ctor__, method);
    sub_B16FFC(&System_Action_string__TypeInfo, v6);
    sub_B16FFC(&Method_BattleScriptRootComponent__StartDemoBeforeBattle_b__28_0__, v7);
    sub_B16FFC(&ScriptManager_TypeInfo, v8);
    byte_40F750A = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_B170D4();
  qId = talkInfo->fields.qId;
  pId = talkInfo->fields.pId;
  v12 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_string__TypeInfo,
                                                                               method,
                                                                               v2,
                                                                               v3,
                                                                               v4);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent__StartDemoBeforeBattle_b__28_0__,
    (const MethodInfo_24B7310 *)Method_System_Action_string___ctor__);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__LoadBattleStartGameDemo(qId, pId, 0, (System_Action_string__o *)v12, 0, 0LL);
}


void __fastcall BattleScriptRootComponent__StartDemoFinishBattle(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x0
  int32_t qId; // w20
  int32_t pId; // w21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v12; // x22
  const MethodInfo *v13; // x2

  if ( (byte_40F7504 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string___ctor__, method);
    sub_B16FFC(&System_Action_string__TypeInfo, v6);
    sub_B16FFC(&Method_BattleScriptRootComponent__StartDemoFinishBattle_b__22_0__, v7);
    sub_B16FFC(&ScriptManager_TypeInfo, v8);
    byte_40F7504 = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_B170D4();
  qId = talkInfo->fields.qId;
  if ( qId < 1 )
  {
    BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(talkInfo, 0LL);
    BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v13);
  }
  else
  {
    pId = talkInfo->fields.pId;
    v12 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                 System_Action_string__TypeInfo,
                                                                                 method,
                                                                                 v2,
                                                                                 v3,
                                                                                 v4);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v12,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent__StartDemoFinishBattle_b__22_0__,
      (const MethodInfo_24B7310 *)Method_System_Action_string___ctor__);
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__LoadBattleEndGameDemo(qId, pId, 1, (System_Action_string__o *)v12, 0, 0LL);
  }
}


void __fastcall BattleScriptRootComponent__StartMashuPowerUpAction(
        BattleScriptRootComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleScriptRootComponent___c__DisplayClass44_0_o *v12; // x19
  __int64 v13; // x1
  TerminalPramsManager_c *v14; // x0
  int32_t WarId_k__BackingField; // w21
  CommonUI_o *Instance; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  CombineResultEffectComponent_ClickDelegate_o *v21; // x21

  if ( (byte_40F751A & 1) == 0 )
  {
    sub_B16FFC(&CombineResultEffectComponent_ClickDelegate_TypeInfo, end_act);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v7);
    sub_B16FFC(&TutorialFlag_TypeInfo, v8);
    sub_B16FFC(&Method_BattleScriptRootComponent___c__DisplayClass44_0__StartMashuPowerUpAction_b__0__, v9);
    sub_B16FFC(&BattleScriptRootComponent___c__DisplayClass44_0_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_8594, v11);
    byte_40F751A = 1;
  }
  v12 = (BattleScriptRootComponent___c__DisplayClass44_0_o *)sub_B170CC(
                                                               BattleScriptRootComponent___c__DisplayClass44_0_TypeInfo,
                                                               end_act,
                                                               method,
                                                               v3,
                                                               v4);
  BattleScriptRootComponent___c__DisplayClass44_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_20;
  v12->fields.end_act = end_act;
  sub_B16F98(&v12->fields, end_act);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6044 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v13);
    byte_40F6044 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v14->static_fields->_WarId_k__BackingField;
  if ( WarId_k__BackingField != ConstantMaster__getValue((System_String_o *)StringLiteral_8594, 0LL) )
    goto LABEL_17;
  v12->fields.tutorial_flag_id = 115;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28023340(115, 0LL) )
  {
LABEL_17:
    ActionExtensions__Call(v12->fields.end_act, 0LL);
    return;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = (CombineResultEffectComponent_ClickDelegate_o *)sub_B170CC(
                                                          CombineResultEffectComponent_ClickDelegate_TypeInfo,
                                                          v17,
                                                          v18,
                                                          v19,
                                                          v20);
  CombineResultEffectComponent_ClickDelegate___ctor(
    v21,
    (Il2CppObject *)v12,
    Method_BattleScriptRootComponent___c__DisplayClass44_0__StartMashuPowerUpAction_b__0__,
    0LL);
  if ( !Instance )
LABEL_20:
    sub_B170D4();
  CommonUI__OpenPowerUp(Instance, v21, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleScriptRootComponent__StartMovie(
        BattleScriptRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattleScriptRootComponent__StartMovie_d__14_o *v7; // x21

  if ( (byte_40F74FE & 1) == 0 )
  {
    sub_B16FFC(&BattleScriptRootComponent__StartMovie_d__14_TypeInfo, callback);
    byte_40F74FE = 1;
  }
  v7 = (BattleScriptRootComponent__StartMovie_d__14_o *)sub_B170CC(
                                                          BattleScriptRootComponent__StartMovie_d__14_TypeInfo,
                                                          callback,
                                                          method,
                                                          v3,
                                                          v4);
  BattleScriptRootComponent__StartMovie_d__14___ctor(v7, 0, 0LL);
  if ( !v7 )
    sub_B170D4();
  v7->fields.__4__this = this;
  sub_B16F98(&v7->fields.__4__this, this);
  v7->fields.callback = callback;
  sub_B16F98(&v7->fields.callback, callback);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall BattleScriptRootComponent__StartScript(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t talkType; // w8
  WebViewManager_o *Instance; // x0
  QuestPhaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v12; // x8
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Action_o *v17; // x20
  const MethodInfo *v18; // x2
  System_Collections_IEnumerator_o *started; // x1
  CommonUI_o *v20; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *v21; // x20
  const MethodInfo *v22; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *v23; // x8
  int32_t pId; // w8
  int qId; // w9
  struct BattleScriptRootComponent_TalkScriptInfo_o *v26; // x8

  if ( (byte_40F74FD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_BattleScriptRootComponent__StartScript_b__13_0__, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v4);
    sub_B16FFC(&ScriptManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_40F74FD = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_26;
  talkType = talkInfo->fields.talkType;
  if ( (unsigned int)(talkType - 3) < 4 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v12 = this->fields.talkInfo;
      if ( v12 )
      {
        if ( MasterData_WarQuestSelectionMaster )
        {
          if ( QuestPhaseMaster__IsMoviePhase(MasterData_WarQuestSelectionMaster, v12->fields.qId, v12->fields.pId, 0LL) )
          {
            v17 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
            System_Action___ctor(
              v17,
              (Il2CppObject *)this,
              Method_BattleScriptRootComponent__StartScript_b__13_0__,
              0LL);
            started = BattleScriptRootComponent__StartMovie(this, v17, v18);
            UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
            return;
          }
          v26 = this->fields.talkInfo;
          if ( v26 )
          {
            BattleScriptRootComponent__ProcessBattleScripts(this, v26->fields.talkPhase, v14);
            return;
          }
        }
      }
    }
LABEL_26:
    sub_B170D4();
  }
  if ( talkType == 1 )
  {
    v20 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v20 )
      goto LABEL_26;
    CommonUI__maskFadeout(v20, 2, 0.0, 0LL, 0LL);
    v21 = this->fields.talkInfo;
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__SaveTalkResumeInfo(v21, 0LL);
    v23 = this->fields.talkInfo;
    if ( !v23 )
      goto LABEL_26;
    qId = v23->fields.qId;
    pId = v23->fields.pId;
    if ( qId <= 0 )
    {
      if ( pId )
        BattleScriptRootComponent__ChapterStartEffect(this, v22);
      else
        BattleScriptRootComponent__ChapterStart(this, v22);
    }
    else if ( pId )
    {
      BattleScriptRootComponent__ChapterStartEffectQuest(this, v22);
    }
    else
    {
      BattleScriptRootComponent__ChapterStartQuest(this, v22);
    }
  }
}


void __fastcall BattleScriptRootComponent__StartScriptBefeoreBattleDemo(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v19; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v22; // x8
  int32_t wId; // w20
  int32_t qId; // w21
  int32_t pId; // w22
  ScriptManager_CallbackFunc_o *v26; // x23
  BattleScriptRootComponent_TalkScriptInfo_o *v27; // x0
  int32_t JumpLine; // w0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v29; // x8
  int32_t v30; // w19
  int32_t talkType; // w24

  if ( (byte_40F7509 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_BattleScriptRootComponent_ProceedToNextTalkPhase___66810120, v4);
    sub_B16FFC(&Method_BattleScriptRootComponent__StartScriptBefeoreBattleDemo_b__27_0__, v5);
    sub_B16FFC(&ScriptManager_CallbackFunc_TypeInfo, v6);
    sub_B16FFC(&ScriptManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_40F7509 = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_17;
  if ( WarMaster__IsLastQuest(talkInfo->fields.wId, talkInfo->fields.qId, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v19 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
    v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
    System_Action___ctor(
      v21,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent__StartScriptBefeoreBattleDemo_b__27_0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 2, DEFAULT_FADE_TIME, v21, 0LL);
      return;
    }
LABEL_17:
    sub_B170D4();
  }
  v22 = this->fields.talkInfo;
  if ( !v22 )
    goto LABEL_17;
  wId = v22->fields.wId;
  qId = v22->fields.qId;
  pId = v22->fields.pId;
  v26 = (ScriptManager_CallbackFunc_o *)sub_B170CC(ScriptManager_CallbackFunc_TypeInfo, v10, v11, v12, v13);
  ScriptManager_CallbackFunc___ctor(
    v26,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent_ProceedToNextTalkPhase___66810120,
    0LL);
  v27 = this->fields.talkInfo;
  if ( !v27 )
    goto LABEL_17;
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(v27, 0LL);
  v29 = this->fields.talkInfo;
  if ( !v29 )
    goto LABEL_17;
  v30 = JumpLine;
  talkType = v29->fields.talkType;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayBattleStart(wId, qId, pId, v26, 0, 0LL, v30, talkType == 6, 0, 0LL, 0LL);
}


void __fastcall BattleScriptRootComponent__StartScriptBeforeBattleAfterDemo(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w19
  int32_t qId; // w20
  int32_t pId; // w21
  ScriptManager_CallbackFunc_o *v12; // x23
  BattleScriptRootComponent_TalkScriptInfo_o *v13; // x0
  int32_t JumpLine; // w22

  if ( (byte_40F750B & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleScriptRootComponent_ProceedToNextTalkPhase___66810120, method);
    sub_B16FFC(&ScriptManager_CallbackFunc_TypeInfo, v6);
    sub_B16FFC(&ScriptManager_TypeInfo, v7);
    byte_40F750B = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        qId = talkInfo->fields.qId,
        pId = talkInfo->fields.pId,
        v12 = (ScriptManager_CallbackFunc_o *)sub_B170CC(ScriptManager_CallbackFunc_TypeInfo, method, v2, v3, v4),
        ScriptManager_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          Method_BattleScriptRootComponent_ProceedToNextTalkPhase___66810120,
          0LL),
        (v13 = this->fields.talkInfo) == 0LL) )
  {
    sub_B170D4();
  }
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(v13, 0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayBattleStart2(wId, qId, pId, v12, 0, 0LL, JumpLine, 0LL);
}


void __fastcall BattleScriptRootComponent__StartScriptFinishBattle(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  TerminalPramsManager_c *v11; // x0
  AvalonSceneManager_o *Instance; // x0
  TerminalPramsManager_c *v13; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v14; // x8
  int32_t pId; // w19
  int32_t qId; // w20
  _BOOL4 IsScriptDisp_k__BackingField; // w25
  int32_t winResult; // w21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  ScriptManager_CallbackFunc_o *v23; // x23
  BattleScriptRootComponent_TalkScriptInfo_o *v24; // x0
  __int64 v25; // x1
  int32_t JumpLine; // w22
  TerminalPramsManager_c *v27; // x0
  _BOOL4 IsPlayScriptWithMap_k__BackingField; // w24

  if ( (byte_40F7502 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleScriptRootComponent_StartScriptFinishBattleEnd2__, method);
    sub_B16FFC(&BgmManager_TypeInfo, v3);
    sub_B16FFC(&ScriptManager_CallbackFunc_TypeInfo, v4);
    sub_B16FFC(&ScriptManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v7);
    byte_40F7502 = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_48;
  if ( BattleScriptRootComponent_TalkScriptInfo__isLose(talkInfo, 0LL) )
  {
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__DeleteTalkResumeInfo(0LL);
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    BgmManager__SetMute(0, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F604D )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v10);
      byte_40F604D = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    v11->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
      return;
    }
LABEL_48:
    sub_B170D4();
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6055 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v9);
    byte_40F6055 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v14 = this->fields.talkInfo;
  if ( !v14 )
    goto LABEL_48;
  qId = v14->fields.qId;
  pId = v14->fields.pId;
  IsScriptDisp_k__BackingField = v13->static_fields->_IsScriptDisp_k__BackingField;
  winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(this->fields.talkInfo, 0LL);
  v23 = (ScriptManager_CallbackFunc_o *)sub_B170CC(ScriptManager_CallbackFunc_TypeInfo, v19, v20, v21, v22);
  ScriptManager_CallbackFunc___ctor(
    v23,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent_StartScriptFinishBattleEnd2__,
    0LL);
  v24 = this->fields.talkInfo;
  if ( !v24 )
    goto LABEL_48;
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(v24, 0LL);
  if ( IsScriptDisp_k__BackingField )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6071 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v25);
      byte_40F6071 = 1;
    }
    v27 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v27 = TerminalPramsManager_TypeInfo;
    }
    IsPlayScriptWithMap_k__BackingField = v27->static_fields->_IsPlayScriptWithMap_k__BackingField;
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__PlayBattleEnd2_17705108(
      qId,
      pId,
      winResult,
      15,
      v23,
      0,
      JumpLine,
      IsPlayScriptWithMap_k__BackingField,
      0LL);
  }
  else
  {
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__PlayBattleEnd2(qId, pId, winResult, v23, 0, JumpLine, 0LL);
  }
}


void __fastcall BattleScriptRootComponent__StartScriptFinishBattleAfterDemo(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x0
  int32_t qId; // w20
  int32_t pId; // w21
  int32_t winResult; // w22
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  ScriptManager_CallbackFunc_o *v14; // x23
  BattleScriptRootComponent_TalkScriptInfo_o *v15; // x0
  int32_t JumpLine; // w19
  TerminalPramsManager_c *v17; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v18; // x8
  int32_t v19; // w20
  int32_t v20; // w21
  _BOOL4 IsScriptDisp_k__BackingField; // w25
  int32_t v22; // w22
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  ScriptManager_CallbackFunc_o *v27; // x23
  BattleScriptRootComponent_TalkScriptInfo_o *v28; // x0
  __int64 v29; // x1
  int32_t v30; // w19
  TerminalPramsManager_c *v31; // x0
  _BOOL4 IsPlayScriptWithMap_k__BackingField; // w24

  if ( (byte_40F7505 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleScriptRootComponent_ScriptFinishBattleAfterDemoEnd__, method);
    sub_B16FFC(&ScriptManager_CallbackFunc_TypeInfo, v3);
    sub_B16FFC(&ScriptManager_TypeInfo, v4);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
    byte_40F7505 = 1;
  }
  if ( this->fields.setEndRoll )
  {
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      qId = talkInfo->fields.qId;
      pId = talkInfo->fields.pId;
      winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(talkInfo, 0LL);
      v14 = (ScriptManager_CallbackFunc_o *)sub_B170CC(ScriptManager_CallbackFunc_TypeInfo, v10, v11, v12, v13);
      ScriptManager_CallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_BattleScriptRootComponent_ScriptFinishBattleAfterDemoEnd__,
        0LL);
      v15 = this->fields.talkInfo;
      if ( v15 )
      {
        JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(v15, 0LL);
        if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScriptManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        }
        ScriptManager__PlayBattleEndWhite(qId, pId, winResult, v14, 0, JumpLine, 0LL);
        return;
      }
    }
LABEL_37:
    sub_B170D4();
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6055 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6055 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v18 = this->fields.talkInfo;
  if ( !v18 )
    goto LABEL_37;
  v20 = v18->fields.qId;
  v19 = v18->fields.pId;
  IsScriptDisp_k__BackingField = v17->static_fields->_IsScriptDisp_k__BackingField;
  v22 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(this->fields.talkInfo, 0LL);
  v27 = (ScriptManager_CallbackFunc_o *)sub_B170CC(ScriptManager_CallbackFunc_TypeInfo, v23, v24, v25, v26);
  ScriptManager_CallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent_ScriptFinishBattleAfterDemoEnd__,
    0LL);
  v28 = this->fields.talkInfo;
  if ( !v28 )
    goto LABEL_37;
  v30 = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(v28, 0LL);
  if ( IsScriptDisp_k__BackingField )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6071 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v29);
      byte_40F6071 = 1;
    }
    v31 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v31 = TerminalPramsManager_TypeInfo;
    }
    IsPlayScriptWithMap_k__BackingField = v31->static_fields->_IsPlayScriptWithMap_k__BackingField;
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__PlayBattleEnd_17703740(v20, v19, v22, 15, v27, 0, v30, IsPlayScriptWithMap_k__BackingField, 0LL);
  }
  else
  {
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__PlayBattleEnd(v20, v19, v22, v27, 0, v30, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleScriptRootComponent__StartScriptFinishBattleEnd2(
        BattleScriptRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleScriptRootComponent___c__DisplayClass21_0_o *v12; // x21
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleRouteSelectRequest_o *v20; // x19
  int32_t pId; // w20
  int32_t qId; // w21
  System_Int32_array *SelectRouteArray; // x0
  const MethodInfo *v24; // x4

  if ( (byte_40F7503 & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___, isExit);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    sub_B16FFC(&ScriptManager_TypeInfo, v9);
    sub_B16FFC(&Method_BattleScriptRootComponent___c__DisplayClass21_0__StartScriptFinishBattleEnd2_b__0__, v10);
    sub_B16FFC(&BattleScriptRootComponent___c__DisplayClass21_0_TypeInfo, v11);
    byte_40F7503 = 1;
  }
  v12 = (BattleScriptRootComponent___c__DisplayClass21_0_o *)sub_B170CC(
                                                               BattleScriptRootComponent___c__DisplayClass21_0_TypeInfo,
                                                               isExit,
                                                               method,
                                                               v3,
                                                               v4);
  BattleScriptRootComponent___c__DisplayClass21_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_18;
  v12->fields.__4__this = this;
  sub_B16F98(&v12->fields, this);
  v12->fields.isExit = isExit;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  if ( ScriptManager__GetSelectRouteArray(0LL) )
  {
    v17 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   v13,
                                                   v14,
                                                   v15,
                                                   v16);
    NetworkManager_ResultCallbackFunc___ctor(
      v17,
      (Il2CppObject *)v12,
      Method_BattleScriptRootComponent___c__DisplayClass21_0__StartScriptFinishBattleEnd2_b__0__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                          v17,
                                          (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      v20 = (BattleRouteSelectRequest_o *)Request_WarBoardWallAttackRequest;
      qId = talkInfo->fields.qId;
      pId = talkInfo->fields.pId;
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      SelectRouteArray = ScriptManager__GetSelectRouteArray(0LL);
      if ( v20 )
      {
        BattleRouteSelectRequest__beginRequest(v20, qId, pId, SelectRouteArray, v24);
        return;
      }
    }
LABEL_18:
    sub_B170D4();
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v14);
}


void __fastcall BattleScriptRootComponent__StartScriptNoBattleAfter(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x0
  _BOOL4 setEndRoll; // w24
  int32_t qId; // w19
  int32_t pId; // w20
  int32_t winResult; // w21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  ScriptManager_CallbackFunc_o *v15; // x0
  ScriptManager_CallbackFunc_o *v16; // x22
  BattleScriptRootComponent_TalkScriptInfo_o *v17; // x0
  int32_t JumpLine; // w23
  BattleScriptRootComponent_TalkScriptInfo_o *v19; // x0
  int32_t v20; // w23

  if ( (byte_40F7514 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__38_0__, method);
    sub_B16FFC(&Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__38_1__, v3);
    sub_B16FFC(&ScriptManager_CallbackFunc_TypeInfo, v4);
    sub_B16FFC(&ScriptManager_TypeInfo, v5);
    byte_40F7514 = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_15;
  setEndRoll = this->fields.setEndRoll;
  qId = talkInfo->fields.qId;
  pId = talkInfo->fields.pId;
  winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(talkInfo, 0LL);
  v15 = (ScriptManager_CallbackFunc_o *)sub_B170CC(ScriptManager_CallbackFunc_TypeInfo, v11, v12, v13, v14);
  v16 = v15;
  if ( setEndRoll )
  {
    ScriptManager_CallbackFunc___ctor(
      v15,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__38_0__,
      0LL);
    v17 = this->fields.talkInfo;
    if ( v17 )
    {
      JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(v17, 0LL);
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      ScriptManager__PlayBattleEndWhite(qId, pId, winResult, v16, 0, JumpLine, 0LL);
      return;
    }
LABEL_15:
    sub_B170D4();
  }
  ScriptManager_CallbackFunc___ctor(
    v15,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__38_1__,
    0LL);
  v19 = this->fields.talkInfo;
  if ( !v19 )
    goto LABEL_15;
  v20 = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(v19, 0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayBattleEnd(qId, pId, winResult, v16, 0, v20, 0LL);
}


void __fastcall BattleScriptRootComponent__StartSecondDemoFinishBattle(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t qId; // w20
  int32_t pId; // w21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v12; // x22

  if ( (byte_40F7507 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string___ctor__, method);
    sub_B16FFC(&System_Action_string__TypeInfo, v6);
    sub_B16FFC(&Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__25_0__, v7);
    sub_B16FFC(&ScriptManager_TypeInfo, v8);
    byte_40F7507 = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_B170D4();
  qId = talkInfo->fields.qId;
  pId = talkInfo->fields.pId;
  v12 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_string__TypeInfo,
                                                                               method,
                                                                               v2,
                                                                               v3,
                                                                               v4);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__25_0__,
    (const MethodInfo_24B7310 *)Method_System_Action_string___ctor__);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__LoadBattleEndGameDemo(qId, pId, 0, (System_Action_string__o *)v12, 0, 0LL);
}


void __fastcall BattleScriptRootComponent__TransitionTerminal(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  TerminalPramsManager_c *v16; // x0
  const MethodInfo *v17; // x1
  TerminalPramsManager_c *v18; // x0
  AvalonSceneManager_o *Instance; // x0
  UnityEngine_MonoBehaviour_o *v20; // x21
  AvalonSceneManager_o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Action_o *v26; // x23
  System_Collections_IEnumerator_o *v27; // x0
  __int64 v28; // x1
  TerminalSceneComponent_c *v29; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v31; // x1
  TerminalSceneComponent_c *v32; // x0
  struct TerminalSceneComponent_o *v33; // x8
  UnityEngine_Object_o *mTerminalMap; // x20
  __int64 v35; // x1
  TerminalSceneComponent_c *v36; // x0
  struct TerminalSceneComponent_o *v37; // x8
  ScrTerminalMap_o *v38; // x0
  clsQuestCheck_o *v39; // x20
  __int64 v40; // x1
  TerminalPramsManager_c *v41; // x0
  MissionNotifyManager_o *v42; // x0
  TerminalSceneComponent_c *v43; // x0
  struct TerminalSceneComponent_o *v44; // x8
  ScrTerminalMap_o *v45; // x0

  if ( (byte_40F751B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_AvalonSceneManager_UnloadSceneAsync_TerminalSceneComponent___, v3);
    sub_B16FFC(&Method_AvalonSceneManager_UnloadScene_BattleScriptRootComponent___, v4);
    sub_B16FFC(&BalanceConfig_TypeInfo, v5);
    sub_B16FFC(&Method_BattleScriptRootComponent_TransitionTerminalSub__, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&ScriptManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v9);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v10);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v11);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v12);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v13);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v14);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v15);
    byte_40F751B = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F604D )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F604D = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_40F6E0C )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    v16 = TerminalPramsManager_TypeInfo;
    byte_40F6E0C = 1;
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__DeleteTalkResumeInfo(0LL);
  if ( !byte_40F6055 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v17);
    byte_40F6055 = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  if ( v18->static_fields->_IsScriptDisp_k__BackingField )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_97;
    AvalonSceneManager__UnloadScene_PartyOrganizationRootComponent_(
      Instance,
      (const MethodInfo_18B4C24 *)Method_AvalonSceneManager_UnloadScene_BattleScriptRootComponent___);
    v20 = (UnityEngine_MonoBehaviour_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v21 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v26 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v22, v23, v24, v25);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_BattleScriptRootComponent_TransitionTerminalSub__, 0LL);
    if ( !v21 )
      goto LABEL_97;
    v27 = AvalonSceneManager__UnloadSceneAsync_TerminalSceneComponent_(
            v21,
            v26,
            (const MethodInfo_18B4E04 *)Method_AvalonSceneManager_UnloadSceneAsync_TerminalSceneComponent___);
    if ( !v20 )
      goto LABEL_97;
    UnityEngine_MonoBehaviour__StartCoroutine_34804316(v20, v27, 0LL);
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, v28);
      byte_40F6042 = 1;
    }
    v29 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v29 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_Object_o *)v29->static_fields->mInstance;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
    {
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_40F6042 )
      {
        sub_B16FFC(&TerminalSceneComponent_TypeInfo, v31);
        byte_40F6042 = 1;
      }
      v32 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v32 = TerminalSceneComponent_TypeInfo;
      }
      v33 = v32->static_fields->mInstance;
      if ( !v33 )
        goto LABEL_97;
      mTerminalMap = (UnityEngine_Object_o *)v33->fields.mTerminalMap;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(mTerminalMap, 0LL, 0LL) )
      {
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_40F6042 )
        {
          sub_B16FFC(&TerminalSceneComponent_TypeInfo, v35);
          byte_40F6042 = 1;
        }
        v36 = TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v36 = TerminalSceneComponent_TypeInfo;
        }
        v37 = v36->static_fields->mInstance;
        if ( !v37 )
          goto LABEL_97;
        v38 = v37->fields.mTerminalMap;
        if ( !v38 )
          goto LABEL_97;
        ScrTerminalMap__SetDiceButton(v38, 0LL);
        if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
        }
        v39 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        }
        if ( !v39 )
          goto LABEL_97;
        if ( clsQuestCheck__CheckQuestPlayableNow(
               v39,
               BalanceConfig_TypeInfo->static_fields->EventBoardGameNextBoardQuestId,
               0LL) )
        {
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_40F7591 )
          {
            sub_B16FFC(&TerminalPramsManager_TypeInfo, v40);
            byte_40F7591 = 1;
          }
          v41 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v41 = TerminalPramsManager_TypeInfo;
          }
          v41->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField = 1;
          if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
          }
          v42 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
          if ( v42 )
          {
            MissionNotifyManager__StartPause(v42, 0LL);
            return;
          }
LABEL_97:
          sub_B170D4();
        }
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_40F6042 )
        {
          sub_B16FFC(&TerminalSceneComponent_TypeInfo, v40);
          byte_40F6042 = 1;
        }
        v43 = TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v43 = TerminalSceneComponent_TypeInfo;
        }
        v44 = v43->static_fields->mInstance;
        if ( !v44 )
          goto LABEL_97;
        v45 = v44->fields.mTerminalMap;
        if ( !v45 )
          goto LABEL_97;
        ScrTerminalMap__SetEventBoardQuestArrivalPanel(v45, 0LL);
      }
    }
  }
  else
  {
    BattleScriptRootComponent__TransitionTerminalSub(this, v17);
  }
}


void __fastcall BattleScriptRootComponent__TransitionTerminalSub(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  QuestPhaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 v9; // x1
  TerminalPramsManager_c *v10; // x0
  int32_t v11; // w20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v12; // x8
  int32_t talkType; // w21
  AvalonSceneManager_o *v14; // x0
  bool v15; // w19
  __int64 v16; // x1
  TerminalPramsManager_c *v17; // x0

  if ( (byte_40F751C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
    byte_40F751C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo || !MasterData_WarQuestSelectionMaster )
    goto LABEL_33;
  if ( QuestPhaseMaster__IsInvisibleConnectAndLoad(
         MasterData_WarQuestSelectionMaster,
         talkInfo->fields.qId,
         talkInfo->fields.pId,
         0LL) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F7592 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v9);
      byte_40F7592 = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    v11 = 2;
    v10->static_fields->isInvisibleConnectAndLoad = 1;
  }
  else
  {
    v11 = 1;
  }
  v12 = this->fields.talkInfo;
  if ( !v12 )
    goto LABEL_33;
  talkType = v12->fields.talkType;
  v14 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v14 )
    goto LABEL_33;
  if ( talkType != 5 )
  {
LABEL_23:
    AvalonSceneManager__transitionSceneRefresh(v14, 34, v11, 0LL, 0, 0LL);
    goto LABEL_24;
  }
  v15 = AvalonSceneManager__checkLoadedScene(v14, 34, 0LL);
  v14 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v14 )
LABEL_33:
    sub_B170D4();
  if ( !v15 )
    goto LABEL_23;
  AvalonSceneManager__changeScene(v14, 34, v11, 0LL, 0LL);
LABEL_24:
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F758F )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v16);
    byte_40F758F = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v17->static_fields->_IsScriptDisp_k__BackingField = 0;
}


void __fastcall BattleScriptRootComponent__TransitionWarBoard(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleSetupInfo_o *bSetupInfo; // x20
  AvalonSceneManager_o *v14; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v15; // x8
  Il2CppObject *v16; // x3
  int32_t v17; // w1
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  CommonUI_o *Instance; // x19
  BattleScriptRootComponent___c_c *v23; // x8
  struct BattleScriptRootComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__47_0; // x22
  System_String_o *v26; // x20
  System_String_o *v27; // x21
  Il2CppObject *v28; // x23
  struct BattleScriptRootComponent___c_StaticFields *v29; // x0
  TerminalPramsManager_c *v30; // x0

  if ( (byte_40F751D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&ScriptManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v6);
    sub_B16FFC(&Method_BattleScriptRootComponent___c__TransitionWarBoard_b__47_0__, v7);
    sub_B16FFC(&BattleScriptRootComponent___c_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_23735, v9);
    sub_B16FFC(&StringLiteral_23736, v10);
    byte_40F751D = 1;
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__DeleteTalkResumeInfo(0LL);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_38;
  if ( talkInfo->fields.talkType != 3 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v23 = BattleScriptRootComponent___c_TypeInfo;
    if ( (BYTE3(BattleScriptRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleScriptRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleScriptRootComponent___c_TypeInfo);
      v23 = BattleScriptRootComponent___c_TypeInfo;
    }
    static_fields = v23->static_fields;
    _9__47_0 = static_fields->__9__47_0;
    v26 = (System_String_o *)StringLiteral_23736;
    v27 = (System_String_o *)StringLiteral_23735;
    if ( !_9__47_0 )
    {
      if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        static_fields = BattleScriptRootComponent___c_TypeInfo->static_fields;
      }
      v28 = (Il2CppObject *)static_fields->__9;
      _9__47_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v18, v19, v20, v21);
      System_Action___ctor(_9__47_0, v28, Method_BattleScriptRootComponent___c__TransitionWarBoard_b__47_0__, 0LL);
      v29 = BattleScriptRootComponent___c_TypeInfo->static_fields;
      v29->__9__47_0 = _9__47_0;
      sub_B16F98(&v29->__9__47_0, _9__47_0);
    }
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog(Instance, v27, v26, _9__47_0, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
      return;
    }
    goto LABEL_38;
  }
  bSetupInfo = talkInfo->fields.bSetupInfo;
  if ( !bSetupInfo )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F604D )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v11);
      byte_40F604D = 1;
    }
    v30 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v30 = TerminalPramsManager_TypeInfo;
    }
    v30->static_fields->_IsAutoResume_k__BackingField = 1;
    v14 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( v14 )
    {
      v17 = 34;
      v16 = 0LL;
      goto LABEL_36;
    }
LABEL_38:
    sub_B170D4();
  }
  if ( bSetupInfo->fields.isScriptBeforePartySelect )
  {
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    bSetupInfo->fields.selectedBranchIdx = ScriptManager__GetSelectBranchIndex(0LL);
    v14 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v15 = this->fields.talkInfo;
    if ( v15 && v14 )
    {
      v16 = (Il2CppObject *)v15->fields.bSetupInfo;
      v17 = 35;
LABEL_36:
      AvalonSceneManager__transitionSceneRefresh(v14, v17, 1, v16, 0, 0LL);
      return;
    }
    goto LABEL_38;
  }
  BattleScriptRootComponent__GoForBattle(bSetupInfo, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleScriptRootComponent___ChapterStartEffect_b__41_0(
        BattleScriptRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20
  BattleScriptRootComponent_o *v8; // x0
  const MethodInfo *v9; // x2

  if ( (byte_40F7526 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isExit);
    sub_B16FFC(&Method_BattleScriptRootComponent__ChapterStartEffect_b__41_1__, v6);
    byte_40F7526 = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, isExit, method, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleScriptRootComponent__ChapterStartEffect_b__41_1__, 0LL);
  BattleScriptRootComponent__StartMashuPowerUpAction(v8, v7, v9);
}


void __fastcall BattleScriptRootComponent___ChapterStartEffect_b__41_1(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w20
  const MethodInfo *v5; // x1

  if ( (byte_40F7527 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F7527 = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_B170D4();
  wId = talkInfo->fields.wId;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__SetWarStartedId(wId, 0LL);
  BattleScriptRootComponent__EndChapterStart(this, v5);
}


void __fastcall BattleScriptRootComponent___ChapterStartQuest_b__40_0(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleScriptRootComponent_TalkScriptInfo_o *v10; // x20
  QuestTree_o *v11; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v12; // x8
  WarEntity_o *WarEntityByWarID; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v15; // x8
  const MethodInfo *v16; // x1
  TerminalPramsManager_c *v17; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F7525 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v4);
    sub_B16FFC(&ScriptManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v6);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v7);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v8);
    byte_40F7525 = 1;
  }
  entity = 0LL;
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_30;
  ++talkInfo->fields.pId;
  v10 = this->fields.talkInfo;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__SaveTalkResumeInfo(v10, 0LL);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v11 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  v12 = this->fields.talkInfo;
  if ( !v12 || !v11 )
    goto LABEL_30;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(v11, v12->fields.wId, 0LL);
  entity = WarEntityByWarID;
  if ( !WarEntityByWarID )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarMaster___);
    v15 = this->fields.talkInfo;
    if ( v15 && Master_WarQuestSelectionMaster )
    {
      DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
        Master_WarQuestSelectionMaster,
        &entity,
        v15->fields.wId,
        (const MethodInfo_266F3E4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
      WarEntityByWarID = entity;
      if ( !entity )
        goto LABEL_29;
      goto LABEL_19;
    }
LABEL_30:
    sub_B170D4();
  }
LABEL_19:
  if ( WarEntity__HasFlag(WarEntityByWarID, 0x8000, 0LL) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6073 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v16);
      byte_40F6073 = 1;
    }
    v17 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v17 = TerminalPramsManager_TypeInfo;
    }
    v17->static_fields->_IsPhaseClear_k__BackingField = 1;
  }
LABEL_29:
  BattleScriptRootComponent__ChapterStartEffectQuest(this, v16);
}


void __fastcall BattleScriptRootComponent___ChapterStart_b__39_0(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleScriptRootComponent_TalkScriptInfo_o *v4; // x20
  const MethodInfo *v5; // x1

  if ( (byte_40F7524 & 1) == 0 )
  {
    sub_B16FFC(&ScriptManager_TypeInfo, method);
    byte_40F7524 = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_B170D4();
  ++talkInfo->fields.pId;
  v4 = this->fields.talkInfo;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__SaveTalkResumeInfo(v4, 0LL);
  BattleScriptRootComponent__ChapterStartEffect(this, v5);
}


void __fastcall BattleScriptRootComponent___EndRequestBattleScenario_b__37_0(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8

  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_B170D4();
  BattleScriptRootComponent__ProcessBattleScripts(this, talkInfo->fields.talkPhase, v2);
}


void __fastcall BattleScriptRootComponent___StartDemoBeforeBattle_b__28_0(
        BattleScriptRootComponent_o *this,
        System_String_o *demoInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 bSetupInfo; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v14; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v15; // x8
  AvalonSceneManager_o *v16; // x0

  if ( (byte_40F7522 & 1) == 0 )
  {
    sub_B16FFC(&BattleSetupInfo_TypeInfo, demoInfo);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40F7522 = 1;
  }
  if ( demoInfo )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 1, 0LL);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        bSetupInfo = (__int64)talkInfo->fields.bSetupInfo;
        if ( !bSetupInfo )
        {
          bSetupInfo = sub_B170CC(BattleSetupInfo_TypeInfo, v8, v9, v10, v11);
          BattleSetupInfo___ctor((BattleSetupInfo_o *)bSetupInfo, 0LL);
          v14 = this->fields.talkInfo;
          if ( !v14 )
            goto LABEL_14;
          if ( !bSetupInfo )
            goto LABEL_14;
          *(_DWORD *)(bSetupInfo + 20) = v14->fields.qId;
          v15 = this->fields.talkInfo;
          if ( !v15 )
            goto LABEL_14;
          *(_DWORD *)(bSetupInfo + 24) = v15->fields.pId;
        }
        *(_QWORD *)(bSetupInfo + 104) = demoInfo;
        *(_WORD *)(bSetupInfo + 96) = 1;
        sub_B16F98(bSetupInfo + 104, demoInfo);
        v16 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( v16 )
        {
          AvalonSceneManager__pushScene(v16, 50, 1, (Il2CppObject *)bSetupInfo, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B170D4();
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, method);
}


void __fastcall BattleScriptRootComponent___StartDemoFinishBattle_b__22_0(
        BattleScriptRootComponent_o *this,
        System_String_o *demoInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 bSetupInfo; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v14; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v15; // x8
  AvalonSceneManager_o *v16; // x0

  if ( (byte_40F751F & 1) == 0 )
  {
    sub_B16FFC(&BattleSetupInfo_TypeInfo, demoInfo);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40F751F = 1;
  }
  if ( demoInfo )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 1, 0LL);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        bSetupInfo = (__int64)talkInfo->fields.bSetupInfo;
        if ( !bSetupInfo )
        {
          bSetupInfo = sub_B170CC(BattleSetupInfo_TypeInfo, v8, v9, v10, v11);
          BattleSetupInfo___ctor((BattleSetupInfo_o *)bSetupInfo, 0LL);
          v14 = this->fields.talkInfo;
          if ( !v14 )
            goto LABEL_14;
          if ( !bSetupInfo )
            goto LABEL_14;
          *(_DWORD *)(bSetupInfo + 20) = v14->fields.qId;
          v15 = this->fields.talkInfo;
          if ( !v15 )
            goto LABEL_14;
          *(_DWORD *)(bSetupInfo + 24) = v15->fields.pId;
        }
        *(_QWORD *)(bSetupInfo + 104) = demoInfo;
        *(_WORD *)(bSetupInfo + 96) = 256;
        sub_B16F98(bSetupInfo + 104, demoInfo);
        v16 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( v16 )
        {
          AvalonSceneManager__pushScene(v16, 50, 1, (Il2CppObject *)bSetupInfo, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B170D4();
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, method);
}


void __fastcall BattleScriptRootComponent___StartScriptBefeoreBattleDemo_b__27_0(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w19
  int32_t qId; // w20
  int32_t pId; // w21
  ScriptManager_CallbackFunc_o *v12; // x22
  BattleScriptRootComponent_TalkScriptInfo_o *v13; // x0
  int32_t JumpLine; // w23

  if ( (byte_40F7521 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleScriptRootComponent_RequestBattleSecnarioForNoneBattleQuest__, method);
    sub_B16FFC(&ScriptManager_CallbackFunc_TypeInfo, v6);
    sub_B16FFC(&ScriptManager_TypeInfo, v7);
    byte_40F7521 = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        qId = talkInfo->fields.qId,
        pId = talkInfo->fields.pId,
        v12 = (ScriptManager_CallbackFunc_o *)sub_B170CC(ScriptManager_CallbackFunc_TypeInfo, method, v2, v3, v4),
        ScriptManager_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          Method_BattleScriptRootComponent_RequestBattleSecnarioForNoneBattleQuest__,
          0LL),
        (v13 = this->fields.talkInfo) == 0LL) )
  {
    sub_B170D4();
  }
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(v13, 0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayBattleStartWhite(wId, qId, pId, v12, 0, 0LL, JumpLine, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleScriptRootComponent___StartScriptNoBattleAfter_b__38_0(
        BattleScriptRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_40F7523 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isExit);
    sub_B16FFC(&Method_BattleScriptRootComponent_TransitionTerminal__, v6);
    byte_40F7523 = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, isExit, method, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleScriptRootComponent_TransitionTerminal__, 0LL);
  BattleScriptRootComponent__PlayStaffRoll(this, v7, v8);
}


void __fastcall BattleScriptRootComponent___StartScript_b__13_0(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8

  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_B170D4();
  BattleScriptRootComponent__ProcessBattleScripts(this, talkInfo->fields.talkPhase, v2);
}


void __fastcall BattleScriptRootComponent___StartSecondDemoFinishBattle_b__25_0(
        BattleScriptRootComponent_o *this,
        System_String_o *demoInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  CommonUI_o *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 bSetupInfo; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v18; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v19; // x8
  AvalonSceneManager_o *v20; // x0
  System_Action_o *v21; // x20
  const MethodInfo *v22; // x2

  if ( (byte_40F7520 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, demoInfo);
    sub_B16FFC(&Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__25_1__, v7);
    sub_B16FFC(&BattleSetupInfo_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_40F7520 = 1;
  }
  if ( demoInfo )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 1, 0LL);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        bSetupInfo = (__int64)talkInfo->fields.bSetupInfo;
        if ( !bSetupInfo )
        {
          bSetupInfo = sub_B170CC(BattleSetupInfo_TypeInfo, v12, v13, v14, v15);
          BattleSetupInfo___ctor((BattleSetupInfo_o *)bSetupInfo, 0LL);
          v18 = this->fields.talkInfo;
          if ( !v18 )
            goto LABEL_16;
          if ( !bSetupInfo )
            goto LABEL_16;
          *(_DWORD *)(bSetupInfo + 20) = v18->fields.qId;
          v19 = this->fields.talkInfo;
          if ( !v19 )
            goto LABEL_16;
          *(_DWORD *)(bSetupInfo + 24) = v19->fields.pId;
        }
        *(_QWORD *)(bSetupInfo + 104) = demoInfo;
        *(_WORD *)(bSetupInfo + 96) = 0;
        sub_B16F98(bSetupInfo + 104, demoInfo);
        v20 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( v20 )
        {
          AvalonSceneManager__pushScene(v20, 50, 1, (Il2CppObject *)bSetupInfo, 0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_B170D4();
  }
  if ( this->fields.setEndRoll )
  {
    v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, demoInfo, method, v3, v4);
    System_Action___ctor(
      v21,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__25_1__,
      0LL);
    BattleScriptRootComponent__PlayStaffRoll(this, v21, v22);
  }
  else
  {
    BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, method);
  }
}


void __fastcall BattleScriptRootComponent___StartSecondDemoFinishBattle_b__25_1(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v2);
}


void __fastcall BattleScriptRootComponent__beginInitialize(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  AvalonSceneManager_o *v5; // x0

  if ( (byte_40F74FB & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_40F74FB = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode(Instance, 0, 0LL),
        (v5 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  AvalonSceneManager__endInitialize(v5, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall BattleScriptRootComponent__beginResume(
        BattleScriptRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x0
  const MethodInfo *v5; // x1

  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_B170D4();
  BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(talkInfo, 0LL);
  BattleScriptRootComponent__StartScript(this, v5);
}


void __fastcall BattleScriptRootComponent__beginStartUp(
        BattleScriptRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x9
  struct BattleScriptRootComponent_TalkScriptInfo_o **p_talkInfo; // x20
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x0
  WebViewManager_o *Instance; // x0
  WarMaster_o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *QuestId; // x0
  int32_t id; // w20
  bool v16; // w8
  BattleScriptRootComponent_o *v17; // x0
  Il2CppObject *v18; // x1
  const MethodInfo *v19; // x2

  if ( (byte_40F74FC & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, data);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarMaster___, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_6315, v8);
    byte_40F74FC = 1;
  }
  if ( data )
  {
    v9 = *(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo->_2.bitflags2 + 1);
    if ( *(&data->klass->_2.bitflags2 + 1) < (unsigned int)v9
      || (BattleScriptRootComponent_TalkScriptInfo_c *)data->klass->_2.typeHierarchy[v9 - 1] != BattleScriptRootComponent_TalkScriptInfo_TypeInfo )
    {
      v17 = (BattleScriptRootComponent_o *)sub_B173C8(data);
      BattleScriptRootComponent__beginResume(v17, v18, v19);
      return;
    }
  }
  this->fields.talkInfo = (struct BattleScriptRootComponent_TalkScriptInfo_o *)data;
  p_talkInfo = &this->fields.talkInfo;
  sub_B16F98(&this->fields.talkInfo, data);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_23;
  if ( talkInfo->fields.restoreLine && BattleScriptRootComponent_TalkScriptInfo__isOnJumpablePhase(talkInfo, 0LL) )
  {
    if ( !*p_talkInfo )
      goto LABEL_23;
    if ( !(*p_talkInfo)->fields.isTitleResume )
    {
      if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      BgmManager__SetMute(1, 0LL);
    }
  }
  if ( !*p_talkInfo
    || ((*p_talkInfo)->fields.isTitleResume = 0,
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (MasterData_WarQuestSelectionMaster = (WarMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarMaster___),
        !*p_talkInfo)
    || !MasterData_WarQuestSelectionMaster )
  {
LABEL_23:
    sub_B170D4();
  }
  QuestId = WarMaster__getByLastQuestId(MasterData_WarQuestSelectionMaster, (*p_talkInfo)->fields.qId, 0LL);
  if ( QuestId )
  {
    id = QuestId->fields.id;
    v16 = id == ConstantMaster__getValue((System_String_o *)StringLiteral_6315, 0LL);
  }
  else
  {
    v16 = 0;
  }
  this->fields.setEndRoll = v16;
  SceneRootComponent__beginStartUp_29752064((SceneRootComponent_o *)this, 0LL);
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_StaticFields *static_fields; // x0
  __int64 v4; // x1

  if ( (byte_40F71B3 & 1) == 0 )
  {
    sub_B16FFC(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_1104, v2);
    byte_40F71B3 = 1;
  }
  static_fields = BattleScriptRootComponent_TalkScriptInfo_TypeInfo->static_fields;
  v4 = StringLiteral_1104;
  static_fields->TalkResumeVersion = (struct System_String_o *)StringLiteral_1104;
  sub_B16F98(static_fields, v4);
  BattleScriptRootComponent_TalkScriptInfo_TypeInfo->static_fields->WinResultMultiplicationValue = 100;
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___ctor(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___ctor_19545844(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        BattleScriptRootComponent_TalkScriptSaveInfo_o *saveInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  BattleSetupInfo_BattleSetupSaveInfo_o *bSetupInfo; // x21
  BattleSetupInfo_o *v10; // x20
  struct BattleSetupInfo_o **p_bSetupInfo; // x19

  if ( (byte_40F71AD & 1) == 0 )
  {
    sub_B16FFC(&BattleSetupInfo_TypeInfo, saveInfo);
    byte_40F71AD = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !saveInfo )
    sub_B170D4();
  this->fields.wId = saveInfo->fields.wId;
  this->fields.qId = saveInfo->fields.qId;
  this->fields.pId = saveInfo->fields.pId;
  this->fields.talkType = saveInfo->fields.talkType;
  this->fields.winLoseInfo = saveInfo->fields.winLoseInfo;
  this->fields.talkPhase = saveInfo->fields.talkPhase;
  bSetupInfo = saveInfo->fields.bSetupInfo;
  if ( bSetupInfo )
  {
    v10 = (BattleSetupInfo_o *)sub_B170CC(BattleSetupInfo_TypeInfo, v5, v6, v7, v8);
    BattleSetupInfo___ctor_30312308(v10, bSetupInfo, 0LL);
  }
  else
  {
    v10 = 0LL;
  }
  this->fields.bSetupInfo = v10;
  p_bSetupInfo = &this->fields.bSetupInfo;
  sub_B16F98(p_bSetupInfo, v10);
  *((_BYTE *)p_bSetupInfo + 9) = 0;
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___ctor_19546052(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        int32_t war,
        int32_t quest,
        int32_t phase,
        int32_t type,
        int32_t tPhase,
        int32_t winLose,
        int32_t winResult,
        const MethodInfo *method)
{
  BattleScriptRootComponent_TalkScriptInfo_o *v16; // x26
  const MethodInfo *v17; // x3

  v16 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v16->fields.wId = war;
  v16->fields.qId = quest;
  v16->fields.pId = phase;
  v16->fields.talkType = type;
  BattleScriptRootComponent_TalkScriptInfo__setWinLoseInfo(v16, winLose, winResult, v17);
  v16->fields.bSetupInfo = 0LL;
  v16 = (BattleScriptRootComponent_TalkScriptInfo_o *)((char *)v16 + 40);
  *(_DWORD *)&v16[-1].fields.isTitleResume = tPhase;
  sub_B16F98(v16, 0LL);
  BYTE1(v16->monitor) = 0;
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___ctor_19546188(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        int32_t war,
        int32_t quest,
        int32_t phase,
        int32_t type,
        int32_t winLose,
        int32_t winResult,
        bool isPlayedScript,
        const MethodInfo *method)
{
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.wId = war;
  this->fields.qId = quest;
  this->fields.pId = phase;
  this->fields.talkType = type;
  BattleScriptRootComponent_TalkScriptInfo__setWinLoseInfo(this, winLose, winResult, v17);
  this->fields.bSetupInfo = 0LL;
  sub_B16F98(&this->fields.bSetupInfo, 0LL);
  BattleScriptRootComponent_TalkScriptInfo__SetBasePhaseOfType(this, type, isPlayedScript, v18);
  this->fields.restoreLine = 0;
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___ctor_19546424(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        BattleSetupInfo_o *battleInfo,
        int32_t type,
        int32_t winLose,
        int32_t winResult,
        bool isPlayedScript,
        const MethodInfo *method)
{
  const MethodInfo *v13; // x3
  struct BattleSetupInfo_o *bSetupInfo; // x8
  const MethodInfo *v15; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.bSetupInfo = battleInfo;
  sub_B16F98(&this->fields.bSetupInfo, battleInfo);
  bSetupInfo = this->fields.bSetupInfo;
  if ( !bSetupInfo )
    sub_B170D4();
  this->fields.wId = bSetupInfo->fields.warId;
  this->fields.qId = bSetupInfo->fields.questId;
  this->fields.pId = bSetupInfo->fields.questPhase;
  this->fields.talkType = type;
  BattleScriptRootComponent_TalkScriptInfo__setWinLoseInfo(this, winLose, winResult, v13);
  BattleScriptRootComponent_TalkScriptInfo__SetBasePhaseOfType(this, type, isPlayedScript, v15);
  this->fields.restoreLine = 0;
}


BattleScriptRootComponent_TalkScriptSaveInfo_o *__fastcall BattleScriptRootComponent_TalkScriptInfo__GetInfoForSave(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x19
  BattleScriptRootComponent_TalkScriptInfo_c *v8; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_StaticFields *static_fields; // x8
  struct System_String_o *TalkResumeVersion; // x1
  BattleSetupInfo_o *bSetupInfo; // x0
  BattleSetupInfo_BattleSetupSaveInfo_o *InfoForSave; // x1

  if ( (byte_40F71AE & 1) == 0 )
  {
    sub_B16FFC(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, method);
    sub_B16FFC(&BattleScriptRootComponent_TalkScriptSaveInfo_TypeInfo, v6);
    byte_40F71AE = 1;
  }
  v7 = sub_B170CC(BattleScriptRootComponent_TalkScriptSaveInfo_TypeInfo, method, v2, v3, v4);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  v8 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  if ( (BYTE3(BattleScriptRootComponent_TalkScriptInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleScriptRootComponent_TalkScriptInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    v8 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  }
  if ( !v7 )
    sub_B170D4();
  static_fields = v8->static_fields;
  TalkResumeVersion = static_fields->TalkResumeVersion;
  *(_QWORD *)(v7 + 16) = static_fields->TalkResumeVersion;
  sub_B16F98(v7 + 16, TalkResumeVersion);
  *(_DWORD *)(v7 + 24) = this->fields.wId;
  *(_DWORD *)(v7 + 28) = this->fields.qId;
  *(_DWORD *)(v7 + 32) = this->fields.pId;
  *(_DWORD *)(v7 + 36) = this->fields.talkType;
  *(_DWORD *)(v7 + 44) = this->fields.winLoseInfo;
  *(_DWORD *)(v7 + 40) = this->fields.talkPhase;
  bSetupInfo = this->fields.bSetupInfo;
  if ( bSetupInfo )
    InfoForSave = BattleSetupInfo__GetInfoForSave(bSetupInfo, 0LL);
  else
    InfoForSave = 0LL;
  *(_QWORD *)(v7 + 48) = InfoForSave;
  sub_B16F98(v7 + 48, InfoForSave);
  return (BattleScriptRootComponent_TalkScriptSaveInfo_o *)v7;
}


int32_t __fastcall BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F71B0 & 1) == 0 )
  {
    sub_B16FFC(&ScriptManager_TypeInfo, method);
    byte_40F71B0 = 1;
  }
  if ( !this->fields.restoreLine )
    return -1;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  return ScriptManager__GetLastLineInfo(0LL);
}


bool __fastcall BattleScriptRootComponent_TalkScriptInfo__IsConsumeAfterBattleWin(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  QuestMaster_o *MasterData_WarQuestSelectionMaster; // x0
  QuestEntity_o *QuestEntity; // x0

  if ( (byte_40F71B2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40F71B2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL
    || (QuestEntity = QuestMaster__getQuestEntity(MasterData_WarQuestSelectionMaster, this->fields.qId, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  return QuestEntity__HasFlag(QuestEntity, 0x40000000LL, 0LL);
}


bool __fastcall BattleScriptRootComponent_TalkScriptInfo__IsRestorable(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t pId; // w20
  int32_t qId; // w21
  int32_t CachedSelectedBranchQuestId; // w20
  WebViewManager_o *Instance; // x0
  QuestMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t ScriptQuestId; // w20
  const MethodInfo *v12; // x1
  int32_t winResult; // w0
  int32_t talkType; // w8
  WebViewManager_o *v15; // x0
  int32_t v16; // w22
  ScriptManager_o *v17; // x21
  System_String_o *ScriptName_BattleStart; // x0
  WebViewManager_o *v19; // x0
  int32_t v20; // w22
  WebViewManager_o *v21; // x21
  System_String_o *ScriptName_BattleStart2; // x0
  System_String_o *v23; // x1
  ScriptManager_o *v24; // x0
  int32_t v25; // w21
  WebViewManager_o *v26; // x0
  int32_t v27; // w23
  ScriptManager_o *v28; // x22
  System_String_o *ScriptName_BattleEnd2; // x0
  _BOOL4 IsExistScriptFile; // w20
  WebViewManager_o *v31; // x0
  int32_t v32; // w23
  WebViewManager_o *v33; // x22
  System_String_o *ScriptName_BattleEnd; // x0
  WebViewManager_o *v35; // x0
  QuestMaster_o *v36; // x0
  QuestEntity_o *QuestEntity; // x0
  _BOOL4 IsOpenByTime; // w8
  bool v39; // w19

  if ( (byte_40F71B1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B16FFC(&ScriptManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F71B1 = 1;
  }
  qId = this->fields.qId;
  pId = this->fields.pId;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  CachedSelectedBranchQuestId = ScriptManager__GetCachedSelectedBranchQuestId(qId, pId, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  MasterData_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_43;
  ScriptQuestId = QuestMaster__getScriptQuestId(MasterData_WarQuestSelectionMaster, CachedSelectedBranchQuestId, 0LL);
  winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(this, v12);
  talkType = this->fields.talkType;
  if ( talkType == 4 )
  {
    v25 = winResult;
    v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v27 = this->fields.pId;
    v28 = (ScriptManager_o *)v26;
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptName_BattleEnd2 = ScriptManager__GetScriptName_BattleEnd2(ScriptQuestId, v27, v25, 0LL);
    if ( !v28 )
      goto LABEL_43;
    if ( !ScriptManager__IsExistScriptFile(v28, ScriptName_BattleEnd2, 0LL) )
    {
      v31 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      v32 = this->fields.pId;
      v33 = v31;
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      ScriptName_BattleEnd = ScriptManager__GetScriptName_BattleEnd(ScriptQuestId, v32, v25, 0LL);
      if ( v33 )
      {
        v23 = ScriptName_BattleEnd;
        v24 = (ScriptManager_o *)v33;
        goto LABEL_31;
      }
LABEL_43:
      sub_B170D4();
    }
  }
  else if ( talkType == 3 )
  {
    v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v16 = this->fields.pId;
    v17 = (ScriptManager_o *)v15;
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptName_BattleStart = ScriptManager__GetScriptName_BattleStart(ScriptQuestId, v16, 0LL);
    if ( !v17 )
      goto LABEL_43;
    if ( !ScriptManager__IsExistScriptFile(v17, ScriptName_BattleStart, 0LL) )
    {
      v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      v20 = this->fields.pId;
      v21 = v19;
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      ScriptName_BattleStart2 = ScriptManager__GetScriptName_BattleStart2(ScriptQuestId, v20, 0LL);
      if ( v21 )
      {
        v23 = ScriptName_BattleStart2;
        v24 = (ScriptManager_o *)v21;
LABEL_31:
        IsExistScriptFile = ScriptManager__IsExistScriptFile(v24, v23, 0LL);
        goto LABEL_32;
      }
      goto LABEL_43;
    }
  }
  IsExistScriptFile = 1;
LABEL_32:
  v35 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v35 )
    goto LABEL_43;
  v36 = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)v35,
                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !v36 )
    goto LABEL_43;
  QuestEntity = QuestMaster__getQuestEntity(v36, this->fields.qId, 0LL);
  if ( QuestEntity )
    IsOpenByTime = QuestEntity__IsOpenByTime(QuestEntity, 0, 0LL);
  else
    IsOpenByTime = 0;
  v39 = IsOpenByTime && IsExistScriptFile;
  if ( !IsOpenByTime || !IsExistScriptFile )
  {
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__DeleteTalkResumeInfo(0LL);
  }
  return v39;
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t talkPhase; // w8
  unsigned int v5; // w8

  if ( (byte_40F71AF & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, method);
    sub_B16FFC(&ScriptManager_TypeInfo, v3);
    byte_40F71AF = 1;
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__DeleteLineInfo(0LL);
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__SetMute(0, 0LL);
  talkPhase = this->fields.talkPhase;
  this->fields.restoreLine = 0;
  v5 = talkPhase - 1;
  if ( v5 <= 8 && ((0x1EFu >> v5) & 1) != 0 )
    this->fields.talkPhase = dword_3132A50[v5];
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo__SetBasePhaseOfType(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        int32_t type,
        bool isPlayedScript,
        const MethodInfo *method)
{
  int32_t v4; // w8

  v4 = 1;
  switch ( type )
  {
    case 3:
    case 5:
      if ( !this )
        sub_B170D4();
      if ( isPlayedScript )
        v4 = 3;
      else
        v4 = 1;
      break;
    case 4:
      v4 = 6;
      break;
    case 6:
      break;
    default:
      v4 = 0;
      break;
  }
  this->fields.talkPhase = v4;
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo__SetJump(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        bool isJump,
        const MethodInfo *method)
{
  int32_t talkPhase; // w8
  int32_t v4; // w8

  this->fields.restoreLine = isJump;
  if ( isJump )
  {
    this->fields.isTitleResume = 1;
    return;
  }
  if ( this->fields.talkType == 1 )
    this->fields.pId = 0;
  talkPhase = this->fields.talkPhase;
  if ( (unsigned int)(talkPhase - 1) < 4 )
  {
    v4 = 1;
  }
  else
  {
    if ( (unsigned int)(talkPhase - 6) >= 4 )
      return;
    v4 = 6;
  }
  this->fields.talkPhase = v4;
}


int32_t __fastcall BattleScriptRootComponent_TalkScriptInfo__get_winResult(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  int32_t winLoseInfo; // w21
  BattleScriptRootComponent_TalkScriptInfo_c *v4; // x0
  int32_t WinResultMultiplicationValue; // w8
  int32_t v6; // w19
  int32_t v7; // w0
  int32_t v8; // w8

  if ( (byte_40F71AA & 1) == 0 )
  {
    sub_B16FFC(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, method);
    byte_40F71AA = 1;
  }
  winLoseInfo = this->fields.winLoseInfo;
  v4 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  if ( (BYTE3(BattleScriptRootComponent_TalkScriptInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleScriptRootComponent_TalkScriptInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    v4 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  }
  WinResultMultiplicationValue = v4->static_fields->WinResultMultiplicationValue;
  if ( winLoseInfo % WinResultMultiplicationValue != 1 )
    return 0;
  v6 = this->fields.winLoseInfo;
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    WinResultMultiplicationValue = BattleScriptRootComponent_TalkScriptInfo_TypeInfo->static_fields->WinResultMultiplicationValue;
  }
  v7 = UnityEngine_Mathf__FloorToInt((float)(v6 / WinResultMultiplicationValue), 0LL);
  if ( v7 == 2 )
    v8 = 2;
  else
    v8 = 1;
  if ( v7 == 3 )
    return 3;
  else
    return v8;
}


int32_t __fastcall BattleScriptRootComponent_TalkScriptInfo__get_win_lose(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  int32_t winLoseInfo; // w19
  BattleScriptRootComponent_TalkScriptInfo_c *v4; // x0

  if ( (byte_40F71AC & 1) == 0 )
  {
    sub_B16FFC(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, method);
    byte_40F71AC = 1;
  }
  winLoseInfo = this->fields.winLoseInfo;
  v4 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  if ( (BYTE3(BattleScriptRootComponent_TalkScriptInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleScriptRootComponent_TalkScriptInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    v4 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  }
  return winLoseInfo % v4->static_fields->WinResultMultiplicationValue;
}


bool __fastcall BattleScriptRootComponent_TalkScriptInfo__isLose(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  return BattleScriptRootComponent_TalkScriptInfo__get_win_lose(this, method) != 1;
}


bool __fastcall BattleScriptRootComponent_TalkScriptInfo__isOnJumpablePhase(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  unsigned int v2; // w8

  v2 = this->fields.talkPhase - 2;
  return v2 <= 6 && (v2 & 1) == 0;
}


bool __fastcall BattleScriptRootComponent_TalkScriptInfo__isPhaseBeforeBattle(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  return (unsigned int)(this->fields.talkPhase - 1) < 4;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleScriptRootComponent_TalkScriptInfo__setWinLoseInfo(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        int32_t winLose,
        int32_t winResult,
        const MethodInfo *method)
{
  BattleScriptRootComponent_TalkScriptInfo_c *v7; // x0
  int win_lose; // w0

  if ( (byte_40F71AB & 1) == 0 )
  {
    sub_B16FFC(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, *(_QWORD *)&winLose);
    byte_40F71AB = 1;
  }
  if ( winLose == 1 )
  {
    v7 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
    if ( winResult == 1 || (winResult & 0xFFFFFFFE) != 2 )
    {
      if ( (WORD1(BattleScriptRootComponent_TalkScriptInfo_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !BattleScriptRootComponent_TalkScriptInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
        v7 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
      }
      win_lose = v7->static_fields->WinResultMultiplicationValue + 1;
    }
    else
    {
      if ( (WORD1(BattleScriptRootComponent_TalkScriptInfo_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !BattleScriptRootComponent_TalkScriptInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
        v7 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
      }
      win_lose = v7->static_fields->WinResultMultiplicationValue * winResult + 1;
    }
  }
  else
  {
    win_lose = BattleScriptRootComponent_TalkScriptInfo__get_win_lose(this, *(const MethodInfo **)&winLose);
  }
  this->fields.winLoseInfo = win_lose;
}


void __fastcall BattleScriptRootComponent_TalkScriptSaveInfo___ctor(
        BattleScriptRootComponent_TalkScriptSaveInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleScriptRootComponent__StartMovie_d__14___ctor(
        BattleScriptRootComponent__StartMovie_d__14_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleScriptRootComponent__StartMovie_d__14__MoveNext(
        BattleScriptRootComponent__StartMovie_d__14_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct BattleScriptRootComponent_o *_4__this; // x22
  WebViewManager_o *Instance; // x0
  QuestPhaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  System_String_o *MovieFolder; // x20
  const MethodInfo *v12; // x1
  System_Action_o *callback; // x0
  bool result; // w0
  BattleScriptRootComponent_TalkScriptInfo_o *v15; // x0
  WebViewManager_o *v16; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v17; // x8
  MovieFileMerge_o *v18; // x21
  WebViewManager_o *v19; // x0
  QuestPhaseMaster_o *v20; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v21; // x8
  int32_t MoviePlayType; // w0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v23; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v24; // x8
  Il2CppObject *v25; // x0
  Il2CppObject **p__2__current; // x19

  if ( (byte_40F71A9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40F71A9 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = this->fields.callback;
    this->fields.__1__state = -1;
    goto LABEL_12;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  _4__this = this->fields.__4__this;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !_4__this )
    goto LABEL_36;
  talkInfo = _4__this->fields.talkInfo;
  if ( !talkInfo || !MasterData_WarQuestSelectionMaster )
    goto LABEL_36;
  MovieFolder = QuestPhaseMaster__GetMovieFolder(
                  MasterData_WarQuestSelectionMaster,
                  talkInfo->fields.qId,
                  talkInfo->fields.pId,
                  0LL);
  if ( System_String__IsNullOrEmpty(MovieFolder, 0LL) )
  {
LABEL_10:
    callback = this->fields.callback;
LABEL_12:
    ActionExtensions__Call(callback, 0LL);
    return 0;
  }
  v15 = _4__this->fields.talkInfo;
  if ( !v15 )
    goto LABEL_36;
  if ( v15->fields.talkPhase == 1 )
    BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(v15, v12);
  v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v16 )
    goto LABEL_36;
  v17 = _4__this->fields.talkInfo;
  if ( !v17 )
    goto LABEL_36;
  v18 = *(MovieFileMerge_o **)&v16[15].fields.m_CachedPtr;
  if ( v17->fields.talkType == 5 )
    goto LABEL_34;
  v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v19
    || (v20 = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)v19,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___),
        (v21 = _4__this->fields.talkInfo) == 0LL)
    || !v20 )
  {
LABEL_36:
    sub_B170D4();
  }
  MoviePlayType = QuestPhaseMaster__GetMoviePlayType(v20, v21->fields.qId, v21->fields.pId, 0LL);
  if ( MoviePlayType == 1 )
  {
    v24 = _4__this->fields.talkInfo;
    if ( !v24 )
      goto LABEL_36;
    if ( v24->fields.talkPhase >= 6 )
      goto LABEL_10;
  }
  else if ( MoviePlayType == 2 )
  {
    v23 = _4__this->fields.talkInfo;
    if ( !v23 )
      goto LABEL_36;
    if ( v23->fields.talkPhase < 5 )
      goto LABEL_10;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0LL);
LABEL_34:
  if ( !v18 )
    goto LABEL_36;
  MovieFileMerge__Initialize(v18, MovieFolder, 0LL);
  v25 = (Il2CppObject *)MovieFileMerge__PlayMP4(v18, 0LL);
  this->fields.__2__current = v25;
  p__2__current = &this->fields.__2__current;
  sub_B16F98(p__2__current, v25);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall BattleScriptRootComponent__StartMovie_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleScriptRootComponent__StartMovie_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleScriptRootComponent__StartMovie_d__14__System_Collections_IEnumerator_Reset(
        BattleScriptRootComponent__StartMovie_d__14_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleScriptRootComponent__StartMovie_d__14_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall BattleScriptRootComponent__StartMovie_d__14__System_Collections_IEnumerator_get_Current(
        BattleScriptRootComponent__StartMovie_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleScriptRootComponent__StartMovie_d__14__System_IDisposable_Dispose(
        BattleScriptRootComponent__StartMovie_d__14_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleScriptRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleScriptRootComponent___c_StaticFields *static_fields; // x0

  if ( (byte_40F71A2 & 1) == 0 )
  {
    sub_B16FFC(&BattleScriptRootComponent___c_TypeInfo, v1);
    byte_40F71A2 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleScriptRootComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleScriptRootComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleScriptRootComponent___c_o *)v5;
  sub_B16F98(static_fields, v5);
}


void __fastcall BattleScriptRootComponent___c___ctor(BattleScriptRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall BattleScriptRootComponent___c___EndRequestBattleScenario_b__37_1(
        BattleScriptRootComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0LL);
}


System_String_o *__fastcall BattleScriptRootComponent___c___EndRequestBattleScenario_b__37_2(
        BattleScriptRootComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0LL);
}


void __fastcall BattleScriptRootComponent___c___TransitionWarBoard_b__47_0(
        BattleScriptRootComponent___c_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40F71A3 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_40F71A3 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall BattleScriptRootComponent___c__DisplayClass21_0___ctor(
        BattleScriptRootComponent___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleScriptRootComponent___c__DisplayClass21_0___StartScriptFinishBattleEnd2_b__0(
        BattleScriptRootComponent___c__DisplayClass21_0_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  BattleScriptRootComponent_o *_4__this; // x0

  if ( (byte_40F71A4 & 1) == 0 )
  {
    sub_B16FFC(&ScriptManager_TypeInfo, str);
    byte_40F71A4 = 1;
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__ClearSelectRouteArray(0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  BattleScriptRootComponent__ProceedToNextTalkPhase(_4__this, this->fields.isExit, 0LL);
}


void __fastcall BattleScriptRootComponent___c__DisplayClass24_0___ctor(
        BattleScriptRootComponent___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleScriptRootComponent___c__DisplayClass24_0___ScriptFinishBattleAfterDemoEnd_b__0(
        BattleScriptRootComponent___c__DisplayClass24_0_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  BattleScriptRootComponent_o *_4__this; // x0

  if ( (byte_40F71A5 & 1) == 0 )
  {
    sub_B16FFC(&ScriptManager_TypeInfo, str);
    byte_40F71A5 = 1;
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__ClearSelectRouteArray(0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  BattleScriptRootComponent__ProceedToNextTalkPhase(_4__this, this->fields.isExit, 0LL);
}


void __fastcall BattleScriptRootComponent___c__DisplayClass44_0___ctor(
        BattleScriptRootComponent___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleScriptRootComponent___c__DisplayClass44_0___StartMashuPowerUpAction_b__0(
        BattleScriptRootComponent___c__DisplayClass44_0_o *this,
        bool is_decide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  NetworkManager_ResultCallbackFunc_o *_9__1; // x20
  TutorialSetRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_40F71A6 & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_TutorialSetRequest___, is_decide);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B16FFC(&Method_BattleScriptRootComponent___c__DisplayClass44_0__StartMashuPowerUpAction_b__1__, v8);
    byte_40F71A6 = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     is_decide,
                                                     method,
                                                     v3,
                                                     v4);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent___c__DisplayClass44_0__StartMashuPowerUpAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(&this->fields.__9__1, _9__1);
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                _9__1,
                                                                (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B170D4();
  TutorialSetRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.tutorial_flag_id, 0LL);
}


void __fastcall BattleScriptRootComponent___c__DisplayClass44_0___StartMashuPowerUpAction_b__1(
        BattleScriptRootComponent___c__DisplayClass44_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0LL);
}


void __fastcall BattleScriptRootComponent___c__DisplayClass48_0___ctor(
        BattleScriptRootComponent___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleScriptRootComponent___c__DisplayClass48_0___PlayStaffRoll_b__0(
        BattleScriptRootComponent___c__DisplayClass48_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x19
  AssetData_o *v15; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *v17; // x0
  UnityEngine_GameObject_o **v18; // x21
  UnityEngine_Transform_o *transform; // x0
  struct BattleScriptRootComponent_o *_4__this; // x8
  UnityEngine_Transform_o *v21; // x20
  int v22; // s0
  UnityEngine_Transform_o *v25; // x20
  int v26; // s0
  srcLineSprite_o *Component_srcLineSprite; // x0
  AssetData_o *v30; // x20
  EndrolRootComponent_o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Action_o *v36; // x22

  if ( (byte_40F71A7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, data);
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EndrolRootComponent___, v8);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&Method_BattleScriptRootComponent___c__DisplayClass48_1__PlayStaffRoll_b__1__, v11);
    sub_B16FFC(&BattleScriptRootComponent___c__DisplayClass48_1_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_5973, v13);
    byte_40F71A7 = 1;
  }
  v14 = sub_B170CC(BattleScriptRootComponent___c__DisplayClass48_1_TypeInfo, data, method, v3, v4);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_18;
  *(_QWORD *)(v14 + 32) = this;
  sub_B16F98(v14 + 32, this);
  *(_QWORD *)(v14 + 24) = data;
  sub_B16F98(v14 + 24, data);
  v15 = *(AssetData_o **)(v14 + 24);
  if ( !v15 )
    goto LABEL_18;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               v15,
                                                                               (System_String_o *)StringLiteral_5973,
                                                                               (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v17 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
          Object_WarBoardWaitTimeSetting,
          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  *(_QWORD *)(v14 + 16) = v17;
  v18 = (UnityEngine_GameObject_o **)(v14 + 16);
  sub_B16F98(v14 + 16, v17);
  if ( !*(_QWORD *)(v14 + 16) )
    goto LABEL_18;
  transform = UnityEngine_GameObject__get_transform(*(UnityEngine_GameObject_o **)(v14 + 16), 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  if ( !transform )
    goto LABEL_18;
  UnityEngine_Transform__set_parent(transform, _4__this->fields.cam, 0LL);
  if ( !*v18 )
    goto LABEL_18;
  v21 = UnityEngine_GameObject__get_transform(*v18, 0LL);
  *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v21 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v21, *(UnityEngine_Vector3_o *)&v22, 0LL);
  if ( !*v18 )
    goto LABEL_18;
  v25 = UnityEngine_GameObject__get_transform(*v18, 0LL);
  *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Vector3__get_one(0LL);
  if ( !v25
    || (UnityEngine_Transform__set_localScale(v25, *(UnityEngine_Vector3_o *)&v26, 0LL), !*v18)
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    *v18,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EndrolRootComponent___),
        v30 = *(AssetData_o **)(v14 + 24),
        v31 = (EndrolRootComponent_o *)Component_srcLineSprite,
        v36 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v32, v33, v34, v35),
        System_Action___ctor(
          v36,
          (Il2CppObject *)v14,
          Method_BattleScriptRootComponent___c__DisplayClass48_1__PlayStaffRoll_b__1__,
          0LL),
        !v31) )
  {
LABEL_18:
    sub_B170D4();
  }
  EndrolRootComponent__Open(v31, v30, v36, 0LL);
}


void __fastcall BattleScriptRootComponent___c__DisplayClass48_1___ctor(
        BattleScriptRootComponent___c__DisplayClass48_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleScriptRootComponent___c__DisplayClass48_1___PlayStaffRoll_b__1(
        BattleScriptRootComponent___c__DisplayClass48_1_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *endObj; // x20
  AssetData_o *data; // x20
  struct BattleScriptRootComponent___c__DisplayClass48_0_o *CS___8__locals1; // x8

  if ( (byte_40F71A8 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F71A8 = 1;
  }
  endObj = (UnityEngine_Object_o *)this->fields.endObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(endObj, 0LL);
  data = this->fields.data;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_29947376(data, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    sub_B170D4();
  ActionExtensions__Call(CS___8__locals1->fields.callback, 0LL);
}