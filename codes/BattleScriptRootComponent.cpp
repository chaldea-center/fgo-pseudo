void __fastcall BattleScriptRootComponent___ctor(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall BattleScriptRootComponent__ChapterStart(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  BattleScriptRootComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w20
  System_Action_o *v7; // x21
  int32_t JumpLine; // w19

  v2 = this;
  if ( (byte_4C25536 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_BattleScriptRootComponent__ChapterStart_b__39_0__, v3);
    this = (BattleScriptRootComponent_o *)sub_1C3B764(&ScriptManager_TypeInfo, v4);
    byte_4C25536 = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        v7 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
        System_Action___ctor(v7, (Il2CppObject *)v2, Method_BattleScriptRootComponent__ChapterStart_b__39_0__, 0LL),
        (this = (BattleScriptRootComponent_o *)v2->fields.talkInfo) == 0LL) )
  {
    sub_1C3B9C0(this, method);
  }
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)this,
               method);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayChapterStartNotCollection(wId, v7, JumpLine, 0LL);
}


void __fastcall BattleScriptRootComponent__ChapterStartEffect(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppClass *klass; // x8
  int32_t name; // w20
  ScriptManager_CallbackFunc_o *v7; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4C25538 & 1) == 0 )
  {
    sub_1C3B764(&Method_BattleScriptRootComponent__ChapterStartEffect_b__41_0__, method);
    sub_1C3B764(&ScriptManager_CallbackFunc_TypeInfo, v3);
    this = (BattleScriptRootComponent_o *)sub_1C3B764(&ScriptManager_TypeInfo, v4);
    byte_4C25538 = 1;
  }
  klass = v2[4].klass;
  if ( !klass )
    sub_1C3B9C0(this, method);
  name = (int32_t)klass->_1.name;
  v7 = (ScriptManager_CallbackFunc_o *)sub_1C3B9B0(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v7, v2, Method_BattleScriptRootComponent__ChapterStartEffect_b__41_0__, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayChapterStartEffect(name, v7, 0, 0LL);
}


void __fastcall BattleScriptRootComponent__ChapterStartEffectQuest(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppClass *klass; // x8
  int32_t name; // w20
  ScriptManager_CallbackFunc_o *v7; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4C25539 & 1) == 0 )
  {
    sub_1C3B764(&Method_BattleScriptRootComponent__ChapterStartEffectQuest_b__42_0__, method);
    sub_1C3B764(&ScriptManager_CallbackFunc_TypeInfo, v3);
    this = (BattleScriptRootComponent_o *)sub_1C3B764(&ScriptManager_TypeInfo, v4);
    byte_4C25539 = 1;
  }
  klass = v2[4].klass;
  if ( !klass )
    sub_1C3B9C0(this, method);
  name = (int32_t)klass->_1.name;
  v7 = (ScriptManager_CallbackFunc_o *)sub_1C3B9B0(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v7, v2, Method_BattleScriptRootComponent__ChapterStartEffectQuest_b__42_0__, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayChapterStartEffect(name, v7, 0, 0LL);
}


void __fastcall BattleScriptRootComponent__ChapterStartQuest(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  BattleScriptRootComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w20
  int32_t qId; // w21
  System_Action_o *v8; // x22
  int32_t JumpLine; // w19

  v2 = this;
  if ( (byte_4C25537 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_BattleScriptRootComponent__ChapterStartQuest_b__40_0__, v3);
    this = (BattleScriptRootComponent_o *)sub_1C3B764(&ScriptManager_TypeInfo, v4);
    byte_4C25537 = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        qId = talkInfo->fields.qId,
        v8 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)v2, Method_BattleScriptRootComponent__ChapterStartQuest_b__40_0__, 0LL),
        (this = (BattleScriptRootComponent_o *)v2->fields.talkInfo) == 0LL) )
  {
    sub_1C3B9C0(this, method);
  }
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)this,
               method);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
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
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleScriptRootComponent_o *v11; // x21
  unsigned __int64 v12; // x22
  struct System_Threading_CancellationTokenSource_o *v13; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v14; // x8
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4C25521 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v3);
    this = (BattleScriptRootComponent_o *)sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4C25521 = 1;
  }
  entity = 0LL;
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_28;
  bSetupInfo = talkInfo->fields.bSetupInfo;
  if ( !bSetupInfo || (qId = bSetupInfo->fields.originQuestId, qId <= 0) )
    qId = talkInfo->fields.qId;
  this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_28;
  this = (BattleScriptRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  v8 = v2->fields.talkInfo;
  if ( !v8 || !this )
    goto LABEL_28;
  if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &entity, qId, v8->fields.pId, 0LL) )
    return;
  this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_28;
  this = (BattleScriptRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !entity )
    goto LABEL_28;
  v9 = (CommonReleaseMaster_o *)this;
  this = (BattleScriptRootComponent_o *)QuestPhaseEntity__GetCondHavingIds(entity, 0LL);
  if ( !this )
    goto LABEL_28;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v11 = this;
  if ( (int)m_CancellationTokenSource < 1 )
    return;
  v12 = 0LL;
  while ( 1 )
  {
    if ( v12 >= (unsigned int)m_CancellationTokenSource )
      goto LABEL_29;
    if ( !v9 )
      goto LABEL_28;
    this = (BattleScriptRootComponent_o *)CommonReleaseMaster__IsOpen(
                                            v9,
                                            *((_DWORD *)&v11->fields.myFSM + v12),
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
      v13 = this->fields.m_CancellationTokenSource;
      if ( (__int64)v12 < (int)v13 )
        break;
    }
    LODWORD(m_CancellationTokenSource) = v11->fields.m_CancellationTokenSource;
    if ( (__int64)++v12 >= (int)m_CancellationTokenSource )
      return;
  }
  if ( (unsigned int)v12 >= (unsigned int)v13 )
LABEL_29:
    sub_1C3B9C8(this, method);
  v14 = v2->fields.talkInfo;
  if ( !v14 )
LABEL_28:
    sub_1C3B9C0(this, method);
  v14->fields.qId = *((_DWORD *)&this->fields.myFSM + v12);
}


void __fastcall BattleScriptRootComponent__EndBeforeBattleScript(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x3
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t talkType; // w9
  BattleSetupInfo_o *bSetupInfo; // x20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v12; // x8
  Il2CppObject *v13; // x3
  int32_t v14; // w1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *v17; // x8
  TerminalPramsManager_c *v18; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  TerminalPramsManager_c *v26; // x0
  Il2CppObject *WarBoardData_k__BackingField; // x20
  PartyOrganizationUtility_o *p_WarBoardData_k__BackingField; // x0

  if ( (byte_4C2552D & 1) == 0 )
  {
    sub_1C3B764(&ScriptManager_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v4);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v5);
    byte_4C2552D = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_48;
  talkType = talkInfo->fields.talkType;
  switch ( talkType )
  {
    case 3:
      bSetupInfo = talkInfo->fields.bSetupInfo;
      if ( bSetupInfo )
      {
        if ( bSetupInfo->fields.isScriptBeforePartySelect )
        {
          if ( !ScriptManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
          bSetupInfo->fields.selectedBranchIdx = ScriptManager__GetSelectBranchIndex(0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          v12 = this->fields.talkInfo;
          if ( !v12 || !Instance )
            goto LABEL_48;
          v13 = (Il2CppObject *)v12->fields.bSetupInfo;
          v14 = 35;
        }
        else
        {
          if ( !bSetupInfo->fields.isScriptBeforeWarBoard )
          {
            BattleScriptRootComponent__GoForBattle(bSetupInfo, v7);
            return;
          }
          if ( !ScriptManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
          bSetupInfo->fields.selectedBranchIdx = ScriptManager__GetSelectBranchIndex(0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C2556F )
          {
            sub_1C3B764(&TerminalPramsManager_TypeInfo, v19);
            byte_4C2556F = 1;
          }
          v26 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v26 = TerminalPramsManager_TypeInfo;
          }
          WarBoardData_k__BackingField = (Il2CppObject *)v26->static_fields->_WarBoardData_k__BackingField;
          if ( !byte_4C1F07C )
          {
            sub_1C3B764(&TerminalPramsManager_TypeInfo, v19);
            v26 = TerminalPramsManager_TypeInfo;
            byte_4C1F07C = 1;
          }
          if ( !v26->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v26);
            v26 = TerminalPramsManager_TypeInfo;
          }
          p_WarBoardData_k__BackingField = (PartyOrganizationUtility_o *)&v26->static_fields->_WarBoardData_k__BackingField;
          p_WarBoardData_k__BackingField->klass = 0LL;
          sub_1C3B708(p_WarBoardData_k__BackingField, 0LL, v20, v21, v22, v23, v24, v25);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !Instance )
            goto LABEL_48;
          v14 = 80;
          v13 = WarBoardData_k__BackingField;
        }
      }
      else
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C1CCCA )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, v7);
          byte_4C1CCCA = 1;
        }
        v18 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v18 = TerminalPramsManager_TypeInfo;
        }
        v18->static_fields->_IsAutoResume_k__BackingField = 1;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !Instance )
          goto LABEL_48;
        v14 = 34;
        v13 = 0LL;
      }
      AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, v14, 1, v13, 0, 0LL);
      return;
    case 5:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( Instance )
      {
        Instance = (Il2CppObject *)ScriptManager__IsBadEndRoute((ScriptManager_o *)Instance, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          BattleScriptRootComponent__RequestBattleSecnarioForNoneBattleQuest(this, 0, v15);
          return;
        }
        talkInfo = this->fields.talkInfo;
        if ( talkInfo )
          goto LABEL_20;
      }
LABEL_48:
      sub_1C3B9C0(Instance, v7);
    case 6:
LABEL_20:
      BattleScriptRootComponent__SavePlayedNotMeetsScript(
        (BattleScriptRootComponent_o *)Instance,
        talkInfo->fields.qId,
        talkInfo->fields.pId,
        v8);
      v17 = this->fields.talkInfo;
      if ( v17 )
      {
        v17->fields.talkPhase = 10;
        BattleScriptRootComponent__ProcessBattleScripts(this, 10, v16);
        return;
      }
      goto LABEL_48;
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
  TerminalPramsManager_c *v11; // x0
  __int64 v12; // x1
  TerminalPramsManager_c *v13; // x0

  if ( (byte_4C2553A & 1) == 0 )
  {
    sub_1C3B764(&ScriptManager_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v4);
    byte_4C2553A = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_31;
  qId = talkInfo->fields.qId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EA89 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v6);
    byte_4C1EA89 = 1;
  }
  Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  *(_DWORD *)(*(_QWORD *)&Instance[1].fields.fadeType + 20LL) = qId;
  v9 = this->fields.talkInfo;
  if ( !v9 )
    goto LABEL_31;
  pId = v9->fields.pId;
  if ( !Instance[2].fields.m_CachedPtr )
    j_il2cpp_runtime_class_init_0(Instance);
  if ( !byte_4C1EA8D )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v6);
    byte_4C1EA8D = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_PhaseCnt_k__BackingField = (pId - 1) & ~((pId - 1) >> 31);
  TerminalPramsManager__SaveQuestInfo_SaveData(0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( AvalonSceneManager__IsStackScene(Instance, 0LL) )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      AvalonSceneManager__popSceneRefresh(Instance, 2, 0LL, 0LL);
      return;
    }
