void __fastcall BattleScriptRootComponent___ctor(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall BattleScriptRootComponent__ChapterStart(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleScriptRootComponent_o *v4; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w19
  System_Action_o *v13; // x21
  int32_t JumpLine; // w20

  v4 = this;
  if ( (byte_42E5780 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattleScriptRootComponent__ChapterStart_b__39_0__, v5, v6, v7);
    this = (BattleScriptRootComponent_o *)sub_B5D5C4(&ScriptManager_TypeInfo, v8, v9, v10);
    byte_42E5780 = 1;
  }
  talkInfo = v4->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(v13, (Il2CppObject *)v4, Method_BattleScriptRootComponent__ChapterStart_b__39_0__, 0LL),
        (this = (BattleScriptRootComponent_o *)v4->fields.talkInfo) == 0LL) )
  {
    sub_B5D69C(this, method);
  }
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)this,
               0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayChapterStartNotCollection(wId, v13, JumpLine, 0LL);
}


void __fastcall BattleScriptRootComponent__ChapterStartEffect(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _DWORD *monitor; // x8
  int32_t v12; // w20
  ScriptManager_CallbackFunc_o *v13; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_42E5782 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleScriptRootComponent__ChapterStartEffect_b__41_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ScriptManager_CallbackFunc_TypeInfo, v5, v6, v7);
    this = (BattleScriptRootComponent_o *)sub_B5D5C4(&ScriptManager_TypeInfo, v8, v9, v10);
    byte_42E5782 = 1;
  }
  monitor = v4[3].monitor;
  if ( !monitor )
    sub_B5D69C(this, method);
  v12 = monitor[4];
  v13 = (ScriptManager_CallbackFunc_o *)sub_B5D694(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v13, v4, Method_BattleScriptRootComponent__ChapterStartEffect_b__41_0__, 0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayChapterStartEffect(v12, v13, 0, 0LL);
}


void __fastcall BattleScriptRootComponent__ChapterStartEffectQuest(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _DWORD *monitor; // x8
  int32_t v12; // w20
  ScriptManager_CallbackFunc_o *v13; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_42E5783 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleScriptRootComponent__ChapterStartEffectQuest_b__42_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ScriptManager_CallbackFunc_TypeInfo, v5, v6, v7);
    this = (BattleScriptRootComponent_o *)sub_B5D5C4(&ScriptManager_TypeInfo, v8, v9, v10);
    byte_42E5783 = 1;
  }
  monitor = v4[3].monitor;
  if ( !monitor )
    sub_B5D69C(this, method);
  v12 = monitor[4];
  v13 = (ScriptManager_CallbackFunc_o *)sub_B5D694(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v13, v4, Method_BattleScriptRootComponent__ChapterStartEffectQuest_b__42_0__, 0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayChapterStartEffect(v12, v13, 0, 0LL);
}


void __fastcall BattleScriptRootComponent__ChapterStartQuest(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleScriptRootComponent_o *v4; // x21
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w19
  int32_t qId; // w20
  System_Action_o *v14; // x22
  int32_t JumpLine; // w21

  v4 = this;
  if ( (byte_42E5781 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattleScriptRootComponent__ChapterStartQuest_b__40_0__, v5, v6, v7);
    this = (BattleScriptRootComponent_o *)sub_B5D5C4(&ScriptManager_TypeInfo, v8, v9, v10);
    byte_42E5781 = 1;
  }
  talkInfo = v4->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        qId = talkInfo->fields.qId,
        v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)v4,
          Method_BattleScriptRootComponent__ChapterStartQuest_b__40_0__,
          0LL),
        (this = (BattleScriptRootComponent_o *)v4->fields.talkInfo) == 0LL) )
  {
    sub_B5D69C(this, method);
  }
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)this,
               0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayChapterStartQuestNotCollection(wId, qId, v14, JumpLine, 0LL);
}


void __fastcall BattleScriptRootComponent__ChkCondHavingBranchQuest(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleScriptRootComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  struct BattleSetupInfo_o *bSetupInfo; // x9
  int32_t qId; // w20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v14; // x8
  CommonReleaseMaster_o *v15; // x20
  struct PlayMakerFSM_o *myFSM; // x8
  BattleScriptRootComponent_o *v17; // x21
  unsigned __int64 v18; // x22
  struct PlayMakerFSM_o *v19; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v20; // x8
  __int64 v21; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_42E576B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v5, v6, v7);
    this = (BattleScriptRootComponent_o *)sub_B5D5C4(
                                            &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                            v8,
                                            v9,
                                            v10);
    byte_42E576B = 1;
  }
  entity = 0LL;
  talkInfo = v4->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_28;
  bSetupInfo = talkInfo->fields.bSetupInfo;
  if ( !bSetupInfo || (qId = bSetupInfo->fields.originQuestId, qId <= 0) )
    qId = talkInfo->fields.qId;
  this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_28;
  this = (BattleScriptRootComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  v14 = v4->fields.talkInfo;
  if ( !v14 || !this )
    goto LABEL_28;
  if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &entity, qId, v14->fields.pId, 0LL) )
    return;
  this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_28;
  this = (BattleScriptRootComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !entity )
    goto LABEL_28;
  v15 = (CommonReleaseMaster_o *)this;
  this = (BattleScriptRootComponent_o *)QuestPhaseEntity__GetCondHavingIds(entity, 0LL);
  if ( !this )
    goto LABEL_28;
  myFSM = this->fields.myFSM;
  v17 = this;
  if ( (int)myFSM < 1 )
    return;
  v18 = 0LL;
  while ( 1 )
  {
    if ( v18 >= (unsigned int)myFSM )
      goto LABEL_29;
    if ( !v15 )
      goto LABEL_28;
    this = (BattleScriptRootComponent_o *)CommonReleaseMaster__IsOpen(
                                            v15,
                                            *((_DWORD *)&v17->fields.uiRoot + v18),
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
      v19 = this->fields.myFSM;
      if ( (__int64)v18 < (int)v19 )
        break;
    }
    LODWORD(myFSM) = v17->fields.myFSM;
    if ( (__int64)++v18 >= (int)myFSM )
      return;
  }
  if ( (unsigned int)v18 >= (unsigned int)v19 )
  {
LABEL_29:
    v21 = sub_B5D6C8(this);
    sub_B5D668(v21, 0LL);
  }
  v20 = v4->fields.talkInfo;
  if ( !v20 )
LABEL_28:
    sub_B5D69C(this, method);
  v20->fields.qId = *((_DWORD *)&this->fields.uiRoot + v18);
}


void __fastcall BattleScriptRootComponent__EndBeforeBattleScript(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  const MethodInfo *v15; // x1
  int v16; // w2
  const MethodInfo *v17; // x3
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t talkType; // w9
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *v22; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v23; // x8
  BattleSetupInfo_o *bSetupInfo; // x20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v25; // x8
  Il2CppObject *v26; // x3
  int32_t v27; // w1
  TerminalPramsManager_c *v28; // x0
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  TerminalPramsManager_c *v32; // x0
  Il2CppObject *WarBoardData_k__BackingField; // x20
  struct WarBoardDataEntity_o **p_WarBoardData_k__BackingField; // x0

  if ( (byte_42E5777 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v11, v12, v13);
    byte_42E5777 = 1;
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
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          v25 = this->fields.talkInfo;
          if ( !v25 || !Instance )
            goto LABEL_57;
          v26 = (Il2CppObject *)v25->fields.bSetupInfo;
          v27 = 35;
        }
        else
        {
          if ( !bSetupInfo->fields.isScriptBeforeWarBoard )
          {
            BattleScriptRootComponent__GoForBattle(bSetupInfo, v15);
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
          if ( !byte_42E57FE )
          {
            sub_B5D5C4(&TerminalPramsManager_TypeInfo, v29, v30, v31);
            byte_42E57FE = 1;
          }
          v32 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v32 = TerminalPramsManager_TypeInfo;
          }
          WarBoardData_k__BackingField = (Il2CppObject *)v32->static_fields->_WarBoardData_k__BackingField;
          if ( !byte_42E4B7B )
          {
            sub_B5D5C4(&TerminalPramsManager_TypeInfo, v29, v30, v31);
            v32 = TerminalPramsManager_TypeInfo;
            byte_42E4B7B = 1;
          }
          if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v32);
            v32 = TerminalPramsManager_TypeInfo;
          }
          p_WarBoardData_k__BackingField = &v32->static_fields->_WarBoardData_k__BackingField;
          *p_WarBoardData_k__BackingField = 0LL;
          sub_B5D560(p_WarBoardData_k__BackingField);
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !Instance )
            goto LABEL_57;
          v27 = 80;
          v26 = WarBoardData_k__BackingField;
        }
      }
      else
      {
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_42E4B29 )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)v15, v16, v17);
          byte_42E4B29 = 1;
        }
        v28 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v28 = TerminalPramsManager_TypeInfo;
        }
        v28->static_fields->_IsAutoResume_k__BackingField = 1;
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !Instance )
          goto LABEL_57;
        v27 = 34;
        v26 = 0LL;
      }
      AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, v27, 1, v26, 0, 0LL);
      return;
    case 5:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( Instance )
      {
        Instance = (WebViewManager_o *)ScriptManager__IsBadEndRoute((ScriptManager_o *)Instance, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          BattleScriptRootComponent__RequestBattleSecnarioForNoneBattleQuest(this, 0, v20);
          return;
        }
        talkInfo = this->fields.talkInfo;
        if ( talkInfo )
          goto LABEL_14;
      }
LABEL_57:
      sub_B5D69C(Instance, v15);
    case 6:
LABEL_14:
      BattleScriptRootComponent__SavePlayedNotMeetsScript(
        (BattleScriptRootComponent_o *)Instance,
        talkInfo->fields.qId,
        talkInfo->fields.pId,
        v17);
      v22 = this->fields.talkInfo;
      if ( v22 )
      {
        v22->fields.talkPhase = 10;
        v23 = this->fields.talkInfo;
        if ( v23 )
        {
          BattleScriptRootComponent__ProcessBattleScripts(this, v23->fields.talkPhase, v21);
          return;
        }
      }
      goto LABEL_57;
  }
}


void __fastcall BattleScriptRootComponent__EndChapterStart(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v12; // x1
  int v13; // w2
  __int64 v14; // x3
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t qId; // w21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v17; // x8
  int32_t pId; // w19
  int v19; // w19
  TerminalPramsManager_c *v20; // x0
  int v21; // w19
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  TerminalPramsManager_c *v25; // x0

  if ( (byte_42E5784 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v8, v9, v10);
    byte_42E5784 = 1;
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
  if ( !byte_42E4B24 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v12, v13, v14);
    byte_42E4B24 = 1;
  }
  Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  Instance[2].fields.targetRoot->fields.m_CachedPtr = qId;
  v17 = this->fields.talkInfo;
  if ( !v17 )
    goto LABEL_38;
  pId = v17->fields.pId;
  if ( (Instance[3].fields.fadeType & 0x4000000) != 0 && !Instance[2].fields.fadeType )
    j_il2cpp_runtime_class_init_0(Instance);
  v19 = pId - 1;
  if ( !byte_42E4B25 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v12, v13, v14);
    byte_42E4B25 = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  v21 = v19 & ~(v19 >> 31);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  v20->static_fields->_PhaseCnt_k__BackingField = v21;
  TerminalPramsManager__SaveQuestInfo_SaveData(0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  if ( AvalonSceneManager__IsStackScene(Instance, 0LL) )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      AvalonSceneManager__popSceneRefresh(Instance, 2, 0LL, 0LL);
      return;
    }
LABEL_38:
    sub_B5D69C(Instance, v12);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B29 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v22, v23, v24);
    byte_42E4B29 = 1;
  }
  v25 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v25 = TerminalPramsManager_TypeInfo;
  }
  v25->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, 2, 0LL, 0, 0LL);
}


