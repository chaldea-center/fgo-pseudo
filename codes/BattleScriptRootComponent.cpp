void __fastcall BattleScriptRootComponent___ctor(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall BattleScriptRootComponent__ChapterStart(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  BattleScriptRootComponent_o *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w19
  System_Action_o *v7; // x21
  int32_t JumpLine; // w20

  v2 = this;
  if ( (byte_4184DFF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_BattleScriptRootComponent__ChapterStart_b__39_0__, v3);
    this = (BattleScriptRootComponent_o *)sub_B2C35C(&ScriptManager_TypeInfo, v4);
    byte_4184DFF = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(v7, (Il2CppObject *)v2, Method_BattleScriptRootComponent__ChapterStart_b__39_0__, 0LL),
        (this = (BattleScriptRootComponent_o *)v2->fields.talkInfo) == 0LL) )
  {
    sub_B2C434(this, method);
  }
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)this,
               0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayChapterStartNotCollection(wId, v7, JumpLine, 0LL);
}


void __fastcall BattleScriptRootComponent__ChapterStartEffect(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  _DWORD *monitor; // x8
  int32_t v6; // w20
  ScriptManager_CallbackFunc_o *v7; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4184E01 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleScriptRootComponent__ChapterStartEffect_b__41_0__, method);
    sub_B2C35C(&ScriptManager_CallbackFunc_TypeInfo, v3);
    this = (BattleScriptRootComponent_o *)sub_B2C35C(&ScriptManager_TypeInfo, v4);
    byte_4184E01 = 1;
  }
  monitor = v2[3].monitor;
  if ( !monitor )
    sub_B2C434(this, method);
  v6 = monitor[4];
  v7 = (ScriptManager_CallbackFunc_o *)sub_B2C42C(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v7, v2, Method_BattleScriptRootComponent__ChapterStartEffect_b__41_0__, 0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayChapterStartEffect(v6, v7, 0, 0LL);
}


void __fastcall BattleScriptRootComponent__ChapterStartEffectQuest(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  _DWORD *monitor; // x8
  int32_t v6; // w20
  ScriptManager_CallbackFunc_o *v7; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4184E02 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleScriptRootComponent__ChapterStartEffectQuest_b__42_0__, method);
    sub_B2C35C(&ScriptManager_CallbackFunc_TypeInfo, v3);
    this = (BattleScriptRootComponent_o *)sub_B2C35C(&ScriptManager_TypeInfo, v4);
    byte_4184E02 = 1;
  }
  monitor = v2[3].monitor;
  if ( !monitor )
    sub_B2C434(this, method);
  v6 = monitor[4];
  v7 = (ScriptManager_CallbackFunc_o *)sub_B2C42C(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v7, v2, Method_BattleScriptRootComponent__ChapterStartEffectQuest_b__42_0__, 0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayChapterStartEffect(v6, v7, 0, 0LL);
}


void __fastcall BattleScriptRootComponent__ChapterStartQuest(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  BattleScriptRootComponent_o *v2; // x21
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w19
  int32_t qId; // w20
  System_Action_o *v8; // x22
  int32_t JumpLine; // w21

  v2 = this;
  if ( (byte_4184E00 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_BattleScriptRootComponent__ChapterStartQuest_b__40_0__, v3);
    this = (BattleScriptRootComponent_o *)sub_B2C35C(&ScriptManager_TypeInfo, v4);
    byte_4184E00 = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        qId = talkInfo->fields.qId,
        v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)v2, Method_BattleScriptRootComponent__ChapterStartQuest_b__40_0__, 0LL),
        (this = (BattleScriptRootComponent_o *)v2->fields.talkInfo) == 0LL) )
  {
    sub_B2C434(this, method);
  }
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)this,
               0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayChapterStartQuestNotCollection(wId, qId, v8, JumpLine, 0LL);
}


void __fastcall BattleScriptRootComponent__ChkCondHavingBranchQuest(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  BattleScriptRootComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  struct BattleSetupInfo_o *bSetupInfo; // x9
  int32_t qId; // w20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v8; // x8
  CommonReleaseMaster_o *v9; // x20
  struct PlayMakerFSM_o *myFSM; // x8
  BattleScriptRootComponent_o *v11; // x21
  unsigned __int64 v12; // x22
  struct PlayMakerFSM_o *v13; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v14; // x8
  __int64 v15; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_4184DEA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v3);
    this = (BattleScriptRootComponent_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4184DEA = 1;
  }
  entity = 0LL;
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_28;
  bSetupInfo = talkInfo->fields.bSetupInfo;
  if ( !bSetupInfo || (qId = bSetupInfo->fields.originQuestId, qId <= 0) )
    qId = talkInfo->fields.qId;
  this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_28;
  this = (BattleScriptRootComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  v8 = v2->fields.talkInfo;
  if ( !v8 || !this )
    goto LABEL_28;
  if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &entity, qId, v8->fields.pId, 0LL) )
    return;
  this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_28;
  this = (BattleScriptRootComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !entity )
    goto LABEL_28;
  v9 = (CommonReleaseMaster_o *)this;
  this = (BattleScriptRootComponent_o *)QuestPhaseEntity__GetCondHavingIds(entity, 0LL);
  if ( !this )
    goto LABEL_28;
  myFSM = this->fields.myFSM;
  v11 = this;
  if ( (int)myFSM < 1 )
    return;
  v12 = 0LL;
  while ( 1 )
  {
    if ( v12 >= (unsigned int)myFSM )
      goto LABEL_29;
    if ( !v9 )
      goto LABEL_28;
    this = (BattleScriptRootComponent_o *)CommonReleaseMaster__IsOpen(
                                            v9,
                                            *((_DWORD *)&v11->fields.uiRoot + v12),
                                            0LL,
                                            0,
                                            0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (BattleScriptRootComponent_o *)entity;
      if ( !entity )
        goto LABEL_28;
      this = (BattleScriptRootComponent_o *)QuestPhaseEntity__GetNotHavingQuests(entity, 0LL);
      if ( !this )
        goto LABEL_28;
      v13 = this->fields.myFSM;
      if ( (__int64)v12 < (int)v13 )
        break;
    }
    LODWORD(myFSM) = v11->fields.myFSM;
    if ( (__int64)++v12 >= (int)myFSM )
      return;
  }
  if ( (unsigned int)v12 >= (unsigned int)v13 )
  {
LABEL_29:
    v15 = sub_B2C460(this);
    sub_B2C400(v15, 0LL);
  }
  v14 = v2->fields.talkInfo;
  if ( !v14 )
LABEL_28:
    sub_B2C434(this, method);
  v14->fields.qId = *((_DWORD *)&this->fields.uiRoot + v12);
}


void __fastcall BattleScriptRootComponent__EndBeforeBattleScript(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x3
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t talkType; // w9
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *v13; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v14; // x8
  BattleSetupInfo_o *bSetupInfo; // x20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v16; // x8
  Il2CppObject *v17; // x3
  int32_t v18; // w1
  TerminalPramsManager_c *v19; // x0
  __int64 v20; // x1
  TerminalPramsManager_c *v21; // x0
  Il2CppObject *WarBoardData_k__BackingField; // x20
  struct WarBoardDataEntity_o **p_WarBoardData_k__BackingField; // x0

  if ( (byte_4184DF6 & 1) == 0 )
  {
    sub_B2C35C(&ScriptManager_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v4);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
    byte_4184DF6 = 1;
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
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          v16 = this->fields.talkInfo;
          if ( !v16 || !Instance )
            goto LABEL_57;
          v17 = (Il2CppObject *)v16->fields.bSetupInfo;
          v18 = 35;
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
          if ( !byte_4184E7B )
          {
            sub_B2C35C(&TerminalPramsManager_TypeInfo, v20);
            byte_4184E7B = 1;
          }
          v21 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v21 = TerminalPramsManager_TypeInfo;
          }
          WarBoardData_k__BackingField = (Il2CppObject *)v21->static_fields->_WarBoardData_k__BackingField;
          if ( !byte_4183CBF )
          {
            sub_B2C35C(&TerminalPramsManager_TypeInfo, v20);
            v21 = TerminalPramsManager_TypeInfo;
            byte_4183CBF = 1;
          }
          if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v21);
            v21 = TerminalPramsManager_TypeInfo;
          }
          p_WarBoardData_k__BackingField = &v21->static_fields->_WarBoardData_k__BackingField;
          *p_WarBoardData_k__BackingField = 0LL;
          sub_B2C2F8(p_WarBoardData_k__BackingField, 0LL);
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !Instance )
            goto LABEL_57;
          v18 = 80;
          v17 = WarBoardData_k__BackingField;
        }
      }
      else
      {
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_4183C70 )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, v7);
          byte_4183C70 = 1;
        }
        v19 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v19 = TerminalPramsManager_TypeInfo;
        }
        v19->static_fields->_IsAutoResume_k__BackingField = 1;
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !Instance )
          goto LABEL_57;
        v18 = 34;
        v17 = 0LL;
      }
      AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, v18, 1, v17, 0, 0LL);
      return;
    case 5:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( Instance )
      {
        Instance = (WebViewManager_o *)ScriptManager__IsBadEndRoute((ScriptManager_o *)Instance, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          BattleScriptRootComponent__RequestBattleSecnarioForNoneBattleQuest(this, 0, v11);
          return;
        }
        talkInfo = this->fields.talkInfo;
        if ( talkInfo )
          goto LABEL_14;
      }
LABEL_57:
      sub_B2C434(Instance, v7);
    case 6:
LABEL_14:
      BattleScriptRootComponent__SavePlayedNotMeetsScript(
        (BattleScriptRootComponent_o *)Instance,
        talkInfo->fields.qId,
        talkInfo->fields.pId,
        v8);
      v13 = this->fields.talkInfo;
      if ( v13 )
      {
        v13->fields.talkPhase = 10;
        v14 = this->fields.talkInfo;
        if ( v14 )
        {
          BattleScriptRootComponent__ProcessBattleScripts(this, v14->fields.talkPhase, v12);
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
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t qId; // w21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v9; // x8
  int32_t pId; // w19
  int v11; // w19
  TerminalPramsManager_c *v12; // x0
  int v13; // w19
  __int64 v14; // x1
  TerminalPramsManager_c *v15; // x0

  if ( (byte_4184E03 & 1) == 0 )
  {
    sub_B2C35C(&ScriptManager_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v4);
    byte_4184E03 = 1;
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
  if ( !byte_4183C6B )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v6);
    byte_4183C6B = 1;
  }
  Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  Instance[2].fields.targetRoot->fields.m_CachedPtr = qId;
  v9 = this->fields.talkInfo;
  if ( !v9 )
    goto LABEL_38;
  pId = v9->fields.pId;
  if ( (Instance[3].fields.fadeType & 0x4000000) != 0 && !Instance[2].fields.fadeType )
    j_il2cpp_runtime_class_init_0(Instance);
  v11 = pId - 1;
  if ( !byte_4183C6C )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v6);
    byte_4183C6C = 1;
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
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  if ( AvalonSceneManager__IsStackScene(Instance, 0LL) )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      AvalonSceneManager__popSceneRefresh(Instance, 2, 0LL, 0LL);
      return;
    }
LABEL_38:
    sub_B2C434(Instance, v6);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C70 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v14);
    byte_4183C70 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, 2, 0LL, 0, 0LL);
}


