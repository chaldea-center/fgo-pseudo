void BattleScriptRootComponent___ctor(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void BattleScriptRootComponent__ChapterStart(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  BattleScriptRootComponent_o *v2; // x19
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w20
  System_Action_o *v5; // x21
  int32_t JumpLine; // w19

  v2 = this;
  if ( (byte_4C2ABE2 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleScriptRootComponent__ChapterStart_b__39_0__);
    this = (BattleScriptRootComponent_o *)sub_1C2D490(&ScriptManager_TypeInfo);
    byte_4C2ABE2 = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(v5, (Il2CppObject *)v2, Method_BattleScriptRootComponent__ChapterStart_b__39_0__, 0),
        (this = (BattleScriptRootComponent_o *)v2->fields.talkInfo) == 0) )
  {
    sub_1C2D6EC(this, method);
  }
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)this,
               method);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayChapterStartNotCollection(wId, v5, JumpLine, 0);
}


void BattleScriptRootComponent__ChapterStartEffect(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  int32_t name; // w20
  ScriptManager_CallbackFunc_o *v5; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4C2ABE4 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleScriptRootComponent__ChapterStartEffect_b__41_0__);
    sub_1C2D490(&ScriptManager_CallbackFunc_TypeInfo);
    this = (BattleScriptRootComponent_o *)sub_1C2D490(&ScriptManager_TypeInfo);
    byte_4C2ABE4 = 1;
  }
  klass = v2[4].klass;
  if ( !klass )
    sub_1C2D6EC(this, method);
  name = (int32_t)klass->_1.name;
  v5 = (ScriptManager_CallbackFunc_o *)sub_1C2D6DC(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v5, v2, Method_BattleScriptRootComponent__ChapterStartEffect_b__41_0__, 0);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayChapterStartEffect(name, v5, 0, 0);
}


void BattleScriptRootComponent__ChapterStartEffectQuest(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  int32_t name; // w20
  ScriptManager_CallbackFunc_o *v5; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4C2ABE5 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleScriptRootComponent__ChapterStartEffectQuest_b__42_0__);
    sub_1C2D490(&ScriptManager_CallbackFunc_TypeInfo);
    this = (BattleScriptRootComponent_o *)sub_1C2D490(&ScriptManager_TypeInfo);
    byte_4C2ABE5 = 1;
  }
  klass = v2[4].klass;
  if ( !klass )
    sub_1C2D6EC(this, method);
  name = (int32_t)klass->_1.name;
  v5 = (ScriptManager_CallbackFunc_o *)sub_1C2D6DC(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v5, v2, Method_BattleScriptRootComponent__ChapterStartEffectQuest_b__42_0__, 0);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayChapterStartEffect(name, v5, 0, 0);
}


void BattleScriptRootComponent__ChapterStartQuest(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  BattleScriptRootComponent_o *v2; // x19
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w20
  int32_t qId; // w21
  System_Action_o *v6; // x22
  int32_t JumpLine; // w19

  v2 = this;
  if ( (byte_4C2ABE3 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleScriptRootComponent__ChapterStartQuest_b__40_0__);
    this = (BattleScriptRootComponent_o *)sub_1C2D490(&ScriptManager_TypeInfo);
    byte_4C2ABE3 = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        qId = talkInfo->fields.qId,
        v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)v2, Method_BattleScriptRootComponent__ChapterStartQuest_b__40_0__, 0),
        (this = (BattleScriptRootComponent_o *)v2->fields.talkInfo) == 0) )
  {
    sub_1C2D6EC(this, method);
  }
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)this,
               method);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayChapterStartQuestNotCollection(wId, qId, v6, JumpLine, 0);
}


void BattleScriptRootComponent__ChkCondHavingBranchQuest(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  BattleScriptRootComponent_o *v2; // x19
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  struct BattleSetupInfo_o *bSetupInfo; // x9
  int32_t qId; // w20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v6; // x8
  CommonReleaseMaster_o *v7; // x20
  __int64 v8; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleScriptRootComponent_o *v10; // x21
  unsigned __int64 v11; // x22
  struct System_Threading_CancellationTokenSource_o *v12; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v13; // x8
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4C2ABCD & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    this = (BattleScriptRootComponent_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2ABCD = 1;
  }
  entity = 0;
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_28;
  bSetupInfo = talkInfo->fields.bSetupInfo;
  if ( !bSetupInfo || (qId = bSetupInfo->fields.originQuestId, qId <= 0) )
    qId = talkInfo->fields.qId;
  this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_28;
  this = (BattleScriptRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  v6 = v2->fields.talkInfo;
  if ( !v6 || !this )
    goto LABEL_28;
  if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &entity, qId, v6->fields.pId, 0) )
    return;
  this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_28;
  this = (BattleScriptRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !entity )
    goto LABEL_28;
  v7 = (CommonReleaseMaster_o *)this;
  this = (BattleScriptRootComponent_o *)QuestPhaseEntity__GetCondHavingIds(entity, 0);
  if ( !this )
    goto LABEL_28;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v10 = this;
  if ( (int)m_CancellationTokenSource < 1 )
    return;
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= (unsigned int)m_CancellationTokenSource )
      goto LABEL_29;
    if ( !v7 )
      goto LABEL_28;
    this = (BattleScriptRootComponent_o *)CommonReleaseMaster__IsOpen(
                                            v7,
                                            *((_DWORD *)&v10->fields.myFSM + v11),
                                            0,
                                            0,
                                            0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (BattleScriptRootComponent_o *)entity;
      if ( !entity )
        goto LABEL_28;
      this = (BattleScriptRootComponent_o *)QuestPhaseEntity__GetNotHavingQuests(entity, 0);
      if ( !this )
        goto LABEL_28;
      v12 = this->fields.m_CancellationTokenSource;
      if ( (__int64)v11 < (int)v12 )
        break;
    }
    LODWORD(m_CancellationTokenSource) = v10->fields.m_CancellationTokenSource;
    if ( (__int64)++v11 >= (int)m_CancellationTokenSource )
      return;
  }
  if ( (unsigned int)v11 >= (unsigned int)v12 )
LABEL_29:
    sub_1C2D6F4(this, method, v8);
  v13 = v2->fields.talkInfo;
  if ( !v13 )
LABEL_28:
    sub_1C2D6EC(this, method);
  v13->fields.qId = *((_DWORD *)&this->fields.myFSM + v11);
}


void BattleScriptRootComponent__EndBeforeBattleScript(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x3
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t talkType; // w9
  BattleSetupInfo_o *bSetupInfo; // x20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v9; // x8
  Il2CppObject *v10; // x3
  int32_t v11; // w1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *v14; // x8
  TerminalPramsManager_c *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  TerminalPramsManager_c *v18; // x0
  Il2CppObject *WarBoardData_k__BackingField; // x20
  CGThumbnailListItem_o *p_WarBoardData_k__BackingField; // x0

  if ( (byte_4C2ABD9 & 1) == 0 )
  {
    sub_1C2D490(&ScriptManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2ABD9 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0);
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
          bSetupInfo->fields.selectedBranchIdx = ScriptManager__GetSelectBranchIndex(0);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          v9 = this->fields.talkInfo;
          if ( !v9 || !Instance )
            goto LABEL_48;
          v10 = (Il2CppObject *)v9->fields.bSetupInfo;
          v11 = 35;
        }
        else
        {
          if ( !bSetupInfo->fields.isScriptBeforeWarBoard )
          {
            BattleScriptRootComponent__GoForBattle(bSetupInfo, v4);
            return;
          }
          if ( !ScriptManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
          bSetupInfo->fields.selectedBranchIdx = ScriptManager__GetSelectBranchIndex(0);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C2AC24 )
          {
            sub_1C2D490(&TerminalPramsManager_TypeInfo);
            byte_4C2AC24 = 1;
          }
          v18 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v18 = TerminalPramsManager_TypeInfo;
          }
          WarBoardData_k__BackingField = (Il2CppObject *)v18->static_fields->_WarBoardData_k__BackingField;
          if ( !byte_4C24328 )
          {
            sub_1C2D490(&TerminalPramsManager_TypeInfo);
            v18 = TerminalPramsManager_TypeInfo;
            byte_4C24328 = 1;
          }
          if ( !v18->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v18);
            v18 = TerminalPramsManager_TypeInfo;
          }
          p_WarBoardData_k__BackingField = (CGThumbnailListItem_o *)&v18->static_fields->_WarBoardData_k__BackingField;
          p_WarBoardData_k__BackingField->klass = 0;
          sub_1C2D434(p_WarBoardData_k__BackingField, 0, v16, v17);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !Instance )
            goto LABEL_48;
          v11 = 80;
          v10 = WarBoardData_k__BackingField;
        }
      }
      else
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C21ACD )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C21ACD = 1;
        }
        v15 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v15 = TerminalPramsManager_TypeInfo;
        }
        v15->static_fields->_IsAutoResume_k__BackingField = 1;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !Instance )
          goto LABEL_48;
        v11 = 34;
        v10 = 0;
      }
      AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, v11, 1, v10, 0, 0);
      return;
    case 5:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( Instance )
      {
        Instance = (Il2CppObject *)ScriptManager__IsBadEndRoute((ScriptManager_o *)Instance, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          BattleScriptRootComponent__RequestBattleSecnarioForNoneBattleQuest(this, 0, v12);
          return;
        }
        talkInfo = this->fields.talkInfo;
        if ( talkInfo )
          goto LABEL_20;
      }
LABEL_48:
      sub_1C2D6EC(Instance, v4);
    case 6:
LABEL_20:
      BattleScriptRootComponent__SavePlayedNotMeetsScript(
        (BattleScriptRootComponent_o *)Instance,
        talkInfo->fields.qId,
        talkInfo->fields.pId,
        v5);
      v14 = this->fields.talkInfo;
      if ( v14 )
      {
        v14->fields.talkPhase = 10;
        BattleScriptRootComponent__ProcessBattleScripts(this, 10, v13);
        return;
      }
      goto LABEL_48;
  }
}


void BattleScriptRootComponent__EndChapterStart(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t qId; // w21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v7; // x8
  int32_t pId; // w19
  TerminalPramsManager_c *v9; // x0
  TerminalPramsManager_c *v10; // x0

  if ( (byte_4C2ABE6 & 1) == 0 )
  {
    sub_1C2D490(&ScriptManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2ABE6 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_31;
  qId = talkInfo->fields.qId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23BE1 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23BE1 = 1;
  }
  Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  HIDWORD(Instance[1].fields.sendData[1].klass) = qId;
  v7 = this->fields.talkInfo;
  if ( !v7 )
    goto LABEL_31;
  pId = v7->fields.pId;
  if ( !LODWORD(Instance[2].klass) )
    j_il2cpp_runtime_class_init_0(Instance);
  if ( !byte_4C23BE5 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23BE5 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_PhaseCnt_k__BackingField = (pId - 1) & ~((pId - 1) >> 31);
  TerminalPramsManager__SaveQuestInfo_SaveData(0);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( AvalonSceneManager__IsStackScene(Instance, 0) )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      AvalonSceneManager__popSceneRefresh(Instance, 2, 0, 0);
      return;
    }
LABEL_31:
    sub_1C2D6EC(Instance, v4);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21ACD )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21ACD = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, 2, 0, 0, 0);
}