void __fastcall BattleScriptRootComponent__EndRequestBattleScenario(
        BattleScriptRootComponent_o *this,
        System_String_o *jsonstr,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  _DWORD *monitor; // x8
  BattleScriptRootComponent_TalkScriptInfo_o *v73; // x21
  Il2CppObject *v74; // x21
  BattleResultComponent_resultData_array *v75; // x21
  Il2CppObject *v76; // x0
  struct UIRoot_o *uiRoot; // x24
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  BattleScriptRootComponent_o *v79; // x20
  BattleScriptRootComponent___c_c *v80; // x8
  struct BattleScriptRootComponent___c_StaticFields *static_fields; // x9
  System_Converter_int__string__o *_9__37_1; // x21
  Il2CppObject *v83; // x22
  struct BattleScriptRootComponent___c_StaticFields *v84; // x0
  System_String_array *v85; // x0
  System_String_o *v86; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v87; // x0
  BattleScriptRootComponent_o *v88; // x20
  BattleScriptRootComponent___c_c *v89; // x8
  struct BattleScriptRootComponent___c_StaticFields *v90; // x9
  System_Converter_int__string__o *_9__37_2; // x21
  Il2CppObject *v92; // x22
  struct BattleScriptRootComponent___c_StaticFields *v93; // x0
  System_String_array *v94; // x0
  System_String_o *v95; // x0
  int v96; // w2
  __int64 v97; // x3
  QuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v99; // x2
  int v100; // w1
  int v101; // w2
  __int64 v102; // x3
  QuestTree_o *v103; // x20
  TerminalPramsManager_c *v104; // x0
  int32_t WarId_k__BackingField; // w21
  System_Action_o *v106; // x22
  System_Collections_IEnumerator_o *v107; // x1
  _DWORD *v108; // x8
  __int64 v109; // x0

  v5 = (Il2CppObject *)this;
  if ( (byte_42E577E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)jsonstr, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BattleScriptRootComponent__EndRequestBattleScenario_b__37_0__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Converter_int__string___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Converter_int__string__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_int___, v18, v19, v20);
    sub_B5D5C4(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___, v21, v22, v23);
    sub_B5D5C4(&JsonManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ConvertAll_string___, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v30, v31, v32);
    sub_B5D5C4(&ScriptManager_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37, v38);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v39, v40, v41);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v42, v43, v44);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__37_1__, v48, v49, v50);
    sub_B5D5C4(&Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__37_2__, v51, v52, v53);
    sub_B5D5C4(&BattleScriptRootComponent___c_TypeInfo, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_19127/*"freeShopIds"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_22107/*"returnRarePriShopIds"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_707/*","*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v66, v67, v68);
    this = (BattleScriptRootComponent_o *)sub_B5D5C4(&StringLiteral_16061/*"]"*/, v69, v70, v71);
    byte_42E577E = 1;
  }
  monitor = v5[3].monitor;
  if ( !monitor )
    goto LABEL_67;
  monitor[8] = 6;
  v73 = (BattleScriptRootComponent_TalkScriptInfo_o *)v5[3].monitor;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__SaveTalkResumeInfo(v73, 0LL);
  ScriptManager__ClearSelectRouteArray(0LL);
  v74 = (Il2CppObject *)System_String__Concat_44580072(
                          (System_String_o *)StringLiteral_15824/*"["*/,
                          jsonstr,
                          (System_String_o *)StringLiteral_16061/*"]"*/,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v75 = (BattleResultComponent_resultData_array *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                    v74,
                                                    (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__ReceiveQuestEndResultInfo(v75, 1, 0LL);
  v76 = (Il2CppObject *)System_String__Concat_44580072(
                          (System_String_o *)StringLiteral_15824/*"["*/,
                          jsonstr,
                          (System_String_o *)StringLiteral_16061/*"]"*/,
                          0LL);
  this = (BattleScriptRootComponent_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                          v76,
                                          (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  if ( !this )
    goto LABEL_67;
  if ( !LODWORD(this->fields.myFSM) )
  {
    v109 = sub_B5D6C8(this);
    sub_B5D668(v109, 0LL);
  }
  uiRoot = this->fields.uiRoot;
  if ( !uiRoot )
    goto LABEL_67;
  klass = (System_Collections_Generic_IEnumerable_TSource__o *)uiRoot[6].klass;
  if ( klass )
  {
    this = (BattleScriptRootComponent_o *)System_Linq_Enumerable__ToList_int_(
                                            klass,
                                            (const MethodInfo_1CBA56C *)Method_System_Linq_Enumerable_ToList_int___);
    v79 = this;
    v80 = BattleScriptRootComponent___c_TypeInfo;
    if ( (BYTE3(BattleScriptRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleScriptRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleScriptRootComponent___c_TypeInfo);
      v80 = BattleScriptRootComponent___c_TypeInfo;
    }
    static_fields = v80->static_fields;
    _9__37_1 = static_fields->__9__37_1;
    if ( !_9__37_1 )
    {
      if ( (BYTE3(v80->vtable._0_Equals.methodPtr) & 4) != 0 && !v80->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v80);
        static_fields = BattleScriptRootComponent___c_TypeInfo->static_fields;
      }
      v83 = (Il2CppObject *)static_fields->__9;
      _9__37_1 = (System_Converter_int__string__o *)sub_B5D694(System_Converter_int__string__TypeInfo);
      System_Converter_int__string____ctor(
        _9__37_1,
        v83,
        Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__37_1__,
        (const MethodInfo_23F69D4 *)Method_System_Converter_int__string___ctor__);
      v84 = BattleScriptRootComponent___c_TypeInfo->static_fields;
      v84->__9__37_1 = _9__37_1;
      sub_B5D560(&v84->__9__37_1);
    }
    if ( !v79 )
      goto LABEL_67;
    this = (BattleScriptRootComponent_o *)System_Collections_Generic_List_int___ConvertAll_string_(
                                            (System_Collections_Generic_List_int__o *)v79,
                                            (System_Converter_T__TOutput__o *)_9__37_1,
                                            (const MethodInfo_192DF90 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_67;
    v85 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this,
                                   (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
    v86 = System_String__Join((System_String_o *)StringLiteral_707/*","*/, v85, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_19127/*"freeShopIds"*/, v86, 0LL);
  }
  v87 = (System_Collections_Generic_IEnumerable_TSource__o *)uiRoot[6].monitor;
  if ( v87 )
  {
    this = (BattleScriptRootComponent_o *)System_Linq_Enumerable__ToList_int_(
                                            v87,
                                            (const MethodInfo_1CBA56C *)Method_System_Linq_Enumerable_ToList_int___);
    v88 = this;
    v89 = BattleScriptRootComponent___c_TypeInfo;
    if ( (BYTE3(BattleScriptRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleScriptRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleScriptRootComponent___c_TypeInfo);
      v89 = BattleScriptRootComponent___c_TypeInfo;
    }
    v90 = v89->static_fields;
    _9__37_2 = v90->__9__37_2;
    if ( !_9__37_2 )
    {
      if ( (BYTE3(v89->vtable._0_Equals.methodPtr) & 4) != 0 && !v89->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v89);
        v90 = BattleScriptRootComponent___c_TypeInfo->static_fields;
      }
      v92 = (Il2CppObject *)v90->__9;
      _9__37_2 = (System_Converter_int__string__o *)sub_B5D694(System_Converter_int__string__TypeInfo);
      System_Converter_int__string____ctor(
        _9__37_2,
        v92,
        Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__37_2__,
        (const MethodInfo_23F69D4 *)Method_System_Converter_int__string___ctor__);
      v93 = BattleScriptRootComponent___c_TypeInfo->static_fields;
      v93->__9__37_2 = _9__37_2;
      sub_B5D560(&v93->__9__37_2);
    }
    if ( !v88 )
      goto LABEL_67;
    this = (BattleScriptRootComponent_o *)System_Collections_Generic_List_int___ConvertAll_string_(
                                            (System_Collections_Generic_List_int__o *)v88,
                                            (System_Converter_T__TOutput__o *)_9__37_2,
                                            (const MethodInfo_192DF90 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_67;
    v94 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this,
                                   (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
    v95 = System_String__Join((System_String_o *)StringLiteral_707/*","*/, v94, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_22107/*"returnRarePriShopIds"*/, v95, 0LL);
  }
  UnityEngine_PlayerPrefs__Save(0LL);
  this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_67;
  MasterData_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)jsonstr, v96, v97);
    byte_42E4B33 = 1;
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
      v103 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E4B20 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v100, v101, v102);
        byte_42E4B20 = 1;
      }
      v104 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v104 = TerminalPramsManager_TypeInfo;
      }
      WarId_k__BackingField = v104->static_fields->_WarId_k__BackingField;
      v106 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v106, v5, Method_BattleScriptRootComponent__EndRequestBattleScenario_b__37_0__, 0LL);
      if ( v103 )
      {
        v107 = QuestTree__mfBaseTreeUpdateWithOpenCheck(v103, WarId_k__BackingField, v106, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)v5, v107, 0LL);
        return;
      }
LABEL_67:
      sub_B5D69C(this, jsonstr);
    }
  }
  v108 = v5[3].monitor;
  if ( !v108 )
    goto LABEL_67;
  BattleScriptRootComponent__ProcessBattleScripts((BattleScriptRootComponent_o *)v5, v108[8], v99);
}


void __fastcall BattleScriptRootComponent__EndRequestBattleSetup(System_String_o *result, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  struct System_String_o *name; // x21
  int32_t actMax; // w19
  int32_t birthDay_high; // w20
  const MethodInfo *v29; // x0
  UserGameEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v4 = result;
  if ( (byte_42E5779 & 1) == 0 )
  {
    sub_B5D5C4(&BattleData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_BattleMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__, v11, v12, v13);
    sub_B5D5C4(&ScriptManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20, v21, v22);
    result = (System_String_o *)sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v23, v24, v25);
    byte_42E5779 = 1;
  }
  entity = 0LL;
  if ( !v4 )
    goto LABEL_22;
  if ( System_String__Equals_44565128(v4, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
  {
    result = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( result )
    {
      CommonUI__SetLoadMode((CommonUI_o *)result, 0, 0LL);
      result = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( result )
      {
        AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)result, 34, 1, 0LL, 0, 0LL);
        return;
      }
    }
LABEL_22:
    sub_B5D69C(result, method);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !result )
    goto LABEL_22;
  result = (System_String_o *)DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
                                (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)result,
                                &entity,
                                (const MethodInfo_23FB120 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__);
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
  BattleScriptRootComponent__StartBattle(v29);
}


void __fastcall BattleScriptRootComponent__GoForBattle(BattleSetupInfo_o *battleSetupInfo, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42E577B & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleScriptRootComponent_EndRequestBattleSetup__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&ScriptManager_TypeInfo, v8, v9, v10);
    byte_42E577B = 1;
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__DeleteTalkResumeInfo(0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v11, 0LL, Method_BattleScriptRootComponent_EndRequestBattleSetup__, 0LL);
  BattleScriptRootComponent__RequestBattleSetup(battleSetupInfo, v11, v12);
}


void __fastcall BattleScriptRootComponent__LoadPlayScenarioWithMap(
        BattleScriptRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  TerminalPramsManager_c *v21; // x0
  TerminalPramsManager_c *v22; // x0
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E576C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v12, v13, v14);
    byte_42E576C = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0LL) )
    goto LABEL_11;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_42:
    sub_B5D69C(Instance, v16);
  AvalonSceneManager__transitionScene_21030400((AvalonSceneManager_o *)Instance, 34, callback, 1, 0LL, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B28 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v18, v19, v20);
    byte_42E4B28 = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  v21->static_fields->_DispState_k__BackingField = 2;
  if ( !byte_42E4B29 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v18, v19, v20);
    byte_42E4B29 = 1;
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = TerminalPramsManager_TypeInfo;
  }
  v22->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_42E57FB )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v18, v19, v20);
    v22 = TerminalPramsManager_TypeInfo;
    byte_42E57FB = 1;
  }
  if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v22);
    v22 = TerminalPramsManager_TypeInfo;
  }
  v22->static_fields->_IsDispOnly_k__BackingField = 1;
  if ( !byte_42E57FC )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v18, v19, v20);
    v22 = TerminalPramsManager_TypeInfo;
    byte_42E57FC = 1;
  }
  if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v22);
    v22 = TerminalPramsManager_TypeInfo;
  }
  v22->static_fields->_IsScriptDisp_k__BackingField = 1;
  if ( !byte_42E57FD )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v18, v19, v20);
    v22 = TerminalPramsManager_TypeInfo;
    byte_42E57FD = 1;
  }
  if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v22);
    v22 = TerminalPramsManager_TypeInfo;
  }
  v22->static_fields->_IsPlayScriptWithMap_k__BackingField = 1;
}


void __fastcall BattleScriptRootComponent__OnDestroy(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5765 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5765 = 1;
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  BattleScriptRootComponent___c__DisplayClass48_0_o *v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  AssetLoader_LoadEndDataHandler_o *v24; // x19

  if ( (byte_42E5789 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&CommonUI_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_BattleScriptRootComponent___c__DisplayClass48_0__PlayStaffRoll_b__0__, v12, v13, v14);
    sub_B5D5C4(&BattleScriptRootComponent___c__DisplayClass48_0_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_6071/*"Endroll"*/, v18, v19, v20);
    byte_42E5789 = 1;
  }
  v21 = (BattleScriptRootComponent___c__DisplayClass48_0_o *)sub_B5D694(BattleScriptRootComponent___c__DisplayClass48_0_TypeInfo);
  BattleScriptRootComponent___c__DisplayClass48_0___ctor(v21, 0LL);
  if ( !v21 )
    sub_B5D69C(v22, v23);
  v21->fields.__4__this = this;
  sub_B5D560(&v21->fields);
  v21->fields.callback = callback;
  sub_B5D560(&v21->fields.callback);
  if ( (BYTE3(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  CommonUI__SetForceObi_16_9(1, 0LL);
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v24,
    (Il2CppObject *)v21,
    Method_BattleScriptRootComponent___c__DisplayClass48_0__PlayStaffRoll_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6071/*"Endroll"*/, v24, 1, 0LL);
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
    sub_B5D69C(talkInfo, isExit);
  }
  BattleScriptRootComponent__ProcessBattleScripts(this, v6->fields.talkPhase, v5);
}


void __fastcall BattleScriptRootComponent__ProceedToNextTalkPhase_19373936(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v2);
}