void __fastcall BattleScriptRootComponent__EndRequestBattleScenario(
        BattleScriptRootComponent_o *this,
        System_String_o *jsonstr,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
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
  _DWORD *monitor; // x8
  BattleScriptRootComponent_TalkScriptInfo_o *v28; // x21
  Il2CppObject *v29; // x21
  BattleResultComponent_resultData_array *v30; // x21
  Il2CppObject *v31; // x0
  struct UIRoot_o *uiRoot; // x24
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  BattleScriptRootComponent_o *v34; // x20
  BattleScriptRootComponent___c_c *v35; // x8
  struct BattleScriptRootComponent___c_StaticFields *static_fields; // x9
  System_Converter_int__string__o *_9__37_1; // x21
  Il2CppObject *v38; // x22
  struct BattleScriptRootComponent___c_StaticFields *v39; // x0
  System_String_array *v40; // x0
  System_String_o *v41; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  BattleScriptRootComponent_o *v43; // x20
  BattleScriptRootComponent___c_c *v44; // x8
  struct BattleScriptRootComponent___c_StaticFields *v45; // x9
  System_Converter_int__string__o *_9__37_2; // x21
  Il2CppObject *v47; // x22
  struct BattleScriptRootComponent___c_StaticFields *v48; // x0
  System_String_array *v49; // x0
  System_String_o *v50; // x0
  QuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v52; // x2
  __int64 v53; // x1
  QuestTree_o *v54; // x20
  TerminalPramsManager_c *v55; // x0
  int32_t WarId_k__BackingField; // w21
  System_Action_o *v57; // x22
  System_Collections_IEnumerator_o *v58; // x1
  _DWORD *v59; // x8
  __int64 v60; // x0

  v4 = (Il2CppObject *)this;
  if ( (byte_4184DFD & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, jsonstr);
    sub_B2C35C(&Method_BattleScriptRootComponent__EndRequestBattleScenario_b__37_0__, v5);
    sub_B2C35C(&Method_System_Converter_int__string___ctor__, v6);
    sub_B2C35C(&System_Converter_int__string__TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_int___, v9);
    sub_B2C35C(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___, v10);
    sub_B2C35C(&JsonManager_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ConvertAll_string___, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, v13);
    sub_B2C35C(&ScriptManager_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v16);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v17);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v18);
    sub_B2C35C(&Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__37_1__, v19);
    sub_B2C35C(&Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__37_2__, v20);
    sub_B2C35C(&BattleScriptRootComponent___c_TypeInfo, v21);
    sub_B2C35C(&StringLiteral_18889/*"freeShopIds"*/, v22);
    sub_B2C35C(&StringLiteral_21811/*"returnRarePriShopIds"*/, v23);
    sub_B2C35C(&StringLiteral_699/*","*/, v24);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v25);
    this = (BattleScriptRootComponent_o *)sub_B2C35C(&StringLiteral_15870/*"]"*/, v26);
    byte_4184DFD = 1;
  }
  monitor = v4[3].monitor;
  if ( !monitor )
    goto LABEL_67;
  monitor[8] = 6;
  v28 = (BattleScriptRootComponent_TalkScriptInfo_o *)v4[3].monitor;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__SaveTalkResumeInfo(v28, 0LL);
  ScriptManager__ClearSelectRouteArray(0LL);
  v29 = (Il2CppObject *)System_String__Concat_44307816(
                          (System_String_o *)StringLiteral_15634/*"["*/,
                          jsonstr,
                          (System_String_o *)StringLiteral_15870/*"]"*/,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v30 = (BattleResultComponent_resultData_array *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                    v29,
                                                    (const MethodInfo_1AACFE4 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__ReceiveQuestEndResultInfo(v30, 1, 0LL);
  v31 = (Il2CppObject *)System_String__Concat_44307816(
                          (System_String_o *)StringLiteral_15634/*"["*/,
                          jsonstr,
                          (System_String_o *)StringLiteral_15870/*"]"*/,
                          0LL);
  this = (BattleScriptRootComponent_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                          v31,
                                          (const MethodInfo_1AACFE4 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  if ( !this )
    goto LABEL_67;
  if ( !LODWORD(this->fields.myFSM) )
  {
    v60 = sub_B2C460(this);
    sub_B2C400(v60, 0LL);
  }
  uiRoot = this->fields.uiRoot;
  if ( !uiRoot )
    goto LABEL_67;
  klass = (System_Collections_Generic_IEnumerable_TSource__o *)uiRoot[6].klass;
  if ( klass )
  {
    this = (BattleScriptRootComponent_o *)System_Linq_Enumerable__ToList_int_(
                                            klass,
                                            (const MethodInfo_1A9DCD4 *)Method_System_Linq_Enumerable_ToList_int___);
    v34 = this;
    v35 = BattleScriptRootComponent___c_TypeInfo;
    if ( (BYTE3(BattleScriptRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleScriptRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleScriptRootComponent___c_TypeInfo);
      v35 = BattleScriptRootComponent___c_TypeInfo;
    }
    static_fields = v35->static_fields;
    _9__37_1 = static_fields->__9__37_1;
    if ( !_9__37_1 )
    {
      if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        static_fields = BattleScriptRootComponent___c_TypeInfo->static_fields;
      }
      v38 = (Il2CppObject *)static_fields->__9;
      _9__37_1 = (System_Converter_int__string__o *)sub_B2C42C(System_Converter_int__string__TypeInfo);
      System_Converter_int__string____ctor(
        _9__37_1,
        v38,
        Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__37_1__,
        (const MethodInfo_24DFC94 *)Method_System_Converter_int__string___ctor__);
      v39 = BattleScriptRootComponent___c_TypeInfo->static_fields;
      v39->__9__37_1 = _9__37_1;
      sub_B2C2F8(&v39->__9__37_1, _9__37_1);
    }
    if ( !v34 )
      goto LABEL_67;
    this = (BattleScriptRootComponent_o *)System_Collections_Generic_List_int___ConvertAll_string_(
                                            (System_Collections_Generic_List_int__o *)v34,
                                            (System_Converter_T__TOutput__o *)_9__37_1,
                                            (const MethodInfo_18F3B04 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_67;
    v40 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this,
                                   (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
    v41 = System_String__Join((System_String_o *)StringLiteral_699/*","*/, v40, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_18889/*"freeShopIds"*/, v41, 0LL);
  }
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)uiRoot[6].monitor;
  if ( v42 )
  {
    this = (BattleScriptRootComponent_o *)System_Linq_Enumerable__ToList_int_(
                                            v42,
                                            (const MethodInfo_1A9DCD4 *)Method_System_Linq_Enumerable_ToList_int___);
    v43 = this;
    v44 = BattleScriptRootComponent___c_TypeInfo;
    if ( (BYTE3(BattleScriptRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleScriptRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleScriptRootComponent___c_TypeInfo);
      v44 = BattleScriptRootComponent___c_TypeInfo;
    }
    v45 = v44->static_fields;
    _9__37_2 = v45->__9__37_2;
    if ( !_9__37_2 )
    {
      if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v44);
        v45 = BattleScriptRootComponent___c_TypeInfo->static_fields;
      }
      v47 = (Il2CppObject *)v45->__9;
      _9__37_2 = (System_Converter_int__string__o *)sub_B2C42C(System_Converter_int__string__TypeInfo);
      System_Converter_int__string____ctor(
        _9__37_2,
        v47,
        Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__37_2__,
        (const MethodInfo_24DFC94 *)Method_System_Converter_int__string___ctor__);
      v48 = BattleScriptRootComponent___c_TypeInfo->static_fields;
      v48->__9__37_2 = _9__37_2;
      sub_B2C2F8(&v48->__9__37_2, _9__37_2);
    }
    if ( !v43 )
      goto LABEL_67;
    this = (BattleScriptRootComponent_o *)System_Collections_Generic_List_int___ConvertAll_string_(
                                            (System_Collections_Generic_List_int__o *)v43,
                                            (System_Converter_T__TOutput__o *)_9__37_2,
                                            (const MethodInfo_18F3B04 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_67;
    v49 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this,
                                   (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
    v50 = System_String__Join((System_String_o *)StringLiteral_699/*","*/, v49, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_21811/*"returnRarePriShopIds"*/, v50, 0LL);
  }
  UnityEngine_PlayerPrefs__Save(0LL);
  this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_67;
  MasterData_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, jsonstr);
    byte_4183C7A = 1;
  }
  this = (BattleScriptRootComponent_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (BattleScriptRootComponent_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_67;
  this = (BattleScriptRootComponent_o *)QuestMaster__getQuestEntity(
                                          MasterData_WarQuestSelectionMaster,
                                          this[2].fields.myFSM->fields.m_CachedPtr,
                                          0LL);
  if ( this )
  {
    this = (BattleScriptRootComponent_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x10000000000000LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      v54 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4183C67 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v53);
        byte_4183C67 = 1;
      }
      v55 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v55 = TerminalPramsManager_TypeInfo;
      }
      WarId_k__BackingField = v55->static_fields->_WarId_k__BackingField;
      v57 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v57, v4, Method_BattleScriptRootComponent__EndRequestBattleScenario_b__37_0__, 0LL);
      if ( v54 )
      {
        v58 = QuestTree__mfBaseTreeUpdateWithOpenCheck(v54, WarId_k__BackingField, v57, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)v4, v58, 0LL);
        return;
      }
LABEL_67:
      sub_B2C434(this, jsonstr);
    }
  }
  v59 = v4[3].monitor;
  if ( !v59 )
    goto LABEL_67;
  BattleScriptRootComponent__ProcessBattleScripts((BattleScriptRootComponent_o *)v4, v59[8], v52);
}


void __fastcall BattleScriptRootComponent__EndRequestBattleSetup(System_String_o *result, const MethodInfo *method)
{
  System_String_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_String_o *name; // x21
  int32_t actMax; // w19
  int32_t birthDay_high; // w20
  const MethodInfo *v13; // x0
  UserGameEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v2 = result;
  if ( (byte_4184DF8 & 1) == 0 )
  {
    sub_B2C35C(&BattleData_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMaster_BattleMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__, v5);
    sub_B2C35C(&ScriptManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    result = (System_String_o *)sub_B2C35C(&StringLiteral_21068/*"ng"*/, v9);
    byte_4184DF8 = 1;
  }
  entity = 0LL;
  if ( !v2 )
    goto LABEL_22;
  if ( System_String__Equals_44292872(v2, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
  {
    result = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( result )
    {
      CommonUI__SetLoadMode((CommonUI_o *)result, 0, 0LL);
      result = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( result )
      {
        AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)result, 34, 1, 0LL, 0, 0LL);
        return;
      }
    }
LABEL_22:
    sub_B2C434(result, method);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !result )
    goto LABEL_22;
  result = (System_String_o *)DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
                                (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)result,
                                &entity,
                                (const MethodInfo_24E43E0 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__);
  if ( ((unsigned __int8)result & 1) != 0 )
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
  BattleScriptRootComponent__StartBattle(v13);
}


void __fastcall BattleScriptRootComponent__GoForBattle(BattleSetupInfo_o *battleSetupInfo, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4184DFA & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleScriptRootComponent_EndRequestBattleSetup__, method);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&ScriptManager_TypeInfo, v4);
    byte_4184DFA = 1;
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__DeleteTalkResumeInfo(0LL);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v5, 0LL, Method_BattleScriptRootComponent_EndRequestBattleSetup__, 0LL);
  BattleScriptRootComponent__RequestBattleSetup(battleSetupInfo, v5, v6);
}


void __fastcall BattleScriptRootComponent__LoadPlayScenarioWithMap(
        BattleScriptRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 v11; // x1
  TerminalPramsManager_c *v12; // x0
  TerminalPramsManager_c *v13; // x0
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4184DEB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, callback);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v7);
    byte_4184DEB = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo || !Instance )
    goto LABEL_42;
  if ( !QuestPhaseDetailMaster__TryGetEntity(
          (QuestPhaseDetailMaster_o *)Instance,
          &entity,
          talkInfo->fields.qId,
          talkInfo->fields.pId,
          0LL) )
    goto LABEL_11;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_42;
  if ( !QuestPhaseDetailEntity__HasFlag(entity, 0x20000000000LL, 0LL) )
  {
LABEL_11:
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0LL) )
    goto LABEL_11;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_42:
    sub_B2C434(Instance, v9);
  AvalonSceneManager__transitionScene_19161880((AvalonSceneManager_o *)Instance, 34, callback, 1, 0LL, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C6F )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v11);
    byte_4183C6F = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->_DispState_k__BackingField = 2;
  if ( !byte_4183C70 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v11);
    byte_4183C70 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_4184732 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v11);
    v13 = TerminalPramsManager_TypeInfo;
    byte_4184732 = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_IsDispOnly_k__BackingField = 1;
  if ( !byte_4184E7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v11);
    v13 = TerminalPramsManager_TypeInfo;
    byte_4184E7A = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_IsScriptDisp_k__BackingField = 1;
  if ( !byte_41846FB )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v11);
    v13 = TerminalPramsManager_TypeInfo;
    byte_41846FB = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_IsPlayScriptWithMap_k__BackingField = 1;
}


