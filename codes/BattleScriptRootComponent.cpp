void __fastcall BattleScriptRootComponent___ctor(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall BattleScriptRootComponent__ChapterStart(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  BattleScriptRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w20
  System_Action_o *v11; // x21
  __int64 v12; // x1
  int32_t JumpLine; // w19

  v4 = this;
  if ( (byte_4B19614 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattleScriptRootComponent__ChapterStart_b__39_0__, v5, v6);
    this = (BattleScriptRootComponent_o *)sub_1BCA7E0(&ScriptManager_TypeInfo, v7, v8);
    byte_4B19614 = 1;
  }
  talkInfo = v4->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        v11 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3),
        System_Action___ctor(v11, (Il2CppObject *)v4, Method_BattleScriptRootComponent__ChapterStart_b__39_0__, 0LL),
        (this = (BattleScriptRootComponent_o *)v4->fields.talkInfo) == 0LL) )
  {
    sub_1BCAA3C(this, method);
  }
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)this,
               method);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v12);
  ScriptManager__PlayChapterStartNotCollection(wId, v11, JumpLine, 0LL);
}


void __fastcall BattleScriptRootComponent__ChapterStartEffect(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppClass *klass; // x8
  int32_t name; // w20
  ScriptManager_CallbackFunc_o *v11; // x21
  __int64 v12; // x1

  v4 = (Il2CppObject *)this;
  if ( (byte_4B19616 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleScriptRootComponent__ChapterStartEffect_b__41_0__, method, v2);
    sub_1BCA7E0(&ScriptManager_CallbackFunc_TypeInfo, v5, v6);
    this = (BattleScriptRootComponent_o *)sub_1BCA7E0(&ScriptManager_TypeInfo, v7, v8);
    byte_4B19616 = 1;
  }
  klass = v4[4].klass;
  if ( !klass )
    sub_1BCAA3C(this, method);
  name = (int32_t)klass->_1.name;
  v11 = (ScriptManager_CallbackFunc_o *)sub_1BCAA2C(ScriptManager_CallbackFunc_TypeInfo, method, v2, v3);
  ScriptManager_CallbackFunc___ctor(v11, v4, Method_BattleScriptRootComponent__ChapterStartEffect_b__41_0__, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v12);
  ScriptManager__PlayChapterStartEffect(name, v11, 0, 0LL);
}


void __fastcall BattleScriptRootComponent__ChapterStartEffectQuest(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppClass *klass; // x8
  int32_t name; // w20
  ScriptManager_CallbackFunc_o *v11; // x21
  __int64 v12; // x1

  v4 = (Il2CppObject *)this;
  if ( (byte_4B19617 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleScriptRootComponent__ChapterStartEffectQuest_b__42_0__, method, v2);
    sub_1BCA7E0(&ScriptManager_CallbackFunc_TypeInfo, v5, v6);
    this = (BattleScriptRootComponent_o *)sub_1BCA7E0(&ScriptManager_TypeInfo, v7, v8);
    byte_4B19617 = 1;
  }
  klass = v4[4].klass;
  if ( !klass )
    sub_1BCAA3C(this, method);
  name = (int32_t)klass->_1.name;
  v11 = (ScriptManager_CallbackFunc_o *)sub_1BCAA2C(ScriptManager_CallbackFunc_TypeInfo, method, v2, v3);
  ScriptManager_CallbackFunc___ctor(v11, v4, Method_BattleScriptRootComponent__ChapterStartEffectQuest_b__42_0__, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v12);
  ScriptManager__PlayChapterStartEffect(name, v11, 0, 0LL);
}


void __fastcall BattleScriptRootComponent__ChapterStartQuest(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  BattleScriptRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w20
  int32_t qId; // w21
  System_Action_o *v12; // x22
  __int64 v13; // x1
  int32_t JumpLine; // w19

  v4 = this;
  if ( (byte_4B19615 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattleScriptRootComponent__ChapterStartQuest_b__40_0__, v5, v6);
    this = (BattleScriptRootComponent_o *)sub_1BCA7E0(&ScriptManager_TypeInfo, v7, v8);
    byte_4B19615 = 1;
  }
  talkInfo = v4->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        qId = talkInfo->fields.qId,
        v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v4,
          Method_BattleScriptRootComponent__ChapterStartQuest_b__40_0__,
          0LL),
        (this = (BattleScriptRootComponent_o *)v4->fields.talkInfo) == 0LL) )
  {
    sub_1BCAA3C(this, method);
  }
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)this,
               method);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v13);
  ScriptManager__PlayChapterStartQuestNotCollection(wId, qId, v12, JumpLine, 0LL);
}


void __fastcall BattleScriptRootComponent__ChkCondHavingBranchQuest(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleScriptRootComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  struct BattleSetupInfo_o *bSetupInfo; // x9
  int32_t qId; // w20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v11; // x8
  CommonReleaseMaster_o *v12; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleScriptRootComponent_o *v14; // x21
  unsigned __int64 v15; // x22
  struct System_Threading_CancellationTokenSource_o *v16; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v17; // x8
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = this;
  if ( (byte_4B195FF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v4, v5);
    this = (BattleScriptRootComponent_o *)sub_1BCA7E0(
                                            &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                            v6,
                                            v7);
    byte_4B195FF = 1;
  }
  entity = 0LL;
  talkInfo = v3->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_28;
  bSetupInfo = talkInfo->fields.bSetupInfo;
  if ( !bSetupInfo || (qId = bSetupInfo->fields.originQuestId, qId <= 0) )
    qId = talkInfo->fields.qId;
  this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_28;
  this = (BattleScriptRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  v11 = v3->fields.talkInfo;
  if ( !v11 || !this )
    goto LABEL_28;
  if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &entity, qId, v11->fields.pId, 0LL) )
    return;
  this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_28;
  this = (BattleScriptRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !entity )
    goto LABEL_28;
  v12 = (CommonReleaseMaster_o *)this;
  this = (BattleScriptRootComponent_o *)QuestPhaseEntity__GetCondHavingIds(entity, 0LL);
  if ( !this )
    goto LABEL_28;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v14 = this;
  if ( (int)m_CancellationTokenSource < 1 )
    return;
  v15 = 0LL;
  while ( 1 )
  {
    if ( v15 >= (unsigned int)m_CancellationTokenSource )
      goto LABEL_29;
    if ( !v12 )
      goto LABEL_28;
    this = (BattleScriptRootComponent_o *)CommonReleaseMaster__IsOpen(
                                            v12,
                                            *((_DWORD *)&v14->fields.myFSM + v15),
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
      v16 = this->fields.m_CancellationTokenSource;
      if ( (__int64)v15 < (int)v16 )
        break;
    }
    LODWORD(m_CancellationTokenSource) = v14->fields.m_CancellationTokenSource;
    if ( (__int64)++v15 >= (int)m_CancellationTokenSource )
      return;
  }
  if ( (unsigned int)v15 >= (unsigned int)v16 )
LABEL_29:
    sub_1BCAA44(this, method);
  v17 = v3->fields.talkInfo;
  if ( !v17 )
LABEL_28:
    sub_1BCAA3C(this, method);
  v17->fields.qId = *((_DWORD *)&this->fields.myFSM + v15);
}


void __fastcall BattleScriptRootComponent__EndBeforeBattleScript(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  const MethodInfo *v11; // x1
  __int64 v12; // x2
  const MethodInfo *v13; // x3
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t talkType; // w9
  BattleSetupInfo_o *bSetupInfo; // x20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v17; // x8
  Il2CppObject *v18; // x3
  int32_t v19; // w1
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *v22; // x8
  TerminalPramsManager_c *v23; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  TerminalPramsManager_c *v31; // x0
  Il2CppObject *WarBoardData_k__BackingField; // x20
  PartyOrganizationUtility_o *p_WarBoardData_k__BackingField; // x0

  if ( (byte_4B1960B & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v8, v9);
    byte_4B1960B = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
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
            j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v11);
          bSetupInfo->fields.selectedBranchIdx = ScriptManager__GetSelectBranchIndex(0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          v17 = this->fields.talkInfo;
          if ( !v17 || !Instance )
            goto LABEL_48;
          v18 = (Il2CppObject *)v17->fields.bSetupInfo;
          v19 = 35;
        }
        else
        {
          if ( !bSetupInfo->fields.isScriptBeforeWarBoard )
          {
            BattleScriptRootComponent__GoForBattle(bSetupInfo, v11);
            return;
          }
          if ( !ScriptManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v11);
          bSetupInfo->fields.selectedBranchIdx = ScriptManager__GetSelectBranchIndex(0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v24);
          if ( !byte_4B19683 )
          {
            sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v24, v25);
            byte_4B19683 = 1;
          }
          v31 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v24);
            v31 = TerminalPramsManager_TypeInfo;
          }
          WarBoardData_k__BackingField = (Il2CppObject *)v31->static_fields->_WarBoardData_k__BackingField;
          if ( !byte_4B133A5 )
          {
            sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v24, v25);
            v31 = TerminalPramsManager_TypeInfo;
            byte_4B133A5 = 1;
          }
          if ( !v31->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v31, v24);
            v31 = TerminalPramsManager_TypeInfo;
          }
          p_WarBoardData_k__BackingField = (PartyOrganizationUtility_o *)&v31->static_fields->_WarBoardData_k__BackingField;
          p_WarBoardData_k__BackingField->klass = 0LL;
          sub_1BCA784(p_WarBoardData_k__BackingField, 0LL, v25, v26, v27, v28, v29, v30);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !Instance )
            goto LABEL_48;
          v19 = 80;
          v18 = WarBoardData_k__BackingField;
        }
      }
      else
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
        if ( !byte_4B11139 )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v11, v12);
          byte_4B11139 = 1;
        }
        v23 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
          v23 = TerminalPramsManager_TypeInfo;
        }
        v23->static_fields->_IsAutoResume_k__BackingField = 1;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !Instance )
          goto LABEL_48;
        v19 = 34;
        v18 = 0LL;
      }
      AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, v19, 1, v18, 0, 0LL);
      return;
    case 5:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( Instance )
      {
        Instance = (Il2CppObject *)ScriptManager__IsBadEndRoute((ScriptManager_o *)Instance, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          BattleScriptRootComponent__RequestBattleSecnarioForNoneBattleQuest(this, 0, v20);
          return;
        }
        talkInfo = this->fields.talkInfo;
        if ( talkInfo )
          goto LABEL_20;
      }
LABEL_48:
      sub_1BCAA3C(Instance, v11);
    case 6:
LABEL_20:
      BattleScriptRootComponent__SavePlayedNotMeetsScript(
        (BattleScriptRootComponent_o *)Instance,
        talkInfo->fields.qId,
        talkInfo->fields.pId,
        v13);
      v22 = this->fields.talkInfo;
      if ( v22 )
      {
        v22->fields.talkPhase = 10;
        BattleScriptRootComponent__ProcessBattleScripts(this, 10, v21);
        return;
      }
      goto LABEL_48;
  }
}


void __fastcall BattleScriptRootComponent__EndChapterStart(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  AvalonSceneManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t qId; // w21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v13; // x8
  int32_t pId; // w19
  TerminalPramsManager_c *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  TerminalPramsManager_c *v18; // x0

  if ( (byte_4B19618 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v6, v7);
    byte_4B19618 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_31;
  qId = talkInfo->fields.qId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9);
  if ( !byte_4B12DC7 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v9, v10);
    byte_4B12DC7 = 1;
  }
  Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  HIDWORD(Instance[1].fields.m_listUnloadScenes->fields._items) = qId;
  v13 = this->fields.talkInfo;
  if ( !v13 )
    goto LABEL_31;
  pId = v13->fields.pId;
  if ( !LODWORD(Instance[2].fields.targetRoot) )
    j_il2cpp_runtime_class_init_0(Instance, v9);
  if ( !byte_4B12DCB )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v9, v10);
    byte_4B12DCB = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_PhaseCnt_k__BackingField = (pId - 1) & ~((pId - 1) >> 31);
  TerminalPramsManager__SaveQuestInfo_SaveData(0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( AvalonSceneManager__IsStackScene(Instance, 0LL) )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      AvalonSceneManager__popSceneRefresh(Instance, 2, 0LL, 0LL);
      return;
    }