void BattleScriptRootComponent__EndRequestBattleScenario(
        BattleScriptRootComponent_o *this,
        System_String_o *jsonstr,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  BattleScriptRootComponent_TalkScriptInfo_o *klass; // x21
  Il2CppObject *v6; // x21
  System_Object_array *v7; // x21
  Il2CppObject *v8; // x0
  __int64 v9; // x2
  BattleResultComponent_resultData_o *myFSM; // x20
  System_Collections_Generic_IEnumerable_TSource__o *freeShopIds; // x0
  BattleScriptRootComponent___c_c *v12; // x8
  BattleScriptRootComponent_o *v13; // x21
  System_Converter_TInput__TOutput__o *_9__37_1; // x22
  Il2CppObject *v15; // x23
  struct BattleScriptRootComponent___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_String_array *v19; // x0
  System_String_o *v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *returnRarePriShopIds; // x0
  BattleScriptRootComponent___c_c *v22; // x8
  BattleScriptRootComponent_o *v23; // x20
  System_Converter_TInput__TOutput__o *_9__37_2; // x21
  Il2CppObject *v25; // x22
  struct BattleScriptRootComponent___c_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_String_array *v29; // x0
  System_String_o *v30; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v32; // x2
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v34; // x0
  int32_t WarId_k__BackingField; // w21
  System_Action_o *v36; // x22
  System_Collections_IEnumerator_o *v37; // x1
  Il2CppClass *v38; // x8

  v4 = (Il2CppObject *)this;
  if ( (byte_4C2ABE0 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleScriptRootComponent__EndRequestBattleScenario_b__37_0__);
    sub_1C2D490(&System_Converter_int__string__TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C2D490(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ConvertAll_string___);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C2D490(&ScriptManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__37_1__);
    sub_1C2D490(&Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__37_2__);
    sub_1C2D490(&BattleScriptRootComponent___c_TypeInfo);
    sub_1C2D490(&StringLiteral_19649/*"freeShopIds"*/);
    sub_1C2D490(&StringLiteral_23070/*"returnRarePriShopIds"*/);
    sub_1C2D490(&StringLiteral_811/*","*/);
    sub_1C2D490(&StringLiteral_15801/*"["*/);
    this = (BattleScriptRootComponent_o *)sub_1C2D490(&StringLiteral_16055/*"]"*/);
    byte_4C2ABE0 = 1;
  }
  klass = (BattleScriptRootComponent_TalkScriptInfo_o *)v4[4].klass;
  if ( !klass )
    goto LABEL_53;
  klass->fields.talkPhase = 6;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__SaveTalkResumeInfo(klass, 0);
  ScriptManager__ClearSelectRouteArray(0);
  v6 = (Il2CppObject *)System_String__Concat_63496112(
                         (System_String_o *)StringLiteral_15801/*"["*/,
                         jsonstr,
                         (System_String_o *)StringLiteral_16055/*"]"*/,
                         0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7 = JsonManager__DeserializeArray_object_(
         v6,
         (const MethodInfo_313DDBC *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v7, 1, 0);
  v8 = (Il2CppObject *)System_String__Concat_63496112(
                         (System_String_o *)StringLiteral_15801/*"["*/,
                         jsonstr,
                         (System_String_o *)StringLiteral_16055/*"]"*/,
                         0);
  this = (BattleScriptRootComponent_o *)JsonManager__DeserializeArray_object_(
                                          v8,
                                          (const MethodInfo_313DDBC *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  if ( !this )
    goto LABEL_53;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    sub_1C2D6F4(this, jsonstr, v9);
  myFSM = (BattleResultComponent_resultData_o *)this->fields.myFSM;
  TerminalPramsManager__SetBattleResultCampaignBonus(myFSM, 0);
  if ( !myFSM )
    goto LABEL_53;
  freeShopIds = (System_Collections_Generic_IEnumerable_TSource__o *)myFSM->fields.freeShopIds;
  if ( freeShopIds )
  {
    this = (BattleScriptRootComponent_o *)System_Linq_Enumerable__ToList_int_(
                                            freeShopIds,
                                            (const MethodInfo_3112A1C *)Method_System_Linq_Enumerable_ToList_int___);
    v12 = BattleScriptRootComponent___c_TypeInfo;
    v13 = this;
    if ( !BattleScriptRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleScriptRootComponent___c_TypeInfo);
      v12 = BattleScriptRootComponent___c_TypeInfo;
    }
    _9__37_1 = (System_Converter_TInput__TOutput__o *)v12->static_fields->__9__37_1;
    if ( !_9__37_1 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = BattleScriptRootComponent___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v12->static_fields->__9;
      _9__37_1 = (System_Converter_TInput__TOutput__o *)sub_1C2D6DC(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(
        _9__37_1,
        v15,
        Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__37_1__,
        0);
      static_fields = BattleScriptRootComponent___c_TypeInfo->static_fields;
      static_fields->__9__37_1 = (struct System_Converter_int__string__o *)_9__37_1;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__37_1, (int32_t)_9__37_1, v17, v18);
    }
    if ( !v13 )
      goto LABEL_53;
    this = (BattleScriptRootComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                            (System_Collections_Generic_List_int__o *)v13,
                                            (System_Converter_T__TOutput__o *)_9__37_1,
                                            (const MethodInfo_2FF5D50 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_53;
    v19 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_string__ToArray__);
    v20 = System_String__Join((System_String_o *)StringLiteral_811/*","*/, v19, 0);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_19649/*"freeShopIds"*/, v20, 0);
  }
  returnRarePriShopIds = (System_Collections_Generic_IEnumerable_TSource__o *)myFSM->fields.returnRarePriShopIds;
  if ( returnRarePriShopIds )
  {
    this = (BattleScriptRootComponent_o *)System_Linq_Enumerable__ToList_int_(
                                            returnRarePriShopIds,
                                            (const MethodInfo_3112A1C *)Method_System_Linq_Enumerable_ToList_int___);
    v22 = BattleScriptRootComponent___c_TypeInfo;
    v23 = this;
    if ( !BattleScriptRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleScriptRootComponent___c_TypeInfo);
      v22 = BattleScriptRootComponent___c_TypeInfo;
    }
    _9__37_2 = (System_Converter_TInput__TOutput__o *)v22->static_fields->__9__37_2;
    if ( !_9__37_2 )
    {
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = BattleScriptRootComponent___c_TypeInfo;
      }
      v25 = (Il2CppObject *)v22->static_fields->__9;
      _9__37_2 = (System_Converter_TInput__TOutput__o *)sub_1C2D6DC(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(
        _9__37_2,
        v25,
        Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__37_2__,
        0);
      v26 = BattleScriptRootComponent___c_TypeInfo->static_fields;
      v26->__9__37_2 = (struct System_Converter_int__string__o *)_9__37_2;
      sub_1C2D434((CGThumbnailListItem_o *)&v26->__9__37_2, (int32_t)_9__37_2, v27, v28);
    }
    if ( !v23 )
      goto LABEL_53;
    this = (BattleScriptRootComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                            (System_Collections_Generic_List_int__o *)v23,
                                            (System_Converter_T__TOutput__o *)_9__37_2,
                                            (const MethodInfo_2FF5D50 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_53;
    v29 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_string__ToArray__);
    v30 = System_String__Join((System_String_o *)StringLiteral_811/*","*/, v29, 0);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_23070/*"returnRarePriShopIds"*/, v30, 0);
  }
  UnityEngine_PlayerPrefs__Save(0);
  this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_53;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21464 = 1;
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
                                          0);
  if ( this )
  {
    this = (BattleScriptRootComponent_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x10000000000000LL, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C216DE )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C216DE = 1;
      }
      v34 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v34 = TerminalPramsManager_TypeInfo;
      }
      WarId_k__BackingField = v34->static_fields->_WarId_k__BackingField;
      v36 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v36, v4, Method_BattleScriptRootComponent__EndRequestBattleScenario_b__37_0__, 0);
      if ( Instance )
      {
        v37 = QuestTree__mfBaseTreeUpdateWithOpenCheck((QuestTree_o *)Instance, WarId_k__BackingField, v36, 0);
        UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)v4, v37, 0);
        return;
      }
LABEL_53:
      sub_1C2D6EC(this, jsonstr);
    }
  }
  v38 = v4[4].klass;
  if ( !v38 )
    goto LABEL_53;
  BattleScriptRootComponent__ProcessBattleScripts(
    (BattleScriptRootComponent_o *)v4,
    (int32_t)v38->_1.byval_arg.data,
    v32);
}


void BattleScriptRootComponent__EndRequestBattleSetup(System_String_o *result, const MethodInfo *method)
{
  System_String_o *v2; // x19
  void *monitor; // x21
  int32_t v4; // w19
  int32_t klass_high; // w20
  const MethodInfo *v6; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = result;
  if ( (byte_4C2ABDB & 1) == 0 )
  {
    sub_1C2D490(&BattleData_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_BattleMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__);
    sub_1C2D490(&ScriptManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    result = (System_String_o *)sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C2ABDB = 1;
  }
  entity = 0;
  if ( !v2 )
    goto LABEL_20;
  if ( System_String__Equals_63493168(v2, (System_String_o *)StringLiteral_22195/*"ng"*/, 0) )
  {
    result = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( result )
    {
      CommonUI__SetLoadMode((CommonUI_o *)result, 0, 0);
      result = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( result )
      {
        AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)result, 34, 1, 0, 0, 0);
        return;
      }
    }
LABEL_20:
    sub_1C2D6EC(result, method);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !result )
    goto LABEL_20;
  result = (System_String_o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                &entity,
                                (const MethodInfo_338A420 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_20;
    monitor = entity[1].monitor;
    klass_high = HIDWORD(entity[2].klass);
    v4 = (int32_t)entity[2].monitor;
    if ( !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    BattleData__setResumeBattleId((int64_t)monitor, klass_high, v4, 0);
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0);
  ScriptManager__ClearSelectRouteArray(0);
  BattleScriptRootComponent__StartBattle(v6);
}


void BattleScriptRootComponent__GoForBattle(BattleSetupInfo_o *battleSetupInfo, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C2ABDD & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleScriptRootComponent_EndRequestBattleSetup__);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&ScriptManager_TypeInfo);
    byte_4C2ABDD = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0);
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v3, 0, Method_BattleScriptRootComponent_EndRequestBattleSetup__, 0);
  BattleScriptRootComponent__RequestBattleSetup(battleSetupInfo, v3, v4);
}


void BattleScriptRootComponent__LoadPlayScenarioWithMap(
        BattleScriptRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  TerminalPramsManager_c *v8; // x0
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C2ABCE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2ABCE = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo || !Instance )
    goto LABEL_36;
  if ( !QuestPhaseDetailMaster__TryGetEntity(
          (QuestPhaseDetailMaster_o *)Instance,
          &entity,
          talkInfo->fields.qId,
          talkInfo->fields.pId,
          0) )
    goto LABEL_11;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_36;
  if ( !QuestPhaseDetailEntity__HasFlag(entity, 0x20000000000LL, 0) )
  {
LABEL_11:
    ActionExtensions__Call(callback, 0);
    return;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0) )
    goto LABEL_11;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_36:
    sub_1C2D6EC(Instance, v6);
  AvalonSceneManager__transitionScene_40936996((AvalonSceneManager_o *)Instance, 34, callback, 1, 0, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23BE3 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23BE3 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_DispState_k__BackingField = 2;
  if ( !byte_4C21ACD )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_4C21ACD = 1;
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_4C22ED0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_4C22ED0 = 1;
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_IsDispOnly_k__BackingField = 1;
  if ( !byte_4C2AC23 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_4C2AC23 = 1;
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_IsScriptDisp_k__BackingField = 1;
  if ( !byte_4C24718 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_4C24718 = 1;
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_IsPlayScriptWithMap_k__BackingField = 1;
}


void BattleScriptRootComponent__OnDestroy(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C2ABC7 & 1) == 0 )
  {
    sub_1C2D490(&ScriptManager_TypeInfo);
    byte_4C2ABC7 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ReleaseBattleDemo(0);
}


void BattleScriptRootComponent__PlayStaffRoll(
        BattleScriptRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  AssetLoader_LoadEndDataHandler_o *v12; // x19

  if ( (byte_4C2ABEB & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&CommonUI_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_BattleScriptRootComponent___c__DisplayClass48_0__PlayStaffRoll_b__0__);
    sub_1C2D490(&BattleScriptRootComponent___c__DisplayClass48_0_TypeInfo);
    sub_1C2D490(&StringLiteral_6032/*"Endroll"*/);
    byte_4C2ABEB = 1;
  }
  v5 = sub_1C2D6DC(BattleScriptRootComponent___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  CommonUI__SetForceObi_16_9(1, 0);
  v12 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_BattleScriptRootComponent___c__DisplayClass48_0__PlayStaffRoll_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6032/*"Endroll"*/, v12, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleScriptRootComponent__ProceedToNextTalkPhase(
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
        (v6 = this->fields.talkInfo) == 0) )
  {
    sub_1C2D6EC(talkInfo, isExit);
  }
  BattleScriptRootComponent__ProcessBattleScripts(this, v6->fields.talkPhase, v5);
}


void BattleScriptRootComponent__ProceedToNextTalkPhase_47543176(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v2);
}