void __fastcall BattleScriptRootComponent__OnDestroy(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4184DE4 & 1) == 0 )
  {
    sub_B2C35C(&ScriptManager_TypeInfo, method);
    byte_4184DE4 = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BattleScriptRootComponent___c__DisplayClass48_0_o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  AssetLoader_LoadEndDataHandler_o *v13; // x19

  if ( (byte_4184E08 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, callback);
    sub_B2C35C(&CommonUI_TypeInfo, v5);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_B2C35C(&Method_BattleScriptRootComponent___c__DisplayClass48_0__PlayStaffRoll_b__0__, v7);
    sub_B2C35C(&BattleScriptRootComponent___c__DisplayClass48_0_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_5992/*"Endroll"*/, v9);
    byte_4184E08 = 1;
  }
  v10 = (BattleScriptRootComponent___c__DisplayClass48_0_o *)sub_B2C42C(BattleScriptRootComponent___c__DisplayClass48_0_TypeInfo);
  BattleScriptRootComponent___c__DisplayClass48_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_B2C434(v11, v12);
  v10->fields.__4__this = this;
  sub_B2C2F8(&v10->fields, this);
  v10->fields.callback = callback;
  sub_B2C2F8(&v10->fields.callback, callback);
  if ( (BYTE3(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  CommonUI__SetForceObi_16_9(1, 0LL);
  v13 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v13,
    (Il2CppObject *)v10,
    Method_BattleScriptRootComponent___c__DisplayClass48_0__PlayStaffRoll_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5992/*"Endroll"*/, v13, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_B2C434(talkInfo, isExit);
  }
  BattleScriptRootComponent__ProcessBattleScripts(this, v6->fields.talkPhase, v5);
}


void __fastcall BattleScriptRootComponent__ProceedToNextTalkPhase_19673688(
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
  System_Action_o *v15; // x0
  __int64 *v16; // x8
  clsQuestCheck_o *Instance; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  int32_t FadeoutKind; // w20
  bool v21; // zf
  CommonUI_o *v22; // x20
  const MethodInfo *v23; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *v24; // x8
  System_Action_o *v25; // x20
  const MethodInfo *v26; // x2
  AvalonSceneManager_c *v27; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v29; // x21

  if ( (byte_4184DE9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&phaseType);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v5);
    sub_B2C35C(&Method_BattleScriptRootComponent_StartScriptFinishBattleAfterDemo__, v6);
    sub_B2C35C(&Method_BattleScriptRootComponent_StartScriptFinishBattle__, v7);
    sub_B2C35C(&Method_BattleScriptRootComponent__ProcessBattleScripts_b__15_0__, v8);
    sub_B2C35C(&ScriptManager_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v11);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v12);
    byte_4184DE9 = 1;
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
      Instance = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !Instance )
        goto LABEL_36;
      if ( !clsQuestCheck__isPlayQuestStartAction(Instance, 0LL) )
      {
        BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v19);
        return;
      }
      Instance = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_36;
      FadeoutKind = CommonUI__maskFadGetFadeoutKind((CommonUI_o *)Instance, 0LL);
      Instance = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v21 = FadeoutKind == 1;
      v22 = (CommonUI_o *)Instance;
      if ( v21 )
      {
        if ( Instance )
        {
          CommonUI__maskFadeout((CommonUI_o *)Instance, 1, 0.0, 0LL, 0LL);
          BattleScriptRootComponent__StartBattleQuestStart(this, v23);
          return;
        }
LABEL_36:
        sub_B2C434(Instance, v18);
      }
      v27 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v27 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v27->static_fields->DEFAULT_FADE_TIME;
      v29 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v29,
        (Il2CppObject *)this,
        Method_BattleScriptRootComponent__ProcessBattleScripts_b__15_0__,
        0LL);
      if ( !v22 )
        goto LABEL_36;
      CommonUI__maskFadeout(v22, 1, DEFAULT_FADE_TIME, v29, 0LL);
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
      v24 = this->fields.talkInfo;
      if ( !v24 )
        goto LABEL_36;
      if ( v24->fields.talkType == 5 )
      {
        BattleScriptRootComponent__StartScriptNoBattleAfter(this, v18);
      }
      else
      {
        v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        v16 = &Method_BattleScriptRootComponent_StartScriptFinishBattle__;
LABEL_30:
        v25 = v15;
        System_Action___ctor(v15, (Il2CppObject *)this, *v16, 0LL);
        BattleScriptRootComponent__LoadPlayScenarioWithMap(this, v25, v26);
      }
      return;
    case 7:
      BattleScriptRootComponent__StartDemoFinishBattle(this, v14);
      return;
    case 8:
      v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      v16 = &Method_BattleScriptRootComponent_StartScriptFinishBattleAfterDemo__;
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
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  const MethodInfo *v19; // x1
  CommonUI_o *v20; // x20
  QuestMaster_o *Master_WarQuestSelectionMaster; // x20
  QuestEntity_o *v22; // x20
  NetworkManager_ResultCallbackFunc_o *v23; // x20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v24; // x8
  BattleScenarioRequest_o *v25; // x19
  int32_t pId; // w20
  int32_t qId; // w21
  const MethodInfo *v28; // x4
  QuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4184DFC & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleScriptRootComponent_EndRequestBattleScenario__, isExit);
    sub_B2C35C(&Method_DataManager_GetMasterData_LoginQuestMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_NetworkManager_getRequest_BattleScenarioRequest___, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_B2C35C(&ScriptManager_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v13);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v14);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v15);
    byte_4184DFC = 1;
  }
  entity = 0LL;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__DeleteTalkResumeInfo(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_LoginQuestMaster___);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo || !Instance )
    goto LABEL_54;
  if ( LoginQuestMaster__GetEntityByQuestId((LoginQuestMaster_o *)Instance, talkInfo->fields.qId, 0LL) )
  {
    BattleScriptRootComponent__TransitionTerminal(this, v19);
    return;
  }
  v20 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v17);
    byte_4183C7A = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v20 )
    goto LABEL_54;
  CommonUI__CheckChangeOtherConnectMarkFromQuestClear(
    v20,
    (int32_t)Instance[1].fields.saveNameList->fields._items,
    HIDWORD(Instance[1].fields.saveNameList[13].fields._items),
    0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v17);
    byte_4183C7A = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_54;
  if ( QuestMaster__TryGetQuestEntity(
         Master_WarQuestSelectionMaster,
         &entity,
         (int32_t)Instance[1].fields.saveNameList->fields._items,
         0LL) )
  {
    v22 = entity;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C7B )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v17);
      byte_4183C7B = 1;
    }
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v22 )
      goto LABEL_54;
    if ( QuestEntity__HasFlag_23879348(v22, 0x8000LL, HIDWORD(Instance[1].fields.saveNameList->fields._items) + 1, 0LL) )
    {
      if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
      }
      Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( Instance )
      {
        MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
        goto LABEL_45;
      }
LABEL_54:
      sub_B2C434(Instance, v17);
    }
  }
LABEL_45:
  v23 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v23,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent_EndRequestBattleScenario__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                v23,
                                (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  v24 = this->fields.talkInfo;
  if ( !v24 )
    goto LABEL_54;
  v25 = (BattleScenarioRequest_o *)Instance;
  qId = v24->fields.qId;
  pId = v24->fields.pId;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  Instance = (DataManager_o *)ScriptManager__GetSelectRouteArray(0LL);
  if ( !v25 )
    goto LABEL_54;
  BattleScenarioRequest__beginRequest(v25, qId, pId, (System_Int32_array *)Instance, v28);
}


void __fastcall BattleScriptRootComponent__RequestBattleSetup(
        BattleSetupInfo_o *battleSetupInfo,
        NetworkManager_ResultCallbackFunc_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *routeSelect; // x0
  __int64 v9; // x1
  BattleSetupRequest_o *Request_WarBoardWallAttackRequest; // x20
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
  int64_t activeDeckId; // [xsp+60h] [xbp-60h]
  int32_t questPhase; // [xsp+68h] [xbp-58h]
  int32_t v23; // [xsp+6Ch] [xbp-54h]

  if ( (byte_4184DFB & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_BattleSetupRequest___, callbackFunc);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&ScriptManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4184DFB = 1;
  }
  routeSelect = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !routeSelect )
    goto LABEL_13;
  CommonUI__SetLoadMode(routeSelect, 2, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (BattleSetupRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                callbackFunc,
                                                                (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_BattleSetupRequest___);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  routeSelect = (CommonUI_o *)ScriptManager__GetSelectBranchIndex(0LL);
  if ( !battleSetupInfo )
    goto LABEL_13;
  questId = battleSetupInfo->fields.questId;
  boostId = battleSetupInfo->fields.boostId;
  enemySelect = (int)routeSelect;
  battleSetupInfo->fields.selectedBranchIdx = (int)routeSelect;
  v23 = questId;
  questPhase = battleSetupInfo->fields.questPhase;
  followerId = battleSetupInfo->fields.followerId;
  activeDeckId = battleSetupInfo->fields.deckId;
  followerClassId = battleSetupInfo->fields.followerClassId;
  itemId = battleSetupInfo->fields.itemId;
  v17 = BattleSetupInfo__TargetQuestBranchIdx(battleSetupInfo, 0LL);
  userEquipId = battleSetupInfo->fields.userEquipId;
  followerType = battleSetupInfo->fields.followerType;
  questSelect = v17;
  routeSelect = (CommonUI_o *)ScriptManager__GetSelectRouteArray(0LL);
  if ( !Request_WarBoardWallAttackRequest )
LABEL_13:
    sub_B2C434(routeSelect, v9);
  BattleSetupRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    v23,
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
    (System_Int32_array *)routeSelect,
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
  __int64 v11; // x1
  QuestPhaseEntity_o *Entity; // x0
  System_String_o *ScriptName_NotMeetsCond; // x0
  System_String_o *v14; // x0
  int32_t ScriptIntParam; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4184DF7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_QuestPhaseMaster___, *(_QWORD *)&questId);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&ScriptManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_16593/*"badEndId"*/, v8);
    sub_B2C35C(&StringLiteral_21143/*"notMeets"*/, v9);
    byte_4184DF7 = 1;
  }
  ScriptIntParam = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v11);
  Entity = QuestPhaseMaster__GetEntity(Master_WarQuestSelectionMaster, questId, phase, 0LL);
  if ( Entity )
  {
    ScriptIntParam = QuestPhaseEntity__getScriptIntParam(Entity, (System_String_o *)StringLiteral_16593/*"badEndId"*/, 0, 0LL);
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
    v14 = System_String__Concat_44305532((System_String_o *)StringLiteral_21143/*"notMeets"*/, ScriptName_NotMeetsCond, 0LL);
    UnityEngine_PlayerPrefs__SetInt(v14, 1, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleScriptRootComponent__ScriptFinishBattleAfterDemoEnd(
        BattleScriptRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BattleScriptRootComponent___c__DisplayClass24_0_o *v10; // x21
  System_Int32_array *Request_WarBoardWallAttackRequest; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleRouteSelectRequest_o *v16; // x19
  int32_t pId; // w20
  int32_t qId; // w21
  const MethodInfo *v19; // x4

  if ( (byte_4184DF0 & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___, isExit);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_B2C35C(&ScriptManager_TypeInfo, v7);
    sub_B2C35C(&Method_BattleScriptRootComponent___c__DisplayClass24_0__ScriptFinishBattleAfterDemoEnd_b__0__, v8);
    sub_B2C35C(&BattleScriptRootComponent___c__DisplayClass24_0_TypeInfo, v9);
    byte_4184DF0 = 1;
  }
  v10 = (BattleScriptRootComponent___c__DisplayClass24_0_o *)sub_B2C42C(BattleScriptRootComponent___c__DisplayClass24_0_TypeInfo);
  BattleScriptRootComponent___c__DisplayClass24_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_18;
  v10->fields.__4__this = this;
  sub_B2C2F8(&v10->fields, this);
  v10->fields.isExit = isExit;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  if ( ScriptManager__GetSelectRouteArray(0LL) )
  {
    v14 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v14,
      (Il2CppObject *)v10,
      Method_BattleScriptRootComponent___c__DisplayClass24_0__ScriptFinishBattleAfterDemoEnd_b__0__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (System_Int32_array *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                v14,
                                                                (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      v16 = (BattleRouteSelectRequest_o *)Request_WarBoardWallAttackRequest;
      qId = talkInfo->fields.qId;
      pId = talkInfo->fields.pId;
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = ScriptManager__GetSelectRouteArray(0LL);
      if ( v16 )
      {
        BattleRouteSelectRequest__beginRequest(v16, qId, pId, Request_WarBoardWallAttackRequest, v19);
        return;
      }
    }
LABEL_18:
    sub_B2C434(Request_WarBoardWallAttackRequest, v12);
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v13);
}


bool __fastcall BattleScriptRootComponent__StartBattle(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  int v7; // w20

  if ( (byte_4184DF9 & 1) == 0 )
  {
    sub_B2C35C(&Method_AvalonSceneManager_UnloadScene_FollowerRootComponent___, v1);
    sub_B2C35C(&Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_4184DF9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v7 = BYTE4(Instance[1].fields.baseWindow);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  if ( !v7 )
  {
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 10, 1, 0LL, 0, 0LL);
    return 1;
  }
  AvalonSceneManager__UnloadScene_PartyOrganizationRootComponent_(
    (AvalonSceneManager_o *)Instance,
    (const MethodInfo_1725308 *)Method_AvalonSceneManager_UnloadScene_FollowerRootComponent___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (AvalonSceneManager__UnloadScene_PartyOrganizationRootComponent_(
          (AvalonSceneManager_o *)Instance,
          (const MethodInfo_1725308 *)Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_11:
    sub_B2C434(Instance, v6);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 10, 1, 0LL, 0LL);
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
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4184DF2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_BattleScriptRootComponent_ProceedToNextTalkPhase__, v3);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v4);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v5);
    byte_4184DF2 = 1;
  }
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v6 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleScriptRootComponent_ProceedToNextTalkPhase__, 0LL);
  if ( !v6 )
    sub_B2C434(v8, v9);
  clsQuestCheck__PlayQuestStartAction(v6, v7, 0LL);
}


void __fastcall BattleScriptRootComponent__StartDemoBeforeBattle(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _DWORD *monitor; // x8
  int32_t v7; // w20
  int32_t v8; // w21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v9; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4184DF4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string___ctor__, method);
    sub_B2C35C(&System_Action_string__TypeInfo, v3);
    sub_B2C35C(&Method_BattleScriptRootComponent__StartDemoBeforeBattle_b__28_0__, v4);
    this = (BattleScriptRootComponent_o *)sub_B2C35C(&ScriptManager_TypeInfo, v5);
    byte_4184DF4 = 1;
  }
  monitor = v2[3].monitor;
  if ( !monitor )
    sub_B2C434(this, method);
  v7 = monitor[5];
  v8 = monitor[6];
  v9 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_string__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v9,
    v2,
    Method_BattleScriptRootComponent__StartDemoBeforeBattle_b__28_0__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_string___ctor__);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__LoadBattleStartGameDemo(v7, v8, 0, (System_Action_string__o *)v9, 0, 0LL);
}