void __fastcall BattleScriptRootComponent__ProcessBattleScripts(
        BattleScriptRootComponent_o *this,
        int32_t phaseType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x21
  const MethodInfo *v31; // x1
  System_Action_o *v32; // x0
  __int64 *v33; // x8
  clsQuestCheck_o *Instance; // x0
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x2
  int32_t FadeoutKind; // w20
  bool v38; // zf
  CommonUI_o *v39; // x20
  const MethodInfo *v40; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *v41; // x8
  System_Action_o *v42; // x20
  const MethodInfo *v43; // x2
  AvalonSceneManager_c *v44; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v46; // x21

  if ( (byte_42E576A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, phaseType, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_BattleScriptRootComponent_StartScriptFinishBattleAfterDemo__, v9, v10, v11);
    sub_B5D5C4(&Method_BattleScriptRootComponent_StartScriptFinishBattle__, v12, v13, v14);
    sub_B5D5C4(&Method_BattleScriptRootComponent__ProcessBattleScripts_b__15_0__, v15, v16, v17);
    sub_B5D5C4(&ScriptManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v27, v28, v29);
    byte_42E576A = 1;
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
      BattleScriptRootComponent__TransitionTerminal(this, v31);
      return;
    case 1:
      if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
      }
      Instance = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !Instance )
        goto LABEL_36;
      if ( !clsQuestCheck__isPlayQuestStartAction(Instance, 0LL) )
      {
        BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v36);
        return;
      }
      Instance = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_36;
      FadeoutKind = CommonUI__maskFadGetFadeoutKind((CommonUI_o *)Instance, 0LL);
      Instance = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v38 = FadeoutKind == 1;
      v39 = (CommonUI_o *)Instance;
      if ( v38 )
      {
        if ( Instance )
        {
          CommonUI__maskFadeout((CommonUI_o *)Instance, 1, 0.0, 0LL, 0LL);
          BattleScriptRootComponent__StartBattleQuestStart(this, v40);
          return;
        }
LABEL_36:
        sub_B5D69C(Instance, v35);
      }
      v44 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v44 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v44->static_fields->DEFAULT_FADE_TIME;
      v46 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v46,
        (Il2CppObject *)this,
        Method_BattleScriptRootComponent__ProcessBattleScripts_b__15_0__,
        0LL);
      if ( !v39 )
        goto LABEL_36;
      CommonUI__maskFadeout(v39, 1, DEFAULT_FADE_TIME, v46, 0LL);
      return;
    case 2:
      BattleScriptRootComponent__StartScriptBefeoreBattleDemo(this, v31);
      return;
    case 3:
      BattleScriptRootComponent__StartDemoBeforeBattle(this, v31);
      return;
    case 4:
      BattleScriptRootComponent__StartScriptBeforeBattleAfterDemo(this, v31);
      return;
    case 5:
      BattleScriptRootComponent__EndBeforeBattleScript(this, v31);
      return;
    case 6:
      BattleScriptRootComponent__ChkCondHavingBranchQuest(this, v31);
      v41 = this->fields.talkInfo;
      if ( !v41 )
        goto LABEL_36;
      if ( v41->fields.talkType == 5 )
      {
        BattleScriptRootComponent__StartScriptNoBattleAfter(this, v35);
      }
      else
      {
        v32 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        v33 = &Method_BattleScriptRootComponent_StartScriptFinishBattle__;
LABEL_30:
        v42 = v32;
        System_Action___ctor(v32, (Il2CppObject *)this, *v33, 0LL);
        BattleScriptRootComponent__LoadPlayScenarioWithMap(this, v42, v43);
      }
      return;
    case 7:
      BattleScriptRootComponent__StartDemoFinishBattle(this, v31);
      return;
    case 8:
      v32 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      v33 = &Method_BattleScriptRootComponent_StartScriptFinishBattleAfterDemo__;
      goto LABEL_30;
    case 9:
      BattleScriptRootComponent__StartSecondDemoFinishBattle(this, v31);
      return;
    default:
      return;
  }
}


void __fastcall BattleScriptRootComponent__RequestBattleSecnarioForNoneBattleQuest(
        BattleScriptRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  char v14; // w1
  int v15; // w2
  __int64 v16; // x3
  char v17; // w1
  int v18; // w2
  __int64 v19; // x3
  char v20; // w1
  int v21; // w2
  __int64 v22; // x3
  char v23; // w1
  int v24; // w2
  __int64 v25; // x3
  char v26; // w1
  int v27; // w2
  __int64 v28; // x3
  char v29; // w1
  int v30; // w2
  __int64 v31; // x3
  char v32; // w1
  int v33; // w2
  __int64 v34; // x3
  char v35; // w1
  int v36; // w2
  __int64 v37; // x3
  char v38; // w1
  int v39; // w2
  __int64 v40; // x3
  DataManager_o *Instance; // x0
  __int64 v42; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  const MethodInfo *v44; // x1
  int v45; // w2
  __int64 v46; // x3
  CommonUI_o *v47; // x20
  int v48; // w2
  __int64 v49; // x3
  QuestMaster_o *Master_WarQuestSelectionMaster; // x20
  int v51; // w2
  __int64 v52; // x3
  QuestEntity_o *v53; // x20
  NetworkManager_ResultCallbackFunc_o *v54; // x20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v55; // x8
  BattleScenarioRequest_o *v56; // x19
  int32_t pId; // w20
  int32_t qId; // w21
  const MethodInfo *v59; // x4
  QuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E577D & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleScriptRootComponent_EndRequestBattleScenario__, isExit, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_LoginQuestMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_NetworkManager_getRequest_BattleScenarioRequest___, v14, v15, v16);
    sub_B5D5C4(&NetworkManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&ScriptManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v32, v33, v34);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v38, v39, v40);
    byte_42E577D = 1;
  }
  entity = 0LL;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__DeleteTalkResumeInfo(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_LoginQuestMaster___);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo || !Instance )
    goto LABEL_54;
  if ( LoginQuestMaster__GetEntityByQuestId((LoginQuestMaster_o *)Instance, talkInfo->fields.qId, 0LL) )
  {
    BattleScriptRootComponent__TransitionTerminal(this, v44);
    return;
  }
  v47 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_BYTE)v42, v45, v46);
    byte_42E4B33 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v47 )
    goto LABEL_54;
  CommonUI__CheckChangeOtherConnectMarkFromQuestClear(
    v47,
    (int32_t)Instance[1].fields.saveNameList->fields._items,
    HIDWORD(Instance[1].fields.saveNameList[14].klass),
    0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_BYTE)v42, v48, v49);
    byte_42E4B33 = 1;
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
    v53 = entity;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B34 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_BYTE)v42, v51, v52);
      byte_42E4B34 = 1;
    }
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v53 )
      goto LABEL_54;
    if ( QuestEntity__HasFlag_25406292(v53, 0x8000LL, HIDWORD(Instance[1].fields.saveNameList->fields._items) + 1, 0LL) )
    {
      if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
      }
      Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( Instance )
      {
        MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
        goto LABEL_45;
      }
LABEL_54:
      sub_B5D69C(Instance, v42);
    }
  }
LABEL_45:
  v54 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v54,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent_EndRequestBattleScenario__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                v54,
                                (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  v55 = this->fields.talkInfo;
  if ( !v55 )
    goto LABEL_54;
  v56 = (BattleScenarioRequest_o *)Instance;
  qId = v55->fields.qId;
  pId = v55->fields.pId;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  Instance = (DataManager_o *)ScriptManager__GetSelectRouteArray(0LL);
  if ( !v56 )
    goto LABEL_54;
  BattleScenarioRequest__beginRequest(v56, qId, pId, (System_Int32_array *)Instance, v59);
}


void __fastcall BattleScriptRootComponent__RequestBattleSetup(
        BattleSetupInfo_o *battleSetupInfo,
        NetworkManager_ResultCallbackFunc_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  CommonUI_o *routeSelect; // x0
  __int64 v16; // x1
  BattleSetupRequest_o *Request_WarBoardWallAttackRequest; // x20
  int32_t questId; // w8
  int32_t boostId; // w28
  int32_t enemySelect; // w21
  int64_t followerId; // x25
  int32_t followerClassId; // w26
  int32_t itemId; // w27
  int32_t v24; // w0
  int64_t userEquipId; // x23
  int32_t followerType; // w24
  int32_t questSelect; // w22
  int64_t activeDeckId; // [xsp+60h] [xbp-60h]
  int32_t questPhase; // [xsp+68h] [xbp-58h]
  int32_t v30; // [xsp+6Ch] [xbp-54h]

  if ( (byte_42E577C & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_BattleSetupRequest___, (_DWORD)callbackFunc, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&ScriptManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13, v14);
    byte_42E577C = 1;
  }
  routeSelect = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                                                                (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_BattleSetupRequest___);
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
  v30 = questId;
  questPhase = battleSetupInfo->fields.questPhase;
  followerId = battleSetupInfo->fields.followerId;
  activeDeckId = battleSetupInfo->fields.deckId;
  followerClassId = battleSetupInfo->fields.followerClassId;
  itemId = battleSetupInfo->fields.itemId;
  v24 = BattleSetupInfo__TargetQuestBranchIdx(battleSetupInfo, 0LL);
  userEquipId = battleSetupInfo->fields.userEquipId;
  followerType = battleSetupInfo->fields.followerType;
  questSelect = v24;
  routeSelect = (CommonUI_o *)ScriptManager__GetSelectRouteArray(0LL);
  if ( !Request_WarBoardWallAttackRequest )
LABEL_13:
    sub_B5D69C(routeSelect, v16);
  BattleSetupRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    v30,
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
    battleSetupInfo->fields.restartWave,
    0LL);
}