LABEL_31:
    sub_1BCAA3C(Instance, v9);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
  if ( !byte_4B11139 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v16, v17);
    byte_4B11139 = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  BattleScriptRootComponent_TalkScriptInfo_o *klass; // x21
  __int64 v46; // x1
  Il2CppObject *v47; // x21
  __int64 v48; // x1
  System_Object_array *v49; // x21
  Il2CppObject *v50; // x0
  BattleResultComponent_resultData_o *myFSM; // x20
  System_Collections_Generic_IEnumerable_TSource__o *freeShopIds; // x0
  __int64 v53; // x2
  __int64 v54; // x3
  BattleScriptRootComponent___c_c *v55; // x8
  BattleScriptRootComponent_o *v56; // x21
  System_Converter_TInput__TOutput__o *_9__37_1; // x22
  Il2CppObject *v58; // x23
  struct BattleScriptRootComponent___c_StaticFields *static_fields; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_String_array *v66; // x0
  System_String_o *v67; // x0
  System_Collections_Generic_IEnumerable_TSource__o *returnRarePriShopIds; // x0
  __int64 v69; // x2
  __int64 v70; // x3
  BattleScriptRootComponent___c_c *v71; // x8
  BattleScriptRootComponent_o *v72; // x20
  System_Converter_TInput__TOutput__o *_9__37_2; // x21
  Il2CppObject *v74; // x22
  struct BattleScriptRootComponent___c_StaticFields *v75; // x0
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  System_String_array *v82; // x0
  System_String_o *v83; // x0
  __int64 v84; // x2
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v91; // x0
  int32_t WarId_k__BackingField; // w21
  System_Action_o *v93; // x22
  System_Collections_IEnumerator_o *v94; // x1
  Il2CppClass *v95; // x8

  v4 = (Il2CppObject *)this;
  if ( (byte_4B19612 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, jsonstr, method);
    sub_1BCA7E0(&Method_BattleScriptRootComponent__EndRequestBattleScenario_b__37_0__, v5, v6);
    sub_1BCA7E0(&System_Converter_int__string__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_int___, v11, v12);
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___, v13, v14);
    sub_1BCA7E0(&JsonManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ConvertAll_string___, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v19, v20);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v25, v26);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__37_1__, v29, v30);
    sub_1BCA7E0(&Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__37_2__, v31, v32);
    sub_1BCA7E0(&BattleScriptRootComponent___c_TypeInfo, v33, v34);
    sub_1BCA7E0(&StringLiteral_19829/*"freeShopIds"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_23165/*"returnRarePriShopIds"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v41, v42);
    this = (BattleScriptRootComponent_o *)sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v43, v44);
    byte_4B19612 = 1;
  }
  klass = (BattleScriptRootComponent_TalkScriptInfo_o *)v4[4].klass;
  if ( !klass )
    goto LABEL_53;
  klass->fields.talkPhase = 6;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, jsonstr);
  ScriptManager__SaveTalkResumeInfo(klass, 0LL);
  ScriptManager__ClearSelectRouteArray(0LL);
  v47 = (Il2CppObject *)System_String__Concat_62412480(
                          (System_String_o *)StringLiteral_15978/*"["*/,
                          jsonstr,
                          (System_String_o *)StringLiteral_16236/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v46);
  v49 = JsonManager__DeserializeArray_object_(
          v47,
          (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v48);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v49, 1, 0LL);
  v50 = (Il2CppObject *)System_String__Concat_62412480(
                          (System_String_o *)StringLiteral_15978/*"["*/,
                          jsonstr,
                          (System_String_o *)StringLiteral_16236/*"]"*/,
                          0LL);
  this = (BattleScriptRootComponent_o *)JsonManager__DeserializeArray_object_(
                                          v50,
                                          (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  if ( !this )
    goto LABEL_53;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    sub_1BCAA44(this, jsonstr);
  myFSM = (BattleResultComponent_resultData_o *)this->fields.myFSM;
  TerminalPramsManager__SetBattleResultCampaignBonus(myFSM, 0LL);
  if ( !myFSM )
    goto LABEL_53;
  freeShopIds = (System_Collections_Generic_IEnumerable_TSource__o *)myFSM->fields.freeShopIds;
  if ( freeShopIds )
  {
    this = (BattleScriptRootComponent_o *)System_Linq_Enumerable__ToList_int_(
                                            freeShopIds,
                                            (const MethodInfo_2F4F4F8 *)Method_System_Linq_Enumerable_ToList_int___);
    v55 = BattleScriptRootComponent___c_TypeInfo;
    v56 = this;
    if ( !BattleScriptRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleScriptRootComponent___c_TypeInfo, jsonstr);
      v55 = BattleScriptRootComponent___c_TypeInfo;
    }
    _9__37_1 = (System_Converter_TInput__TOutput__o *)v55->static_fields->__9__37_1;
    if ( !_9__37_1 )
    {
      if ( !v55->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v55, jsonstr);
        v55 = BattleScriptRootComponent___c_TypeInfo;
      }
      v58 = (Il2CppObject *)v55->static_fields->__9;
      _9__37_1 = (System_Converter_TInput__TOutput__o *)sub_1BCAA2C(
                                                          System_Converter_int__string__TypeInfo,
                                                          jsonstr,
                                                          v53,
                                                          v54);
      System_Converter_int__object____ctor(
        _9__37_1,
        v58,
        Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__37_1__,
        0LL);
      static_fields = BattleScriptRootComponent___c_TypeInfo->static_fields;
      static_fields->__9__37_1 = (struct System_Converter_int__string__o *)_9__37_1;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__37_1,
        (int64_t)_9__37_1,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65);
    }
    if ( !v56 )
      goto LABEL_53;
    this = (BattleScriptRootComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                            (System_Collections_Generic_List_int__o *)v56,
                                            (System_Converter_T__TOutput__o *)_9__37_1,
                                            (const MethodInfo_2E42A40 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_53;
    v66 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
    v67 = System_String__Join((System_String_o *)StringLiteral_863/*","*/, v66, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_19829/*"freeShopIds"*/, v67, 0LL);
  }
  returnRarePriShopIds = (System_Collections_Generic_IEnumerable_TSource__o *)myFSM->fields.returnRarePriShopIds;
  if ( returnRarePriShopIds )
  {
    this = (BattleScriptRootComponent_o *)System_Linq_Enumerable__ToList_int_(
                                            returnRarePriShopIds,
                                            (const MethodInfo_2F4F4F8 *)Method_System_Linq_Enumerable_ToList_int___);
    v71 = BattleScriptRootComponent___c_TypeInfo;
    v72 = this;
    if ( !BattleScriptRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleScriptRootComponent___c_TypeInfo, jsonstr);
      v71 = BattleScriptRootComponent___c_TypeInfo;
    }
    _9__37_2 = (System_Converter_TInput__TOutput__o *)v71->static_fields->__9__37_2;
    if ( !_9__37_2 )
    {
      if ( !v71->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v71, jsonstr);
        v71 = BattleScriptRootComponent___c_TypeInfo;
      }
      v74 = (Il2CppObject *)v71->static_fields->__9;
      _9__37_2 = (System_Converter_TInput__TOutput__o *)sub_1BCAA2C(
                                                          System_Converter_int__string__TypeInfo,
                                                          jsonstr,
                                                          v69,
                                                          v70);
      System_Converter_int__object____ctor(
        _9__37_2,
        v74,
        Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__37_2__,
        0LL);
      v75 = BattleScriptRootComponent___c_TypeInfo->static_fields;
      v75->__9__37_2 = (struct System_Converter_int__string__o *)_9__37_2;
      sub_1BCA784((PartyOrganizationUtility_o *)&v75->__9__37_2, (int64_t)_9__37_2, v76, v77, v78, v79, v80, v81);
    }
    if ( !v72 )
      goto LABEL_53;
    this = (BattleScriptRootComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                            (System_Collections_Generic_List_int__o *)v72,
                                            (System_Converter_T__TOutput__o *)_9__37_2,
                                            (const MethodInfo_2E42A40 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_53;
    v82 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
    v83 = System_String__Join((System_String_o *)StringLiteral_863/*","*/, v82, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_23165/*"returnRarePriShopIds"*/, v83, 0LL);
  }
  UnityEngine_PlayerPrefs__Save(0LL);
  this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_53;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, jsonstr);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, jsonstr, v84);
    byte_4B12DC3 = 1;
  }
  this = (BattleScriptRootComponent_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, jsonstr);
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
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v87);
      if ( !byte_4B12DC6 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v87, v88);
        byte_4B12DC6 = 1;
      }
      v91 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v87);
        v91 = TerminalPramsManager_TypeInfo;
      }
      WarId_k__BackingField = v91->static_fields->_WarId_k__BackingField;
      v93 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v87, v88, v89);
      System_Action___ctor(v93, v4, Method_BattleScriptRootComponent__EndRequestBattleScenario_b__37_0__, 0LL);
      if ( Instance )
      {
        v94 = QuestTree__mfBaseTreeUpdateWithOpenCheck((QuestTree_o *)Instance, WarId_k__BackingField, v93, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)v4, v94, 0LL);
        return;
      }
LABEL_53:
      sub_1BCAA3C(this, jsonstr);
    }
  }
  v95 = v4[4].klass;
  if ( !v95 )
    goto LABEL_53;
  BattleScriptRootComponent__ProcessBattleScripts(
    (BattleScriptRootComponent_o *)v4,
    (int32_t)v95->_1.byval_arg.data,
    v86);
}


void __fastcall BattleScriptRootComponent__EndRequestBattleSetup(System_String_o *result, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  void *monitor; // x21
  int32_t v20; // w19
  int32_t klass_high; // w20
  const MethodInfo *v22; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v3 = result;
  if ( (byte_4B1960D & 1) == 0 )
  {
    sub_1BCA7E0(&BattleData_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BattleMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__, v8, v9);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v14, v15);
    result = (System_String_o *)sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v16, v17);
    byte_4B1960D = 1;
  }
  entity = 0LL;
  if ( !v3 )
    goto LABEL_20;
  if ( System_String__Equals_62409536(v3, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    result = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( result )
    {
      CommonUI__SetLoadMode((CommonUI_o *)result, 0, 0LL);
      result = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( result )
      {
        AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)result, 34, 1, 0LL, 0, 0LL);
        return;
      }
    }
LABEL_20:
    sub_1BCAA3C(result, method);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
  result = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !result )
    goto LABEL_20;
  result = (System_String_o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                &entity,
                                (const MethodInfo_31B30C8 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_20;
    monitor = entity[1].monitor;
    klass_high = HIDWORD(entity[2].klass);
    v20 = (int32_t)entity[2].monitor;
    if ( !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, method);
    BattleData__setResumeBattleId((int64_t)monitor, klass_high, v20, 0LL);
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  ScriptManager__ClearSelectRouteArray(0LL);
  BattleScriptRootComponent__StartBattle(v22);
}


void __fastcall BattleScriptRootComponent__GoForBattle(BattleSetupInfo_o *battleSetupInfo, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_4B1960F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleScriptRootComponent_EndRequestBattleSetup__, method, v2);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v4, v5);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v6, v7);
    byte_4B1960F = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9, v10);
  NetworkManager_ResultCallbackFunc___ctor(v11, 0LL, Method_BattleScriptRootComponent_EndRequestBattleSetup__, 0LL);
  BattleScriptRootComponent__RequestBattleSetup(battleSetupInfo, v11, v12);
}


void __fastcall BattleScriptRootComponent__LoadPlayScenarioWithMap(
        BattleScriptRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 v14; // x1
  __int64 v15; // x2
  TerminalPramsManager_c *v16; // x0
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B19600 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, callback, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v9, v10);
    byte_4B19600 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0LL) )
    goto LABEL_11;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_36:
    sub_1BCAA3C(Instance, v12);
  AvalonSceneManager__transitionScene_38996320((AvalonSceneManager_o *)Instance, 34, callback, 1, 0LL, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14);
  if ( !byte_4B12DC9 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v14, v15);
    byte_4B12DC9 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_DispState_k__BackingField = 2;
  if ( !byte_4B11139 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v14, v15);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4B11139 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16, v14);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_4B12057 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v14, v15);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4B12057 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16, v14);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_IsDispOnly_k__BackingField = 1;
  if ( !byte_4B19682 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v14, v15);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4B19682 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16, v14);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_IsScriptDisp_k__BackingField = 1;
  if ( !byte_4B137F5 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v14, v15);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4B137F5 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16, v14);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_IsPlayScriptWithMap_k__BackingField = 1;
}


void __fastcall BattleScriptRootComponent__OnDestroy(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B195F9 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptManager_TypeInfo, method, v2);
    byte_4B195F9 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
  ScriptManager__ReleaseBattleDemo(0LL);
}


void __fastcall BattleScriptRootComponent__PlayStaffRoll(
        BattleScriptRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  AssetLoader_LoadEndDataHandler_o *v35; // x19
  __int64 v36; // x1

  if ( (byte_4B1961D & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, callback, method);
    sub_1BCA7E0(&CommonUI_TypeInfo, v6, v7);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_BattleScriptRootComponent___c__DisplayClass48_0__PlayStaffRoll_b__0__, v10, v11);
    sub_1BCA7E0(&BattleScriptRootComponent___c__DisplayClass48_0_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_6119/*"Endroll"*/, v14, v15);
    byte_4B1961D = 1;
  }
  v16 = sub_1BCAA2C(BattleScriptRootComponent___c__DisplayClass48_0_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    sub_1BCAA3C(v17, v18);
  *(_QWORD *)(v16 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 24) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 24), (int64_t)callback, v25, v26, v27, v28, v29, v30);
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, v31);
  CommonUI__SetForceObi_16_9(1, 0LL);
  v35 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v32, v33, v34);
  AssetLoader_LoadEndDataHandler___ctor(
    v35,
    (Il2CppObject *)v16,
    Method_BattleScriptRootComponent___c__DisplayClass48_0__PlayStaffRoll_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v36);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6119/*"Endroll"*/, v35, 1, 0LL);
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
    sub_1BCAA3C(talkInfo, isExit);
  }
  BattleScriptRootComponent__ProcessBattleScripts(this, v6->fields.talkPhase, v5);
}