void __fastcall BattleScriptRootComponent__StartDemoFinishBattle(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x0
  int32_t qId; // w20
  int32_t pId; // w21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v9; // x22
  const MethodInfo *v10; // x2

  if ( (byte_4184DEE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string___ctor__, method);
    sub_B2C35C(&System_Action_string__TypeInfo, v3);
    sub_B2C35C(&Method_BattleScriptRootComponent__StartDemoFinishBattle_b__22_0__, v4);
    sub_B2C35C(&ScriptManager_TypeInfo, v5);
    byte_4184DEE = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_B2C434(0LL, method);
  qId = talkInfo->fields.qId;
  if ( qId < 1 )
  {
    BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(talkInfo, 0LL);
    BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v10);
  }
  else
  {
    pId = talkInfo->fields.pId;
    v9 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_string__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v9,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent__StartDemoFinishBattle_b__22_0__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_string___ctor__);
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__LoadBattleEndGameDemo(qId, pId, 1, (System_Action_string__o *)v9, 0, 0LL);
  }
}


void __fastcall BattleScriptRootComponent__StartMashuPowerUpAction(
        BattleScriptRootComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BattleScriptRootComponent___c__DisplayClass44_0_o *v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  TerminalPramsManager_c *v14; // x0
  int32_t WarId_k__BackingField; // w21
  CommonUI_o *Instance; // x20
  CombineResultEffectComponent_ClickDelegate_o *v17; // x21

  if ( (byte_4184E04 & 1) == 0 )
  {
    sub_B2C35C(&CombineResultEffectComponent_ClickDelegate_TypeInfo, end_act);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
    sub_B2C35C(&TutorialFlag_TypeInfo, v6);
    sub_B2C35C(&Method_BattleScriptRootComponent___c__DisplayClass44_0__StartMashuPowerUpAction_b__0__, v7);
    sub_B2C35C(&BattleScriptRootComponent___c__DisplayClass44_0_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_8623/*"MASHU_CHANGE_WAR_ID"*/, v9);
    byte_4184E04 = 1;
  }
  v10 = (BattleScriptRootComponent___c__DisplayClass44_0_o *)sub_B2C42C(BattleScriptRootComponent___c__DisplayClass44_0_TypeInfo);
  BattleScriptRootComponent___c__DisplayClass44_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_20;
  v10->fields.end_act = end_act;
  sub_B2C2F8(&v10->fields, end_act);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C67 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v13);
    byte_4183C67 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v14->static_fields->_WarId_k__BackingField;
  if ( WarId_k__BackingField != ConstantMaster__getValue((System_String_o *)StringLiteral_8623/*"MASHU_CHANGE_WAR_ID"*/, 0LL) )
    goto LABEL_17;
  v10->fields.tutorial_flag_id = 115;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28617756(115, 0LL) )
  {
LABEL_17:
    ActionExtensions__Call(v10->fields.end_act, 0LL);
    return;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (CombineResultEffectComponent_ClickDelegate_o *)sub_B2C42C(CombineResultEffectComponent_ClickDelegate_TypeInfo);
  CombineResultEffectComponent_ClickDelegate___ctor(
    v17,
    (Il2CppObject *)v10,
    Method_BattleScriptRootComponent___c__DisplayClass44_0__StartMashuPowerUpAction_b__0__,
    0LL);
  if ( !Instance )
LABEL_20:
    sub_B2C434(v11, v12);
  CommonUI__OpenPowerUp(Instance, v17, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleScriptRootComponent__StartMovie(
        BattleScriptRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  BattleScriptRootComponent__StartMovie_d__14_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4184DE8 & 1) == 0 )
  {
    sub_B2C35C(&BattleScriptRootComponent__StartMovie_d__14_TypeInfo, callback);
    byte_4184DE8 = 1;
  }
  v5 = (BattleScriptRootComponent__StartMovie_d__14_o *)sub_B2C42C(BattleScriptRootComponent__StartMovie_d__14_TypeInfo);
  BattleScriptRootComponent__StartMovie_d__14___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  v5->fields.__4__this = this;
  sub_B2C2F8(&v5->fields.__4__this, this);
  v5->fields.callback = callback;
  sub_B2C2F8(&v5->fields.callback, callback);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleScriptRootComponent__StartScript(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _DWORD *monitor; // x8
  int v9; // w8
  _DWORD *v10; // x8
  const MethodInfo *v11; // x2
  System_Action_o *v12; // x20
  const MethodInfo *v13; // x2
  System_Collections_IEnumerator_o *started; // x1
  BattleScriptRootComponent_TalkScriptInfo_o *v15; // x20
  _DWORD *v16; // x8
  int v17; // w8
  int v18; // w9
  _DWORD *v19; // x8

  v2 = (Il2CppObject *)this;
  if ( (byte_4184DE7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_BattleScriptRootComponent__StartScript_b__13_0__, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v4);
    sub_B2C35C(&ScriptManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    this = (BattleScriptRootComponent_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4184DE7 = 1;
  }
  monitor = v2[3].monitor;
  if ( !monitor )
    goto LABEL_26;
  v9 = monitor[7];
  if ( (unsigned int)(v9 - 3) < 4 )
  {
    this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (BattleScriptRootComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v10 = v2[3].monitor;
      if ( v10 )
      {
        if ( this )
        {
          this = (BattleScriptRootComponent_o *)QuestPhaseMaster__IsMoviePhase(
                                                  (QuestPhaseMaster_o *)this,
                                                  v10[5],
                                                  v10[6],
                                                  0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(v12, v2, Method_BattleScriptRootComponent__StartScript_b__13_0__, 0LL);
            started = BattleScriptRootComponent__StartMovie((BattleScriptRootComponent_o *)v2, v12, v13);
            UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)v2, started, 0LL);
            return;
          }
          v19 = v2[3].monitor;
          if ( v19 )
          {
            BattleScriptRootComponent__ProcessBattleScripts((BattleScriptRootComponent_o *)v2, v19[8], v11);
            return;
          }
        }
      }
    }
LABEL_26:
    sub_B2C434(this, method);
  }
  if ( v9 == 1 )
  {
    this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_26;
    CommonUI__maskFadeout((CommonUI_o *)this, 2, 0.0, 0LL, 0LL);
    v15 = (BattleScriptRootComponent_TalkScriptInfo_o *)v2[3].monitor;
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__SaveTalkResumeInfo(v15, 0LL);
    v16 = v2[3].monitor;
    if ( !v16 )
      goto LABEL_26;
    v18 = v16[5];
    v17 = v16[6];
    if ( v18 <= 0 )
    {
      if ( v17 )
        BattleScriptRootComponent__ChapterStartEffect((BattleScriptRootComponent_o *)v2, method);
      else
        BattleScriptRootComponent__ChapterStart((BattleScriptRootComponent_o *)v2, method);
    }
    else if ( v17 )
    {
      BattleScriptRootComponent__ChapterStartEffectQuest((BattleScriptRootComponent_o *)v2, method);
    }
    else
    {
      BattleScriptRootComponent__ChapterStartQuest((BattleScriptRootComponent_o *)v2, method);
    }
  }
}


void __fastcall BattleScriptRootComponent__StartScriptBefeoreBattleDemo(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  BattleScriptRootComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v11; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v14; // x8
  int32_t wId; // w20
  int32_t qId; // w21
  int32_t pId; // w22
  ScriptManager_CallbackFunc_o *v18; // x23
  struct BattleScriptRootComponent_TalkScriptInfo_o *v19; // x8
  int32_t v20; // w19
  int32_t talkType; // w24

  v2 = this;
  if ( (byte_4184DF3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_BattleScriptRootComponent_ProceedToNextTalkPhase___67385136, v4);
    sub_B2C35C(&Method_BattleScriptRootComponent__StartScriptBefeoreBattleDemo_b__27_0__, v5);
    sub_B2C35C(&ScriptManager_CallbackFunc_TypeInfo, v6);
    sub_B2C35C(&ScriptManager_TypeInfo, v7);
    this = (BattleScriptRootComponent_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4184DF3 = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_17;
  this = (BattleScriptRootComponent_o *)WarMaster__IsLastQuest(talkInfo->fields.wId, talkInfo->fields.qId, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v11 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
    v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v13,
      (Il2CppObject *)v2,
      Method_BattleScriptRootComponent__StartScriptBefeoreBattleDemo_b__27_0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 2, DEFAULT_FADE_TIME, v13, 0LL);
      return;
    }
LABEL_17:
    sub_B2C434(this, method);
  }
  v14 = v2->fields.talkInfo;
  if ( !v14 )
    goto LABEL_17;
  wId = v14->fields.wId;
  qId = v14->fields.qId;
  pId = v14->fields.pId;
  v18 = (ScriptManager_CallbackFunc_o *)sub_B2C42C(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(
    v18,
    (Il2CppObject *)v2,
    Method_BattleScriptRootComponent_ProceedToNextTalkPhase___67385136,
    0LL);
  this = (BattleScriptRootComponent_o *)v2->fields.talkInfo;
  if ( !this )
    goto LABEL_17;
  this = (BattleScriptRootComponent_o *)BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
                                          (BattleScriptRootComponent_TalkScriptInfo_o *)this,
                                          0LL);
  v19 = v2->fields.talkInfo;
  if ( !v19 )
    goto LABEL_17;
  v20 = (int)this;
  talkType = v19->fields.talkType;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayBattleStart(wId, qId, pId, v18, 0, 0LL, v20, talkType == 6, 0, 0LL, 0LL);
}


void __fastcall BattleScriptRootComponent__StartScriptBeforeBattleAfterDemo(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  BattleScriptRootComponent_o *v2; // x22
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w19
  int32_t qId; // w20
  int32_t pId; // w21
  ScriptManager_CallbackFunc_o *v9; // x23
  int32_t JumpLine; // w22

  v2 = this;
  if ( (byte_4184DF5 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleScriptRootComponent_ProceedToNextTalkPhase___67385136, method);
    sub_B2C35C(&ScriptManager_CallbackFunc_TypeInfo, v3);
    this = (BattleScriptRootComponent_o *)sub_B2C35C(&ScriptManager_TypeInfo, v4);
    byte_4184DF5 = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        qId = talkInfo->fields.qId,
        pId = talkInfo->fields.pId,
        v9 = (ScriptManager_CallbackFunc_o *)sub_B2C42C(ScriptManager_CallbackFunc_TypeInfo),
        ScriptManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)v2,
          Method_BattleScriptRootComponent_ProceedToNextTalkPhase___67385136,
          0LL),
        (this = (BattleScriptRootComponent_o *)v2->fields.talkInfo) == 0LL) )
  {
    sub_B2C434(this, method);
  }
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)this,
               0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayBattleStart2(wId, qId, pId, v9, 0, 0LL, JumpLine, 0LL);
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
  AvalonSceneManager_o *talkInfo; // x0
  __int64 v9; // x1
  TerminalPramsManager_c *v10; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v11; // x8
  int32_t pId; // w19
  int32_t qId; // w20
  int v14; // w25
  int32_t winResult; // w21
  ScriptManager_CallbackFunc_o *v16; // x23
  __int64 v17; // x1
  int32_t JumpLine; // w22
  TerminalPramsManager_c *v19; // x0
  _BOOL4 IsPlayScriptWithMap_k__BackingField; // w24

  if ( (byte_4184DEC & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleScriptRootComponent_StartScriptFinishBattleEnd2__, method);
    sub_B2C35C(&BgmManager_TypeInfo, v3);
    sub_B2C35C(&ScriptManager_CallbackFunc_TypeInfo, v4);
    sub_B2C35C(&ScriptManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v7);
    byte_4184DEC = 1;
  }
  talkInfo = (AvalonSceneManager_o *)this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_48;
  if ( BattleScriptRootComponent_TalkScriptInfo__isLose((BattleScriptRootComponent_TalkScriptInfo_o *)talkInfo, 0LL) )
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
    if ( !byte_4183C70 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v9);
      byte_4183C70 = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    v10->static_fields->_IsAutoResume_k__BackingField = 1;
    talkInfo = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( talkInfo )
    {
      AvalonSceneManager__transitionSceneRefresh(talkInfo, 34, 1, 0LL, 0, 0LL);
      return;
    }