void BattleScriptRootComponent__ProcessBattleScripts(
        BattleScriptRootComponent_o *this,
        int32_t phaseType,
        const MethodInfo *method)
{
  BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x21
  const MethodInfo *v6; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  int32_t FadeoutKind; // w20
  bool v11; // zf
  CommonUI_o *v12; // x20
  const MethodInfo *v13; // x1
  System_Action_o *v14; // x0
  intptr_t *v15; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v16; // x8
  System_Action_o *v17; // x20
  const MethodInfo *v18; // x2
  AvalonSceneManager_c *v19; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21

  if ( (byte_4C2ABCC & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_BattleScriptRootComponent_StartScriptFinishBattleAfterDemo__);
    sub_1C2D490(&Method_BattleScriptRootComponent_StartScriptFinishBattle__);
    sub_1C2D490(&Method_BattleScriptRootComponent__ProcessBattleScripts_b__15_0__);
    sub_1C2D490(&ScriptManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4C2ABCC = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__SaveTalkResumeInfo(talkInfo, 0);
  switch ( phaseType )
  {
    case 0:
    case 10:
      BattleScriptRootComponent__TransitionTerminal(this, v6);
      return;
    case 1:
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !Instance )
        goto LABEL_31;
      if ( !clsQuestCheck__isPlayQuestStartAction((clsQuestCheck_o *)Instance, 0) )
      {
        BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v9);
        return;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_31;
      FadeoutKind = CommonUI__maskFadGetFadeoutKind((CommonUI_o *)Instance, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v11 = FadeoutKind == 1;
      v12 = (CommonUI_o *)Instance;
      if ( v11 )
      {
        if ( Instance )
        {
          CommonUI__maskFadeout((CommonUI_o *)Instance, 1, 0.0, 0, 0);
          BattleScriptRootComponent__StartBattleQuestStart(this, v13);
          return;
        }
LABEL_31:
        sub_1C2D6EC(Instance, v8);
      }
      v19 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v19 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
      v21 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        v21,
        (Il2CppObject *)this,
        Method_BattleScriptRootComponent__ProcessBattleScripts_b__15_0__,
        0);
      if ( !v12 )
        goto LABEL_31;
      CommonUI__maskFadeout(v12, 1, DEFAULT_FADE_TIME, v21, 0);
      return;
    case 2:
      BattleScriptRootComponent__StartScriptBefeoreBattleDemo(this, v6);
      return;
    case 3:
      BattleScriptRootComponent__StartDemoBeforeBattle(this, v6);
      return;
    case 4:
      BattleScriptRootComponent__StartScriptBeforeBattleAfterDemo(this, v6);
      return;
    case 5:
      BattleScriptRootComponent__EndBeforeBattleScript(this, v6);
      return;
    case 6:
      BattleScriptRootComponent__ChkCondHavingBranchQuest(this, v6);
      v16 = this->fields.talkInfo;
      if ( !v16 )
        goto LABEL_31;
      if ( v16->fields.talkType == 5 )
      {
        BattleScriptRootComponent__StartScriptNoBattleAfter(this, v8);
      }
      else
      {
        v14 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        v15 = &Method_BattleScriptRootComponent_StartScriptFinishBattle__;
LABEL_26:
        v17 = v14;
        System_Action___ctor(v14, (Il2CppObject *)this, *v15, 0);
        BattleScriptRootComponent__LoadPlayScenarioWithMap(this, v17, v18);
      }
      return;
    case 7:
      BattleScriptRootComponent__StartDemoFinishBattle(this, v6);
      return;
    case 8:
      v14 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      v15 = &Method_BattleScriptRootComponent_StartScriptFinishBattleAfterDemo__;
      goto LABEL_26;
    case 9:
      BattleScriptRootComponent__StartSecondDemoFinishBattle(this, v6);
      return;
    default:
      return;
  }
}


void BattleScriptRootComponent__RequestBattleSecnarioForNoneBattleQuest(
        BattleScriptRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  const MethodInfo *v7; // x1
  Il2CppObject *v8; // x20
  Il2CppObject *Master_object; // x20
  QuestEntity_o *v10; // x20
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v12; // x8
  BattleScenarioRequest_o *v13; // x19
  int32_t pId; // w20
  int32_t qId; // w21
  QuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C2ABDF & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleScriptRootComponent_EndRequestBattleScenario__);
    sub_1C2D490(&Method_DataManager_GetMasterData_LoginQuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_NetworkManager_getRequest_BattleScenarioRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&ScriptManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2ABDF = 1;
  }
  entity = 0;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_LoginQuestMaster___);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo || !Instance )
    goto LABEL_43;
  if ( LoginQuestMaster__GetEntityByQuestId((LoginQuestMaster_o *)Instance, talkInfo->fields.qId, 0) )
  {
    BattleScriptRootComponent__TransitionTerminal(this, v7);
    return;
  }
  v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21464 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v8 )
    goto LABEL_43;
  CommonUI__CheckChangeOtherConnectMarkFromQuestClear(
    (CommonUI_o *)v8,
    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 604LL),
    0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21464 = 1;
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
          0) )
    goto LABEL_35;
  v10 = entity;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21463 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21463 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v10 )
LABEL_43:
    sub_1C2D6EC(Instance, v5);
  if ( QuestEntity__HasFlag_42234640(v10, 0x8000, *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL) + 1, 0) )
  {
    Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  }
LABEL_35:
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent_EndRequestBattleScenario__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getRequest_object_(
                                v11,
                                (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  v12 = this->fields.talkInfo;
  if ( !v12 )
    goto LABEL_43;
  v13 = (BattleScenarioRequest_o *)Instance;
  qId = v12->fields.qId;
  pId = v12->fields.pId;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  Instance = (DataManager_o *)ScriptManager__GetSelectRouteArray(0);
  if ( !v13 )
    goto LABEL_43;
  BattleScenarioRequest__beginRequest(v13, qId, pId, (System_Int32_array *)Instance, 0);
}


void BattleScriptRootComponent__RequestBattleSetup(
        BattleSetupInfo_o *battleSetupInfo,
        NetworkManager_ResultCallbackFunc_o *callbackFunc,
        const MethodInfo *method)
{
  CommonUI_o *routeSelect; // x0
  __int64 v6; // x1
  int32_t questPhase; // w21
  int32_t questId; // w22
  BalanceConfig_c *v9; // x0
  float BgmFadeOutTimeBeforeBattle; // s8
  Il2CppObject *Request_object; // x20
  int32_t SelectBranchIndex; // w0
  int32_t followerClassId; // w25
  int32_t followerGrandGraphId; // w26
  int32_t boostId; // w21
  int32_t itemId; // w27
  int32_t enemySelect; // w28
  int64_t deckId; // x8
  int64_t followerId; // x24
  int32_t v20; // w0
  int64_t userEquipId; // x22
  int32_t followerType; // w23
  int32_t questSelect; // w29
  int64_t activeDeckId; // [xsp+78h] [xbp-78h]
  int32_t v25; // [xsp+88h] [xbp-68h]
  int32_t v26; // [xsp+8Ch] [xbp-64h]

  if ( (byte_4C2ABDE & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&BgmManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_NetworkManager_getRequest_BattleSetupRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&ScriptManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&SoundManager_TypeInfo);
    byte_4C2ABDE = 1;
  }
  routeSelect = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !routeSelect )
    goto LABEL_23;
  CommonUI__SetLoadMode(routeSelect, 2, 0);
  if ( !battleSetupInfo )
    goto LABEL_23;
  questId = battleSetupInfo->fields.questId;
  questPhase = battleSetupInfo->fields.questPhase;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  routeSelect = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !routeSelect )
    goto LABEL_23;
  routeSelect = (CommonUI_o *)QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)routeSelect, questId, questPhase, 0);
  if ( !routeSelect )
    goto LABEL_23;
  if ( QuestPhaseEntity__IsFadeOutMainBgmBeforeBattle((QuestPhaseEntity_o *)routeSelect, 0) )
  {
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    BgmManager__Enable_KeepSubBgm(1, 0);
    v9 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    BgmFadeOutTimeBeforeBattle = v9->static_fields->BgmFadeOutTimeBeforeBattle;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__fadeoutBgm(BgmFadeOutTimeBeforeBattle, 0);
    BgmManager__Enable_KeepSubBgm(0, 0);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     callbackFunc,
                     (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_BattleSetupRequest___);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  SelectBranchIndex = ScriptManager__GetSelectBranchIndex(0);
  followerClassId = battleSetupInfo->fields.followerClassId;
  followerGrandGraphId = battleSetupInfo->fields.followerGrandGraphId;
  itemId = battleSetupInfo->fields.itemId;
  boostId = battleSetupInfo->fields.boostId;
  enemySelect = SelectBranchIndex;
  v25 = battleSetupInfo->fields.questPhase;
  v26 = battleSetupInfo->fields.questId;
  deckId = battleSetupInfo->fields.deckId;
  followerId = battleSetupInfo->fields.followerId;
  battleSetupInfo->fields.selectedBranchIdx = SelectBranchIndex;
  activeDeckId = deckId;
  v20 = BattleSetupInfo__TargetQuestBranchIdx(battleSetupInfo, 0);
  userEquipId = battleSetupInfo->fields.userEquipId;
  followerType = battleSetupInfo->fields.followerType;
  questSelect = v20;
  routeSelect = (CommonUI_o *)ScriptManager__GetSelectRouteArray(0);
  if ( !Request_object )
LABEL_23:
    sub_1C2D6EC(routeSelect, v6);
  BattleSetupRequest__beginRequest(
    (BattleSetupRequest_o *)Request_object,
    v26,
    v25,
    activeDeckId,
    followerId,
    followerClassId,
    followerGrandGraphId,
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
    0);
}