LABEL_31:
    sub_1C3B9C0(Instance, v6);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1CCCA )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v12);
    byte_4C1CCCA = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
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
  BattleScriptRootComponent_TalkScriptInfo_o *klass; // x21
  Il2CppObject *v26; // x21
  System_Object_array *v27; // x21
  Il2CppObject *v28; // x0
  BattleResultComponent_resultData_o *myFSM; // x20
  System_Collections_Generic_IEnumerable_TSource__o *freeShopIds; // x0
  BattleScriptRootComponent___c_c *v31; // x8
  BattleScriptRootComponent_o *v32; // x21
  System_Converter_TInput__TOutput__o *_9__37_1; // x22
  Il2CppObject *v34; // x23
  struct BattleScriptRootComponent___c_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_String_array *v42; // x0
  System_String_o *v43; // x0
  System_Collections_Generic_IEnumerable_TSource__o *returnRarePriShopIds; // x0
  BattleScriptRootComponent___c_c *v45; // x8
  BattleScriptRootComponent_o *v46; // x20
  System_Converter_TInput__TOutput__o *_9__37_2; // x21
  Il2CppObject *v48; // x22
  struct BattleScriptRootComponent___c_StaticFields *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_String_array *v56; // x0
  System_String_o *v57; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v59; // x2
  __int64 v60; // x1
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v62; // x0
  int32_t WarId_k__BackingField; // w21
  System_Action_o *v64; // x22
  System_Collections_IEnumerator_o *v65; // x1
  Il2CppClass *v66; // x8

  v4 = (Il2CppObject *)this;
  if ( (byte_4C25534 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, jsonstr);
    sub_1C3B764(&Method_BattleScriptRootComponent__EndRequestBattleScenario_b__37_0__, v5);
    sub_1C3B764(&System_Converter_int__string__TypeInfo, v6);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestMaster___, v7);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToList_int___, v8);
    sub_1C3B764(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___, v9);
    sub_1C3B764(&JsonManager_TypeInfo, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__ConvertAll_string___, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__ToArray__, v12);
    sub_1C3B764(&ScriptManager_TypeInfo, v13);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v15);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v16);
    sub_1C3B764(&Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__37_1__, v17);
    sub_1C3B764(&Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__37_2__, v18);
    sub_1C3B764(&BattleScriptRootComponent___c_TypeInfo, v19);
    sub_1C3B764(&StringLiteral_20011/*"img_list_not_clear_cond"*/, v20);
    sub_1C3B764(&StringLiteral_23398/*"sy2"*/, v21);
    sub_1C3B764(&StringLiteral_845/*", line {0}, position {1}"*/, v22);
    sub_1C3B764(&StringLiteral_16127/*"__field-group"*/, v23);
    this = (BattleScriptRootComponent_o *)sub_1C3B764(&StringLiteral_16386/*"align-items"*/, v24);
    byte_4C25534 = 1;
  }
  klass = (BattleScriptRootComponent_TalkScriptInfo_o *)v4[4].klass;
  if ( !klass )
    goto LABEL_53;
  klass->fields.talkPhase = 6;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__SaveTalkResumeInfo(klass, 0LL);
  ScriptManager__ClearSelectRouteArray(0LL);
  v26 = (Il2CppObject *)System_String__Concat_63379872(
                          (System_String_o *)StringLiteral_16127/*"__field-group"*/,
                          jsonstr,
                          (System_String_o *)StringLiteral_16386/*"align-items"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v27 = JsonManager__DeserializeArray_object_(
          v26,
          (const MethodInfo_3058CE8 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v27, 1, 0LL);
  v28 = (Il2CppObject *)System_String__Concat_63379872(
                          (System_String_o *)StringLiteral_16127/*"__field-group"*/,
                          jsonstr,
                          (System_String_o *)StringLiteral_16386/*"align-items"*/,
                          0LL);
  this = (BattleScriptRootComponent_o *)JsonManager__DeserializeArray_object_(
                                          v28,
                                          (const MethodInfo_3058CE8 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  if ( !this )
    goto LABEL_53;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    sub_1C3B9C8(this, jsonstr);
  myFSM = (BattleResultComponent_resultData_o *)this->fields.myFSM;
  TerminalPramsManager__SetBattleResultCampaignBonus(myFSM, 0LL);
  if ( !myFSM )
    goto LABEL_53;
  freeShopIds = (System_Collections_Generic_IEnumerable_TSource__o *)myFSM->fields.freeShopIds;
  if ( freeShopIds )
  {
    this = (BattleScriptRootComponent_o *)System_Linq_Enumerable__ToList_int_(
                                            freeShopIds,
                                            (const MethodInfo_302E840 *)Method_System_Linq_Enumerable_ToList_int___);
    v31 = BattleScriptRootComponent___c_TypeInfo;
    v32 = this;
    if ( !BattleScriptRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleScriptRootComponent___c_TypeInfo);
      v31 = BattleScriptRootComponent___c_TypeInfo;
    }
    _9__37_1 = (System_Converter_TInput__TOutput__o *)v31->static_fields->__9__37_1;
    if ( !_9__37_1 )
    {
      if ( !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        v31 = BattleScriptRootComponent___c_TypeInfo;
      }
      v34 = (Il2CppObject *)v31->static_fields->__9;
      _9__37_1 = (System_Converter_TInput__TOutput__o *)sub_1C3B9B0(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(
        _9__37_1,
        v34,
        Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__37_1__,
        0LL);
      static_fields = BattleScriptRootComponent___c_TypeInfo->static_fields;
      static_fields->__9__37_1 = (struct System_Converter_int__string__o *)_9__37_1;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&static_fields->__9__37_1,
        (int64_t)_9__37_1,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    if ( !v32 )
      goto LABEL_53;
    this = (BattleScriptRootComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                            (System_Collections_Generic_List_int__o *)v32,
                                            (System_Converter_T__TOutput__o *)_9__37_1,
                                            (const MethodInfo_2F1F7B8 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_53;
    v42 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_string__ToArray__);
    v43 = System_String__Join((System_String_o *)StringLiteral_845/*", line {0}, position {1}"*/, v42, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_20011/*"img_list_not_clear_cond"*/, v43, 0LL);
  }
  returnRarePriShopIds = (System_Collections_Generic_IEnumerable_TSource__o *)myFSM->fields.returnRarePriShopIds;
  if ( returnRarePriShopIds )
  {
    this = (BattleScriptRootComponent_o *)System_Linq_Enumerable__ToList_int_(
                                            returnRarePriShopIds,
                                            (const MethodInfo_302E840 *)Method_System_Linq_Enumerable_ToList_int___);
    v45 = BattleScriptRootComponent___c_TypeInfo;
    v46 = this;
    if ( !BattleScriptRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleScriptRootComponent___c_TypeInfo);
      v45 = BattleScriptRootComponent___c_TypeInfo;
    }
    _9__37_2 = (System_Converter_TInput__TOutput__o *)v45->static_fields->__9__37_2;
    if ( !_9__37_2 )
    {
      if ( !v45->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v45);
        v45 = BattleScriptRootComponent___c_TypeInfo;
      }
      v48 = (Il2CppObject *)v45->static_fields->__9;
      _9__37_2 = (System_Converter_TInput__TOutput__o *)sub_1C3B9B0(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(
        _9__37_2,
        v48,
        Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__37_2__,
        0LL);
      v49 = BattleScriptRootComponent___c_TypeInfo->static_fields;
      v49->__9__37_2 = (struct System_Converter_int__string__o *)_9__37_2;
      sub_1C3B708((PartyOrganizationUtility_o *)&v49->__9__37_2, (int64_t)_9__37_2, v50, v51, v52, v53, v54, v55);
    }
    if ( !v46 )
      goto LABEL_53;
    this = (BattleScriptRootComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                            (System_Collections_Generic_List_int__o *)v46,
                                            (System_Converter_T__TOutput__o *)_9__37_2,
                                            (const MethodInfo_2F1F7B8 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_53;
    v56 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_string__ToArray__);
    v57 = System_String__Join((System_String_o *)StringLiteral_845/*", line {0}, position {1}"*/, v56, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_23398/*"sy2"*/, v57, 0LL);
  }
  UnityEngine_PlayerPrefs__Save(0LL);
  this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_53;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1CBC4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, jsonstr);
    byte_4C1CBC4 = 1;
  }
  this = (BattleScriptRootComponent_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (BattleScriptRootComponent_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_53;
  this = (BattleScriptRootComponent_o *)QuestMaster__getQuestEntity(
                                          (QuestMaster_o *)MasterData_object,
                                          *((_DWORD *)this[2].monitor + 5),
                                          0LL);
  if ( this )
  {
    this = (BattleScriptRootComponent_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x10000000000000LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C1EA88 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v60);
        byte_4C1EA88 = 1;
      }
      v62 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v62 = TerminalPramsManager_TypeInfo;
      }
      WarId_k__BackingField = v62->static_fields->_WarId_k__BackingField;
      v64 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(v64, v4, Method_BattleScriptRootComponent__EndRequestBattleScenario_b__37_0__, 0LL);
      if ( Instance )
      {
        v65 = QuestTree__mfBaseTreeUpdateWithOpenCheck((QuestTree_o *)Instance, WarId_k__BackingField, v64, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)v4, v65, 0LL);
        return;
      }
LABEL_53:
      sub_1C3B9C0(this, jsonstr);
    }
  }
  v66 = v4[4].klass;
  if ( !v66 )
    goto LABEL_53;
  BattleScriptRootComponent__ProcessBattleScripts(
    (BattleScriptRootComponent_o *)v4,
    (int32_t)v66->_1.byval_arg.data,
    v59);
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
  void *monitor; // x21
  int32_t v11; // w19
  int32_t klass_high; // w20
  const MethodInfo *v13; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = result;
  if ( (byte_4C2552F & 1) == 0 )
  {
    sub_1C3B764(&BattleData_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMaster_BattleMaster___, v3);
    sub_1C3B764(&DataManager_TypeInfo, v4);
    sub_1C3B764(&Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__, v5);
    sub_1C3B764(&ScriptManager_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8);
    result = (System_String_o *)sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v9);
    byte_4C2552F = 1;
  }
  entity = 0LL;
  if ( !v2 )
    goto LABEL_20;
  if ( System_String__Equals_63376928(v2, (System_String_o *)StringLiteral_22507/*"referrerMapId"*/, 0LL) )
  {
    result = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( result )
    {
      CommonUI__SetLoadMode((CommonUI_o *)result, 0, 0LL);
      result = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( result )
      {
        AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)result, 34, 1, 0LL, 0, 0LL);
        return;
      }
    }
LABEL_20:
    sub_1C3B9C0(result, method);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !result )
    goto LABEL_20;
  result = (System_String_o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                &entity,
                                (const MethodInfo_329D4D0 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_20;
    monitor = entity[1].monitor;
    klass_high = HIDWORD(entity[2].klass);
    v11 = (int32_t)entity[2].monitor;
    if ( !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    BattleData__setResumeBattleId((int64_t)monitor, klass_high, v11, 0LL);
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
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

  if ( (byte_4C25531 & 1) == 0 )
  {
    sub_1C3B764(&Method_BattleScriptRootComponent_EndRequestBattleSetup__, method);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v3);
    sub_1C3B764(&ScriptManager_TypeInfo, v4);
    byte_4C25531 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
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
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C25522 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, callback);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v7);
    byte_4C25522 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo || !Instance )
    goto LABEL_36;
  if ( !QuestPhaseDetailMaster__TryGetEntity(
          (QuestPhaseDetailMaster_o *)Instance,
          &entity,
          talkInfo->fields.qId,
          talkInfo->fields.pId,
          0LL) )
    goto LABEL_11;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_36;
  if ( !QuestPhaseDetailEntity__HasFlag(entity, 0x20000000000LL, 0LL) )
  {
LABEL_11:
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0LL) )
    goto LABEL_11;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_36:
    sub_1C3B9C0(Instance, v9);
  AvalonSceneManager__transitionScene_39709348((AvalonSceneManager_o *)Instance, 34, callback, 1, 0LL, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EA8B )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v11);
    byte_4C1EA8B = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->_DispState_k__BackingField = 2;
  if ( !byte_4C1CCCA )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v11);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4C1CCCA = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_4C1DCA6 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v11);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4C1DCA6 = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->_IsDispOnly_k__BackingField = 1;
  if ( !byte_4C2556E )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v11);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4C2556E = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->_IsScriptDisp_k__BackingField = 1;
  if ( !byte_4C1F4D0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v11);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4C1F4D0 = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->_IsPlayScriptWithMap_k__BackingField = 1;
}


void __fastcall BattleScriptRootComponent__OnDestroy(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C2551B & 1) == 0 )
  {
    sub_1C3B764(&ScriptManager_TypeInfo, method);
    byte_4C2551B = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
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
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  AssetLoader_LoadEndDataHandler_o *v25; // x19

  if ( (byte_4C2553F & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, callback);
    sub_1C3B764(&CommonUI_TypeInfo, v5);
    sub_1C3B764(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1C3B764(&Method_BattleScriptRootComponent___c__DisplayClass48_0__PlayStaffRoll_b__0__, v7);
    sub_1C3B764(&BattleScriptRootComponent___c__DisplayClass48_0_TypeInfo, v8);
    sub_1C3B764(&StringLiteral_6158/*"EventUsuallyMove"*/, v9);
    byte_4C2553F = 1;
  }
  v10 = sub_1C3B9B0(BattleScriptRootComponent___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1C3B9C0(v11, v12);
  *(_QWORD *)(v10 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = callback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)callback, v19, v20, v21, v22, v23, v24);
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  CommonUI__SetForceObi_16_9(1, 0LL);
  v25 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3B9B0(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v25,
    (Il2CppObject *)v10,
    Method_BattleScriptRootComponent___c__DisplayClass48_0__PlayStaffRoll_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6158/*"EventUsuallyMove"*/, v25, 1, 0LL);
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
    || (BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(talkInfo, (const MethodInfo *)isExit),
        (v6 = this->fields.talkInfo) == 0LL) )
  {
    sub_1C3B9C0(talkInfo, isExit);
  }
  BattleScriptRootComponent__ProcessBattleScripts(this, v6->fields.talkPhase, v5);
}