void __fastcall BattleScriptRootComponent__ProceedToNextTalkPhase_45157592(
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x21
  const MethodInfo *v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  Il2CppObject *Instance; // x0
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  int32_t FadeoutKind; // w20
  __int64 v27; // x2
  __int64 v28; // x3
  bool v29; // zf
  CommonUI_o *v30; // x20
  const MethodInfo *v31; // x1
  System_Action_o *v32; // x0
  __int64 *v33; // x8
  __int64 v34; // x2
  __int64 v35; // x3
  struct BattleScriptRootComponent_TalkScriptInfo_o *v36; // x8
  System_Action_o *v37; // x20
  const MethodInfo *v38; // x2
  AvalonSceneManager_c *v39; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v41; // x21

  if ( (byte_4B195FE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&phaseType, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_BattleScriptRootComponent_StartScriptFinishBattleAfterDemo__, v7, v8);
    sub_1BCA7E0(&Method_BattleScriptRootComponent_StartScriptFinishBattle__, v9, v10);
    sub_1BCA7E0(&Method_BattleScriptRootComponent__ProcessBattleScripts_b__15_0__, v11, v12);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v17, v18);
    byte_4B195FE = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, *(_QWORD *)&phaseType);
  ScriptManager__SaveTalkResumeInfo(talkInfo, 0LL);
  switch ( phaseType )
  {
    case 0:
    case 10:
      BattleScriptRootComponent__TransitionTerminal(this, v20);
      return;
    case 1:
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !Instance )
        goto LABEL_31;
      if ( !clsQuestCheck__isPlayQuestStartAction((clsQuestCheck_o *)Instance, 0LL) )
      {
        BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v25);
        return;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_31;
      FadeoutKind = CommonUI__maskFadGetFadeoutKind((CommonUI_o *)Instance, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v29 = FadeoutKind == 1;
      v30 = (CommonUI_o *)Instance;
      if ( v29 )
      {
        if ( Instance )
        {
          CommonUI__maskFadeout((CommonUI_o *)Instance, 1, 0.0, 0LL, 0LL);
          BattleScriptRootComponent__StartBattleQuestStart(this, v31);
          return;
        }
LABEL_31:
        sub_1BCAA3C(Instance, v24);
      }
      v39 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v24);
        v39 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v39->static_fields->DEFAULT_FADE_TIME;
      v41 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v27, v28);
      System_Action___ctor(
        v41,
        (Il2CppObject *)this,
        Method_BattleScriptRootComponent__ProcessBattleScripts_b__15_0__,
        0LL);
      if ( !v30 )
        goto LABEL_31;
      CommonUI__maskFadeout(v30, 1, DEFAULT_FADE_TIME, v41, 0LL);
      return;
    case 2:
      BattleScriptRootComponent__StartScriptBefeoreBattleDemo(this, v20);
      return;
    case 3:
      BattleScriptRootComponent__StartDemoBeforeBattle(this, v20);
      return;
    case 4:
      BattleScriptRootComponent__StartScriptBeforeBattleAfterDemo(this, v20);
      return;
    case 5:
      BattleScriptRootComponent__EndBeforeBattleScript(this, v20);
      return;
    case 6:
      BattleScriptRootComponent__ChkCondHavingBranchQuest(this, v20);
      v36 = this->fields.talkInfo;
      if ( !v36 )
        goto LABEL_31;
      if ( v36->fields.talkType == 5 )
      {
        BattleScriptRootComponent__StartScriptNoBattleAfter(this, v24);
      }
      else
      {
        v32 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v34, v35);
        v33 = &Method_BattleScriptRootComponent_StartScriptFinishBattle__;
LABEL_26:
        v37 = v32;
        System_Action___ctor(v32, (Il2CppObject *)this, *v33, 0LL);
        BattleScriptRootComponent__LoadPlayScenarioWithMap(this, v37, v38);
      }
      return;
    case 7:
      BattleScriptRootComponent__StartDemoFinishBattle(this, v20);
      return;
    case 8:
      v32 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
      v33 = &Method_BattleScriptRootComponent_StartScriptFinishBattleAfterDemo__;
      goto LABEL_26;
    case 9:
      BattleScriptRootComponent__StartSecondDemoFinishBattle(this, v20);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  DataManager_o *Instance; // x0
  __int64 v27; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  const MethodInfo *v29; // x1
  __int64 v30; // x2
  Il2CppObject *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  Il2CppObject *Master_object; // x20
  __int64 v35; // x2
  __int64 v36; // x3
  QuestEntity_o *v37; // x20
  NetworkManager_ResultCallbackFunc_o *v38; // x20
  __int64 v39; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *v40; // x8
  BattleScenarioRequest_o *v41; // x19
  int32_t pId; // w20
  int32_t qId; // w21
  QuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B19611 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleScriptRootComponent_EndRequestBattleScenario__, isExit, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_LoginQuestMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_BattleScenarioRequest___, v10, v11);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v22, v23);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v24, v25);
    byte_4B19611 = 1;
  }
  entity = 0LL;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, isExit);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_LoginQuestMaster___);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo || !Instance )
    goto LABEL_43;
  if ( LoginQuestMaster__GetEntityByQuestId((LoginQuestMaster_o *)Instance, talkInfo->fields.qId, 0LL) )
  {
    BattleScriptRootComponent__TransitionTerminal(this, v29);
    return;
  }
  v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v27);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v27, v30);
    byte_4B12DC3 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v27);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v31 )
    goto LABEL_43;
  CommonUI__CheckChangeOtherConnectMarkFromQuestClear(
    (CommonUI_o *)v31,
    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 596LL),
    0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v32);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v27, v33);
    byte_4B12DC3 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v27);
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
  v37 = entity;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v27);
  if ( !byte_4B12DCE )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v27, v35);
    byte_4B12DCE = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v27);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v37 )
LABEL_43:
    sub_1BCAA3C(Instance, v27);
  if ( QuestEntity__HasFlag_40199512(
         v37,
         0x8000LL,
         *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL) + 1,
         0LL) )
  {
    Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  }
LABEL_35:
  v38 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v27, v35, v36);
  NetworkManager_ResultCallbackFunc___ctor(
    v38,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent_EndRequestBattleScenario__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v39);
  Instance = (DataManager_o *)NetworkManager__getRequest_object_(
                                v38,
                                (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  v40 = this->fields.talkInfo;
  if ( !v40 )
    goto LABEL_43;
  v41 = (BattleScenarioRequest_o *)Instance;
  qId = v40->fields.qId;
  pId = v40->fields.pId;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v27);
  Instance = (DataManager_o *)ScriptManager__GetSelectRouteArray(0LL);
  if ( !v41 )
    goto LABEL_43;
  BattleScenarioRequest__beginRequest(v41, qId, pId, (System_Int32_array *)Instance, 0LL);
}


void __fastcall BattleScriptRootComponent__RequestBattleSetup(
        BattleSetupInfo_o *battleSetupInfo,
        NetworkManager_ResultCallbackFunc_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  CommonUI_o *routeSelect; // x0
  __int64 v22; // x1
  int32_t questPhase; // w21
  int32_t questId; // w22
  __int64 v25; // x1
  __int64 v26; // x1
  BalanceConfig_c *v27; // x0
  float BgmFadeOutTimeBeforeBattle; // s8
  __int64 v29; // x1
  Il2CppObject *Request_object; // x20
  int32_t SelectBranchIndex; // w0
  int32_t v32; // w9
  int32_t v33; // w8
  int64_t deckId; // x23
  int64_t followerId; // x24
  int32_t followerClassId; // w25
  int32_t itemId; // w26
  int32_t boostId; // w27
  int32_t enemySelect; // w28
  int32_t v40; // w0
  int64_t userEquipId; // x21
  int32_t followerType; // w22
  int32_t questSelect; // w29
  int32_t v44; // [xsp+78h] [xbp-68h]
  int32_t v45; // [xsp+7Ch] [xbp-64h]

  if ( (byte_4B19610 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, callbackFunc, method);
    sub_1BCA7E0(&BgmManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_BattleSetupRequest___, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18);
    sub_1BCA7E0(&SoundManager_TypeInfo, v19, v20);
    byte_4B19610 = 1;
  }
  routeSelect = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !routeSelect )
    goto LABEL_23;
  CommonUI__SetLoadMode(routeSelect, 2, 0LL);
  if ( !battleSetupInfo )
    goto LABEL_23;
  questId = battleSetupInfo->fields.questId;
  questPhase = battleSetupInfo->fields.questPhase;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22);
  routeSelect = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !routeSelect )
    goto LABEL_23;
  routeSelect = (CommonUI_o *)QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)routeSelect, questId, questPhase, 0LL);
  if ( !routeSelect )
    goto LABEL_23;
  if ( QuestPhaseEntity__IsFadeOutMainBgmBeforeBattle((QuestPhaseEntity_o *)routeSelect, 0LL) )
  {
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v25);
    BgmManager__Enable_KeepSubBgm(1, 0LL);
    v27 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v26);
      v27 = BalanceConfig_TypeInfo;
    }
    BgmFadeOutTimeBeforeBattle = v27->static_fields->BgmFadeOutTimeBeforeBattle;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v26);
    SoundManager__fadeoutBgm(BgmFadeOutTimeBeforeBattle, 0LL);
    BgmManager__Enable_KeepSubBgm(0, 0LL);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v25);
  Request_object = NetworkManager__getRequest_object_(
                     callbackFunc,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_BattleSetupRequest___);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v29);
  SelectBranchIndex = ScriptManager__GetSelectBranchIndex(0LL);
  v32 = battleSetupInfo->fields.questId;
  v33 = battleSetupInfo->fields.questPhase;
  deckId = battleSetupInfo->fields.deckId;
  followerId = battleSetupInfo->fields.followerId;
  followerClassId = battleSetupInfo->fields.followerClassId;
  itemId = battleSetupInfo->fields.itemId;
  boostId = battleSetupInfo->fields.boostId;
  enemySelect = SelectBranchIndex;
  battleSetupInfo->fields.selectedBranchIdx = SelectBranchIndex;
  v44 = v33;
  v45 = v32;
  v40 = BattleSetupInfo__TargetQuestBranchIdx(battleSetupInfo, 0LL);
  userEquipId = battleSetupInfo->fields.userEquipId;
  followerType = battleSetupInfo->fields.followerType;
  questSelect = v40;
  routeSelect = (CommonUI_o *)ScriptManager__GetSelectRouteArray(0LL);
  if ( !Request_object )
LABEL_23:
    sub_1BCAA3C(routeSelect, v22);
  BattleSetupRequest__beginRequest(
    (BattleSetupRequest_o *)Request_object,
    v45,
    v44,
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Master_object; // x0
  __int64 v15; // x1
  QuestPhaseEntity_o *Entity; // x0
  __int64 v17; // x1
  System_String_o *ScriptName_NotMeetsCond; // x0
  System_String_o *v19; // x0
  int32_t ScriptIntParam; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1960C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseMaster___, *(_QWORD *)&questId, *(_QWORD *)&phase);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_17223/*"badEndId"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_22385/*"notMeets"*/, v12, v13);
    byte_4B1960C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v15);
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Master_object, questId, phase, 0LL);
  if ( Entity )
  {
    ScriptIntParam = QuestPhaseEntity__getScriptIntParam(Entity, (System_String_o *)StringLiteral_17223/*"badEndId"*/, 0, 0LL);
    if ( ScriptIntParam )
    {
      ScriptName_NotMeetsCond = System_Int32__ToString((int32_t)&ScriptIntParam, 0LL);
    }
    else
    {
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v17);
      ScriptName_NotMeetsCond = ScriptManager__GetScriptName_NotMeetsCond(questId, phase, 0LL);
    }
    v19 = System_String__Concat_62401220((System_String_o *)StringLiteral_22385/*"notMeets"*/, ScriptName_NotMeetsCond, 0LL);
    UnityEngine_PlayerPrefs__SetInt(v19, 1, 0LL);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x20
  System_Int32_array *Request_object; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  __int64 v28; // x3
  NetworkManager_ResultCallbackFunc_o *v29; // x21
  __int64 v30; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleRouteSelectRequest_o *v32; // x19
  int32_t pId; // w20
  int32_t qId; // w21

  if ( (byte_4B19605 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___, isExit, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v10, v11);
    sub_1BCA7E0(
      &Method_BattleScriptRootComponent___c__DisplayClass24_0__ScriptFinishBattleAfterDemoEnd_b__0__,
      v12,
      v13);
    sub_1BCA7E0(&BattleScriptRootComponent___c__DisplayClass24_0_TypeInfo, v14, v15);
    byte_4B19605 = 1;
  }
  v16 = sub_1BCAA2C(BattleScriptRootComponent___c__DisplayClass24_0_TypeInfo, isExit, method, v3);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_15;
  *(_QWORD *)(v16 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)this, v19, v20, v21, v22, v23, v24);
  *(_BYTE *)(v16 + 24) = isExit;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v25);
  if ( ScriptManager__GetSelectRouteArray(0LL) )
  {
    v29 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v26, v27, v28);
    NetworkManager_ResultCallbackFunc___ctor(
      v29,
      (Il2CppObject *)v16,
      Method_BattleScriptRootComponent___c__DisplayClass24_0__ScriptFinishBattleAfterDemoEnd_b__0__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v30);
    Request_object = (System_Int32_array *)NetworkManager__getRequest_object_(
                                             v29,
                                             (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      v32 = (BattleRouteSelectRequest_o *)Request_object;
      qId = talkInfo->fields.qId;
      pId = talkInfo->fields.pId;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v18);
      Request_object = ScriptManager__GetSelectRouteArray(0LL);
      if ( v32 )
      {
        BattleRouteSelectRequest__beginRequest(v32, qId, pId, Request_object, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1BCAA3C(Request_object, v18);
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v27);
}


bool __fastcall BattleScriptRootComponent__StartBattle(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int v11; // w20

  if ( (byte_4B1960E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AvalonSceneManager_UnloadScene_FollowerRootComponent___, v1, v2);
    sub_1BCA7E0(&Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v7, v8);
    byte_4B1960E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v11 = BYTE4(Instance[9].klass);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  if ( !v11 )
  {
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 10, 1, 0LL, 1, 0LL);
    return 1;
  }
  AvalonSceneManager__UnloadScene_object_(
    (AvalonSceneManager_o *)Instance,
    (const MethodInfo_2EFC72C *)Method_AvalonSceneManager_UnloadScene_FollowerRootComponent___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (AvalonSceneManager__UnloadScene_object_(
          (AvalonSceneManager_o *)Instance,
          (const MethodInfo_2EFC72C *)Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_11:
    sub_1BCAA3C(Instance, v10);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 10, 1, 0LL, 0LL);
  return 1;
}


void __fastcall BattleScriptRootComponent__StartBattleQuestStart(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4B19607 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattleScriptRootComponent_ProceedToNextTalkPhase__, v4, v5);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v6, v7);
    byte_4B19607 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_BattleScriptRootComponent_ProceedToNextTalkPhase__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v13, v14);
  clsQuestCheck__PlayQuestStartAction((clsQuestCheck_o *)Instance, v12, 0LL);
}