void BattleScriptRootComponent__SavePlayedNotMeetsScript(
        BattleScriptRootComponent_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  QuestPhaseEntity_o *Entity; // x0
  System_String_o *ScriptName_NotMeetsCond; // x0
  System_String_o *v10; // x0
  int32_t ScriptIntParam; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C2ABDA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&ScriptManager_TypeInfo);
    sub_1C2D490(&StringLiteral_17011/*"badEndId"*/);
    sub_1C2D490(&StringLiteral_22286/*"notMeets"*/);
    byte_4C2ABDA = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    sub_1C2D6EC(0, v7);
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Master_object, questId, phase, 0);
  if ( Entity )
  {
    ScriptIntParam = QuestPhaseEntity__getScriptIntParam(Entity, (System_String_o *)StringLiteral_17011/*"badEndId"*/, 0, 0);
    if ( ScriptIntParam )
    {
      ScriptName_NotMeetsCond = System_Int32__ToString((int32_t)&ScriptIntParam, 0);
    }
    else
    {
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      ScriptName_NotMeetsCond = ScriptManager__GetScriptName_NotMeetsCond(questId, phase, 0);
    }
    v10 = System_String__Concat_63457864((System_String_o *)StringLiteral_22286/*"notMeets"*/, ScriptName_NotMeetsCond, 0);
    UnityEngine_PlayerPrefs__SetInt(v10, 1, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void BattleScriptRootComponent__ScriptFinishBattleAfterDemoEnd(
        BattleScriptRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_Int32_array *Request_object; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  NetworkManager_ResultCallbackFunc_o *v11; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleRouteSelectRequest_o *v13; // x19
  int32_t pId; // w20
  int32_t qId; // w21

  if ( (byte_4C2ABD3 & 1) == 0 )
  {
    sub_1C2D490(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&ScriptManager_TypeInfo);
    sub_1C2D490(&Method_BattleScriptRootComponent___c__DisplayClass24_0__ScriptFinishBattleAfterDemoEnd_b__0__);
    sub_1C2D490(&BattleScriptRootComponent___c__DisplayClass24_0_TypeInfo);
    byte_4C2ABD3 = 1;
  }
  v5 = sub_1C2D6DC(BattleScriptRootComponent___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_15;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_BYTE *)(v5 + 24) = isExit;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( ScriptManager__GetSelectRouteArray(0) )
  {
    v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v11,
      (Il2CppObject *)v5,
      Method_BattleScriptRootComponent___c__DisplayClass24_0__ScriptFinishBattleAfterDemoEnd_b__0__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (System_Int32_array *)NetworkManager__getRequest_object_(
                                             v11,
                                             (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      v13 = (BattleRouteSelectRequest_o *)Request_object;
      qId = talkInfo->fields.qId;
      pId = talkInfo->fields.pId;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      Request_object = ScriptManager__GetSelectRouteArray(0);
      if ( v13 )
      {
        BattleRouteSelectRequest__beginRequest(v13, qId, pId, Request_object, 0);
        return;
      }
    }
LABEL_15:
    sub_1C2D6EC(Request_object, v7);
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v10);
}


bool BattleScriptRootComponent__StartBattle(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  int v3; // w20

  if ( (byte_4C2ABDC & 1) == 0 )
  {
    sub_1C2D490(&Method_AvalonSceneManager_UnloadScene_FollowerRootComponent___);
    sub_1C2D490(&Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C2ABDC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v3 = BYTE4(Instance[9].klass);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  if ( !v3 )
  {
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 10, 1, 0, 1, 0);
    return 1;
  }
  AvalonSceneManager__UnloadScene_object_(
    (AvalonSceneManager_o *)Instance,
    (const MethodInfo_30B6718 *)Method_AvalonSceneManager_UnloadScene_FollowerRootComponent___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (AvalonSceneManager__UnloadScene_object_(
          (AvalonSceneManager_o *)Instance,
          (const MethodInfo_30B6718 *)Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
LABEL_11:
    sub_1C2D6EC(Instance, v2);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 10, 1, 0, 0);
  return 1;
}


void BattleScriptRootComponent__StartBattleQuestStart(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C2ABD5 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleScriptRootComponent_ProceedToNextTalkPhase__);
    sub_1C2D490(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4C2ABD5 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BattleScriptRootComponent_ProceedToNextTalkPhase__, 0);
  if ( !Instance )
    sub_1C2D6EC(v5, v6);
  clsQuestCheck__PlayQuestStartAction((clsQuestCheck_o *)Instance, v4, 0);
}


void BattleScriptRootComponent__StartDemoBeforeBattle(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  int32_t name_high; // w20
  int32_t namespaze; // w21
  System_Action_object__o *v6; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4C2ABD7 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_string__TypeInfo);
    sub_1C2D490(&Method_BattleScriptRootComponent__StartDemoBeforeBattle_b__28_0__);
    this = (BattleScriptRootComponent_o *)sub_1C2D490(&ScriptManager_TypeInfo);
    byte_4C2ABD7 = 1;
  }
  klass = v2[4].klass;
  if ( !klass )
    sub_1C2D6EC(this, method);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v6 = (System_Action_object__o *)sub_1C2D6DC(System_Action_string__TypeInfo);
  System_Action_object____ctor(v6, v2, Method_BattleScriptRootComponent__StartDemoBeforeBattle_b__28_0__, 0);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__LoadBattleStartGameDemo(name_high, namespaze, 0, (System_Action_string__o *)v6, 0, 0);
}


void BattleScriptRootComponent__StartDemoFinishBattle(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x0
  int32_t qId; // w20
  int32_t pId; // w21
  System_Action_object__o *v6; // x22
  const MethodInfo *v7; // x2

  if ( (byte_4C2ABD1 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_string__TypeInfo);
    sub_1C2D490(&Method_BattleScriptRootComponent__StartDemoFinishBattle_b__22_0__);
    sub_1C2D490(&ScriptManager_TypeInfo);
    byte_4C2ABD1 = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_1C2D6EC(0, method);
  qId = talkInfo->fields.qId;
  if ( qId < 1 )
  {
    BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(talkInfo, method);
    BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v7);
  }
  else
  {
    pId = talkInfo->fields.pId;
    v6 = (System_Action_object__o *)sub_1C2D6DC(System_Action_string__TypeInfo);
    System_Action_object____ctor(
      v6,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent__StartDemoFinishBattle_b__22_0__,
      0);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__LoadBattleEndGameDemo(qId, pId, 1, (System_Action_string__o *)v6, 0, 0);
  }
}


void BattleScriptRootComponent__StartMashuPowerUpAction(
        BattleScriptRootComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  TerminalPramsManager_c *v9; // x0
  int32_t WarId_k__BackingField; // w22
  Il2CppObject *Instance; // x20
  CombineResultEffectComponent_ClickDelegate_o *v12; // x21

  if ( (byte_4C2ABE7 & 1) == 0 )
  {
    sub_1C2D490(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&TutorialFlag_TypeInfo);
    sub_1C2D490(&Method_BattleScriptRootComponent___c__DisplayClass44_0__StartMashuPowerUpAction_b__0__);
    sub_1C2D490(&BattleScriptRootComponent___c__DisplayClass44_0_TypeInfo);
    sub_1C2D490(&StringLiteral_8531/*"MASHU_CHANGE_WAR_ID"*/);
    byte_4C2ABE7 = 1;
  }
  v4 = sub_1C2D6DC(BattleScriptRootComponent___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_17;
  *(_QWORD *)(v4 + 16) = end_act;
  sub_1C2D434((CGThumbnailListItem_o *)(v4 + 16), (int32_t)end_act, v7, v8);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C216DE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C216DE = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v9->static_fields->_WarId_k__BackingField;
  if ( WarId_k__BackingField != ConstantMaster__getValue((System_String_o *)StringLiteral_8531/*"MASHU_CHANGE_WAR_ID"*/, 0) )
    goto LABEL_14;
  *(_DWORD *)(v4 + 24) = 115;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40206092(115, 0) )
  {
LABEL_14:
    ActionExtensions__Call(*(System_Action_o **)(v4 + 16), 0);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1C2D6DC(CombineResultEffectComponent_ClickDelegate_TypeInfo);
  CombineResultEffectComponent_ClickDelegate___ctor(
    v12,
    (Il2CppObject *)v4,
    Method_BattleScriptRootComponent___c__DisplayClass44_0__StartMashuPowerUpAction_b__0__,
    0);
  if ( !Instance )
LABEL_17:
    sub_1C2D6EC(v5, v6);
  CommonUI__OpenPowerUp((CommonUI_o *)Instance, v12, 0);
}


System_Collections_IEnumerator_o *BattleScriptRootComponent__StartMovie(
        BattleScriptRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C2ABCB & 1) == 0 )
  {
    sub_1C2D490(&BattleScriptRootComponent__StartMovie_d__14_TypeInfo);
    byte_4C2ABCB = 1;
  }
  v5 = sub_1C2D6DC(BattleScriptRootComponent__StartMovie_d__14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 40), (int32_t)callback, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void BattleScriptRootComponent__StartScript(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  int namespaze_high; // w8
  Il2CppClass *v5; // x8
  const MethodInfo *v6; // x2
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2
  System_Collections_IEnumerator_o *started; // x1
  BattleScriptRootComponent_TalkScriptInfo_o *v10; // x20
  Il2CppClass *v11; // x8
  int namespaze; // w8
  int name_high; // w9
  Il2CppClass *v14; // x8

  v2 = (Il2CppObject *)this;
  if ( (byte_4C2ABCA & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleScriptRootComponent__StartScript_b__13_0__);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C2D490(&ScriptManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (BattleScriptRootComponent_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2ABCA = 1;
  }
  klass = v2[4].klass;
  if ( !klass )
    goto LABEL_25;
  namespaze_high = HIDWORD(klass->_1.namespaze);
  if ( (unsigned int)(namespaze_high - 3) < 4 )
  {
    this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (BattleScriptRootComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v5 = v2[4].klass;
      if ( v5 )
      {
        if ( this )
        {
          this = (BattleScriptRootComponent_o *)QuestPhaseMaster__IsMoviePhase(
                                                  (QuestPhaseMaster_o *)this,
                                                  HIDWORD(v5->_1.name),
                                                  (int32_t)v5->_1.namespaze,
                                                  0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
            System_Action___ctor(v7, v2, Method_BattleScriptRootComponent__StartScript_b__13_0__, 0);
            started = BattleScriptRootComponent__StartMovie((BattleScriptRootComponent_o *)v2, v7, v8);
            UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)v2, started, 0);
            return;
          }
          v14 = v2[4].klass;
          if ( v14 )
          {
            BattleScriptRootComponent__ProcessBattleScripts(
              (BattleScriptRootComponent_o *)v2,
              (int32_t)v14->_1.byval_arg.data,
              v6);
            return;
          }
        }
      }
    }
LABEL_25:
    sub_1C2D6EC(this, method);
  }
  if ( namespaze_high == 1 )
  {
    this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_25;
    CommonUI__maskFadeout((CommonUI_o *)this, 2, 0.0, 0, 0);
    v10 = (BattleScriptRootComponent_TalkScriptInfo_o *)v2[4].klass;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__SaveTalkResumeInfo(v10, 0);
    v11 = v2[4].klass;
    if ( !v11 )
      goto LABEL_25;
    name_high = HIDWORD(v11->_1.name);
    namespaze = (int)v11->_1.namespaze;
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


void BattleScriptRootComponent__StartScriptBefeoreBattleDemo(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  BattleScriptRootComponent_o *v2; // x23
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v4; // x8
  char v5; // w24
  int32_t wId; // w19
  int32_t qId; // w20
  int32_t pId; // w21
  ScriptManager_CallbackFunc_o *v9; // x0
  ScriptManager_CallbackFunc_o *v10; // x22
  int32_t JumpLine; // w23
  struct BattleScriptRootComponent_TalkScriptInfo_o *v12; // x8
  int32_t v13; // w23
  int32_t talkType; // w24

  v2 = this;
  if ( (byte_4C2ABD6 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleScriptRootComponent_ProceedToNextTalkPhase___78003696);
    sub_1C2D490(&Method_BattleScriptRootComponent_RequestBattleSecnarioForNoneBattleQuest__);
    sub_1C2D490(&ScriptManager_CallbackFunc_TypeInfo);
    this = (BattleScriptRootComponent_o *)sub_1C2D490(&ScriptManager_TypeInfo);
    byte_4C2ABD6 = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_15;
  this = (BattleScriptRootComponent_o *)WarMaster__IsLastQuest(talkInfo->fields.wId, talkInfo->fields.qId, 0);
  v4 = v2->fields.talkInfo;
  if ( !v4 )
    goto LABEL_15;
  v5 = (char)this;
  wId = v4->fields.wId;
  qId = v4->fields.qId;
  pId = v4->fields.pId;
  v9 = (ScriptManager_CallbackFunc_o *)sub_1C2D6DC(ScriptManager_CallbackFunc_TypeInfo);
  v10 = v9;
  if ( (v5 & 1) != 0 )
  {
    ScriptManager_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)v2,
      Method_BattleScriptRootComponent_RequestBattleSecnarioForNoneBattleQuest__,
      0);
    this = (BattleScriptRootComponent_o *)v2->fields.talkInfo;
    if ( this )
    {
      JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
                   (BattleScriptRootComponent_TalkScriptInfo_o *)this,
                   method);
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      ScriptManager__PlayBattleStartWhite(wId, qId, pId, v10, 0, 0, JumpLine, 0, 0);
      return;
    }
LABEL_15:
    sub_1C2D6EC(this, method);
  }
  ScriptManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)v2,
    Method_BattleScriptRootComponent_ProceedToNextTalkPhase___78003696,
    0);
  this = (BattleScriptRootComponent_o *)v2->fields.talkInfo;
  if ( !this )
    goto LABEL_15;
  this = (BattleScriptRootComponent_o *)BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
                                          (BattleScriptRootComponent_TalkScriptInfo_o *)this,
                                          method);
  v12 = v2->fields.talkInfo;
  if ( !v12 )
    goto LABEL_15;
  v13 = (int)this;
  talkType = v12->fields.talkType;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayBattleStart(wId, qId, pId, v10, 0, 0, v13, talkType == 6, 0, 0, 0);
}


void BattleScriptRootComponent__StartScriptBeforeBattleAfterDemo(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  BattleScriptRootComponent_o *v2; // x22
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w19
  int32_t qId; // w20
  int32_t pId; // w21
  ScriptManager_CallbackFunc_o *v7; // x23
  int32_t JumpLine; // w22

  v2 = this;
  if ( (byte_4C2ABD8 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleScriptRootComponent_ProceedToNextTalkPhase___78003696);
    sub_1C2D490(&ScriptManager_CallbackFunc_TypeInfo);
    this = (BattleScriptRootComponent_o *)sub_1C2D490(&ScriptManager_TypeInfo);
    byte_4C2ABD8 = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        qId = talkInfo->fields.qId,
        pId = talkInfo->fields.pId,
        v7 = (ScriptManager_CallbackFunc_o *)sub_1C2D6DC(ScriptManager_CallbackFunc_TypeInfo),
        ScriptManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)v2,
          Method_BattleScriptRootComponent_ProceedToNextTalkPhase___78003696,
          0),
        (this = (BattleScriptRootComponent_o *)v2->fields.talkInfo) == 0) )
  {
    sub_1C2D6EC(this, method);
  }
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)this,
               method);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayBattleStart2(wId, qId, pId, v7, 0, 0, JumpLine, 0);
}


void BattleScriptRootComponent__StartScriptFinishBattle(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *talkInfo; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v4; // x8
  int32_t pId; // w19
  int32_t qId; // w20
  int v7; // w25
  int32_t winResult; // w22
  ScriptManager_CallbackFunc_o *v9; // x23
  int32_t JumpLine; // w21
  TerminalPramsManager_c *v11; // x0
  _BOOL4 IsPlayScriptWithMap_k__BackingField; // w24
  TerminalPramsManager_c *v13; // x0

  if ( (byte_4C2ABCF & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleScriptRootComponent_StartScriptFinishBattleEnd2__);
    sub_1C2D490(&BgmManager_TypeInfo);
    sub_1C2D490(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&ScriptManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2ABCF = 1;
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
    ScriptManager__DeleteTalkResumeInfo(0);
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    BgmManager__SetMute(0, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C21ACD )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C21ACD = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    v13->static_fields->_IsAutoResume_k__BackingField = 1;
    talkInfo = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( talkInfo )
    {
      AvalonSceneManager__transitionSceneRefresh(talkInfo, 34, 1, 0, 0, 0);
      return;
    }
LABEL_38:
    sub_1C2D6EC(talkInfo, method);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C242EE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C242EE = 1;
  }
  talkInfo = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    talkInfo = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  v4 = this->fields.talkInfo;
  if ( !v4 )
    goto LABEL_38;
  qId = v4->fields.qId;
  pId = v4->fields.pId;
  v7 = BYTE2(talkInfo[1].fields.sendData[6].monitor);
  winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(this->fields.talkInfo, method);
  v9 = (ScriptManager_CallbackFunc_o *)sub_1C2D6DC(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent_StartScriptFinishBattleEnd2__,
    0);
  talkInfo = (AvalonSceneManager_o *)this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_38;
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)talkInfo,
               method);
  if ( v7 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C24302 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24302 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    IsPlayScriptWithMap_k__BackingField = v11->static_fields->_IsPlayScriptWithMap_k__BackingField;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__PlayBattleEnd2_44254740(
      qId,
      pId,
      winResult,
      15,
      v9,
      0,
      JumpLine,
      IsPlayScriptWithMap_k__BackingField,
      0);
  }
  else
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__PlayBattleEnd2(qId, pId, winResult, v9, 0, JumpLine, 0);
  }
}