void __fastcall BattleScriptRootComponent__ProceedToNextTalkPhase_46016652(
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
  BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x21
  const MethodInfo *v13; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  int32_t FadeoutKind; // w20
  bool v18; // zf
  CommonUI_o *v19; // x20
  const MethodInfo *v20; // x1
  System_Action_o *v21; // x0
  __int64 *v22; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v23; // x8
  System_Action_o *v24; // x20
  const MethodInfo *v25; // x2
  AvalonSceneManager_c *v26; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v28; // x21

  if ( (byte_4C25520 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&phaseType);
    sub_1C3B764(&AvalonSceneManager_TypeInfo, v5);
    sub_1C3B764(&Method_BattleScriptRootComponent_StartScriptFinishBattleAfterDemo__, v6);
    sub_1C3B764(&Method_BattleScriptRootComponent_StartScriptFinishBattle__, v7);
    sub_1C3B764(&Method_BattleScriptRootComponent__ProcessBattleScripts_b__15_0__, v8);
    sub_1C3B764(&ScriptManager_TypeInfo, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1C3B764(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v11);
    byte_4C25520 = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__SaveTalkResumeInfo(talkInfo, 0LL);
  switch ( phaseType )
  {
    case 0:
    case 10:
      BattleScriptRootComponent__TransitionTerminal(this, v13);
      return;
    case 1:
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !Instance )
        goto LABEL_31;
      if ( !clsQuestCheck__isPlayQuestStartAction((clsQuestCheck_o *)Instance, 0LL) )
      {
        BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v16);
        return;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_31;
      FadeoutKind = CommonUI__maskFadGetFadeoutKind((CommonUI_o *)Instance, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v18 = FadeoutKind == 1;
      v19 = (CommonUI_o *)Instance;
      if ( v18 )
      {
        if ( Instance )
        {
          CommonUI__maskFadeout((CommonUI_o *)Instance, 1, 0.0, 0LL, 0LL);
          BattleScriptRootComponent__StartBattleQuestStart(this, v20);
          return;
        }
LABEL_31:
        sub_1C3B9C0(Instance, v15);
      }
      v26 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v26 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v26->static_fields->DEFAULT_FADE_TIME;
      v28 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(
        v28,
        (Il2CppObject *)this,
        Method_BattleScriptRootComponent__ProcessBattleScripts_b__15_0__,
        0LL);
      if ( !v19 )
        goto LABEL_31;
      CommonUI__maskFadeout(v19, 1, DEFAULT_FADE_TIME, v28, 0LL);
      return;
    case 2:
      BattleScriptRootComponent__StartScriptBefeoreBattleDemo(this, v13);
      return;
    case 3:
      BattleScriptRootComponent__StartDemoBeforeBattle(this, v13);
      return;
    case 4:
      BattleScriptRootComponent__StartScriptBeforeBattleAfterDemo(this, v13);
      return;
    case 5:
      BattleScriptRootComponent__EndBeforeBattleScript(this, v13);
      return;
    case 6:
      BattleScriptRootComponent__ChkCondHavingBranchQuest(this, v13);
      v23 = this->fields.talkInfo;
      if ( !v23 )
        goto LABEL_31;
      if ( v23->fields.talkType == 5 )
      {
        BattleScriptRootComponent__StartScriptNoBattleAfter(this, v15);
      }
      else
      {
        v21 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
        v22 = &Method_BattleScriptRootComponent_StartScriptFinishBattle__;
LABEL_26:
        v24 = v21;
        System_Action___ctor(v21, (Il2CppObject *)this, *v22, 0LL);
        BattleScriptRootComponent__LoadPlayScenarioWithMap(this, v24, v25);
      }
      return;
    case 7:
      BattleScriptRootComponent__StartDemoFinishBattle(this, v13);
      return;
    case 8:
      v21 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      v22 = &Method_BattleScriptRootComponent_StartScriptFinishBattleAfterDemo__;
      goto LABEL_26;
    case 9:
      BattleScriptRootComponent__StartSecondDemoFinishBattle(this, v13);
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
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x20
  Il2CppObject *Master_object; // x20
  QuestEntity_o *v21; // x20
  NetworkManager_ResultCallbackFunc_o *v22; // x20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v23; // x8
  BattleScenarioRequest_o *v24; // x19
  int32_t pId; // w20
  int32_t qId; // w21
  QuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C25533 & 1) == 0 )
  {
    sub_1C3B764(&Method_BattleScriptRootComponent_EndRequestBattleScenario__, isExit);
    sub_1C3B764(&Method_DataManager_GetMasterData_LoginQuestMaster___, v4);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestMaster___, v5);
    sub_1C3B764(&DataManager_TypeInfo, v6);
    sub_1C3B764(&Method_NetworkManager_getRequest_BattleScenarioRequest___, v7);
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_1C3B764(&ScriptManager_TypeInfo, v10);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1C3B764(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v13);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v14);
    byte_4C25533 = 1;
  }
  entity = 0LL;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_LoginQuestMaster___);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo || !Instance )
    goto LABEL_43;
  if ( LoginQuestMaster__GetEntityByQuestId((LoginQuestMaster_o *)Instance, talkInfo->fields.qId, 0LL) )
  {
    BattleScriptRootComponent__TransitionTerminal(this, v18);
    return;
  }
  v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1CBC4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v16);
    byte_4C1CBC4 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v19 )
    goto LABEL_43;
  CommonUI__CheckChangeOtherConnectMarkFromQuestClear(
    (CommonUI_o *)v19,
    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 596LL),
    0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !byte_4C1CBC4 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v16);
    byte_4C1CBC4 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_43;
  if ( !QuestMaster__TryGetQuestEntity(
          (QuestMaster_o *)Master_object,
          &entity,
          *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
          0LL) )
    goto LABEL_35;
  v21 = entity;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1CBC3 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v16);
    byte_4C1CBC3 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v21 )
LABEL_43:
    sub_1C3B9C0(Instance, v16);
  if ( QuestEntity__HasFlag_40925964(
         v21,
         0x8000LL,
         *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL) + 1,
         0LL) )
  {
    Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  }
LABEL_35:
  v22 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v22,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent_EndRequestBattleScenario__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getRequest_object_(
                                v22,
                                (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  v23 = this->fields.talkInfo;
  if ( !v23 )
    goto LABEL_43;
  v24 = (BattleScenarioRequest_o *)Instance;
  qId = v23->fields.qId;
  pId = v23->fields.pId;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  Instance = (DataManager_o *)ScriptManager__GetSelectRouteArray(0LL);
  if ( !v24 )
    goto LABEL_43;
  BattleScenarioRequest__beginRequest(v24, qId, pId, (System_Int32_array *)Instance, 0LL);
}


void __fastcall BattleScriptRootComponent__RequestBattleSetup(
        BattleSetupInfo_o *battleSetupInfo,
        NetworkManager_ResultCallbackFunc_o *callbackFunc,
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
  CommonUI_o *routeSelect; // x0
  __int64 v14; // x1
  int32_t questPhase; // w21
  int32_t questId; // w22
  BalanceConfig_c *v17; // x0
  float BgmFadeOutTimeBeforeBattle; // s8
  Il2CppObject *Request_object; // x20
  int32_t SelectBranchIndex; // w0
  int32_t v21; // w9
  int32_t v22; // w8
  int64_t deckId; // x23
  int64_t followerId; // x24
  int32_t followerClassId; // w25
  int32_t itemId; // w26
  int32_t boostId; // w27
  int32_t enemySelect; // w28
  int32_t v29; // w0
  int64_t userEquipId; // x21
  int32_t followerType; // w22
  int32_t questSelect; // w29
  int32_t v33; // [xsp+78h] [xbp-68h]
  int32_t v34; // [xsp+7Ch] [xbp-64h]

  if ( (byte_4C25532 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, callbackFunc);
    sub_1C3B764(&BgmManager_TypeInfo, v5);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestPhaseMaster___, v6);
    sub_1C3B764(&DataManager_TypeInfo, v7);
    sub_1C3B764(&Method_NetworkManager_getRequest_BattleSetupRequest___, v8);
    sub_1C3B764(&NetworkManager_TypeInfo, v9);
    sub_1C3B764(&ScriptManager_TypeInfo, v10);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1C3B764(&SoundManager_TypeInfo, v12);
    byte_4C25532 = 1;
  }
  routeSelect = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !routeSelect )
    goto LABEL_23;
  CommonUI__SetLoadMode(routeSelect, 2, 0LL);
  if ( !battleSetupInfo )
    goto LABEL_23;
  questId = battleSetupInfo->fields.questId;
  questPhase = battleSetupInfo->fields.questPhase;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  routeSelect = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !routeSelect )
    goto LABEL_23;
  routeSelect = (CommonUI_o *)QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)routeSelect, questId, questPhase, 0LL);
  if ( !routeSelect )
    goto LABEL_23;
  if ( QuestPhaseEntity__IsFadeOutMainBgmBeforeBattle((QuestPhaseEntity_o *)routeSelect, 0LL) )
  {
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    BgmManager__Enable_KeepSubBgm(1, 0LL);
    v17 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v17 = BalanceConfig_TypeInfo;
    }
    BgmFadeOutTimeBeforeBattle = v17->static_fields->BgmFadeOutTimeBeforeBattle;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__fadeoutBgm(BgmFadeOutTimeBeforeBattle, 0LL);
    BgmManager__Enable_KeepSubBgm(0, 0LL);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     callbackFunc,
                     (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_BattleSetupRequest___);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  SelectBranchIndex = ScriptManager__GetSelectBranchIndex(0LL);
  v21 = battleSetupInfo->fields.questId;
  v22 = battleSetupInfo->fields.questPhase;
  deckId = battleSetupInfo->fields.deckId;
  followerId = battleSetupInfo->fields.followerId;
  followerClassId = battleSetupInfo->fields.followerClassId;
  itemId = battleSetupInfo->fields.itemId;
  boostId = battleSetupInfo->fields.boostId;
  enemySelect = SelectBranchIndex;
  battleSetupInfo->fields.selectedBranchIdx = SelectBranchIndex;
  v33 = v22;
  v34 = v21;
  v29 = BattleSetupInfo__TargetQuestBranchIdx(battleSetupInfo, 0LL);
  userEquipId = battleSetupInfo->fields.userEquipId;
  followerType = battleSetupInfo->fields.followerType;
  questSelect = v29;
  routeSelect = (CommonUI_o *)ScriptManager__GetSelectRouteArray(0LL);
  if ( !Request_object )
