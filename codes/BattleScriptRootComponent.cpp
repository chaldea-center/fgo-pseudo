void __fastcall BattleScriptRootComponent___ctor(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall BattleScriptRootComponent__ChapterStart(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleScriptRootComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x1
  int32_t JumpLine; // w19

  v3 = this;
  if ( (byte_49FF62A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_BattleScriptRootComponent__ChapterStart_b__39_0__, v4);
    this = (BattleScriptRootComponent_o *)sub_1B640C8(&ScriptManager_TypeInfo, v5);
    byte_49FF62A = 1;
  }
  talkInfo = v3->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        v8 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2),
        System_Action___ctor(v8, (Il2CppObject *)v3, Method_BattleScriptRootComponent__ChapterStart_b__39_0__, 0LL),
        (this = (BattleScriptRootComponent_o *)v3->fields.talkInfo) == 0LL) )
  {
    sub_1B64324(this);
  }
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)this,
               v9);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayChapterStartNotCollection(wId, v8, JumpLine, 0LL);
}


void __fastcall BattleScriptRootComponent__ChapterStartEffect(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppClass *klass; // x8
  int32_t name; // w20
  ScriptManager_CallbackFunc_o *v8; // x21

  v3 = (Il2CppObject *)this;
  if ( (byte_49FF62C & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleScriptRootComponent__ChapterStartEffect_b__41_0__, method);
    sub_1B640C8(&ScriptManager_CallbackFunc_TypeInfo, v4);
    this = (BattleScriptRootComponent_o *)sub_1B640C8(&ScriptManager_TypeInfo, v5);
    byte_49FF62C = 1;
  }
  klass = v3[4].klass;
  if ( !klass )
    sub_1B64324(this);
  name = (int32_t)klass->_1.name;
  v8 = (ScriptManager_CallbackFunc_o *)sub_1B64314(ScriptManager_CallbackFunc_TypeInfo, method, v2);
  ScriptManager_CallbackFunc___ctor(v8, v3, Method_BattleScriptRootComponent__ChapterStartEffect_b__41_0__, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayChapterStartEffect(name, v8, 0, 0LL);
}


void __fastcall BattleScriptRootComponent__ChapterStartEffectQuest(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppClass *klass; // x8
  int32_t name; // w20
  ScriptManager_CallbackFunc_o *v8; // x21

  v3 = (Il2CppObject *)this;
  if ( (byte_49FF62D & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleScriptRootComponent__ChapterStartEffectQuest_b__42_0__, method);
    sub_1B640C8(&ScriptManager_CallbackFunc_TypeInfo, v4);
    this = (BattleScriptRootComponent_o *)sub_1B640C8(&ScriptManager_TypeInfo, v5);
    byte_49FF62D = 1;
  }
  klass = v3[4].klass;
  if ( !klass )
    sub_1B64324(this);
  name = (int32_t)klass->_1.name;
  v8 = (ScriptManager_CallbackFunc_o *)sub_1B64314(ScriptManager_CallbackFunc_TypeInfo, method, v2);
  ScriptManager_CallbackFunc___ctor(v8, v3, Method_BattleScriptRootComponent__ChapterStartEffectQuest_b__42_0__, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayChapterStartEffect(name, v8, 0, 0LL);
}


void __fastcall BattleScriptRootComponent__ChapterStartQuest(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleScriptRootComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w20
  int32_t qId; // w21
  System_Action_o *v9; // x22
  const MethodInfo *v10; // x1
  int32_t JumpLine; // w19

  v3 = this;
  if ( (byte_49FF62B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_BattleScriptRootComponent__ChapterStartQuest_b__40_0__, v4);
    this = (BattleScriptRootComponent_o *)sub_1B640C8(&ScriptManager_TypeInfo, v5);
    byte_49FF62B = 1;
  }
  talkInfo = v3->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        qId = talkInfo->fields.qId,
        v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2),
        System_Action___ctor(v9, (Il2CppObject *)v3, Method_BattleScriptRootComponent__ChapterStartQuest_b__40_0__, 0LL),
        (this = (BattleScriptRootComponent_o *)v3->fields.talkInfo) == 0LL) )
  {
    sub_1B64324(this);
  }
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)this,
               v10);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayChapterStartQuestNotCollection(wId, qId, v9, JumpLine, 0LL);
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
  __int64 v10; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleScriptRootComponent_o *v12; // x21
  unsigned __int64 v13; // x22
  struct System_Threading_CancellationTokenSource_o *v14; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v15; // x8
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_49FF615 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v3);
    this = (BattleScriptRootComponent_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FF615 = 1;
  }
  entity = 0LL;
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_28;
  bSetupInfo = talkInfo->fields.bSetupInfo;
  if ( !bSetupInfo || (qId = bSetupInfo->fields.originQuestId, qId <= 0) )
    qId = talkInfo->fields.qId;
  this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_28;
  this = (BattleScriptRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  v8 = v2->fields.talkInfo;
  if ( !v8 || !this )
    goto LABEL_28;
  if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &entity, qId, v8->fields.pId, 0LL) )
    return;
  this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_28;
  this = (BattleScriptRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !entity )
    goto LABEL_28;
  v9 = (CommonReleaseMaster_o *)this;
  this = (BattleScriptRootComponent_o *)QuestPhaseEntity__GetCondHavingIds(entity, 0LL);
  if ( !this )
    goto LABEL_28;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v12 = this;
  if ( (int)m_CancellationTokenSource < 1 )
    return;
  v13 = 0LL;
  while ( 1 )
  {
    if ( v13 >= (unsigned int)m_CancellationTokenSource )
      goto LABEL_29;
    if ( !v9 )
      goto LABEL_28;
    this = (BattleScriptRootComponent_o *)CommonReleaseMaster__IsOpen(
                                            v9,
                                            *((_DWORD *)&v12->fields.myFSM + v13),
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
      v14 = this->fields.m_CancellationTokenSource;
      if ( (__int64)v13 < (int)v14 )
        break;
    }
    LODWORD(m_CancellationTokenSource) = v12->fields.m_CancellationTokenSource;
    if ( (__int64)++v13 >= (int)m_CancellationTokenSource )
      return;
  }
  if ( (unsigned int)v13 >= (unsigned int)v14 )
LABEL_29:
    sub_1B6432C(this, v10);
  v15 = v2->fields.talkInfo;
  if ( !v15 )
LABEL_28:
    sub_1B64324(this);
  v15->fields.qId = *((_DWORD *)&this->fields.myFSM + v13);
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
  int32_t v20; // w2
  int32_t v21; // w3
  TerminalPramsManager_c *v22; // x0
  Il2CppObject *WarBoardData_k__BackingField; // x20
  ServantStatusBattleListViewItem_o *p_WarBoardData_k__BackingField; // x0

  if ( (byte_49FF621 & 1) == 0 )
  {
    sub_1B640C8(&ScriptManager_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v4);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
    byte_49FF621 = 1;
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
          if ( !byte_49FF6B2 )
          {
            sub_1B640C8(&TerminalPramsManager_TypeInfo, v19);
            byte_49FF6B2 = 1;
          }
          v22 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v22 = TerminalPramsManager_TypeInfo;
          }
          WarBoardData_k__BackingField = (Il2CppObject *)v22->static_fields->_WarBoardData_k__BackingField;
          if ( !byte_49F9684 )
          {
            sub_1B640C8(&TerminalPramsManager_TypeInfo, v19);
            v22 = TerminalPramsManager_TypeInfo;
            byte_49F9684 = 1;
          }
          if ( !v22->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v22);
            v22 = TerminalPramsManager_TypeInfo;
          }
          p_WarBoardData_k__BackingField = (ServantStatusBattleListViewItem_o *)&v22->static_fields->_WarBoardData_k__BackingField;
          p_WarBoardData_k__BackingField->klass = 0LL;
          sub_1B6406C(p_WarBoardData_k__BackingField, 0, v20, v21);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
        if ( !byte_49F7A3E )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, v7);
          byte_49F7A3E = 1;
        }
        v18 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v18 = TerminalPramsManager_TypeInfo;
        }
        v18->static_fields->_IsAutoResume_k__BackingField = 1;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !Instance )
          goto LABEL_48;
        v14 = 34;
        v13 = 0LL;
      }
      AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, v14, 1, v13, 0, 0LL);
      return;
    case 5:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
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
      sub_1B64324(Instance);
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

  if ( (byte_49FF62E & 1) == 0 )
  {
    sub_1B640C8(&ScriptManager_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v4);
    byte_49FF62E = 1;
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
  if ( !byte_49F9049 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v6);
    byte_49F9049 = 1;
  }
  Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  LODWORD(Instance[1].fields.m_listUnloadScenes->fields._items) = qId;
  v9 = this->fields.talkInfo;
  if ( !v9 )
    goto LABEL_31;
  pId = v9->fields.pId;
  if ( !LODWORD(Instance[2].fields.targetRoot) )
    j_il2cpp_runtime_class_init_0(Instance);
  if ( !byte_49F904D )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v6);
    byte_49F904D = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_PhaseCnt_k__BackingField = (pId - 1) & ~((pId - 1) >> 31);
  TerminalPramsManager__SaveQuestInfo_SaveData(0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( AvalonSceneManager__IsStackScene(Instance, 0LL) )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      AvalonSceneManager__popSceneRefresh(Instance, 2, 0LL, 0LL);
      return;
    }