LABEL_48:
    sub_B2C434(talkInfo, method);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C78 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4183C78 = 1;
  }
  talkInfo = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    talkInfo = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  v11 = this->fields.talkInfo;
  if ( !v11 )
    goto LABEL_48;
  qId = v11->fields.qId;
  pId = v11->fields.pId;
  v14 = BYTE1(talkInfo[2].fields.targetRoot[1].fields.uiRoot);
  winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(this->fields.talkInfo, 0LL);
  v16 = (ScriptManager_CallbackFunc_o *)sub_B2C42C(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(
    v16,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent_StartScriptFinishBattleEnd2__,
    0LL);
  talkInfo = (AvalonSceneManager_o *)this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_48;
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)talkInfo,
               0LL);
  if ( v14 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C94 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v17);
      byte_4183C94 = 1;
    }
    v19 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
    }
    IsPlayScriptWithMap_k__BackingField = v19->static_fields->_IsPlayScriptWithMap_k__BackingField;
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__PlayBattleEnd2_17621336(
      qId,
      pId,
      winResult,
      15,
      v16,
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
    ScriptManager__PlayBattleEnd2(qId, pId, winResult, v16, 0, JumpLine, 0LL);
  }
}


void __fastcall BattleScriptRootComponent__StartScriptFinishBattleAfterDemo(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x0
  int32_t qId; // w20
  int32_t pId; // w21
  int32_t winResult; // w22
  ScriptManager_CallbackFunc_o *v10; // x23
  int32_t JumpLine; // w19
  struct BattleScriptRootComponent_TalkScriptInfo_o *v12; // x8
  int32_t v13; // w20
  int32_t v14; // w21
  int v15; // w25
  int32_t v16; // w22
  ScriptManager_CallbackFunc_o *v17; // x23
  __int64 v18; // x1
  int32_t v19; // w19
  TerminalPramsManager_c *v20; // x0
  _BOOL4 IsPlayScriptWithMap_k__BackingField; // w24

  if ( (byte_4184DEF & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleScriptRootComponent_ScriptFinishBattleAfterDemoEnd__, method);
    sub_B2C35C(&ScriptManager_CallbackFunc_TypeInfo, v3);
    sub_B2C35C(&ScriptManager_TypeInfo, v4);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
    byte_4184DEF = 1;
  }
  if ( this->fields.setEndRoll )
  {
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      qId = talkInfo->fields.qId;
      pId = talkInfo->fields.pId;
      winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(talkInfo, 0LL);
      v10 = (ScriptManager_CallbackFunc_o *)sub_B2C42C(ScriptManager_CallbackFunc_TypeInfo);
      ScriptManager_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_BattleScriptRootComponent_ScriptFinishBattleAfterDemoEnd__,
        0LL);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(talkInfo, 0LL);
        if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScriptManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        }
        ScriptManager__PlayBattleEndWhite(qId, pId, winResult, v10, 0, JumpLine, 0LL);
        return;
      }
    }
LABEL_37:
    sub_B2C434(talkInfo, method);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C78 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4183C78 = 1;
  }
  talkInfo = (BattleScriptRootComponent_TalkScriptInfo_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    talkInfo = (BattleScriptRootComponent_TalkScriptInfo_o *)TerminalPramsManager_TypeInfo;
  }
  v12 = this->fields.talkInfo;
  if ( !v12 )
    goto LABEL_37;
  v14 = v12->fields.qId;
  v13 = v12->fields.pId;
  v15 = *(unsigned __int8 *)(*(_QWORD *)&talkInfo[3].fields.wId + 89LL);
  v16 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(this->fields.talkInfo, 0LL);
  v17 = (ScriptManager_CallbackFunc_o *)sub_B2C42C(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent_ScriptFinishBattleAfterDemoEnd__,
    0LL);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_37;
  v19 = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(talkInfo, 0LL);
  if ( v15 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C94 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v18);
      byte_4183C94 = 1;
    }
    v20 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v20 = TerminalPramsManager_TypeInfo;
    }
    IsPlayScriptWithMap_k__BackingField = v20->static_fields->_IsPlayScriptWithMap_k__BackingField;
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__PlayBattleEnd_17619968(v14, v13, v16, 15, v17, 0, v19, IsPlayScriptWithMap_k__BackingField, 0LL);
  }
  else
  {
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__PlayBattleEnd(v14, v13, v16, v17, 0, v19, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleScriptRootComponent__StartScriptFinishBattleEnd2(
        BattleScriptRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BattleScriptRootComponent___c__DisplayClass21_0_o *v10; // x21
  System_Int32_array *Request_WarBoardWallAttackRequest; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleRouteSelectRequest_o *v16; // x19
  int32_t pId; // w20
  int32_t qId; // w21
  const MethodInfo *v19; // x4

  if ( (byte_4184DED & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___, isExit);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_B2C35C(&ScriptManager_TypeInfo, v7);
    sub_B2C35C(&Method_BattleScriptRootComponent___c__DisplayClass21_0__StartScriptFinishBattleEnd2_b__0__, v8);
    sub_B2C35C(&BattleScriptRootComponent___c__DisplayClass21_0_TypeInfo, v9);
    byte_4184DED = 1;
  }
  v10 = (BattleScriptRootComponent___c__DisplayClass21_0_o *)sub_B2C42C(BattleScriptRootComponent___c__DisplayClass21_0_TypeInfo);
  BattleScriptRootComponent___c__DisplayClass21_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_18;
  v10->fields.__4__this = this;
  sub_B2C2F8(&v10->fields, this);
  v10->fields.isExit = isExit;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  if ( ScriptManager__GetSelectRouteArray(0LL) )
  {
    v14 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v14,
      (Il2CppObject *)v10,
      Method_BattleScriptRootComponent___c__DisplayClass21_0__StartScriptFinishBattleEnd2_b__0__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (System_Int32_array *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                v14,
                                                                (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      v16 = (BattleRouteSelectRequest_o *)Request_WarBoardWallAttackRequest;
      qId = talkInfo->fields.qId;
      pId = talkInfo->fields.pId;
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = ScriptManager__GetSelectRouteArray(0LL);
      if ( v16 )
      {
        BattleRouteSelectRequest__beginRequest(v16, qId, pId, Request_WarBoardWallAttackRequest, v19);
        return;
      }
    }
LABEL_18:
    sub_B2C434(Request_WarBoardWallAttackRequest, v12);
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v13);
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
  ScriptManager_CallbackFunc_o *v11; // x0
  ScriptManager_CallbackFunc_o *v12; // x22
  int32_t JumpLine; // w23
  int32_t v14; // w23

  if ( (byte_4184DFE & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__38_0__, method);
    sub_B2C35C(&Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__38_1__, v3);
    sub_B2C35C(&ScriptManager_CallbackFunc_TypeInfo, v4);
    sub_B2C35C(&ScriptManager_TypeInfo, v5);
    byte_4184DFE = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_15;
  setEndRoll = this->fields.setEndRoll;
  qId = talkInfo->fields.qId;
  pId = talkInfo->fields.pId;
  winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(talkInfo, 0LL);
  v11 = (ScriptManager_CallbackFunc_o *)sub_B2C42C(ScriptManager_CallbackFunc_TypeInfo);
  v12 = v11;
  if ( setEndRoll )
  {
    ScriptManager_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__38_0__,
      0LL);
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(talkInfo, 0LL);
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      ScriptManager__PlayBattleEndWhite(qId, pId, winResult, v12, 0, JumpLine, 0LL);
      return;
    }
LABEL_15:
    sub_B2C434(talkInfo, method);
  }
  ScriptManager_CallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__38_1__,
    0LL);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_15;
  v14 = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(talkInfo, 0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayBattleEnd(qId, pId, winResult, v12, 0, v14, 0LL);
}


void __fastcall BattleScriptRootComponent__StartSecondDemoFinishBattle(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _DWORD *monitor; // x8
  int32_t v7; // w20
  int32_t v8; // w21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v9; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4184DF1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string___ctor__, method);
    sub_B2C35C(&System_Action_string__TypeInfo, v3);
    sub_B2C35C(&Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__25_0__, v4);
    this = (BattleScriptRootComponent_o *)sub_B2C35C(&ScriptManager_TypeInfo, v5);
    byte_4184DF1 = 1;
  }
  monitor = v2[3].monitor;
  if ( !monitor )
    sub_B2C434(this, method);
  v7 = monitor[5];
  v8 = monitor[6];
  v9 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_string__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v9,
    v2,
    Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__25_0__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_string___ctor__);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__LoadBattleEndGameDemo(v7, v8, 0, (System_Action_string__o *)v9, 0, 0LL);
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
  __int64 v20; // x1
  UnityEngine_MonoBehaviour_o *v21; // x21
  AvalonSceneManager_o *v22; // x22
  System_Action_o *v23; // x23
  __int64 v24; // x1
  TerminalSceneComponent_c *v25; // x0
  UnityEngine_Object_o *mInstance; // x20
  SceneRootComponent_c *klass; // x8
  UnityEngine_Object_o *v28; // x20
  SceneRootComponent_c *v29; // x8
  clsQuestCheck_o *v30; // x20
  TerminalPramsManager_c *v31; // x0
  SceneRootComponent_c *v32; // x8

  if ( (byte_4184E05 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_AvalonSceneManager_UnloadSceneAsync_TerminalSceneComponent___, v3);
    sub_B2C35C(&Method_AvalonSceneManager_UnloadScene_BattleScriptRootComponent___, v4);
    sub_B2C35C(&BalanceConfig_TypeInfo, v5);
    sub_B2C35C(&Method_BattleScriptRootComponent_TransitionTerminalSub__, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&ScriptManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v9);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v10);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v11);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v12);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v13);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v14);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v15);
    byte_4184E05 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C70 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4183C70 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_41846FB )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    v16 = TerminalPramsManager_TypeInfo;
    byte_41846FB = 1;
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
  if ( !byte_4183C78 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v17);
    byte_4183C78 = 1;
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
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_97;
    AvalonSceneManager__UnloadScene_PartyOrganizationRootComponent_(
      Instance,
      (const MethodInfo_1725308 *)Method_AvalonSceneManager_UnloadScene_BattleScriptRootComponent___);
    v21 = (UnityEngine_MonoBehaviour_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v22 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v23 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v23, (Il2CppObject *)this, Method_BattleScriptRootComponent_TransitionTerminalSub__, 0LL);
    if ( !v22 )
      goto LABEL_97;
    Instance = (AvalonSceneManager_o *)AvalonSceneManager__UnloadSceneAsync_TerminalSceneComponent_(
                                         v22,
                                         v23,
                                         (const MethodInfo_17254E8 *)Method_AvalonSceneManager_UnloadSceneAsync_TerminalSceneComponent___);
    if ( !v21 )
      goto LABEL_97;
    UnityEngine_MonoBehaviour__StartCoroutine_35309748(v21, (System_Collections_IEnumerator_o *)Instance, 0LL);
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_4183C65 )
    {
      sub_B2C35C(&TerminalSceneComponent_TypeInfo, v24);
      byte_4183C65 = 1;
    }
    v25 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v25 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_Object_o *)v25->static_fields->mInstance;
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
      if ( !byte_4183C65 )
      {
        sub_B2C35C(&TerminalSceneComponent_TypeInfo, v20);
        byte_4183C65 = 1;
      }
      Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
      }
      klass = Instance[2].fields.targetRoot->klass;
      if ( !klass )
        goto LABEL_97;
      v28 = *(UnityEngine_Object_o **)&klass->_2.static_fields_size;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
      {
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_4183C65 )
        {
          sub_B2C35C(&TerminalSceneComponent_TypeInfo, v20);
          byte_4183C65 = 1;
        }
        Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
        }
        v29 = Instance[2].fields.targetRoot->klass;
        if ( !v29 )
          goto LABEL_97;
        Instance = *(AvalonSceneManager_o **)&v29->_2.static_fields_size;
        if ( !Instance )
          goto LABEL_97;
        ScrTerminalMap__SetDiceButton((ScrTerminalMap_o *)Instance, 0LL);
        if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
        }
        Instance = (AvalonSceneManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
        v30 = (clsQuestCheck_o *)Instance;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        }
        if ( !v30 )
          goto LABEL_97;
        if ( clsQuestCheck__CheckQuestPlayableNow(
               v30,
               BalanceConfig_TypeInfo->static_fields->EventBoardGameNextBoardQuestId,
               0LL) )
        {
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_4184E7C )
          {
            sub_B2C35C(&TerminalPramsManager_TypeInfo, v20);
            byte_4184E7C = 1;
          }
          v31 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v31 = TerminalPramsManager_TypeInfo;
          }
          v31->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField = 1;
          if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
          }
          Instance = (AvalonSceneManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
          if ( Instance )
          {
            MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
            return;
          }
LABEL_97:
          sub_B2C434(Instance, v20);
        }
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_4183C65 )
        {
          sub_B2C35C(&TerminalSceneComponent_TypeInfo, v20);
          byte_4183C65 = 1;
        }
        Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
        }
        v32 = Instance[2].fields.targetRoot->klass;
        if ( !v32 )
          goto LABEL_97;
        Instance = *(AvalonSceneManager_o **)&v32->_2.static_fields_size;
        if ( !Instance )
          goto LABEL_97;
        ScrTerminalMap__SetEventBoardQuestArrivalPanel((ScrTerminalMap_o *)Instance, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t v9; // w20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v10; // x8
  int32_t talkType; // w21
  bool v12; // w19
  __int64 v13; // x1
  TerminalPramsManager_c *v14; // x0

  if ( (byte_4184E06 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
    byte_4184E06 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo || !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)QuestPhaseMaster__IsInvisibleConnectAndLoad(
                                (QuestPhaseMaster_o *)Instance,
                                talkInfo->fields.qId,
                                talkInfo->fields.pId,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4184E7D )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v7);
      byte_4184E7D = 1;
    }
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    }
    v9 = 2;
    LOBYTE(Instance[1].fields.saveNameList[13].fields._items) = 1;
  }
  else
  {
    v9 = 1;
  }
  v10 = this->fields.talkInfo;
  if ( !v10 )
    goto LABEL_33;
  talkType = v10->fields.talkType;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  if ( talkType != 5 )
  {
LABEL_23:
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, v9, 0LL, 0, 0LL);
    goto LABEL_24;
  }
  v12 = AvalonSceneManager__checkLoadedScene((AvalonSceneManager_o *)Instance, 34, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_33:
    sub_B2C434(Instance, v7);
  if ( !v12 )
    goto LABEL_23;
  AvalonSceneManager__changeScene((AvalonSceneManager_o *)Instance, 34, v9, 0LL, 0LL);
LABEL_24:
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184E7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v13);
    byte_4184E7A = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_IsScriptDisp_k__BackingField = 0;
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
  AvalonSceneManager_o *Instance; // x0
  const MethodInfo *v12; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleSetupInfo_o *bSetupInfo; // x20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v15; // x8
  Il2CppObject *v16; // x3
  int32_t v17; // w1
  CommonUI_o *v18; // x19
  BattleScriptRootComponent___c_c *v19; // x8
  struct BattleScriptRootComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__47_0; // x22
  System_String_o *v22; // x20
  System_String_o *v23; // x21
  Il2CppObject *v24; // x23
  struct BattleScriptRootComponent___c_StaticFields *v25; // x0
  TerminalPramsManager_c *v26; // x0

  if ( (byte_4184E07 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&ScriptManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v6);
    sub_B2C35C(&Method_BattleScriptRootComponent___c__TransitionWarBoard_b__47_0__, v7);
    sub_B2C35C(&BattleScriptRootComponent___c_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_23834/*"バトルスクリプトエラー"*/, v9);
    sub_B2C35C(&StringLiteral_23835/*"バトル前スクリプト以外のトークから聖杯戦争盤へ移動することはできません。\nターミナルへ戻ります。"*/, v10);
    byte_4184E07 = 1;
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
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = (CommonUI_o *)Instance;
    v19 = BattleScriptRootComponent___c_TypeInfo;
    if ( (BYTE3(BattleScriptRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleScriptRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleScriptRootComponent___c_TypeInfo);
      v19 = BattleScriptRootComponent___c_TypeInfo;
    }
    static_fields = v19->static_fields;
    _9__47_0 = static_fields->__9__47_0;
    v22 = (System_String_o *)StringLiteral_23835/*"バトル前スクリプト以外のトークから聖杯戦争盤へ移動することはできません。\nターミナルへ戻ります。"*/;
    v23 = (System_String_o *)StringLiteral_23834/*"バトルスクリプトエラー"*/;
    if ( !_9__47_0 )
    {
      if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        static_fields = BattleScriptRootComponent___c_TypeInfo->static_fields;
      }
      v24 = (Il2CppObject *)static_fields->__9;
      _9__47_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(_9__47_0, v24, Method_BattleScriptRootComponent___c__TransitionWarBoard_b__47_0__, 0LL);
      v25 = BattleScriptRootComponent___c_TypeInfo->static_fields;
      v25->__9__47_0 = _9__47_0;
      sub_B2C2F8(&v25->__9__47_0, _9__47_0);
    }
    if ( v18 )
    {
      CommonUI__OpenNotificationDialog(v18, v23, v22, _9__47_0, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
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
    if ( !byte_4183C70 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v12);
      byte_4183C70 = 1;
    }
    v26 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v26 = TerminalPramsManager_TypeInfo;
    }
    v26->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      v17 = 34;
      v16 = 0LL;
      goto LABEL_36;
    }