LABEL_23:
    sub_1C3B9C0(routeSelect, v14);
  BattleSetupRequest__beginRequest(
    (BattleSetupRequest_o *)Request_object,
    v34,
    v33,
    deckId,
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
    battleSetupInfo->fields.recommendSupportIdx,
    battleSetupInfo->fields.followerSupportDeckId,
    battleSetupInfo->fields.campaignItemId,
    battleSetupInfo->fields.restartWave,
    battleSetupInfo->fields.useRewardAddItemIds,
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
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  QuestPhaseEntity_o *Entity; // x0
  System_String_o *ScriptName_NotMeetsCond; // x0
  System_String_o *v14; // x0
  int32_t ScriptIntParam; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C2552E & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_QuestPhaseMaster___, *(_QWORD *)&questId);
    sub_1C3B764(&DataManager_TypeInfo, v6);
    sub_1C3B764(&ScriptManager_TypeInfo, v7);
    sub_1C3B764(&StringLiteral_17381/*"cancelBtnFontSize"*/, v8);
    sub_1C3B764(&StringLiteral_22602/*"revivalUp"*/, v9);
    byte_4C2552E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    sub_1C3B9C0(0LL, v11);
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Master_object, questId, phase, 0LL);
  if ( Entity )
  {
    ScriptIntParam = QuestPhaseEntity__getScriptIntParam(Entity, (System_String_o *)StringLiteral_17381/*"cancelBtnFontSize"*/, 0, 0LL);
    if ( ScriptIntParam )
    {
      ScriptName_NotMeetsCond = System_Int32__ToString((int32_t)&ScriptIntParam, 0LL);
    }
    else
    {
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      ScriptName_NotMeetsCond = ScriptManager__GetScriptName_NotMeetsCond(questId, phase, 0LL);
    }
    v14 = System_String__Concat_63368612((System_String_o *)StringLiteral_22602/*"revivalUp"*/, ScriptName_NotMeetsCond, 0LL);
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
  __int64 v10; // x20
  System_Int32_array *Request_object; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x2
  NetworkManager_ResultCallbackFunc_o *v20; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleRouteSelectRequest_o *v22; // x19
  int32_t pId; // w20
  int32_t qId; // w21

  if ( (byte_4C25527 & 1) == 0 )
  {
    sub_1C3B764(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___, isExit);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1C3B764(&ScriptManager_TypeInfo, v7);
    sub_1C3B764(&Method_BattleScriptRootComponent___c__DisplayClass24_0__ScriptFinishBattleAfterDemoEnd_b__0__, v8);
    sub_1C3B764(&BattleScriptRootComponent___c__DisplayClass24_0_TypeInfo, v9);
    byte_4C25527 = 1;
  }
  v10 = sub_1C3B9B0(BattleScriptRootComponent___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_15;
  *(_QWORD *)(v10 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_BYTE *)(v10 + 24) = isExit;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( ScriptManager__GetSelectRouteArray(0LL) )
  {
    v20 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v20,
      (Il2CppObject *)v10,
      Method_BattleScriptRootComponent___c__DisplayClass24_0__ScriptFinishBattleAfterDemoEnd_b__0__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (System_Int32_array *)NetworkManager__getRequest_object_(
                                             v20,
                                             (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      v22 = (BattleRouteSelectRequest_o *)Request_object;
      qId = talkInfo->fields.qId;
      pId = talkInfo->fields.pId;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      Request_object = ScriptManager__GetSelectRouteArray(0LL);
      if ( v22 )
      {
        BattleRouteSelectRequest__beginRequest(v22, qId, pId, Request_object, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1C3B9C0(Request_object, v12);
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v19);
}


bool __fastcall BattleScriptRootComponent__StartBattle(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int v7; // w20

  if ( (byte_4C25530 & 1) == 0 )
  {
    sub_1C3B764(&Method_AvalonSceneManager_UnloadScene_FollowerRootComponent___, v1);
    sub_1C3B764(&Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___, v2);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v4);
    byte_4C25530 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v7 = BYTE4(Instance[9].klass);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  if ( !v7 )
  {
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 10, 1, 0LL, 1, 0LL);
    return 1;
  }
  AvalonSceneManager__UnloadScene_object_(
    (AvalonSceneManager_o *)Instance,
    (const MethodInfo_2FD9638 *)Method_AvalonSceneManager_UnloadScene_FollowerRootComponent___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (AvalonSceneManager__UnloadScene_object_(
          (AvalonSceneManager_o *)Instance,
          (const MethodInfo_2FD9638 *)Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_11:
    sub_1C3B9C0(Instance, v6);
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
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4C25529 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_BattleScriptRootComponent_ProceedToNextTalkPhase__, v3);
    sub_1C3B764(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v4);
    byte_4C25529 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v6 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_BattleScriptRootComponent_ProceedToNextTalkPhase__, 0LL);
  if ( !Instance )
    sub_1C3B9C0(v7, v8);
  clsQuestCheck__PlayQuestStartAction((clsQuestCheck_o *)Instance, v6, 0LL);
}


void __fastcall BattleScriptRootComponent__StartDemoBeforeBattle(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppClass *klass; // x8
  int32_t name_high; // w20
  int32_t namespaze; // w21
  System_Action_object__o *v8; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4C2552B & 1) == 0 )
  {
    sub_1C3B764(&System_Action_string__TypeInfo, method);
    sub_1C3B764(&Method_BattleScriptRootComponent__StartDemoBeforeBattle_b__28_0__, v3);
    this = (BattleScriptRootComponent_o *)sub_1C3B764(&ScriptManager_TypeInfo, v4);
    byte_4C2552B = 1;
  }
  klass = v2[4].klass;
  if ( !klass )
    sub_1C3B9C0(this, method);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v8 = (System_Action_object__o *)sub_1C3B9B0(System_Action_string__TypeInfo);
  System_Action_object____ctor(v8, v2, Method_BattleScriptRootComponent__StartDemoBeforeBattle_b__28_0__, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__LoadBattleStartGameDemo(name_high, namespaze, 0, (System_Action_string__o *)v8, 0, 0LL);
}


void __fastcall BattleScriptRootComponent__StartDemoFinishBattle(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x0
  int32_t qId; // w20
  int32_t pId; // w21
  System_Action_object__o *v8; // x22
  const MethodInfo *v9; // x2

  if ( (byte_4C25525 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_string__TypeInfo, method);
    sub_1C3B764(&Method_BattleScriptRootComponent__StartDemoFinishBattle_b__22_0__, v3);
    sub_1C3B764(&ScriptManager_TypeInfo, v4);
    byte_4C25525 = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_1C3B9C0(0LL, method);
  qId = talkInfo->fields.qId;
  if ( qId < 1 )
  {
    BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(talkInfo, method);
    BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v9);
  }
  else
  {
    pId = talkInfo->fields.pId;
    v8 = (System_Action_object__o *)sub_1C3B9B0(System_Action_string__TypeInfo);
    System_Action_object____ctor(
      v8,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent__StartDemoFinishBattle_b__22_0__,
      0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__LoadBattleEndGameDemo(qId, pId, 1, (System_Action_string__o *)v8, 0, 0LL);
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
  __int64 v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  TerminalPramsManager_c *v20; // x0
  int32_t WarId_k__BackingField; // w22
  Il2CppObject *Instance; // x20
  CombineResultEffectComponent_ClickDelegate_o *v23; // x21

  if ( (byte_4C2553B & 1) == 0 )
  {
    sub_1C3B764(&CombineResultEffectComponent_ClickDelegate_TypeInfo, end_act);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v5);
    sub_1C3B764(&TutorialFlag_TypeInfo, v6);
    sub_1C3B764(&Method_BattleScriptRootComponent___c__DisplayClass44_0__StartMashuPowerUpAction_b__0__, v7);
    sub_1C3B764(&BattleScriptRootComponent___c__DisplayClass44_0_TypeInfo, v8);
    sub_1C3B764(&StringLiteral_8687/*"MapGimmickEffect_GappolyStopPiecePanel"*/, v9);
    byte_4C2553B = 1;
  }
  v10 = sub_1C3B9B0(BattleScriptRootComponent___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_17;
  *(_QWORD *)(v10 + 16) = end_act;
  sub_1C3B708((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)end_act, v13, v14, v15, v16, v17, v18);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1EA88 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v19);
    byte_4C1EA88 = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v20->static_fields->_WarId_k__BackingField;
  if ( WarId_k__BackingField != ConstantMaster__getValue((System_String_o *)StringLiteral_8687/*"MapGimmickEffect_GappolyStopPiecePanel"*/, 0LL) )
    goto LABEL_14;
  *(_DWORD *)(v10 + 24) = 115;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_39109112(115, 0LL) )
  {
LABEL_14:
    ActionExtensions__Call(*(System_Action_o **)(v10 + 16), 0LL);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1C3B9B0(CombineResultEffectComponent_ClickDelegate_TypeInfo);
  CombineResultEffectComponent_ClickDelegate___ctor(
    v23,
    (Il2CppObject *)v10,
    Method_BattleScriptRootComponent___c__DisplayClass44_0__StartMashuPowerUpAction_b__0__,
    0LL);
  if ( !Instance )
LABEL_17:
    sub_1C3B9C0(v11, v12);
  CommonUI__OpenPowerUp((CommonUI_o *)Instance, v23, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleScriptRootComponent__StartMovie(
        BattleScriptRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4C2551F & 1) == 0 )
  {
    sub_1C3B764(&BattleScriptRootComponent__StartMovie_d__14_TypeInfo, callback);
    byte_4C2551F = 1;
  }
  v5 = sub_1C3B9B0(BattleScriptRootComponent__StartMovie_d__14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)callback, v12, v13, v14, v15, v16, v17);
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
  Il2CppClass *klass; // x8
  int namespaze_high; // w8
  Il2CppClass *v10; // x8
  const MethodInfo *v11; // x2
  System_Action_o *v12; // x20
  const MethodInfo *v13; // x2
  System_Collections_IEnumerator_o *started; // x1
  BattleScriptRootComponent_TalkScriptInfo_o *v15; // x20
  Il2CppClass *v16; // x8
  int namespaze; // w8
  int name_high; // w9
  Il2CppClass *v19; // x8

  v2 = (Il2CppObject *)this;
  if ( (byte_4C2551E & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_BattleScriptRootComponent__StartScript_b__13_0__, v3);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v4);
    sub_1C3B764(&ScriptManager_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    this = (BattleScriptRootComponent_o *)sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C2551E = 1;
  }
  klass = v2[4].klass;
  if ( !klass )
    goto LABEL_25;
  namespaze_high = HIDWORD(klass->_1.namespaze);
  if ( (unsigned int)(namespaze_high - 3) < 4 )
  {
    this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (BattleScriptRootComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v10 = v2[4].klass;
      if ( v10 )
      {
        if ( this )
        {
          this = (BattleScriptRootComponent_o *)QuestPhaseMaster__IsMoviePhase(
                                                  (QuestPhaseMaster_o *)this,
                                                  HIDWORD(v10->_1.name),
                                                  (int32_t)v10->_1.namespaze,
                                                  0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v12 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
            System_Action___ctor(v12, v2, Method_BattleScriptRootComponent__StartScript_b__13_0__, 0LL);
            started = BattleScriptRootComponent__StartMovie((BattleScriptRootComponent_o *)v2, v12, v13);
            UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)v2, started, 0LL);
            return;
          }
          v19 = v2[4].klass;
          if ( v19 )
          {
            BattleScriptRootComponent__ProcessBattleScripts(
              (BattleScriptRootComponent_o *)v2,
              (int32_t)v19->_1.byval_arg.data,
              v11);
            return;
          }
        }
      }
    }
LABEL_25:
    sub_1C3B9C0(this, method);
  }
  if ( namespaze_high == 1 )
  {
    this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_25;
    CommonUI__maskFadeout((CommonUI_o *)this, 2, 0.0, 0LL, 0LL);
    v15 = (BattleScriptRootComponent_TalkScriptInfo_o *)v2[4].klass;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__SaveTalkResumeInfo(v15, 0LL);
    v16 = v2[4].klass;
    if ( !v16 )
      goto LABEL_25;
    name_high = HIDWORD(v16->_1.name);
    namespaze = (int)v16->_1.namespaze;
    if ( name_high <= 0 )
    {
      if ( namespaze )
        BattleScriptRootComponent__ChapterStartEffect((BattleScriptRootComponent_o *)v2, method);
      else
        BattleScriptRootComponent__ChapterStart((BattleScriptRootComponent_o *)v2, method);
    }
    else if ( namespaze )
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
  BattleScriptRootComponent_o *v2; // x23
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v7; // x8
  char v8; // w24
  int32_t wId; // w19
  int32_t qId; // w20
  int32_t pId; // w21
  ScriptManager_CallbackFunc_o *v12; // x0
  ScriptManager_CallbackFunc_o *v13; // x22
  int32_t JumpLine; // w23
  struct BattleScriptRootComponent_TalkScriptInfo_o *v15; // x8
  int32_t v16; // w23
  int32_t talkType; // w24

  v2 = this;
  if ( (byte_4C2552A & 1) == 0 )
  {
    sub_1C3B764(&Method_BattleScriptRootComponent_ProceedToNextTalkPhase___77912704, method);
    sub_1C3B764(&Method_BattleScriptRootComponent_RequestBattleSecnarioForNoneBattleQuest__, v3);
    sub_1C3B764(&ScriptManager_CallbackFunc_TypeInfo, v4);
    this = (BattleScriptRootComponent_o *)sub_1C3B764(&ScriptManager_TypeInfo, v5);
    byte_4C2552A = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_15;
  this = (BattleScriptRootComponent_o *)WarMaster__IsLastQuest(talkInfo->fields.wId, talkInfo->fields.qId, 0LL);
  v7 = v2->fields.talkInfo;
  if ( !v7 )
    goto LABEL_15;
  v8 = (char)this;
  wId = v7->fields.wId;
  qId = v7->fields.qId;
  pId = v7->fields.pId;
  v12 = (ScriptManager_CallbackFunc_o *)sub_1C3B9B0(ScriptManager_CallbackFunc_TypeInfo);
  v13 = v12;
  if ( (v8 & 1) != 0 )
  {
    ScriptManager_CallbackFunc___ctor(
      v12,
      (Il2CppObject *)v2,
      Method_BattleScriptRootComponent_RequestBattleSecnarioForNoneBattleQuest__,
      0LL);
    this = (BattleScriptRootComponent_o *)v2->fields.talkInfo;
    if ( this )
    {
      JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
                   (BattleScriptRootComponent_TalkScriptInfo_o *)this,
                   method);
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      ScriptManager__PlayBattleStartWhite(wId, qId, pId, v13, 0, 0LL, JumpLine, 0, 0LL);
      return;
    }
LABEL_15:
    sub_1C3B9C0(this, method);
  }
  ScriptManager_CallbackFunc___ctor(
    v12,
    (Il2CppObject *)v2,
    Method_BattleScriptRootComponent_ProceedToNextTalkPhase___77912704,
    0LL);
  this = (BattleScriptRootComponent_o *)v2->fields.talkInfo;
  if ( !this )
    goto LABEL_15;
  this = (BattleScriptRootComponent_o *)BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
                                          (BattleScriptRootComponent_TalkScriptInfo_o *)this,
                                          method);
  v15 = v2->fields.talkInfo;
  if ( !v15 )
    goto LABEL_15;
  v16 = (int)this;
  talkType = v15->fields.talkType;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayBattleStart(wId, qId, pId, v13, 0, 0LL, v16, talkType == 6, 0, 0LL, 0LL);
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
  if ( (byte_4C2552C & 1) == 0 )
  {
    sub_1C3B764(&Method_BattleScriptRootComponent_ProceedToNextTalkPhase___77912704, method);
    sub_1C3B764(&ScriptManager_CallbackFunc_TypeInfo, v3);
    this = (BattleScriptRootComponent_o *)sub_1C3B764(&ScriptManager_TypeInfo, v4);
    byte_4C2552C = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        qId = talkInfo->fields.qId,
        pId = talkInfo->fields.pId,
        v9 = (ScriptManager_CallbackFunc_o *)sub_1C3B9B0(ScriptManager_CallbackFunc_TypeInfo),
        ScriptManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)v2,
          Method_BattleScriptRootComponent_ProceedToNextTalkPhase___77912704,
          0LL),
        (this = (BattleScriptRootComponent_o *)v2->fields.talkInfo) == 0LL) )
  {
    sub_1C3B9C0(this, method);
  }
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)this,
               method);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
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
  struct BattleScriptRootComponent_TalkScriptInfo_o *v9; // x8
  int32_t pId; // w19
  int32_t qId; // w20
  int v12; // w25
  int32_t winResult; // w22
  ScriptManager_CallbackFunc_o *v14; // x23
  __int64 v15; // x1
  int32_t JumpLine; // w21
  TerminalPramsManager_c *v17; // x0
  _BOOL4 IsPlayScriptWithMap_k__BackingField; // w24
  __int64 v19; // x1
  TerminalPramsManager_c *v20; // x0

  if ( (byte_4C25523 & 1) == 0 )
  {
    sub_1C3B764(&Method_BattleScriptRootComponent_StartScriptFinishBattleEnd2__, method);
    sub_1C3B764(&BgmManager_TypeInfo, v3);
    sub_1C3B764(&ScriptManager_CallbackFunc_TypeInfo, v4);
    sub_1C3B764(&ScriptManager_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v7);
    byte_4C25523 = 1;
  }
  talkInfo = (AvalonSceneManager_o *)this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_38;
  if ( BattleScriptRootComponent_TalkScriptInfo__get_win_lose(
         (BattleScriptRootComponent_TalkScriptInfo_o *)talkInfo,
         method) != 1 )
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__DeleteTalkResumeInfo(0LL);
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    BgmManager__SetMute(0, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1CCCA )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v19);
      byte_4C1CCCA = 1;
    }
    v20 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v20 = TerminalPramsManager_TypeInfo;
    }
    v20->static_fields->_IsAutoResume_k__BackingField = 1;
    talkInfo = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( talkInfo )
    {
      AvalonSceneManager__transitionSceneRefresh(talkInfo, 34, 1, 0LL, 0, 0LL);
      return;
    }