void __fastcall BattleScriptRootComponent__StartDemoBeforeBattle(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppClass *klass; // x8
  int32_t name_high; // w20
  int32_t namespaze; // w21
  System_Action_object__o *v12; // x22
  __int64 v13; // x1

  v4 = (Il2CppObject *)this;
  if ( (byte_4B19609 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_string__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattleScriptRootComponent__StartDemoBeforeBattle_b__28_0__, v5, v6);
    this = (BattleScriptRootComponent_o *)sub_1BCA7E0(&ScriptManager_TypeInfo, v7, v8);
    byte_4B19609 = 1;
  }
  klass = v4[4].klass;
  if ( !klass )
    sub_1BCAA3C(this, method);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v12 = (System_Action_object__o *)sub_1BCAA2C(System_Action_string__TypeInfo, method, v2, v3);
  System_Action_object____ctor(v12, v4, Method_BattleScriptRootComponent__StartDemoBeforeBattle_b__28_0__, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v13);
  ScriptManager__LoadBattleStartGameDemo(name_high, namespaze, 0, (System_Action_string__o *)v12, 0, 0LL);
}


void __fastcall BattleScriptRootComponent__StartDemoFinishBattle(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x0
  int32_t qId; // w20
  int32_t pId; // w21
  System_Action_object__o *v12; // x22
  __int64 v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_4B19603 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_string__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattleScriptRootComponent__StartDemoFinishBattle_b__22_0__, v5, v6);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v7, v8);
    byte_4B19603 = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_1BCAA3C(0LL, method);
  qId = talkInfo->fields.qId;
  if ( qId < 1 )
  {
    BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(talkInfo, method);
    BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v14);
  }
  else
  {
    pId = talkInfo->fields.pId;
    v12 = (System_Action_object__o *)sub_1BCAA2C(System_Action_string__TypeInfo, method, v2, v3);
    System_Action_object____ctor(
      v12,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent__StartDemoFinishBattle_b__22_0__,
      0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v13);
    ScriptManager__LoadBattleEndGameDemo(qId, pId, 1, (System_Action_string__o *)v12, 0, 0LL);
  }
}


void __fastcall BattleScriptRootComponent__StartMashuPowerUpAction(
        BattleScriptRootComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  TerminalPramsManager_c *v28; // x0
  int32_t WarId_k__BackingField; // w22
  __int64 v30; // x1
  Il2CppObject *Instance; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  CombineResultEffectComponent_ClickDelegate_o *v35; // x21

  if ( (byte_4B19619 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineResultEffectComponent_ClickDelegate_TypeInfo, end_act, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_BattleScriptRootComponent___c__DisplayClass44_0__StartMashuPowerUpAction_b__0__, v11, v12);
    sub_1BCA7E0(&BattleScriptRootComponent___c__DisplayClass44_0_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_8636/*"MASHU_CHANGE_WAR_ID"*/, v15, v16);
    byte_4B19619 = 1;
  }
  v17 = sub_1BCAA2C(BattleScriptRootComponent___c__DisplayClass44_0_TypeInfo, end_act, method, v3);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_17;
  *(_QWORD *)(v17 + 16) = end_act;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)end_act, v20, v21, v22, v23, v24, v25);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v26);
  if ( !byte_4B12DC6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v26, v27);
    byte_4B12DC6 = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v26);
    v28 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v28->static_fields->_WarId_k__BackingField;
  if ( WarId_k__BackingField != ConstantMaster__getValue((System_String_o *)StringLiteral_8636/*"MASHU_CHANGE_WAR_ID"*/, 0LL) )
    goto LABEL_14;
  *(_DWORD *)(v17 + 24) = 115;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v30);
  if ( TutorialFlag__Get_38402052(115, 0LL) )
  {
LABEL_14:
    ActionExtensions__Call(*(System_Action_o **)(v17 + 16), 0LL);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v35 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1BCAA2C(
                                                          CombineResultEffectComponent_ClickDelegate_TypeInfo,
                                                          v32,
                                                          v33,
                                                          v34);
  CombineResultEffectComponent_ClickDelegate___ctor(
    v35,
    (Il2CppObject *)v17,
    Method_BattleScriptRootComponent___c__DisplayClass44_0__StartMashuPowerUpAction_b__0__,
    0LL);
  if ( !Instance )
LABEL_17:
    sub_1BCAA3C(v18, v19);
  CommonUI__OpenPowerUp((CommonUI_o *)Instance, v35, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleScriptRootComponent__StartMovie(
        BattleScriptRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B195FD & 1) == 0 )
  {
    sub_1BCA7E0(&BattleScriptRootComponent__StartMovie_d__14_TypeInfo, callback, method);
    byte_4B195FD = 1;
  }
  v6 = sub_1BCAA2C(BattleScriptRootComponent__StartMovie_d__14_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)callback, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleScriptRootComponent__StartScript(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppClass *klass; // x8
  int namespaze_high; // w8
  Il2CppClass *v16; // x8
  const MethodInfo *v17; // x2
  __int64 v18; // x3
  System_Action_o *v19; // x20
  const MethodInfo *v20; // x2
  System_Collections_IEnumerator_o *started; // x1
  __int64 v22; // x1
  BattleScriptRootComponent_TalkScriptInfo_o *v23; // x20
  Il2CppClass *v24; // x8
  int namespaze; // w8
  int name_high; // w9
  Il2CppClass *v27; // x8

  v3 = (Il2CppObject *)this;
  if ( (byte_4B195FC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattleScriptRootComponent__StartScript_b__13_0__, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v6, v7);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    this = (BattleScriptRootComponent_o *)sub_1BCA7E0(
                                            &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                            v12,
                                            v13);
    byte_4B195FC = 1;
  }
  klass = v3[4].klass;
  if ( !klass )
    goto LABEL_25;
  namespaze_high = HIDWORD(klass->_1.namespaze);
  if ( (unsigned int)(namespaze_high - 3) < 4 )
  {
    this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (BattleScriptRootComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v16 = v3[4].klass;
      if ( v16 )
      {
        if ( this )
        {
          this = (BattleScriptRootComponent_o *)QuestPhaseMaster__IsMoviePhase(
                                                  (QuestPhaseMaster_o *)this,
                                                  HIDWORD(v16->_1.name),
                                                  (int32_t)v16->_1.namespaze,
                                                  0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v19 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v17, v18);
            System_Action___ctor(v19, v3, Method_BattleScriptRootComponent__StartScript_b__13_0__, 0LL);
            started = BattleScriptRootComponent__StartMovie((BattleScriptRootComponent_o *)v3, v19, v20);
            UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)v3, started, 0LL);
            return;
          }
          v27 = v3[4].klass;
          if ( v27 )
          {
            BattleScriptRootComponent__ProcessBattleScripts(
              (BattleScriptRootComponent_o *)v3,
              (int32_t)v27->_1.byval_arg.data,
              v17);
            return;
          }
        }
      }
    }
LABEL_25:
    sub_1BCAA3C(this, method);
  }
  if ( namespaze_high == 1 )
  {
    this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_25;
    CommonUI__maskFadeout((CommonUI_o *)this, 2, 0.0, 0LL, 0LL);
    v23 = (BattleScriptRootComponent_TalkScriptInfo_o *)v3[4].klass;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v22);
    ScriptManager__SaveTalkResumeInfo(v23, 0LL);
    v24 = v3[4].klass;
    if ( !v24 )
      goto LABEL_25;
    name_high = HIDWORD(v24->_1.name);
    namespaze = (int)v24->_1.namespaze;
    if ( name_high <= 0 )
    {
      if ( namespaze )
        BattleScriptRootComponent__ChapterStartEffect((BattleScriptRootComponent_o *)v3, method);
      else
        BattleScriptRootComponent__ChapterStart((BattleScriptRootComponent_o *)v3, method);
    }
    else if ( namespaze )
    {
      BattleScriptRootComponent__ChapterStartEffectQuest((BattleScriptRootComponent_o *)v3, method);
    }
    else
    {
      BattleScriptRootComponent__ChapterStartQuest((BattleScriptRootComponent_o *)v3, method);
    }
  }
}


void __fastcall BattleScriptRootComponent__StartScriptBefeoreBattleDemo(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleScriptRootComponent_o *v3; // x23
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 v11; // x2
  __int64 v12; // x3
  struct BattleScriptRootComponent_TalkScriptInfo_o *v13; // x8
  char v14; // w24
  int32_t wId; // w19
  int32_t qId; // w20
  int32_t pId; // w21
  ScriptManager_CallbackFunc_o *v18; // x0
  ScriptManager_CallbackFunc_o *v19; // x22
  __int64 v20; // x1
  int32_t JumpLine; // w23
  struct BattleScriptRootComponent_TalkScriptInfo_o *v22; // x8
  int32_t v23; // w23
  int32_t talkType; // w24

  v3 = this;
  if ( (byte_4B19608 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleScriptRootComponent_ProceedToNextTalkPhase___76846240, method, v2);
    sub_1BCA7E0(&Method_BattleScriptRootComponent_RequestBattleSecnarioForNoneBattleQuest__, v4, v5);
    sub_1BCA7E0(&ScriptManager_CallbackFunc_TypeInfo, v6, v7);
    this = (BattleScriptRootComponent_o *)sub_1BCA7E0(&ScriptManager_TypeInfo, v8, v9);
    byte_4B19608 = 1;
  }
  talkInfo = v3->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_15;
  this = (BattleScriptRootComponent_o *)WarMaster__IsLastQuest(talkInfo->fields.wId, talkInfo->fields.qId, 0LL);
  v13 = v3->fields.talkInfo;
  if ( !v13 )
    goto LABEL_15;
  v14 = (char)this;
  wId = v13->fields.wId;
  qId = v13->fields.qId;
  pId = v13->fields.pId;
  v18 = (ScriptManager_CallbackFunc_o *)sub_1BCAA2C(ScriptManager_CallbackFunc_TypeInfo, method, v11, v12);
  v19 = v18;
  if ( (v14 & 1) != 0 )
  {
    ScriptManager_CallbackFunc___ctor(
      v18,
      (Il2CppObject *)v3,
      Method_BattleScriptRootComponent_RequestBattleSecnarioForNoneBattleQuest__,
      0LL);
    this = (BattleScriptRootComponent_o *)v3->fields.talkInfo;
    if ( this )
    {
      JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
                   (BattleScriptRootComponent_TalkScriptInfo_o *)this,
                   method);
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v20);
      ScriptManager__PlayBattleStartWhite(wId, qId, pId, v19, 0, 0LL, JumpLine, 0, 0LL);
      return;
    }
LABEL_15:
    sub_1BCAA3C(this, method);
  }
  ScriptManager_CallbackFunc___ctor(
    v18,
    (Il2CppObject *)v3,
    Method_BattleScriptRootComponent_ProceedToNextTalkPhase___76846240,
    0LL);
  this = (BattleScriptRootComponent_o *)v3->fields.talkInfo;
  if ( !this )
    goto LABEL_15;
  this = (BattleScriptRootComponent_o *)BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
                                          (BattleScriptRootComponent_TalkScriptInfo_o *)this,
                                          method);
  v22 = v3->fields.talkInfo;
  if ( !v22 )
    goto LABEL_15;
  v23 = (int)this;
  talkType = v22->fields.talkType;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
  ScriptManager__PlayBattleStart(wId, qId, pId, v19, 0, 0LL, v23, talkType == 6, 0, 0LL, 0LL);
}


void __fastcall BattleScriptRootComponent__StartScriptBeforeBattleAfterDemo(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  BattleScriptRootComponent_o *v4; // x22
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w19
  int32_t qId; // w20
  int32_t pId; // w21
  ScriptManager_CallbackFunc_o *v13; // x23
  __int64 v14; // x1
  int32_t JumpLine; // w22

  v4 = this;
  if ( (byte_4B1960A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleScriptRootComponent_ProceedToNextTalkPhase___76846240, method, v2);
    sub_1BCA7E0(&ScriptManager_CallbackFunc_TypeInfo, v5, v6);
    this = (BattleScriptRootComponent_o *)sub_1BCA7E0(&ScriptManager_TypeInfo, v7, v8);
    byte_4B1960A = 1;
  }
  talkInfo = v4->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        qId = talkInfo->fields.qId,
        pId = talkInfo->fields.pId,
        v13 = (ScriptManager_CallbackFunc_o *)sub_1BCAA2C(ScriptManager_CallbackFunc_TypeInfo, method, v2, v3),
        ScriptManager_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)v4,
          Method_BattleScriptRootComponent_ProceedToNextTalkPhase___76846240,
          0LL),
        (this = (BattleScriptRootComponent_o *)v4->fields.talkInfo) == 0LL) )
  {
    sub_1BCAA3C(this, method);
  }
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)this,
               method);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v14);
  ScriptManager__PlayBattleStart2(wId, qId, pId, v13, 0, 0LL, JumpLine, 0LL);
}