LABEL_31:
    sub_1B64324(Instance);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F7A3E )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v12);
    byte_49F7A3E = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  __int64 v29; // x1
  BattleResultComponent_resultData_o *myFSM; // x20
  System_Collections_Generic_IEnumerable_TSource__o *freeShopIds; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  BattleScriptRootComponent___c_c *v34; // x8
  BattleScriptRootComponent_o *v35; // x21
  System_Converter_TInput__TOutput__o *_9__37_1; // x22
  Il2CppObject *v37; // x23
  struct BattleScriptRootComponent___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_array *v41; // x0
  System_String_o *v42; // x0
  System_Collections_Generic_IEnumerable_TSource__o *returnRarePriShopIds; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  BattleScriptRootComponent___c_c *v46; // x8
  BattleScriptRootComponent_o *v47; // x20
  System_Converter_TInput__TOutput__o *_9__37_2; // x21
  Il2CppObject *v49; // x22
  struct BattleScriptRootComponent___c_StaticFields *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_array *v53; // x0
  System_String_o *v54; // x0
  __int64 v55; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v61; // x0
  int32_t WarId_k__BackingField; // w21
  System_Action_o *v63; // x22
  System_Collections_IEnumerator_o *v64; // x1
  Il2CppClass *v65; // x8

  v4 = (Il2CppObject *)this;
  if ( (byte_49FF628 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, jsonstr);
    sub_1B640C8(&Method_BattleScriptRootComponent__EndRequestBattleScenario_b__37_0__, v5);
    sub_1B640C8(&System_Converter_int__string__TypeInfo, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_int___, v8);
    sub_1B640C8(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___, v9);
    sub_1B640C8(&JsonManager_TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ConvertAll_string___, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, v12);
    sub_1B640C8(&ScriptManager_TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v15);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v16);
    sub_1B640C8(&Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__37_1__, v17);
    sub_1B640C8(&Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__37_2__, v18);
    sub_1B640C8(&BattleScriptRootComponent___c_TypeInfo, v19);
    sub_1B640C8(&StringLiteral_19548/*"freeShopIds"*/, v20);
    sub_1B640C8(&StringLiteral_22823/*"returnRarePriShopIds"*/, v21);
    sub_1B640C8(&StringLiteral_869/*","*/, v22);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v23);
    this = (BattleScriptRootComponent_o *)sub_1B640C8(&StringLiteral_16000/*"]"*/, v24);
    byte_49FF628 = 1;
  }
  klass = (BattleScriptRootComponent_TalkScriptInfo_o *)v4[4].klass;
  if ( !klass )
    goto LABEL_53;
  klass->fields.talkPhase = 6;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__SaveTalkResumeInfo(klass, 0LL);
  ScriptManager__ClearSelectRouteArray(0LL);
  v26 = (Il2CppObject *)System_String__Concat_61386656(
                          (System_String_o *)StringLiteral_15744/*"["*/,
                          jsonstr,
                          (System_String_o *)StringLiteral_16000/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v27 = JsonManager__DeserializeArray_object_(
          v26,
          (const MethodInfo_2E9EEC0 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v27, 1, 0LL);
  v28 = (Il2CppObject *)System_String__Concat_61386656(
                          (System_String_o *)StringLiteral_15744/*"["*/,
                          jsonstr,
                          (System_String_o *)StringLiteral_16000/*"]"*/,
                          0LL);
  this = (BattleScriptRootComponent_o *)JsonManager__DeserializeArray_object_(
                                          v28,
                                          (const MethodInfo_2E9EEC0 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  if ( !this )
    goto LABEL_53;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    sub_1B6432C(this, v29);
  myFSM = (BattleResultComponent_resultData_o *)this->fields.myFSM;
  TerminalPramsManager__SetBattleResultCampaignBonus(myFSM, 0LL);
  if ( !myFSM )
    goto LABEL_53;
  freeShopIds = (System_Collections_Generic_IEnumerable_TSource__o *)myFSM->fields.freeShopIds;
  if ( freeShopIds )
  {
    this = (BattleScriptRootComponent_o *)System_Linq_Enumerable__ToList_int_(
                                            freeShopIds,
                                            (const MethodInfo_2E74DB0 *)Method_System_Linq_Enumerable_ToList_int___);
    v34 = BattleScriptRootComponent___c_TypeInfo;
    v35 = this;
    if ( !BattleScriptRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleScriptRootComponent___c_TypeInfo);
      v34 = BattleScriptRootComponent___c_TypeInfo;
    }
    _9__37_1 = (System_Converter_TInput__TOutput__o *)v34->static_fields->__9__37_1;
    if ( !_9__37_1 )
    {
      if ( !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34);
        v34 = BattleScriptRootComponent___c_TypeInfo;
      }
      v37 = (Il2CppObject *)v34->static_fields->__9;
      _9__37_1 = (System_Converter_TInput__TOutput__o *)sub_1B64314(System_Converter_int__string__TypeInfo, v32, v33);
      System_Converter_int__object____ctor(
        _9__37_1,
        v37,
        Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__37_1__,
        0LL);
      static_fields = BattleScriptRootComponent___c_TypeInfo->static_fields;
      static_fields->__9__37_1 = (struct System_Converter_int__string__o *)_9__37_1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__37_1, (int32_t)_9__37_1, v39, v40);
    }
    if ( !v35 )
      goto LABEL_53;
    this = (BattleScriptRootComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                            (System_Collections_Generic_List_int__o *)v35,
                                            (System_Converter_T__TOutput__o *)_9__37_1,
                                            (const MethodInfo_2D6F084 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_53;
    v41 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
    v42 = System_String__Join((System_String_o *)StringLiteral_869/*","*/, v41, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_19548/*"freeShopIds"*/, v42, 0LL);
  }
  returnRarePriShopIds = (System_Collections_Generic_IEnumerable_TSource__o *)myFSM->fields.returnRarePriShopIds;
  if ( returnRarePriShopIds )
  {
    this = (BattleScriptRootComponent_o *)System_Linq_Enumerable__ToList_int_(
                                            returnRarePriShopIds,
                                            (const MethodInfo_2E74DB0 *)Method_System_Linq_Enumerable_ToList_int___);
    v46 = BattleScriptRootComponent___c_TypeInfo;
    v47 = this;
    if ( !BattleScriptRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleScriptRootComponent___c_TypeInfo);
      v46 = BattleScriptRootComponent___c_TypeInfo;
    }
    _9__37_2 = (System_Converter_TInput__TOutput__o *)v46->static_fields->__9__37_2;
    if ( !_9__37_2 )
    {
      if ( !v46->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v46);
        v46 = BattleScriptRootComponent___c_TypeInfo;
      }
      v49 = (Il2CppObject *)v46->static_fields->__9;
      _9__37_2 = (System_Converter_TInput__TOutput__o *)sub_1B64314(System_Converter_int__string__TypeInfo, v44, v45);
      System_Converter_int__object____ctor(
        _9__37_2,
        v49,
        Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__37_2__,
        0LL);
      v50 = BattleScriptRootComponent___c_TypeInfo->static_fields;
      v50->__9__37_2 = (struct System_Converter_int__string__o *)_9__37_2;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v50->__9__37_2, (int32_t)_9__37_2, v51, v52);
    }
    if ( !v47 )
      goto LABEL_53;
    this = (BattleScriptRootComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                            (System_Collections_Generic_List_int__o *)v47,
                                            (System_Converter_T__TOutput__o *)_9__37_2,
                                            (const MethodInfo_2D6F084 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_53;
    v53 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
    v54 = System_String__Join((System_String_o *)StringLiteral_869/*","*/, v53, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_22823/*"returnRarePriShopIds"*/, v54, 0LL);
  }
  UnityEngine_PlayerPrefs__Save(0LL);
  this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_53;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v55);
    byte_49F9045 = 1;
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
                                          *((_DWORD *)this[2].monitor + 4),
                                          0LL);
  if ( this )
  {
    this = (BattleScriptRootComponent_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x10000000000000LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9048 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v58);
        byte_49F9048 = 1;
      }
      v61 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v61 = TerminalPramsManager_TypeInfo;
      }
      WarId_k__BackingField = v61->static_fields->_WarId_k__BackingField;
      v63 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v58, v59);
      System_Action___ctor(v63, v4, Method_BattleScriptRootComponent__EndRequestBattleScenario_b__37_0__, 0LL);
      if ( Instance )
      {
        v64 = QuestTree__mfBaseTreeUpdateWithOpenCheck((QuestTree_o *)Instance, WarId_k__BackingField, v63, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)v4, v64, 0LL);
        return;
      }
LABEL_53:
      sub_1B64324(this);
    }
  }
  v65 = v4[4].klass;
  if ( !v65 )
    goto LABEL_53;
  BattleScriptRootComponent__ProcessBattleScripts(
    (BattleScriptRootComponent_o *)v4,
    (int32_t)v65->_1.byval_arg.data,
    v57);
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
  if ( (byte_49FF623 & 1) == 0 )
  {
    sub_1B640C8(&BattleData_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_BattleMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__, v5);
    sub_1B640C8(&ScriptManager_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8);
    result = (System_String_o *)sub_1B640C8(&StringLiteral_21968/*"ng"*/, v9);
    byte_49FF623 = 1;
  }
  entity = 0LL;
  if ( !v2 )
    goto LABEL_20;
  if ( System_String__Equals_61383712(v2, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL) )
  {
    result = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( result )
    {
      CommonUI__SetLoadMode((CommonUI_o *)result, 0, 0LL);
      result = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( result )
      {
        AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)result, 34, 1, 0LL, 0, 0LL);
        return;
      }
    }
LABEL_20:
    sub_1B64324(result);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !result )
    goto LABEL_20;
  result = (System_String_o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                &entity,
                                (const MethodInfo_30D412C *)Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__);
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
  __int64 v5; // x1
  __int64 v6; // x2
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_49FF625 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleScriptRootComponent_EndRequestBattleSetup__, method);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v3);
    sub_1B640C8(&ScriptManager_TypeInfo, v4);
    byte_49FF625 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v5, v6);
  NetworkManager_ResultCallbackFunc___ctor(v7, 0LL, Method_BattleScriptRootComponent_EndRequestBattleSetup__, 0LL);
  BattleScriptRootComponent__RequestBattleSetup(battleSetupInfo, v7, v8);
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
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 v10; // x1
  TerminalPramsManager_c *v11; // x0
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FF616 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, callback);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v7);
    byte_49FF616 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0LL) )
    goto LABEL_11;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_36:
    sub_1B64324(Instance);
  AvalonSceneManager__transitionScene_37970720((AvalonSceneManager_o *)Instance, 34, callback, 1, 0LL, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F904B )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v10);
    byte_49F904B = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_DispState_k__BackingField = 2;
  if ( !byte_49F7A3E )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v10);
    v11 = TerminalPramsManager_TypeInfo;
    byte_49F7A3E = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_49F84B0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v10);
    v11 = TerminalPramsManager_TypeInfo;
    byte_49F84B0 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_IsDispOnly_k__BackingField = 1;
  if ( !byte_49FF6B1 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v10);
    v11 = TerminalPramsManager_TypeInfo;
    byte_49FF6B1 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_IsScriptDisp_k__BackingField = 1;
  if ( !byte_49F9AB3 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v10);
    v11 = TerminalPramsManager_TypeInfo;
    byte_49F9AB3 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_IsPlayScriptWithMap_k__BackingField = 1;
}


void __fastcall BattleScriptRootComponent__OnDestroy(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  if ( (byte_49FF60F & 1) == 0 )
  {
    sub_1B640C8(&ScriptManager_TypeInfo, method);
    byte_49FF60F = 1;
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  __int64 v17; // x2
  AssetLoader_LoadEndDataHandler_o *v18; // x19

  if ( (byte_49FF633 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, callback);
    sub_1B640C8(&CommonUI_TypeInfo, v5);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1B640C8(&Method_BattleScriptRootComponent___c__DisplayClass48_0__PlayStaffRoll_b__0__, v7);
    sub_1B640C8(&BattleScriptRootComponent___c__DisplayClass48_0_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_5979/*"Endroll"*/, v9);
    byte_49FF633 = 1;
  }
  v10 = sub_1B64314(BattleScriptRootComponent___c__DisplayClass48_0_TypeInfo, callback, method);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1B64324(v11);
  *(_QWORD *)(v10 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v10 + 24) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)callback, v14, v15);
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  CommonUI__SetForceObi_16_9(1, 0LL);
  v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v16, v17);
  AssetLoader_LoadEndDataHandler___ctor(
    v18,
    (Il2CppObject *)v10,
    Method_BattleScriptRootComponent___c__DisplayClass48_0__PlayStaffRoll_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5979/*"Endroll"*/, v18, 1, 0LL);
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
    sub_1B64324(talkInfo);
  }
  BattleScriptRootComponent__ProcessBattleScripts(this, v6->fields.talkPhase, v5);
}