void __fastcall BattleScriptRootComponent__SavePlayedNotMeetsScript(
        BattleScriptRootComponent_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v19; // x1
  QuestPhaseEntity_o *Entity; // x0
  System_String_o *ScriptName_NotMeetsCond; // x0
  System_String_o *v22; // x0
  int32_t ScriptIntParam; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E5778 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestPhaseMaster___, questId, phase, method);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&ScriptManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_16793/*"badEndId"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_21421/*"notMeets"*/, v15, v16, v17);
    byte_42E5778 = 1;
  }
  ScriptIntParam = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v19);
  Entity = QuestPhaseMaster__GetEntity(Master_WarQuestSelectionMaster, questId, phase, 0LL);
  if ( Entity )
  {
    ScriptIntParam = QuestPhaseEntity__getScriptIntParam(Entity, (System_String_o *)StringLiteral_16793/*"badEndId"*/, 0, 0LL);
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
    v22 = System_String__Concat_44577788((System_String_o *)StringLiteral_21421/*"notMeets"*/, ScriptName_NotMeetsCond, 0LL);
    UnityEngine_PlayerPrefs__SetInt(v22, 1, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall BattleScriptRootComponent__ScriptFinishBattleAfterDemoEnd(
        BattleScriptRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  BattleScriptRootComponent___c__DisplayClass24_0_o *v21; // x21
  System_Int32_array *Request_WarBoardWallAttackRequest; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  NetworkManager_ResultCallbackFunc_o *v25; // x20
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleRouteSelectRequest_o *v27; // x19
  int32_t pId; // w20
  int32_t qId; // w21
  const MethodInfo *v30; // x4

  if ( (byte_42E5771 & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___, isExit, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&ScriptManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(
      &Method_BattleScriptRootComponent___c__DisplayClass24_0__ScriptFinishBattleAfterDemoEnd_b__0__,
      v15,
      v16,
      v17);
    sub_B5D5C4(&BattleScriptRootComponent___c__DisplayClass24_0_TypeInfo, v18, v19, v20);
    byte_42E5771 = 1;
  }
  v21 = (BattleScriptRootComponent___c__DisplayClass24_0_o *)sub_B5D694(BattleScriptRootComponent___c__DisplayClass24_0_TypeInfo);
  BattleScriptRootComponent___c__DisplayClass24_0___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_18;
  v21->fields.__4__this = this;
  sub_B5D560(&v21->fields);
  v21->fields.isExit = isExit;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  if ( ScriptManager__GetSelectRouteArray(0LL) )
  {
    v25 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v25,
      (Il2CppObject *)v21,
      Method_BattleScriptRootComponent___c__DisplayClass24_0__ScriptFinishBattleAfterDemoEnd_b__0__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (System_Int32_array *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                v25,
                                                                (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      v27 = (BattleRouteSelectRequest_o *)Request_WarBoardWallAttackRequest;
      qId = talkInfo->fields.qId;
      pId = talkInfo->fields.pId;
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = ScriptManager__GetSelectRouteArray(0LL);
      if ( v27 )
      {
        BattleRouteSelectRequest__beginRequest(v27, qId, pId, Request_WarBoardWallAttackRequest, v30);
        return;
      }
    }
LABEL_18:
    sub_B5D69C(Request_WarBoardWallAttackRequest, v23);
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v24);
}


bool __fastcall BattleScriptRootComponent__StartBattle(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  WebViewManager_o *Instance; // x0
  __int64 v14; // x1
  int v15; // w20

  if ( (byte_42E577A & 1) == 0 )
  {
    sub_B5D5C4(&Method_AvalonSceneManager_UnloadScene_FollowerRootComponent___, v1, v2, v3);
    sub_B5D5C4(&Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v10, v11, v12);
    byte_42E577A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v15 = BYTE4(Instance[1].fields.baseWindow);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  if ( !v15 )
  {
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 10, 1, 0LL, 1, 0LL);
    return 1;
  }
  AvalonSceneManager__UnloadScene_PartyOrganizationRootComponent_(
    (AvalonSceneManager_o *)Instance,
    (const MethodInfo_1AD5990 *)Method_AvalonSceneManager_UnloadScene_FollowerRootComponent___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (AvalonSceneManager__UnloadScene_PartyOrganizationRootComponent_(
          (AvalonSceneManager_o *)Instance,
          (const MethodInfo_1AD5990 *)Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_11:
    sub_B5D69C(Instance, v14);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 10, 1, 0LL, 0LL);
  return 1;
}


void __fastcall BattleScriptRootComponent__StartBattleQuestStart(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  clsQuestCheck_o *v14; // x20
  System_Action_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_42E5773 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattleScriptRootComponent_ProceedToNextTalkPhase__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v11, v12, v13);
    byte_42E5773 = 1;
  }
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v14 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v15 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_BattleScriptRootComponent_ProceedToNextTalkPhase__, 0LL);
  if ( !v14 )
    sub_B5D69C(v16, v17);
  clsQuestCheck__PlayQuestStartAction(v14, v15, 0LL);
}


void __fastcall BattleScriptRootComponent__StartDemoBeforeBattle(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  _DWORD *monitor; // x8
  int32_t v15; // w20
  int32_t v16; // w21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v17; // x22

  v4 = (Il2CppObject *)this;
  if ( (byte_42E5775 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_string__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BattleScriptRootComponent__StartDemoBeforeBattle_b__28_0__, v8, v9, v10);
    this = (BattleScriptRootComponent_o *)sub_B5D5C4(&ScriptManager_TypeInfo, v11, v12, v13);
    byte_42E5775 = 1;
  }
  monitor = v4[3].monitor;
  if ( !monitor )
    sub_B5D69C(this, method);
  v15 = monitor[5];
  v16 = monitor[6];
  v17 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_string__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v17,
    v4,
    Method_BattleScriptRootComponent__StartDemoBeforeBattle_b__28_0__,
    (const MethodInfo_258B320 *)Method_System_Action_string___ctor__);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__LoadBattleStartGameDemo(v15, v16, 0, (System_Action_string__o *)v17, 0, 0LL);
}


void __fastcall BattleScriptRootComponent__StartDemoFinishBattle(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x0
  int32_t qId; // w20
  int32_t pId; // w21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v17; // x22
  const MethodInfo *v18; // x2

  if ( (byte_42E576F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_string__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BattleScriptRootComponent__StartDemoFinishBattle_b__22_0__, v8, v9, v10);
    sub_B5D5C4(&ScriptManager_TypeInfo, v11, v12, v13);
    byte_42E576F = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_B5D69C(0LL, method);
  qId = talkInfo->fields.qId;
  if ( qId < 1 )
  {
    BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(talkInfo, 0LL);
    BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v18);
  }
  else
  {
    pId = talkInfo->fields.pId;
    v17 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_string__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v17,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent__StartDemoFinishBattle_b__22_0__,
      (const MethodInfo_258B320 *)Method_System_Action_string___ctor__);
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__LoadBattleEndGameDemo(qId, pId, 1, (System_Action_string__o *)v17, 0, 0LL);
  }
}


void __fastcall BattleScriptRootComponent__StartMashuPowerUpAction(
        BattleScriptRootComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  BattleScriptRootComponent___c__DisplayClass44_0_o *v23; // x19
  __int64 v24; // x0
  __int64 v25; // x1
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  TerminalPramsManager_c *v29; // x0
  int32_t WarId_k__BackingField; // w21
  CommonUI_o *Instance; // x20
  CombineResultEffectComponent_ClickDelegate_o *v32; // x21

  if ( (byte_42E5785 & 1) == 0 )
  {
    sub_B5D5C4(&CombineResultEffectComponent_ClickDelegate_TypeInfo, (_DWORD)end_act, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_BattleScriptRootComponent___c__DisplayClass44_0__StartMashuPowerUpAction_b__0__, v14, v15, v16);
    sub_B5D5C4(&BattleScriptRootComponent___c__DisplayClass44_0_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_8710/*"MASHU_CHANGE_WAR_ID"*/, v20, v21, v22);
    byte_42E5785 = 1;
  }
  v23 = (BattleScriptRootComponent___c__DisplayClass44_0_o *)sub_B5D694(BattleScriptRootComponent___c__DisplayClass44_0_TypeInfo);
  BattleScriptRootComponent___c__DisplayClass44_0___ctor(v23, 0LL);
  if ( !v23 )
    goto LABEL_20;
  v23->fields.end_act = end_act;
  sub_B5D560(&v23->fields);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B20 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v26, v27, v28);
    byte_42E4B20 = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v29 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v29->static_fields->_WarId_k__BackingField;
  if ( WarId_k__BackingField != ConstantMaster__getValue((System_String_o *)StringLiteral_8710/*"MASHU_CHANGE_WAR_ID"*/, 0LL) )
    goto LABEL_17;
  v23->fields.tutorial_flag_id = 115;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_29295864(115, 0LL) )
  {
LABEL_17:
    ActionExtensions__Call(v23->fields.end_act, 0LL);
    return;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v32 = (CombineResultEffectComponent_ClickDelegate_o *)sub_B5D694(CombineResultEffectComponent_ClickDelegate_TypeInfo);
  CombineResultEffectComponent_ClickDelegate___ctor(
    v32,
    (Il2CppObject *)v23,
    Method_BattleScriptRootComponent___c__DisplayClass44_0__StartMashuPowerUpAction_b__0__,
    0LL);
  if ( !Instance )
LABEL_20:
    sub_B5D69C(v24, v25);
  CommonUI__OpenPowerUp(Instance, v32, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleScriptRootComponent__StartMovie(
        BattleScriptRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleScriptRootComponent__StartMovie_d__14_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_42E5769 & 1) == 0 )
  {
    sub_B5D5C4(&BattleScriptRootComponent__StartMovie_d__14_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    byte_42E5769 = 1;
  }
  v6 = (BattleScriptRootComponent__StartMovie_d__14_o *)sub_B5D694(BattleScriptRootComponent__StartMovie_d__14_TypeInfo);
  BattleScriptRootComponent__StartMovie_d__14___ctor(v6, 0, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  v6->fields.__4__this = this;
  sub_B5D560(&v6->fields.__4__this);
  v6->fields.callback = callback;
  sub_B5D560(&v6->fields.callback);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleScriptRootComponent__StartScript(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  _DWORD *monitor; // x8
  int v21; // w8
  _DWORD *v22; // x8
  const MethodInfo *v23; // x2
  System_Action_o *v24; // x20
  const MethodInfo *v25; // x2
  System_Collections_IEnumerator_o *started; // x1
  BattleScriptRootComponent_TalkScriptInfo_o *v27; // x20
  _DWORD *v28; // x8
  int v29; // w8
  int v30; // w9
  _DWORD *v31; // x8

  v4 = (Il2CppObject *)this;
  if ( (byte_42E5768 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattleScriptRootComponent__StartScript_b__13_0__, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v8, v9, v10);
    sub_B5D5C4(&ScriptManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    this = (BattleScriptRootComponent_o *)sub_B5D5C4(
                                            &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                            v17,
                                            v18,
                                            v19);
    byte_42E5768 = 1;
  }
  monitor = v4[3].monitor;
  if ( !monitor )
    goto LABEL_26;
  v21 = monitor[7];
  if ( (unsigned int)(v21 - 3) < 4 )
  {
    this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (BattleScriptRootComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v22 = v4[3].monitor;
      if ( v22 )
      {
        if ( this )
        {
          this = (BattleScriptRootComponent_o *)QuestPhaseMaster__IsMoviePhase(
                                                  (QuestPhaseMaster_o *)this,
                                                  v22[5],
                                                  v22[6],
                                                  0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v24 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(v24, v4, Method_BattleScriptRootComponent__StartScript_b__13_0__, 0LL);
            started = BattleScriptRootComponent__StartMovie((BattleScriptRootComponent_o *)v4, v24, v25);
            UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)v4, started, 0LL);
            return;
          }
          v31 = v4[3].monitor;
          if ( v31 )
          {
            BattleScriptRootComponent__ProcessBattleScripts((BattleScriptRootComponent_o *)v4, v31[8], v23);
            return;
          }
        }
      }
    }
LABEL_26:
    sub_B5D69C(this, method);
  }
  if ( v21 == 1 )
  {
    this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_26;
    CommonUI__maskFadeout((CommonUI_o *)this, 2, 0.0, 0LL, 0LL);
    v27 = (BattleScriptRootComponent_TalkScriptInfo_o *)v4[3].monitor;
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__SaveTalkResumeInfo(v27, 0LL);
    v28 = v4[3].monitor;
    if ( !v28 )
      goto LABEL_26;
    v30 = v28[5];
    v29 = v28[6];
    if ( v30 <= 0 )
    {
      if ( v29 )
        BattleScriptRootComponent__ChapterStartEffect((BattleScriptRootComponent_o *)v4, method);
      else
        BattleScriptRootComponent__ChapterStart((BattleScriptRootComponent_o *)v4, method);
    }
    else if ( v29 )
    {
      BattleScriptRootComponent__ChapterStartEffectQuest((BattleScriptRootComponent_o *)v4, method);
    }
    else
    {
      BattleScriptRootComponent__ChapterStartQuest((BattleScriptRootComponent_o *)v4, method);
    }
  }
}


void __fastcall BattleScriptRootComponent__StartScriptBefeoreBattleDemo(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleScriptRootComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v25; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v27; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v28; // x8
  int32_t wId; // w20
  int32_t qId; // w21
  int32_t pId; // w22
  ScriptManager_CallbackFunc_o *v32; // x23
  struct BattleScriptRootComponent_TalkScriptInfo_o *v33; // x8
  int32_t v34; // w19
  int32_t talkType; // w24

  v4 = this;
  if ( (byte_42E5774 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BattleScriptRootComponent_ProceedToNextTalkPhase___68815496, v8, v9, v10);
    sub_B5D5C4(&Method_BattleScriptRootComponent__StartScriptBefeoreBattleDemo_b__27_0__, v11, v12, v13);
    sub_B5D5C4(&ScriptManager_CallbackFunc_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&ScriptManager_TypeInfo, v17, v18, v19);
    this = (BattleScriptRootComponent_o *)sub_B5D5C4(
                                            &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                            v20,
                                            v21,
                                            v22);
    byte_42E5774 = 1;
  }
  talkInfo = v4->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_17;
  this = (BattleScriptRootComponent_o *)WarMaster__IsLastQuest(talkInfo->fields.wId, talkInfo->fields.qId, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v25 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v25 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
    v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v27,
      (Il2CppObject *)v4,
      Method_BattleScriptRootComponent__StartScriptBefeoreBattleDemo_b__27_0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 2, DEFAULT_FADE_TIME, v27, 0LL);
      return;
    }
LABEL_17:
    sub_B5D69C(this, method);
  }
  v28 = v4->fields.talkInfo;
  if ( !v28 )
    goto LABEL_17;
  wId = v28->fields.wId;
  qId = v28->fields.qId;
  pId = v28->fields.pId;
  v32 = (ScriptManager_CallbackFunc_o *)sub_B5D694(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(
    v32,
    (Il2CppObject *)v4,
    Method_BattleScriptRootComponent_ProceedToNextTalkPhase___68815496,
    0LL);
  this = (BattleScriptRootComponent_o *)v4->fields.talkInfo;
  if ( !this )
    goto LABEL_17;
  this = (BattleScriptRootComponent_o *)BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
                                          (BattleScriptRootComponent_TalkScriptInfo_o *)this,
                                          0LL);
  v33 = v4->fields.talkInfo;
  if ( !v33 )
    goto LABEL_17;
  v34 = (int)this;
  talkType = v33->fields.talkType;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayBattleStart(wId, qId, pId, v32, 0, 0LL, v34, talkType == 6, 0, 0LL, 0LL);
}


void __fastcall BattleScriptRootComponent__StartScriptBeforeBattleAfterDemo(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleScriptRootComponent_o *v4; // x22
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w19
  int32_t qId; // w20
  int32_t pId; // w21
  ScriptManager_CallbackFunc_o *v15; // x23
  int32_t JumpLine; // w22

  v4 = this;
  if ( (byte_42E5776 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleScriptRootComponent_ProceedToNextTalkPhase___68815496, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ScriptManager_CallbackFunc_TypeInfo, v5, v6, v7);
    this = (BattleScriptRootComponent_o *)sub_B5D5C4(&ScriptManager_TypeInfo, v8, v9, v10);
    byte_42E5776 = 1;
  }
  talkInfo = v4->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        qId = talkInfo->fields.qId,
        pId = talkInfo->fields.pId,
        v15 = (ScriptManager_CallbackFunc_o *)sub_B5D694(ScriptManager_CallbackFunc_TypeInfo),
        ScriptManager_CallbackFunc___ctor(
          v15,
          (Il2CppObject *)v4,
          Method_BattleScriptRootComponent_ProceedToNextTalkPhase___68815496,
          0LL),
        (this = (BattleScriptRootComponent_o *)v4->fields.talkInfo) == 0LL) )
  {
    sub_B5D69C(this, method);
  }
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)this,
               0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayBattleStart2(wId, qId, pId, v15, 0, 0LL, JumpLine, 0LL);
}