LABEL_38:
    sub_B2C434(Instance, v12);
  }
  if ( bSetupInfo->fields.isScriptBeforePartySelect )
  {
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    bSetupInfo->fields.selectedBranchIdx = ScriptManager__GetSelectBranchIndex(0LL);
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v15 = this->fields.talkInfo;
    if ( v15 && Instance )
    {
      v16 = (Il2CppObject *)v15->fields.bSetupInfo;
      v17 = 35;
LABEL_36:
      AvalonSceneManager__transitionSceneRefresh(Instance, v17, 1, v16, 0, 0LL);
      return;
    }
    goto LABEL_38;
  }
  BattleScriptRootComponent__GoForBattle(bSetupInfo, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleScriptRootComponent___ChapterStartEffect_b__41_0(
        BattleScriptRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_o *v5; // x20
  BattleScriptRootComponent_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4184E10 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isExit);
    sub_B2C35C(&Method_BattleScriptRootComponent__ChapterStartEffect_b__41_1__, v4);
    byte_4184E10 = 1;
  }
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleScriptRootComponent__ChapterStartEffect_b__41_1__, 0LL);
  BattleScriptRootComponent__StartMashuPowerUpAction(v6, v5, v7);
}


void __fastcall BattleScriptRootComponent___ChapterStartEffect_b__41_1(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  BattleScriptRootComponent_o *v2; // x19
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w20
  const MethodInfo *v5; // x1

  v2 = this;
  if ( (byte_4184E11 & 1) == 0 )
  {
    this = (BattleScriptRootComponent_o *)sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184E11 = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo )
    sub_B2C434(this, method);
  wId = talkInfo->fields.wId;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__SetWarStartedId(wId, 0LL);
  BattleScriptRootComponent__EndChapterStart(v2, v5);
}


void __fastcall BattleScriptRootComponent___ChapterStartQuest_b__40_0(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  BattleScriptRootComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleScriptRootComponent_TalkScriptInfo_o *v10; // x20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v11; // x8
  WarEntity_o *WarEntityByWarID; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v13; // x8
  const MethodInfo *v14; // x1
  TerminalPramsManager_c *v15; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v2 = this;
  if ( (byte_4184E0F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_WarMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v4);
    sub_B2C35C(&ScriptManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v6);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v7);
    this = (BattleScriptRootComponent_o *)sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
    byte_4184E0F = 1;
  }
  entity = 0LL;
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_30;
  ++talkInfo->fields.pId;
  v10 = v2->fields.talkInfo;
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
  this = (BattleScriptRootComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  v11 = v2->fields.talkInfo;
  if ( !v11 || !this )
    goto LABEL_30;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)this, v11->fields.wId, 0LL);
  entity = WarEntityByWarID;
  if ( !WarEntityByWarID )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleScriptRootComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarMaster___);
    v13 = v2->fields.talkInfo;
    if ( v13 && this )
    {
      DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
        (DataMasterBase_WarMaster__WarEntity__int__o *)this,
        &entity,
        v13->fields.wId,
        (const MethodInfo_24E412C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
      WarEntityByWarID = entity;
      if ( !entity )
        goto LABEL_29;
      goto LABEL_19;
    }
LABEL_30:
    sub_B2C434(this, method);
  }
LABEL_19:
  if ( WarEntity__HasFlag(WarEntityByWarID, 0x8000, 0LL) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C96 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v14);
      byte_4183C96 = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v15->static_fields->_IsPhaseClear_k__BackingField = 1;
  }
LABEL_29:
  BattleScriptRootComponent__ChapterStartEffectQuest(v2, v14);
}


void __fastcall BattleScriptRootComponent___ChapterStart_b__39_0(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  BattleScriptRootComponent_o *v2; // x19
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleScriptRootComponent_TalkScriptInfo_o *v4; // x20
  const MethodInfo *v5; // x1

  v2 = this;
  if ( (byte_4184E0E & 1) == 0 )
  {
    this = (BattleScriptRootComponent_o *)sub_B2C35C(&ScriptManager_TypeInfo, method);
    byte_4184E0E = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo )
    sub_B2C434(this, method);
  ++talkInfo->fields.pId;
  v4 = v2->fields.talkInfo;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__SaveTalkResumeInfo(v4, 0LL);
  BattleScriptRootComponent__ChapterStartEffect(v2, v5);
}


void __fastcall BattleScriptRootComponent___EndRequestBattleScenario_b__37_0(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8

  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_B2C434(this, method);
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
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 bSetupInfo; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v11; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v12; // x8

  if ( (byte_4184E0C & 1) == 0 )
  {
    sub_B2C35C(&BattleSetupInfo_TypeInfo, demoInfo);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4184E0C = 1;
  }
  if ( demoInfo )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 1, 0LL);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        bSetupInfo = (__int64)talkInfo->fields.bSetupInfo;
        if ( !bSetupInfo )
        {
          bSetupInfo = sub_B2C42C(BattleSetupInfo_TypeInfo);
          BattleSetupInfo___ctor((BattleSetupInfo_o *)bSetupInfo, 0LL);
          v11 = this->fields.talkInfo;
          if ( !v11 )
            goto LABEL_14;
          if ( !bSetupInfo )
            goto LABEL_14;
          *(_DWORD *)(bSetupInfo + 20) = v11->fields.qId;
          v12 = this->fields.talkInfo;
          if ( !v12 )
            goto LABEL_14;
          *(_DWORD *)(bSetupInfo + 24) = v12->fields.pId;
        }
        *(_QWORD *)(bSetupInfo + 104) = demoInfo;
        *(_WORD *)(bSetupInfo + 96) = 1;
        sub_B2C2F8(bSetupInfo + 104, demoInfo);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 50, 1, (Il2CppObject *)bSetupInfo, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B2C434(Instance, v8);
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
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 bSetupInfo; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v11; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v12; // x8

  if ( (byte_4184E09 & 1) == 0 )
  {
    sub_B2C35C(&BattleSetupInfo_TypeInfo, demoInfo);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4184E09 = 1;
  }
  if ( demoInfo )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 1, 0LL);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        bSetupInfo = (__int64)talkInfo->fields.bSetupInfo;
        if ( !bSetupInfo )
        {
          bSetupInfo = sub_B2C42C(BattleSetupInfo_TypeInfo);
          BattleSetupInfo___ctor((BattleSetupInfo_o *)bSetupInfo, 0LL);
          v11 = this->fields.talkInfo;
          if ( !v11 )
            goto LABEL_14;
          if ( !bSetupInfo )
            goto LABEL_14;
          *(_DWORD *)(bSetupInfo + 20) = v11->fields.qId;
          v12 = this->fields.talkInfo;
          if ( !v12 )
            goto LABEL_14;
          *(_DWORD *)(bSetupInfo + 24) = v12->fields.pId;
        }
        *(_QWORD *)(bSetupInfo + 104) = demoInfo;
        *(_WORD *)(bSetupInfo + 96) = 256;
        sub_B2C2F8(bSetupInfo + 104, demoInfo);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 50, 1, (Il2CppObject *)bSetupInfo, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B2C434(Instance, v8);
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, method);
}