void __fastcall BattleScriptRootComponent__ProceedToNextTalkPhase_43905540(
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
  __int64 v14; // x2
  Il2CppObject *Instance; // x0
  const MethodInfo *v16; // x2
  int32_t FadeoutKind; // w20
  __int64 v18; // x1
  __int64 v19; // x2
  bool v20; // zf
  CommonUI_o *v21; // x20
  const MethodInfo *v22; // x1
  System_Action_o *v23; // x0
  __int64 *v24; // x8
  const MethodInfo *v25; // x1
  __int64 v26; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *v27; // x8
  System_Action_o *v28; // x20
  const MethodInfo *v29; // x2
  AvalonSceneManager_c *v30; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v32; // x21

  if ( (byte_49FF614 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&phaseType);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v5);
    sub_1B640C8(&Method_BattleScriptRootComponent_StartScriptFinishBattleAfterDemo__, v6);
    sub_1B640C8(&Method_BattleScriptRootComponent_StartScriptFinishBattle__, v7);
    sub_1B640C8(&Method_BattleScriptRootComponent__ProcessBattleScripts_b__15_0__, v8);
    sub_1B640C8(&ScriptManager_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B640C8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v11);
    byte_49FF614 = 1;
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
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !Instance )
        goto LABEL_31;
      if ( !clsQuestCheck__isPlayQuestStartAction((clsQuestCheck_o *)Instance, 0LL) )
      {
        BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v16);
        return;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_31;
      FadeoutKind = CommonUI__maskFadGetFadeoutKind((CommonUI_o *)Instance, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v20 = FadeoutKind == 1;
      v21 = (CommonUI_o *)Instance;
      if ( v20 )
      {
        if ( Instance )
        {
          CommonUI__maskFadeout((CommonUI_o *)Instance, 1, 0.0, 0LL, 0LL);
          BattleScriptRootComponent__StartBattleQuestStart(this, v22);
          return;
        }
LABEL_31:
        sub_1B64324(Instance);
      }
      v30 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v30 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v30->static_fields->DEFAULT_FADE_TIME;
      v32 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v18, v19);
      System_Action___ctor(
        v32,
        (Il2CppObject *)this,
        Method_BattleScriptRootComponent__ProcessBattleScripts_b__15_0__,
        0LL);
      if ( !v21 )
        goto LABEL_31;
      CommonUI__maskFadeout(v21, 1, DEFAULT_FADE_TIME, v32, 0LL);
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
      v27 = this->fields.talkInfo;
      if ( !v27 )
        goto LABEL_31;
      if ( v27->fields.talkType == 5 )
      {
        BattleScriptRootComponent__StartScriptNoBattleAfter(this, v25);
      }
      else
      {
        v23 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v25, v26);
        v24 = &Method_BattleScriptRootComponent_StartScriptFinishBattle__;
LABEL_26:
        v28 = v23;
        System_Action___ctor(v23, (Il2CppObject *)this, *v24, 0LL);
        BattleScriptRootComponent__LoadPlayScenarioWithMap(this, v28, v29);
      }
      return;
    case 7:
      BattleScriptRootComponent__StartDemoFinishBattle(this, v13);
      return;
    case 8:
      v23 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14);
      v24 = &Method_BattleScriptRootComponent_StartScriptFinishBattleAfterDemo__;
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
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  const MethodInfo *v17; // x1
  __int64 v18; // x1
  Il2CppObject *v19; // x20
  __int64 v20; // x1
  Il2CppObject *Master_object; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  QuestEntity_o *v24; // x20
  NetworkManager_ResultCallbackFunc_o *v25; // x20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v26; // x8
  BattleScenarioRequest_o *v27; // x19
  int32_t pId; // w20
  int32_t qId; // w21
  QuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FF627 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleScriptRootComponent_EndRequestBattleScenario__, isExit);
    sub_1B640C8(&Method_DataManager_GetMasterData_LoginQuestMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_NetworkManager_getRequest_BattleScenarioRequest___, v7);
    sub_1B640C8(&NetworkManager_TypeInfo, v8);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_1B640C8(&ScriptManager_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v13);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v14);
    byte_49FF627 = 1;
  }
  entity = 0LL;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_LoginQuestMaster___);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo || !Instance )
    goto LABEL_43;
  if ( LoginQuestMaster__GetEntityByQuestId((LoginQuestMaster_o *)Instance, talkInfo->fields.qId, 0LL) )
  {
    BattleScriptRootComponent__TransitionTerminal(this, v17);
    return;
  }
  v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v18);
    byte_49F9045 = 1;
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
    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 16LL),
    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 588LL),
    0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v20);
    byte_49F9045 = 1;
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
          *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 16LL),
          0LL) )
    goto LABEL_35;
  v24 = entity;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9050 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v22);
    byte_49F9050 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v24 )
LABEL_43:
    sub_1B64324(Instance);
  if ( QuestEntity__HasFlag_39149148(
         v24,
         0x8000LL,
         *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL) + 1,
         0LL) )
  {
    Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  }