LABEL_38:
    sub_1C3B9C0(talkInfo, method);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F043 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F043 = 1;
  }
  talkInfo = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    talkInfo = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  v9 = this->fields.talkInfo;
  if ( !v9 )
    goto LABEL_38;
  qId = v9->fields.qId;
  pId = v9->fields.pId;
  v12 = *(unsigned __int8 *)(*(_QWORD *)&talkInfo[1].fields.fadeType + 106LL);
  winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(this->fields.talkInfo, method);
  v14 = (ScriptManager_CallbackFunc_o *)sub_1C3B9B0(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent_StartScriptFinishBattleEnd2__,
    0LL);
  talkInfo = (AvalonSceneManager_o *)this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_38;
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)talkInfo,
               method);
  if ( v12 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F056 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v15);
      byte_4C1F056 = 1;
    }
    v17 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v17 = TerminalPramsManager_TypeInfo;
    }
    IsPlayScriptWithMap_k__BackingField = v17->static_fields->_IsPlayScriptWithMap_k__BackingField;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__PlayBattleEnd2_42948252(
      qId,
      pId,
      winResult,
      15,
      v14,
      0,
      JumpLine,
      IsPlayScriptWithMap_k__BackingField,
      0LL);
  }
  else
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__PlayBattleEnd2(qId, pId, winResult, v14, 0, JumpLine, 0LL);
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
  int v15; // w26
  int32_t v16; // w22
  ScriptManager_CallbackFunc_o *v17; // x23
  __int64 v18; // x1
  int32_t v19; // w19
  TerminalPramsManager_c *v20; // x0
  _BOOL4 IsPlayScriptWithMap_k__BackingField; // w24

  if ( (byte_4C25526 & 1) == 0 )
  {
    sub_1C3B764(&Method_BattleScriptRootComponent_ScriptFinishBattleAfterDemoEnd__, method);
    sub_1C3B764(&ScriptManager_CallbackFunc_TypeInfo, v3);
    sub_1C3B764(&ScriptManager_TypeInfo, v4);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v5);
    byte_4C25526 = 1;
  }
  if ( this->fields.setEndRoll )
  {
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      qId = talkInfo->fields.qId;
      pId = talkInfo->fields.pId;
      winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(talkInfo, method);
      v10 = (ScriptManager_CallbackFunc_o *)sub_1C3B9B0(ScriptManager_CallbackFunc_TypeInfo);
      ScriptManager_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_BattleScriptRootComponent_ScriptFinishBattleAfterDemoEnd__,
        0LL);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(talkInfo, method);
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        ScriptManager__PlayBattleEndWhite(qId, pId, winResult, v10, 0, JumpLine, 0LL);
        return;
      }
    }
LABEL_30:
    sub_1C3B9C0(talkInfo, method);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F043 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1F043 = 1;
  }
  talkInfo = (BattleScriptRootComponent_TalkScriptInfo_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    talkInfo = (BattleScriptRootComponent_TalkScriptInfo_o *)TerminalPramsManager_TypeInfo;
  }
  v12 = this->fields.talkInfo;
  if ( !v12 )
    goto LABEL_30;
  v14 = v12->fields.qId;
  v13 = v12->fields.pId;
  v15 = *(unsigned __int8 *)(*(_QWORD *)&talkInfo[3].fields.wId + 106LL);
  v16 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(this->fields.talkInfo, method);
  v17 = (ScriptManager_CallbackFunc_o *)sub_1C3B9B0(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent_ScriptFinishBattleAfterDemoEnd__,
    0LL);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_30;
  v19 = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(talkInfo, method);
  if ( v15 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F056 )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v18);
      byte_4C1F056 = 1;
    }
    v20 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v20 = TerminalPramsManager_TypeInfo;
    }
    IsPlayScriptWithMap_k__BackingField = v20->static_fields->_IsPlayScriptWithMap_k__BackingField;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__PlayBattleEnd_42946936(v14, v13, v16, 15, v17, 0, v19, IsPlayScriptWithMap_k__BackingField, 0LL);
  }
  else
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
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
  __int64 v10; // x20
  System_Int32_array *Request_object; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x2
  NetworkManager_ResultCallbackFunc_o *v20; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleRouteSelectRequest_o *v22; // x19
  int32_t pId; // w20
  int32_t qId; // w21

  if ( (byte_4C25524 & 1) == 0 )
  {
    sub_1C3B764(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___, isExit);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1C3B764(&ScriptManager_TypeInfo, v7);
    sub_1C3B764(&Method_BattleScriptRootComponent___c__DisplayClass21_0__StartScriptFinishBattleEnd2_b__0__, v8);
    sub_1C3B764(&BattleScriptRootComponent___c__DisplayClass21_0_TypeInfo, v9);
    byte_4C25524 = 1;
  }
  v10 = sub_1C3B9B0(BattleScriptRootComponent___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_15;
  *(_QWORD *)(v10 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_BYTE *)(v10 + 24) = isExit;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( ScriptManager__GetSelectRouteArray(0LL) )
  {
    v20 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v20,
      (Il2CppObject *)v10,
      Method_BattleScriptRootComponent___c__DisplayClass21_0__StartScriptFinishBattleEnd2_b__0__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (System_Int32_array *)NetworkManager__getRequest_object_(
                                             v20,
                                             (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      v22 = (BattleRouteSelectRequest_o *)Request_object;
      qId = talkInfo->fields.qId;
      pId = talkInfo->fields.pId;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      Request_object = ScriptManager__GetSelectRouteArray(0LL);
      if ( v22 )
      {
        BattleRouteSelectRequest__beginRequest(v22, qId, pId, Request_object, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1C3B9C0(Request_object, v12);
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v19);
}


void __fastcall BattleScriptRootComponent__StartScriptNoBattleAfter(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x0
  _BOOL4 setEndRoll; // w25
  int32_t qId; // w19
  int32_t pId; // w20
  int32_t winResult; // w21
  ScriptManager_CallbackFunc_o *v11; // x0
  ScriptManager_CallbackFunc_o *v12; // x22
  int32_t JumpLine; // w23
  int32_t v14; // w23

  if ( (byte_4C25535 & 1) == 0 )
  {
    sub_1C3B764(&Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__38_0__, method);
    sub_1C3B764(&Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__38_1__, v3);
    sub_1C3B764(&ScriptManager_CallbackFunc_TypeInfo, v4);
    sub_1C3B764(&ScriptManager_TypeInfo, v5);
    byte_4C25535 = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_13;
  setEndRoll = this->fields.setEndRoll;
  qId = talkInfo->fields.qId;
  pId = talkInfo->fields.pId;
  winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(talkInfo, method);
  v11 = (ScriptManager_CallbackFunc_o *)sub_1C3B9B0(ScriptManager_CallbackFunc_TypeInfo);
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
      JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(talkInfo, method);
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      ScriptManager__PlayBattleEndWhite(qId, pId, winResult, v12, 0, JumpLine, 0LL);
      return;
    }
LABEL_13:
    sub_1C3B9C0(talkInfo, method);
  }
  ScriptManager_CallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__38_1__,
    0LL);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_13;
  v14 = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(talkInfo, method);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayBattleEnd(qId, pId, winResult, v12, 0, v14, 0LL);
}


void __fastcall BattleScriptRootComponent__StartSecondDemoFinishBattle(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppClass *klass; // x8
  int32_t name_high; // w20
  int32_t namespaze; // w21
  System_Action_object__o *v8; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4C25528 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_string__TypeInfo, method);
    sub_1C3B764(&Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__25_0__, v3);
    this = (BattleScriptRootComponent_o *)sub_1C3B764(&ScriptManager_TypeInfo, v4);
    byte_4C25528 = 1;
  }
  klass = v2[4].klass;
  if ( !klass )
    sub_1C3B9C0(this, method);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v8 = (System_Action_object__o *)sub_1C3B9B0(System_Action_string__TypeInfo);
  System_Action_object____ctor(v8, v2, Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__25_0__, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__LoadBattleEndGameDemo(name_high, namespaze, 0, (System_Action_string__o *)v8, 0, 0LL);
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
  __int64 v16; // x1
  TerminalPramsManager_c *v17; // x0
  int32_t EventID; // w21
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  TerminalPramsManager_c *v22; // x0
  const MethodInfo *v23; // x1
  TerminalPramsManager_c *v24; // x0
  Il2CppObject *v25; // x21
  Il2CppObject *v26; // x22
  System_Action_o *v27; // x23
  __int64 v28; // x1
  TerminalSceneComponent_c *v29; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v31; // x8
  UnityEngine_Object_o *v32; // x20
  __int64 v33; // x8
  clsQuestCheck_o *v34; // x20
  TerminalPramsManager_c *v35; // x0
  __int64 v36; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C2553C & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_AvalonSceneManager_UnloadSceneAsync_TerminalSceneComponent___, v3);
    sub_1C3B764(&Method_AvalonSceneManager_UnloadScene_BattleScriptRootComponent___, v4);
    sub_1C3B764(&BalanceConfig_TypeInfo, v5);
    sub_1C3B764(&Method_BattleScriptRootComponent_TransitionTerminalSub__, v6);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventDetailMaster___, v7);
    sub_1C3B764(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v8);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v9);
    sub_1C3B764(&ScriptManager_TypeInfo, v10);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1C3B764(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v13);
    sub_1C3B764(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v14);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v15);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v16);
    byte_4C2553C = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1CCCA )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C1CCCA = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v17->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_4C1F4D0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    v17 = TerminalPramsManager_TypeInfo;
    byte_4C1F4D0 = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v17->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
  if ( !byte_4C1EA88 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    v17 = TerminalPramsManager_TypeInfo;
    byte_4C1EA88 = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = TerminalPramsManager_TypeInfo;
  }
  EventID = WarMaster__getEventID(v17->static_fields->_WarId_k__BackingField, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_91;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_91;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         EventID,
         (const MethodInfo_329AE94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_91;
    if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)entity, 0LL) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C1F4E5 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v21);
        byte_4C1F4E5 = 1;
      }
      v22 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v22 = TerminalPramsManager_TypeInfo;
      }
      v22->static_fields->_isPlayRiverActionCheck_k__BackingField = 1;
    }
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1F043 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v23);
    byte_4C1F043 = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
  }
  if ( v24->static_fields->_IsScriptDisp_k__BackingField )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_91;
    AvalonSceneManager__UnloadScene_object_(
      (AvalonSceneManager_o *)Instance,
      (const MethodInfo_2FD9638 *)Method_AvalonSceneManager_UnloadScene_BattleScriptRootComponent___);
    v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v27 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v27, (Il2CppObject *)this, Method_BattleScriptRootComponent_TransitionTerminalSub__, 0LL);
    if ( !v26 )
      goto LABEL_91;
    Instance = (DataManager_o *)AvalonSceneManager__UnloadSceneAsync_object_(
                                  (AvalonSceneManager_o *)v26,
                                  v27,
                                  (const MethodInfo_2FD9874 *)Method_AvalonSceneManager_UnloadSceneAsync_TerminalSceneComponent___);
    if ( !v25 )
      goto LABEL_91;
    UnityEngine_MonoBehaviour__StartCoroutine_71108020(
      (UnityEngine_MonoBehaviour_o *)v25,
      (System_Collections_IEnumerator_o *)Instance,
      0LL);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C1CAE3 )
    {
      sub_1C3B764(&TerminalSceneComponent_TypeInfo, v28);
      byte_4C1CAE3 = 1;
    }
    v29 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v29 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_Object_o *)v29->static_fields->mInstance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4C1CAE3 )
      {
        sub_1C3B764(&TerminalSceneComponent_TypeInfo, v20);
        byte_4C1CAE3 = 1;
      }
      Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
      }
      v31 = **(_QWORD **)&Instance[1].fields._DispLog;
      if ( !v31 )
        goto LABEL_91;
      v32 = *(UnityEngine_Object_o **)(v31 + 264);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) )
      {
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4C1CAE3 )
        {
          sub_1C3B764(&TerminalSceneComponent_TypeInfo, v20);
          byte_4C1CAE3 = 1;
        }
        Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
        }
        v33 = **(_QWORD **)&Instance[1].fields._DispLog;
        if ( !v33 )
          goto LABEL_91;
        Instance = *(DataManager_o **)(v33 + 264);
        if ( !Instance )
          goto LABEL_91;
        ScrTerminalMap__SetDiceButton((ScrTerminalMap_o *)Instance, 0LL);
        Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
        v34 = (clsQuestCheck_o *)Instance;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( !v34 )
          goto LABEL_91;
        if ( clsQuestCheck__CheckQuestPlayableNow(
               v34,
               BalanceConfig_TypeInfo->static_fields->EventBoardGameNextBoardQuestId,
               0LL) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C1F217 )
          {
            sub_1C3B764(&TerminalPramsManager_TypeInfo, v20);
            byte_4C1F217 = 1;
          }
          v35 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v35 = TerminalPramsManager_TypeInfo;
          }
          v35->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField = 1;
          Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
          if ( Instance )
          {
            MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
            return;
          }