void __fastcall BattleScriptRootComponent__StartScriptFinishBattle(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  AvalonSceneManager_o *talkInfo; // x0
  __int64 v15; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *v16; // x8
  int32_t pId; // w19
  int32_t qId; // w20
  int v19; // w25
  int32_t winResult; // w22
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  ScriptManager_CallbackFunc_o *v24; // x23
  __int64 v25; // x1
  __int64 v26; // x2
  int32_t JumpLine; // w21
  TerminalPramsManager_c *v28; // x0
  _BOOL4 IsPlayScriptWithMap_k__BackingField; // w24
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x2
  TerminalPramsManager_c *v33; // x0

  if ( (byte_4B19601 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleScriptRootComponent_StartScriptFinishBattleEnd2__, method, v2);
    sub_1BCA7E0(&BgmManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&ScriptManager_CallbackFunc_TypeInfo, v6, v7);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v12, v13);
    byte_4B19601 = 1;
  }
  talkInfo = (AvalonSceneManager_o *)this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_38;
  if ( BattleScriptRootComponent_TalkScriptInfo__get_win_lose(
         (BattleScriptRootComponent_TalkScriptInfo_o *)talkInfo,
         method) != 1 )
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
    ScriptManager__DeleteTalkResumeInfo(0LL);
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v30);
    BgmManager__SetMute(0, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v31);
    if ( !byte_4B11139 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v31, v32);
      byte_4B11139 = 1;
    }
    v33 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v31);
      v33 = TerminalPramsManager_TypeInfo;
    }
    v33->static_fields->_IsAutoResume_k__BackingField = 1;
    talkInfo = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( talkInfo )
    {
      AvalonSceneManager__transitionSceneRefresh(talkInfo, 34, 1, 0LL, 0, 0LL);
      return;
    }
LABEL_38:
    sub_1BCAA3C(talkInfo, method);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B13370 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v15);
    byte_4B13370 = 1;
  }
  talkInfo = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    talkInfo = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  v16 = this->fields.talkInfo;
  if ( !v16 )
    goto LABEL_38;
  qId = v16->fields.qId;
  pId = v16->fields.pId;
  v19 = BYTE2(talkInfo[1].fields.m_listUnloadScenes[2].fields._size);
  winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(this->fields.talkInfo, method);
  v24 = (ScriptManager_CallbackFunc_o *)sub_1BCAA2C(ScriptManager_CallbackFunc_TypeInfo, v21, v22, v23);
  ScriptManager_CallbackFunc___ctor(
    v24,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent_StartScriptFinishBattleEnd2__,
    0LL);
  talkInfo = (AvalonSceneManager_o *)this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_38;
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)talkInfo,
               method);
  if ( v19 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v25);
    if ( !byte_4B13383 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v25, v26);
      byte_4B13383 = 1;
    }
    v28 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v25);
      v28 = TerminalPramsManager_TypeInfo;
    }
    IsPlayScriptWithMap_k__BackingField = v28->static_fields->_IsPlayScriptWithMap_k__BackingField;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v25);
    ScriptManager__PlayBattleEnd2_42181704(
      qId,
      pId,
      winResult,
      15,
      v24,
      0,
      JumpLine,
      IsPlayScriptWithMap_k__BackingField,
      0LL);
  }
  else
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v25);
    ScriptManager__PlayBattleEnd2(qId, pId, winResult, v24, 0, JumpLine, 0LL);
  }
}


void __fastcall BattleScriptRootComponent__StartScriptFinishBattleAfterDemo(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x0
  int32_t qId; // w20
  int32_t pId; // w21
  int32_t winResult; // w22
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  ScriptManager_CallbackFunc_o *v17; // x23
  __int64 v18; // x1
  int32_t JumpLine; // w19
  struct BattleScriptRootComponent_TalkScriptInfo_o *v20; // x8
  int32_t v21; // w20
  int32_t v22; // w21
  int v23; // w26
  int32_t v24; // w22
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  ScriptManager_CallbackFunc_o *v28; // x23
  __int64 v29; // x1
  __int64 v30; // x2
  int32_t v31; // w19
  TerminalPramsManager_c *v32; // x0
  _BOOL4 IsPlayScriptWithMap_k__BackingField; // w24

  if ( (byte_4B19604 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleScriptRootComponent_ScriptFinishBattleAfterDemoEnd__, method, v2);
    sub_1BCA7E0(&ScriptManager_CallbackFunc_TypeInfo, v4, v5);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v8, v9);
    byte_4B19604 = 1;
  }
  if ( this->fields.setEndRoll )
  {
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      qId = talkInfo->fields.qId;
      pId = talkInfo->fields.pId;
      winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(talkInfo, method);
      v17 = (ScriptManager_CallbackFunc_o *)sub_1BCAA2C(ScriptManager_CallbackFunc_TypeInfo, v14, v15, v16);
      ScriptManager_CallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_BattleScriptRootComponent_ScriptFinishBattleAfterDemoEnd__,
        0LL);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(talkInfo, method);
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v18);
        ScriptManager__PlayBattleEndWhite(qId, pId, winResult, v17, 0, JumpLine, 0LL);
        return;
      }
    }
LABEL_30:
    sub_1BCAA3C(talkInfo, method);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B13370 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B13370 = 1;
  }
  talkInfo = (BattleScriptRootComponent_TalkScriptInfo_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    talkInfo = (BattleScriptRootComponent_TalkScriptInfo_o *)TerminalPramsManager_TypeInfo;
  }
  v20 = this->fields.talkInfo;
  if ( !v20 )
    goto LABEL_30;
  v22 = v20->fields.qId;
  v21 = v20->fields.pId;
  v23 = *(unsigned __int8 *)(*(_QWORD *)&talkInfo[3].fields.wId + 106LL);
  v24 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(this->fields.talkInfo, method);
  v28 = (ScriptManager_CallbackFunc_o *)sub_1BCAA2C(ScriptManager_CallbackFunc_TypeInfo, v25, v26, v27);
  ScriptManager_CallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent_ScriptFinishBattleAfterDemoEnd__,
    0LL);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_30;
  v31 = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(talkInfo, method);
  if ( v23 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v29);
    if ( !byte_4B13383 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v29, v30);
      byte_4B13383 = 1;
    }
    v32 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v29);
      v32 = TerminalPramsManager_TypeInfo;
    }
    IsPlayScriptWithMap_k__BackingField = v32->static_fields->_IsPlayScriptWithMap_k__BackingField;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v29);
    ScriptManager__PlayBattleEnd_42180388(v22, v21, v24, 15, v28, 0, v31, IsPlayScriptWithMap_k__BackingField, 0LL);
  }
  else
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v29);
    ScriptManager__PlayBattleEnd(v22, v21, v24, v28, 0, v31, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleScriptRootComponent__StartScriptFinishBattleEnd2(
        BattleScriptRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x20
  System_Int32_array *Request_object; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  __int64 v28; // x3
  NetworkManager_ResultCallbackFunc_o *v29; // x21
  __int64 v30; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleRouteSelectRequest_o *v32; // x19
  int32_t pId; // w20
  int32_t qId; // w21

  if ( (byte_4B19602 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___, isExit, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_BattleScriptRootComponent___c__DisplayClass21_0__StartScriptFinishBattleEnd2_b__0__, v12, v13);
    sub_1BCA7E0(&BattleScriptRootComponent___c__DisplayClass21_0_TypeInfo, v14, v15);
    byte_4B19602 = 1;
  }
  v16 = sub_1BCAA2C(BattleScriptRootComponent___c__DisplayClass21_0_TypeInfo, isExit, method, v3);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_15;
  *(_QWORD *)(v16 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)this, v19, v20, v21, v22, v23, v24);
  *(_BYTE *)(v16 + 24) = isExit;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v25);
  if ( ScriptManager__GetSelectRouteArray(0LL) )
  {
    v29 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v26, v27, v28);
    NetworkManager_ResultCallbackFunc___ctor(
      v29,
      (Il2CppObject *)v16,
      Method_BattleScriptRootComponent___c__DisplayClass21_0__StartScriptFinishBattleEnd2_b__0__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v30);
    Request_object = (System_Int32_array *)NetworkManager__getRequest_object_(
                                             v29,
                                             (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      v32 = (BattleRouteSelectRequest_o *)Request_object;
      qId = talkInfo->fields.qId;
      pId = talkInfo->fields.pId;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v18);
      Request_object = ScriptManager__GetSelectRouteArray(0LL);
      if ( v32 )
      {
        BattleRouteSelectRequest__beginRequest(v32, qId, pId, Request_object, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1BCAA3C(Request_object, v18);
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v27);
}


void __fastcall BattleScriptRootComponent__StartScriptNoBattleAfter(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x0
  _BOOL4 setEndRoll; // w25
  int32_t qId; // w19
  int32_t pId; // w20
  int32_t winResult; // w21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  ScriptManager_CallbackFunc_o *v18; // x0
  ScriptManager_CallbackFunc_o *v19; // x22
  __int64 v20; // x1
  int32_t JumpLine; // w23
  __int64 v22; // x1
  int32_t v23; // w23

  if ( (byte_4B19613 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__38_0__, method, v2);
    sub_1BCA7E0(&Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__38_1__, v4, v5);
    sub_1BCA7E0(&ScriptManager_CallbackFunc_TypeInfo, v6, v7);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v8, v9);
    byte_4B19613 = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_13;
  setEndRoll = this->fields.setEndRoll;
  qId = talkInfo->fields.qId;
  pId = talkInfo->fields.pId;
  winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(talkInfo, method);
  v18 = (ScriptManager_CallbackFunc_o *)sub_1BCAA2C(ScriptManager_CallbackFunc_TypeInfo, v15, v16, v17);
  v19 = v18;
  if ( setEndRoll )
  {
    ScriptManager_CallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__38_0__,
      0LL);
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(talkInfo, method);
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v20);
      ScriptManager__PlayBattleEndWhite(qId, pId, winResult, v19, 0, JumpLine, 0LL);
      return;
    }
LABEL_13:
    sub_1BCAA3C(talkInfo, method);
  }
  ScriptManager_CallbackFunc___ctor(
    v18,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__38_1__,
    0LL);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_13;
  v23 = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(talkInfo, method);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v22);
  ScriptManager__PlayBattleEnd(qId, pId, winResult, v19, 0, v23, 0LL);
}


void __fastcall BattleScriptRootComponent__StartSecondDemoFinishBattle(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppClass *klass; // x8
  int32_t name_high; // w20
  int32_t namespaze; // w21
  System_Action_object__o *v12; // x22
  __int64 v13; // x1

  v4 = (Il2CppObject *)this;
  if ( (byte_4B19606 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_string__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__25_0__, v5, v6);
    this = (BattleScriptRootComponent_o *)sub_1BCA7E0(&ScriptManager_TypeInfo, v7, v8);
    byte_4B19606 = 1;
  }
  klass = v4[4].klass;
  if ( !klass )
    sub_1BCAA3C(this, method);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v12 = (System_Action_object__o *)sub_1BCAA2C(System_Action_string__TypeInfo, method, v2, v3);
  System_Action_object____ctor(v12, v4, Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__25_0__, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v13);
  ScriptManager__LoadBattleEndGameDemo(name_high, namespaze, 0, (System_Action_string__o *)v12, 0, 0LL);
}