LABEL_35:
  v25 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v22, v23);
  NetworkManager_ResultCallbackFunc___ctor(
    v25,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent_EndRequestBattleScenario__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getRequest_object_(
                                v25,
                                (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  v26 = this->fields.talkInfo;
  if ( !v26 )
    goto LABEL_43;
  v27 = (BattleScenarioRequest_o *)Instance;
  qId = v26->fields.qId;
  pId = v26->fields.pId;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  Instance = (DataManager_o *)ScriptManager__GetSelectRouteArray(0LL);
  if ( !v27 )
    goto LABEL_43;
  BattleScenarioRequest__beginRequest(v27, qId, pId, (System_Int32_array *)Instance, 0LL);
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
  int32_t questPhase; // w21
  int32_t questId; // w22
  BalanceConfig_c *v16; // x0
  float BgmFadeOutTimeBeforeBattle; // s8
  Il2CppObject *Request_object; // x20
  int32_t SelectBranchIndex; // w0
  int32_t v20; // w9
  int32_t v21; // w8
  int64_t deckId; // x23
  int64_t followerId; // x24
  int32_t followerClassId; // w25
  int32_t itemId; // w26
  int32_t boostId; // w27
  int32_t enemySelect; // w28
  int32_t v28; // w0
  int64_t userEquipId; // x21
  int32_t followerType; // w22
  int32_t questSelect; // w29
  int32_t v32; // [xsp+78h] [xbp-68h]
  int32_t v33; // [xsp+7Ch] [xbp-64h]

  if ( (byte_49FF626 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, callbackFunc);
    sub_1B640C8(&BgmManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestPhaseMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_NetworkManager_getRequest_BattleSetupRequest___, v8);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    sub_1B640C8(&ScriptManager_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B640C8(&SoundManager_TypeInfo, v12);
    byte_49FF626 = 1;
  }
  routeSelect = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !routeSelect )
    goto LABEL_23;
  CommonUI__SetLoadMode(routeSelect, 2, 0LL);
  if ( !battleSetupInfo )
    goto LABEL_23;
  questId = battleSetupInfo->fields.questId;
  questPhase = battleSetupInfo->fields.questPhase;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  routeSelect = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
    v16 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v16 = BalanceConfig_TypeInfo;
    }
    BgmFadeOutTimeBeforeBattle = v16->static_fields->BgmFadeOutTimeBeforeBattle;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__fadeoutBgm(BgmFadeOutTimeBeforeBattle, 0LL);
    BgmManager__Enable_KeepSubBgm(0, 0LL);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     callbackFunc,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_BattleSetupRequest___);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  SelectBranchIndex = ScriptManager__GetSelectBranchIndex(0LL);
  v20 = battleSetupInfo->fields.questId;
  v21 = battleSetupInfo->fields.questPhase;
  deckId = battleSetupInfo->fields.deckId;
  followerId = battleSetupInfo->fields.followerId;
  followerClassId = battleSetupInfo->fields.followerClassId;
  itemId = battleSetupInfo->fields.itemId;
  boostId = battleSetupInfo->fields.boostId;
  enemySelect = SelectBranchIndex;
  battleSetupInfo->fields.selectedBranchIdx = SelectBranchIndex;
  v32 = v21;
  v33 = v20;
  v28 = BattleSetupInfo__TargetQuestBranchIdx(battleSetupInfo, 0LL);
  userEquipId = battleSetupInfo->fields.userEquipId;
  followerType = battleSetupInfo->fields.followerType;
  questSelect = v28;
  routeSelect = (CommonUI_o *)ScriptManager__GetSelectRouteArray(0LL);
  if ( !Request_object )
LABEL_23:
    sub_1B64324(routeSelect);
  BattleSetupRequest__beginRequest(
    (BattleSetupRequest_o *)Request_object,
    v33,
    v32,
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
  QuestPhaseEntity_o *Entity; // x0
  System_String_o *ScriptName_NotMeetsCond; // x0
  System_String_o *v13; // x0
  int32_t ScriptIntParam; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FF622 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_QuestPhaseMaster___, *(_QWORD *)&questId);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&ScriptManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_16984/*"badEndId"*/, v8);
    sub_1B640C8(&StringLiteral_22058/*"notMeets"*/, v9);
    byte_49FF622 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    sub_1B64324(0LL);
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Master_object, questId, phase, 0LL);
  if ( Entity )
  {
    ScriptIntParam = QuestPhaseEntity__getScriptIntParam(Entity, (System_String_o *)StringLiteral_16984/*"badEndId"*/, 0, 0LL);
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
    v13 = System_String__Concat_61375396((System_String_o *)StringLiteral_22058/*"notMeets"*/, ScriptName_NotMeetsCond, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  System_Int32_array *Request_object; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  NetworkManager_ResultCallbackFunc_o *v16; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleRouteSelectRequest_o *v18; // x19
  int32_t pId; // w20
  int32_t qId; // w21

  if ( (byte_49FF61B & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___, isExit);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1B640C8(&ScriptManager_TypeInfo, v7);
    sub_1B640C8(&Method_BattleScriptRootComponent___c__DisplayClass24_0__ScriptFinishBattleAfterDemoEnd_b__0__, v8);
    sub_1B640C8(&BattleScriptRootComponent___c__DisplayClass24_0_TypeInfo, v9);
    byte_49FF61B = 1;
  }
  v10 = sub_1B64314(BattleScriptRootComponent___c__DisplayClass24_0_TypeInfo, isExit, method);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_15;
  *(_QWORD *)(v10 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v12, v13);
  *(_BYTE *)(v10 + 24) = isExit;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( ScriptManager__GetSelectRouteArray(0LL) )
  {
    v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15);
    NetworkManager_ResultCallbackFunc___ctor(
      v16,
      (Il2CppObject *)v10,
      Method_BattleScriptRootComponent___c__DisplayClass24_0__ScriptFinishBattleAfterDemoEnd_b__0__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (System_Int32_array *)NetworkManager__getRequest_object_(
                                             v16,
                                             (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      v18 = (BattleRouteSelectRequest_o *)Request_object;
      qId = talkInfo->fields.qId;
      pId = talkInfo->fields.pId;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      Request_object = ScriptManager__GetSelectRouteArray(0LL);
      if ( v18 )
      {
        BattleRouteSelectRequest__beginRequest(v18, qId, pId, Request_object, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1B64324(Request_object);
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v15);
}


bool __fastcall BattleScriptRootComponent__StartBattle(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  int v6; // w20

  if ( (byte_49FF624 & 1) == 0 )
  {
    sub_1B640C8(&Method_AvalonSceneManager_UnloadScene_FollowerRootComponent___, v1);
    sub_1B640C8(&Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___, v2);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v4);
    byte_49FF624 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v6 = BYTE4(Instance[9].klass);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  if ( !v6 )
  {
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 10, 1, 0LL, 1, 0LL);
    return 1;
  }
  AvalonSceneManager__UnloadScene_object_(
    (AvalonSceneManager_o *)Instance,
    (const MethodInfo_2E23308 *)Method_AvalonSceneManager_UnloadScene_FollowerRootComponent___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (AvalonSceneManager__UnloadScene_object_(
          (AvalonSceneManager_o *)Instance,
          (const MethodInfo_2E23308 *)Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_11:
    sub_1B64324(Instance);
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
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x21
  __int64 v9; // x0

  if ( (byte_49FF61D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_BattleScriptRootComponent_ProceedToNextTalkPhase__, v3);
    sub_1B640C8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v4);
    byte_49FF61D = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v8 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleScriptRootComponent_ProceedToNextTalkPhase__, 0LL);
  if ( !Instance )
    sub_1B64324(v9);
  clsQuestCheck__PlayQuestStartAction((clsQuestCheck_o *)Instance, v8, 0LL);
}


void __fastcall BattleScriptRootComponent__StartDemoBeforeBattle(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppClass *klass; // x8
  int32_t name_high; // w20
  int32_t namespaze; // w21
  System_Action_object__o *v9; // x22

  v3 = (Il2CppObject *)this;
  if ( (byte_49FF61F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_string__TypeInfo, method);
    sub_1B640C8(&Method_BattleScriptRootComponent__StartDemoBeforeBattle_b__28_0__, v4);
    this = (BattleScriptRootComponent_o *)sub_1B640C8(&ScriptManager_TypeInfo, v5);
    byte_49FF61F = 1;
  }
  klass = v3[4].klass;
  if ( !klass )
    sub_1B64324(this);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v9 = (System_Action_object__o *)sub_1B64314(System_Action_string__TypeInfo, method, v2);
  System_Action_object____ctor(v9, v3, Method_BattleScriptRootComponent__StartDemoBeforeBattle_b__28_0__, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__LoadBattleStartGameDemo(name_high, namespaze, 0, (System_Action_string__o *)v9, 0, 0LL);
}


void __fastcall BattleScriptRootComponent__StartDemoFinishBattle(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x0
  int32_t qId; // w20
  int32_t pId; // w21
  System_Action_object__o *v9; // x22
  const MethodInfo *v10; // x2

  if ( (byte_49FF619 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_string__TypeInfo, method);
    sub_1B640C8(&Method_BattleScriptRootComponent__StartDemoFinishBattle_b__22_0__, v4);
    sub_1B640C8(&ScriptManager_TypeInfo, v5);
    byte_49FF619 = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_1B64324(0LL);
  qId = talkInfo->fields.qId;
  if ( qId < 1 )
  {
    BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(talkInfo, method);
    BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v10);
  }
  else
  {
    pId = talkInfo->fields.pId;
    v9 = (System_Action_object__o *)sub_1B64314(System_Action_string__TypeInfo, method, v2);
    System_Action_object____ctor(
      v9,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent__StartDemoFinishBattle_b__22_0__,
      0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
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
  __int64 v10; // x19
  __int64 v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1
  TerminalPramsManager_c *v15; // x0
  int32_t WarId_k__BackingField; // w22
  Il2CppObject *Instance; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  CombineResultEffectComponent_ClickDelegate_o *v20; // x21

  if ( (byte_49FF62F & 1) == 0 )
  {
    sub_1B640C8(&CombineResultEffectComponent_ClickDelegate_TypeInfo, end_act);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
    sub_1B640C8(&TutorialFlag_TypeInfo, v6);
    sub_1B640C8(&Method_BattleScriptRootComponent___c__DisplayClass44_0__StartMashuPowerUpAction_b__0__, v7);
    sub_1B640C8(&BattleScriptRootComponent___c__DisplayClass44_0_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_8470/*"MASHU_CHANGE_WAR_ID"*/, v9);
    byte_49FF62F = 1;
  }
  v10 = sub_1B64314(BattleScriptRootComponent___c__DisplayClass44_0_TypeInfo, end_act, method);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_17;
  *(_QWORD *)(v10 + 16) = end_act;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)end_act, v12, v13);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9048 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v14);
    byte_49F9048 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v15->static_fields->_WarId_k__BackingField;
  if ( WarId_k__BackingField != ConstantMaster__getValue((System_String_o *)StringLiteral_8470/*"MASHU_CHANGE_WAR_ID"*/, 0LL) )
    goto LABEL_14;
  *(_DWORD *)(v10 + 24) = 115;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_37376848(115, 0LL) )
  {
LABEL_14:
    ActionExtensions__Call(*(System_Action_o **)(v10 + 16), 0LL);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1B64314(
                                                          CombineResultEffectComponent_ClickDelegate_TypeInfo,
                                                          v18,
                                                          v19);
  CombineResultEffectComponent_ClickDelegate___ctor(
    v20,
    (Il2CppObject *)v10,
    Method_BattleScriptRootComponent___c__DisplayClass44_0__StartMashuPowerUpAction_b__0__,
    0LL);
  if ( !Instance )
LABEL_17:
    sub_1B64324(v11);
  CommonUI__OpenPowerUp((CommonUI_o *)Instance, v20, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleScriptRootComponent__StartMovie(
        BattleScriptRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FF613 & 1) == 0 )
  {
    sub_1B640C8(&BattleScriptRootComponent__StartMovie_d__14_TypeInfo, callback);
    byte_49FF613 = 1;
  }
  v5 = sub_1B64314(BattleScriptRootComponent__StartMovie_d__14_TypeInfo, callback, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)callback, v8, v9);
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
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  System_Action_o *v13; // x20
  const MethodInfo *v14; // x2
  System_Collections_IEnumerator_o *started; // x1
  BattleScriptRootComponent_TalkScriptInfo_o *v16; // x20
  const MethodInfo *v17; // x1
  Il2CppClass *v18; // x8
  int namespaze; // w8
  int name_high; // w9
  Il2CppClass *v21; // x8

  v2 = (Il2CppObject *)this;
  if ( (byte_49FF612 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_BattleScriptRootComponent__StartScript_b__13_0__, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v4);
    sub_1B640C8(&ScriptManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    this = (BattleScriptRootComponent_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FF612 = 1;
  }
  klass = v2[4].klass;
  if ( !klass )
    goto LABEL_25;
  namespaze_high = HIDWORD(klass->_1.namespaze);
  if ( (unsigned int)(namespaze_high - 3) < 4 )
  {
    this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (BattleScriptRootComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
            v13 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v11, v12);
            System_Action___ctor(v13, v2, Method_BattleScriptRootComponent__StartScript_b__13_0__, 0LL);
            started = BattleScriptRootComponent__StartMovie((BattleScriptRootComponent_o *)v2, v13, v14);
            UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)v2, started, 0LL);
            return;
          }
          v21 = v2[4].klass;
          if ( v21 )
          {
            BattleScriptRootComponent__ProcessBattleScripts(
              (BattleScriptRootComponent_o *)v2,
              (int32_t)v21->_1.byval_arg.data,
              v12);
            return;
          }
        }
      }
    }
LABEL_25:
    sub_1B64324(this);
  }
  if ( namespaze_high == 1 )
  {
    this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_25;
    CommonUI__maskFadeout((CommonUI_o *)this, 2, 0.0, 0LL, 0LL);
    v16 = (BattleScriptRootComponent_TalkScriptInfo_o *)v2[4].klass;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__SaveTalkResumeInfo(v16, 0LL);
    v18 = v2[4].klass;
    if ( !v18 )
      goto LABEL_25;
    name_high = HIDWORD(v18->_1.name);
    namespaze = (int)v18->_1.namespaze;
    if ( name_high <= 0 )
    {
      if ( namespaze )
        BattleScriptRootComponent__ChapterStartEffect((BattleScriptRootComponent_o *)v2, v17);
      else
        BattleScriptRootComponent__ChapterStart((BattleScriptRootComponent_o *)v2, v17);
    }
    else if ( namespaze )
    {
      BattleScriptRootComponent__ChapterStartEffectQuest((BattleScriptRootComponent_o *)v2, v17);
    }
    else
    {
      BattleScriptRootComponent__ChapterStartQuest((BattleScriptRootComponent_o *)v2, v17);
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
  __int64 v7; // x1
  __int64 v8; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *v9; // x8
  char v10; // w24
  int32_t wId; // w19
  int32_t qId; // w20
  int32_t pId; // w21
  ScriptManager_CallbackFunc_o *v14; // x0
  ScriptManager_CallbackFunc_o *v15; // x22
  const MethodInfo *v16; // x1
  int32_t JumpLine; // w23
  const MethodInfo *v18; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *v19; // x8
  int32_t v20; // w23
  int32_t talkType; // w24

  v2 = this;
  if ( (byte_49FF61E & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleScriptRootComponent_ProceedToNextTalkPhase___75715360, method);
    sub_1B640C8(&Method_BattleScriptRootComponent_RequestBattleSecnarioForNoneBattleQuest__, v3);
    sub_1B640C8(&ScriptManager_CallbackFunc_TypeInfo, v4);
    this = (BattleScriptRootComponent_o *)sub_1B640C8(&ScriptManager_TypeInfo, v5);
    byte_49FF61E = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_15;
  this = (BattleScriptRootComponent_o *)WarMaster__IsLastQuest(talkInfo->fields.wId, talkInfo->fields.qId, 0LL);
  v9 = v2->fields.talkInfo;
  if ( !v9 )
    goto LABEL_15;
  v10 = (char)this;
  wId = v9->fields.wId;
  qId = v9->fields.qId;
  pId = v9->fields.pId;
  v14 = (ScriptManager_CallbackFunc_o *)sub_1B64314(ScriptManager_CallbackFunc_TypeInfo, v7, v8);
  v15 = v14;
  if ( (v10 & 1) != 0 )
  {
    ScriptManager_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)v2,
      Method_BattleScriptRootComponent_RequestBattleSecnarioForNoneBattleQuest__,
      0LL);
    this = (BattleScriptRootComponent_o *)v2->fields.talkInfo;
    if ( this )
    {
      JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
                   (BattleScriptRootComponent_TalkScriptInfo_o *)this,
                   v16);
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      ScriptManager__PlayBattleStartWhite(wId, qId, pId, v15, 0, 0LL, JumpLine, 0, 0LL);
      return;
    }
LABEL_15:
    sub_1B64324(this);
  }
  ScriptManager_CallbackFunc___ctor(
    v14,
    (Il2CppObject *)v2,
    Method_BattleScriptRootComponent_ProceedToNextTalkPhase___75715360,
    0LL);
  this = (BattleScriptRootComponent_o *)v2->fields.talkInfo;
  if ( !this )
    goto LABEL_15;
  this = (BattleScriptRootComponent_o *)BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
                                          (BattleScriptRootComponent_TalkScriptInfo_o *)this,
                                          v18);
  v19 = v2->fields.talkInfo;
  if ( !v19 )
    goto LABEL_15;
  v20 = (int)this;
  talkType = v19->fields.talkType;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayBattleStart(wId, qId, pId, v15, 0, 0LL, v20, talkType == 6, 0, 0LL, 0LL);
}


void __fastcall BattleScriptRootComponent__StartScriptBeforeBattleAfterDemo(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleScriptRootComponent_o *v3; // x22
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w19
  int32_t qId; // w20
  int32_t pId; // w21
  ScriptManager_CallbackFunc_o *v10; // x23
  const MethodInfo *v11; // x1
  int32_t JumpLine; // w22

  v3 = this;
  if ( (byte_49FF620 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleScriptRootComponent_ProceedToNextTalkPhase___75715360, method);
    sub_1B640C8(&ScriptManager_CallbackFunc_TypeInfo, v4);
    this = (BattleScriptRootComponent_o *)sub_1B640C8(&ScriptManager_TypeInfo, v5);
    byte_49FF620 = 1;
  }
  talkInfo = v3->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        qId = talkInfo->fields.qId,
        pId = talkInfo->fields.pId,
        v10 = (ScriptManager_CallbackFunc_o *)sub_1B64314(ScriptManager_CallbackFunc_TypeInfo, method, v2),
        ScriptManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)v3,
          Method_BattleScriptRootComponent_ProceedToNextTalkPhase___75715360,
          0LL),
        (this = (BattleScriptRootComponent_o *)v3->fields.talkInfo) == 0LL) )
  {
    sub_1B64324(this);
  }
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)this,
               v11);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayBattleStart2(wId, qId, pId, v10, 0, 0LL, JumpLine, 0LL);
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
  const MethodInfo *v9; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *v10; // x8
  int32_t pId; // w19
  int32_t qId; // w20
  int v13; // w25
  int32_t winResult; // w22
  __int64 v15; // x1
  __int64 v16; // x2
  ScriptManager_CallbackFunc_o *v17; // x23
  const MethodInfo *v18; // x1
  __int64 v19; // x1
  int32_t JumpLine; // w21
  TerminalPramsManager_c *v21; // x0
  _BOOL4 IsPlayScriptWithMap_k__BackingField; // w24
  __int64 v23; // x1
  TerminalPramsManager_c *v24; // x0

  if ( (byte_49FF617 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleScriptRootComponent_StartScriptFinishBattleEnd2__, method);
    sub_1B640C8(&BgmManager_TypeInfo, v3);
    sub_1B640C8(&ScriptManager_CallbackFunc_TypeInfo, v4);
    sub_1B640C8(&ScriptManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v7);
    byte_49FF617 = 1;
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
    if ( !byte_49F7A3E )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v23);
      byte_49F7A3E = 1;
    }
    v24 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v24 = TerminalPramsManager_TypeInfo;
    }
    v24->static_fields->_IsAutoResume_k__BackingField = 1;
    talkInfo = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( talkInfo )
    {
      AvalonSceneManager__transitionSceneRefresh(talkInfo, 34, 1, 0LL, 0, 0LL);
      return;
    }