void __fastcall BattleScriptRootComponent___StartScriptBefeoreBattleDemo_b__27_0(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  BattleScriptRootComponent_o *v2; // x23
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w19
  int32_t qId; // w20
  int32_t pId; // w21
  ScriptManager_CallbackFunc_o *v9; // x22
  int32_t JumpLine; // w23

  v2 = this;
  if ( (byte_4184E0B & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleScriptRootComponent_RequestBattleSecnarioForNoneBattleQuest__, method);
    sub_B2C35C(&ScriptManager_CallbackFunc_TypeInfo, v3);
    this = (BattleScriptRootComponent_o *)sub_B2C35C(&ScriptManager_TypeInfo, v4);
    byte_4184E0B = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        qId = talkInfo->fields.qId,
        pId = talkInfo->fields.pId,
        v9 = (ScriptManager_CallbackFunc_o *)sub_B2C42C(ScriptManager_CallbackFunc_TypeInfo),
        ScriptManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)v2,
          Method_BattleScriptRootComponent_RequestBattleSecnarioForNoneBattleQuest__,
          0LL),
        (this = (BattleScriptRootComponent_o *)v2->fields.talkInfo) == 0LL) )
  {
    sub_B2C434(this, method);
  }
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)this,
               0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayBattleStartWhite(wId, qId, pId, v9, 0, 0LL, JumpLine, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleScriptRootComponent___StartScriptNoBattleAfter_b__38_0(
        BattleScriptRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4184E0D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isExit);
    sub_B2C35C(&Method_BattleScriptRootComponent_TransitionTerminal__, v4);
    byte_4184E0D = 1;
  }
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleScriptRootComponent_TransitionTerminal__, 0LL);
  BattleScriptRootComponent__PlayStaffRoll(this, v5, v6);
}


void __fastcall BattleScriptRootComponent___StartScript_b__13_0(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8

  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_B2C434(this, method);
  BattleScriptRootComponent__ProcessBattleScripts(this, talkInfo->fields.talkPhase, v2);
}