void __fastcall BattleScriptRootComponent__StartScriptFinishBattle(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  AvalonSceneManager_o *talkInfo; // x0
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  TerminalPramsManager_c *v26; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v27; // x8
  int32_t pId; // w19
  int32_t qId; // w20
  int v30; // w25
  int32_t winResult; // w21
  ScriptManager_CallbackFunc_o *v32; // x23
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int32_t JumpLine; // w22
  TerminalPramsManager_c *v37; // x0
  _BOOL4 IsPlayScriptWithMap_k__BackingField; // w24

  if ( (byte_42E576D & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleScriptRootComponent_StartScriptFinishBattleEnd2__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BgmManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&ScriptManager_CallbackFunc_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&ScriptManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v17, v18, v19);
    byte_42E576D = 1;
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
    if ( !byte_42E4B29 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v23, v24, v25);
      byte_42E4B29 = 1;
    }
    v26 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v26 = TerminalPramsManager_TypeInfo;
    }
    v26->static_fields->_IsAutoResume_k__BackingField = 1;
    talkInfo = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( talkInfo )
    {
      AvalonSceneManager__transitionSceneRefresh(talkInfo, 34, 1, 0LL, 0, 0LL);
      return;
    }
LABEL_48:
    sub_B5D69C(talkInfo, method);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B31 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v21, v22);
    byte_42E4B31 = 1;
  }
  talkInfo = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    talkInfo = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  v27 = this->fields.talkInfo;
  if ( !v27 )
    goto LABEL_48;
  qId = v27->fields.qId;
  pId = v27->fields.pId;
  v30 = BYTE1(talkInfo[2].fields.targetRoot[1].fields.kind);
  winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(this->fields.talkInfo, 0LL);
  v32 = (ScriptManager_CallbackFunc_o *)sub_B5D694(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(
    v32,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent_StartScriptFinishBattleEnd2__,
    0LL);
  talkInfo = (AvalonSceneManager_o *)this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_48;
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)talkInfo,
               0LL);
  if ( v30 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B4D )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v33, v34, v35);
      byte_42E4B4D = 1;
    }
    v37 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v37 = TerminalPramsManager_TypeInfo;
    }
    IsPlayScriptWithMap_k__BackingField = v37->static_fields->_IsPlayScriptWithMap_k__BackingField;
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__PlayBattleEnd2_17843768(
      qId,
      pId,
      winResult,
      15,
      v32,
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
    ScriptManager__PlayBattleEnd2(qId, pId, winResult, v32, 0, JumpLine, 0LL);
  }
}


void __fastcall BattleScriptRootComponent__StartScriptFinishBattleAfterDemo(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x0
  int32_t qId; // w20
  int32_t pId; // w21
  int32_t winResult; // w22
  ScriptManager_CallbackFunc_o *v18; // x23
  int32_t JumpLine; // w19
  struct BattleScriptRootComponent_TalkScriptInfo_o *v20; // x8
  int32_t v21; // w20
  int32_t v22; // w21
  int v23; // w25
  int32_t v24; // w22
  ScriptManager_CallbackFunc_o *v25; // x23
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int32_t v29; // w19
  TerminalPramsManager_c *v30; // x0
  _BOOL4 IsPlayScriptWithMap_k__BackingField; // w24

  if ( (byte_42E5770 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleScriptRootComponent_ScriptFinishBattleAfterDemoEnd__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ScriptManager_CallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&ScriptManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v11, v12, v13);
    byte_42E5770 = 1;
  }
  if ( this->fields.setEndRoll )
  {
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      qId = talkInfo->fields.qId;
      pId = talkInfo->fields.pId;
      winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(talkInfo, 0LL);
      v18 = (ScriptManager_CallbackFunc_o *)sub_B5D694(ScriptManager_CallbackFunc_TypeInfo);
      ScriptManager_CallbackFunc___ctor(
        v18,
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
        ScriptManager__PlayBattleEndWhite(qId, pId, winResult, v18, 0, JumpLine, 0LL);
        return;
      }
    }
LABEL_37:
    sub_B5D69C(talkInfo, method);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B31 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B31 = 1;
  }
  talkInfo = (BattleScriptRootComponent_TalkScriptInfo_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    talkInfo = (BattleScriptRootComponent_TalkScriptInfo_o *)TerminalPramsManager_TypeInfo;
  }
  v20 = this->fields.talkInfo;
  if ( !v20 )
    goto LABEL_37;
  v22 = v20->fields.qId;
  v21 = v20->fields.pId;
  v23 = *(unsigned __int8 *)(*(_QWORD *)&talkInfo[3].fields.wId + 105LL);
  v24 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(this->fields.talkInfo, 0LL);
  v25 = (ScriptManager_CallbackFunc_o *)sub_B5D694(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(
    v25,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent_ScriptFinishBattleAfterDemoEnd__,
    0LL);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_37;
  v29 = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(talkInfo, 0LL);
  if ( v23 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B4D )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v26, v27, v28);
      byte_42E4B4D = 1;
    }
    v30 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v30 = TerminalPramsManager_TypeInfo;
    }
    IsPlayScriptWithMap_k__BackingField = v30->static_fields->_IsPlayScriptWithMap_k__BackingField;
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__PlayBattleEnd_17842400(v22, v21, v24, 15, v25, 0, v29, IsPlayScriptWithMap_k__BackingField, 0LL);
  }
  else
  {
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__PlayBattleEnd(v22, v21, v24, v25, 0, v29, 0LL);
  }
}


void __fastcall BattleScriptRootComponent__StartScriptFinishBattleEnd2(
        BattleScriptRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  BattleScriptRootComponent___c__DisplayClass21_0_o *v21; // x21
  System_Int32_array *Request_WarBoardWallAttackRequest; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  NetworkManager_ResultCallbackFunc_o *v25; // x20
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleRouteSelectRequest_o *v27; // x19
  int32_t pId; // w20
  int32_t qId; // w21
  const MethodInfo *v30; // x4

  if ( (byte_42E576E & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___, isExit, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&ScriptManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(
      &Method_BattleScriptRootComponent___c__DisplayClass21_0__StartScriptFinishBattleEnd2_b__0__,
      v15,
      v16,
      v17);
    sub_B5D5C4(&BattleScriptRootComponent___c__DisplayClass21_0_TypeInfo, v18, v19, v20);
    byte_42E576E = 1;
  }
  v21 = (BattleScriptRootComponent___c__DisplayClass21_0_o *)sub_B5D694(BattleScriptRootComponent___c__DisplayClass21_0_TypeInfo);
  BattleScriptRootComponent___c__DisplayClass21_0___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_18;
  v21->fields.__4__this = this;
  sub_B5D560(&v21->fields);
  v21->fields.isExit = isExit;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  if ( ScriptManager__GetSelectRouteArray(0LL) )
  {
    v25 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v25,
      (Il2CppObject *)v21,
      Method_BattleScriptRootComponent___c__DisplayClass21_0__StartScriptFinishBattleEnd2_b__0__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (System_Int32_array *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                v25,
                                                                (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      v27 = (BattleRouteSelectRequest_o *)Request_WarBoardWallAttackRequest;
      qId = talkInfo->fields.qId;
      pId = talkInfo->fields.pId;
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = ScriptManager__GetSelectRouteArray(0LL);
      if ( v27 )
      {
        BattleRouteSelectRequest__beginRequest(v27, qId, pId, Request_WarBoardWallAttackRequest, v30);
        return;
      }
    }
LABEL_18:
    sub_B5D69C(Request_WarBoardWallAttackRequest, v23);
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v24);
}


void __fastcall BattleScriptRootComponent__StartScriptNoBattleAfter(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x0
  _BOOL4 setEndRoll; // w24
  int32_t qId; // w19
  int32_t pId; // w20
  int32_t winResult; // w21
  ScriptManager_CallbackFunc_o *v19; // x0
  ScriptManager_CallbackFunc_o *v20; // x22
  int32_t JumpLine; // w23
  int32_t v22; // w23

  if ( (byte_42E577F & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__38_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__38_1__, v5, v6, v7);
    sub_B5D5C4(&ScriptManager_CallbackFunc_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&ScriptManager_TypeInfo, v11, v12, v13);
    byte_42E577F = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_15;
  setEndRoll = this->fields.setEndRoll;
  qId = talkInfo->fields.qId;
  pId = talkInfo->fields.pId;
  winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(talkInfo, 0LL);
  v19 = (ScriptManager_CallbackFunc_o *)sub_B5D694(ScriptManager_CallbackFunc_TypeInfo);
  v20 = v19;
  if ( setEndRoll )
  {
    ScriptManager_CallbackFunc___ctor(
      v19,
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
      ScriptManager__PlayBattleEndWhite(qId, pId, winResult, v20, 0, JumpLine, 0LL);
      return;
    }
LABEL_15:
    sub_B5D69C(talkInfo, method);
  }
  ScriptManager_CallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__38_1__,
    0LL);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_15;
  v22 = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(talkInfo, 0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayBattleEnd(qId, pId, winResult, v20, 0, v22, 0LL);
}


void __fastcall BattleScriptRootComponent__StartSecondDemoFinishBattle(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  _DWORD *monitor; // x8
  int32_t v15; // w20
  int32_t v16; // w21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v17; // x22

  v4 = (Il2CppObject *)this;
  if ( (byte_42E5772 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_string__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__25_0__, v8, v9, v10);
    this = (BattleScriptRootComponent_o *)sub_B5D5C4(&ScriptManager_TypeInfo, v11, v12, v13);
    byte_42E5772 = 1;
  }
  monitor = v4[3].monitor;
  if ( !monitor )
    sub_B5D69C(this, method);
  v15 = monitor[5];
  v16 = monitor[6];
  v17 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_string__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v17,
    v4,
    Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__25_0__,
    (const MethodInfo_258B320 *)Method_System_Action_string___ctor__);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__LoadBattleEndGameDemo(v15, v16, 0, (System_Action_string__o *)v17, 0, 0LL);
}


void __fastcall BattleScriptRootComponent__TransitionTerminal(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  TerminalPramsManager_c *v53; // x0
  int32_t EventID; // w21
  DataManager_o *Instance; // x0
  __int64 v56; // x1
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  TerminalPramsManager_c *v60; // x0
  const MethodInfo *v61; // x1
  int v62; // w2
  __int64 v63; // x3
  TerminalPramsManager_c *v64; // x0
  UnityEngine_MonoBehaviour_o *v65; // x21
  AvalonSceneManager_o *v66; // x22
  System_Action_o *v67; // x23
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  TerminalSceneComponent_c *v71; // x0
  UnityEngine_Object_o *mInstance; // x20
  int v73; // w2
  __int64 v74; // x3
  System_Collections_Generic_List_string__c *klass; // x8
  UnityEngine_Object_o *v76; // x20
  int v77; // w2
  __int64 v78; // x3
  System_Collections_Generic_List_string__c *v79; // x8
  clsQuestCheck_o *v80; // x20
  int v81; // w2
  __int64 v82; // x3
  TerminalPramsManager_c *v83; // x0
  System_Collections_Generic_List_string__c *v84; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E5786 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_AvalonSceneManager_UnloadSceneAsync_TerminalSceneComponent___, v5, v6, v7);
    sub_B5D5C4(&Method_AvalonSceneManager_UnloadScene_BattleScriptRootComponent___, v8, v9, v10);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_BattleScriptRootComponent_TransitionTerminalSub__, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&ScriptManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v38, v39, v40);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v44, v45, v46);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v50, v51, v52);
    byte_42E5786 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B29 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B29 = 1;
  }
  v53 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v53 = TerminalPramsManager_TypeInfo;
  }
  v53->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_42E57FD )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    v53 = TerminalPramsManager_TypeInfo;
    byte_42E57FD = 1;
  }
  if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v53);
    v53 = TerminalPramsManager_TypeInfo;
  }
  v53->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
  if ( !byte_42E4B20 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    v53 = TerminalPramsManager_TypeInfo;
    byte_42E4B20 = 1;
  }
  if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v53);
    v53 = TerminalPramsManager_TypeInfo;
  }
  EventID = WarMaster__getEventID(v53->static_fields->_WarId_k__BackingField, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_119;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_119;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         EventID,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_119;
    if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)entity, 0LL) )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E502F )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v57, v58, v59);
        byte_42E502F = 1;
      }
      v60 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v60 = TerminalPramsManager_TypeInfo;
      }
      v60->static_fields->_isPlayRiverActionCheck_k__BackingField = 1;
    }
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__DeleteTalkResumeInfo(0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B31 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)v61, v62, v63);
    byte_42E4B31 = 1;
  }
  v64 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v64 = TerminalPramsManager_TypeInfo;
  }
  if ( v64->static_fields->_IsScriptDisp_k__BackingField )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_119;
    AvalonSceneManager__UnloadScene_PartyOrganizationRootComponent_(
      (AvalonSceneManager_o *)Instance,
      (const MethodInfo_1AD5990 *)Method_AvalonSceneManager_UnloadScene_BattleScriptRootComponent___);
    v65 = (UnityEngine_MonoBehaviour_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v66 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v67 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v67, (Il2CppObject *)this, Method_BattleScriptRootComponent_TransitionTerminalSub__, 0LL);
    if ( !v66 )
      goto LABEL_119;
    Instance = (DataManager_o *)AvalonSceneManager__UnloadSceneAsync_TerminalSceneComponent_(
                                  v66,
                                  v67,
                                  (const MethodInfo_1AD5B70 *)Method_AvalonSceneManager_UnloadSceneAsync_TerminalSceneComponent___);
    if ( !v65 )
      goto LABEL_119;
    UnityEngine_MonoBehaviour__StartCoroutine_35615088(v65, (System_Collections_IEnumerator_o *)Instance, 0LL);
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v68, v69, v70);
      byte_42E4B1E = 1;
    }
    v71 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v71 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_Object_o *)v71->static_fields->mInstance;
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
      if ( !byte_42E4B1E )
      {
        sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v56, v73, v74);
        byte_42E4B1E = 1;
      }
      Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
      }
      klass = Instance[1].fields.saveNameList->klass;
      if ( !klass )
        goto LABEL_119;
      v76 = *(UnityEngine_Object_o **)&klass->_2.static_fields_size;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v76, 0LL, 0LL) )
      {
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_42E4B1E )
        {
          sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v56, v77, v78);
          byte_42E4B1E = 1;
        }
        Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
        }
        v79 = Instance[1].fields.saveNameList->klass;
        if ( !v79 )
          goto LABEL_119;
        Instance = *(DataManager_o **)&v79->_2.static_fields_size;
        if ( !Instance )
          goto LABEL_119;
        ScrTerminalMap__SetDiceButton((ScrTerminalMap_o *)Instance, 0LL);
        if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
        }
        Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
        v80 = (clsQuestCheck_o *)Instance;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        }
        if ( !v80 )
          goto LABEL_119;
        if ( clsQuestCheck__CheckQuestPlayableNow(
               v80,
               BalanceConfig_TypeInfo->static_fields->EventBoardGameNextBoardQuestId,
               0LL) )
        {
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_42E57FF )
          {
            sub_B5D5C4(&TerminalPramsManager_TypeInfo, v56, v81, v82);
            byte_42E57FF = 1;
          }
          v83 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v83 = TerminalPramsManager_TypeInfo;
          }
          v83->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField = 1;
          if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
          }
          Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
          if ( Instance )
          {
            MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
            return;
          }