LABEL_38:
    sub_1B64324(talkInfo);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9651 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v9);
    byte_49F9651 = 1;
  }
  talkInfo = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    talkInfo = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  v10 = this->fields.talkInfo;
  if ( !v10 )
    goto LABEL_38;
  qId = v10->fields.qId;
  pId = v10->fields.pId;
  v13 = BYTE1(talkInfo[1].fields.m_listUnloadScenes[2].fields._size);
  winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(this->fields.talkInfo, v9);
  v17 = (ScriptManager_CallbackFunc_o *)sub_1B64314(ScriptManager_CallbackFunc_TypeInfo, v15, v16);
  ScriptManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent_StartScriptFinishBattleEnd2__,
    0LL);
  talkInfo = (AvalonSceneManager_o *)this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_38;
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)talkInfo,
               v18);
  if ( v13 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9662 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v19);
      byte_49F9662 = 1;
    }
    v21 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v21 = TerminalPramsManager_TypeInfo;
    }
    IsPlayScriptWithMap_k__BackingField = v21->static_fields->_IsPlayScriptWithMap_k__BackingField;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__PlayBattleEnd2_41089988(
      qId,
      pId,
      winResult,
      15,
      v17,
      0,
      JumpLine,
      IsPlayScriptWithMap_k__BackingField,
      0LL);
  }
  else
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__PlayBattleEnd2(qId, pId, winResult, v17, 0, JumpLine, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x2
  ScriptManager_CallbackFunc_o *v12; // x23
  const MethodInfo *v13; // x1
  int32_t JumpLine; // w19
  struct BattleScriptRootComponent_TalkScriptInfo_o *v15; // x8
  int32_t v16; // w20
  int32_t v17; // w21
  int v18; // w26
  int32_t v19; // w22
  __int64 v20; // x1
  __int64 v21; // x2
  ScriptManager_CallbackFunc_o *v22; // x23
  const MethodInfo *v23; // x1
  __int64 v24; // x1
  int32_t v25; // w19
  TerminalPramsManager_c *v26; // x0
  _BOOL4 IsPlayScriptWithMap_k__BackingField; // w24

  if ( (byte_49FF61A & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleScriptRootComponent_ScriptFinishBattleAfterDemoEnd__, method);
    sub_1B640C8(&ScriptManager_CallbackFunc_TypeInfo, v3);
    sub_1B640C8(&ScriptManager_TypeInfo, v4);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
    byte_49FF61A = 1;
  }
  if ( this->fields.setEndRoll )
  {
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      qId = talkInfo->fields.qId;
      pId = talkInfo->fields.pId;
      winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(talkInfo, method);
      v12 = (ScriptManager_CallbackFunc_o *)sub_1B64314(ScriptManager_CallbackFunc_TypeInfo, v10, v11);
      ScriptManager_CallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_BattleScriptRootComponent_ScriptFinishBattleAfterDemoEnd__,
        0LL);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(talkInfo, v13);
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        ScriptManager__PlayBattleEndWhite(qId, pId, winResult, v12, 0, JumpLine, 0LL);
        return;
      }
    }
LABEL_30:
    sub_1B64324(talkInfo);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9651 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9651 = 1;
  }
  talkInfo = (BattleScriptRootComponent_TalkScriptInfo_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    talkInfo = (BattleScriptRootComponent_TalkScriptInfo_o *)TerminalPramsManager_TypeInfo;
  }
  v15 = this->fields.talkInfo;
  if ( !v15 )
    goto LABEL_30;
  v17 = v15->fields.qId;
  v16 = v15->fields.pId;
  v18 = *(unsigned __int8 *)(*(_QWORD *)&talkInfo[3].fields.wId + 105LL);
  v19 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(this->fields.talkInfo, method);
  v22 = (ScriptManager_CallbackFunc_o *)sub_1B64314(ScriptManager_CallbackFunc_TypeInfo, v20, v21);
  ScriptManager_CallbackFunc___ctor(
    v22,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent_ScriptFinishBattleAfterDemoEnd__,
    0LL);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_30;
  v25 = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(talkInfo, v23);
  if ( v18 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9662 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v24);
      byte_49F9662 = 1;
    }
    v26 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v26 = TerminalPramsManager_TypeInfo;
    }
    IsPlayScriptWithMap_k__BackingField = v26->static_fields->_IsPlayScriptWithMap_k__BackingField;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__PlayBattleEnd_41088672(v17, v16, v19, 15, v22, 0, v25, IsPlayScriptWithMap_k__BackingField, 0LL);
  }
  else
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__PlayBattleEnd(v17, v16, v19, v22, 0, v25, 0LL);
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
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  NetworkManager_ResultCallbackFunc_o *v16; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleRouteSelectRequest_o *v18; // x19
  int32_t pId; // w20
  int32_t qId; // w21

  if ( (byte_49FF618 & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___, isExit);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1B640C8(&ScriptManager_TypeInfo, v7);
    sub_1B640C8(&Method_BattleScriptRootComponent___c__DisplayClass21_0__StartScriptFinishBattleEnd2_b__0__, v8);
    sub_1B640C8(&BattleScriptRootComponent___c__DisplayClass21_0_TypeInfo, v9);
    byte_49FF618 = 1;
  }
  v10 = sub_1B64314(BattleScriptRootComponent___c__DisplayClass21_0_TypeInfo, isExit, method);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_15;
  *(_QWORD *)(v10 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v12, v13);
  *(_BYTE *)(v10 + 24) = isExit;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( ScriptManager__GetSelectRouteArray(0LL) )
  {
    v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15);
    NetworkManager_ResultCallbackFunc___ctor(
      v16,
      (Il2CppObject *)v10,
      Method_BattleScriptRootComponent___c__DisplayClass21_0__StartScriptFinishBattleEnd2_b__0__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (System_Int32_array *)NetworkManager__getRequest_object_(
                                             v16,
                                             (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      v18 = (BattleRouteSelectRequest_o *)Request_object;
      qId = talkInfo->fields.qId;
      pId = talkInfo->fields.pId;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      Request_object = ScriptManager__GetSelectRouteArray(0LL);
      if ( v18 )
      {
        BattleRouteSelectRequest__beginRequest(v18, qId, pId, Request_object, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1B64324(Request_object);
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v15);
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
  __int64 v11; // x1
  __int64 v12; // x2
  ScriptManager_CallbackFunc_o *v13; // x0
  ScriptManager_CallbackFunc_o *v14; // x22
  const MethodInfo *v15; // x1
  int32_t JumpLine; // w23
  const MethodInfo *v17; // x1
  int32_t v18; // w23

  if ( (byte_49FF629 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__38_0__, method);
    sub_1B640C8(&Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__38_1__, v3);
    sub_1B640C8(&ScriptManager_CallbackFunc_TypeInfo, v4);
    sub_1B640C8(&ScriptManager_TypeInfo, v5);
    byte_49FF629 = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_13;
  setEndRoll = this->fields.setEndRoll;
  qId = talkInfo->fields.qId;
  pId = talkInfo->fields.pId;
  winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(talkInfo, method);
  v13 = (ScriptManager_CallbackFunc_o *)sub_1B64314(ScriptManager_CallbackFunc_TypeInfo, v11, v12);
  v14 = v13;
  if ( setEndRoll )
  {
    ScriptManager_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__38_0__,
      0LL);
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(talkInfo, v15);
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      ScriptManager__PlayBattleEndWhite(qId, pId, winResult, v14, 0, JumpLine, 0LL);
      return;
    }
LABEL_13:
    sub_1B64324(talkInfo);
  }
  ScriptManager_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__38_1__,
    0LL);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_13;
  v18 = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(talkInfo, v17);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayBattleEnd(qId, pId, winResult, v14, 0, v18, 0LL);
}


void __fastcall BattleScriptRootComponent__StartSecondDemoFinishBattle(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppClass *klass; // x8
  int32_t name_high; // w20
  int32_t namespaze; // w21
  System_Action_object__o *v9; // x22

  v3 = (Il2CppObject *)this;
  if ( (byte_49FF61C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_string__TypeInfo, method);
    sub_1B640C8(&Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__25_0__, v4);
    this = (BattleScriptRootComponent_o *)sub_1B640C8(&ScriptManager_TypeInfo, v5);
    byte_49FF61C = 1;
  }
  klass = v3[4].klass;
  if ( !klass )
    sub_1B64324(this);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v9 = (System_Action_object__o *)sub_1B64314(System_Action_string__TypeInfo, method, v2);
  System_Action_object____ctor(v9, v3, Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__25_0__, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__LoadBattleEndGameDemo(name_high, namespaze, 0, (System_Action_string__o *)v9, 0, 0LL);
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
  TerminalPramsManager_c *v21; // x0
  const MethodInfo *v22; // x1
  TerminalPramsManager_c *v23; // x0
  Il2CppObject *v24; // x21
  Il2CppObject *v25; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  System_Action_o *v28; // x23
  __int64 v29; // x1
  TerminalSceneComponent_c *v30; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v32; // x1
  __int64 v33; // x8
  UnityEngine_Object_o *v34; // x20
  __int64 v35; // x1
  __int64 v36; // x8
  clsQuestCheck_o *v37; // x20
  __int64 v38; // x1
  TerminalPramsManager_c *v39; // x0
  __int64 v40; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FF630 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_AvalonSceneManager_UnloadSceneAsync_TerminalSceneComponent___, v3);
    sub_1B640C8(&Method_AvalonSceneManager_UnloadScene_BattleScriptRootComponent___, v4);
    sub_1B640C8(&BalanceConfig_TypeInfo, v5);
    sub_1B640C8(&Method_BattleScriptRootComponent_TransitionTerminalSub__, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, v7);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&ScriptManager_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B640C8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v13);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v14);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v15);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v16);
    byte_49FF630 = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F7A3E )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F7A3E = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v17->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_49F9AB3 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    v17 = TerminalPramsManager_TypeInfo;
    byte_49F9AB3 = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v17->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
  if ( !byte_49F9048 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    v17 = TerminalPramsManager_TypeInfo;
    byte_49F9048 = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = TerminalPramsManager_TypeInfo;
  }
  EventID = WarMaster__getEventID(v17->static_fields->_WarId_k__BackingField, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_91;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_91;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         EventID,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_91;
    if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)entity, 0LL) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9AC8 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v20);
        byte_49F9AC8 = 1;
      }
      v21 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v21 = TerminalPramsManager_TypeInfo;
      }
      v21->static_fields->_isPlayRiverActionCheck_k__BackingField = 1;
    }
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9651 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v22);
    byte_49F9651 = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  if ( v23->static_fields->_IsScriptDisp_k__BackingField )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_91;
    AvalonSceneManager__UnloadScene_object_(
      (AvalonSceneManager_o *)Instance,
      (const MethodInfo_2E23308 *)Method_AvalonSceneManager_UnloadScene_BattleScriptRootComponent___);
    v24 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v28 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v26, v27);
    System_Action___ctor(v28, (Il2CppObject *)this, Method_BattleScriptRootComponent_TransitionTerminalSub__, 0LL);
    if ( !v25 )
      goto LABEL_91;
    Instance = (DataManager_o *)AvalonSceneManager__UnloadSceneAsync_object_(
                                  (AvalonSceneManager_o *)v25,
                                  v28,
                                  (const MethodInfo_2E234C4 *)Method_AvalonSceneManager_UnloadSceneAsync_TerminalSceneComponent___);
    if ( !v24 )
      goto LABEL_91;
    UnityEngine_MonoBehaviour__StartCoroutine_69113008(
      (UnityEngine_MonoBehaviour_o *)v24,
      (System_Collections_IEnumerator_o *)Instance,
      0LL);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_49F76BD )
    {
      sub_1B640C8(&TerminalSceneComponent_TypeInfo, v29);
      byte_49F76BD = 1;
    }
    v30 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v30 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_Object_o *)v30->static_fields->mInstance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_49F76BD )
      {
        sub_1B640C8(&TerminalSceneComponent_TypeInfo, v32);
        byte_49F76BD = 1;
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
      v34 = *(UnityEngine_Object_o **)(v33 + 264);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
      {
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_49F76BD )
        {
          sub_1B640C8(&TerminalSceneComponent_TypeInfo, v35);
          byte_49F76BD = 1;
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
        ScrTerminalMap__SetDiceButton((ScrTerminalMap_o *)Instance, 0LL);
        Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
        v37 = (clsQuestCheck_o *)Instance;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( !v37 )
          goto LABEL_91;
        if ( clsQuestCheck__CheckQuestPlayableNow(
               v37,
               BalanceConfig_TypeInfo->static_fields->EventBoardGameNextBoardQuestId,
               0LL) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_49F9813 )
          {
            sub_1B640C8(&TerminalPramsManager_TypeInfo, v38);
            byte_49F9813 = 1;
          }
          v39 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v39 = TerminalPramsManager_TypeInfo;
          }
          v39->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField = 1;
          Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
          if ( Instance )
          {
            MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
            return;
          }
LABEL_91:
          sub_1B64324(Instance);
        }
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_49F76BD )
        {
          sub_1B640C8(&TerminalSceneComponent_TypeInfo, v38);
          byte_49F76BD = 1;
        }
        Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
        }
        v40 = **(_QWORD **)&Instance[1].fields._DispLog;
        if ( !v40 )
          goto LABEL_91;
        Instance = *(DataManager_o **)(v40 + 264);
        if ( !Instance )
          goto LABEL_91;
        ScrTerminalMap__SetEventBoardQuestArrivalPanel((ScrTerminalMap_o *)Instance, 0LL);
      }
    }
  }
  else
  {
    BattleScriptRootComponent__TransitionTerminalSub(this, v22);
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
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 v8; // x1
  int32_t v9; // w20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v10; // x8
  int32_t talkType; // w22
  bool v12; // w19
  __int64 v13; // x1
  TerminalPramsManager_c *v14; // x0

  if ( (byte_49FF631 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
    byte_49FF631 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
    if ( !byte_49F97F9 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v8);
      byte_49F97F9 = 1;
    }
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    }
    v9 = 2;
    *(_BYTE *)(*(_QWORD *)&Instance[1].fields._DispLog + 584LL) = 1;
  }
  else
  {
    v9 = 1;
  }
  v10 = this->fields.talkInfo;
  if ( !v10 )
    goto LABEL_29;
  talkType = v10->fields.talkType;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  if ( talkType != 5 )
    goto LABEL_21;
  v12 = AvalonSceneManager__checkLoadedScene((AvalonSceneManager_o *)Instance, 34, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_29:
    sub_1B64324(Instance);
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
  if ( !byte_49FF6B1 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v13);
    byte_49FF6B1 = 1;
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
  __int64 v18; // x1
  __int64 v19; // x2
  CommonUI_o *v20; // x19
  BattleScriptRootComponent___c_c *v21; // x8
  System_Action_o *_9__47_0; // x22
  System_String_o *v23; // x20
  System_String_o *v24; // x21
  Il2CppObject *v25; // x23
  struct BattleScriptRootComponent___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  TerminalPramsManager_c *v29; // x0

  if ( (byte_49FF632 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&ScriptManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v6);
    sub_1B640C8(&Method_BattleScriptRootComponent___c__TransitionWarBoard_b__47_0__, v7);
    sub_1B640C8(&BattleScriptRootComponent___c_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_25214/*"バトルスクリプトエラー"*/, v9);
    sub_1B640C8(&StringLiteral_25215/*"バトル前スクリプト以外のトークから聖杯戦争盤へ移動することはできません。\nターミナルへ戻ります。"*/, v10);
    byte_49FF632 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_32;
  if ( talkInfo->fields.talkType != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = (CommonUI_o *)Instance;
    v21 = BattleScriptRootComponent___c_TypeInfo;
    if ( !BattleScriptRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleScriptRootComponent___c_TypeInfo);
      v21 = BattleScriptRootComponent___c_TypeInfo;
    }
    _9__47_0 = v21->static_fields->__9__47_0;
    v23 = (System_String_o *)StringLiteral_25215/*"バトル前スクリプト以外のトークから聖杯戦争盤へ移動することはできません。\nターミナルへ戻ります。"*/;
    v24 = (System_String_o *)StringLiteral_25214/*"バトルスクリプトエラー"*/;
    if ( !_9__47_0 )
    {
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = BattleScriptRootComponent___c_TypeInfo;
      }
      v25 = (Il2CppObject *)v21->static_fields->__9;
      _9__47_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v18, v19);
      System_Action___ctor(_9__47_0, v25, Method_BattleScriptRootComponent___c__TransitionWarBoard_b__47_0__, 0LL);
      static_fields = BattleScriptRootComponent___c_TypeInfo->static_fields;
      static_fields->__9__47_0 = _9__47_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__47_0, (int32_t)_9__47_0, v27, v28);
    }
    if ( v20 )
    {
      CommonUI__OpenNotificationDialog(v20, v24, v23, _9__47_0, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
      return;
    }
    goto LABEL_32;
  }
  bSetupInfo = talkInfo->fields.bSetupInfo;
  if ( !bSetupInfo )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F7A3E )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v12);
      byte_49F7A3E = 1;
    }
    v29 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v29 = TerminalPramsManager_TypeInfo;
    }
    v29->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      v17 = 34;
      v16 = 0LL;
      goto LABEL_30;
    }