void __fastcall BattleScriptRootComponent___StartSecondDemoFinishBattle_b__25_0(
        BattleScriptRootComponent_o *this,
        System_String_o *demoInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  CommonUI_o *Instance; // x0
  __int64 v10; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 bSetupInfo; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v13; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v14; // x8
  System_Action_o *v15; // x20
  const MethodInfo *v16; // x2

  if ( (byte_4184E0A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, demoInfo);
    sub_B2C35C(&Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__25_1__, v5);
    sub_B2C35C(&BattleSetupInfo_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4184E0A = 1;
  }
  if ( demoInfo )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 1, 0LL);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        bSetupInfo = (__int64)talkInfo->fields.bSetupInfo;
        if ( !bSetupInfo )
        {
          bSetupInfo = sub_B2C42C(BattleSetupInfo_TypeInfo);
          BattleSetupInfo___ctor((BattleSetupInfo_o *)bSetupInfo, 0LL);
          v13 = this->fields.talkInfo;
          if ( !v13 )
            goto LABEL_16;
          if ( !bSetupInfo )
            goto LABEL_16;
          *(_DWORD *)(bSetupInfo + 20) = v13->fields.qId;
          v14 = this->fields.talkInfo;
          if ( !v14 )
            goto LABEL_16;
          *(_DWORD *)(bSetupInfo + 24) = v14->fields.pId;
        }
        *(_QWORD *)(bSetupInfo + 104) = demoInfo;
        *(_WORD *)(bSetupInfo + 96) = 0;
        sub_B2C2F8(bSetupInfo + 104, demoInfo);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 50, 1, (Il2CppObject *)bSetupInfo, 0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_B2C434(Instance, v10);
  }
  if ( this->fields.setEndRoll )
  {
    v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v15,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__25_1__,
      0LL);
    BattleScriptRootComponent__PlayStaffRoll(this, v15, v16);
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
  __int64 v5; // x1

  if ( (byte_4184DE5 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4184DE5 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode(Instance, 0, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B2C434(Instance, v5);
  }
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
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
    sub_B2C434(0LL, data);
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
  __int64 v11; // x1
  BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x0
  WarEntity_o *QuestId; // x0
  int32_t id; // w20
  bool v15; // w8
  BattleScriptRootComponent_o *v16; // x0
  Il2CppObject *v17; // x1
  const MethodInfo *v18; // x2

  if ( (byte_4184DE6 & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, data);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarMaster___, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_6333/*"FES_WAR_ID"*/, v8);
    byte_4184DE6 = 1;
  }
  if ( data )
  {
    v9 = *(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo->_2.bitflags2 + 1);
    if ( *(&data->klass->_2.bitflags2 + 1) < (unsigned int)v9
      || (BattleScriptRootComponent_TalkScriptInfo_c *)data->klass->_2.typeHierarchy[v9 - 1] != BattleScriptRootComponent_TalkScriptInfo_TypeInfo )
    {
      v16 = (BattleScriptRootComponent_o *)sub_B2C728(data);
      BattleScriptRootComponent__beginResume(v16, v17, v18);
      return;
    }
  }
  this->fields.talkInfo = (struct BattleScriptRootComponent_TalkScriptInfo_o *)data;
  p_talkInfo = &this->fields.talkInfo;
  sub_B2C2F8(&this->fields.talkInfo, data);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_23;
  if ( talkInfo->fields.restoreLine )
  {
    talkInfo = (BattleScriptRootComponent_TalkScriptInfo_o *)BattleScriptRootComponent_TalkScriptInfo__isOnJumpablePhase(
                                                               talkInfo,
                                                               0LL);
    if ( ((unsigned __int8)talkInfo & 1) != 0 )
    {
      if ( !*p_talkInfo )
        goto LABEL_23;
      if ( !(*p_talkInfo)->fields.isTitleResume )
      {
        if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BgmManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
        }
        BgmManager__SetMute(1, 0LL);
      }
    }
  }
  if ( !*p_talkInfo
    || ((*p_talkInfo)->fields.isTitleResume = 0,
        (talkInfo = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (talkInfo = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)talkInfo,
                                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarMaster___),
        !*p_talkInfo)
    || !talkInfo )
  {
LABEL_23:
    sub_B2C434(talkInfo, v11);
  }
  QuestId = WarMaster__getByLastQuestId((WarMaster_o *)talkInfo, (*p_talkInfo)->fields.qId, 0LL);
  if ( QuestId )
  {
    id = QuestId->fields.id;
    v15 = id == ConstantMaster__getValue((System_String_o *)StringLiteral_6333/*"FES_WAR_ID"*/, 0LL);
  }
  else
  {
    v15 = 0;
  }
  this->fields.setEndRoll = v15;
  SceneRootComponent__beginStartUp_17297004((SceneRootComponent_o *)this, 0LL);
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_StaticFields *static_fields; // x0
  __int64 v4; // x1

  if ( (byte_41850BD & 1) == 0 )
  {
    sub_B2C35C(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_1106/*"2.0"*/, v2);
    byte_41850BD = 1;
  }
  static_fields = BattleScriptRootComponent_TalkScriptInfo_TypeInfo->static_fields;
  v4 = StringLiteral_1106/*"2.0"*/;
  static_fields->TalkResumeVersion = (struct System_String_o *)StringLiteral_1106/*"2.0"*/;
  sub_B2C2F8(static_fields, v4);
  BattleScriptRootComponent_TalkScriptInfo_TypeInfo->static_fields->WinResultMultiplicationValue = 100;
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___ctor(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___ctor_20075640(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        BattleScriptRootComponent_TalkScriptSaveInfo_o *saveInfo,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  BattleSetupInfo_BattleSetupSaveInfo_o *bSetupInfo; // x21
  BattleSetupInfo_o *v8; // x20
  struct BattleSetupInfo_o **p_bSetupInfo; // x19

  if ( (byte_41850B7 & 1) == 0 )
  {
    sub_B2C35C(&BattleSetupInfo_TypeInfo, saveInfo);
    byte_41850B7 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !saveInfo )
    sub_B2C434(v5, v6);
  this->fields.wId = saveInfo->fields.wId;
  this->fields.qId = saveInfo->fields.qId;
  this->fields.pId = saveInfo->fields.pId;
  this->fields.talkType = saveInfo->fields.talkType;
  this->fields.winLoseInfo = saveInfo->fields.winLoseInfo;
  this->fields.talkPhase = saveInfo->fields.talkPhase;
  bSetupInfo = saveInfo->fields.bSetupInfo;
  if ( bSetupInfo )
  {
    v8 = (BattleSetupInfo_o *)sub_B2C42C(BattleSetupInfo_TypeInfo);
    BattleSetupInfo___ctor_29930344(v8, bSetupInfo, 0LL);
  }
  else
  {
    v8 = 0LL;
  }
  this->fields.bSetupInfo = v8;
  p_bSetupInfo = &this->fields.bSetupInfo;
  sub_B2C2F8(p_bSetupInfo, v8);
  *((_BYTE *)p_bSetupInfo + 9) = 0;
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___ctor_20075848(
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
  sub_B2C2F8(v16, 0LL);
  BYTE1(v16->monitor) = 0;
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___ctor_20075984(
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
  sub_B2C2F8(&this->fields.bSetupInfo, 0LL);
  BattleScriptRootComponent_TalkScriptInfo__SetBasePhaseOfType(this, type, isPlayedScript, v18);
  this->fields.restoreLine = 0;
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___ctor_20076220(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        BattleSetupInfo_o *battleInfo,
        int32_t type,
        int32_t winLose,
        int32_t winResult,
        bool isPlayedScript,
        const MethodInfo *method)
{
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  struct BattleSetupInfo_o *bSetupInfo; // x8
  const MethodInfo *v17; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.bSetupInfo = battleInfo;
  sub_B2C2F8(&this->fields.bSetupInfo, battleInfo);
  bSetupInfo = this->fields.bSetupInfo;
  if ( !bSetupInfo )
    sub_B2C434(v13, v14);
  this->fields.wId = bSetupInfo->fields.warId;
  this->fields.qId = bSetupInfo->fields.questId;
  this->fields.pId = bSetupInfo->fields.questPhase;
  this->fields.talkType = type;
  BattleScriptRootComponent_TalkScriptInfo__setWinLoseInfo(this, winLose, winResult, v15);
  BattleScriptRootComponent_TalkScriptInfo__SetBasePhaseOfType(this, type, isPlayedScript, v17);
  this->fields.restoreLine = 0;
}


BattleScriptRootComponent_TalkScriptSaveInfo_o *__fastcall BattleScriptRootComponent_TalkScriptInfo__GetInfoForSave(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x19
  __int64 v5; // x1
  BattleScriptRootComponent_TalkScriptInfo_c *v6; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_StaticFields *static_fields; // x8
  struct System_String_o *TalkResumeVersion; // x1
  BattleSetupInfo_o *bSetupInfo; // x0
  BattleSetupInfo_BattleSetupSaveInfo_o *InfoForSave; // x1

  if ( (byte_41850B8 & 1) == 0 )
  {
    sub_B2C35C(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, method);
    sub_B2C35C(&BattleScriptRootComponent_TalkScriptSaveInfo_TypeInfo, v3);
    byte_41850B8 = 1;
  }
  v4 = sub_B2C42C(BattleScriptRootComponent_TalkScriptSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  v6 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  if ( (BYTE3(BattleScriptRootComponent_TalkScriptInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleScriptRootComponent_TalkScriptInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    v6 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  }
  if ( !v4 )
    sub_B2C434(v6, v5);
  static_fields = v6->static_fields;
  TalkResumeVersion = static_fields->TalkResumeVersion;
  *(_QWORD *)(v4 + 16) = static_fields->TalkResumeVersion;
  sub_B2C2F8(v4 + 16, TalkResumeVersion);
  *(_DWORD *)(v4 + 24) = this->fields.wId;
  *(_DWORD *)(v4 + 28) = this->fields.qId;
  *(_DWORD *)(v4 + 32) = this->fields.pId;
  *(_DWORD *)(v4 + 36) = this->fields.talkType;
  *(_DWORD *)(v4 + 44) = this->fields.winLoseInfo;
  *(_DWORD *)(v4 + 40) = this->fields.talkPhase;
  bSetupInfo = this->fields.bSetupInfo;
  if ( bSetupInfo )
    InfoForSave = BattleSetupInfo__GetInfoForSave(bSetupInfo, 0LL);
  else
    InfoForSave = 0LL;
  *(_QWORD *)(v4 + 48) = InfoForSave;
  sub_B2C2F8(v4 + 48, InfoForSave);
  return (BattleScriptRootComponent_TalkScriptSaveInfo_o *)v4;
}


int32_t __fastcall BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_41850BA & 1) == 0 )
  {
    sub_B2C35C(&ScriptManager_TypeInfo, method);
    byte_41850BA = 1;
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
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_41850BC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_41850BC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL
    || (Instance = (DataManager_o *)QuestMaster__getQuestEntity((QuestMaster_o *)Instance, this->fields.qId, 0LL)) == 0LL )
  {
    sub_B2C434(Instance, v5);
  }
  return QuestEntity__HasFlag((QuestEntity_o *)Instance, 0x40000000LL, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  int32_t ScriptQuestId; // w20
  const MethodInfo *v12; // x1
  int32_t winResult; // w0
  int32_t talkType; // w8
  WebViewManager_o *v15; // x0
  int32_t v16; // w22
  ScriptManager_o *v17; // x21
  WebViewManager_o *v18; // x0
  int32_t v19; // w22
  WebViewManager_o *v20; // x21
  System_String_o *v21; // x1
  ScriptManager_o *v22; // x0
  int32_t v23; // w21
  WebViewManager_o *v24; // x0
  int32_t v25; // w23
  ScriptManager_o *v26; // x22
  _BOOL4 IsExistScriptFile; // w20
  WebViewManager_o *v28; // x0
  int32_t v29; // w23
  WebViewManager_o *v30; // x22
  QuestEntity_o *QuestEntity; // x0
  _BOOL4 IsOpenByTime; // w8
  bool v33; // w19

  if ( (byte_41850BB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B2C35C(&ScriptManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_41850BB = 1;
  }
  qId = this->fields.qId;
  pId = this->fields.pId;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  CachedSelectedBranchQuestId = ScriptManager__GetCachedSelectedBranchQuestId(qId, pId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_43;
  ScriptQuestId = QuestMaster__getScriptQuestId((QuestMaster_o *)Instance, CachedSelectedBranchQuestId, 0LL);
  winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(this, v12);
  talkType = this->fields.talkType;
  if ( talkType == 4 )
  {
    v23 = winResult;
    v24 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v25 = this->fields.pId;
    v26 = (ScriptManager_o *)v24;
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    Instance = (DataManager_o *)ScriptManager__GetScriptName_BattleEnd2(ScriptQuestId, v25, v23, 0LL);
    if ( !v26 )
      goto LABEL_43;
    if ( !ScriptManager__IsExistScriptFile(v26, (System_String_o *)Instance, 0LL) )
    {
      v28 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      v29 = this->fields.pId;
      v30 = v28;
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      Instance = (DataManager_o *)ScriptManager__GetScriptName_BattleEnd(ScriptQuestId, v29, v23, 0LL);
      if ( v30 )
      {
        v21 = (System_String_o *)Instance;
        v22 = (ScriptManager_o *)v30;
        goto LABEL_31;
      }
LABEL_43:
      sub_B2C434(Instance, v10);
    }
  }
  else if ( talkType == 3 )
  {
    v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v16 = this->fields.pId;
    v17 = (ScriptManager_o *)v15;
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    Instance = (DataManager_o *)ScriptManager__GetScriptName_BattleStart(ScriptQuestId, v16, 0LL);
    if ( !v17 )
      goto LABEL_43;
    if ( !ScriptManager__IsExistScriptFile(v17, (System_String_o *)Instance, 0LL) )
    {
      v18 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      v19 = this->fields.pId;
      v20 = v18;
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      Instance = (DataManager_o *)ScriptManager__GetScriptName_BattleStart2(ScriptQuestId, v19, 0LL);
      if ( v20 )
      {
        v21 = (System_String_o *)Instance;
        v22 = (ScriptManager_o *)v20;
LABEL_31:
        IsExistScriptFile = ScriptManager__IsExistScriptFile(v22, v21, 0LL);
        goto LABEL_32;
      }
      goto LABEL_43;
    }
  }
  IsExistScriptFile = 1;
LABEL_32:
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_43;
  QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)Instance, this->fields.qId, 0LL);
  if ( QuestEntity )
    IsOpenByTime = QuestEntity__IsOpenByTime(QuestEntity, 0, 0LL);
  else
    IsOpenByTime = 0;
  v33 = IsOpenByTime && IsExistScriptFile;
  if ( !IsOpenByTime || !IsExistScriptFile )
  {
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__DeleteTalkResumeInfo(0LL);
  }
  return v33;
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t talkPhase; // w8
  unsigned int v5; // w8

  if ( (byte_41850B9 & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, method);
    sub_B2C35C(&ScriptManager_TypeInfo, v3);
    byte_41850B9 = 1;
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
    this->fields.talkPhase = dword_319F150[v5];
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
        sub_B2C434(0LL, type);
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

  if ( (byte_41850B4 & 1) == 0 )
  {
    sub_B2C35C(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, method);
    byte_41850B4 = 1;
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

  if ( (byte_41850B6 & 1) == 0 )
  {
    sub_B2C35C(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, method);
    byte_41850B6 = 1;
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

  if ( (byte_41850B5 & 1) == 0 )
  {
    sub_B2C35C(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, *(_QWORD *)&winLose);
    byte_41850B5 = 1;
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
  void *Instance; // x0
  const MethodInfo *v9; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  System_String_o *MovieFolder; // x20
  System_Action_o *callback; // x0
  bool result; // w0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v14; // x8
  MovieFileMerge_o *v15; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v16; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v17; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v18; // x8
  Il2CppObject *v19; // x0
  Il2CppObject **p__2__current; // x19

  if ( (byte_41850B3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_41850B3 = 1;
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !_4__this )
    goto LABEL_36;
  talkInfo = _4__this->fields.talkInfo;
  if ( !talkInfo || !Instance )
    goto LABEL_36;
  MovieFolder = QuestPhaseMaster__GetMovieFolder(
                  (QuestPhaseMaster_o *)Instance,
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
  Instance = _4__this->fields.talkInfo;
  if ( !Instance )
    goto LABEL_36;
  if ( *((_DWORD *)Instance + 8) == 1 )
    BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(
      (BattleScriptRootComponent_TalkScriptInfo_o *)Instance,
      v9);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v14 = _4__this->fields.talkInfo;
  if ( !v14 )
    goto LABEL_36;
  v15 = (MovieFileMerge_o *)*((_QWORD *)Instance + 200);
  if ( v14->fields.talkType == 5 )
    goto LABEL_34;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___),
        (v16 = _4__this->fields.talkInfo) == 0LL)
    || !Instance )
  {
LABEL_36:
    sub_B2C434(Instance, v9);
  }
  Instance = (void *)QuestPhaseMaster__GetMoviePlayType(
                       (QuestPhaseMaster_o *)Instance,
                       v16->fields.qId,
                       v16->fields.pId,
                       0LL);
  if ( (_DWORD)Instance == 1 )
  {
    v18 = _4__this->fields.talkInfo;
    if ( !v18 )
      goto LABEL_36;
    if ( v18->fields.talkPhase >= 6 )
      goto LABEL_10;
  }
  else if ( (_DWORD)Instance == 2 )
  {
    v17 = _4__this->fields.talkInfo;
    if ( !v17 )
      goto LABEL_36;
    if ( v17->fields.talkPhase < 5 )
      goto LABEL_10;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0LL);
LABEL_34:
  if ( !v15 )
    goto LABEL_36;
  MovieFileMerge__Initialize(v15, MovieFolder, 0LL);
  v19 = (Il2CppObject *)MovieFileMerge__PlayMP4(v15, 0LL);
  this->fields.__2__current = v19;
  p__2__current = &this->fields.__2__current;
  sub_B2C2F8(p__2__current, v19);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattleScriptRootComponent__StartMovie_d__14_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  Il2CppObject *v2; // x19
  struct BattleScriptRootComponent___c_StaticFields *static_fields; // x0

  if ( (byte_41850AC & 1) == 0 )
  {
    sub_B2C35C(&BattleScriptRootComponent___c_TypeInfo, v1);
    byte_41850AC = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattleScriptRootComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = BattleScriptRootComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleScriptRootComponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  __int64 v3; // x1

  if ( (byte_41850AD & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_41850AD = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
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
  __int64 v4; // x1
  BattleScriptRootComponent_o *_4__this; // x0

  if ( (byte_41850AE & 1) == 0 )
  {
    sub_B2C35C(&ScriptManager_TypeInfo, str);
    byte_41850AE = 1;
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__ClearSelectRouteArray(0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, v4);
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
  __int64 v4; // x1
  BattleScriptRootComponent_o *_4__this; // x0

  if ( (byte_41850AF & 1) == 0 )
  {
    sub_B2C35C(&ScriptManager_TypeInfo, str);
    byte_41850AF = 1;
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__ClearSelectRouteArray(0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, v4);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *_9__1; // x20
  TutorialSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v9; // x1

  if ( (byte_41850B0 & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_TutorialSetRequest___, is_decide);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B2C35C(&Method_BattleScriptRootComponent___c__DisplayClass44_0__StartMashuPowerUpAction_b__1__, v6);
    byte_41850B0 = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent___c__DisplayClass44_0__StartMashuPowerUpAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B2C2F8(&this->fields.__9__1, _9__1);
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                _9__1,
                                                                (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B2C434(0LL, v9);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *v12; // x19
  UnityEngine_Transform_o *monitor; // x0
  __int64 v14; // x1
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *v16; // x0
  UnityEngine_Transform_o **v17; // x21
  struct BattleScriptRootComponent_o *_4__this; // x8
  UnityEngine_Transform_o *transform; // x20
  int v20; // s0
  UnityEngine_Transform_o *v23; // x20
  int v24; // s0
  srcLineSprite_o *Component_srcLineSprite; // x0
  AssetData_o *v28; // x20
  EndrolRootComponent_o *v29; // x21
  System_Action_o *v30; // x22

  if ( (byte_41850B1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, data);
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EndrolRootComponent___, v6);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Method_BattleScriptRootComponent___c__DisplayClass48_1__PlayStaffRoll_b__1__, v9);
    sub_B2C35C(&BattleScriptRootComponent___c__DisplayClass48_1_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_5991/*"EndrolPanel"*/, v11);
    byte_41850B1 = 1;
  }
  v12 = (Il2CppObject *)sub_B2C42C(BattleScriptRootComponent___c__DisplayClass48_1_TypeInfo);
  System_Object___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_18;
  v12[2].klass = (Il2CppClass *)this;
  sub_B2C2F8(&v12[2], this);
  v12[1].monitor = data;
  sub_B2C2F8(&v12[1].monitor, data);
  monitor = (UnityEngine_Transform_o *)v12[1].monitor;
  if ( !monitor )
    goto LABEL_18;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               (AssetData_o *)monitor,
                                                                               (System_String_o *)StringLiteral_5991/*"EndrolPanel"*/,
                                                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v16 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
          Object_WarBoardWaitTimeSetting,
          (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v12[1].klass = (Il2CppClass *)v16;
  v17 = (UnityEngine_Transform_o **)&v12[1];
  sub_B2C2F8(&v12[1], v16);
  monitor = (UnityEngine_Transform_o *)v12[1].klass;
  if ( !monitor )
    goto LABEL_18;
  monitor = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)monitor, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  if ( !monitor )
    goto LABEL_18;
  UnityEngine_Transform__set_parent(monitor, _4__this->fields.cam, 0LL);
  monitor = *v17;
  if ( !*v17 )
    goto LABEL_18;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)monitor, 0LL);
  *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v20, 0LL);
  monitor = *v17;
  if ( !*v17 )
    goto LABEL_18;
  v23 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)monitor, 0LL);
  *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_one(0LL);
  if ( !v23
    || (UnityEngine_Transform__set_localScale(v23, *(UnityEngine_Vector3_o *)&v24, 0LL), (monitor = *v17) == 0LL)
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)monitor,
                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EndrolRootComponent___),
        v28 = (AssetData_o *)v12[1].monitor,
        v29 = (EndrolRootComponent_o *)Component_srcLineSprite,
        v30 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v30,
          v12,
          Method_BattleScriptRootComponent___c__DisplayClass48_1__PlayStaffRoll_b__1__,
          0LL),
        !v29) )
  {
LABEL_18:
    sub_B2C434(monitor, v14);
  }
  EndrolRootComponent__Open(v29, v28, v30, 0LL);
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
  __int64 v6; // x0
  __int64 v7; // x1
  struct BattleScriptRootComponent___c__DisplayClass48_0_o *CS___8__locals1; // x8

  if ( (byte_41850B2 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_41850B2 = 1;
  }
  endObj = (UnityEngine_Object_o *)this->fields.endObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(endObj, 0LL);
  data = this->fields.data;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_30152684(data, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    sub_B2C434(v6, v7);
  ActionExtensions__Call(CS___8__locals1->fields.callback, 0LL);
}