LABEL_91:
          sub_1C3B9C0(Instance, v20);
        }
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4C1CAE3 )
        {
          sub_1C3B764(&TerminalSceneComponent_TypeInfo, v20);
          byte_4C1CAE3 = 1;
        }
        Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
        }
        v36 = **(_QWORD **)&Instance[1].fields._DispLog;
        if ( !v36 )
          goto LABEL_91;
        Instance = *(DataManager_o **)(v36 + 264);
        if ( !Instance )
          goto LABEL_91;
        ScrTerminalMap__SetEventBoardQuestArrivalPanel((ScrTerminalMap_o *)Instance, 0LL);
      }
    }
  }
  else
  {
    BattleScriptRootComponent__TransitionTerminalSub(this, v23);
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
  int32_t talkType; // w22
  bool v12; // w19
  __int64 v13; // x1
  TerminalPramsManager_c *v14; // x0

  if ( (byte_4C2553D & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestPhaseMaster___, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v5);
    byte_4C2553D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo || !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)QuestPhaseMaster__IsInvisibleConnectAndLoad(
                                (QuestPhaseMaster_o *)Instance,
                                talkInfo->fields.qId,
                                talkInfo->fields.pId,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F1FB )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v7);
      byte_4C1F1FB = 1;
    }
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    }
    v9 = 2;
    *(_BYTE *)(*(_QWORD *)&Instance[1].fields._DispLog + 592LL) = 1;
  }
  else
  {
    v9 = 1;
  }
  v10 = this->fields.talkInfo;
  if ( !v10 )
    goto LABEL_29;
  talkType = v10->fields.talkType;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  if ( talkType != 5 )
    goto LABEL_21;
  v12 = AvalonSceneManager__checkLoadedScene((AvalonSceneManager_o *)Instance, 34, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_29:
    sub_1C3B9C0(Instance, v7);
  if ( v12 )
  {
    AvalonSceneManager__changeScene((AvalonSceneManager_o *)Instance, 34, v9, 0LL, 0LL);
    goto LABEL_22;
  }
LABEL_21:
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, v9, 0LL, 0, 0LL);
LABEL_22:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C2556E )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v13);
    byte_4C2556E = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  Il2CppObject *Instance; // x0
  const MethodInfo *v12; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleSetupInfo_o *bSetupInfo; // x20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v15; // x8
  Il2CppObject *v16; // x3
  int32_t v17; // w1
  CommonUI_o *v18; // x19
  BattleScriptRootComponent___c_c *v19; // x8
  System_Action_o *_9__47_0; // x22
  System_String_o *v21; // x20
  System_String_o *v22; // x21
  Il2CppObject *v23; // x23
  struct BattleScriptRootComponent___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  TerminalPramsManager_c *v31; // x0

  if ( (byte_4C2553E & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&ScriptManager_TypeInfo, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v6);
    sub_1C3B764(&Method_BattleScriptRootComponent___c__TransitionWarBoard_b__47_0__, v7);
    sub_1C3B764(&BattleScriptRootComponent___c_TypeInfo, v8);
    sub_1C3B764(&StringLiteral_25837, v9);
    sub_1C3B764(&StringLiteral_25838, v10);
    byte_4C2553E = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_32;
  if ( talkInfo->fields.talkType != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = (CommonUI_o *)Instance;
    v19 = BattleScriptRootComponent___c_TypeInfo;
    if ( !BattleScriptRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleScriptRootComponent___c_TypeInfo);
      v19 = BattleScriptRootComponent___c_TypeInfo;
    }
    _9__47_0 = v19->static_fields->__9__47_0;
    v21 = (System_String_o *)StringLiteral_25838;
    v22 = (System_String_o *)StringLiteral_25837;
    if ( !_9__47_0 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = BattleScriptRootComponent___c_TypeInfo;
      }
      v23 = (Il2CppObject *)v19->static_fields->__9;
      _9__47_0 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(_9__47_0, v23, Method_BattleScriptRootComponent___c__TransitionWarBoard_b__47_0__, 0LL);
      static_fields = BattleScriptRootComponent___c_TypeInfo->static_fields;
      static_fields->__9__47_0 = _9__47_0;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&static_fields->__9__47_0,
        (int64_t)_9__47_0,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
    }
    if ( v18 )
    {
      CommonUI__OpenNotificationDialog(v18, v22, v21, _9__47_0, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
      return;
    }
    goto LABEL_32;
  }
  bSetupInfo = talkInfo->fields.bSetupInfo;
  if ( !bSetupInfo )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1CCCA )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v12);
      byte_4C1CCCA = 1;
    }
    v31 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v31 = TerminalPramsManager_TypeInfo;
    }
    v31->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      v17 = 34;
      v16 = 0LL;
      goto LABEL_30;
    }
LABEL_32:
    sub_1C3B9C0(Instance, v12);
  }
  if ( bSetupInfo->fields.isScriptBeforePartySelect )
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    bSetupInfo->fields.selectedBranchIdx = ScriptManager__GetSelectBranchIndex(0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v15 = this->fields.talkInfo;
    if ( v15 && Instance )
    {
      v16 = (Il2CppObject *)v15->fields.bSetupInfo;
      v17 = 35;
LABEL_30:
      AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, v17, 1, v16, 0, 0LL);
      return;
    }
    goto LABEL_32;
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

  if ( (byte_4C25546 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, isExit);
    sub_1C3B764(&Method_BattleScriptRootComponent__ChapterStartEffect_b__41_1__, v4);
    byte_4C25546 = 1;
  }
  v5 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
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
  if ( (byte_4C25547 & 1) == 0 )
  {
    this = (BattleScriptRootComponent_o *)sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C25547 = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo )
    sub_1C3B9C0(this, method);
  wId = talkInfo->fields.wId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
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
  BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v10; // x8
  Il2CppObject *WarEntityByWarID; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v12; // x8
  const MethodInfo *v13; // x1
  TerminalPramsManager_c *v14; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v15; // x8
  bool v16; // w20
  TerminalPramsManager_c *v17; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_4C25545 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_WarMaster___, method);
    sub_1C3B764(&DataManager_TypeInfo, v3);
    sub_1C3B764(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v4);
    sub_1C3B764(&ScriptManager_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v6);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v7);
    this = (BattleScriptRootComponent_o *)sub_1C3B764(&TerminalPramsManager_TypeInfo, v8);
    byte_4C25545 = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_29;
  ++talkInfo->fields.pId;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__SaveTalkResumeInfo(talkInfo, 0LL);
  this = (BattleScriptRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  v10 = v2->fields.talkInfo;
  if ( !v10 || !this )
    goto LABEL_29;
  WarEntityByWarID = (Il2CppObject *)QuestTree__mfGetWarEntityByWarID((QuestTree_o *)this, v10->fields.wId, 0LL);
  entity = WarEntityByWarID;
  if ( !WarEntityByWarID )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleScriptRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_WarMaster___);
    v12 = v2->fields.talkInfo;
    if ( !v12 || !this )
      goto LABEL_29;
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
      &entity,
      v12->fields.wId,
      (const MethodInfo_329AE94 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    WarEntityByWarID = entity;
    if ( !entity )
      goto LABEL_28;
  }
  if ( !WarEntity__HasFlag((WarEntity_o *)WarEntityByWarID, 0x8000, 0LL) )
    goto LABEL_28;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1ECCB )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v13);
    byte_4C1ECCB = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_IsPhaseClear_k__BackingField = 1;
  this = (BattleScriptRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v15 = v2->fields.talkInfo;
  if ( !v15 || !this )
LABEL_29:
    sub_1C3B9C0(this, method);
  v16 = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)this, v15->fields.qId, 0, 0LL);
  if ( !byte_4C1ECCA )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v13);
    byte_4C1ECCA = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v17->static_fields->_IsQuestClear_k__BackingField = v16;
LABEL_28:
  BattleScriptRootComponent__ChapterStartEffectQuest(v2, v13);
}


void __fastcall BattleScriptRootComponent___ChapterStart_b__39_0(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  BattleScriptRootComponent_o *v2; // x19
  BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x20
  const MethodInfo *v4; // x1

  v2 = this;
  if ( (byte_4C25544 & 1) == 0 )
  {
    this = (BattleScriptRootComponent_o *)sub_1C3B764(&ScriptManager_TypeInfo, method);
    byte_4C25544 = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo )
    sub_1C3B9C0(this, method);
  ++talkInfo->fields.pId;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__SaveTalkResumeInfo(talkInfo, 0LL);
  BattleScriptRootComponent__ChapterStartEffect(v2, v4);
}


void __fastcall BattleScriptRootComponent___EndRequestBattleScenario_b__37_0(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8

  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_1C3B9C0(this, method);
  BattleScriptRootComponent__ProcessBattleScripts(this, talkInfo->fields.talkPhase, v2);
}


void __fastcall BattleScriptRootComponent___StartDemoBeforeBattle_b__28_0(
        BattleScriptRootComponent_o *this,
        System_String_o *demoInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 bSetupInfo; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v17; // x8

  if ( (byte_4C25542 & 1) == 0 )
  {
    sub_1C3B764(&BattleSetupInfo_TypeInfo, demoInfo);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    byte_4C25542 = 1;
  }
  if ( demoInfo )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        bSetupInfo = (__int64)talkInfo->fields.bSetupInfo;
        if ( !bSetupInfo )
        {
          bSetupInfo = sub_1C3B9B0(BattleSetupInfo_TypeInfo);
          BattleSetupInfo___ctor((BattleSetupInfo_o *)bSetupInfo, 0LL);
          v17 = this->fields.talkInfo;
          if ( !v17 || !bSetupInfo )
            goto LABEL_13;
          *(_QWORD *)(bSetupInfo + 20) = *(_QWORD *)&v17->fields.qId;
        }
        *(_QWORD *)(bSetupInfo + 104) = demoInfo;
        *(_WORD *)(bSetupInfo + 96) = 1;
        sub_1C3B708((PartyOrganizationUtility_o *)(bSetupInfo + 104), (int64_t)demoInfo, v9, v10, v11, v12, v13, v14);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 50, 1, (Il2CppObject *)bSetupInfo, 0LL);
          return;
        }
      }
    }
LABEL_13:
    sub_1C3B9C0(Instance, v8);
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
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 bSetupInfo; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v17; // x8

  if ( (byte_4C25540 & 1) == 0 )
  {
    sub_1C3B764(&BattleSetupInfo_TypeInfo, demoInfo);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    byte_4C25540 = 1;
  }
  if ( demoInfo )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        bSetupInfo = (__int64)talkInfo->fields.bSetupInfo;
        if ( !bSetupInfo )
        {
          bSetupInfo = sub_1C3B9B0(BattleSetupInfo_TypeInfo);
          BattleSetupInfo___ctor((BattleSetupInfo_o *)bSetupInfo, 0LL);
          v17 = this->fields.talkInfo;
          if ( !v17 || !bSetupInfo )
            goto LABEL_13;
          *(_QWORD *)(bSetupInfo + 20) = *(_QWORD *)&v17->fields.qId;
        }
        *(_QWORD *)(bSetupInfo + 104) = demoInfo;
        *(_WORD *)(bSetupInfo + 96) = 256;
        sub_1C3B708((PartyOrganizationUtility_o *)(bSetupInfo + 104), (int64_t)demoInfo, v9, v10, v11, v12, v13, v14);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 50, 1, (Il2CppObject *)bSetupInfo, 0LL);
          return;
        }
      }
    }