void __fastcall BattleScriptRootComponent__TransitionTerminal(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  TerminalPramsManager_c *v32; // x0
  int32_t EventID; // w21
  DataManager_o *Instance; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  TerminalPramsManager_c *v37; // x0
  const MethodInfo *v38; // x1
  __int64 v39; // x2
  TerminalPramsManager_c *v40; // x0
  Il2CppObject *v41; // x21
  Il2CppObject *v42; // x22
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Action_o *v46; // x23
  __int64 v47; // x1
  __int64 v48; // x2
  TerminalSceneComponent_c *v49; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v51; // x2
  __int64 v52; // x8
  UnityEngine_Object_o *v53; // x20
  __int64 v54; // x2
  __int64 v55; // x8
  clsQuestCheck_o *v56; // x20
  __int64 v57; // x2
  TerminalPramsManager_c *v58; // x0
  __int64 v59; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1961A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_AvalonSceneManager_UnloadSceneAsync_TerminalSceneComponent___, v4, v5);
    sub_1BCA7E0(&Method_AvalonSceneManager_UnloadScene_BattleScriptRootComponent___, v6, v7);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_BattleScriptRootComponent_TransitionTerminalSub__, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v24, v25);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v26, v27);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v28, v29);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v30, v31);
    byte_4B1961A = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B11139 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B11139 = 1;
  }
  v32 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v32 = TerminalPramsManager_TypeInfo;
  }
  v32->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_4B137F5 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v32 = TerminalPramsManager_TypeInfo;
    byte_4B137F5 = 1;
  }
  if ( !v32->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v32, method);
    v32 = TerminalPramsManager_TypeInfo;
  }
  v32->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
  if ( !byte_4B12DC6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v32 = TerminalPramsManager_TypeInfo;
    byte_4B12DC6 = 1;
  }
  if ( !v32->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v32, method);
    v32 = TerminalPramsManager_TypeInfo;
  }
  EventID = WarMaster__getEventID(v32->static_fields->_WarId_k__BackingField, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_91;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_91;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         EventID,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_91;
    if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)entity, 0LL) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v35);
      if ( !byte_4B1380A )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v35, v36);
        byte_4B1380A = 1;
      }
      v37 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v35);
        v37 = TerminalPramsManager_TypeInfo;
      }
      v37->static_fields->_isPlayRiverActionCheck_k__BackingField = 1;
    }
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v35);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v38);
  if ( !byte_4B13370 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v38, v39);
    byte_4B13370 = 1;
  }
  v40 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v38);
    v40 = TerminalPramsManager_TypeInfo;
  }
  if ( v40->static_fields->_IsScriptDisp_k__BackingField )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_91;
    AvalonSceneManager__UnloadScene_object_(
      (AvalonSceneManager_o *)Instance,
      (const MethodInfo_2EFC72C *)Method_AvalonSceneManager_UnloadScene_BattleScriptRootComponent___);
    v41 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v42 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v46 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v43, v44, v45);
    System_Action___ctor(v46, (Il2CppObject *)this, Method_BattleScriptRootComponent_TransitionTerminalSub__, 0LL);
    if ( !v42 )
      goto LABEL_91;
    Instance = (DataManager_o *)AvalonSceneManager__UnloadSceneAsync_object_(
                                  (AvalonSceneManager_o *)v42,
                                  v46,
                                  (const MethodInfo_2EFC8E8 *)Method_AvalonSceneManager_UnloadSceneAsync_TerminalSceneComponent___);
    if ( !v41 )
      goto LABEL_91;
    UnityEngine_MonoBehaviour__StartCoroutine_70139516(
      (UnityEngine_MonoBehaviour_o *)v41,
      (System_Collections_IEnumerator_o *)Instance,
      0LL);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v47);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v47, v48);
      byte_4B10F83 = 1;
    }
    v49 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v47);
      v49 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_Object_o *)v49->static_fields->mInstance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
    if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v35);
      if ( !byte_4B10F83 )
      {
        sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v35, v51);
        byte_4B10F83 = 1;
      }
      Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v35);
        Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
      }
      v52 = **(_QWORD **)&Instance[1].fields._DispLog;
      if ( !v52 )
        goto LABEL_91;
      v53 = *(UnityEngine_Object_o **)(v52 + 264);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
      if ( UnityEngine_Object__op_Inequality(v53, 0LL, 0LL) )
      {
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v35);
        if ( !byte_4B10F83 )
        {
          sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v35, v54);
          byte_4B10F83 = 1;
        }
        Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v35);
          Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
        }
        v55 = **(_QWORD **)&Instance[1].fields._DispLog;
        if ( !v55 )
          goto LABEL_91;
        Instance = *(DataManager_o **)(v55 + 264);
        if ( !Instance )
          goto LABEL_91;
        ScrTerminalMap__SetDiceButton((ScrTerminalMap_o *)Instance, 0LL);
        Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
        v56 = (clsQuestCheck_o *)Instance;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v35);
        if ( !v56 )
          goto LABEL_91;
        if ( clsQuestCheck__CheckQuestPlayableNow(
               v56,
               BalanceConfig_TypeInfo->static_fields->EventBoardGameNextBoardQuestId,
               0LL) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v35);
          if ( !byte_4B13540 )
          {
            sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v35, v57);
            byte_4B13540 = 1;
          }
          v58 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v35);
            v58 = TerminalPramsManager_TypeInfo;
          }
          v58->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField = 1;
          Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
          if ( Instance )
          {
            MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
            return;
          }
LABEL_91:
          sub_1BCAA3C(Instance, v35);
        }
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v35);
        if ( !byte_4B10F83 )
        {
          sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v35, v57);
          byte_4B10F83 = 1;
        }
        Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v35);
          Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
        }
        v59 = **(_QWORD **)&Instance[1].fields._DispLog;
        if ( !v59 )
          goto LABEL_91;
        Instance = *(DataManager_o **)(v59 + 264);
        if ( !Instance )
          goto LABEL_91;
        ScrTerminalMap__SetEventBoardQuestArrivalPanel((ScrTerminalMap_o *)Instance, 0LL);
      }
    }
  }
  else
  {
    BattleScriptRootComponent__TransitionTerminalSub(this, v38);
  }
}


void __fastcall BattleScriptRootComponent__TransitionTerminalSub(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 v13; // x2
  int32_t v14; // w20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v15; // x8
  int32_t talkType; // w22
  bool v17; // w19
  __int64 v18; // x1
  __int64 v19; // x2
  TerminalPramsManager_c *v20; // x0

  if ( (byte_4B1961B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v8, v9);
    byte_4B1961B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
    if ( !byte_4B13526 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v11, v13);
      byte_4B13526 = 1;
    }
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
      Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    }
    v14 = 2;
    *(_BYTE *)(*(_QWORD *)&Instance[1].fields._DispLog + 592LL) = 1;
  }
  else
  {
    v14 = 1;
  }
  v15 = this->fields.talkInfo;
  if ( !v15 )
    goto LABEL_29;
  talkType = v15->fields.talkType;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  if ( talkType != 5 )
    goto LABEL_21;
  v17 = AvalonSceneManager__checkLoadedScene((AvalonSceneManager_o *)Instance, 34, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_29:
    sub_1BCAA3C(Instance, v11);
  if ( v17 )
  {
    AvalonSceneManager__changeScene((AvalonSceneManager_o *)Instance, 34, v14, 0LL, 0LL);
    goto LABEL_22;
  }
LABEL_21:
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, v14, 0LL, 0, 0LL);
LABEL_22:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
  if ( !byte_4B19682 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v18, v19);
    byte_4B19682 = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
    v20 = TerminalPramsManager_TypeInfo;
  }
  v20->static_fields->_IsScriptDisp_k__BackingField = 0;
}


void __fastcall BattleScriptRootComponent__TransitionWarBoard(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *Instance; // x0
  const MethodInfo *v21; // x1
  __int64 v22; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleSetupInfo_o *bSetupInfo; // x20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v25; // x8
  Il2CppObject *v26; // x3
  int32_t v27; // w1
  __int64 v28; // x2
  __int64 v29; // x3
  CommonUI_o *v30; // x19
  BattleScriptRootComponent___c_c *v31; // x8
  System_Action_o *_9__47_0; // x22
  System_String_o *v33; // x20
  System_String_o *v34; // x21
  Il2CppObject *v35; // x23
  struct BattleScriptRootComponent___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  TerminalPramsManager_c *v43; // x0

  if ( (byte_4B1961C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_BattleScriptRootComponent___c__TransitionWarBoard_b__47_0__, v12, v13);
    sub_1BCA7E0(&BattleScriptRootComponent___c_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_25571/*"バトルスクリプトエラー"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_25572/*"バトル前スクリプト以外のトークから聖杯戦争盤へ移動することはできません。\nターミナルへ戻ります。"*/, v18, v19);
    byte_4B1961C = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_32;
  if ( talkInfo->fields.talkType != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v30 = (CommonUI_o *)Instance;
    v31 = BattleScriptRootComponent___c_TypeInfo;
    if ( !BattleScriptRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleScriptRootComponent___c_TypeInfo, v21);
      v31 = BattleScriptRootComponent___c_TypeInfo;
    }
    _9__47_0 = v31->static_fields->__9__47_0;
    v33 = (System_String_o *)StringLiteral_25572/*"バトル前スクリプト以外のトークから聖杯戦争盤へ移動することはできません。\nターミナルへ戻ります。"*/;
    v34 = (System_String_o *)StringLiteral_25571/*"バトルスクリプトエラー"*/;
    if ( !_9__47_0 )
    {
      if ( !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31, v21);
        v31 = BattleScriptRootComponent___c_TypeInfo;
      }
      v35 = (Il2CppObject *)v31->static_fields->__9;
      _9__47_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v28, v29);
      System_Action___ctor(_9__47_0, v35, Method_BattleScriptRootComponent___c__TransitionWarBoard_b__47_0__, 0LL);
      static_fields = BattleScriptRootComponent___c_TypeInfo->static_fields;
      static_fields->__9__47_0 = _9__47_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__47_0,
        (int64_t)_9__47_0,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
    }
    if ( v30 )
    {
      CommonUI__OpenNotificationDialog(v30, v34, v33, _9__47_0, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
      return;
    }
    goto LABEL_32;
  }
  bSetupInfo = talkInfo->fields.bSetupInfo;
  if ( !bSetupInfo )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v21);
    if ( !byte_4B11139 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v21, v22);
      byte_4B11139 = 1;
    }
    v43 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v21);
      v43 = TerminalPramsManager_TypeInfo;
    }
    v43->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      v27 = 34;
      v26 = 0LL;
      goto LABEL_30;
    }
LABEL_32:
    sub_1BCAA3C(Instance, v21);
  }
  if ( bSetupInfo->fields.isScriptBeforePartySelect )
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v21);
    bSetupInfo->fields.selectedBranchIdx = ScriptManager__GetSelectBranchIndex(0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v25 = this->fields.talkInfo;
    if ( v25 && Instance )
    {
      v26 = (Il2CppObject *)v25->fields.bSetupInfo;
      v27 = 35;
LABEL_30:
      AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, v27, 1, v26, 0, 0LL);
      return;
    }
    goto LABEL_32;
  }
  BattleScriptRootComponent__GoForBattle(bSetupInfo, v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleScriptRootComponent___ChapterStartEffect_b__41_0(
        BattleScriptRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20
  BattleScriptRootComponent_o *v8; // x0
  const MethodInfo *v9; // x2

  if ( (byte_4B19624 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isExit, method);
    sub_1BCA7E0(&Method_BattleScriptRootComponent__ChapterStartEffect_b__41_1__, v5, v6);
    byte_4B19624 = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, isExit, method, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleScriptRootComponent__ChapterStartEffect_b__41_1__, 0LL);
  BattleScriptRootComponent__StartMashuPowerUpAction(v8, v7, v9);
}


void __fastcall BattleScriptRootComponent___ChapterStartEffect_b__41_1(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleScriptRootComponent_o *v3; // x19
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w20
  const MethodInfo *v6; // x1

  v3 = this;
  if ( (byte_4B19625 & 1) == 0 )
  {
    this = (BattleScriptRootComponent_o *)sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B19625 = 1;
  }
  talkInfo = v3->fields.talkInfo;
  if ( !talkInfo )
    sub_1BCAA3C(this, method);
  wId = talkInfo->fields.wId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  TerminalPramsManager__SetWarStartedId(wId, 0LL);
  BattleScriptRootComponent__EndChapterStart(v3, v6);
}


void __fastcall BattleScriptRootComponent___ChapterStartQuest_b__40_0(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleScriptRootComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v17; // x8
  Il2CppObject *WarEntityByWarID; // x0
  __int64 v19; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *v20; // x8
  const MethodInfo *v21; // x1
  __int64 v22; // x2
  TerminalPramsManager_c *v23; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v24; // x8
  __int64 v25; // x2
  bool v26; // w20
  TerminalPramsManager_c *v27; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v3 = this;
  if ( (byte_4B19623 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v12, v13);
    this = (BattleScriptRootComponent_o *)sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v14, v15);
    byte_4B19623 = 1;
  }
  talkInfo = v3->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_29;
  ++talkInfo->fields.pId;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
  ScriptManager__SaveTalkResumeInfo(talkInfo, 0LL);
  this = (BattleScriptRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  v17 = v3->fields.talkInfo;
  if ( !v17 || !this )
    goto LABEL_29;
  WarEntityByWarID = (Il2CppObject *)QuestTree__mfGetWarEntityByWarID((QuestTree_o *)this, v17->fields.wId, 0LL);
  entity = WarEntityByWarID;
  if ( !WarEntityByWarID )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19);
    this = (BattleScriptRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarMaster___);
    v20 = v3->fields.talkInfo;
    if ( !v20 || !this )
      goto LABEL_29;
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
      &entity,
      v20->fields.wId,
      (const MethodInfo_31B2E94 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    WarEntityByWarID = entity;
    if ( !entity )
      goto LABEL_28;
  }
  if ( !WarEntity__HasFlag((WarEntity_o *)WarEntityByWarID, 0x8000, 0LL) )
    goto LABEL_28;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v21);
  if ( !byte_4B13015 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v21, v22);
    byte_4B13015 = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v21);
    v23 = TerminalPramsManager_TypeInfo;
  }
  v23->static_fields->_IsPhaseClear_k__BackingField = 1;
  this = (BattleScriptRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v24 = v3->fields.talkInfo;
  if ( !v24 || !this )
LABEL_29:
    sub_1BCAA3C(this, method);
  v26 = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)this, v24->fields.qId, 0, 0LL);
  if ( !byte_4B13014 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v21, v25);
    byte_4B13014 = 1;
  }
  v27 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v21);
    v27 = TerminalPramsManager_TypeInfo;
  }
  v27->static_fields->_IsQuestClear_k__BackingField = v26;
LABEL_28:
  BattleScriptRootComponent__ChapterStartEffectQuest(v3, v21);
}


void __fastcall BattleScriptRootComponent___ChapterStart_b__39_0(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleScriptRootComponent_o *v3; // x19
  BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x20
  const MethodInfo *v5; // x1

  v3 = this;
  if ( (byte_4B19622 & 1) == 0 )
  {
    this = (BattleScriptRootComponent_o *)sub_1BCA7E0(&ScriptManager_TypeInfo, method, v2);
    byte_4B19622 = 1;
  }
  talkInfo = v3->fields.talkInfo;
  if ( !talkInfo )
    sub_1BCAA3C(this, method);
  ++talkInfo->fields.pId;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
  ScriptManager__SaveTalkResumeInfo(talkInfo, 0LL);
  BattleScriptRootComponent__ChapterStartEffect(v3, v5);
}


void __fastcall BattleScriptRootComponent___EndRequestBattleScenario_b__37_0(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8

  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_1BCAA3C(this, method);
  BattleScriptRootComponent__ProcessBattleScripts(this, talkInfo->fields.talkPhase, v2);
}