LABEL_119:
          sub_B5D69C(Instance, v56);
        }
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_42E4B1E )
        {
          sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v56, v81, v82);
          byte_42E4B1E = 1;
        }
        Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
        }
        v84 = Instance[1].fields.saveNameList->klass;
        if ( !v84 )
          goto LABEL_119;
        Instance = *(DataManager_o **)&v84->_2.static_fields_size;
        if ( !Instance )
          goto LABEL_119;
        ScrTerminalMap__SetEventBoardQuestArrivalPanel((ScrTerminalMap_o *)Instance, 0LL);
      }
    }
  }
  else
  {
    BattleScriptRootComponent__TransitionTerminalSub(this, v61);
  }
}


void __fastcall BattleScriptRootComponent__TransitionTerminalSub(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int v17; // w2
  __int64 v18; // x3
  int32_t v19; // w20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v20; // x8
  int32_t talkType; // w21
  bool v22; // w19
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  TerminalPramsManager_c *v26; // x0

  if ( (byte_42E5787 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v11, v12, v13);
    byte_42E5787 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
    if ( !byte_42E5800 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v15, v17, v18);
      byte_42E5800 = 1;
    }
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    }
    v19 = 2;
    LOBYTE(Instance[1].fields.saveNameList[14].klass) = 1;
  }
  else
  {
    v19 = 1;
  }
  v20 = this->fields.talkInfo;
  if ( !v20 )
    goto LABEL_33;
  talkType = v20->fields.talkType;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  if ( talkType != 5 )
  {
LABEL_23:
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, v19, 0LL, 0, 0LL);
    goto LABEL_24;
  }
  v22 = AvalonSceneManager__checkLoadedScene((AvalonSceneManager_o *)Instance, 34, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_33:
    sub_B5D69C(Instance, v15);
  if ( !v22 )
    goto LABEL_23;
  AvalonSceneManager__changeScene((AvalonSceneManager_o *)Instance, 34, v19, 0LL, 0LL);
LABEL_24:
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E57FC )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v23, v24, v25);
    byte_42E57FC = 1;
  }
  v26 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
  }
  v26->static_fields->_IsScriptDisp_k__BackingField = 0;
}


void __fastcall BattleScriptRootComponent__TransitionWarBoard(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  AvalonSceneManager_o *Instance; // x0
  const MethodInfo *v30; // x1
  int v31; // w2
  __int64 v32; // x3
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleSetupInfo_o *bSetupInfo; // x20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v35; // x8
  Il2CppObject *v36; // x3
  int32_t v37; // w1
  CommonUI_o *v38; // x19
  BattleScriptRootComponent___c_c *v39; // x8
  struct BattleScriptRootComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__47_0; // x22
  System_String_o *v42; // x20
  System_String_o *v43; // x21
  Il2CppObject *v44; // x23
  struct BattleScriptRootComponent___c_StaticFields *v45; // x0
  TerminalPramsManager_c *v46; // x0

  if ( (byte_42E5788 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ScriptManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_BattleScriptRootComponent___c__TransitionWarBoard_b__47_0__, v17, v18, v19);
    sub_B5D5C4(&BattleScriptRootComponent___c_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_24151/*"バトルスクリプトエラー"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_24152/*"バトル前スクリプト以外のトークから聖杯戦争盤へ移動することはできません。\nターミナルへ戻ります。"*/, v26, v27, v28);
    byte_42E5788 = 1;
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
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v38 = (CommonUI_o *)Instance;
    v39 = BattleScriptRootComponent___c_TypeInfo;
    if ( (BYTE3(BattleScriptRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleScriptRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleScriptRootComponent___c_TypeInfo);
      v39 = BattleScriptRootComponent___c_TypeInfo;
    }
    static_fields = v39->static_fields;
    _9__47_0 = static_fields->__9__47_0;
    v42 = (System_String_o *)StringLiteral_24152/*"バトル前スクリプト以外のトークから聖杯戦争盤へ移動することはできません。\nターミナルへ戻ります。"*/;
    v43 = (System_String_o *)StringLiteral_24151/*"バトルスクリプトエラー"*/;
    if ( !_9__47_0 )
    {
      if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39);
        static_fields = BattleScriptRootComponent___c_TypeInfo->static_fields;
      }
      v44 = (Il2CppObject *)static_fields->__9;
      _9__47_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(_9__47_0, v44, Method_BattleScriptRootComponent___c__TransitionWarBoard_b__47_0__, 0LL);
      v45 = BattleScriptRootComponent___c_TypeInfo->static_fields;
      v45->__9__47_0 = _9__47_0;
      sub_B5D560(&v45->__9__47_0);
    }
    if ( v38 )
    {
      CommonUI__OpenNotificationDialog(v38, v43, v42, _9__47_0, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
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
    if ( !byte_42E4B29 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)v30, v31, v32);
      byte_42E4B29 = 1;
    }
    v46 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v46 = TerminalPramsManager_TypeInfo;
    }
    v46->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      v37 = 34;
      v36 = 0LL;
      goto LABEL_36;
    }
LABEL_38:
    sub_B5D69C(Instance, v30);
  }
  if ( bSetupInfo->fields.isScriptBeforePartySelect )
  {
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    bSetupInfo->fields.selectedBranchIdx = ScriptManager__GetSelectBranchIndex(0LL);
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v35 = this->fields.talkInfo;
    if ( v35 && Instance )
    {
      v36 = (Il2CppObject *)v35->fields.bSetupInfo;
      v37 = 35;
LABEL_36:
      AvalonSceneManager__transitionSceneRefresh(Instance, v37, 1, v36, 0, 0LL);
      return;
    }
    goto LABEL_38;
  }
  BattleScriptRootComponent__GoForBattle(bSetupInfo, v30);
}


void __fastcall BattleScriptRootComponent___ChapterStartEffect_b__41_0(
        BattleScriptRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20
  BattleScriptRootComponent_o *v9; // x0
  const MethodInfo *v10; // x2

  if ( (byte_42E5791 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isExit, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BattleScriptRootComponent__ChapterStartEffect_b__41_1__, v5, v6, v7);
    byte_42E5791 = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleScriptRootComponent__ChapterStartEffect_b__41_1__, 0LL);
  BattleScriptRootComponent__StartMashuPowerUpAction(v9, v8, v10);
}


void __fastcall BattleScriptRootComponent___ChapterStartEffect_b__41_1(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleScriptRootComponent_o *v4; // x19
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w20
  const MethodInfo *v7; // x1

  v4 = this;
  if ( (byte_42E5792 & 1) == 0 )
  {
    this = (BattleScriptRootComponent_o *)sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5792 = 1;
  }
  talkInfo = v4->fields.talkInfo;
  if ( !talkInfo )
    sub_B5D69C(this, method);
  wId = talkInfo->fields.wId;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__SetWarStartedId(wId, 0LL);
  BattleScriptRootComponent__EndChapterStart(v4, v7);
}


void __fastcall BattleScriptRootComponent___ChapterStartQuest_b__40_0(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleScriptRootComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleScriptRootComponent_TalkScriptInfo_o *v24; // x20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v25; // x8
  WarEntity_o *WarEntityByWarID; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v27; // x8
  const MethodInfo *v28; // x1
  int v29; // w2
  __int64 v30; // x3
  TerminalPramsManager_c *v31; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_42E5790 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_WarMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&ScriptManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v17, v18, v19);
    this = (BattleScriptRootComponent_o *)sub_B5D5C4(&TerminalPramsManager_TypeInfo, v20, v21, v22);
    byte_42E5790 = 1;
  }
  entity = 0LL;
  talkInfo = v4->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_30;
  ++talkInfo->fields.pId;
  v24 = v4->fields.talkInfo;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__SaveTalkResumeInfo(v24, 0LL);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  this = (BattleScriptRootComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  v25 = v4->fields.talkInfo;
  if ( !v25 || !this )
    goto LABEL_30;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)this, v25->fields.wId, 0LL);
  entity = WarEntityByWarID;
  if ( !WarEntityByWarID )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleScriptRootComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarMaster___);
    v27 = v4->fields.talkInfo;
    if ( v27 && this )
    {
      DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
        (DataMasterBase_WarMaster__WarEntity__int__o *)this,
        &entity,
        v27->fields.wId,
        (const MethodInfo_23FAE6C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
      WarEntityByWarID = entity;
      if ( !entity )
        goto LABEL_29;
      goto LABEL_19;
    }
LABEL_30:
    sub_B5D69C(this, method);
  }
LABEL_19:
  if ( WarEntity__HasFlag(WarEntityByWarID, 0x8000, 0LL) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B4F )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)v28, v29, v30);
      byte_42E4B4F = 1;
    }
    v31 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v31 = TerminalPramsManager_TypeInfo;
    }
    v31->static_fields->_IsPhaseClear_k__BackingField = 1;
  }
LABEL_29:
  BattleScriptRootComponent__ChapterStartEffectQuest(v4, v28);
}


void __fastcall BattleScriptRootComponent___ChapterStart_b__39_0(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleScriptRootComponent_o *v4; // x19
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleScriptRootComponent_TalkScriptInfo_o *v6; // x20
  const MethodInfo *v7; // x1

  v4 = this;
  if ( (byte_42E578F & 1) == 0 )
  {
    this = (BattleScriptRootComponent_o *)sub_B5D5C4(&ScriptManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E578F = 1;
  }
  talkInfo = v4->fields.talkInfo;
  if ( !talkInfo )
    sub_B5D69C(this, method);
  ++talkInfo->fields.pId;
  v6 = v4->fields.talkInfo;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__SaveTalkResumeInfo(v6, 0LL);
  BattleScriptRootComponent__ChapterStartEffect(v4, v7);
}


void __fastcall BattleScriptRootComponent___EndRequestBattleScenario_b__37_0(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8

  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_B5D69C(this, method);
  BattleScriptRootComponent__ProcessBattleScripts(this, talkInfo->fields.talkPhase, v2);
}


void __fastcall BattleScriptRootComponent___StartDemoBeforeBattle_b__28_0(
        BattleScriptRootComponent_o *this,
        System_String_o *demoInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommonUI_o *Instance; // x0
  __int64 v13; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 bSetupInfo; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v16; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v17; // x8

  if ( (byte_42E578D & 1) == 0 )
  {
    sub_B5D5C4(&BattleSetupInfo_TypeInfo, (_DWORD)demoInfo, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42E578D = 1;
  }
  if ( demoInfo )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 1, 0LL);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        bSetupInfo = (__int64)talkInfo->fields.bSetupInfo;
        if ( !bSetupInfo )
        {
          bSetupInfo = sub_B5D694(BattleSetupInfo_TypeInfo);
          BattleSetupInfo___ctor((BattleSetupInfo_o *)bSetupInfo, 0LL);
          v16 = this->fields.talkInfo;
          if ( !v16 )
            goto LABEL_14;
          if ( !bSetupInfo )
            goto LABEL_14;
          *(_DWORD *)(bSetupInfo + 20) = v16->fields.qId;
          v17 = this->fields.talkInfo;
          if ( !v17 )
            goto LABEL_14;
          *(_DWORD *)(bSetupInfo + 24) = v17->fields.pId;
        }
        *(_QWORD *)(bSetupInfo + 104) = demoInfo;
        *(_WORD *)(bSetupInfo + 96) = 1;
        sub_B5D560(bSetupInfo + 104);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 50, 1, (Il2CppObject *)bSetupInfo, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B5D69C(Instance, v13);
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, method);
}