LABEL_32:
    sub_1B64324(Instance);
  }
  if ( bSetupInfo->fields.isScriptBeforePartySelect )
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    bSetupInfo->fields.selectedBranchIdx = ScriptManager__GetSelectBranchIndex(0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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

  if ( (byte_49FF63A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isExit);
    sub_1B640C8(&Method_BattleScriptRootComponent__ChapterStartEffect_b__41_1__, v4);
    byte_49FF63A = 1;
  }
  v5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, isExit, method);
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
  if ( (byte_49FF63B & 1) == 0 )
  {
    this = (BattleScriptRootComponent_o *)sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49FF63B = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo )
    sub_1B64324(this);
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
  BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v9; // x8
  Il2CppObject *WarEntityByWarID; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v11; // x8
  const MethodInfo *v12; // x1
  TerminalPramsManager_c *v13; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_49FF639 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_WarMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v4);
    sub_1B640C8(&ScriptManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v6);
    this = (BattleScriptRootComponent_o *)sub_1B640C8(&TerminalPramsManager_TypeInfo, v7);
    byte_49FF639 = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_23;
  ++talkInfo->fields.pId;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__SaveTalkResumeInfo(talkInfo, 0LL);
  this = (BattleScriptRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  v9 = v2->fields.talkInfo;
  if ( !v9 || !this )
    goto LABEL_23;
  WarEntityByWarID = (Il2CppObject *)QuestTree__mfGetWarEntityByWarID((QuestTree_o *)this, v9->fields.wId, 0LL);
  entity = WarEntityByWarID;
  if ( !WarEntityByWarID )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleScriptRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarMaster___);
    v11 = v2->fields.talkInfo;
    if ( v11 && this )
    {
      DataMasterBase_object__object__int___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
        &entity,
        v11->fields.wId,
        (const MethodInfo_30D3EF8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
      WarEntityByWarID = entity;
      if ( !entity )
        goto LABEL_22;
      goto LABEL_14;
    }
LABEL_23:
    sub_1B64324(this);
  }
LABEL_14:
  if ( WarEntity__HasFlag((WarEntity_o *)WarEntityByWarID, 0x8000, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9353 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v12);
      byte_49F9353 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    v13->static_fields->_IsPhaseClear_k__BackingField = 1;
  }
LABEL_22:
  BattleScriptRootComponent__ChapterStartEffectQuest(v2, v12);
}


void __fastcall BattleScriptRootComponent___ChapterStart_b__39_0(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  BattleScriptRootComponent_o *v2; // x19
  BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x20
  const MethodInfo *v4; // x1

  v2 = this;
  if ( (byte_49FF638 & 1) == 0 )
  {
    this = (BattleScriptRootComponent_o *)sub_1B640C8(&ScriptManager_TypeInfo, method);
    byte_49FF638 = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  __int64 v9; // x2
  int32_t v10; // w3
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 bSetupInfo; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v13; // x8

  if ( (byte_49FF636 & 1) == 0 )
  {
    sub_1B640C8(&BattleSetupInfo_TypeInfo, demoInfo);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    byte_49FF636 = 1;
  }
  if ( demoInfo )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        bSetupInfo = (__int64)talkInfo->fields.bSetupInfo;
        if ( !bSetupInfo )
        {
          bSetupInfo = sub_1B64314(BattleSetupInfo_TypeInfo, v8, v9);
          BattleSetupInfo___ctor((BattleSetupInfo_o *)bSetupInfo, 0LL);
          v13 = this->fields.talkInfo;
          if ( !v13 || !bSetupInfo )
            goto LABEL_13;
          *(_QWORD *)(bSetupInfo + 20) = *(_QWORD *)&v13->fields.qId;
        }
        *(_QWORD *)(bSetupInfo + 104) = demoInfo;
        *(_WORD *)(bSetupInfo + 96) = 1;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(bSetupInfo + 104), (int32_t)demoInfo, v9, v10);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 50, 1, (Il2CppObject *)bSetupInfo, 0LL);
          return;
        }
      }
    }