void __fastcall BattleScriptRootComponent___StartDemoBeforeBattle_b__28_0(
        BattleScriptRootComponent_o *this,
        System_String_o *demoInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  __int64 v12; // x3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 bSetupInfo; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v19; // x8

  if ( (byte_4B19620 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleSetupInfo_TypeInfo, demoInfo, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7, v8);
    byte_4B19620 = 1;
  }
  if ( demoInfo )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        bSetupInfo = (__int64)talkInfo->fields.bSetupInfo;
        if ( !bSetupInfo )
        {
          bSetupInfo = sub_1BCAA2C(BattleSetupInfo_TypeInfo, v10, v11, v12);
          BattleSetupInfo___ctor((BattleSetupInfo_o *)bSetupInfo, 0LL);
          v19 = this->fields.talkInfo;
          if ( !v19 || !bSetupInfo )
            goto LABEL_13;
          *(_QWORD *)(bSetupInfo + 20) = *(_QWORD *)&v19->fields.qId;
        }
        *(_QWORD *)(bSetupInfo + 104) = demoInfo;
        *(_WORD *)(bSetupInfo + 96) = 1;
        sub_1BCA784((PartyOrganizationUtility_o *)(bSetupInfo + 104), (int64_t)demoInfo, v11, v12, v13, v14, v15, v16);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 50, 1, (Il2CppObject *)bSetupInfo, 0LL);
          return;
        }
      }
    }
LABEL_13:
    sub_1BCAA3C(Instance, v10);
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, method);
}


void __fastcall BattleScriptRootComponent___StartDemoFinishBattle_b__22_0(
        BattleScriptRootComponent_o *this,
        System_String_o *demoInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  __int64 v12; // x3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 bSetupInfo; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v19; // x8

  if ( (byte_4B1961E & 1) == 0 )
  {
    sub_1BCA7E0(&BattleSetupInfo_TypeInfo, demoInfo, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7, v8);
    byte_4B1961E = 1;
  }
  if ( demoInfo )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        bSetupInfo = (__int64)talkInfo->fields.bSetupInfo;
        if ( !bSetupInfo )
        {
          bSetupInfo = sub_1BCAA2C(BattleSetupInfo_TypeInfo, v10, v11, v12);
          BattleSetupInfo___ctor((BattleSetupInfo_o *)bSetupInfo, 0LL);
          v19 = this->fields.talkInfo;
          if ( !v19 || !bSetupInfo )
            goto LABEL_13;
          *(_QWORD *)(bSetupInfo + 20) = *(_QWORD *)&v19->fields.qId;
        }
        *(_QWORD *)(bSetupInfo + 104) = demoInfo;
        *(_WORD *)(bSetupInfo + 96) = 256;
        sub_1BCA784((PartyOrganizationUtility_o *)(bSetupInfo + 104), (int64_t)demoInfo, v11, v12, v13, v14, v15, v16);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 50, 1, (Il2CppObject *)bSetupInfo, 0LL);
          return;
        }
      }
    }
LABEL_13:
    sub_1BCAA3C(Instance, v10);
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleScriptRootComponent___StartScriptNoBattleAfter_b__38_0(
        BattleScriptRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4B19621 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isExit, method);
    sub_1BCA7E0(&Method_BattleScriptRootComponent_TransitionTerminal__, v5, v6);
    byte_4B19621 = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, isExit, method, v3);
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
    sub_1BCAA3C(this, method);
  BattleScriptRootComponent__ProcessBattleScripts(this, talkInfo->fields.talkPhase, v2);
}


void __fastcall BattleScriptRootComponent___StartSecondDemoFinishBattle_b__25_0(
        BattleScriptRootComponent_o *this,
        System_String_o *demoInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  __int64 v17; // x3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 bSetupInfo; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v24; // x8
  System_Action_o *v25; // x19
  const MethodInfo *v26; // x2

  if ( (byte_4B1961F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, demoInfo, method);
    sub_1BCA7E0(&Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__25_1__, v6, v7);
    sub_1BCA7E0(&BattleSetupInfo_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v12, v13);
    byte_4B1961F = 1;
  }
  if ( demoInfo )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        bSetupInfo = (__int64)talkInfo->fields.bSetupInfo;
        if ( !bSetupInfo )
        {
          bSetupInfo = sub_1BCAA2C(BattleSetupInfo_TypeInfo, v15, v16, v17);
          BattleSetupInfo___ctor((BattleSetupInfo_o *)bSetupInfo, 0LL);
          v24 = this->fields.talkInfo;
          if ( !v24 || !bSetupInfo )
            goto LABEL_15;
          *(_QWORD *)(bSetupInfo + 20) = *(_QWORD *)&v24->fields.qId;
        }
        *(_QWORD *)(bSetupInfo + 104) = demoInfo;
        *(_WORD *)(bSetupInfo + 96) = 0;
        sub_1BCA784((PartyOrganizationUtility_o *)(bSetupInfo + 104), (int64_t)demoInfo, v16, v17, v18, v19, v20, v21);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 50, 1, (Il2CppObject *)bSetupInfo, 0LL);
          return;
        }
      }
    }
LABEL_15:
    sub_1BCAA3C(Instance, v15);
  }
  if ( this->fields.setEndRoll )
  {
    v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, demoInfo, method, v3);
    System_Action___ctor(
      v25,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__25_1__,
      0LL);
    BattleScriptRootComponent__PlayStaffRoll(this, v25, v26);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B195FA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    byte_4B195FA = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v7);
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
    sub_1BCAA3C(0LL, data);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppClass *v18; // x1
  __int64 methodPtr_low; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o **p_talkInfo; // x20
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *v23; // x8
  unsigned int talkPhase; // w9
  WarEntity_o *QuestId; // x0
  int32_t id; // w20
  bool v27; // w8

  if ( (byte_4B195FB & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, data, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarMaster___, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_6487/*"FES_WAR_ID"*/, v16, v17);
    byte_4B195FB = 1;
  }
  if ( !data )
    goto LABEL_9;
  v18 = (Il2CppClass *)BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  methodPtr_low = LOBYTE(BattleScriptRootComponent_TalkScriptInfo_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(data->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (BattleScriptRootComponent_TalkScriptInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] != BattleScriptRootComponent_TalkScriptInfo_TypeInfo
    || (this->fields.talkInfo = (struct BattleScriptRootComponent_TalkScriptInfo_o *)data,
        p_talkInfo = &this->fields.talkInfo,
        LOBYTE(data->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
    || data->klass->_2.typeHierarchy[methodPtr_low - 1] != v18 )
  {
    sub_1BCACFC(data);
LABEL_9:
    this->fields.talkInfo = 0LL;
    p_talkInfo = &this->fields.talkInfo;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)p_talkInfo, (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
  v23 = *p_talkInfo;
  if ( !*p_talkInfo )
    goto LABEL_25;
  if ( v23->fields.restoreLine )
  {
    talkPhase = v23->fields.talkPhase;
    if ( talkPhase <= 8 && ((1 << talkPhase) & 0x154) != 0 && !v23->fields.isTitleResume )
    {
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v22);
      BgmManager__SetMute(1, 0LL);
      v23 = *p_talkInfo;
      if ( !*p_talkInfo )
        goto LABEL_25;
    }
  }
  v23->fields.isTitleResume = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarMaster___),
        !*p_talkInfo)
    || !Instance )
  {
LABEL_25:
    sub_1BCAA3C(Instance, v22);
  }
  QuestId = WarMaster__getByLastQuestId((WarMaster_o *)Instance, (*p_talkInfo)->fields.qId, 0LL);
  if ( QuestId )
  {
    id = QuestId->fields.id;
    v27 = id == ConstantMaster__getValue((System_String_o *)StringLiteral_6487/*"FES_WAR_ID"*/, 0LL);
  }
  else
  {
    v27 = 0;
  }
  this->fields.setEndRoll = v27;
  SceneRootComponent__beginStartUp_39382928((SceneRootComponent_o *)this, 0LL);
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
  __int64 v9; // x2

  if ( (byte_4B1962F & 1) == 0 )
  {
    sub_1BCA7E0(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_1411/*"2.0"*/, v8, v9);
    byte_4B1962F = 1;
  }
  BattleScriptRootComponent_TalkScriptInfo_TypeInfo->static_fields->TalkResumeVersion = (struct System_String_o *)StringLiteral_1411/*"2.0"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleScriptRootComponent_TalkScriptInfo_TypeInfo->static_fields,
    StringLiteral_1411/*"2.0"*/,
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


void __fastcall BattleScriptRootComponent_TalkScriptInfo___ctor_45172840(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        BattleScriptRootComponent_TalkScriptSaveInfo_o *saveInfo,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  __int64 v8; // x3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  BattleSetupInfo_BattleSetupSaveInfo_o *bSetupInfo; // x21
  BattleSetupInfo_o *v14; // x20
  struct BattleSetupInfo_o **p_bSetupInfo; // x19

  if ( (byte_4B19629 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleSetupInfo_TypeInfo, saveInfo, method);
    byte_4B19629 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !saveInfo )
    sub_1BCAA3C(v5, v6);
  *(_OWORD *)&this->fields.wId = *(_OWORD *)&saveInfo->fields.wId;
  *(_QWORD *)&this->fields.talkPhase = *(_QWORD *)&saveInfo->fields.talkPhase;
  bSetupInfo = saveInfo->fields.bSetupInfo;
  if ( bSetupInfo )
  {
    v14 = (BattleSetupInfo_o *)sub_1BCAA2C(BattleSetupInfo_TypeInfo, v6, v7, v8);
    BattleSetupInfo___ctor_39477656(v14, bSetupInfo, 0LL);
  }
  else
  {
    v14 = 0LL;
  }
  this->fields.bSetupInfo = v14;
  p_bSetupInfo = &this->fields.bSetupInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)p_bSetupInfo, (int64_t)v14, v7, v8, v9, v10, v11, v12);
  *((_BYTE *)p_bSetupInfo + 9) = 0;
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___ctor_45173004(
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
  sub_1BCA784((PartyOrganizationUtility_o *)v16, 0LL, v18, v19, v20, v21, v22, v23);
  BYTE1(v16->monitor) = 0;
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___ctor_45173136(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bSetupInfo, 0LL, v18, v19, v20, v21, v22, v23);
  BattleScriptRootComponent_TalkScriptInfo__SetBasePhaseOfType(this, type, isPlayedScript, v24);
  this->fields.restoreLine = 0;
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo___ctor_45173372(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bSetupInfo, (int64_t)battleInfo, v13, v14, v15, v16, v17, v18);
  bSetupInfo = this->fields.bSetupInfo;
  if ( !bSetupInfo )
    sub_1BCAA3C(v19, v20);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x19
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  BattleScriptRootComponent_TalkScriptInfo_c *v15; // x0
  int64_t *static_fields; // x8
  int64_t v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  BattleSetupInfo_o *bSetupInfo; // x0
  BattleSetupInfo_BattleSetupSaveInfo_o *InfoForSave; // x1

  if ( (byte_4B1962A & 1) == 0 )
  {
    sub_1BCA7E0(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, method, v2);
    sub_1BCA7E0(&BattleScriptRootComponent_TalkScriptSaveInfo_TypeInfo, v5, v6);
    byte_4B1962A = 1;
  }
  v7 = sub_1BCAA2C(BattleScriptRootComponent_TalkScriptSaveInfo_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  v15 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  if ( !BattleScriptRootComponent_TalkScriptInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v8);
    v15 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  }
  if ( !v7 )
    sub_1BCAA3C(v15, v8);
  static_fields = (int64_t *)v15->static_fields;
  v17 = *static_fields;
  *(_QWORD *)(v7 + 16) = *static_fields;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 16), v17, v9, v10, v11, v12, v13, v14);
  *(_OWORD *)(v7 + 24) = *(_OWORD *)&this->fields.wId;
  *(_QWORD *)(v7 + 40) = *(_QWORD *)&this->fields.talkPhase;
  bSetupInfo = this->fields.bSetupInfo;
  if ( bSetupInfo )
    InfoForSave = BattleSetupInfo__GetInfoForSave(bSetupInfo, 0LL);
  else
    InfoForSave = 0LL;
  *(_QWORD *)(v7 + 48) = InfoForSave;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)InfoForSave, v18, v19, v20, v21, v22, v23);
  return (BattleScriptRootComponent_TalkScriptSaveInfo_o *)v7;
}


int32_t __fastcall BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1962C & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptManager_TypeInfo, method, v2);
    byte_4B1962C = 1;
  }
  if ( !this->fields.restoreLine )
    return -1;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
  return ScriptManager__GetLastLineInfo(0LL);
}