void __fastcall BattleScriptRootComponent___StartDemoFinishBattle_b__22_0(
        BattleScriptRootComponent_o *this,
        System_String_o *demoInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommonUI_o *Instance; // x0
  __int64 v13; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 bSetupInfo; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v16; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v17; // x8

  if ( (byte_42E578A & 1) == 0 )
  {
    sub_B5D5C4(&BattleSetupInfo_TypeInfo, (_DWORD)demoInfo, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42E578A = 1;
  }
  if ( demoInfo )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 1, 0LL);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        bSetupInfo = (__int64)talkInfo->fields.bSetupInfo;
        if ( !bSetupInfo )
        {
          bSetupInfo = sub_B5D694(BattleSetupInfo_TypeInfo);
          BattleSetupInfo___ctor((BattleSetupInfo_o *)bSetupInfo, 0LL);
          v16 = this->fields.talkInfo;
          if ( !v16 )
            goto LABEL_14;
          if ( !bSetupInfo )
            goto LABEL_14;
          *(_DWORD *)(bSetupInfo + 20) = v16->fields.qId;
          v17 = this->fields.talkInfo;
          if ( !v17 )
            goto LABEL_14;
          *(_DWORD *)(bSetupInfo + 24) = v17->fields.pId;
        }
        *(_QWORD *)(bSetupInfo + 104) = demoInfo;
        *(_WORD *)(bSetupInfo + 96) = 256;
        sub_B5D560(bSetupInfo + 104);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 50, 1, (Il2CppObject *)bSetupInfo, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B5D69C(Instance, v13);
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, method);
}


void __fastcall BattleScriptRootComponent___StartScriptBefeoreBattleDemo_b__27_0(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleScriptRootComponent_o *v4; // x23
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w19
  int32_t qId; // w20
  int32_t pId; // w21
  ScriptManager_CallbackFunc_o *v15; // x22
  int32_t JumpLine; // w23

  v4 = this;
  if ( (byte_42E578C & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleScriptRootComponent_RequestBattleSecnarioForNoneBattleQuest__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ScriptManager_CallbackFunc_TypeInfo, v5, v6, v7);
    this = (BattleScriptRootComponent_o *)sub_B5D5C4(&ScriptManager_TypeInfo, v8, v9, v10);
    byte_42E578C = 1;
  }
  talkInfo = v4->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        qId = talkInfo->fields.qId,
        pId = talkInfo->fields.pId,
        v15 = (ScriptManager_CallbackFunc_o *)sub_B5D694(ScriptManager_CallbackFunc_TypeInfo),
        ScriptManager_CallbackFunc___ctor(
          v15,
          (Il2CppObject *)v4,
          Method_BattleScriptRootComponent_RequestBattleSecnarioForNoneBattleQuest__,
          0LL),
        (this = (BattleScriptRootComponent_o *)v4->fields.talkInfo) == 0LL) )
  {
    sub_B5D69C(this, method);
  }
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)this,
               0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayBattleStartWhite(wId, qId, pId, v15, 0, 0LL, JumpLine, 0, 0LL);
}


void __fastcall BattleScriptRootComponent___StartScriptNoBattleAfter_b__38_0(
        BattleScriptRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_42E578E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isExit, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BattleScriptRootComponent_TransitionTerminal__, v5, v6, v7);
    byte_42E578E = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleScriptRootComponent_TransitionTerminal__, 0LL);
  BattleScriptRootComponent__PlayStaffRoll(this, v8, v9);
}


void __fastcall BattleScriptRootComponent___StartScript_b__13_0(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8

  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_B5D69C(this, method);
  BattleScriptRootComponent__ProcessBattleScripts(this, talkInfo->fields.talkPhase, v2);
}


void __fastcall BattleScriptRootComponent___StartSecondDemoFinishBattle_b__25_0(
        BattleScriptRootComponent_o *this,
        System_String_o *demoInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  CommonUI_o *Instance; // x0
  __int64 v19; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 bSetupInfo; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v22; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v23; // x8
  System_Action_o *v24; // x20
  const MethodInfo *v25; // x2

  if ( (byte_42E578B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)demoInfo, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__25_1__, v6, v7, v8);
    sub_B5D5C4(&BattleSetupInfo_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16, v17);
    byte_42E578B = 1;
  }
  if ( demoInfo )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 1, 0LL);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        bSetupInfo = (__int64)talkInfo->fields.bSetupInfo;
        if ( !bSetupInfo )
        {
          bSetupInfo = sub_B5D694(BattleSetupInfo_TypeInfo);
          BattleSetupInfo___ctor((BattleSetupInfo_o *)bSetupInfo, 0LL);
          v22 = this->fields.talkInfo;
          if ( !v22 )
            goto LABEL_16;
          if ( !bSetupInfo )
            goto LABEL_16;
          *(_DWORD *)(bSetupInfo + 20) = v22->fields.qId;
          v23 = this->fields.talkInfo;
          if ( !v23 )
            goto LABEL_16;
          *(_DWORD *)(bSetupInfo + 24) = v23->fields.pId;
        }
        *(_QWORD *)(bSetupInfo + 104) = demoInfo;
        *(_WORD *)(bSetupInfo + 96) = 0;
        sub_B5D560(bSetupInfo + 104);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 50, 1, (Il2CppObject *)bSetupInfo, 0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_B5D69C(Instance, v19);
  }
  if ( this->fields.setEndRoll )
  {
    v24 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v24,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__25_1__,
      0LL);
    BattleScriptRootComponent__PlayStaffRoll(this, v24, v25);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CommonUI_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E5766 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    byte_42E5766 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode(Instance, 0, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(Instance, v9);
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
    sub_B5D69C(0LL, data);
  BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(talkInfo, 0LL);
  BattleScriptRootComponent__StartScript(this, v5);
}