void BattleScriptRootComponent__StartScriptFinishBattleAfterDemo(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x0
  int32_t qId; // w20
  int32_t pId; // w21
  int32_t winResult; // w22
  ScriptManager_CallbackFunc_o *v7; // x23
  int32_t JumpLine; // w19
  struct BattleScriptRootComponent_TalkScriptInfo_o *v9; // x8
  int32_t v10; // w20
  int32_t v11; // w21
  int v12; // w26
  int32_t v13; // w22
  ScriptManager_CallbackFunc_o *v14; // x23
  int32_t v15; // w19
  TerminalPramsManager_c *v16; // x0
  _BOOL4 IsPlayScriptWithMap_k__BackingField; // w24

  if ( (byte_4C2ABD2 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleScriptRootComponent_ScriptFinishBattleAfterDemoEnd__);
    sub_1C2D490(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&ScriptManager_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2ABD2 = 1;
  }
  if ( this->fields.setEndRoll )
  {
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      qId = talkInfo->fields.qId;
      pId = talkInfo->fields.pId;
      winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(talkInfo, method);
      v7 = (ScriptManager_CallbackFunc_o *)sub_1C2D6DC(ScriptManager_CallbackFunc_TypeInfo);
      ScriptManager_CallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_BattleScriptRootComponent_ScriptFinishBattleAfterDemoEnd__,
        0);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(talkInfo, method);
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        ScriptManager__PlayBattleEndWhite(qId, pId, winResult, v7, 0, JumpLine, 0);
        return;
      }
    }
LABEL_30:
    sub_1C2D6EC(talkInfo, method);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C242EE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C242EE = 1;
  }
  talkInfo = (BattleScriptRootComponent_TalkScriptInfo_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    talkInfo = (BattleScriptRootComponent_TalkScriptInfo_o *)TerminalPramsManager_TypeInfo;
  }
  v9 = this->fields.talkInfo;
  if ( !v9 )
    goto LABEL_30;
  v11 = v9->fields.qId;
  v10 = v9->fields.pId;
  v12 = *(unsigned __int8 *)(*(_QWORD *)&talkInfo[3].fields.wId + 106LL);
  v13 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(this->fields.talkInfo, method);
  v14 = (ScriptManager_CallbackFunc_o *)sub_1C2D6DC(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent_ScriptFinishBattleAfterDemoEnd__,
    0);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_30;
  v15 = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(talkInfo, method);
  if ( v12 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C24302 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C24302 = 1;
    }
    v16 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v16 = TerminalPramsManager_TypeInfo;
    }
    IsPlayScriptWithMap_k__BackingField = v16->static_fields->_IsPlayScriptWithMap_k__BackingField;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__PlayBattleEnd_44253424(v11, v10, v13, 15, v14, 0, v15, IsPlayScriptWithMap_k__BackingField, 0);
  }
  else
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__PlayBattleEnd(v11, v10, v13, v14, 0, v15, 0);
  }
}


void BattleScriptRootComponent__StartScriptFinishBattleEnd2(
        BattleScriptRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_Int32_array *Request_object; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  NetworkManager_ResultCallbackFunc_o *v11; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleRouteSelectRequest_o *v13; // x19
  int32_t pId; // w20
  int32_t qId; // w21

  if ( (byte_4C2ABD0 & 1) == 0 )
  {
    sub_1C2D490(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&ScriptManager_TypeInfo);
    sub_1C2D490(&Method_BattleScriptRootComponent___c__DisplayClass21_0__StartScriptFinishBattleEnd2_b__0__);
    sub_1C2D490(&BattleScriptRootComponent___c__DisplayClass21_0_TypeInfo);
    byte_4C2ABD0 = 1;
  }
  v5 = sub_1C2D6DC(BattleScriptRootComponent___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_15;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_BYTE *)(v5 + 24) = isExit;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( ScriptManager__GetSelectRouteArray(0) )
  {
    v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v11,
      (Il2CppObject *)v5,
      Method_BattleScriptRootComponent___c__DisplayClass21_0__StartScriptFinishBattleEnd2_b__0__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (System_Int32_array *)NetworkManager__getRequest_object_(
                                             v11,
                                             (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      v13 = (BattleRouteSelectRequest_o *)Request_object;
      qId = talkInfo->fields.qId;
      pId = talkInfo->fields.pId;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      Request_object = ScriptManager__GetSelectRouteArray(0);
      if ( v13 )
      {
        BattleRouteSelectRequest__beginRequest(v13, qId, pId, Request_object, 0);
        return;
      }
    }
LABEL_15:
    sub_1C2D6EC(Request_object, v7);
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v10);
}


void BattleScriptRootComponent__StartScriptNoBattleAfter(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x0
  _BOOL4 setEndRoll; // w25
  int32_t qId; // w19
  int32_t pId; // w20
  int32_t winResult; // w21
  ScriptManager_CallbackFunc_o *v8; // x0
  ScriptManager_CallbackFunc_o *v9; // x22
  int32_t JumpLine; // w23
  int32_t v11; // w23

  if ( (byte_4C2ABE1 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__38_0__);
    sub_1C2D490(&Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__38_1__);
    sub_1C2D490(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&ScriptManager_TypeInfo);
    byte_4C2ABE1 = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_13;
  setEndRoll = this->fields.setEndRoll;
  qId = talkInfo->fields.qId;
  pId = talkInfo->fields.pId;
  winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(talkInfo, method);
  v8 = (ScriptManager_CallbackFunc_o *)sub_1C2D6DC(ScriptManager_CallbackFunc_TypeInfo);
  v9 = v8;
  if ( setEndRoll )
  {
    ScriptManager_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__38_0__,
      0);
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(talkInfo, method);
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      ScriptManager__PlayBattleEndWhite(qId, pId, winResult, v9, 0, JumpLine, 0);
      return;
    }
LABEL_13:
    sub_1C2D6EC(talkInfo, method);
  }
  ScriptManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__38_1__,
    0);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_13;
  v11 = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(talkInfo, method);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayBattleEnd(qId, pId, winResult, v9, 0, v11, 0);
}


void BattleScriptRootComponent__StartSecondDemoFinishBattle(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  int32_t name_high; // w20
  int32_t namespaze; // w21
  System_Action_object__o *v6; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4C2ABD4 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_string__TypeInfo);
    sub_1C2D490(&Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__25_0__);
    this = (BattleScriptRootComponent_o *)sub_1C2D490(&ScriptManager_TypeInfo);
    byte_4C2ABD4 = 1;
  }
  klass = v2[4].klass;
  if ( !klass )
    sub_1C2D6EC(this, method);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v6 = (System_Action_object__o *)sub_1C2D6DC(System_Action_string__TypeInfo);
  System_Action_object____ctor(v6, v2, Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__25_0__, 0);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__LoadBattleEndGameDemo(name_high, namespaze, 0, (System_Action_string__o *)v6, 0, 0);
}


void BattleScriptRootComponent__TransitionTerminal(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  int32_t EventID; // w21
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0
  const MethodInfo *v8; // x1
  TerminalPramsManager_c *v9; // x0
  Il2CppObject *v10; // x21
  Il2CppObject *v11; // x22
  System_Action_o *v12; // x23
  TerminalSceneComponent_c *v13; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v15; // x8
  UnityEngine_Object_o *v16; // x20
  __int64 v17; // x8
  clsQuestCheck_o *v18; // x20
  TerminalPramsManager_c *v19; // x0
  __int64 v20; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C2ABE8 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_AvalonSceneManager_UnloadSceneAsync_TerminalSceneComponent___);
    sub_1C2D490(&Method_AvalonSceneManager_UnloadScene_BattleScriptRootComponent___);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_BattleScriptRootComponent_TransitionTerminalSub__);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ScriptManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C2ABE8 = 1;
  }
  entity = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21ACD )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21ACD = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_4C24718 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C24718 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
  if ( !byte_4C216DE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C216DE = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  EventID = WarMaster__getEventID(v3->static_fields->_WarId_k__BackingField, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_91;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_91;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         EventID,
         (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_91;
    if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)entity, 0) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C2472C )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C2472C = 1;
      }
      v7 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v7 = TerminalPramsManager_TypeInfo;
      }
      v7->static_fields->_isPlayRiverActionCheck_k__BackingField = 1;
    }
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C242EE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C242EE = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( v9->static_fields->_IsScriptDisp_k__BackingField )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_91;
    AvalonSceneManager__UnloadScene_object_(
      (AvalonSceneManager_o *)Instance,
      (const MethodInfo_30B6718 *)Method_AvalonSceneManager_UnloadScene_BattleScriptRootComponent___);
    v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v12 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_BattleScriptRootComponent_TransitionTerminalSub__, 0);
    if ( !v11 )
      goto LABEL_91;
    Instance = (DataManager_o *)AvalonSceneManager__UnloadSceneAsync_object_(
                                  (AvalonSceneManager_o *)v11,
                                  v12,
                                  (const MethodInfo_30B6954 *)Method_AvalonSceneManager_UnloadSceneAsync_TerminalSceneComponent___);
    if ( !v10 )
      goto LABEL_91;
    UnityEngine_MonoBehaviour__StartCoroutine_71149276(
      (UnityEngine_MonoBehaviour_o *)v10,
      (System_Collections_IEnumerator_o *)Instance,
      0);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C21383 )
    {
      sub_1C2D490(&TerminalSceneComponent_TypeInfo);
      byte_4C21383 = 1;
    }
    v13 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v13 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_Object_o *)v13->static_fields->mInstance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4C21383 )
      {
        sub_1C2D490(&TerminalSceneComponent_TypeInfo);
        byte_4C21383 = 1;
      }
      Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
      }
      v15 = **(_QWORD **)&Instance[1].fields._DispLog;
      if ( !v15 )
        goto LABEL_91;
      v16 = *(UnityEngine_Object_o **)(v15 + 264);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v16, 0, 0) )
      {
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4C21383 )
        {
          sub_1C2D490(&TerminalSceneComponent_TypeInfo);
          byte_4C21383 = 1;
        }
        Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
        }
        v17 = **(_QWORD **)&Instance[1].fields._DispLog;
        if ( !v17 )
          goto LABEL_91;
        Instance = *(DataManager_o **)(v17 + 264);
        if ( !Instance )
          goto LABEL_91;
        ScrTerminalMap__SetDiceButton((ScrTerminalMap_o *)Instance, 0);
        Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
        v18 = (clsQuestCheck_o *)Instance;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( !v18 )
          goto LABEL_91;
        if ( clsQuestCheck__CheckQuestPlayableNow(
               v18,
               BalanceConfig_TypeInfo->static_fields->EventBoardGameNextBoardQuestId,
               0) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C24504 )
          {
            sub_1C2D490(&TerminalPramsManager_TypeInfo);
            byte_4C24504 = 1;
          }
          v19 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v19 = TerminalPramsManager_TypeInfo;
          }
          v19->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField = 1;
          Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
          if ( Instance )
          {
            MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
            return;
          }
LABEL_91:
          sub_1C2D6EC(Instance, v6);
        }
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4C21383 )
        {
          sub_1C2D490(&TerminalSceneComponent_TypeInfo);
          byte_4C21383 = 1;
        }
        Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
        }
        v20 = **(_QWORD **)&Instance[1].fields._DispLog;
        if ( !v20 )
          goto LABEL_91;
        Instance = *(DataManager_o **)(v20 + 264);
        if ( !Instance )
          goto LABEL_91;
        ScrTerminalMap__SetEventBoardQuestArrivalPanel((ScrTerminalMap_o *)Instance, 0);
      }
    }
  }
  else
  {
    BattleScriptRootComponent__TransitionTerminalSub(this, v8);
  }
}


void BattleScriptRootComponent__TransitionTerminalSub(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t v6; // w20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v7; // x8
  int32_t talkType; // w22
  bool v9; // w19
  TerminalPramsManager_c *v10; // x0

  if ( (byte_4C2ABE9 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2ABE9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo || !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)QuestPhaseMaster__IsInvisibleConnectAndLoad(
                                (QuestPhaseMaster_o *)Instance,
                                talkInfo->fields.qId,
                                talkInfo->fields.pId,
                                0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C244E8 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C244E8 = 1;
    }
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    }
    v6 = 2;
    *(_BYTE *)(*(_QWORD *)&Instance[1].fields._DispLog + 600LL) = 1;
  }
  else
  {
    v6 = 1;
  }
  v7 = this->fields.talkInfo;
  if ( !v7 )
    goto LABEL_29;
  talkType = v7->fields.talkType;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  if ( talkType != 5 )
    goto LABEL_21;
  v9 = AvalonSceneManager__checkLoadedScene((AvalonSceneManager_o *)Instance, 34, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_29:
    sub_1C2D6EC(Instance, v4);
  if ( v9 )
  {
    AvalonSceneManager__changeScene((AvalonSceneManager_o *)Instance, 34, v6, 0, 0);
    goto LABEL_22;
  }
LABEL_21:
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, v6, 0, 0, 0);
LABEL_22:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C2AC23 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2AC23 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_IsScriptDisp_k__BackingField = 0;
}