LABEL_13:
    sub_1B64324(Instance);
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
  __int64 v9; // x2
  int32_t v10; // w3
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 bSetupInfo; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v13; // x8

  if ( (byte_49FF634 & 1) == 0 )
  {
    sub_1B640C8(&BattleSetupInfo_TypeInfo, demoInfo);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    byte_49FF634 = 1;
  }
  if ( demoInfo )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        bSetupInfo = (__int64)talkInfo->fields.bSetupInfo;
        if ( !bSetupInfo )
        {
          bSetupInfo = sub_1B64314(BattleSetupInfo_TypeInfo, v8, v9);
          BattleSetupInfo___ctor((BattleSetupInfo_o *)bSetupInfo, 0LL);
          v13 = this->fields.talkInfo;
          if ( !v13 || !bSetupInfo )
            goto LABEL_13;
          *(_QWORD *)(bSetupInfo + 20) = *(_QWORD *)&v13->fields.qId;
        }
        *(_QWORD *)(bSetupInfo + 104) = demoInfo;
        *(_WORD *)(bSetupInfo + 96) = 256;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(bSetupInfo + 104), (int32_t)demoInfo, v9, v10);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 50, 1, (Il2CppObject *)bSetupInfo, 0LL);
          return;
        }
      }
    }
LABEL_13:
    sub_1B64324(Instance);
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

  if ( (byte_49FF637 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isExit);
    sub_1B640C8(&Method_BattleScriptRootComponent_TransitionTerminal__, v4);
    byte_49FF637 = 1;
  }
  v5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, isExit, method);
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
    sub_1B64324(this);
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
  __int64 v11; // x2
  int32_t v12; // w3
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 bSetupInfo; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v15; // x8
  System_Action_o *v16; // x19
  const MethodInfo *v17; // x2

  if ( (byte_49FF635 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, demoInfo);
    sub_1B640C8(&Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__25_1__, v5);
    sub_1B640C8(&BattleSetupInfo_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8);
    byte_49FF635 = 1;
  }
  if ( demoInfo )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        bSetupInfo = (__int64)talkInfo->fields.bSetupInfo;
        if ( !bSetupInfo )
        {
          bSetupInfo = sub_1B64314(BattleSetupInfo_TypeInfo, v10, v11);
          BattleSetupInfo___ctor((BattleSetupInfo_o *)bSetupInfo, 0LL);
          v15 = this->fields.talkInfo;
          if ( !v15 || !bSetupInfo )
            goto LABEL_15;
          *(_QWORD *)(bSetupInfo + 20) = *(_QWORD *)&v15->fields.qId;
        }
        *(_QWORD *)(bSetupInfo + 104) = demoInfo;
        *(_WORD *)(bSetupInfo + 96) = 0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(bSetupInfo + 104), (int32_t)demoInfo, v11, v12);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 50, 1, (Il2CppObject *)bSetupInfo, 0LL);
          return;
        }
      }
    }
LABEL_15:
    sub_1B64324(Instance);
  }
  if ( this->fields.setEndRoll )
  {
    v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, demoInfo, method);
    System_Action___ctor(
      v16,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__25_1__,
      0LL);
    BattleScriptRootComponent__PlayStaffRoll(this, v16, v17);
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

  if ( (byte_49FF610 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_49FF610 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1B64324(Instance);
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
    sub_1B64324(0LL);
  BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(talkInfo, (const MethodInfo *)data);
  BattleScriptRootComponent__StartScript(this, v5);
}


void __fastcall BattleScriptRootComponent__beginStartUp(
        BattleScriptRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppClass *v10; // x1
  __int64 methodPtr_low; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o **p_talkInfo; // x20
  Il2CppObject *Instance; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v14; // x8
  unsigned int talkPhase; // w9
  WarEntity_o *QuestId; // x0
  int32_t id; // w20
  bool v18; // w8

  if ( (byte_49FF611 & 1) == 0 )
  {
    sub_1B640C8(&BgmManager_TypeInfo, data);
    sub_1B640C8(&Method_DataManager_GetMasterData_WarMaster___, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_6336/*"FES_WAR_ID"*/, v9);
    byte_49FF611 = 1;
  }
  if ( !data )
    goto LABEL_9;
  v10 = (Il2CppClass *)BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  methodPtr_low = LOBYTE(BattleScriptRootComponent_TalkScriptInfo_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(data->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (BattleScriptRootComponent_TalkScriptInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] != BattleScriptRootComponent_TalkScriptInfo_TypeInfo
    || (this->fields.talkInfo = (struct BattleScriptRootComponent_TalkScriptInfo_o *)data,
        p_talkInfo = &this->fields.talkInfo,
        LOBYTE(data->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
    || data->klass->_2.typeHierarchy[methodPtr_low - 1] != v10 )
  {
    sub_1B645E4(data);
LABEL_9:
    this->fields.talkInfo = 0LL;
    p_talkInfo = &this->fields.talkInfo;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_talkInfo, (int32_t)data, (int32_t)method, v3);
  v14 = *p_talkInfo;
  if ( !*p_talkInfo )
    goto LABEL_25;
  if ( v14->fields.restoreLine )
  {
    talkPhase = v14->fields.talkPhase;
    if ( talkPhase <= 8 && ((1 << talkPhase) & 0x154) != 0 && !v14->fields.isTitleResume )
    {
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      BgmManager__SetMute(1, 0LL);
      v14 = *p_talkInfo;
      if ( !*p_talkInfo )
        goto LABEL_25;
    }
  }
  v14->fields.isTitleResume = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarMaster___),
        !*p_talkInfo)
    || !Instance )
  {
LABEL_25:
    sub_1B64324(Instance);
  }
  QuestId = WarMaster__getByLastQuestId((WarMaster_o *)Instance, (*p_talkInfo)->fields.qId, 0LL);
  if ( QuestId )
  {
    id = QuestId->fields.id;
    v18 = id == ConstantMaster__getValue((System_String_o *)StringLiteral_6336/*"FES_WAR_ID"*/, 0LL);
  }
  else
  {
    v18 = 0;
  }
  this->fields.setEndRoll = v18;
  SceneRootComponent__beginStartUp_38276788((SceneRootComponent_o *)this, 0LL);
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FF645 & 1) == 0 )
  {
    sub_1B640C8(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_1416/*"2.0"*/, v4);
    byte_49FF645 = 1;
  }
  BattleScriptRootComponent_TalkScriptInfo_TypeInfo->static_fields->TalkResumeVersion = (struct System_String_o *)StringLiteral_1416/*"2.0"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BattleScriptRootComponent_TalkScriptInfo_TypeInfo->static_fields,
    StringLiteral_1416/*"2.0"*/,
    v2,
    v3);
  BattleScriptRootComponent_TalkScriptInfo_TypeInfo->static_fields->WinResultMultiplicationValue = 100;
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___ctor(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___ctor_43920664(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        BattleScriptRootComponent_TalkScriptSaveInfo_o *saveInfo,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t v8; // w3
  BattleSetupInfo_BattleSetupSaveInfo_o *bSetupInfo; // x21
  BattleSetupInfo_o *v10; // x20
  struct BattleSetupInfo_o **p_bSetupInfo; // x19

  if ( (byte_49FF63F & 1) == 0 )
  {
    sub_1B640C8(&BattleSetupInfo_TypeInfo, saveInfo);
    byte_49FF63F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !saveInfo )
    sub_1B64324(v5);
  *(_OWORD *)&this->fields.wId = *(_OWORD *)&saveInfo->fields.wId;
  *(_QWORD *)&this->fields.talkPhase = *(_QWORD *)&saveInfo->fields.talkPhase;
  bSetupInfo = saveInfo->fields.bSetupInfo;
  if ( bSetupInfo )
  {
    v10 = (BattleSetupInfo_o *)sub_1B64314(BattleSetupInfo_TypeInfo, v6, v7);
    BattleSetupInfo___ctor_38445928(v10, bSetupInfo, 0LL);
  }
  else
  {
    v10 = 0LL;
  }
  this->fields.bSetupInfo = v10;
  p_bSetupInfo = &this->fields.bSetupInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_bSetupInfo, (int32_t)v10, v7, v8);
  *((_BYTE *)p_bSetupInfo + 9) = 0;
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___ctor_43920828(
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
  int32_t v18; // w2
  int32_t v19; // w3

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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v16, 0, v18, v19);
  BYTE1(v16->monitor) = 0;
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___ctor_43920960(
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
  int32_t v18; // w2
  int32_t v19; // w3
  const MethodInfo *v20; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.wId = war;
  this->fields.qId = quest;
  this->fields.pId = phase;
  this->fields.talkType = type;
  BattleScriptRootComponent_TalkScriptInfo__setWinLoseInfo(this, winLose, winResult, v17);
  this->fields.bSetupInfo = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bSetupInfo, 0, v18, v19);
  BattleScriptRootComponent_TalkScriptInfo__SetBasePhaseOfType(this, type, isPlayedScript, v20);
  this->fields.restoreLine = 0;
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___ctor_43921196(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        BattleSetupInfo_o *battleInfo,
        int32_t type,
        int32_t winLose,
        int32_t winResult,
        bool isPlayedScript,
        const MethodInfo *method)
{
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x0
  const MethodInfo *v16; // x3
  struct BattleSetupInfo_o *bSetupInfo; // x8
  const MethodInfo *v18; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.bSetupInfo = battleInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bSetupInfo, (int32_t)battleInfo, v13, v14);
  bSetupInfo = this->fields.bSetupInfo;
  if ( !bSetupInfo )
    sub_1B64324(v15);
  *(_QWORD *)&this->fields.wId = *(_QWORD *)&bSetupInfo->fields.warId;
  this->fields.pId = bSetupInfo->fields.questPhase;
  this->fields.talkType = type;
  BattleScriptRootComponent_TalkScriptInfo__setWinLoseInfo(this, winLose, winResult, v16);
  BattleScriptRootComponent_TalkScriptInfo__SetBasePhaseOfType(this, type, isPlayedScript, v18);
  this->fields.restoreLine = 0;
}


BattleScriptRootComponent_TalkScriptSaveInfo_o *__fastcall BattleScriptRootComponent_TalkScriptInfo__GetInfoForSave(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x19
  int32_t v6; // w2
  int32_t v7; // w3
  BattleScriptRootComponent_TalkScriptInfo_c *v8; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_StaticFields *static_fields; // x8
  struct System_String_o *TalkResumeVersion; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  BattleSetupInfo_o *bSetupInfo; // x0
  BattleSetupInfo_BattleSetupSaveInfo_o *InfoForSave; // x1

  if ( (byte_49FF640 & 1) == 0 )
  {
    sub_1B640C8(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, method);
    sub_1B640C8(&BattleScriptRootComponent_TalkScriptSaveInfo_TypeInfo, v4);
    byte_49FF640 = 1;
  }
  v5 = sub_1B64314(BattleScriptRootComponent_TalkScriptSaveInfo_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  v8 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  if ( !BattleScriptRootComponent_TalkScriptInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    v8 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  }
  if ( !v5 )
    sub_1B64324(v8);
  static_fields = v8->static_fields;
  TalkResumeVersion = static_fields->TalkResumeVersion;
  *(_QWORD *)(v5 + 16) = static_fields->TalkResumeVersion;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)TalkResumeVersion, v6, v7);
  *(_OWORD *)(v5 + 24) = *(_OWORD *)&this->fields.wId;
  *(_QWORD *)(v5 + 40) = *(_QWORD *)&this->fields.talkPhase;
  bSetupInfo = this->fields.bSetupInfo;
  if ( bSetupInfo )
    InfoForSave = BattleSetupInfo__GetInfoForSave(bSetupInfo, 0LL);
  else
    InfoForSave = 0LL;
  *(_QWORD *)(v5 + 48) = InfoForSave;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 48), (int32_t)InfoForSave, v11, v12);
  return (BattleScriptRootComponent_TalkScriptSaveInfo_o *)v5;
}