LABEL_13:
    sub_1C3B9C0(Instance, v8);
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, method);
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

  if ( (byte_4C25543 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, isExit);
    sub_1C3B764(&Method_BattleScriptRootComponent_TransitionTerminal__, v4);
    byte_4C25543 = 1;
  }
  v5 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
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
    sub_1C3B9C0(this, method);
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
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 bSetupInfo; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v19; // x8
  System_Action_o *v20; // x19
  const MethodInfo *v21; // x2

  if ( (byte_4C25541 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, demoInfo);
    sub_1C3B764(&Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__25_1__, v5);
    sub_1C3B764(&BattleSetupInfo_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8);
    byte_4C25541 = 1;
  }
  if ( demoInfo )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        bSetupInfo = (__int64)talkInfo->fields.bSetupInfo;
        if ( !bSetupInfo )
        {
          bSetupInfo = sub_1C3B9B0(BattleSetupInfo_TypeInfo);
          BattleSetupInfo___ctor((BattleSetupInfo_o *)bSetupInfo, 0LL);
          v19 = this->fields.talkInfo;
          if ( !v19 || !bSetupInfo )
            goto LABEL_15;
          *(_QWORD *)(bSetupInfo + 20) = *(_QWORD *)&v19->fields.qId;
        }
        *(_QWORD *)(bSetupInfo + 104) = demoInfo;
        *(_WORD *)(bSetupInfo + 96) = 0;
        sub_1C3B708((PartyOrganizationUtility_o *)(bSetupInfo + 104), (int64_t)demoInfo, v11, v12, v13, v14, v15, v16);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 50, 1, (Il2CppObject *)bSetupInfo, 0LL);
          return;
        }
      }
    }
LABEL_15:
    sub_1C3B9C0(Instance, v10);
  }
  if ( this->fields.setEndRoll )
  {
    v20 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      v20,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__25_1__,
      0LL);
    BattleScriptRootComponent__PlayStaffRoll(this, v20, v21);
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
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C2551C & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_4C2551C = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1C3B9C0(Instance, v5);
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
    sub_1C3B9C0(0LL, data);
  BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(talkInfo, (const MethodInfo *)data);
  BattleScriptRootComponent__StartScript(this, v5);
}