void BattleScriptRootComponent__TransitionWarBoard(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleSetupInfo_o *bSetupInfo; // x20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v7; // x8
  Il2CppObject *v8; // x3
  int32_t v9; // w1
  CommonUI_o *v10; // x19
  BattleScriptRootComponent___c_c *v11; // x8
  System_Action_o *_9__47_0; // x22
  System_String_o *v13; // x20
  System_String_o *v14; // x21
  Il2CppObject *v15; // x23
  struct BattleScriptRootComponent___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  TerminalPramsManager_c *v19; // x0

  if ( (byte_4C2ABEA & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&ScriptManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_BattleScriptRootComponent___c__TransitionWarBoard_b__47_0__);
    sub_1C2D490(&BattleScriptRootComponent___c_TypeInfo);
    sub_1C2D490(&StringLiteral_25407/*"バトルスクリプトエラー"*/);
    sub_1C2D490(&StringLiteral_25408/*"バトル前スクリプト以外のトークから聖杯戦争盤へ移動することはできません。\nターミナルへ戻ります。"*/);
    byte_4C2ABEA = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_32;
  if ( talkInfo->fields.talkType != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (CommonUI_o *)Instance;
    v11 = BattleScriptRootComponent___c_TypeInfo;
    if ( !BattleScriptRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleScriptRootComponent___c_TypeInfo);
      v11 = BattleScriptRootComponent___c_TypeInfo;
    }
    _9__47_0 = v11->static_fields->__9__47_0;
    v13 = (System_String_o *)StringLiteral_25408/*"バトル前スクリプト以外のトークから聖杯戦争盤へ移動することはできません。\nターミナルへ戻ります。"*/;
    v14 = (System_String_o *)StringLiteral_25407/*"バトルスクリプトエラー"*/;
    if ( !_9__47_0 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = BattleScriptRootComponent___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v11->static_fields->__9;
      _9__47_0 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(_9__47_0, v15, Method_BattleScriptRootComponent___c__TransitionWarBoard_b__47_0__, 0);
      static_fields = BattleScriptRootComponent___c_TypeInfo->static_fields;
      static_fields->__9__47_0 = _9__47_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__47_0, (int32_t)_9__47_0, v17, v18);
    }
    if ( v10 )
    {
      CommonUI__OpenNotificationDialog(v10, v14, v13, _9__47_0, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
      return;
    }
    goto LABEL_32;
  }
  bSetupInfo = talkInfo->fields.bSetupInfo;
  if ( !bSetupInfo )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C21ACD )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C21ACD = 1;
    }
    v19 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
    }
    v19->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      v9 = 34;
      v8 = 0;
      goto LABEL_30;
    }
LABEL_32:
    sub_1C2D6EC(Instance, v4);
  }
  if ( bSetupInfo->fields.isScriptBeforePartySelect )
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    bSetupInfo->fields.selectedBranchIdx = ScriptManager__GetSelectBranchIndex(0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v7 = this->fields.talkInfo;
    if ( v7 && Instance )
    {
      v8 = (Il2CppObject *)v7->fields.bSetupInfo;
      v9 = 35;
LABEL_30:
      AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, v9, 1, v8, 0, 0);
      return;
    }
    goto LABEL_32;
  }
  BattleScriptRootComponent__GoForBattle(bSetupInfo, v4);
}


void BattleScriptRootComponent___ChapterStartEffect_b__41_0(
        BattleScriptRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20
  BattleScriptRootComponent_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C2ABF2 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleScriptRootComponent__ChapterStartEffect_b__41_1__);
    byte_4C2ABF2 = 1;
  }
  v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BattleScriptRootComponent__ChapterStartEffect_b__41_1__, 0);
  BattleScriptRootComponent__StartMashuPowerUpAction(v5, v4, v6);
}


void BattleScriptRootComponent___ChapterStartEffect_b__41_1(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  BattleScriptRootComponent_o *v2; // x19
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w20
  const MethodInfo *v5; // x1

  v2 = this;
  if ( (byte_4C2ABF3 & 1) == 0 )
  {
    this = (BattleScriptRootComponent_o *)sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2ABF3 = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo )
    sub_1C2D6EC(this, method);
  wId = talkInfo->fields.wId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__SetWarStartedId(wId, 0);
  BattleScriptRootComponent__EndChapterStart(v2, v5);
}


void BattleScriptRootComponent___ChapterStartQuest_b__40_0(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  BattleScriptRootComponent_o *v2; // x19
  BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v4; // x8
  Il2CppObject *WarEntityByWarID; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v6; // x8
  const MethodInfo *v7; // x1
  TerminalPramsManager_c *v8; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v9; // x8
  bool v10; // w20
  TerminalPramsManager_c *v11; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_4C2ABF1 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C2D490(&ScriptManager_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    this = (BattleScriptRootComponent_o *)sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2ABF1 = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_29;
  ++talkInfo->fields.pId;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__SaveTalkResumeInfo(talkInfo, 0);
  this = (BattleScriptRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  v4 = v2->fields.talkInfo;
  if ( !v4 || !this )
    goto LABEL_29;
  WarEntityByWarID = (Il2CppObject *)QuestTree__mfGetWarEntityByWarID((QuestTree_o *)this, v4->fields.wId, 0);
  entity = WarEntityByWarID;
  if ( !WarEntityByWarID )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleScriptRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarMaster___);
    v6 = v2->fields.talkInfo;
    if ( !v6 || !this )
      goto LABEL_29;
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
      &entity,
      v6->fields.wId,
      (const MethodInfo_3387DE4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    WarEntityByWarID = entity;
    if ( !entity )
      goto LABEL_28;
  }
  if ( !WarEntity__HasFlag((WarEntity_o *)WarEntityByWarID, 0x8000, 0) )
    goto LABEL_28;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23E92 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23E92 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_IsPhaseClear_k__BackingField = 1;
  this = (BattleScriptRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v9 = v2->fields.talkInfo;
  if ( !v9 || !this )
LABEL_29:
    sub_1C2D6EC(this, method);
  v10 = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)this, v9->fields.qId, 0, 0);
  if ( !byte_4C23E91 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23E91 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_IsQuestClear_k__BackingField = v10;
LABEL_28:
  BattleScriptRootComponent__ChapterStartEffectQuest(v2, v7);
}


void BattleScriptRootComponent___ChapterStart_b__39_0(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  BattleScriptRootComponent_o *v2; // x19
  BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x20
  const MethodInfo *v4; // x1

  v2 = this;
  if ( (byte_4C2ABF0 & 1) == 0 )
  {
    this = (BattleScriptRootComponent_o *)sub_1C2D490(&ScriptManager_TypeInfo);
    byte_4C2ABF0 = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo )
    sub_1C2D6EC(this, method);
  ++talkInfo->fields.pId;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__SaveTalkResumeInfo(talkInfo, 0);
  BattleScriptRootComponent__ChapterStartEffect(v2, v4);
}


void BattleScriptRootComponent___EndRequestBattleScenario_b__37_0(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8

  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_1C2D6EC(this, method);
  BattleScriptRootComponent__ProcessBattleScripts(this, talkInfo->fields.talkPhase, v2);
}


void BattleScriptRootComponent___StartDemoBeforeBattle_b__28_0(
        BattleScriptRootComponent_o *this,
        System_String_o *demoInfo,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 bSetupInfo; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v11; // x8

  if ( (byte_4C2ABEE & 1) == 0 )
  {
    sub_1C2D490(&BattleSetupInfo_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C2ABEE = 1;
  }
  if ( demoInfo )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        bSetupInfo = (__int64)talkInfo->fields.bSetupInfo;
        if ( !bSetupInfo )
        {
          bSetupInfo = sub_1C2D6DC(BattleSetupInfo_TypeInfo);
          BattleSetupInfo___ctor((BattleSetupInfo_o *)bSetupInfo, 0);
          v11 = this->fields.talkInfo;
          if ( !v11 || !bSetupInfo )
            goto LABEL_13;
          *(_QWORD *)(bSetupInfo + 20) = *(_QWORD *)&v11->fields.qId;
        }
        *(_QWORD *)(bSetupInfo + 104) = demoInfo;
        *(_WORD *)(bSetupInfo + 96) = 1;
        sub_1C2D434((CGThumbnailListItem_o *)(bSetupInfo + 104), (int32_t)demoInfo, v7, v8);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 50, 1, (Il2CppObject *)bSetupInfo, 0);
          return;
        }
      }
    }
LABEL_13:
    sub_1C2D6EC(Instance, v6);
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, method);
}


void BattleScriptRootComponent___StartDemoFinishBattle_b__22_0(
        BattleScriptRootComponent_o *this,
        System_String_o *demoInfo,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 bSetupInfo; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v11; // x8

  if ( (byte_4C2ABEC & 1) == 0 )
  {
    sub_1C2D490(&BattleSetupInfo_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C2ABEC = 1;
  }
  if ( demoInfo )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        bSetupInfo = (__int64)talkInfo->fields.bSetupInfo;
        if ( !bSetupInfo )
        {
          bSetupInfo = sub_1C2D6DC(BattleSetupInfo_TypeInfo);
          BattleSetupInfo___ctor((BattleSetupInfo_o *)bSetupInfo, 0);
          v11 = this->fields.talkInfo;
          if ( !v11 || !bSetupInfo )
            goto LABEL_13;
          *(_QWORD *)(bSetupInfo + 20) = *(_QWORD *)&v11->fields.qId;
        }
        *(_QWORD *)(bSetupInfo + 104) = demoInfo;
        *(_WORD *)(bSetupInfo + 96) = 256;
        sub_1C2D434((CGThumbnailListItem_o *)(bSetupInfo + 104), (int32_t)demoInfo, v7, v8);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 50, 1, (Il2CppObject *)bSetupInfo, 0);
          return;
        }
      }
    }
LABEL_13:
    sub_1C2D6EC(Instance, v6);
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, method);
}


void BattleScriptRootComponent___StartScriptNoBattleAfter_b__38_0(
        BattleScriptRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4C2ABEF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleScriptRootComponent_TransitionTerminal__);
    byte_4C2ABEF = 1;
  }
  v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BattleScriptRootComponent_TransitionTerminal__, 0);
  BattleScriptRootComponent__PlayStaffRoll(this, v4, v5);
}


void BattleScriptRootComponent___StartScript_b__13_0(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8

  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_1C2D6EC(this, method);
  BattleScriptRootComponent__ProcessBattleScripts(this, talkInfo->fields.talkPhase, v2);
}


void BattleScriptRootComponent___StartSecondDemoFinishBattle_b__25_0(
        BattleScriptRootComponent_o *this,
        System_String_o *demoInfo,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 bSetupInfo; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v11; // x8
  System_Action_o *v12; // x19
  const MethodInfo *v13; // x2

  if ( (byte_4C2ABED & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__25_1__);
    sub_1C2D490(&BattleSetupInfo_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C2ABED = 1;
  }
  if ( demoInfo )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        bSetupInfo = (__int64)talkInfo->fields.bSetupInfo;
        if ( !bSetupInfo )
        {
          bSetupInfo = sub_1C2D6DC(BattleSetupInfo_TypeInfo);
          BattleSetupInfo___ctor((BattleSetupInfo_o *)bSetupInfo, 0);
          v11 = this->fields.talkInfo;
          if ( !v11 || !bSetupInfo )
            goto LABEL_15;
          *(_QWORD *)(bSetupInfo + 20) = *(_QWORD *)&v11->fields.qId;
        }
        *(_QWORD *)(bSetupInfo + 104) = demoInfo;
        *(_WORD *)(bSetupInfo + 96) = 0;
        sub_1C2D434((CGThumbnailListItem_o *)(bSetupInfo + 104), (int32_t)demoInfo, v7, v8);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 50, 1, (Il2CppObject *)bSetupInfo, 0);
          return;
        }
      }
    }
LABEL_15:
    sub_1C2D6EC(Instance, v6);
  }
  if ( this->fields.setEndRoll )
  {
    v12 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v12,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__25_1__,
      0);
    BattleScriptRootComponent__PlayStaffRoll(this, v12, v13);
  }
  else
  {
    BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, method);
  }
}


void BattleScriptRootComponent___StartSecondDemoFinishBattle_b__25_1(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v2);
}


void BattleScriptRootComponent__beginInitialize(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C2ABC8 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C2ABC8 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(Instance, v4);
  }
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void BattleScriptRootComponent__beginResume(
        BattleScriptRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x0
  const MethodInfo *v5; // x1

  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_1C2D6EC(0, data);
  BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(talkInfo, (const MethodInfo *)data);
  BattleScriptRootComponent__StartScript(this, v5);
}