void __fastcall BattleScriptRootComponent__beginStartUp(
        BattleScriptRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x9
  struct BattleScriptRootComponent_TalkScriptInfo_o **p_talkInfo; // x20
  __int64 v20; // x1
  BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x0
  WarEntity_o *QuestId; // x0
  int32_t id; // w20
  bool v24; // w8
  BattleScriptRootComponent_o *v25; // x0
  Il2CppObject *v26; // x1
  const MethodInfo *v27; // x2

  if ( (byte_42E5767 & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_6412/*"FES_WAR_ID"*/, v15, v16, v17);
    byte_42E5767 = 1;
  }
  if ( data )
  {
    v18 = *(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo->_2.bitflags2 + 1);
    if ( *(&data->klass->_2.bitflags2 + 1) < (unsigned int)v18
      || (BattleScriptRootComponent_TalkScriptInfo_c *)data->klass->_2.typeHierarchy[v18 - 1] != BattleScriptRootComponent_TalkScriptInfo_TypeInfo )
    {
      v25 = (BattleScriptRootComponent_o *)sub_B5D990(data);
      BattleScriptRootComponent__beginResume(v25, v26, v27);
      return;
    }
  }
  this->fields.talkInfo = (struct BattleScriptRootComponent_TalkScriptInfo_o *)data;
  p_talkInfo = &this->fields.talkInfo;
  sub_B5D560(&this->fields.talkInfo);
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
        (talkInfo = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (talkInfo = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)talkInfo,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarMaster___),
        !*p_talkInfo)
    || !talkInfo )
  {
LABEL_23:
    sub_B5D69C(talkInfo, v20);
  }
  QuestId = WarMaster__getByLastQuestId((WarMaster_o *)talkInfo, (*p_talkInfo)->fields.qId, 0LL);
  if ( QuestId )
  {
    id = QuestId->fields.id;
    v24 = id == ConstantMaster__getValue((System_String_o *)StringLiteral_6412/*"FES_WAR_ID"*/, 0LL);
  }
  else
  {
    v24 = 0;
  }
  this->fields.setEndRoll = v24;
  SceneRootComponent__beginStartUp_17513116((SceneRootComponent_o *)this, 0LL);
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  struct BattleScriptRootComponent_TalkScriptInfo_StaticFields *static_fields; // x0

  if ( (byte_42E60D5 & 1) == 0 )
  {
    sub_B5D5C4(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_1126/*"2.0"*/, v4, v5, v6);
    byte_42E60D5 = 1;
  }
  static_fields = BattleScriptRootComponent_TalkScriptInfo_TypeInfo->static_fields;
  static_fields->TalkResumeVersion = (struct System_String_o *)StringLiteral_1126/*"2.0"*/;
  sub_B5D560(static_fields);
  BattleScriptRootComponent_TalkScriptInfo_TypeInfo->static_fields->WinResultMultiplicationValue = 100;
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___ctor(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___ctor_20491228(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        BattleScriptRootComponent_TalkScriptSaveInfo_o *saveInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  BattleSetupInfo_BattleSetupSaveInfo_o *bSetupInfo; // x21
  BattleSetupInfo_o *v9; // x20
  struct BattleSetupInfo_o **p_bSetupInfo; // x19

  if ( (byte_42E60CF & 1) == 0 )
  {
    sub_B5D5C4(&BattleSetupInfo_TypeInfo, (_DWORD)saveInfo, (_DWORD)method, v3);
    byte_42E60CF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !saveInfo )
    sub_B5D69C(v6, v7);
  this->fields.wId = saveInfo->fields.wId;
  this->fields.qId = saveInfo->fields.qId;
  this->fields.pId = saveInfo->fields.pId;
  this->fields.talkType = saveInfo->fields.talkType;
  this->fields.winLoseInfo = saveInfo->fields.winLoseInfo;
  this->fields.talkPhase = saveInfo->fields.talkPhase;
  bSetupInfo = saveInfo->fields.bSetupInfo;
  if ( bSetupInfo )
  {
    v9 = (BattleSetupInfo_o *)sub_B5D694(BattleSetupInfo_TypeInfo);
    BattleSetupInfo___ctor_29943608(v9, bSetupInfo, 0LL);
  }
  else
  {
    v9 = 0LL;
  }
  this->fields.bSetupInfo = v9;
  p_bSetupInfo = &this->fields.bSetupInfo;
  sub_B5D560(p_bSetupInfo);
  *((_BYTE *)p_bSetupInfo + 9) = 0;
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___ctor_20491436(
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
  sub_B5D560(v16);
  BYTE1(v16->monitor) = 0;
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___ctor_20491572(
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
  sub_B5D560(&this->fields.bSetupInfo);
  BattleScriptRootComponent_TalkScriptInfo__SetBasePhaseOfType(this, type, isPlayedScript, v18);
  this->fields.restoreLine = 0;
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___ctor_20491808(
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
  sub_B5D560(&this->fields.bSetupInfo);
  bSetupInfo = this->fields.bSetupInfo;
  if ( !bSetupInfo )
    sub_B5D69C(v13, v14);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x19
  __int64 v9; // x1
  BattleScriptRootComponent_TalkScriptInfo_c *v10; // x0
  BattleSetupInfo_o *bSetupInfo; // x0
  BattleSetupInfo_BattleSetupSaveInfo_o *InfoForSave; // x1

  if ( (byte_42E60D0 & 1) == 0 )
  {
    sub_B5D5C4(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleScriptRootComponent_TalkScriptSaveInfo_TypeInfo, v5, v6, v7);
    byte_42E60D0 = 1;
  }
  v8 = sub_B5D694(BattleScriptRootComponent_TalkScriptSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  v10 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  if ( (BYTE3(BattleScriptRootComponent_TalkScriptInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleScriptRootComponent_TalkScriptInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    v10 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  }
  if ( !v8 )
    sub_B5D69C(v10, v9);
  *(_QWORD *)(v8 + 16) = v10->static_fields->TalkResumeVersion;
  sub_B5D560(v8 + 16);
  *(_DWORD *)(v8 + 24) = this->fields.wId;
  *(_DWORD *)(v8 + 28) = this->fields.qId;
  *(_DWORD *)(v8 + 32) = this->fields.pId;
  *(_DWORD *)(v8 + 36) = this->fields.talkType;
  *(_DWORD *)(v8 + 44) = this->fields.winLoseInfo;
  *(_DWORD *)(v8 + 40) = this->fields.talkPhase;
  bSetupInfo = this->fields.bSetupInfo;
  if ( bSetupInfo )
    InfoForSave = BattleSetupInfo__GetInfoForSave(bSetupInfo, 0LL);
  else
    InfoForSave = 0LL;
  *(_QWORD *)(v8 + 48) = InfoForSave;
  sub_B5D560(v8 + 48);
  return (BattleScriptRootComponent_TalkScriptSaveInfo_o *)v8;
}


int32_t __fastcall BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E60D2 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E60D2 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E60D4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E60D4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL
    || (Instance = (DataManager_o *)QuestMaster__getQuestEntity((QuestMaster_o *)Instance, this->fields.qId, 0LL)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
  }
  return QuestEntity__HasFlag((QuestEntity_o *)Instance, 0x40000000LL, 0LL);
}


bool __fastcall BattleScriptRootComponent_TalkScriptInfo__IsRestorable(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t pId; // w20
  int32_t qId; // w21
  int32_t CachedSelectedBranchQuestId; // w20
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  int32_t ScriptQuestId; // w20
  const MethodInfo *v20; // x1
  int32_t winResult; // w0
  int32_t talkType; // w8
  WebViewManager_o *v23; // x0
  int32_t v24; // w22
  ScriptManager_o *v25; // x21
  WebViewManager_o *v26; // x0
  int32_t v27; // w22
  WebViewManager_o *v28; // x21
  System_String_o *v29; // x1
  ScriptManager_o *v30; // x0
  int32_t v31; // w21
  WebViewManager_o *v32; // x0
  int32_t v33; // w23
  ScriptManager_o *v34; // x22
  _BOOL4 IsExistScriptFile; // w20
  WebViewManager_o *v36; // x0
  int32_t v37; // w23
  WebViewManager_o *v38; // x22
  QuestEntity_o *QuestEntity; // x0
  _BOOL4 IsOpenByTime; // w8
  bool v41; // w19

  if ( (byte_42E60D3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ScriptManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E60D3 = 1;
  }
  qId = this->fields.qId;
  pId = this->fields.pId;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  CachedSelectedBranchQuestId = ScriptManager__GetCachedSelectedBranchQuestId(qId, pId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_43;
  ScriptQuestId = QuestMaster__getScriptQuestId((QuestMaster_o *)Instance, CachedSelectedBranchQuestId, 0LL);
  winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(this, v20);
  talkType = this->fields.talkType;
  if ( talkType == 4 )
  {
    v31 = winResult;
    v32 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v33 = this->fields.pId;
    v34 = (ScriptManager_o *)v32;
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    Instance = (DataManager_o *)ScriptManager__GetScriptName_BattleEnd2(ScriptQuestId, v33, v31, 0LL);
    if ( !v34 )
      goto LABEL_43;
    if ( !ScriptManager__IsExistScriptFile(v34, (System_String_o *)Instance, 0LL) )
    {
      v36 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      v37 = this->fields.pId;
      v38 = v36;
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      Instance = (DataManager_o *)ScriptManager__GetScriptName_BattleEnd(ScriptQuestId, v37, v31, 0LL);
      if ( v38 )
      {
        v29 = (System_String_o *)Instance;
        v30 = (ScriptManager_o *)v38;
        goto LABEL_31;
      }
LABEL_43:
      sub_B5D69C(Instance, v18);
    }
  }
  else if ( talkType == 3 )
  {
    v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v24 = this->fields.pId;
    v25 = (ScriptManager_o *)v23;
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    Instance = (DataManager_o *)ScriptManager__GetScriptName_BattleStart(ScriptQuestId, v24, 0LL);
    if ( !v25 )
      goto LABEL_43;
    if ( !ScriptManager__IsExistScriptFile(v25, (System_String_o *)Instance, 0LL) )
    {
      v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      v27 = this->fields.pId;
      v28 = v26;
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      Instance = (DataManager_o *)ScriptManager__GetScriptName_BattleStart2(ScriptQuestId, v27, 0LL);
      if ( v28 )
      {
        v29 = (System_String_o *)Instance;
        v30 = (ScriptManager_o *)v28;
LABEL_31:
        IsExistScriptFile = ScriptManager__IsExistScriptFile(v30, v29, 0LL);
        goto LABEL_32;
      }
      goto LABEL_43;
    }
  }
  IsExistScriptFile = 1;
LABEL_32:
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_43;
  QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)Instance, this->fields.qId, 0LL);
  if ( QuestEntity )
    IsOpenByTime = QuestEntity__IsOpenByTime(QuestEntity, 0, 0LL);
  else
    IsOpenByTime = 0;
  v41 = IsOpenByTime && IsExistScriptFile;
  if ( !IsOpenByTime || !IsExistScriptFile )
  {
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__DeleteTalkResumeInfo(0LL);
  }
  return v41;
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t talkPhase; // w8
  unsigned int v9; // w8

  if ( (byte_42E60D1 & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ScriptManager_TypeInfo, v5, v6, v7);
    byte_42E60D1 = 1;
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
  v9 = talkPhase - 1;
  if ( v9 <= 8 && ((0x1EFu >> v9) & 1) != 0 )
    this->fields.talkPhase = dword_32A0380[v9];
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
        sub_B5D69C(0LL, type);
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
  int v2; // w2
  __int64 v3; // x3
  int32_t winLoseInfo; // w21
  BattleScriptRootComponent_TalkScriptInfo_c *v6; // x0
  int32_t WinResultMultiplicationValue; // w8
  int32_t v8; // w19
  int32_t v9; // w0
  int32_t v10; // w8

  if ( (byte_42E60CC & 1) == 0 )
  {
    sub_B5D5C4(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E60CC = 1;
  }
  winLoseInfo = this->fields.winLoseInfo;
  v6 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  if ( (BYTE3(BattleScriptRootComponent_TalkScriptInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleScriptRootComponent_TalkScriptInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    v6 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  }
  WinResultMultiplicationValue = v6->static_fields->WinResultMultiplicationValue;
  if ( winLoseInfo % WinResultMultiplicationValue != 1 )
    return 0;
  v8 = this->fields.winLoseInfo;
  if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    WinResultMultiplicationValue = BattleScriptRootComponent_TalkScriptInfo_TypeInfo->static_fields->WinResultMultiplicationValue;
  }
  v9 = UnityEngine_Mathf__FloorToInt((float)(v8 / WinResultMultiplicationValue), 0LL);
  if ( v9 == 2 )
    v10 = 2;
  else
    v10 = 1;
  if ( v9 == 3 )
    return 3;
  else
    return v10;
}


int32_t __fastcall BattleScriptRootComponent_TalkScriptInfo__get_win_lose(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t winLoseInfo; // w19
  BattleScriptRootComponent_TalkScriptInfo_c *v6; // x0

  if ( (byte_42E60CE & 1) == 0 )
  {
    sub_B5D5C4(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E60CE = 1;
  }
  winLoseInfo = this->fields.winLoseInfo;
  v6 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  if ( (BYTE3(BattleScriptRootComponent_TalkScriptInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleScriptRootComponent_TalkScriptInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    v6 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  }
  return winLoseInfo % v6->static_fields->WinResultMultiplicationValue;
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

  if ( (byte_42E60CD & 1) == 0 )
  {
    sub_B5D5C4(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, winLose, winResult, method);
    byte_42E60CD = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t _1__state; // w8
  struct BattleScriptRootComponent_o *_4__this; // x22
  void *Instance; // x0
  const MethodInfo *v17; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  System_String_o *MovieFolder; // x20
  System_Action_o *callback; // x0
  bool result; // w0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v22; // x8
  MovieFileMerge_o *v23; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v24; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v25; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v26; // x8
  Il2CppObject **p__2__current; // x19

  if ( (byte_42E60CB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42E60CB = 1;
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
      v17);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v22 = _4__this->fields.talkInfo;
  if ( !v22 )
    goto LABEL_36;
  v23 = (MovieFileMerge_o *)*((_QWORD *)Instance + 200);
  if ( v22->fields.talkType == 5 )
    goto LABEL_34;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___),
        (v24 = _4__this->fields.talkInfo) == 0LL)
    || !Instance )
  {
LABEL_36:
    sub_B5D69C(Instance, v17);
  }
  Instance = (void *)QuestPhaseMaster__GetMoviePlayType(
                       (QuestPhaseMaster_o *)Instance,
                       v24->fields.qId,
                       v24->fields.pId,
                       0LL);
  if ( (_DWORD)Instance == 1 )
  {
    v26 = _4__this->fields.talkInfo;
    if ( !v26 )
      goto LABEL_36;
    if ( v26->fields.talkPhase >= 6 )
      goto LABEL_10;
  }
  else if ( (_DWORD)Instance == 2 )
  {
    v25 = _4__this->fields.talkInfo;
    if ( !v25 )
      goto LABEL_36;
    if ( v25->fields.talkPhase < 5 )
      goto LABEL_10;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0LL);
LABEL_34:
  if ( !v23 )
    goto LABEL_36;
  MovieFileMerge__Initialize(v23, MovieFolder, 0LL);
  this->fields.__2__current = (Il2CppObject *)MovieFileMerge__PlayMP4(v23, 0LL);
  p__2__current = &this->fields.__2__current;
  sub_B5D560(p__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleScriptRootComponent__StartMovie_d__14_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BattleScriptRootComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E60C4 & 1) == 0 )
  {
    sub_B5D5C4(&BattleScriptRootComponent___c_TypeInfo, v1, v2, v3);
    byte_42E60C4 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleScriptRootComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BattleScriptRootComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleScriptRootComponent___c_o *)v4;
  sub_B5D560(static_fields);
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
  int v2; // w2
  __int64 v3; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E60C5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E60C5 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
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
  __int64 v3; // x3
  __int64 v5; // x1
  BattleScriptRootComponent_o *_4__this; // x0

  if ( (byte_42E60C6 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptManager_TypeInfo, (_DWORD)str, (_DWORD)method, v3);
    byte_42E60C6 = 1;
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__ClearSelectRouteArray(0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, v5);
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
  __int64 v3; // x3
  __int64 v5; // x1
  BattleScriptRootComponent_o *_4__this; // x0

  if ( (byte_42E60C7 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptManager_TypeInfo, (_DWORD)str, (_DWORD)method, v3);
    byte_42E60C7 = 1;
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__ClearSelectRouteArray(0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, v5);
  BattleScriptRootComponent__ProceedToNextTalkPhase(_4__this, this->fields.isExit, 0LL);
}


void __fastcall BattleScriptRootComponent___c__DisplayClass44_0___ctor(
        BattleScriptRootComponent___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleScriptRootComponent___c__DisplayClass44_0___StartMashuPowerUpAction_b__0(
        BattleScriptRootComponent___c__DisplayClass44_0_o *this,
        bool is_decide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  NetworkManager_ResultCallbackFunc_o *_9__1; // x20
  TutorialSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v16; // x1

  if ( (byte_42E60C8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_TutorialSetRequest___, is_decide, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_BattleScriptRootComponent___c__DisplayClass44_0__StartMashuPowerUpAction_b__1__, v11, v12, v13);
    byte_42E60C8 = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent___c__DisplayClass44_0__StartMashuPowerUpAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B5D560(&this->fields.__9__1);
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                _9__1,
                                                                (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_TutorialSetRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B5D69C(0LL, v16);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  Il2CppObject *v27; // x19
  UnityEngine_Transform_o *monitor; // x0
  __int64 v29; // x1
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x21
  UnityEngine_Transform_o **v31; // x21
  struct BattleScriptRootComponent_o *_4__this; // x8
  UnityEngine_Transform_o *transform; // x20
  int v34; // s0
  UnityEngine_Transform_o *v37; // x20
  int v38; // s0
  srcLineSprite_o *Component_srcLineSprite; // x0
  AssetData_o *v42; // x20
  EndrolRootComponent_o *v43; // x21
  System_Action_o *v44; // x22

  if ( (byte_42E60C9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EndrolRootComponent___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_BattleScriptRootComponent___c__DisplayClass48_1__PlayStaffRoll_b__1__, v18, v19, v20);
    sub_B5D5C4(&BattleScriptRootComponent___c__DisplayClass48_1_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_6070/*"EndrolPanel"*/, v24, v25, v26);
    byte_42E60C9 = 1;
  }
  v27 = (Il2CppObject *)sub_B5D694(BattleScriptRootComponent___c__DisplayClass48_1_TypeInfo);
  System_Object___ctor(v27, 0LL);
  if ( !v27 )
    goto LABEL_18;
  v27[2].klass = (Il2CppClass *)this;
  sub_B5D560(&v27[2]);
  v27[1].monitor = data;
  sub_B5D560(&v27[1].monitor);
  monitor = (UnityEngine_Transform_o *)v27[1].monitor;
  if ( !monitor )
    goto LABEL_18;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               (AssetData_o *)monitor,
                                                                               (System_String_o *)StringLiteral_6070/*"EndrolPanel"*/,
                                                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v27[1].klass = (Il2CppClass *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                  Object_WarBoardWaitTimeSetting,
                                  (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v31 = (UnityEngine_Transform_o **)&v27[1];
  sub_B5D560(&v27[1]);
  monitor = (UnityEngine_Transform_o *)v27[1].klass;
  if ( !monitor )
    goto LABEL_18;
  monitor = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)monitor, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  if ( !monitor )
    goto LABEL_18;
  UnityEngine_Transform__set_parent(monitor, _4__this->fields.cam, 0LL);
  monitor = *v31;
  if ( !*v31 )
    goto LABEL_18;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)monitor, 0LL);
  *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v34, 0LL);
  monitor = *v31;
  if ( !*v31 )
    goto LABEL_18;
  v37 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)monitor, 0LL);
  *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Vector3__get_one(0LL);
  if ( !v37
    || (UnityEngine_Transform__set_localScale(v37, *(UnityEngine_Vector3_o *)&v38, 0LL), (monitor = *v31) == 0LL)
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)monitor,
                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EndrolRootComponent___),
        v42 = (AssetData_o *)v27[1].monitor,
        v43 = (EndrolRootComponent_o *)Component_srcLineSprite,
        v44 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v44,
          v27,
          Method_BattleScriptRootComponent___c__DisplayClass48_1__PlayStaffRoll_b__1__,
          0LL),
        !v43) )
  {
LABEL_18:
    sub_B5D69C(monitor, v29);
  }
  EndrolRootComponent__Open(v43, v42, v44, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *endObj; // x20
  AssetData_o *data; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  struct BattleScriptRootComponent___c__DisplayClass48_0_o *CS___8__locals1; // x8

  if ( (byte_42E60CA & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E60CA = 1;
  }
  endObj = (UnityEngine_Object_o *)this->fields.endObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(endObj, 0LL);
  data = this->fields.data;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_30657564(data, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    sub_B5D69C(v10, v11);
  ActionExtensions__Call(CS___8__locals1->fields.callback, 0LL);
}