bool __fastcall BattleScriptRootComponent_TalkScriptInfo__IsConsumeAfterBattleWin(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  DataManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B1962E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B1962E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL
    || (Instance = (DataManager_o *)QuestMaster__getQuestEntity((QuestMaster_o *)Instance, this->fields.qId, 0LL)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  return QuestEntity__HasFlag((QuestEntity_o *)Instance, 0x40000000LL, 0LL);
}


bool __fastcall BattleScriptRootComponent_TalkScriptInfo__IsRestorable(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  int32_t pId; // w21
  int32_t qId; // w22
  QuestMaster_o *v14; // x20
  System_String_o *CachedSelectedBranchQuestId; // x0
  __int64 v16; // x1
  int32_t ScriptQuestId; // w21
  const MethodInfo *v18; // x1
  int32_t winResult; // w0
  int32_t talkType; // w8
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  int32_t v23; // w23
  ScriptManager_o *v24; // x22
  Il2CppObject *v25; // x0
  __int64 v26; // x1
  int32_t v27; // w23
  Il2CppObject *v28; // x22
  System_String_o *v29; // x1
  ScriptManager_o *v30; // x0
  int32_t v31; // w22
  Il2CppObject *Instance; // x0
  __int64 v33; // x1
  int32_t v34; // w24
  ScriptManager_o *v35; // x23
  _BOOL4 IsExistScriptFile; // w21
  Il2CppObject *v37; // x0
  __int64 v38; // x1
  int32_t v39; // w24
  Il2CppObject *v40; // x23
  int v41; // w2
  _BOOL4 IsOpenByTime; // w8
  QuestEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1962D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v8, v9);
    byte_4B1962D = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestMaster___);
  qId = this->fields.qId;
  pId = this->fields.pId;
  v14 = (QuestMaster_o *)Master_object;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v11);
  CachedSelectedBranchQuestId = (System_String_o *)ScriptManager__GetCachedSelectedBranchQuestId(qId, pId, 0LL);
  if ( !v14 )
    goto LABEL_42;
  ScriptQuestId = QuestMaster__getScriptQuestId(v14, (int32_t)CachedSelectedBranchQuestId, 0LL);
  winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(this, v18);
  talkType = this->fields.talkType;
  if ( talkType == 4 )
  {
    v31 = winResult;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v34 = this->fields.pId;
    v35 = (ScriptManager_o *)Instance;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v33);
    CachedSelectedBranchQuestId = ScriptManager__GetScriptName_BattleEnd2(ScriptQuestId, v34, v31, 0LL);
    if ( !v35 )
      goto LABEL_42;
    if ( !ScriptManager__IsExistScriptFile(v35, CachedSelectedBranchQuestId, 0LL) )
    {
      v37 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      v39 = this->fields.pId;
      v40 = v37;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v38);
      CachedSelectedBranchQuestId = ScriptManager__GetScriptName_BattleEnd(ScriptQuestId, v39, v31, 0LL);
      if ( !v40 )
        goto LABEL_42;
      v29 = CachedSelectedBranchQuestId;
      v30 = (ScriptManager_o *)v40;
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
    v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v23 = this->fields.pId;
    v24 = (ScriptManager_o *)v21;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v22);
    CachedSelectedBranchQuestId = ScriptManager__GetScriptName_BattleStart(ScriptQuestId, v23, 0LL);
    if ( !v24 )
      goto LABEL_42;
    if ( !ScriptManager__IsExistScriptFile(v24, CachedSelectedBranchQuestId, 0LL) )
    {
      v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      v27 = this->fields.pId;
      v28 = v25;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v26);
      CachedSelectedBranchQuestId = ScriptManager__GetScriptName_BattleStart2(ScriptQuestId, v27, 0LL);
      if ( !v28 )
        goto LABEL_42;
      v29 = CachedSelectedBranchQuestId;
      v30 = (ScriptManager_o *)v28;
LABEL_28:
      IsExistScriptFile = ScriptManager__IsExistScriptFile(v30, v29, 0LL);
      goto LABEL_29;
    }
    goto LABEL_22;
  }
  IsExistScriptFile = 1;
LABEL_30:
  if ( talkType != 1 )
  {
    v41 = this->fields.qId;
    if ( v41 >= 1 )
    {
      if ( !QuestMaster__TryGetQuestEntity(v14, &entity, v41, 0LL) )
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
      sub_1BCAA3C(CachedSelectedBranchQuestId, v16);
    }
  }
  if ( IsExistScriptFile )
    return 1;
LABEL_36:
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v16);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  return 0;
}


void __fastcall BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  int32_t talkPhase; // w8
  unsigned int v8; // w8

  if ( (byte_4B1962B & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, method, v2);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v4, v5);
    byte_4B1962B = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
  ScriptManager__DeleteLineInfo(0LL);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v6);
  BgmManager__SetMute(0, 0LL);
  talkPhase = this->fields.talkPhase;
  this->fields.restoreLine = 0;
  v8 = talkPhase - 1;
  if ( v8 <= 8 && ((0x1EFu >> v8) & 1) != 0 )
    this->fields.talkPhase = dword_C0DED0[v8];
}


// local variable allocation has failed, the output may be wrong!
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
        sub_1BCAA3C(0LL, *(_QWORD *)&type);
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
  __int64 v2; // x2
  BattleScriptRootComponent_TalkScriptInfo_c *v4; // x0
  int32_t winLoseInfo; // w21
  int32_t WinResultMultiplicationValue; // w8
  int32_t v7; // w19
  int v8; // w19
  float v9; // s8
  int32_t v10; // w9

  if ( (byte_4B19626 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, method, v2);
    byte_4B19626 = 1;
  }
  v4 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  winLoseInfo = this->fields.winLoseInfo;
  if ( !BattleScriptRootComponent_TalkScriptInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleScriptRootComponent_TalkScriptInfo_TypeInfo, method);
    v4 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  }
  WinResultMultiplicationValue = v4->static_fields->WinResultMultiplicationValue;
  if ( winLoseInfo % WinResultMultiplicationValue != 1 )
    return 0;
  v7 = this->fields.winLoseInfo;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4, method);
    WinResultMultiplicationValue = BattleScriptRootComponent_TalkScriptInfo_TypeInfo->static_fields->WinResultMultiplicationValue;
  }
  v8 = v7 / WinResultMultiplicationValue;
  if ( !byte_4B109C0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, method, v2);
    byte_4B109C0 = 1;
  }
  v9 = (float)v8;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
  if ( (int)v9 == 2 )
    v10 = 2;
  else
    v10 = 1;
  if ( (int)v9 == 3 )
    return 3;
  else
    return v10;
}


int32_t __fastcall BattleScriptRootComponent_TalkScriptInfo__get_win_lose(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleScriptRootComponent_TalkScriptInfo_c *v4; // x0
  int32_t winLoseInfo; // w19

  if ( (byte_4B19628 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, method, v2);
    byte_4B19628 = 1;
  }
  v4 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  winLoseInfo = this->fields.winLoseInfo;
  if ( !BattleScriptRootComponent_TalkScriptInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleScriptRootComponent_TalkScriptInfo_TypeInfo, method);
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

  if ( (byte_4B19627 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, *(_QWORD *)&winLose, *(_QWORD *)&winResult);
    byte_4B19627 = 1;
  }
  if ( winLose == 1 )
  {
    v7 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
    cctor_finished = BattleScriptRootComponent_TalkScriptInfo_TypeInfo->_2.cctor_finished;
    if ( winResult == 1 || (winResult & 0xFFFFFFFE) != 2 )
    {
      if ( !cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleScriptRootComponent_TalkScriptInfo_TypeInfo, *(_QWORD *)&winLose);
        v7 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
      }
      win_lose = v7->static_fields->WinResultMultiplicationValue + 1;
    }
    else
    {
      if ( !cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleScriptRootComponent_TalkScriptInfo_TypeInfo, *(_QWORD *)&winLose);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t _1__state; // w8
  struct BattleScriptRootComponent_o *_4__this; // x22
  DataManager_o *Instance; // x0
  const MethodInfo *v13; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  System_String_o *MovieFolder; // x20
  System_Action_o *callback; // x0
  bool result; // w0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v18; // x8
  MovieFileMerge_o *lookup; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v20; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v21; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v22; // x8
  Il2CppObject *v23; // x0
  Il2CppObject **p__2__current; // x19
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4B19637 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&SoundManager_TypeInfo, v8, v9);
    byte_4B19637 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
      v13);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  v18 = _4__this->fields.talkInfo;
  if ( !v18 )
    goto LABEL_35;
  lookup = (MovieFileMerge_o *)Instance[12].fields.lookup;
  if ( v18->fields.talkType == 5 )
    goto LABEL_33;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___),
        (v20 = _4__this->fields.talkInfo) == 0LL)
    || !Instance )
  {
LABEL_35:
    sub_1BCAA3C(Instance, v13);
  }
  Instance = (DataManager_o *)QuestPhaseMaster__GetMoviePlayType(
                                (QuestPhaseMaster_o *)Instance,
                                v20->fields.qId,
                                v20->fields.pId,
                                0LL);
  if ( (_DWORD)Instance == 1 )
  {
    v22 = _4__this->fields.talkInfo;
    if ( !v22 )
      goto LABEL_35;
    if ( v22->fields.talkPhase >= 6 )
      goto LABEL_10;
  }
  else if ( (_DWORD)Instance == 2 )
  {
    v21 = _4__this->fields.talkInfo;
    if ( !v21 )
      goto LABEL_35;
    if ( v21->fields.talkPhase < 5 )
      goto LABEL_10;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v13);
  SoundManager__stopBgm(0LL);
LABEL_33:
  if ( !lookup )
    goto LABEL_35;
  MovieFileMerge__Initialize(lookup, MovieFolder, 0LL);
  v23 = (Il2CppObject *)MovieFileMerge__PlayMP4(lookup, 0LL);
  this->fields.__2__current = v23;
  p__2__current = &this->fields.__2__current;
  sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v23, v25, v26, v27, v28, v29, v30);
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
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BattleScriptRootComponent__StartMovie_d__14_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B19630 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleScriptRootComponent___c_TypeInfo, v1, v2);
    byte_4B19630 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleScriptRootComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleScriptRootComponent___c_TypeInfo->static_fields->__9 = (struct BattleScriptRootComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleScriptRootComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B19631 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B19631 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
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

  if ( (byte_4B19632 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptManager_TypeInfo, str, method);
    byte_4B19632 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, str);
  ScriptManager__ClearSelectRouteArray(0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, v4);
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

  if ( (byte_4B19633 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptManager_TypeInfo, str, method);
    byte_4B19633 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, str);
  ScriptManager__ClearSelectRouteArray(0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, v4);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  NetworkManager_ResultCallbackFunc_o *_9__1; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  Il2CppObject *Request_object; // x0
  __int64 v19; // x1

  if ( (byte_4B19634 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TutorialSetRequest___, is_decide, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_BattleScriptRootComponent___c__DisplayClass44_0__StartMashuPowerUpAction_b__1__, v9, v10);
    byte_4B19634 = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     is_decide,
                                                     method,
                                                     v3);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent___c__DisplayClass44_0__StartMashuPowerUpAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v12, v13, v14, v15, v16, v17);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, is_decide);
  Request_object = NetworkManager__getRequest_object_(
                     _9__1,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TutorialSetRequest___);
  if ( !Request_object )
    sub_1BCAA3C(0LL, v19);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x19
  AssetData_o *transform; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x1
  Il2CppObject *Object_object__49237568; // x21
  Il2CppObject *v37; // x0
  AssetData_o **v38; // x21
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct BattleScriptRootComponent_o *_4__this; // x8
  __int64 v46; // x2
  UnityEngine_Transform_o *v47; // x20
  __int64 v48; // x2
  UnityEngine_Transform_o *v49; // x20
  Il2CppObject *Component_object; // x0
  AssetData_o *v51; // x20
  EndrolRootComponent_o *v52; // x21
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  System_Action_o *v56; // x22

  if ( (byte_4B19635 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, data, method);
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EndrolRootComponent___, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_BattleScriptRootComponent___c__DisplayClass48_1__PlayStaffRoll_b__1__, v14, v15);
    sub_1BCA7E0(&BattleScriptRootComponent___c__DisplayClass48_1_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_6118/*"EndrolPanel"*/, v18, v19);
    byte_4B19635 = 1;
  }
  v20 = sub_1BCAA2C(BattleScriptRootComponent___c__DisplayClass48_1_TypeInfo, data, method, v3);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_21;
  *(_QWORD *)(v20 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 32), (int64_t)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 24) = data;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 24), (int64_t)data, v29, v30, v31, v32, v33, v34);
  transform = *(AssetData_o **)(v20 + 24);
  if ( !transform )
    goto LABEL_21;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              transform,
                              (System_String_o *)StringLiteral_6118/*"EndrolPanel"*/,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
  v37 = UnityEngine_Object__Instantiate_object_(
          Object_object__49237568,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  *(_QWORD *)(v20 + 16) = v37;
  v38 = (AssetData_o **)(v20 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)v37, v39, v40, v41, v42, v43, v44);
  transform = *(AssetData_o **)(v20 + 16);
  if ( !transform )
    goto LABEL_21;
  transform = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_21;
  if ( !transform )
    goto LABEL_21;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, _4__this->fields.cam, 0LL);
  transform = *v38;
  if ( !*v38 )
    goto LABEL_21;
  transform = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  v47 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4B109C1 )
  {
    transform = (AssetData_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v22, v46);
    byte_4B109C1 = 1;
  }
  if ( !v47 )
    goto LABEL_21;
  UnityEngine_Transform__set_localPosition(v47, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  transform = *v38;
  if ( !*v38 )
    goto LABEL_21;
  transform = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  v49 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4B109C6 )
  {
    transform = (AssetData_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v22, v48);
    byte_4B109C6 = 1;
  }
  if ( !v49
    || (UnityEngine_Transform__set_localScale(v49, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (transform = *v38) == 0LL)
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EndrolRootComponent___),
        v51 = *(AssetData_o **)(v20 + 24),
        v52 = (EndrolRootComponent_o *)Component_object,
        v56 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v53, v54, v55),
        System_Action___ctor(
          v56,
          (Il2CppObject *)v20,
          Method_BattleScriptRootComponent___c__DisplayClass48_1__PlayStaffRoll_b__1__,
          0LL),
        !v52) )
  {
LABEL_21:
    sub_1BCAA3C(transform, v22);
  }
  EndrolRootComponent__Open(v52, v51, v56, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *endObj; // x20
  __int64 v7; // x1
  AssetData_o *data; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  struct BattleScriptRootComponent___c__DisplayClass48_0_o *CS___8__locals1; // x8

  if ( (byte_4B19636 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B19636 = 1;
  }
  endObj = (UnityEngine_Object_o *)this->fields.endObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  UnityEngine_Object__Destroy_70154244(endObj, 0LL);
  data = this->fields.data;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7);
  AssetManager__releaseAsset_38505704(data, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    sub_1BCAA3C(v9, v10);
  ActionExtensions__Call(CS___8__locals1->fields.callback, 0LL);
}