void BattleScriptRootComponent__beginStartUp(
        BattleScriptRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppClass *v6; // x1
  __int64 naturalAligment; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o **p_talkInfo; // x20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *v11; // x8
  unsigned int talkPhase; // w9
  WarEntity_o *QuestId; // x0
  int32_t id; // w20
  bool v15; // w8

  if ( (byte_4C2ABC9 & 1) == 0 )
  {
    sub_1C2D490(&BgmManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    sub_1C2D490(&StringLiteral_6392/*"FES_WAR_ID"*/);
    byte_4C2ABC9 = 1;
  }
  if ( !data )
    goto LABEL_9;
  v6 = (Il2CppClass *)BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  naturalAligment = BattleScriptRootComponent_TalkScriptInfo_TypeInfo->_2.naturalAligment;
  if ( data->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (BattleScriptRootComponent_TalkScriptInfo_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] != BattleScriptRootComponent_TalkScriptInfo_TypeInfo
    || (this->fields.talkInfo = (struct BattleScriptRootComponent_TalkScriptInfo_o *)data,
        p_talkInfo = &this->fields.talkInfo,
        data->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || data->klass->_2.typeHierarchy[naturalAligment - 1] != v6 )
  {
    sub_1C2D9AC(data);
LABEL_9:
    this->fields.talkInfo = 0;
    p_talkInfo = &this->fields.talkInfo;
  }
  sub_1C2D434((CGThumbnailListItem_o *)p_talkInfo, (int32_t)data, (int32_t)method, v3);
  v11 = *p_talkInfo;
  if ( !*p_talkInfo )
    goto LABEL_25;
  if ( v11->fields.restoreLine )
  {
    talkPhase = v11->fields.talkPhase;
    if ( talkPhase <= 8 && ((1 << talkPhase) & 0x154) != 0 && !v11->fields.isTitleResume )
    {
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      BgmManager__SetMute(1, 0);
      v11 = *p_talkInfo;
      if ( !*p_talkInfo )
        goto LABEL_25;
    }
  }
  v11->fields.isTitleResume = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_WarMaster___),
        !*p_talkInfo)
    || !Instance )
  {
LABEL_25:
    sub_1C2D6EC(Instance, v10);
  }
  QuestId = WarMaster__getByLastQuestId((WarMaster_o *)Instance, (*p_talkInfo)->fields.qId, 0);
  if ( QuestId )
  {
    id = QuestId->fields.id;
    v15 = id == ConstantMaster__getValue((System_String_o *)StringLiteral_6392/*"FES_WAR_ID"*/, 0);
  }
  else
  {
    v15 = 0;
  }
  this->fields.setEndRoll = v15;
  SceneRootComponent__beginStartUp_41259456((SceneRootComponent_o *)this, 0);
}


void BattleScriptRootComponent_TalkScriptInfo___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C2ABFD & 1) == 0 )
  {
    sub_1C2D490(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    sub_1C2D490(&StringLiteral_1319/*"2.0"*/);
    byte_4C2ABFD = 1;
  }
  BattleScriptRootComponent_TalkScriptInfo_TypeInfo->static_fields->TalkResumeVersion = (struct System_String_o *)StringLiteral_1319/*"2.0"*/;
  sub_1C2D434(
    (CGThumbnailListItem_o *)BattleScriptRootComponent_TalkScriptInfo_TypeInfo->static_fields,
    StringLiteral_1319/*"2.0"*/,
    v1,
    v2);
  BattleScriptRootComponent_TalkScriptInfo_TypeInfo->static_fields->WinResultMultiplicationValue = 100;
}


void BattleScriptRootComponent_TalkScriptInfo___ctor(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleScriptRootComponent_TalkScriptInfo___ctor_47558448(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        BattleScriptRootComponent_TalkScriptSaveInfo_o *saveInfo,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  BattleSetupInfo_BattleSetupSaveInfo_o *bSetupInfo; // x21
  BattleSetupInfo_o *v10; // x20
  struct BattleSetupInfo_o **p_bSetupInfo; // x19

  if ( (byte_4C2ABF7 & 1) == 0 )
  {
    sub_1C2D490(&BattleSetupInfo_TypeInfo);
    byte_4C2ABF7 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !saveInfo )
    sub_1C2D6EC(v5, v6);
  *(_OWORD *)&this->fields.wId = *(_OWORD *)&saveInfo->fields.wId;
  *(_QWORD *)&this->fields.talkPhase = *(_QWORD *)&saveInfo->fields.talkPhase;
  bSetupInfo = saveInfo->fields.bSetupInfo;
  if ( bSetupInfo )
  {
    v10 = (BattleSetupInfo_o *)sub_1C2D6DC(BattleSetupInfo_TypeInfo);
    BattleSetupInfo___ctor_41355560(v10, bSetupInfo, 0);
  }
  else
  {
    v10 = 0;
  }
  this->fields.bSetupInfo = v10;
  p_bSetupInfo = &this->fields.bSetupInfo;
  sub_1C2D434((CGThumbnailListItem_o *)p_bSetupInfo, (int32_t)v10, v7, v8);
  *((_BYTE *)p_bSetupInfo + 9) = 0;
}


void BattleScriptRootComponent_TalkScriptInfo___ctor_47558612(
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
  const MethodInfo *v19; // x3

  v16 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v16->fields.wId = war;
  v16->fields.qId = quest;
  v16->fields.pId = phase;
  v16->fields.talkType = type;
  BattleScriptRootComponent_TalkScriptInfo__setWinLoseInfo(v16, winLose, winResult, v17);
  v16->fields.bSetupInfo = 0;
  v16 = (BattleScriptRootComponent_TalkScriptInfo_o *)((char *)v16 + 40);
  *(_DWORD *)&v16[-1].fields.isTitleResume = tPhase;
  sub_1C2D434((CGThumbnailListItem_o *)v16, 0, v18, v19);
  BYTE1(v16->monitor) = 0;
}


void BattleScriptRootComponent_TalkScriptInfo___ctor_47558744(
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
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.wId = war;
  this->fields.qId = quest;
  this->fields.pId = phase;
  this->fields.talkType = type;
  BattleScriptRootComponent_TalkScriptInfo__setWinLoseInfo(this, winLose, winResult, v17);
  this->fields.bSetupInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.bSetupInfo, 0, v18, v19);
  BattleScriptRootComponent_TalkScriptInfo__SetBasePhaseOfType(this, type, isPlayedScript, v20);
  this->fields.restoreLine = 0;
}


void BattleScriptRootComponent_TalkScriptInfo___ctor_47558980(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        BattleSetupInfo_o *battleInfo,
        int32_t type,
        int32_t winLose,
        int32_t winResult,
        bool isPlayedScript,
        const MethodInfo *method)
{
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  struct BattleSetupInfo_o *bSetupInfo; // x8
  const MethodInfo *v19; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.bSetupInfo = battleInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.bSetupInfo, (int32_t)battleInfo, v13, v14);
  bSetupInfo = this->fields.bSetupInfo;
  if ( !bSetupInfo )
    sub_1C2D6EC(v15, v16);
  *(_QWORD *)&this->fields.wId = *(_QWORD *)&bSetupInfo->fields.warId;
  this->fields.pId = bSetupInfo->fields.questPhase;
  this->fields.talkType = type;
  BattleScriptRootComponent_TalkScriptInfo__setWinLoseInfo(this, winLose, winResult, v17);
  BattleScriptRootComponent_TalkScriptInfo__SetBasePhaseOfType(this, type, isPlayedScript, v19);
  this->fields.restoreLine = 0;
}


BattleScriptRootComponent_TalkScriptSaveInfo_o *BattleScriptRootComponent_TalkScriptInfo__GetInfoForSave(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  BattleScriptRootComponent_TalkScriptInfo_c *v7; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_StaticFields *static_fields; // x8
  struct System_String_o *TalkResumeVersion; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  BattleSetupInfo_o *bSetupInfo; // x0
  BattleSetupInfo_BattleSetupSaveInfo_o *InfoForSave; // x1

  if ( (byte_4C2ABF8 & 1) == 0 )
  {
    sub_1C2D490(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    sub_1C2D490(&BattleScriptRootComponent_TalkScriptSaveInfo_TypeInfo);
    byte_4C2ABF8 = 1;
  }
  v3 = sub_1C2D6DC(BattleScriptRootComponent_TalkScriptSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  v7 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  if ( !BattleScriptRootComponent_TalkScriptInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    v7 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  }
  if ( !v3 )
    sub_1C2D6EC(v7, v4);
  static_fields = v7->static_fields;
  TalkResumeVersion = static_fields->TalkResumeVersion;
  *(_QWORD *)(v3 + 16) = static_fields->TalkResumeVersion;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)TalkResumeVersion, v5, v6);
  *(_OWORD *)(v3 + 24) = *(_OWORD *)&this->fields.wId;
  *(_QWORD *)(v3 + 40) = *(_QWORD *)&this->fields.talkPhase;
  bSetupInfo = this->fields.bSetupInfo;
  if ( bSetupInfo )
    InfoForSave = BattleSetupInfo__GetInfoForSave(bSetupInfo, 0);
  else
    InfoForSave = 0;
  *(_QWORD *)(v3 + 48) = InfoForSave;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 48), (int32_t)InfoForSave, v10, v11);
  return (BattleScriptRootComponent_TalkScriptSaveInfo_o *)v3;
}


int32_t BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C2ABFA & 1) == 0 )
  {
    sub_1C2D490(&ScriptManager_TypeInfo);
    byte_4C2ABFA = 1;
  }
  if ( !this->fields.restoreLine )
    return -1;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  return ScriptManager__GetLastLineInfo(0);
}


bool BattleScriptRootComponent_TalkScriptInfo__IsConsumeAfterBattleWin(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C2ABFC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2ABFC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0
    || (Instance = (DataManager_o *)QuestMaster__getQuestEntity((QuestMaster_o *)Instance, this->fields.qId, 0)) == 0 )
  {
    sub_1C2D6EC(Instance, v4);
  }
  return QuestEntity__HasFlag((QuestEntity_o *)Instance, 0x40000000, 0);
}


bool BattleScriptRootComponent_TalkScriptInfo__IsRestorable(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  int32_t pId; // w21
  int32_t qId; // w22
  QuestMaster_o *v6; // x20
  System_String_o *CachedSelectedBranchQuestId; // x0
  __int64 v8; // x1
  int32_t ScriptQuestId; // w20
  const MethodInfo *v10; // x1
  int32_t winResult; // w0
  int32_t talkType; // w8
  Il2CppObject *v13; // x0
  int32_t v14; // w22
  ScriptManager_o *v15; // x21
  Il2CppObject *v16; // x0
  int32_t v17; // w21
  ScriptManager_o *v18; // x19
  int32_t v19; // w21
  Il2CppObject *Instance; // x0
  int32_t v21; // w23
  ScriptManager_o *v22; // x22
  Il2CppObject *v23; // x0
  int32_t v24; // w22

  if ( (byte_4C2ABFB & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&ScriptManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_4C2ABFB = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestMaster___);
  qId = this->fields.qId;
  pId = this->fields.pId;
  v6 = (QuestMaster_o *)Master_object;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  CachedSelectedBranchQuestId = (System_String_o *)ScriptManager__GetCachedSelectedBranchQuestId(qId, pId, 0);
  if ( !v6 )
    goto LABEL_30;
  ScriptQuestId = QuestMaster__getScriptQuestId(v6, (int32_t)CachedSelectedBranchQuestId, 0);
  winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(this, v10);
  talkType = this->fields.talkType;
  if ( talkType == 4 )
  {
    v19 = winResult;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v21 = this->fields.pId;
    v22 = (ScriptManager_o *)Instance;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    CachedSelectedBranchQuestId = ScriptManager__GetScriptName_BattleEnd2(ScriptQuestId, v21, v19, 0);
    if ( v22 )
    {
      if ( ScriptManager__IsExistScriptFile(v22, CachedSelectedBranchQuestId, 0) )
        return 1;
      v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      v24 = this->fields.pId;
      v18 = (ScriptManager_o *)v23;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      CachedSelectedBranchQuestId = ScriptManager__GetScriptName_BattleEnd(ScriptQuestId, v24, v19, 0);
      if ( v18 )
        goto LABEL_25;
    }
    goto LABEL_30;
  }
  if ( talkType != 3 )
    return 1;
  v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  v14 = this->fields.pId;
  v15 = (ScriptManager_o *)v13;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  CachedSelectedBranchQuestId = ScriptManager__GetScriptName_BattleStart(ScriptQuestId, v14, 0);
  if ( !v15 )
LABEL_30:
    sub_1C2D6EC(CachedSelectedBranchQuestId, v8);
  if ( ScriptManager__IsExistScriptFile(v15, CachedSelectedBranchQuestId, 0) )
    return 1;
  v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  v17 = this->fields.pId;
  v18 = (ScriptManager_o *)v16;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  CachedSelectedBranchQuestId = ScriptManager__GetScriptName_BattleStart2(ScriptQuestId, v17, 0);
  if ( !v18 )
    goto LABEL_30;
LABEL_25:
  if ( ScriptManager__IsExistScriptFile(v18, CachedSelectedBranchQuestId, 0) )
    return 1;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0);
  return 0;
}


void BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  int32_t talkPhase; // w8
  unsigned int v4; // w8

  if ( (byte_4C2ABF9 & 1) == 0 )
  {
    sub_1C2D490(&BgmManager_TypeInfo);
    sub_1C2D490(&ScriptManager_TypeInfo);
    byte_4C2ABF9 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteLineInfo(0);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__SetMute(0, 0);
  talkPhase = this->fields.talkPhase;
  this->fields.restoreLine = 0;
  v4 = talkPhase - 1;
  if ( v4 <= 8 && ((0x1EFu >> v4) & 1) != 0 )
    this->fields.talkPhase = dword_C4402C[v4];
}