int32_t __fastcall BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FF642 & 1) == 0 )
  {
    sub_1B640C8(&ScriptManager_TypeInfo, method);
    byte_49FF642 = 1;
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

  if ( (byte_49FF644 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FF644 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL
    || (Instance = (DataManager_o *)QuestMaster__getQuestEntity((QuestMaster_o *)Instance, this->fields.qId, 0LL)) == 0LL )
  {
    sub_1B64324(Instance);
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
  int32_t ScriptQuestId; // w21
  const MethodInfo *v12; // x1
  int32_t winResult; // w0
  int32_t talkType; // w8
  Il2CppObject *v15; // x0
  int32_t v16; // w23
  ScriptManager_o *v17; // x22
  Il2CppObject *v18; // x0
  int32_t v19; // w23
  Il2CppObject *v20; // x22
  System_String_o *v21; // x1
  ScriptManager_o *v22; // x0
  int32_t v23; // w22
  Il2CppObject *Instance; // x0
  int32_t v25; // w24
  ScriptManager_o *v26; // x23
  _BOOL4 IsExistScriptFile; // w21
  Il2CppObject *v28; // x0
  int32_t v29; // w24
  Il2CppObject *v30; // x23
  int v31; // w2
  _BOOL4 IsOpenByTime; // w8
  QuestEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FF643 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_QuestMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&ScriptManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v5);
    byte_49FF643 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestMaster___);
  qId = this->fields.qId;
  pId = this->fields.pId;
  v9 = (QuestMaster_o *)Master_object;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  CachedSelectedBranchQuestId = (System_String_o *)ScriptManager__GetCachedSelectedBranchQuestId(qId, pId, 0LL);
  if ( !v9 )
    goto LABEL_42;
  ScriptQuestId = QuestMaster__getScriptQuestId(v9, (int32_t)CachedSelectedBranchQuestId, 0LL);
  winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(this, v12);
  talkType = this->fields.talkType;
  if ( talkType == 4 )
  {
    v23 = winResult;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v25 = this->fields.pId;
    v26 = (ScriptManager_o *)Instance;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    CachedSelectedBranchQuestId = ScriptManager__GetScriptName_BattleEnd2(ScriptQuestId, v25, v23, 0LL);
    if ( !v26 )
      goto LABEL_42;
    if ( !ScriptManager__IsExistScriptFile(v26, CachedSelectedBranchQuestId, 0LL) )
    {
      v28 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      v29 = this->fields.pId;
      v30 = v28;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      CachedSelectedBranchQuestId = ScriptManager__GetScriptName_BattleEnd(ScriptQuestId, v29, v23, 0LL);
      if ( !v30 )
        goto LABEL_42;
      v21 = CachedSelectedBranchQuestId;
      v22 = (ScriptManager_o *)v30;
      goto LABEL_28;
    }
LABEL_22:
    IsExistScriptFile = 1;
LABEL_29:
    talkType = this->fields.talkType;
    goto LABEL_30;
  }
  if ( talkType == 3 )
  {
    v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v16 = this->fields.pId;
    v17 = (ScriptManager_o *)v15;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    CachedSelectedBranchQuestId = ScriptManager__GetScriptName_BattleStart(ScriptQuestId, v16, 0LL);
    if ( !v17 )
      goto LABEL_42;
    if ( !ScriptManager__IsExistScriptFile(v17, CachedSelectedBranchQuestId, 0LL) )
    {
      v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      v19 = this->fields.pId;
      v20 = v18;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      CachedSelectedBranchQuestId = ScriptManager__GetScriptName_BattleStart2(ScriptQuestId, v19, 0LL);
      if ( !v20 )
        goto LABEL_42;
      v21 = CachedSelectedBranchQuestId;
      v22 = (ScriptManager_o *)v20;
LABEL_28:
      IsExistScriptFile = ScriptManager__IsExistScriptFile(v22, v21, 0LL);
      goto LABEL_29;
    }
    goto LABEL_22;
  }
  IsExistScriptFile = 1;
LABEL_30:
  if ( talkType != 1 )
  {
    v31 = this->fields.qId;
    if ( v31 >= 1 )
    {
      if ( !QuestMaster__TryGetQuestEntity(v9, &entity, v31, 0LL) )
      {
        IsOpenByTime = 0;
LABEL_40:
        if ( IsExistScriptFile && IsOpenByTime )
          return 1;
        goto LABEL_36;
      }
      CachedSelectedBranchQuestId = (System_String_o *)entity;
      if ( entity )
      {
        IsOpenByTime = QuestEntity__IsOpenByTime(entity, 0, 0LL);
        goto LABEL_40;
      }
LABEL_42:
      sub_1B64324(CachedSelectedBranchQuestId);
    }
  }
  if ( IsExistScriptFile )
    return 1;
LABEL_36:
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

  if ( (byte_49FF641 & 1) == 0 )
  {
    sub_1B640C8(&BgmManager_TypeInfo, method);
    sub_1B640C8(&ScriptManager_TypeInfo, v3);
    byte_49FF641 = 1;
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
    this->fields.talkPhase = dword_BDDD4C[v5];
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
        sub_1B64324(0LL);
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

  if ( (byte_49FF63C & 1) == 0 )
  {
    sub_1B640C8(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, method);
    byte_49FF63C = 1;
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
  if ( !byte_49F7110 )
  {
    sub_1B640C8(&System_Math_TypeInfo, method);
    byte_49F7110 = 1;
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

  if ( (byte_49FF63E & 1) == 0 )
  {
    sub_1B640C8(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, method);
    byte_49FF63E = 1;
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

  if ( (byte_49FF63D & 1) == 0 )
  {
    sub_1B640C8(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, *(_QWORD *)&winLose);
    byte_49FF63D = 1;
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
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  System_String_o *MovieFolder; // x20
  const MethodInfo *v11; // x1
  System_Action_o *callback; // x0
  bool result; // w0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v14; // x8
  MovieFileMerge_o *saveDataMapList; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v16; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v17; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v18; // x8
  Il2CppObject *v19; // x0
  Il2CppObject **p__2__current; // x19
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_49FF64D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1B640C8(&SoundManager_TypeInfo, v5);
    byte_49FF64D = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
      v11);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  v14 = _4__this->fields.talkInfo;
  if ( !v14 )
    goto LABEL_35;
  saveDataMapList = (MovieFileMerge_o *)Instance[12].fields.saveDataMapList;
  if ( v14->fields.talkType == 5 )
    goto LABEL_33;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___),
        (v16 = _4__this->fields.talkInfo) == 0LL)
    || !Instance )
  {
LABEL_35:
    sub_1B64324(Instance);
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
  if ( !saveDataMapList )
    goto LABEL_35;
  MovieFileMerge__Initialize(saveDataMapList, MovieFolder, 0LL);
  v19 = (Il2CppObject *)MovieFileMerge__PlayMP4(saveDataMapList, 0LL);
  this->fields.__2__current = v19;
  p__2__current = &this->fields.__2__current;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v19, v21, v22);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattleScriptRootComponent__StartMovie_d__14_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF646 & 1) == 0 )
  {
    sub_1B640C8(&BattleScriptRootComponent___c_TypeInfo, v1);
    byte_49FF646 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleScriptRootComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleScriptRootComponent___c_TypeInfo->static_fields->__9 = (struct BattleScriptRootComponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BattleScriptRootComponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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

  if ( (byte_49FF647 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49FF647 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  const MethodInfo *v4; // x2
  BattleScriptRootComponent_o *_4__this; // x0

  if ( (byte_49FF648 & 1) == 0 )
  {
    sub_1B640C8(&ScriptManager_TypeInfo, str);
    byte_49FF648 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  BattleScriptRootComponent__ProceedToNextTalkPhase(_4__this, 0, v4);
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
  const MethodInfo *v4; // x2
  BattleScriptRootComponent_o *_4__this; // x0

  if ( (byte_49FF649 & 1) == 0 )
  {
    sub_1B640C8(&ScriptManager_TypeInfo, str);
    byte_49FF649 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  BattleScriptRootComponent__ProceedToNextTalkPhase(_4__this, 0, v4);
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
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *Request_object; // x0

  if ( (byte_49FF64A & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_TutorialSetRequest___, is_decide);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B640C8(&Method_BattleScriptRootComponent___c__DisplayClass44_0__StartMashuPowerUpAction_b__1__, v6);
    byte_49FF64A = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     is_decide,
                                                     method);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent___c__DisplayClass44_0__StartMashuPowerUpAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v8, v9);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__1,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
  if ( !Request_object )
    sub_1B64324(0LL);
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
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  Il2CppObject *Object_object__48347676; // x21
  Il2CppObject *v19; // x0
  AssetData_o **v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  struct BattleScriptRootComponent_o *_4__this; // x8
  __int64 v24; // x1
  UnityEngine_Transform_o *v25; // x20
  __int64 v26; // x1
  UnityEngine_Transform_o *v27; // x20
  Il2CppObject *Component_object; // x0
  AssetData_o *v29; // x20
  EndrolRootComponent_o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  System_Action_o *v33; // x22

  if ( (byte_49FF64B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, data);
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_EndrolRootComponent___, v6);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&Method_BattleScriptRootComponent___c__DisplayClass48_1__PlayStaffRoll_b__1__, v9);
    sub_1B640C8(&BattleScriptRootComponent___c__DisplayClass48_1_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_5978/*"EndrolPanel"*/, v11);
    byte_49FF64B = 1;
  }
  v12 = sub_1B64314(BattleScriptRootComponent___c__DisplayClass48_1_TypeInfo, data, method);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_21;
  *(_QWORD *)(v12 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 32), (int32_t)this, v14, v15);
  *(_QWORD *)(v12 + 24) = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)data, v16, v17);
  transform = *(AssetData_o **)(v12 + 24);
  if ( !transform )
    goto LABEL_21;
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              transform,
                              (System_String_o *)StringLiteral_5978/*"EndrolPanel"*/,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v19 = UnityEngine_Object__Instantiate_object_(
          Object_object__48347676,
          (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  *(_QWORD *)(v12 + 16) = v19;
  v20 = (AssetData_o **)(v12 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)v19, v21, v22);
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
  transform = *v20;
  if ( !*v20 )
    goto LABEL_21;
  transform = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  v25 = (UnityEngine_Transform_o *)transform;
  if ( !byte_49F7111 )
  {
    transform = (AssetData_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v24);
    byte_49F7111 = 1;
  }
  if ( !v25 )
    goto LABEL_21;
  UnityEngine_Transform__set_localPosition(v25, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  transform = *v20;
  if ( !*v20 )
    goto LABEL_21;
  transform = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  v27 = (UnityEngine_Transform_o *)transform;
  if ( !byte_49F7116 )
  {
    transform = (AssetData_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v26);
    byte_49F7116 = 1;
  }
  if ( !v27
    || (UnityEngine_Transform__set_localScale(v27, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (transform = *v20) == 0LL)
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EndrolRootComponent___),
        v29 = *(AssetData_o **)(v12 + 24),
        v30 = (EndrolRootComponent_o *)Component_object,
        v33 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v31, v32),
        System_Action___ctor(
          v33,
          (Il2CppObject *)v12,
          Method_BattleScriptRootComponent___c__DisplayClass48_1__PlayStaffRoll_b__1__,
          0LL),
        !v30) )
  {
LABEL_21:
    sub_1B64324(transform);
  }
  EndrolRootComponent__Open(v30, v29, v33, 0LL);
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
  struct BattleScriptRootComponent___c__DisplayClass48_0_o *CS___8__locals1; // x8

  if ( (byte_49FF64C & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FF64C = 1;
  }
  endObj = (UnityEngine_Object_o *)this->fields.endObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69127736(endObj, 0LL);
  data = this->fields.data;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_37477464(data, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    sub_1B64324(v6);
  ActionExtensions__Call(CS___8__locals1->fields.callback, 0LL);
}