void __fastcall BattleScriptRootComponent__beginStartUp(
        BattleScriptRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppClass *v14; // x1
  __int64 methodPtr_low; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o **p_talkInfo; // x20
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *v19; // x8
  unsigned int talkPhase; // w9
  WarEntity_o *QuestId; // x0
  int32_t id; // w20
  bool v23; // w8

  if ( (byte_4C2551D & 1) == 0 )
  {
    sub_1C3B764(&BgmManager_TypeInfo, data);
    sub_1C3B764(&Method_DataManager_GetMasterData_WarMaster___, v10);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1C3B764(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v12);
    sub_1C3B764(&StringLiteral_6529/*"Feature is not supported for remote machines."*/, v13);
    byte_4C2551D = 1;
  }
  if ( !data )
    goto LABEL_9;
  v14 = (Il2CppClass *)BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  methodPtr_low = LOBYTE(BattleScriptRootComponent_TalkScriptInfo_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(data->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (BattleScriptRootComponent_TalkScriptInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] != BattleScriptRootComponent_TalkScriptInfo_TypeInfo
    || (this->fields.talkInfo = (struct BattleScriptRootComponent_TalkScriptInfo_o *)data,
        p_talkInfo = &this->fields.talkInfo,
        LOBYTE(data->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
    || data->klass->_2.typeHierarchy[methodPtr_low - 1] != v14 )
  {
    sub_1C3BC80(data);
LABEL_9:
    this->fields.talkInfo = 0LL;
    p_talkInfo = &this->fields.talkInfo;
  }
  sub_1C3B708((PartyOrganizationUtility_o *)p_talkInfo, (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
  v19 = *p_talkInfo;
  if ( !*p_talkInfo )
    goto LABEL_25;
  if ( v19->fields.restoreLine )
  {
    talkPhase = v19->fields.talkPhase;
    if ( talkPhase <= 8 && ((1 << talkPhase) & 0x154) != 0 && !v19->fields.isTitleResume )
    {
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      BgmManager__SetMute(1, 0LL);
      v19 = *p_talkInfo;
      if ( !*p_talkInfo )
        goto LABEL_25;
    }
  }
  v19->fields.isTitleResume = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_WarMaster___),
        !*p_talkInfo)
    || !Instance )
  {
LABEL_25:
    sub_1C3B9C0(Instance, v18);
  }
  QuestId = WarMaster__getByLastQuestId((WarMaster_o *)Instance, (*p_talkInfo)->fields.qId, 0LL);
  if ( QuestId )
  {
    id = QuestId->fields.id;
    v23 = id == ConstantMaster__getValue((System_String_o *)StringLiteral_6529/*"Feature is not supported for remote machines."*/, 0LL);
  }
  else
  {
    v23 = 0;
  }
  this->fields.setEndRoll = v23;
  SceneRootComponent__beginStartUp_40100344((SceneRootComponent_o *)this, 0LL);
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1

  if ( (byte_4C25551 & 1) == 0 )
  {
    sub_1C3B764(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_1393/*"2bba0607-14d5-4afe-b9a0-e0210bf20c40"*/, v8);
    byte_4C25551 = 1;
  }
  BattleScriptRootComponent_TalkScriptInfo_TypeInfo->static_fields->TalkResumeVersion = (struct System_String_o *)StringLiteral_1393/*"2bba0607-14d5-4afe-b9a0-e0210bf20c40"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)BattleScriptRootComponent_TalkScriptInfo_TypeInfo->static_fields,
    StringLiteral_1393/*"2bba0607-14d5-4afe-b9a0-e0210bf20c40"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  BattleScriptRootComponent_TalkScriptInfo_TypeInfo->static_fields->WinResultMultiplicationValue = 100;
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___ctor(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___ctor_46031908(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        BattleScriptRootComponent_TalkScriptSaveInfo_o *saveInfo,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  BattleSetupInfo_BattleSetupSaveInfo_o *bSetupInfo; // x21
  BattleSetupInfo_o *v14; // x20
  struct BattleSetupInfo_o **p_bSetupInfo; // x19

  if ( (byte_4C2554B & 1) == 0 )
  {
    sub_1C3B764(&BattleSetupInfo_TypeInfo, saveInfo);
    byte_4C2554B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !saveInfo )
    sub_1C3B9C0(v5, v6);
  *(_OWORD *)&this->fields.wId = *(_OWORD *)&saveInfo->fields.wId;
  *(_QWORD *)&this->fields.talkPhase = *(_QWORD *)&saveInfo->fields.talkPhase;
  bSetupInfo = saveInfo->fields.bSetupInfo;
  if ( bSetupInfo )
  {
    v14 = (BattleSetupInfo_o *)sub_1C3B9B0(BattleSetupInfo_TypeInfo);
    BattleSetupInfo___ctor_40195792(v14, bSetupInfo, 0LL);
  }
  else
  {
    v14 = 0LL;
  }
  this->fields.bSetupInfo = v14;
  p_bSetupInfo = &this->fields.bSetupInfo;
  sub_1C3B708((PartyOrganizationUtility_o *)p_bSetupInfo, (int64_t)v14, v7, v8, v9, v10, v11, v12);
  *((_BYTE *)p_bSetupInfo + 9) = 0;
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___ctor_46032072(
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

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
  sub_1C3B708((PartyOrganizationUtility_o *)v16, 0LL, v18, v19, v20, v21, v22, v23);
  BYTE1(v16->monitor) = 0;
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___ctor_46032204(
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  const MethodInfo *v24; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.wId = war;
  this->fields.qId = quest;
  this->fields.pId = phase;
  this->fields.talkType = type;
  BattleScriptRootComponent_TalkScriptInfo__setWinLoseInfo(this, winLose, winResult, v17);
  this->fields.bSetupInfo = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.bSetupInfo, 0LL, v18, v19, v20, v21, v22, v23);
  BattleScriptRootComponent_TalkScriptInfo__SetBasePhaseOfType(this, type, isPlayedScript, v24);
  this->fields.restoreLine = 0;
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___ctor_46032440(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        BattleSetupInfo_o *battleInfo,
        int32_t type,
        int32_t winLose,
        int32_t winResult,
        bool isPlayedScript,
        const MethodInfo *method)
{
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  struct BattleSetupInfo_o *bSetupInfo; // x8
  const MethodInfo *v23; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.bSetupInfo = battleInfo;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.bSetupInfo, (int64_t)battleInfo, v13, v14, v15, v16, v17, v18);
  bSetupInfo = this->fields.bSetupInfo;
  if ( !bSetupInfo )
    sub_1C3B9C0(v19, v20);
  *(_QWORD *)&this->fields.wId = *(_QWORD *)&bSetupInfo->fields.warId;
  this->fields.pId = bSetupInfo->fields.questPhase;
  this->fields.talkType = type;
  BattleScriptRootComponent_TalkScriptInfo__setWinLoseInfo(this, winLose, winResult, v21);
  BattleScriptRootComponent_TalkScriptInfo__SetBasePhaseOfType(this, type, isPlayedScript, v23);
  this->fields.restoreLine = 0;
}


BattleScriptRootComponent_TalkScriptSaveInfo_o *__fastcall BattleScriptRootComponent_TalkScriptInfo__GetInfoForSave(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x19
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  BattleScriptRootComponent_TalkScriptInfo_c *v12; // x0
  int64_t *static_fields; // x8
  int64_t v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  BattleSetupInfo_o *bSetupInfo; // x0
  BattleSetupInfo_BattleSetupSaveInfo_o *InfoForSave; // x1

  if ( (byte_4C2554C & 1) == 0 )
  {
    sub_1C3B764(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, method);
    sub_1C3B764(&BattleScriptRootComponent_TalkScriptSaveInfo_TypeInfo, v3);
    byte_4C2554C = 1;
  }
  v4 = sub_1C3B9B0(BattleScriptRootComponent_TalkScriptSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  v12 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  if ( !BattleScriptRootComponent_TalkScriptInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    v12 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  }
  if ( !v4 )
    sub_1C3B9C0(v12, v5);
  static_fields = (int64_t *)v12->static_fields;
  v14 = *static_fields;
  *(_QWORD *)(v4 + 16) = *static_fields;
  sub_1C3B708((PartyOrganizationUtility_o *)(v4 + 16), v14, v6, v7, v8, v9, v10, v11);
  *(_OWORD *)(v4 + 24) = *(_OWORD *)&this->fields.wId;
  *(_QWORD *)(v4 + 40) = *(_QWORD *)&this->fields.talkPhase;
  bSetupInfo = this->fields.bSetupInfo;
  if ( bSetupInfo )
    InfoForSave = BattleSetupInfo__GetInfoForSave(bSetupInfo, 0LL);
  else
    InfoForSave = 0LL;
  *(_QWORD *)(v4 + 48) = InfoForSave;
  sub_1C3B708((PartyOrganizationUtility_o *)(v4 + 48), (int64_t)InfoForSave, v15, v16, v17, v18, v19, v20);
  return (BattleScriptRootComponent_TalkScriptSaveInfo_o *)v4;
}


int32_t __fastcall BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C2554E & 1) == 0 )
  {
    sub_1C3B764(&ScriptManager_TypeInfo, method);
    byte_4C2554E = 1;
  }
  if ( !this->fields.restoreLine )
    return -1;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  return ScriptManager__GetLastLineInfo(0LL);
}


bool __fastcall BattleScriptRootComponent_TalkScriptInfo__IsConsumeAfterBattleWin(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C25550 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4C25550 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL
    || (Instance = (DataManager_o *)QuestMaster__getQuestEntity((QuestMaster_o *)Instance, this->fields.qId, 0LL)) == 0LL )
  {
    sub_1C3B9C0(Instance, v5);
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
  Il2CppObject *Master_object; // x0
  int32_t pId; // w21
  int32_t qId; // w22
  QuestMaster_o *v9; // x20
  System_String_o *CachedSelectedBranchQuestId; // x0
  __int64 v11; // x1
  int32_t ScriptQuestId; // w20
  const MethodInfo *v13; // x1
  int32_t winResult; // w0
  int32_t talkType; // w8
  Il2CppObject *v16; // x0
  int32_t v17; // w22
  ScriptManager_o *v18; // x21
  Il2CppObject *v19; // x0
  int32_t v20; // w21
  ScriptManager_o *v21; // x19
  int32_t v22; // w21
  Il2CppObject *Instance; // x0
  int32_t v24; // w23
  ScriptManager_o *v25; // x22
  Il2CppObject *v26; // x0
  int32_t v27; // w22

  if ( (byte_4C2554F & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_QuestMaster___, method);
    sub_1C3B764(&DataManager_TypeInfo, v3);
    sub_1C3B764(&ScriptManager_TypeInfo, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v5);
    byte_4C2554F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestMaster___);
  qId = this->fields.qId;
  pId = this->fields.pId;
  v9 = (QuestMaster_o *)Master_object;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  CachedSelectedBranchQuestId = (System_String_o *)ScriptManager__GetCachedSelectedBranchQuestId(qId, pId, 0LL);
  if ( !v9 )
    goto LABEL_30;
  ScriptQuestId = QuestMaster__getScriptQuestId(v9, (int32_t)CachedSelectedBranchQuestId, 0LL);
  winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(this, v13);
  talkType = this->fields.talkType;
  if ( talkType == 4 )
  {
    v22 = winResult;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v24 = this->fields.pId;
    v25 = (ScriptManager_o *)Instance;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    CachedSelectedBranchQuestId = ScriptManager__GetScriptName_BattleEnd2(ScriptQuestId, v24, v22, 0LL);
    if ( v25 )
    {
      if ( ScriptManager__IsExistScriptFile(v25, CachedSelectedBranchQuestId, 0LL) )
        return 1;
      v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      v27 = this->fields.pId;
      v21 = (ScriptManager_o *)v26;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      CachedSelectedBranchQuestId = ScriptManager__GetScriptName_BattleEnd(ScriptQuestId, v27, v22, 0LL);
      if ( v21 )
        goto LABEL_25;
    }
    goto LABEL_30;
  }
  if ( talkType != 3 )
    return 1;
  v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  v17 = this->fields.pId;
  v18 = (ScriptManager_o *)v16;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  CachedSelectedBranchQuestId = ScriptManager__GetScriptName_BattleStart(ScriptQuestId, v17, 0LL);
  if ( !v18 )
LABEL_30:
    sub_1C3B9C0(CachedSelectedBranchQuestId, v11);
  if ( ScriptManager__IsExistScriptFile(v18, CachedSelectedBranchQuestId, 0LL) )
    return 1;
  v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  v20 = this->fields.pId;
  v21 = (ScriptManager_o *)v19;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  CachedSelectedBranchQuestId = ScriptManager__GetScriptName_BattleStart2(ScriptQuestId, v20, 0LL);
  if ( !v21 )
    goto LABEL_30;
LABEL_25:
  if ( ScriptManager__IsExistScriptFile(v21, CachedSelectedBranchQuestId, 0LL) )
    return 1;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  return 0;
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t talkPhase; // w8
  unsigned int v5; // w8

  if ( (byte_4C2554D & 1) == 0 )
  {
    sub_1C3B764(&BgmManager_TypeInfo, method);
    sub_1C3B764(&ScriptManager_TypeInfo, v3);
    byte_4C2554D = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteLineInfo(0LL);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__SetMute(0, 0LL);
  talkPhase = this->fields.talkPhase;
  this->fields.restoreLine = 0;
  v5 = talkPhase - 1;
  if ( v5 <= 8 && ((0x1EFu >> v5) & 1) != 0 )
    this->fields.talkPhase = dword_C49244[v5];
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
        sub_1C3B9C0(0LL, type);
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
  BattleScriptRootComponent_TalkScriptInfo_c *v3; // x0
  int32_t winLoseInfo; // w21
  int32_t WinResultMultiplicationValue; // w8
  int32_t v6; // w19
  int v7; // w19
  float v8; // s8
  int32_t v9; // w9

  if ( (byte_4C25548 & 1) == 0 )
  {
    sub_1C3B764(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, method);
    byte_4C25548 = 1;
  }
  v3 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  winLoseInfo = this->fields.winLoseInfo;
  if ( !BattleScriptRootComponent_TalkScriptInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    v3 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  }
  WinResultMultiplicationValue = v3->static_fields->WinResultMultiplicationValue;
  if ( winLoseInfo % WinResultMultiplicationValue != 1 )
    return 0;
  v6 = this->fields.winLoseInfo;
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    WinResultMultiplicationValue = BattleScriptRootComponent_TalkScriptInfo_TypeInfo->static_fields->WinResultMultiplicationValue;
  }
  v7 = v6 / WinResultMultiplicationValue;
  if ( !byte_4C1C510 )
  {
    sub_1C3B764(&System_Math_TypeInfo, method);
    byte_4C1C510 = 1;
  }
  v8 = (float)v7;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( (int)v8 == 2 )
    v9 = 2;
  else
    v9 = 1;
  if ( (int)v8 == 3 )
    return 3;
  else
    return v9;
}


int32_t __fastcall BattleScriptRootComponent_TalkScriptInfo__get_win_lose(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  BattleScriptRootComponent_TalkScriptInfo_c *v3; // x0
  int32_t winLoseInfo; // w19

  if ( (byte_4C2554A & 1) == 0 )
  {
    sub_1C3B764(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, method);
    byte_4C2554A = 1;
  }
  v3 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  winLoseInfo = this->fields.winLoseInfo;
  if ( !BattleScriptRootComponent_TalkScriptInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    v3 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  }
  return winLoseInfo % v3->static_fields->WinResultMultiplicationValue;
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
  return (unsigned int)(this->fields.talkPhase - 2) <= 6 && (this->fields.talkPhase & 1) == 0;
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
  uint32_t cctor_finished; // w8
  int win_lose; // w0

  if ( (byte_4C25549 & 1) == 0 )
  {
    sub_1C3B764(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, *(_QWORD *)&winLose);
    byte_4C25549 = 1;
  }
  if ( winLose == 1 )
  {
    v7 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
    cctor_finished = BattleScriptRootComponent_TalkScriptInfo_TypeInfo->_2.cctor_finished;
    if ( winResult == 1 || (winResult & 0xFFFFFFFE) != 2 )
    {
      if ( !cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
        v7 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
      }
      win_lose = v7->static_fields->WinResultMultiplicationValue + 1;
    }
    else
    {
      if ( !cctor_finished )
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
  DataManager_o *Instance; // x0
  const MethodInfo *v9; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  System_String_o *MovieFolder; // x20
  System_Action_o *callback; // x0
  bool result; // w0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v14; // x8
  MovieFileMerge_o *lookup; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v16; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v17; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v18; // x8
  Il2CppObject *v19; // x0
  Il2CppObject **p__2__current; // x19
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4C25559 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestPhaseMaster___, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1C3B764(&SoundManager_TypeInfo, v5);
    byte_4C25559 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !_4__this )
    goto LABEL_35;
  talkInfo = _4__this->fields.talkInfo;
  if ( !talkInfo || !Instance )
    goto LABEL_35;
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
  Instance = (DataManager_o *)_4__this->fields.talkInfo;
  if ( !Instance )
    goto LABEL_35;
  if ( *(_DWORD *)&Instance->fields._DispLog == 1 )
    BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(
      (BattleScriptRootComponent_TalkScriptInfo_o *)Instance,
      v9);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  v14 = _4__this->fields.talkInfo;
  if ( !v14 )
    goto LABEL_35;
  lookup = (MovieFileMerge_o *)Instance[12].fields.lookup;
  if ( v14->fields.talkType == 5 )
    goto LABEL_33;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestPhaseMaster___),
        (v16 = _4__this->fields.talkInfo) == 0LL)
    || !Instance )
  {
LABEL_35:
    sub_1C3B9C0(Instance, v9);
  }
  Instance = (DataManager_o *)QuestPhaseMaster__GetMoviePlayType(
                                (QuestPhaseMaster_o *)Instance,
                                v16->fields.qId,
                                v16->fields.pId,
                                0LL);
  if ( (_DWORD)Instance == 1 )
  {
    v18 = _4__this->fields.talkInfo;
    if ( !v18 )
      goto LABEL_35;
    if ( v18->fields.talkPhase >= 6 )
      goto LABEL_10;
  }
  else if ( (_DWORD)Instance == 2 )
  {
    v17 = _4__this->fields.talkInfo;
    if ( !v17 )
      goto LABEL_35;
    if ( v17->fields.talkPhase < 5 )
      goto LABEL_10;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0LL);
LABEL_33:
  if ( !lookup )
    goto LABEL_35;
  MovieFileMerge__Initialize(lookup, MovieFolder, 0LL);
  v19 = (Il2CppObject *)MovieFileMerge__PlayMP4(lookup, 0LL);
  this->fields.__2__current = v19;
  p__2__current = &this->fields.__2__current;
  sub_1C3B708((PartyOrganizationUtility_o *)p__2__current, (int64_t)v19, v21, v22, v23, v24, v25, v26);
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_BattleScriptRootComponent__StartMovie_d__14_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C25552 & 1) == 0 )
  {
    sub_1C3B764(&BattleScriptRootComponent___c_TypeInfo, v1);
    byte_4C25552 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(BattleScriptRootComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleScriptRootComponent___c_TypeInfo->static_fields->__9 = (struct BattleScriptRootComponent___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)BattleScriptRootComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C25553 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4C25553 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v3);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
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
  const MethodInfo *v5; // x2
  BattleScriptRootComponent_o *_4__this; // x0

  if ( (byte_4C25554 & 1) == 0 )
  {
    sub_1C3B764(&ScriptManager_TypeInfo, str);
    byte_4C25554 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3B9C0(0LL, v4);
  BattleScriptRootComponent__ProceedToNextTalkPhase(_4__this, 0, v5);
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
  const MethodInfo *v5; // x2
  BattleScriptRootComponent_o *_4__this; // x0

  if ( (byte_4C25555 & 1) == 0 )
  {
    sub_1C3B764(&ScriptManager_TypeInfo, str);
    byte_4C25555 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3B9C0(0LL, v4);
  BattleScriptRootComponent__ProceedToNextTalkPhase(_4__this, 0, v5);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  Il2CppObject *Request_object; // x0
  __int64 v15; // x1

  if ( (byte_4C25556 & 1) == 0 )
  {
    sub_1C3B764(&Method_NetworkManager_getRequest_TutorialSetRequest___, is_decide);
    sub_1C3B764(&NetworkManager_TypeInfo, v4);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1C3B764(&Method_BattleScriptRootComponent___c__DisplayClass44_0__StartMashuPowerUpAction_b__1__, v6);
    byte_4C25556 = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent___c__DisplayClass44_0__StartMashuPowerUpAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v8, v9, v10, v11, v12, v13);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__1,
                     (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
  if ( !Request_object )
    sub_1C3B9C0(0LL, v15);
  TutorialSetRequest__beginRequest((TutorialSetRequest_o *)Request_object, this->fields.tutorial_flag_id, 0LL);
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
  __int64 v12; // x19
  AssetData_o *transform; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppObject *Object_object__50142412; // x21
  Il2CppObject *v28; // x0
  AssetData_o **v29; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct BattleScriptRootComponent_o *_4__this; // x8
  UnityEngine_Transform_o *v37; // x20
  UnityEngine_Transform_o *v38; // x20
  Il2CppObject *Component_object; // x0
  AssetData_o *v40; // x20
  EndrolRootComponent_o *v41; // x21
  System_Action_o *v42; // x22

  if ( (byte_4C25557 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, data);
    sub_1C3B764(&Method_AssetData_GetObject_GameObject____77902856, v5);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_EndrolRootComponent___, v6);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v8);
    sub_1C3B764(&Method_BattleScriptRootComponent___c__DisplayClass48_1__PlayStaffRoll_b__1__, v9);
    sub_1C3B764(&BattleScriptRootComponent___c__DisplayClass48_1_TypeInfo, v10);
    sub_1C3B764(&StringLiteral_6157/*"EventUI/Raid"*/, v11);
    byte_4C25557 = 1;
  }
  v12 = sub_1C3B9B0(BattleScriptRootComponent___c__DisplayClass48_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_21;
  *(_QWORD *)(v12 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 32), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = data;
  sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)data, v21, v22, v23, v24, v25, v26);
  transform = *(AssetData_o **)(v12 + 24);
  if ( !transform )
    goto LABEL_21;
  Object_object__50142412 = AssetData__GetObject_object__50142412(
                              transform,
                              (System_String_o *)StringLiteral_6157/*"EventUI/Raid"*/,
                              (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v28 = UnityEngine_Object__Instantiate_object_(
          Object_object__50142412,
          (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  *(_QWORD *)(v12 + 16) = v28;
  v29 = (AssetData_o **)(v12 + 16);
  sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)v28, v30, v31, v32, v33, v34, v35);
  transform = *(AssetData_o **)(v12 + 16);
  if ( !transform )
    goto LABEL_21;
  transform = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_21;
  if ( !transform )
    goto LABEL_21;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, _4__this->fields.cam, 0LL);
  transform = *v29;
  if ( !*v29 )
    goto LABEL_21;
  transform = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  v37 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4C1C511 )
  {
    transform = (AssetData_o *)sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v14);
    byte_4C1C511 = 1;
  }
  if ( !v37 )
    goto LABEL_21;
  UnityEngine_Transform__set_localPosition(v37, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  transform = *v29;
  if ( !*v29 )
    goto LABEL_21;
  transform = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  v38 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4C1C516 )
  {
    transform = (AssetData_o *)sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v14);
    byte_4C1C516 = 1;
  }
  if ( !v38
    || (UnityEngine_Transform__set_localScale(v38, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (transform = *v29) == 0LL)
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_EndrolRootComponent___),
        v40 = *(AssetData_o **)(v12 + 24),
        v41 = (EndrolRootComponent_o *)Component_object,
        v42 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
        System_Action___ctor(
          v42,
          (Il2CppObject *)v12,
          Method_BattleScriptRootComponent___c__DisplayClass48_1__PlayStaffRoll_b__1__,
          0LL),
        !v41) )
  {
LABEL_21:
    sub_1C3B9C0(transform, v14);
  }
  EndrolRootComponent__Open(v41, v40, v42, 0LL);
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

  if ( (byte_4C25558 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    byte_4C25558 = 1;
  }
  endObj = (UnityEngine_Object_o *)this->fields.endObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71122748(endObj, 0LL);
  data = this->fields.data;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_39213104(data, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    sub_1C3B9C0(v6, v7);
  ActionExtensions__Call(CS___8__locals1->fields.callback, 0LL);
}