void BattleScriptRootComponent_TalkScriptInfo__SetBasePhaseOfType(
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
        sub_1C2D6EC(0, type);
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


void BattleScriptRootComponent_TalkScriptInfo__SetJump(
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


int32_t BattleScriptRootComponent_TalkScriptInfo__get_winResult(
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

  if ( (byte_4C2ABF4 & 1) == 0 )
  {
    sub_1C2D490(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    byte_4C2ABF4 = 1;
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
  if ( !byte_4C20DA0 )
  {
    sub_1C2D490(&System_Math_TypeInfo);
    byte_4C20DA0 = 1;
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


int32_t BattleScriptRootComponent_TalkScriptInfo__get_win_lose(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  BattleScriptRootComponent_TalkScriptInfo_c *v3; // x0
  int32_t winLoseInfo; // w19

  if ( (byte_4C2ABF6 & 1) == 0 )
  {
    sub_1C2D490(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    byte_4C2ABF6 = 1;
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


bool BattleScriptRootComponent_TalkScriptInfo__isLose(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  return BattleScriptRootComponent_TalkScriptInfo__get_win_lose(this, method) != 1;
}


bool BattleScriptRootComponent_TalkScriptInfo__isOnJumpablePhase(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  return (unsigned int)(this->fields.talkPhase - 2) <= 6 && (this->fields.talkPhase & 1) == 0;
}


bool BattleScriptRootComponent_TalkScriptInfo__isPhaseBeforeBattle(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  return (unsigned int)(this->fields.talkPhase - 1) < 4;
}


// local variable allocation has failed, the output may be wrong!
void BattleScriptRootComponent_TalkScriptInfo__setWinLoseInfo(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        int32_t winLose,
        int32_t winResult,
        const MethodInfo *method)
{
  BattleScriptRootComponent_TalkScriptInfo_c *v7; // x0
  uint32_t cctor_finished; // w8
  int win_lose; // w0

  if ( (byte_4C2ABF5 & 1) == 0 )
  {
    sub_1C2D490(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    byte_4C2ABF5 = 1;
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


void BattleScriptRootComponent_TalkScriptSaveInfo___ctor(
        BattleScriptRootComponent_TalkScriptSaveInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleScriptRootComponent__StartMovie_d__14___ctor(
        BattleScriptRootComponent__StartMovie_d__14_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleScriptRootComponent__StartMovie_d__14__MoveNext(
        BattleScriptRootComponent__StartMovie_d__14_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct BattleScriptRootComponent_o *_4__this; // x22
  DataManager_o *Instance; // x0
  const MethodInfo *v6; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  System_String_o *MovieFolder; // x20
  System_Action_o *callback; // x0
  bool result; // w0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v11; // x8
  MovieFileMerge_o *writeMasterDataThreadException; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v13; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v14; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v15; // x8
  Il2CppObject *v16; // x0
  Il2CppObject **p__2__current; // x19
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C2AC05 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&SoundManager_TypeInfo);
    byte_4C2AC05 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !_4__this )
    goto LABEL_35;
  talkInfo = _4__this->fields.talkInfo;
  if ( !talkInfo || !Instance )
    goto LABEL_35;
  MovieFolder = QuestPhaseMaster__GetMovieFolder(
                  (QuestPhaseMaster_o *)Instance,
                  talkInfo->fields.qId,
                  talkInfo->fields.pId,
                  0);
  if ( System_String__IsNullOrEmpty(MovieFolder, 0) )
  {
LABEL_10:
    callback = this->fields.callback;
LABEL_12:
    ActionExtensions__Call(callback, 0);
    return 0;
  }
  Instance = (DataManager_o *)_4__this->fields.talkInfo;
  if ( !Instance )
    goto LABEL_35;
  if ( *(_DWORD *)&Instance->fields._DispLog == 1 )
    BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(
      (BattleScriptRootComponent_TalkScriptInfo_o *)Instance,
      v6);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  v11 = _4__this->fields.talkInfo;
  if ( !v11 )
    goto LABEL_35;
  writeMasterDataThreadException = (MovieFileMerge_o *)Instance[12].fields.writeMasterDataThreadException;
  if ( v11->fields.talkType == 5 )
    goto LABEL_33;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPhaseMaster___),
        (v13 = _4__this->fields.talkInfo) == 0)
    || !Instance )
  {
LABEL_35:
    sub_1C2D6EC(Instance, v6);
  }
  Instance = (DataManager_o *)QuestPhaseMaster__GetMoviePlayType(
                                (QuestPhaseMaster_o *)Instance,
                                v13->fields.qId,
                                v13->fields.pId,
                                0);
  if ( (_DWORD)Instance == 1 )
  {
    v15 = _4__this->fields.talkInfo;
    if ( !v15 )
      goto LABEL_35;
    if ( v15->fields.talkPhase >= 6 )
      goto LABEL_10;
  }
  else if ( (_DWORD)Instance == 2 )
  {
    v14 = _4__this->fields.talkInfo;
    if ( !v14 )
      goto LABEL_35;
    if ( v14->fields.talkPhase < 5 )
      goto LABEL_10;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0);
LABEL_33:
  if ( !writeMasterDataThreadException )
    goto LABEL_35;
  MovieFileMerge__Initialize(writeMasterDataThreadException, MovieFolder, 0);
  v16 = (Il2CppObject *)MovieFileMerge__PlayMP4(writeMasterDataThreadException, 0);
  this->fields.__2__current = v16;
  p__2__current = &this->fields.__2__current;
  sub_1C2D434((CGThumbnailListItem_o *)p__2__current, (int32_t)v16, v18, v19);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *BattleScriptRootComponent__StartMovie_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleScriptRootComponent__StartMovie_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleScriptRootComponent__StartMovie_d__14__System_Collections_IEnumerator_Reset(
        BattleScriptRootComponent__StartMovie_d__14_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattleScriptRootComponent__StartMovie_d__14_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *BattleScriptRootComponent__StartMovie_d__14__System_Collections_IEnumerator_get_Current(
        BattleScriptRootComponent__StartMovie_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleScriptRootComponent__StartMovie_d__14__System_IDisposable_Dispose(
        BattleScriptRootComponent__StartMovie_d__14_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleScriptRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2ABFE & 1) == 0 )
  {
    sub_1C2D490(&BattleScriptRootComponent___c_TypeInfo);
    byte_4C2ABFE = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(BattleScriptRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleScriptRootComponent___c_TypeInfo->static_fields->__9 = (struct BattleScriptRootComponent___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)BattleScriptRootComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleScriptRootComponent___c___ctor(BattleScriptRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *BattleScriptRootComponent___c___EndRequestBattleScenario_b__37_1(
        BattleScriptRootComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0);
}


System_String_o *BattleScriptRootComponent___c___EndRequestBattleScenario_b__37_2(
        BattleScriptRootComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0);
}


void BattleScriptRootComponent___c___TransitionWarBoard_b__47_0(
        BattleScriptRootComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C2ABFF & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C2ABFF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


void BattleScriptRootComponent___c__DisplayClass21_0___ctor(
        BattleScriptRootComponent___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleScriptRootComponent___c__DisplayClass21_0___StartScriptFinishBattleEnd2_b__0(
        BattleScriptRootComponent___c__DisplayClass21_0_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  BattleScriptRootComponent_o *_4__this; // x0

  if ( (byte_4C2AC00 & 1) == 0 )
  {
    sub_1C2D490(&ScriptManager_TypeInfo);
    byte_4C2AC00 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, v4);
  BattleScriptRootComponent__ProceedToNextTalkPhase(_4__this, 0, v5);
}


void BattleScriptRootComponent___c__DisplayClass24_0___ctor(
        BattleScriptRootComponent___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleScriptRootComponent___c__DisplayClass24_0___ScriptFinishBattleAfterDemoEnd_b__0(
        BattleScriptRootComponent___c__DisplayClass24_0_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  BattleScriptRootComponent_o *_4__this; // x0

  if ( (byte_4C2AC01 & 1) == 0 )
  {
    sub_1C2D490(&ScriptManager_TypeInfo);
    byte_4C2AC01 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, v4);
  BattleScriptRootComponent__ProceedToNextTalkPhase(_4__this, 0, v5);
}


void BattleScriptRootComponent___c__DisplayClass44_0___ctor(
        BattleScriptRootComponent___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleScriptRootComponent___c__DisplayClass44_0___StartMashuPowerUpAction_b__0(
        BattleScriptRootComponent___c__DisplayClass44_0_o *this,
        bool is_decide,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *_9__1; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  Il2CppObject *Request_object; // x0
  __int64 v8; // x1

  if ( (byte_4C2AC02 & 1) == 0 )
  {
    sub_1C2D490(&Method_NetworkManager_getRequest_TutorialSetRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&Method_BattleScriptRootComponent___c__DisplayClass44_0__StartMashuPowerUpAction_b__1__);
    byte_4C2AC02 = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent___c__DisplayClass44_0__StartMashuPowerUpAction_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v5, v6);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__1,
                     (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
  if ( !Request_object )
    sub_1C2D6EC(0, v8);
  TutorialSetRequest__beginRequest((TutorialSetRequest_o *)Request_object, this->fields.tutorial_flag_id, 0);
}


void BattleScriptRootComponent___c__DisplayClass44_0___StartMashuPowerUpAction_b__1(
        BattleScriptRootComponent___c__DisplayClass44_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0);
}


void BattleScriptRootComponent___c__DisplayClass48_0___ctor(
        BattleScriptRootComponent___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleScriptRootComponent___c__DisplayClass48_0___PlayStaffRoll_b__0(
        BattleScriptRootComponent___c__DisplayClass48_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x19
  AssetData_o *transform; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *Object_object__51051712; // x21
  Il2CppObject *v13; // x0
  AssetData_o **v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct BattleScriptRootComponent_o *_4__this; // x8
  UnityEngine_Transform_o *v18; // x20
  UnityEngine_Transform_o *v19; // x20
  Il2CppObject *Component_object; // x0
  AssetData_o *v21; // x20
  EndrolRootComponent_o *v22; // x21
  System_Action_o *v23; // x22

  if ( (byte_4C2AC03 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EndrolRootComponent___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_BattleScriptRootComponent___c__DisplayClass48_1__PlayStaffRoll_b__1__);
    sub_1C2D490(&BattleScriptRootComponent___c__DisplayClass48_1_TypeInfo);
    sub_1C2D490(&StringLiteral_6031/*"EndrolPanel"*/);
    byte_4C2AC03 = 1;
  }
  v5 = sub_1C2D6DC(BattleScriptRootComponent___c__DisplayClass48_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = data;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)data, v10, v11);
  transform = *(AssetData_o **)(v5 + 24);
  if ( !transform )
    goto LABEL_21;
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              transform,
                              (System_String_o *)StringLiteral_6031/*"EndrolPanel"*/,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = UnityEngine_Object__Instantiate_object_(
          Object_object__51051712,
          (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  *(_QWORD *)(v5 + 16) = v13;
  v14 = (AssetData_o **)(v5 + 16);
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)v13, v15, v16);
  transform = *(AssetData_o **)(v5 + 16);
  if ( !transform )
    goto LABEL_21;
  transform = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_21;
  if ( !transform )
    goto LABEL_21;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, _4__this->fields.cam, 0);
  transform = *v14;
  if ( !*v14 )
    goto LABEL_21;
  transform = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  v18 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4C20DA1 )
  {
    transform = (AssetData_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  if ( !v18 )
    goto LABEL_21;
  UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  transform = *v14;
  if ( !*v14 )
    goto LABEL_21;
  transform = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  v19 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4C20DA6 )
  {
    transform = (AssetData_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
  }
  if ( !v19
    || (UnityEngine_Transform__set_localScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (transform = *v14) == 0)
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EndrolRootComponent___),
        v21 = *(AssetData_o **)(v5 + 24),
        v22 = (EndrolRootComponent_o *)Component_object,
        v23 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v23,
          (Il2CppObject *)v5,
          Method_BattleScriptRootComponent___c__DisplayClass48_1__PlayStaffRoll_b__1__,
          0),
        !v22) )
  {
LABEL_21:
    sub_1C2D6EC(transform, v7);
  }
  EndrolRootComponent__Open(v22, v21, v23, 0);
}


void BattleScriptRootComponent___c__DisplayClass48_1___ctor(
        BattleScriptRootComponent___c__DisplayClass48_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleScriptRootComponent___c__DisplayClass48_1___PlayStaffRoll_b__1(
        BattleScriptRootComponent___c__DisplayClass48_1_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *endObj; // x20
  AssetData_o *data; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  struct BattleScriptRootComponent___c__DisplayClass48_0_o *CS___8__locals1; // x8

  if ( (byte_4C2AC04 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AC04 = 1;
  }
  endObj = (UnityEngine_Object_o *)this->fields.endObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71163704(endObj, 0);
  data = this->fields.data;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_40313100(data, 0);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    sub_1C2D6EC(v5, v6);
  ActionExtensions__Call(CS___8__locals1->fields.callback, 0);
}