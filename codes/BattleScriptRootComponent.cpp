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
  if ( (byte_4CF214B & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_BattleScriptRootComponent__ChapterStart_b__41_0__);
    this = (BattleScriptRootComponent_o *)sub_1C7BAE8(&ScriptManager_TypeInfo);
    byte_4CF214B = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        v5 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo),
        System_Action___ctor(v5, (Il2CppObject *)v2, Method_BattleScriptRootComponent__ChapterStart_b__41_0__, 0),
        (this = (BattleScriptRootComponent_o *)v2->fields.talkInfo) == 0) )
  {
    sub_1C7BD40(this, method);
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
  if ( (byte_4CF214D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BattleScriptRootComponent__ChapterStartEffect_b__43_0__);
    sub_1C7BAE8(&ScriptManager_CallbackFunc_TypeInfo);
    this = (BattleScriptRootComponent_o *)sub_1C7BAE8(&ScriptManager_TypeInfo);
    byte_4CF214D = 1;
  }
  klass = v2[4].klass;
  if ( !klass )
    sub_1C7BD40(this, method);
  name = (int32_t)klass->_1.name;
  v5 = (ScriptManager_CallbackFunc_o *)sub_1C7BD34(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v5, v2, Method_BattleScriptRootComponent__ChapterStartEffect_b__43_0__, 0);
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
  if ( (byte_4CF214E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BattleScriptRootComponent__ChapterStartEffectQuest_b__44_0__);
    sub_1C7BAE8(&ScriptManager_CallbackFunc_TypeInfo);
    this = (BattleScriptRootComponent_o *)sub_1C7BAE8(&ScriptManager_TypeInfo);
    byte_4CF214E = 1;
  }
  klass = v2[4].klass;
  if ( !klass )
    sub_1C7BD40(this, method);
  name = (int32_t)klass->_1.name;
  v5 = (ScriptManager_CallbackFunc_o *)sub_1C7BD34(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v5, v2, Method_BattleScriptRootComponent__ChapterStartEffectQuest_b__44_0__, 0);
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
  if ( (byte_4CF214C & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_BattleScriptRootComponent__ChapterStartQuest_b__42_0__);
    this = (BattleScriptRootComponent_o *)sub_1C7BAE8(&ScriptManager_TypeInfo);
    byte_4CF214C = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        qId = talkInfo->fields.qId,
        v6 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)v2, Method_BattleScriptRootComponent__ChapterStartQuest_b__42_0__, 0),
        (this = (BattleScriptRootComponent_o *)v2->fields.talkInfo) == 0) )
  {
    sub_1C7BD40(this, method);
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
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleScriptRootComponent_o *v9; // x21
  unsigned __int64 v10; // x22
  struct System_Threading_CancellationTokenSource_o *v11; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v12; // x8
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4CF2135 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    this = (BattleScriptRootComponent_o *)sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF2135 = 1;
  }
  entity = 0;
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_28;
  bSetupInfo = talkInfo->fields.bSetupInfo;
  if ( !bSetupInfo || (qId = bSetupInfo->fields.originQuestId, qId <= 0) )
    qId = talkInfo->fields.qId;
  this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_28;
  this = (BattleScriptRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  v6 = v2->fields.talkInfo;
  if ( !v6 || !this )
    goto LABEL_28;
  if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &entity, qId, v6->fields.pId, 0) )
    return;
  this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_28;
  this = (BattleScriptRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !entity )
    goto LABEL_28;
  v7 = (CommonReleaseMaster_o *)this;
  this = (BattleScriptRootComponent_o *)QuestPhaseEntity__GetCondHavingIds(entity, 0);
  if ( !this )
    goto LABEL_28;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v9 = this;
  if ( (int)m_CancellationTokenSource < 1 )
    return;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= (unsigned int)m_CancellationTokenSource )
      goto LABEL_29;
    if ( !v7 )
      goto LABEL_28;
    this = (BattleScriptRootComponent_o *)CommonReleaseMaster__IsOpen(v7, *((_DWORD *)&v9->fields.myFSM + v10), 0, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (BattleScriptRootComponent_o *)entity;
      if ( !entity )
        goto LABEL_28;
      this = (BattleScriptRootComponent_o *)QuestPhaseEntity__GetNotHavingQuests(entity, 0);
      if ( !this )
        goto LABEL_28;
      v11 = this->fields.m_CancellationTokenSource;
      if ( (__int64)v10 < (int)v11 )
        break;
    }
    LODWORD(m_CancellationTokenSource) = v9->fields.m_CancellationTokenSource;
    if ( (__int64)++v10 >= (int)m_CancellationTokenSource )
      return;
  }
  if ( (unsigned int)v10 >= (unsigned int)v11 )
LABEL_29:
    sub_1C7BD48(this);
  v12 = v2->fields.talkInfo;
  if ( !v12 )
LABEL_28:
    sub_1C7BD40(this, method);
  v12->fields.qId = *((_DWORD *)&this->fields.myFSM + v10);
}


void BattleScriptRootComponent__EndBeforeBattleScript(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x3
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t talkType; // w9
  BattleSetupInfo_o *bSetupInfo; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  TerminalPramsManager_c *v15; // x0
  Il2CppObject *WarBoardData_k__BackingField; // x20
  GrandQuestFolderBoardItem_o *p_WarBoardData_k__BackingField; // x0
  int32_t v18; // w1
  Il2CppObject *v19; // x3
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *v22; // x8
  TerminalPramsManager_c *v23; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v24; // x8

  if ( (byte_4CF2142 & 1) == 0 )
  {
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CF2142 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_49;
  talkType = talkInfo->fields.talkType;
  switch ( talkType )
  {
    case 3:
      bSetupInfo = talkInfo->fields.bSetupInfo;
      if ( bSetupInfo )
      {
        if ( bSetupInfo->fields.isScriptBeforePartySelect && !talkInfo->fields._IsAfterOrganization_k__BackingField )
        {
          if ( !ScriptManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
          bSetupInfo->fields.selectedBranchIdx = ScriptManager__GetSelectBranchIndex(0);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          v24 = this->fields.talkInfo;
          if ( !v24 || !Instance )
            goto LABEL_49;
          v19 = (Il2CppObject *)v24->fields.bSetupInfo;
          v18 = 35;
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
          if ( !byte_4CF2190 )
          {
            sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
            byte_4CF2190 = 1;
          }
          v15 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v15 = TerminalPramsManager_TypeInfo;
          }
          WarBoardData_k__BackingField = (Il2CppObject *)v15->static_fields->_WarBoardData_k__BackingField;
          if ( !byte_4CEB61F )
          {
            sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
            v15 = TerminalPramsManager_TypeInfo;
            byte_4CEB61F = 1;
          }
          if ( !v15->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v15);
            v15 = TerminalPramsManager_TypeInfo;
          }
          p_WarBoardData_k__BackingField = (GrandQuestFolderBoardItem_o *)&v15->static_fields->_WarBoardData_k__BackingField;
          p_WarBoardData_k__BackingField->klass = 0;
          sub_1C7BA8C(p_WarBoardData_k__BackingField, 0, v9, v10, v11, v12, v13, v14);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !Instance )
            goto LABEL_49;
          v18 = 80;
          v19 = WarBoardData_k__BackingField;
        }
      }
      else
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4CE8D13 )
        {
          sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
          byte_4CE8D13 = 1;
        }
        v23 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v23 = TerminalPramsManager_TypeInfo;
        }
        v23->static_fields->_IsAutoResume_k__BackingField = 1;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !Instance )
          goto LABEL_49;
        v18 = 34;
        v19 = 0;
      }
      AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, v18, 1, v19, 0, 0);
      return;
    case 5:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( Instance )
      {
        Instance = (Il2CppObject *)ScriptManager__IsBadEndRoute((ScriptManager_o *)Instance, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          BattleScriptRootComponent__RequestBattleSecnarioForNoneBattleQuest(this, 0, v20);
          return;
        }
        talkInfo = this->fields.talkInfo;
        if ( talkInfo )
          goto LABEL_31;
      }
LABEL_49:
      sub_1C7BD40(Instance, v4);
    case 6:
LABEL_31:
      BattleScriptRootComponent__SavePlayedNotMeetsScript(
        (BattleScriptRootComponent_o *)Instance,
        talkInfo->fields.qId,
        talkInfo->fields.pId,
        v5);
      v22 = this->fields.talkInfo;
      if ( v22 )
      {
        v22->fields.talkPhase = 10;
        BattleScriptRootComponent__ProcessBattleScripts(this, 10, v21);
        return;
      }
      goto LABEL_49;
  }
}


void BattleScriptRootComponent__EndChapterStart(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v4; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t qId; // w21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v7; // x8
  int32_t pId; // w21
  int v9; // w21
  TerminalPramsManager_c *v10; // x0
  int v11; // w21
  TerminalPramsManager_c *v12; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v13; // x8
  TerminalPramsManager_c *v14; // x0
  bool IsStackScene; // w20
  TerminalPramsManager_c *v16; // x0
  TerminalPramsManager_c *v17; // x0
  _BOOL4 IsNoResumeFromChapterStart_k__BackingField; // w19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CF214F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CF214F = 1;
  }
  entity = 0;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_59;
  qId = talkInfo->fields.qId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CEAE38 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEAE38 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  HIDWORD(Master_object[2].fields.list->fields.items) = qId;
  v7 = this->fields.talkInfo;
  if ( !v7 )
    goto LABEL_59;
  pId = v7->fields.pId;
  if ( !LODWORD(Master_object[3].monitor) )
    j_il2cpp_runtime_class_init_0(Master_object);
  v9 = pId - 1;
  if ( !byte_4CEAE3C )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEAE3C = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  v11 = v9 & ~(v9 >> 31);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_PhaseCnt_k__BackingField = v11;
  TerminalPramsManager__SaveQuestInfo_SaveData(0);
  if ( !byte_4CF2191 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CF2191 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->_IsNoResumeFromChapterStart_k__BackingField = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestMaster___);
  v13 = this->fields.talkInfo;
  if ( !v13 || !Master_object )
    goto LABEL_59;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         Master_object,
         &entity,
         v13->fields.qId,
         (const MethodInfo_342E348 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_59;
    if ( QuestEntity__HasFlag((QuestEntity_o *)entity, 2, 0) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4CF2191 )
      {
        sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
        byte_4CF2191 = 1;
      }
      v14 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v14 = TerminalPramsManager_TypeInfo;
      }
      v14->static_fields->_IsNoResumeFromChapterStart_k__BackingField = 1;
    }
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Master_object )
LABEL_59:
    sub_1C7BD40(Master_object, v4);
  IsStackScene = AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Master_object, 0);
  if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    if ( IsStackScene )
      goto LABEL_40;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( IsStackScene )
    {
LABEL_40:
      if ( !byte_4CF2191 )
      {
        sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
        byte_4CF2191 = 1;
      }
      v16 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
      }
      v16->static_fields->_IsNoResumeFromChapterStart_k__BackingField = 0;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( Master_object )
      {
        AvalonSceneManager__popSceneRefresh((AvalonSceneManager_o *)Master_object, 2, 0, 0);
        return;
      }
      goto LABEL_59;
    }
  }
  if ( !byte_4CE8D13 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CE8D13 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v17->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_4CF0A4D )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
    byte_4CF0A4D = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = TerminalPramsManager_TypeInfo;
  }
  IsNoResumeFromChapterStart_k__BackingField = v17->static_fields->_IsNoResumeFromChapterStart_k__BackingField;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_59;
  if ( IsNoResumeFromChapterStart_k__BackingField )
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Master_object, 34, 2, 0, 0);
  else
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Master_object, 34, 2, 0, 0, 0);
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
  BattleResultComponent_resultData_o *myFSM; // x20
  System_Collections_Generic_IEnumerable_TSource__o *freeShopIds; // x0
  BattleScriptRootComponent___c_c *v11; // x8
  BattleScriptRootComponent_o *v12; // x21
  System_Converter_TInput__TOutput__o *_9__39_1; // x22
  Il2CppObject *v14; // x23
  struct BattleScriptRootComponent___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_String_array *v22; // x0
  System_String_o *v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *returnRarePriShopIds; // x0
  BattleScriptRootComponent___c_c *v25; // x8
  BattleScriptRootComponent_o *v26; // x20
  System_Converter_TInput__TOutput__o *_9__39_2; // x21
  Il2CppObject *v28; // x22
  struct BattleScriptRootComponent___c_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  System_String_array *v36; // x0
  System_String_o *v37; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v39; // x2
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v41; // x0
  int32_t WarId_k__BackingField; // w21
  System_Action_o *v43; // x22
  System_Collections_IEnumerator_o *v44; // x1
  Il2CppClass *v45; // x8

  v4 = (Il2CppObject *)this;
  if ( (byte_4CF2149 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_BattleScriptRootComponent__EndRequestBattleScenario_b__39_0__);
    sub_1C7BAE8(&System_Converter_int__string__TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C7BAE8(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ConvertAll_string___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    sub_1C7BAE8(&Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__39_1__);
    sub_1C7BAE8(&Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__39_2__);
    sub_1C7BAE8(&BattleScriptRootComponent___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_19820/*"freeShopIds"*/);
    sub_1C7BAE8(&StringLiteral_23315/*"returnRarePriShopIds"*/);
    sub_1C7BAE8(&StringLiteral_809/*","*/);
    sub_1C7BAE8(&StringLiteral_15862/*"["*/);
    this = (BattleScriptRootComponent_o *)sub_1C7BAE8(&StringLiteral_16114/*"]"*/);
    byte_4CF2149 = 1;
  }
  klass = (BattleScriptRootComponent_TalkScriptInfo_o *)v4[4].klass;
  if ( !klass )
    goto LABEL_53;
  klass->fields.talkPhase = 6;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__SaveTalkResumeInfo(klass, 0);
  ScriptManager__ClearSelectRouteArray(0);
  v6 = (Il2CppObject *)System_String__Concat_64215176(
                         (System_String_o *)StringLiteral_15862/*"["*/,
                         jsonstr,
                         (System_String_o *)StringLiteral_16114/*"]"*/,
                         0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7 = JsonManager__DeserializeArray_object_(
         v6,
         (const MethodInfo_31DEFB4 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v7, 1, 0);
  v8 = (Il2CppObject *)System_String__Concat_64215176(
                         (System_String_o *)StringLiteral_15862/*"["*/,
                         jsonstr,
                         (System_String_o *)StringLiteral_16114/*"]"*/,
                         0);
  this = (BattleScriptRootComponent_o *)JsonManager__DeserializeArray_object_(
                                          v8,
                                          (const MethodInfo_31DEFB4 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  if ( !this )
    goto LABEL_53;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    sub_1C7BD48(this);
  myFSM = (BattleResultComponent_resultData_o *)this->fields.myFSM;
  TerminalPramsManager__SetBattleResultCampaignBonus(myFSM, 0);
  if ( !myFSM )
    goto LABEL_53;
  freeShopIds = (System_Collections_Generic_IEnumerable_TSource__o *)myFSM->fields.freeShopIds;
  if ( freeShopIds )
  {
    this = (BattleScriptRootComponent_o *)System_Linq_Enumerable__ToList_int_(
                                            freeShopIds,
                                            (const MethodInfo_31B3C14 *)Method_System_Linq_Enumerable_ToList_int___);
    v11 = BattleScriptRootComponent___c_TypeInfo;
    v12 = this;
    if ( !BattleScriptRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleScriptRootComponent___c_TypeInfo);
      v11 = BattleScriptRootComponent___c_TypeInfo;
    }
    _9__39_1 = (System_Converter_TInput__TOutput__o *)v11->static_fields->__9__39_1;
    if ( !_9__39_1 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = BattleScriptRootComponent___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v11->static_fields->__9;
      _9__39_1 = (System_Converter_TInput__TOutput__o *)sub_1C7BD34(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(
        _9__39_1,
        v14,
        Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__39_1__,
        0);
      static_fields = BattleScriptRootComponent___c_TypeInfo->static_fields;
      static_fields->__9__39_1 = (struct System_Converter_int__string__o *)_9__39_1;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__39_1,
        (int32_t)_9__39_1,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    if ( !v12 )
      goto LABEL_53;
    this = (BattleScriptRootComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                            (System_Collections_Generic_List_int__o *)v12,
                                            (System_Converter_T__TOutput__o *)_9__39_1,
                                            (const MethodInfo_3096538 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_53;
    v22 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_string__ToArray__);
    v23 = System_String__Join((System_String_o *)StringLiteral_809/*","*/, v22, 0);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_19820/*"freeShopIds"*/, v23, 0);
  }
  returnRarePriShopIds = (System_Collections_Generic_IEnumerable_TSource__o *)myFSM->fields.returnRarePriShopIds;
  if ( returnRarePriShopIds )
  {
    this = (BattleScriptRootComponent_o *)System_Linq_Enumerable__ToList_int_(
                                            returnRarePriShopIds,
                                            (const MethodInfo_31B3C14 *)Method_System_Linq_Enumerable_ToList_int___);
    v25 = BattleScriptRootComponent___c_TypeInfo;
    v26 = this;
    if ( !BattleScriptRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleScriptRootComponent___c_TypeInfo);
      v25 = BattleScriptRootComponent___c_TypeInfo;
    }
    _9__39_2 = (System_Converter_TInput__TOutput__o *)v25->static_fields->__9__39_2;
    if ( !_9__39_2 )
    {
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v25 = BattleScriptRootComponent___c_TypeInfo;
      }
      v28 = (Il2CppObject *)v25->static_fields->__9;
      _9__39_2 = (System_Converter_TInput__TOutput__o *)sub_1C7BD34(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(
        _9__39_2,
        v28,
        Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__39_2__,
        0);
      v29 = BattleScriptRootComponent___c_TypeInfo->static_fields;
      v29->__9__39_2 = (struct System_Converter_int__string__o *)_9__39_2;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v29->__9__39_2, (int32_t)_9__39_2, v30, v31, v32, v33, v34, v35);
    }
    if ( !v26 )
      goto LABEL_53;
    this = (BattleScriptRootComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                            (System_Collections_Generic_List_int__o *)v26,
                                            (System_Converter_T__TOutput__o *)_9__39_2,
                                            (const MethodInfo_3096538 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_53;
    v36 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_string__ToArray__);
    v37 = System_String__Join((System_String_o *)StringLiteral_809/*","*/, v36, 0);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_23315/*"returnRarePriShopIds"*/, v37, 0);
  }
  UnityEngine_PlayerPrefs__Save(0);
  this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_53;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CE84EC )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CE84EC = 1;
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
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4CE8917 )
      {
        sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
        byte_4CE8917 = 1;
      }
      v41 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v41 = TerminalPramsManager_TypeInfo;
      }
      WarId_k__BackingField = v41->static_fields->_WarId_k__BackingField;
      v43 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v43, v4, Method_BattleScriptRootComponent__EndRequestBattleScenario_b__39_0__, 0);
      if ( Instance )
      {
        v44 = QuestTree__mfBaseTreeUpdateWithOpenCheck((QuestTree_o *)Instance, WarId_k__BackingField, v43, 0);
        UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)v4, v44, 0);
        return;
      }
LABEL_53:
      sub_1C7BD40(this, jsonstr);
    }
  }
  v45 = v4[4].klass;
  if ( !v45 )
    goto LABEL_53;
  BattleScriptRootComponent__ProcessBattleScripts(
    (BattleScriptRootComponent_o *)v4,
    (int32_t)v45->_1.byval_arg.data,
    v39);
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
  if ( (byte_4CF2144 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleData_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_BattleMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__);
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    result = (System_String_o *)sub_1C7BAE8(&StringLiteral_22419/*"ng"*/);
    byte_4CF2144 = 1;
  }
  entity = 0;
  if ( !v2 )
    goto LABEL_20;
  if ( System_String__Equals_64212232(v2, (System_String_o *)StringLiteral_22419/*"ng"*/, 0) )
  {
    result = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( result )
    {
      CommonUI__SetLoadMode((CommonUI_o *)result, 0, 0);
      result = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( result )
      {
        AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)result, 34, 1, 0, 0, 0);
        return;
      }
    }
LABEL_20:
    sub_1C7BD40(result, method);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !result )
    goto LABEL_20;
  result = (System_String_o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                &entity,
                                (const MethodInfo_3430984 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__);
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

  if ( (byte_4CF2146 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BattleScriptRootComponent_EndRequestBattleSetup__);
    sub_1C7BAE8(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    byte_4CF2146 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0);
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
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

  if ( (byte_4CF2136 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CF2136 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0) )
    goto LABEL_11;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_36:
    sub_1C7BD40(Instance, v6);
  AvalonSceneManager__transitionScene_41728904((AvalonSceneManager_o *)Instance, 34, callback, 1, 0, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CEAE3A )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEAE3A = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_DispState_k__BackingField = 2;
  if ( !byte_4CE8D13 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_4CE8D13 = 1;
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_4CEA1D7 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_4CEA1D7 = 1;
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_IsDispOnly_k__BackingField = 1;
  if ( !byte_4CF218F )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_4CF218F = 1;
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_IsScriptDisp_k__BackingField = 1;
  if ( !byte_4CEBA47 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_4CEBA47 = 1;
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
  if ( (byte_4CF212F & 1) == 0 )
  {
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    byte_4CF212F = 1;
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  AssetLoader_LoadEndDataHandler_o *v20; // x19

  if ( (byte_4CF2154 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&CommonUI_TypeInfo);
    sub_1C7BAE8(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C7BAE8(&Method_BattleScriptRootComponent___c__DisplayClass51_0__PlayStaffRoll_b__0__);
    sub_1C7BAE8(&BattleScriptRootComponent___c__DisplayClass51_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_6049/*"Endroll"*/);
    byte_4CF2154 = 1;
  }
  v5 = sub_1C7BD34(BattleScriptRootComponent___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C7BD40(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  CommonUI__SetForceObi_16_9(1, 0);
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1C7BD34(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_BattleScriptRootComponent___c__DisplayClass51_0__PlayStaffRoll_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6049/*"Endroll"*/, v20, 1, 0);
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
    || (BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(talkInfo, isExit, method),
        (v6 = this->fields.talkInfo) == 0) )
  {
    sub_1C7BD40(talkInfo, isExit);
  }
  BattleScriptRootComponent__ProcessBattleScripts(this, v6->fields.talkPhase, v5);
}


void BattleScriptRootComponent__ProceedToNextTalkPhase_48520764(
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
  System_Collections_IEnumerator_o *v7; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  int32_t FadeoutKind; // w20
  bool v12; // zf
  CommonUI_o *v13; // x20
  const MethodInfo *v14; // x1
  System_Action_o *v15; // x0
  intptr_t *v16; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v17; // x8
  System_Action_o *v18; // x20
  const MethodInfo *v19; // x2
  AvalonSceneManager_c *v20; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v22; // x21

  if ( (byte_4CF2134 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AvalonSceneManager_TypeInfo);
    sub_1C7BAE8(&Method_BattleScriptRootComponent_StartScriptFinishBattleAfterDemo__);
    sub_1C7BAE8(&Method_BattleScriptRootComponent_StartScriptFinishBattle__);
    sub_1C7BAE8(&Method_BattleScriptRootComponent__ProcessBattleScripts_b__16_0__);
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4CF2134 = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__SaveTalkResumeInfo(talkInfo, 0);
  switch ( phaseType )
  {
    case 0:
    case 10:
      v7 = BattleScriptRootComponent__TransitionTerminalCoroutine(this, v6);
      UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)this, v7, 0);
      return;
    case 1:
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !Instance )
        goto LABEL_32;
      if ( !clsQuestCheck__isPlayQuestStartAction((clsQuestCheck_o *)Instance, 0) )
      {
        BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v10);
        return;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_32;
      FadeoutKind = CommonUI__maskFadGetFadeoutKind((CommonUI_o *)Instance, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = FadeoutKind == 1;
      v13 = (CommonUI_o *)Instance;
      if ( v12 )
      {
        if ( Instance )
        {
          CommonUI__maskFadeout((CommonUI_o *)Instance, 1, 0.0, 0, 0);
          BattleScriptRootComponent__StartBattleQuestStart(this, v14);
          return;
        }
LABEL_32:
        sub_1C7BD40(Instance, v9);
      }
      v20 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v20 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
      v22 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(
        v22,
        (Il2CppObject *)this,
        Method_BattleScriptRootComponent__ProcessBattleScripts_b__16_0__,
        0);
      if ( !v13 )
        goto LABEL_32;
      CommonUI__maskFadeout(v13, 1, DEFAULT_FADE_TIME, v22, 0);
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
      v17 = this->fields.talkInfo;
      if ( !v17 )
        goto LABEL_32;
      if ( v17->fields.talkType == 5 )
      {
        BattleScriptRootComponent__StartScriptNoBattleAfter(this, v9);
      }
      else
      {
        v15 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
        v16 = &Method_BattleScriptRootComponent_StartScriptFinishBattle__;
LABEL_27:
        v18 = v15;
        System_Action___ctor(v15, (Il2CppObject *)this, *v16, 0);
        BattleScriptRootComponent__LoadPlayScenarioWithMap(this, v18, v19);
      }
      return;
    case 7:
      BattleScriptRootComponent__StartDemoFinishBattle(this, v6);
      return;
    case 8:
      v15 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      v16 = &Method_BattleScriptRootComponent_StartScriptFinishBattleAfterDemo__;
      goto LABEL_27;
    case 9:
      BattleScriptRootComponent__StartSecondDemoFinishBattle(this, v6);
      return;
    case 11:
      BattleScriptRootComponent__StartScriptBattleStartJustBefore(this, v6);
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
  System_Collections_IEnumerator_o *v8; // x0
  Il2CppObject *v9; // x20
  Il2CppObject *Master_object; // x20
  QuestEntity_o *v11; // x20
  NetworkManager_ResultCallbackFunc_o *v12; // x20
  struct BattleScriptRootComponent_TalkScriptInfo_o *v13; // x8
  BattleScenarioRequest_o *v14; // x19
  int32_t pId; // w20
  int32_t qId; // w21
  QuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CF2148 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BattleScriptRootComponent_EndRequestBattleScenario__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_LoginQuestMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_NetworkManager_getRequest_BattleScenarioRequest___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CF2148 = 1;
  }
  entity = 0;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_LoginQuestMaster___);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo || !Instance )
    goto LABEL_43;
  if ( LoginQuestMaster__GetEntityByQuestId((LoginQuestMaster_o *)Instance, talkInfo->fields.qId, 0) )
  {
    v8 = BattleScriptRootComponent__TransitionTerminalCoroutine(this, v7);
    UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)this, v8, 0);
    return;
  }
  v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CE84EC )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CE84EC = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v9 )
    goto LABEL_43;
  CommonUI__CheckChangeOtherConnectMarkFromQuestClear(
    (CommonUI_o *)v9,
    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 636LL),
    0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !byte_4CE84EC )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CE84EC = 1;
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
  v11 = entity;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CE84EB )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CE84EB = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v11 )
LABEL_43:
    sub_1C7BD40(Instance, v5);
  if ( QuestEntity__HasFlag_43027152(v11, 0x8000, *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL) + 1, 0) )
  {
    Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  }
LABEL_35:
  v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent_EndRequestBattleScenario__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getRequest_object_(
                                v12,
                                (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  v13 = this->fields.talkInfo;
  if ( !v13 )
    goto LABEL_43;
  v14 = (BattleScenarioRequest_o *)Instance;
  qId = v13->fields.qId;
  pId = v13->fields.pId;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  Instance = (DataManager_o *)ScriptManager__GetSelectRouteArray(0);
  if ( !v14 )
    goto LABEL_43;
  BattleScenarioRequest__beginRequest(v14, qId, pId, (System_Int32_array *)Instance, 0);
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

  if ( (byte_4CF2147 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&BgmManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_NetworkManager_getRequest_BattleSetupRequest___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    byte_4CF2147 = 1;
  }
  routeSelect = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !routeSelect )
    goto LABEL_23;
  CommonUI__SetLoadMode(routeSelect, 2, 0);
  if ( !battleSetupInfo )
    goto LABEL_23;
  questId = battleSetupInfo->fields.questId;
  questPhase = battleSetupInfo->fields.questPhase;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  routeSelect = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
                     (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_BattleSetupRequest___);
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
    sub_1C7BD40(routeSelect, v6);
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

  if ( (byte_4CF2143 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_17096/*"badEndId"*/);
    sub_1C7BAE8(&StringLiteral_22511/*"notMeets"*/);
    byte_4CF2143 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    sub_1C7BD40(0, v7);
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Master_object, questId, phase, 0);
  if ( Entity )
  {
    ScriptIntParam = QuestPhaseEntity__getScriptIntParam(Entity, (System_String_o *)StringLiteral_17096/*"badEndId"*/, 0, 0);
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
    v10 = System_String__Concat_64176912((System_String_o *)StringLiteral_22511/*"notMeets"*/, ScriptName_NotMeetsCond, 0);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2
  NetworkManager_ResultCallbackFunc_o *v15; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleRouteSelectRequest_o *v17; // x19
  int32_t pId; // w20
  int32_t qId; // w21

  if ( (byte_4CF213B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    sub_1C7BAE8(&Method_BattleScriptRootComponent___c__DisplayClass25_0__ScriptFinishBattleAfterDemoEnd_b__0__);
    sub_1C7BAE8(&BattleScriptRootComponent___c__DisplayClass25_0_TypeInfo);
    byte_4CF213B = 1;
  }
  v5 = sub_1C7BD34(BattleScriptRootComponent___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_15;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v5 + 24) = isExit;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( ScriptManager__GetSelectRouteArray(0) )
  {
    v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v15,
      (Il2CppObject *)v5,
      Method_BattleScriptRootComponent___c__DisplayClass25_0__ScriptFinishBattleAfterDemoEnd_b__0__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (System_Int32_array *)NetworkManager__getRequest_object_(
                                             v15,
                                             (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      v17 = (BattleRouteSelectRequest_o *)Request_object;
      qId = talkInfo->fields.qId;
      pId = talkInfo->fields.pId;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      Request_object = ScriptManager__GetSelectRouteArray(0);
      if ( v17 )
      {
        BattleRouteSelectRequest__beginRequest(v17, qId, pId, Request_object, 0);
        return;
      }
    }
LABEL_15:
    sub_1C7BD40(Request_object, v7);
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, *(_BYTE *)(v5 + 24), v14);
}


bool BattleScriptRootComponent__StartBattle(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  int v3; // w20

  if ( (byte_4CF2145 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AvalonSceneManager_UnloadScene_FollowerRootComponent___);
    sub_1C7BAE8(&Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4CF2145 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v3 = BYTE4(Instance[9].klass);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  if ( !v3 )
  {
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 10, 1, 0, 1, 0);
    return 1;
  }
  AvalonSceneManager__UnloadScene_object_(
    (AvalonSceneManager_o *)Instance,
    (const MethodInfo_3157FF0 *)Method_AvalonSceneManager_UnloadScene_FollowerRootComponent___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (AvalonSceneManager__UnloadScene_object_(
          (AvalonSceneManager_o *)Instance,
          (const MethodInfo_3157FF0 *)Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
LABEL_11:
    sub_1C7BD40(Instance, v2);
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

  if ( (byte_4CF213D & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_BattleScriptRootComponent_ProceedToNextTalkPhase__);
    sub_1C7BAE8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4CF213D = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v4 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BattleScriptRootComponent_ProceedToNextTalkPhase__, 0);
  if ( !Instance )
    sub_1C7BD40(v5, v6);
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
  if ( (byte_4CF213F & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_string__TypeInfo);
    sub_1C7BAE8(&Method_BattleScriptRootComponent__StartDemoBeforeBattle_b__29_0__);
    this = (BattleScriptRootComponent_o *)sub_1C7BAE8(&ScriptManager_TypeInfo);
    byte_4CF213F = 1;
  }
  klass = v2[4].klass;
  if ( !klass )
    sub_1C7BD40(this, method);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v6 = (System_Action_object__o *)sub_1C7BD34(System_Action_string__TypeInfo);
  System_Action_object____ctor(v6, v2, Method_BattleScriptRootComponent__StartDemoBeforeBattle_b__29_0__, 0);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__LoadBattleStartGameDemo(name_high, namespaze, 0, (System_Action_string__o *)v6, 0, 0);
}


void BattleScriptRootComponent__StartDemoFinishBattle(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x0
  int32_t qId; // w20
  int32_t pId; // w21
  System_Action_object__o *v7; // x22
  const MethodInfo *v8; // x2

  if ( (byte_4CF2139 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_string__TypeInfo);
    sub_1C7BAE8(&Method_BattleScriptRootComponent__StartDemoFinishBattle_b__23_0__);
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    byte_4CF2139 = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_1C7BD40(0, method);
  qId = talkInfo->fields.qId;
  if ( qId < 1 )
  {
    BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(talkInfo, 0, v2);
    BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v8);
  }
  else
  {
    pId = talkInfo->fields.pId;
    v7 = (System_Action_object__o *)sub_1C7BD34(System_Action_string__TypeInfo);
    System_Action_object____ctor(
      v7,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent__StartDemoFinishBattle_b__23_0__,
      0);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__LoadBattleEndGameDemo(qId, pId, 1, (System_Action_string__o *)v7, 0, 0);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  TerminalPramsManager_c *v13; // x0
  int32_t WarId_k__BackingField; // w22
  Il2CppObject *Instance; // x20
  CombineResultEffectComponent_ClickDelegate_o *v16; // x21

  if ( (byte_4CF2150 & 1) == 0 )
  {
    sub_1C7BAE8(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    sub_1C7BAE8(&TutorialFlag_TypeInfo);
    sub_1C7BAE8(&Method_BattleScriptRootComponent___c__DisplayClass46_0__StartMashuPowerUpAction_b__0__);
    sub_1C7BAE8(&BattleScriptRootComponent___c__DisplayClass46_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_8562/*"MASHU_CHANGE_WAR_ID"*/);
    byte_4CF2150 = 1;
  }
  v4 = sub_1C7BD34(BattleScriptRootComponent___c__DisplayClass46_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_17;
  *(_QWORD *)(v4 + 16) = end_act;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)end_act, v7, v8, v9, v10, v11, v12);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CE8917 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CE8917 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v13->static_fields->_WarId_k__BackingField;
  if ( WarId_k__BackingField != ConstantMaster__getValue((System_String_o *)StringLiteral_8562/*"MASHU_CHANGE_WAR_ID"*/, 0) )
    goto LABEL_14;
  *(_DWORD *)(v4 + 24) = 115;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40989036(115, 0) )
  {
LABEL_14:
    ActionExtensions__Call(*(System_Action_o **)(v4 + 16), 0);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1C7BD34(CombineResultEffectComponent_ClickDelegate_TypeInfo);
  CombineResultEffectComponent_ClickDelegate___ctor(
    v16,
    (Il2CppObject *)v4,
    Method_BattleScriptRootComponent___c__DisplayClass46_0__StartMashuPowerUpAction_b__0__,
    0);
  if ( !Instance )
LABEL_17:
    sub_1C7BD40(v5, v6);
  CommonUI__OpenPowerUp((CommonUI_o *)Instance, v16, 0);
}


System_Collections_IEnumerator_o *BattleScriptRootComponent__StartMovie(
        BattleScriptRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4CF2133 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleScriptRootComponent__StartMovie_d__15_TypeInfo);
    byte_4CF2133 = 1;
  }
  v5 = sub_1C7BD34(BattleScriptRootComponent__StartMovie_d__15_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)callback, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void BattleScriptRootComponent__StartScript(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  int namespaze_high; // w8
  Il2CppClass *v5; // x8
  int32_t name_high; // w21
  int32_t namespaze; // w22
  QuestPhaseMaster_o *v8; // x20
  const MethodInfo *v9; // x2
  System_Action_o *v10; // x20
  const MethodInfo *v11; // x2
  System_Collections_IEnumerator_o *started; // x1
  BattleScriptRootComponent_TalkScriptInfo_o *v13; // x20
  Il2CppClass *v14; // x8
  int v15; // w8
  int v16; // w9
  Il2CppClass *v17; // x8

  v2 = (Il2CppObject *)this;
  if ( (byte_4CF2132 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_BattleScriptRootComponent__StartScript_b__14_0__);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    this = (BattleScriptRootComponent_o *)sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CF2132 = 1;
  }
  klass = v2[4].klass;
  if ( !klass )
    goto LABEL_27;
  namespaze_high = HIDWORD(klass->_1.namespaze);
  if ( (unsigned int)(namespaze_high - 3) < 4 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleScriptRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    v5 = v2[4].klass;
    if ( v5 )
    {
      name_high = HIDWORD(v5->_1.name);
      namespaze = (int32_t)v5->_1.namespaze;
      v8 = (QuestPhaseMaster_o *)this;
      this = (BattleScriptRootComponent_o *)UserGameMaster__getSelfUserGame(0);
      if ( this )
      {
        if ( v8 )
        {
          this = (BattleScriptRootComponent_o *)QuestPhaseMaster__IsMoviePhase(
                                                  v8,
                                                  name_high,
                                                  namespaze,
                                                  *((_DWORD *)&this->fields.setEndRoll + 1),
                                                  0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v10 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
            System_Action___ctor(v10, v2, Method_BattleScriptRootComponent__StartScript_b__14_0__, 0);
            started = BattleScriptRootComponent__StartMovie((BattleScriptRootComponent_o *)v2, v10, v11);
            UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)v2, started, 0);
            return;
          }
          v17 = v2[4].klass;
          if ( v17 )
          {
            BattleScriptRootComponent__ProcessBattleScripts(
              (BattleScriptRootComponent_o *)v2,
              (int32_t)v17->_1.byval_arg.data,
              v9);
            return;
          }
        }
      }
    }
LABEL_27:
    sub_1C7BD40(this, method);
  }
  if ( namespaze_high == 1 )
  {
    this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_27;
    CommonUI__maskFadeout((CommonUI_o *)this, 2, 0.0, 0, 0);
    v13 = (BattleScriptRootComponent_TalkScriptInfo_o *)v2[4].klass;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__SaveTalkResumeInfo(v13, 0);
    v14 = v2[4].klass;
    if ( !v14 )
      goto LABEL_27;
    v16 = HIDWORD(v14->_1.name);
    v15 = (int)v14->_1.namespaze;
    if ( v16 <= 0 )
    {
      if ( v15 )
        BattleScriptRootComponent__ChapterStartEffect((BattleScriptRootComponent_o *)v2, method);
      else
        BattleScriptRootComponent__ChapterStart((BattleScriptRootComponent_o *)v2, method);
    }
    else if ( v15 )
    {
      BattleScriptRootComponent__ChapterStartEffectQuest((BattleScriptRootComponent_o *)v2, method);
    }
    else
    {
      BattleScriptRootComponent__ChapterStartQuest((BattleScriptRootComponent_o *)v2, method);
    }
  }
}


void BattleScriptRootComponent__StartScriptBattleStartJustBefore(
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
  if ( (byte_4CF2141 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BattleScriptRootComponent_ProceedToNextTalkPhase___78801424);
    sub_1C7BAE8(&ScriptManager_CallbackFunc_TypeInfo);
    this = (BattleScriptRootComponent_o *)sub_1C7BAE8(&ScriptManager_TypeInfo);
    byte_4CF2141 = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        qId = talkInfo->fields.qId,
        pId = talkInfo->fields.pId,
        v7 = (ScriptManager_CallbackFunc_o *)sub_1C7BD34(ScriptManager_CallbackFunc_TypeInfo),
        ScriptManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)v2,
          Method_BattleScriptRootComponent_ProceedToNextTalkPhase___78801424,
          0),
        (this = (BattleScriptRootComponent_o *)v2->fields.talkInfo) == 0) )
  {
    sub_1C7BD40(this, method);
  }
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)this,
               method);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayBattleStartJustBefore(wId, qId, pId, v7, 0, JumpLine, 0);
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
  if ( (byte_4CF213E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BattleScriptRootComponent_ProceedToNextTalkPhase___78801424);
    sub_1C7BAE8(&Method_BattleScriptRootComponent_RequestBattleSecnarioForNoneBattleQuest__);
    sub_1C7BAE8(&ScriptManager_CallbackFunc_TypeInfo);
    this = (BattleScriptRootComponent_o *)sub_1C7BAE8(&ScriptManager_TypeInfo);
    byte_4CF213E = 1;
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
  v9 = (ScriptManager_CallbackFunc_o *)sub_1C7BD34(ScriptManager_CallbackFunc_TypeInfo);
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
    sub_1C7BD40(this, method);
  }
  ScriptManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)v2,
    Method_BattleScriptRootComponent_ProceedToNextTalkPhase___78801424,
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
  if ( (byte_4CF2140 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BattleScriptRootComponent_ProceedToNextTalkPhase___78801424);
    sub_1C7BAE8(&ScriptManager_CallbackFunc_TypeInfo);
    this = (BattleScriptRootComponent_o *)sub_1C7BAE8(&ScriptManager_TypeInfo);
    byte_4CF2140 = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        qId = talkInfo->fields.qId,
        pId = talkInfo->fields.pId,
        v7 = (ScriptManager_CallbackFunc_o *)sub_1C7BD34(ScriptManager_CallbackFunc_TypeInfo),
        ScriptManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)v2,
          Method_BattleScriptRootComponent_ProceedToNextTalkPhase___78801424,
          0),
        (this = (BattleScriptRootComponent_o *)v2->fields.talkInfo) == 0) )
  {
    sub_1C7BD40(this, method);
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

  if ( (byte_4CF2137 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BattleScriptRootComponent_StartScriptFinishBattleEnd2__);
    sub_1C7BAE8(&BgmManager_TypeInfo);
    sub_1C7BAE8(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CF2137 = 1;
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
    if ( !byte_4CE8D13 )
    {
      sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
      byte_4CE8D13 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    v13->static_fields->_IsAutoResume_k__BackingField = 1;
    talkInfo = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( talkInfo )
    {
      AvalonSceneManager__transitionSceneRefresh(talkInfo, 34, 1, 0, 0, 0);
      return;
    }
LABEL_38:
    sub_1C7BD40(talkInfo, method);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CEB5E2 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEB5E2 = 1;
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
  v9 = (ScriptManager_CallbackFunc_o *)sub_1C7BD34(ScriptManager_CallbackFunc_TypeInfo);
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
    if ( !byte_4CEB5F8 )
    {
      sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
      byte_4CEB5F8 = 1;
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
    ScriptManager__PlayBattleEnd2_45016900(
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

  if ( (byte_4CF213A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BattleScriptRootComponent_ScriptFinishBattleAfterDemoEnd__);
    sub_1C7BAE8(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CF213A = 1;
  }
  if ( this->fields.setEndRoll )
  {
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      qId = talkInfo->fields.qId;
      pId = talkInfo->fields.pId;
      winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(talkInfo, method);
      v7 = (ScriptManager_CallbackFunc_o *)sub_1C7BD34(ScriptManager_CallbackFunc_TypeInfo);
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
    sub_1C7BD40(talkInfo, method);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CEB5E2 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEB5E2 = 1;
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
  v14 = (ScriptManager_CallbackFunc_o *)sub_1C7BD34(ScriptManager_CallbackFunc_TypeInfo);
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
    if ( !byte_4CEB5F8 )
    {
      sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
      byte_4CEB5F8 = 1;
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
    ScriptManager__PlayBattleEnd_45015584(v11, v10, v13, 15, v14, 0, v15, IsPlayScriptWithMap_k__BackingField, 0);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2
  NetworkManager_ResultCallbackFunc_o *v15; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleRouteSelectRequest_o *v17; // x19
  int32_t pId; // w20
  int32_t qId; // w21

  if ( (byte_4CF2138 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    sub_1C7BAE8(&Method_BattleScriptRootComponent___c__DisplayClass22_0__StartScriptFinishBattleEnd2_b__0__);
    sub_1C7BAE8(&BattleScriptRootComponent___c__DisplayClass22_0_TypeInfo);
    byte_4CF2138 = 1;
  }
  v5 = sub_1C7BD34(BattleScriptRootComponent___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_15;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v5 + 24) = isExit;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( ScriptManager__GetSelectRouteArray(0) )
  {
    v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v15,
      (Il2CppObject *)v5,
      Method_BattleScriptRootComponent___c__DisplayClass22_0__StartScriptFinishBattleEnd2_b__0__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (System_Int32_array *)NetworkManager__getRequest_object_(
                                             v15,
                                             (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      v17 = (BattleRouteSelectRequest_o *)Request_object;
      qId = talkInfo->fields.qId;
      pId = talkInfo->fields.pId;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      Request_object = ScriptManager__GetSelectRouteArray(0);
      if ( v17 )
      {
        BattleRouteSelectRequest__beginRequest(v17, qId, pId, Request_object, 0);
        return;
      }
    }
LABEL_15:
    sub_1C7BD40(Request_object, v7);
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, *(_BYTE *)(v5 + 24), v14);
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

  if ( (byte_4CF214A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__40_0__);
    sub_1C7BAE8(&Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__40_1__);
    sub_1C7BAE8(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    byte_4CF214A = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_13;
  setEndRoll = this->fields.setEndRoll;
  qId = talkInfo->fields.qId;
  pId = talkInfo->fields.pId;
  winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(talkInfo, method);
  v8 = (ScriptManager_CallbackFunc_o *)sub_1C7BD34(ScriptManager_CallbackFunc_TypeInfo);
  v9 = v8;
  if ( setEndRoll )
  {
    ScriptManager_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__40_0__,
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
    sub_1C7BD40(talkInfo, method);
  }
  ScriptManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__40_1__,
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
  if ( (byte_4CF213C & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_string__TypeInfo);
    sub_1C7BAE8(&Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__26_0__);
    this = (BattleScriptRootComponent_o *)sub_1C7BAE8(&ScriptManager_TypeInfo);
    byte_4CF213C = 1;
  }
  klass = v2[4].klass;
  if ( !klass )
    sub_1C7BD40(this, method);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v6 = (System_Action_object__o *)sub_1C7BD34(System_Action_string__TypeInfo);
  System_Action_object____ctor(v6, v2, Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__26_0__, 0);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__LoadBattleEndGameDemo(name_high, namespaze, 0, (System_Action_string__o *)v6, 0, 0);
}


void BattleScriptRootComponent__TransitionTerminal(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = BattleScriptRootComponent__TransitionTerminalCoroutine(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)this, v3, 0);
}


System_Collections_IEnumerator_o *BattleScriptRootComponent__TransitionTerminalCoroutine(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CF2151 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleScriptRootComponent__TransitionTerminalCoroutine_d__48_TypeInfo);
    byte_4CF2151 = 1;
  }
  v3 = sub_1C7BD34(BattleScriptRootComponent__TransitionTerminalCoroutine_d__48_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
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

  if ( (byte_4CF2152 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CF2152 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
    if ( !byte_4CEB7F1 )
    {
      sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
      byte_4CEB7F1 = 1;
    }
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    }
    v6 = 2;
    *(_BYTE *)(*(_QWORD *)&Instance[1].fields._DispLog + 633LL) = 1;
  }
  else
  {
    v6 = 1;
  }
  v7 = this->fields.talkInfo;
  if ( !v7 )
    goto LABEL_29;
  talkType = v7->fields.talkType;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  if ( talkType != 5 )
    goto LABEL_21;
  v9 = AvalonSceneManager__checkLoadedScene((AvalonSceneManager_o *)Instance, 34, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_29:
    sub_1C7BD40(Instance, v4);
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
  if ( !byte_4CF218F )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CF218F = 1;
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
  System_Action_o *_9__50_0; // x22
  System_String_o *v13; // x20
  System_String_o *v14; // x21
  Il2CppObject *v15; // x23
  struct BattleScriptRootComponent___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  TerminalPramsManager_c *v23; // x0

  if ( (byte_4CF2153 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    sub_1C7BAE8(&Method_BattleScriptRootComponent___c__TransitionWarBoard_b__50_0__);
    sub_1C7BAE8(&BattleScriptRootComponent___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25685/*"バトルスクリプトエラー"*/);
    sub_1C7BAE8(&StringLiteral_25686/*"バトル前スクリプト以外のトークから聖杯戦争盤へ移動することはできません。\nターミナルへ戻ります。"*/);
    byte_4CF2153 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_32;
  if ( talkInfo->fields.talkType != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (CommonUI_o *)Instance;
    v11 = BattleScriptRootComponent___c_TypeInfo;
    if ( !BattleScriptRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleScriptRootComponent___c_TypeInfo);
      v11 = BattleScriptRootComponent___c_TypeInfo;
    }
    _9__50_0 = v11->static_fields->__9__50_0;
    v13 = (System_String_o *)StringLiteral_25686/*"バトル前スクリプト以外のトークから聖杯戦争盤へ移動することはできません。\nターミナルへ戻ります。"*/;
    v14 = (System_String_o *)StringLiteral_25685/*"バトルスクリプトエラー"*/;
    if ( !_9__50_0 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = BattleScriptRootComponent___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v11->static_fields->__9;
      _9__50_0 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(_9__50_0, v15, Method_BattleScriptRootComponent___c__TransitionWarBoard_b__50_0__, 0);
      static_fields = BattleScriptRootComponent___c_TypeInfo->static_fields;
      static_fields->__9__50_0 = _9__50_0;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__50_0,
        (int32_t)_9__50_0,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
    }
    if ( v10 )
    {
      CommonUI__OpenNotificationDialog(v10, v14, v13, _9__50_0, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
      return;
    }
    goto LABEL_32;
  }
  bSetupInfo = talkInfo->fields.bSetupInfo;
  if ( !bSetupInfo )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CE8D13 )
    {
      sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
      byte_4CE8D13 = 1;
    }
    v23 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v23 = TerminalPramsManager_TypeInfo;
    }
    v23->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      v9 = 34;
      v8 = 0;
      goto LABEL_30;
    }
LABEL_32:
    sub_1C7BD40(Instance, v4);
  }
  if ( bSetupInfo->fields.isScriptBeforePartySelect )
  {
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    bSetupInfo->fields.selectedBranchIdx = ScriptManager__GetSelectBranchIndex(0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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


void BattleScriptRootComponent___ChapterStartEffect_b__43_0(
        BattleScriptRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20
  BattleScriptRootComponent_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4CF215B & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_BattleScriptRootComponent__ChapterStartEffect_b__43_1__);
    byte_4CF215B = 1;
  }
  v4 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BattleScriptRootComponent__ChapterStartEffect_b__43_1__, 0);
  BattleScriptRootComponent__StartMashuPowerUpAction(v5, v4, v6);
}


void BattleScriptRootComponent___ChapterStartEffect_b__43_1(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  BattleScriptRootComponent_o *v2; // x19
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w20
  const MethodInfo *v5; // x1

  v2 = this;
  if ( (byte_4CF215C & 1) == 0 )
  {
    this = (BattleScriptRootComponent_o *)sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CF215C = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo )
    sub_1C7BD40(this, method);
  wId = talkInfo->fields.wId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__SetWarStartedId(wId, 0);
  BattleScriptRootComponent__EndChapterStart(v2, v5);
}


void BattleScriptRootComponent___ChapterStartQuest_b__42_0(BattleScriptRootComponent_o *this, const MethodInfo *method)
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
  if ( (byte_4CF215A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C7BAE8(&Method_SingletonTemplate_QuestTree__get_Instance__);
    this = (BattleScriptRootComponent_o *)sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CF215A = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_29;
  ++talkInfo->fields.pId;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__SaveTalkResumeInfo(talkInfo, 0);
  this = (BattleScriptRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  v4 = v2->fields.talkInfo;
  if ( !v4 || !this )
    goto LABEL_29;
  WarEntityByWarID = (Il2CppObject *)QuestTree__mfGetWarEntityByWarID((QuestTree_o *)this, v4->fields.wId, 0);
  entity = WarEntityByWarID;
  if ( !WarEntityByWarID )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleScriptRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_WarMaster___);
    v6 = v2->fields.talkInfo;
    if ( !v6 || !this )
      goto LABEL_29;
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
      &entity,
      v6->fields.wId,
      (const MethodInfo_342E348 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    WarEntityByWarID = entity;
    if ( !entity )
      goto LABEL_28;
  }
  if ( !WarEntity__HasFlag((WarEntity_o *)WarEntityByWarID, 0x8000, 0) )
    goto LABEL_28;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CEB189 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEB189 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_IsPhaseClear_k__BackingField = 1;
  this = (BattleScriptRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v9 = v2->fields.talkInfo;
  if ( !v9 || !this )
LABEL_29:
    sub_1C7BD40(this, method);
  v10 = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)this, v9->fields.qId, 0, 0);
  if ( !byte_4CEB188 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEB188 = 1;
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


void BattleScriptRootComponent___ChapterStart_b__41_0(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  BattleScriptRootComponent_o *v2; // x19
  BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x20
  const MethodInfo *v4; // x1

  v2 = this;
  if ( (byte_4CF2159 & 1) == 0 )
  {
    this = (BattleScriptRootComponent_o *)sub_1C7BAE8(&ScriptManager_TypeInfo);
    byte_4CF2159 = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo )
    sub_1C7BD40(this, method);
  ++talkInfo->fields.pId;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__SaveTalkResumeInfo(talkInfo, 0);
  BattleScriptRootComponent__ChapterStartEffect(v2, v4);
}


void BattleScriptRootComponent___EndRequestBattleScenario_b__39_0(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8

  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_1C7BD40(this, method);
  BattleScriptRootComponent__ProcessBattleScripts(this, talkInfo->fields.talkPhase, v2);
}


void BattleScriptRootComponent___StartDemoBeforeBattle_b__29_0(
        BattleScriptRootComponent_o *this,
        System_String_o *demoInfo,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 bSetupInfo; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v15; // x8

  if ( (byte_4CF2157 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleSetupInfo_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CF2157 = 1;
  }
  if ( demoInfo )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        bSetupInfo = (__int64)talkInfo->fields.bSetupInfo;
        if ( !bSetupInfo )
        {
          bSetupInfo = sub_1C7BD34(BattleSetupInfo_TypeInfo);
          BattleSetupInfo___ctor((BattleSetupInfo_o *)bSetupInfo, 0);
          v15 = this->fields.talkInfo;
          if ( !v15 || !bSetupInfo )
            goto LABEL_13;
          *(_QWORD *)(bSetupInfo + 20) = *(_QWORD *)&v15->fields.qId;
        }
        *(_QWORD *)(bSetupInfo + 104) = demoInfo;
        *(_WORD *)(bSetupInfo + 96) = 1;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(bSetupInfo + 104), (int32_t)demoInfo, v7, v8, v9, v10, v11, v12);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 50, 1, (Il2CppObject *)bSetupInfo, 0);
          return;
        }
      }
    }
LABEL_13:
    sub_1C7BD40(Instance, v6);
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, method);
}


void BattleScriptRootComponent___StartDemoFinishBattle_b__23_0(
        BattleScriptRootComponent_o *this,
        System_String_o *demoInfo,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 bSetupInfo; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v15; // x8

  if ( (byte_4CF2155 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleSetupInfo_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CF2155 = 1;
  }
  if ( demoInfo )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        bSetupInfo = (__int64)talkInfo->fields.bSetupInfo;
        if ( !bSetupInfo )
        {
          bSetupInfo = sub_1C7BD34(BattleSetupInfo_TypeInfo);
          BattleSetupInfo___ctor((BattleSetupInfo_o *)bSetupInfo, 0);
          v15 = this->fields.talkInfo;
          if ( !v15 || !bSetupInfo )
            goto LABEL_13;
          *(_QWORD *)(bSetupInfo + 20) = *(_QWORD *)&v15->fields.qId;
        }
        *(_QWORD *)(bSetupInfo + 104) = demoInfo;
        *(_WORD *)(bSetupInfo + 96) = 256;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(bSetupInfo + 104), (int32_t)demoInfo, v7, v8, v9, v10, v11, v12);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 50, 1, (Il2CppObject *)bSetupInfo, 0);
          return;
        }
      }
    }
LABEL_13:
    sub_1C7BD40(Instance, v6);
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, method);
}


void BattleScriptRootComponent___StartScriptNoBattleAfter_b__40_0(
        BattleScriptRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4CF2158 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_BattleScriptRootComponent_TransitionTerminal__);
    byte_4CF2158 = 1;
  }
  v4 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BattleScriptRootComponent_TransitionTerminal__, 0);
  BattleScriptRootComponent__PlayStaffRoll(this, v4, v5);
}


// local variable allocation has failed, the output may be wrong!
void BattleScriptRootComponent___StartScriptNoBattleAfter_b__40_1(
        BattleScriptRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = BattleScriptRootComponent__TransitionTerminalCoroutine(this, (const MethodInfo *)isExit);
  UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)this, v4, 0);
}


void BattleScriptRootComponent___StartScript_b__14_0(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8

  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_1C7BD40(this, method);
  BattleScriptRootComponent__ProcessBattleScripts(this, talkInfo->fields.talkPhase, v2);
}


void BattleScriptRootComponent___StartSecondDemoFinishBattle_b__26_0(
        BattleScriptRootComponent_o *this,
        System_String_o *demoInfo,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 bSetupInfo; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v15; // x8
  System_Action_o *v16; // x19
  const MethodInfo *v17; // x2

  if ( (byte_4CF2156 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__26_1__);
    sub_1C7BAE8(&BattleSetupInfo_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CF2156 = 1;
  }
  if ( demoInfo )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        bSetupInfo = (__int64)talkInfo->fields.bSetupInfo;
        if ( !bSetupInfo )
        {
          bSetupInfo = sub_1C7BD34(BattleSetupInfo_TypeInfo);
          BattleSetupInfo___ctor((BattleSetupInfo_o *)bSetupInfo, 0);
          v15 = this->fields.talkInfo;
          if ( !v15 || !bSetupInfo )
            goto LABEL_15;
          *(_QWORD *)(bSetupInfo + 20) = *(_QWORD *)&v15->fields.qId;
        }
        *(_QWORD *)(bSetupInfo + 104) = demoInfo;
        *(_WORD *)(bSetupInfo + 96) = 0;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(bSetupInfo + 104), (int32_t)demoInfo, v7, v8, v9, v10, v11, v12);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 50, 1, (Il2CppObject *)bSetupInfo, 0);
          return;
        }
      }
    }
LABEL_15:
    sub_1C7BD40(Instance, v6);
  }
  if ( this->fields.setEndRoll )
  {
    v16 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      v16,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__26_1__,
      0);
    BattleScriptRootComponent__PlayStaffRoll(this, v16, v17);
  }
  else
  {
    BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, method);
  }
}


void BattleScriptRootComponent___StartSecondDemoFinishBattle_b__26_1(
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

  if ( (byte_4CF2130 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CF2130 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C7BD40(Instance, v4);
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
    sub_1C7BD40(0, data);
  BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(talkInfo, 0, method);
  BattleScriptRootComponent__StartScript(this, v5);
}


void BattleScriptRootComponent__beginStartUp(
        BattleScriptRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  Il2CppClass *v10; // x1
  __int64 naturalAligment; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o **p_talkInfo; // x20
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *v15; // x8
  unsigned int talkPhase; // w9
  WarEntity_o *QuestId; // x0
  int32_t id; // w20
  bool v19; // w8

  if ( (byte_4CF2131 & 1) == 0 )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    sub_1C7BAE8(&StringLiteral_6409/*"FES_WAR_ID"*/);
    byte_4CF2131 = 1;
  }
  if ( !data )
    goto LABEL_9;
  v10 = (Il2CppClass *)BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  naturalAligment = BattleScriptRootComponent_TalkScriptInfo_TypeInfo->_2.naturalAligment;
  if ( data->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (BattleScriptRootComponent_TalkScriptInfo_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] != BattleScriptRootComponent_TalkScriptInfo_TypeInfo
    || (this->fields.talkInfo = (struct BattleScriptRootComponent_TalkScriptInfo_o *)data,
        p_talkInfo = &this->fields.talkInfo,
        data->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || data->klass->_2.typeHierarchy[naturalAligment - 1] != v10 )
  {
    sub_1C7C0DC(data);
LABEL_9:
    this->fields.talkInfo = 0;
    p_talkInfo = &this->fields.talkInfo;
  }
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_talkInfo, (int32_t)data, (int32_t)method, v3, v4, v5, v6, v7);
  v15 = *p_talkInfo;
  if ( !*p_talkInfo )
    goto LABEL_25;
  if ( v15->fields.restoreLine )
  {
    talkPhase = v15->fields.talkPhase;
    if ( talkPhase <= 0xB && ((1 << talkPhase) & 0x954) != 0 && !v15->fields.isTitleResume )
    {
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      BgmManager__SetMute(1, 0);
      v15 = *p_talkInfo;
      if ( !*p_talkInfo )
        goto LABEL_25;
    }
  }
  v15->fields.isTitleResume = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_WarMaster___),
        !*p_talkInfo)
    || !Instance )
  {
LABEL_25:
    sub_1C7BD40(Instance, v14);
  }
  QuestId = WarMaster__getByLastQuestId((WarMaster_o *)Instance, (*p_talkInfo)->fields.qId, 0);
  if ( QuestId )
  {
    id = QuestId->fields.id;
    v19 = id == ConstantMaster__getValue((System_String_o *)StringLiteral_6409/*"FES_WAR_ID"*/, 0);
  }
  else
  {
    v19 = 0;
  }
  this->fields.setEndRoll = v19;
  SceneRootComponent__beginStartUp_42059656((SceneRootComponent_o *)this, 0);
}


void BattleScriptRootComponent_TalkScriptInfo___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4CF2166 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1313/*"2.0"*/);
    byte_4CF2166 = 1;
  }
  BattleScriptRootComponent_TalkScriptInfo_TypeInfo->static_fields->TalkResumeVersion = (struct System_String_o *)StringLiteral_1313/*"2.0"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)BattleScriptRootComponent_TalkScriptInfo_TypeInfo->static_fields,
    StringLiteral_1313/*"2.0"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  BattleScriptRootComponent_TalkScriptInfo_TypeInfo->static_fields->WinResultMultiplicationValue = 100;
}


void BattleScriptRootComponent_TalkScriptInfo___ctor(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleScriptRootComponent_TalkScriptInfo___ctor_48536900(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        BattleScriptRootComponent_TalkScriptSaveInfo_o *saveInfo,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  BattleSetupInfo_BattleSetupSaveInfo_o *bSetupInfo; // x22
  BattleSetupInfo_o *v14; // x21
  struct BattleSetupInfo_o **p_bSetupInfo; // x20

  if ( (byte_4CF2160 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleSetupInfo_TypeInfo);
    byte_4CF2160 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !saveInfo )
    sub_1C7BD40(v5, v6);
  *(_OWORD *)&this->fields.wId = *(_OWORD *)&saveInfo->fields.wId;
  *(_QWORD *)&this->fields.talkPhase = *(_QWORD *)&saveInfo->fields.talkPhase;
  bSetupInfo = saveInfo->fields.bSetupInfo;
  if ( bSetupInfo )
  {
    v14 = (BattleSetupInfo_o *)sub_1C7BD34(BattleSetupInfo_TypeInfo);
    BattleSetupInfo___ctor_42154320(v14, bSetupInfo, 0);
  }
  else
  {
    v14 = 0;
  }
  this->fields.bSetupInfo = v14;
  p_bSetupInfo = &this->fields.bSetupInfo;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_bSetupInfo, (int32_t)v14, v7, v8, v9, v10, v11, v12);
  *((_BYTE *)p_bSetupInfo + 9) = 0;
  *((_BYTE *)p_bSetupInfo + 10) = saveInfo->fields.isAfterOrganization;
}


void BattleScriptRootComponent_TalkScriptInfo___ctor_48537080(
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
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

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
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v16, 0, v18, v19, v20, v21, v22, v23);
  *(_WORD *)((char *)&v16->monitor + 1) = 0;
}


void BattleScriptRootComponent_TalkScriptInfo___ctor_48537212(
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
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  const MethodInfo *v24; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.wId = war;
  this->fields.qId = quest;
  this->fields.pId = phase;
  this->fields.talkType = type;
  BattleScriptRootComponent_TalkScriptInfo__setWinLoseInfo(this, winLose, winResult, v17);
  this->fields.bSetupInfo = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.bSetupInfo, 0, v18, v19, v20, v21, v22, v23);
  this->fields._IsAfterOrganization_k__BackingField = 0;
  BattleScriptRootComponent_TalkScriptInfo__SetBasePhaseOfType(this, type, isPlayedScript, v24);
  this->fields.restoreLine = 0;
}


void BattleScriptRootComponent_TalkScriptInfo___ctor_48537468(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        BattleSetupInfo_o *battleInfo,
        int32_t type,
        int32_t winLose,
        int32_t winResult,
        bool isPlayedScript,
        bool isOrganized,
        const MethodInfo *method)
{
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x3
  struct BattleSetupInfo_o *bSetupInfo; // x8
  const MethodInfo *v25; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.bSetupInfo = battleInfo;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.bSetupInfo,
    (int32_t)battleInfo,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  bSetupInfo = this->fields.bSetupInfo;
  if ( !bSetupInfo )
    sub_1C7BD40(v21, v22);
  *(_QWORD *)&this->fields.wId = *(_QWORD *)&bSetupInfo->fields.warId;
  this->fields.pId = bSetupInfo->fields.questPhase;
  this->fields.talkType = type;
  BattleScriptRootComponent_TalkScriptInfo__setWinLoseInfo(this, winLose, winResult, v23);
  this->fields._IsAfterOrganization_k__BackingField = isOrganized;
  BattleScriptRootComponent_TalkScriptInfo__SetBasePhaseOfType(this, type, isPlayedScript, v25);
  this->fields.restoreLine = 0;
}


BattleScriptRootComponent_TalkScriptSaveInfo_o *BattleScriptRootComponent_TalkScriptInfo__GetInfoForSave(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  BattleScriptRootComponent_TalkScriptInfo_c *v11; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_StaticFields *static_fields; // x8
  struct System_String_o *TalkResumeVersion; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  BattleSetupInfo_o *bSetupInfo; // x0
  BattleSetupInfo_BattleSetupSaveInfo_o *InfoForSave; // x1
  BattleScriptRootComponent_TalkScriptSaveInfo_o *result; // x0

  if ( (byte_4CF2161 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    sub_1C7BAE8(&BattleScriptRootComponent_TalkScriptSaveInfo_TypeInfo);
    byte_4CF2161 = 1;
  }
  v3 = sub_1C7BD34(BattleScriptRootComponent_TalkScriptSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  v11 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  if ( !BattleScriptRootComponent_TalkScriptInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    v11 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  }
  if ( !v3 )
    sub_1C7BD40(v11, v4);
  static_fields = v11->static_fields;
  TalkResumeVersion = static_fields->TalkResumeVersion;
  *(_QWORD *)(v3 + 16) = static_fields->TalkResumeVersion;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)TalkResumeVersion, v5, v6, v7, v8, v9, v10);
  *(_OWORD *)(v3 + 24) = *(_OWORD *)&this->fields.wId;
  *(_QWORD *)(v3 + 40) = *(_QWORD *)&this->fields.talkPhase;
  bSetupInfo = this->fields.bSetupInfo;
  if ( bSetupInfo )
    InfoForSave = BattleSetupInfo__GetInfoForSave(bSetupInfo, 0);
  else
    InfoForSave = 0;
  *(_QWORD *)(v3 + 48) = InfoForSave;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 48), (int32_t)InfoForSave, v14, v15, v16, v17, v18, v19);
  result = (BattleScriptRootComponent_TalkScriptSaveInfo_o *)v3;
  *(_BYTE *)(v3 + 56) = this->fields._IsAfterOrganization_k__BackingField;
  return result;
}


int32_t BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CF2163 & 1) == 0 )
  {
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    byte_4CF2163 = 1;
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

  if ( (byte_4CF2165 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF2165 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0
    || (Instance = (DataManager_o *)QuestMaster__getQuestEntity((QuestMaster_o *)Instance, this->fields.qId, 0)) == 0 )
  {
    sub_1C7BD40(Instance, v4);
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

  if ( (byte_4CF2164 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_4CF2164 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestMaster___);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v21 = this->fields.pId;
    v22 = (ScriptManager_o *)Instance;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    CachedSelectedBranchQuestId = ScriptManager__GetScriptName_BattleEnd2(ScriptQuestId, v21, v19, 0);
    if ( v22 )
    {
      if ( ScriptManager__IsExistScriptFile(v22, CachedSelectedBranchQuestId, 0) )
        return 1;
      v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
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
  v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  v14 = this->fields.pId;
  v15 = (ScriptManager_o *)v13;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  CachedSelectedBranchQuestId = ScriptManager__GetScriptName_BattleStart(ScriptQuestId, v14, 0);
  if ( !v15 )
LABEL_30:
    sub_1C7BD40(CachedSelectedBranchQuestId, v8);
  if ( ScriptManager__IsExistScriptFile(v15, CachedSelectedBranchQuestId, 0) )
    return 1;
  v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
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
        bool isExit,
        const MethodInfo *method)
{
  int32_t v5; // w8
  struct BattleSetupInfo_o *bSetupInfo; // x8

  if ( (byte_4CF2162 & 1) == 0 )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    byte_4CF2162 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteLineInfo(0);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__SetMute(0, 0);
  this->fields.restoreLine = 0;
  if ( !isExit )
  {
    v5 = 2;
    switch ( this->fields.talkPhase )
    {
      case 1:
        goto LABEL_9;
      case 2:
        v5 = 3;
        goto LABEL_9;
      case 3:
        v5 = 4;
        goto LABEL_9;
      case 4:
        bSetupInfo = this->fields.bSetupInfo;
        if ( bSetupInfo && bSetupInfo->fields.isScriptBeforePartySelect )
          goto LABEL_15;
        v5 = 11;
        goto LABEL_9;
      case 6:
        v5 = 7;
        goto LABEL_9;
      case 7:
        v5 = 8;
        goto LABEL_9;
      case 8:
        v5 = 9;
        goto LABEL_9;
      case 9:
        break;
      case 0xB:
LABEL_15:
        v5 = 5;
        goto LABEL_9;
      default:
        return;
    }
  }
  v5 = 10;
LABEL_9:
  this->fields.talkPhase = v5;
}


void BattleScriptRootComponent_TalkScriptInfo__SetBasePhaseOfType(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        int32_t type,
        bool isPlayedScript,
        const MethodInfo *method)
{
  int32_t v4; // w8
  struct BattleSetupInfo_o *bSetupInfo; // x8

  v4 = 1;
  switch ( type )
  {
    case 3:
    case 5:
      if ( this->fields._IsAfterOrganization_k__BackingField
        && (bSetupInfo = this->fields.bSetupInfo) != 0
        && bSetupInfo->fields.isScriptBeforePartySelect )
      {
        v4 = 11;
      }
      else if ( isPlayedScript )
      {
        v4 = 3;
      }
      else
      {
        v4 = 1;
      }
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
  struct BattleSetupInfo_o *bSetupInfo; // x8
  unsigned int talkPhase; // w9
  int32_t v5; // w8
  int v6; // w9

  this->fields.restoreLine = isJump;
  if ( isJump )
  {
    this->fields.isTitleResume = 1;
    return;
  }
  if ( this->fields.talkType == 1 )
    this->fields.pId = 0;
  bSetupInfo = this->fields.bSetupInfo;
  if ( bSetupInfo )
    LOBYTE(bSetupInfo) = !bSetupInfo->fields.isScriptBeforePartySelect;
  talkPhase = this->fields.talkPhase;
  this->fields._IsAfterOrganization_k__BackingField = (char)bSetupInfo;
  if ( talkPhase <= 0xB )
  {
    v5 = 1;
    v6 = 1 << talkPhase;
    if ( (v6 & 0x81E) == 0 )
    {
      if ( (v6 & 0x3C0) == 0 )
        return;
      v5 = 6;
    }
    this->fields.talkPhase = v5;
  }
}


bool BattleScriptRootComponent_TalkScriptInfo__get_IsAfterOrganization(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._IsAfterOrganization_k__BackingField;
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

  if ( (byte_4CF215D & 1) == 0 )
  {
    sub_1C7BAE8(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    byte_4CF215D = 1;
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
  if ( !byte_4CE7E58 )
  {
    sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CE7E58 = 1;
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

  if ( (byte_4CF215F & 1) == 0 )
  {
    sub_1C7BAE8(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    byte_4CF215F = 1;
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
  unsigned int v2; // w8
  _BOOL4 v3; // w0

  v2 = this->fields.talkPhase - 2;
  if ( v2 > 9 )
    LOBYTE(v3) = 0;
  else
    return (0x255u >> v2) & 1;
  return v3;
}


bool BattleScriptRootComponent_TalkScriptInfo__isPhaseBeforeBattle(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  int32_t talkPhase; // w8

  talkPhase = this->fields.talkPhase;
  return (unsigned int)(talkPhase - 1) < 4 || talkPhase == 11;
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

  if ( (byte_4CF215E & 1) == 0 )
  {
    sub_1C7BAE8(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    byte_4CF215E = 1;
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


void BattleScriptRootComponent_TalkScriptInfo__set_IsAfterOrganization(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsAfterOrganization_k__BackingField = value;
}


void BattleScriptRootComponent_TalkScriptSaveInfo___ctor(
        BattleScriptRootComponent_TalkScriptSaveInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleScriptRootComponent__StartMovie_d__15___ctor(
        BattleScriptRootComponent__StartMovie_d__15_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleScriptRootComponent__StartMovie_d__15__MoveNext(
        BattleScriptRootComponent__StartMovie_d__15_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattleScriptRootComponent__StartMovie_d__15_o *v8; // x19
  struct BattleScriptRootComponent_o *_4__this; // x28
  Il2CppObject *v10; // x21
  struct BattleScriptRootComponent___c__DisplayClass15_0_o **p__8__1; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  QuestPhaseEntity_o *questPhaseEntity_5__2; // x21
  System_String_o *MovieFolder; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  const MethodInfo *v33; // x2
  struct BattleScriptRootComponent___c__DisplayClass15_0_o *v34; // x22
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct CommonUI_o *commonUI; // x8
  struct MovieFileMerge_o *MovieFileMerge_k__BackingField; // x1
  BattleScriptRootComponent__StartMovie_d__15_o **p_movieFileMerge_5__4; // x22
  struct BattleScriptRootComponent_TalkScriptInfo_o *v50; // x8
  int v51; // w23
  struct BattleScriptRootComponent___c__DisplayClass15_0_o *v52; // x8
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  MovieFileMerge_o *movieFileMerge_5__4; // x20
  System_String_o *folder_5__3; // x21
  System_Collections_IEnumerator_o *v73; // x0
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  int v81; // w8
  System_Action_o *callback; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v83; // x8
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  struct BattleScriptRootComponent___c__DisplayClass15_0_o *v90; // x8
  int32_t v91; // w1
  System_String_o *v92; // x0
  int32_t v93; // w2
  int32_t v94; // w3
  System_String_o *v95; // x4
  int32_t v96; // w5
  int64_t v97; // x6
  System_String_o *v98; // x7
  System_String_o *v99; // x0
  int32_t v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x4
  int32_t v103; // w5
  int64_t v104; // x6
  System_String_o *v105; // x7
  System_String_o *v106; // x0
  int32_t v107; // w2
  int32_t v108; // w3
  System_String_o *v109; // x4
  int32_t v110; // w5
  int64_t v111; // x6
  System_String_o *v112; // x7
  struct BattleScriptRootComponent___c__DisplayClass15_0_o *_8__1; // x20
  bool result; // w0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v115; // x8
  CommonUI_o *v116; // x21
  int32_t qId; // w22
  int32_t pId; // w23
  CommonConfirmDialog_ClickDelegate_o *_9__0; // x24
  int32_t v120; // w2
  int32_t v121; // w3
  System_String_o *v122; // x4
  int32_t v123; // w5
  int64_t v124; // x6
  System_String_o *v125; // x7
  struct BattleScriptRootComponent___c__DisplayClass15_0_o *v126; // x25
  System_Action_o *_9__1; // x20
  int32_t v128; // w2
  int32_t v129; // w3
  System_String_o *v130; // x4
  int32_t v131; // w5
  int64_t v132; // x6
  System_String_o *v133; // x7
  CommonConfirmDialog_ClickDelegate_o *_9__2; // x26
  System_String_o *skipDialogTitle_5__5; // x21
  System_String_o *skipDialogMessage_5__6; // x22
  System_String_o *skipDialogDecideText_5__7; // x23
  System_String_o *skipDialogCancelText_5__8; // x24
  CommonUI_o *v139; // x25
  int32_t v140; // w2
  int32_t v141; // w3
  System_String_o *v142; // x4
  int32_t v143; // w5
  int64_t v144; // x6
  System_String_o *v145; // x7
  struct BattleScriptRootComponent___c__DisplayClass15_0_o *v146; // x8
  int32_t downloadState; // w8
  __int64 v148; // x20
  int32_t v149; // w2
  int32_t v150; // w3
  System_String_o *v151; // x4
  int32_t v152; // w5
  int64_t v153; // x6
  System_String_o *v154; // x7
  struct System_String_o *v155; // x1
  struct System_String_o *v156; // x1
  int32_t v157; // w2
  int32_t v158; // w3
  System_String_o *v159; // x4
  int32_t v160; // w5
  int64_t v161; // x6
  System_String_o *v162; // x7
  struct System_String_o *v163; // x1
  int32_t v164; // w2
  int32_t v165; // w3
  System_String_o *v166; // x4
  int32_t v167; // w5
  int64_t v168; // x6
  System_String_o *v169; // x7
  struct System_String_o *v170; // x1
  int32_t v171; // w2
  int32_t v172; // w3
  System_String_o *v173; // x4
  int32_t v174; // w5
  int64_t v175; // x6
  System_String_o *v176; // x7
  Il2CppObject *v177; // x24
  CommonUI_o *klass; // x21
  System_String_o *v179; // x22
  System_Action_o *v180; // x23
  System_Collections_IEnumerator_o *v181; // x0
  int32_t v182; // w2
  int32_t v183; // w3
  System_String_o *v184; // x4
  int32_t v185; // w5
  int64_t v186; // x6
  System_String_o *v187; // x7
  GrandQuestFolderBoardItem_o *v188; // x19

  v8 = this;
  if ( (byte_4CF2170 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&ConnectMark_DownloadCancelDialogData_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    sub_1C7BAE8(&Method_BattleScriptRootComponent___c__DisplayClass15_0__StartMovie_b__0__);
    sub_1C7BAE8(&Method_BattleScriptRootComponent___c__DisplayClass15_0__StartMovie_b__1__);
    sub_1C7BAE8(&Method_BattleScriptRootComponent___c__DisplayClass15_0__StartMovie_b__2__);
    sub_1C7BAE8(&Method_BattleScriptRootComponent___c__DisplayClass15_0__StartMovie_b__3__);
    sub_1C7BAE8(&BattleScriptRootComponent___c__DisplayClass15_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_5033/*"DOWNLOAD_QUEST_MOVIE_CANCEL_DIALOG_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_3689/*"COMMON_CONFIRM_BACK"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    this = (BattleScriptRootComponent__StartMovie_d__15_o *)sub_1C7BAE8(&StringLiteral_5034/*"DOWNLOAD_QUEST_MOVIE_CANCEL_DIALOG_MESSAGE"*/);
    byte_4CF2170 = 1;
  }
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v10 = (Il2CppObject *)sub_1C7BD34(BattleScriptRootComponent___c__DisplayClass15_0_TypeInfo);
      System_Object___ctor(v10, 0);
      v8->fields.__8__1 = (struct BattleScriptRootComponent___c__DisplayClass15_0_o *)v10;
      p__8__1 = &v8->fields.__8__1;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v8->fields.__8__1, (int32_t)v10, v12, v13, v14, v15, v16, v17);
      v8->fields._questPhaseEntity_5__2 = 0;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v8->fields._questPhaseEntity_5__2, 0, v18, v19, v20, v21, v22, v23);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (BattleScriptRootComponent__StartMovie_d__15_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !_4__this )
        goto LABEL_79;
      talkInfo = _4__this->fields.talkInfo;
      if ( !talkInfo || !this )
        goto LABEL_79;
      if ( !QuestPhaseMaster__TryGetEntity(
              (QuestPhaseMaster_o *)this,
              &v8->fields._questPhaseEntity_5__2,
              talkInfo->fields.qId,
              talkInfo->fields.pId,
              0) )
        goto LABEL_48;
      questPhaseEntity_5__2 = v8->fields._questPhaseEntity_5__2;
      this = (BattleScriptRootComponent__StartMovie_d__15_o *)UserGameMaster__getSelfUserGame(0);
      if ( !this || !questPhaseEntity_5__2 )
        goto LABEL_79;
      MovieFolder = QuestPhaseEntity__GetMovieFolder(
                      questPhaseEntity_5__2,
                      HIDWORD(this->fields._movieFileMerge_5__4),
                      0);
      v8->fields._folder_5__3 = MovieFolder;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v8->fields._folder_5__3,
        (int32_t)MovieFolder,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      if ( System_String__IsNullOrEmpty(v8->fields._folder_5__3, 0) )
        goto LABEL_48;
      this = (BattleScriptRootComponent__StartMovie_d__15_o *)_4__this->fields.talkInfo;
      if ( !this )
        goto LABEL_79;
      if ( LODWORD(this->fields.__4__this) == 1 )
        BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(
          (BattleScriptRootComponent_TalkScriptInfo_o *)this,
          0,
          v33);
      v34 = *p__8__1;
      this = (BattleScriptRootComponent__StartMovie_d__15_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v34 )
        goto LABEL_79;
      v34->fields.commonUI = (struct CommonUI_o *)this;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v34->fields, (int32_t)this, v35, v36, v37, v38, v39, v40);
      if ( !*p__8__1 )
        goto LABEL_79;
      commonUI = (*p__8__1)->fields.commonUI;
      if ( !commonUI )
        goto LABEL_79;
      MovieFileMerge_k__BackingField = commonUI->fields._MovieFileMerge_k__BackingField;
      v8->fields._movieFileMerge_5__4 = MovieFileMerge_k__BackingField;
      p_movieFileMerge_5__4 = (BattleScriptRootComponent__StartMovie_d__15_o **)&v8->fields._movieFileMerge_5__4;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v8->fields._movieFileMerge_5__4,
        (int32_t)MovieFileMerge_k__BackingField,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
      this = (BattleScriptRootComponent__StartMovie_d__15_o *)v8->fields._questPhaseEntity_5__2;
      if ( !this )
        goto LABEL_79;
      this = (BattleScriptRootComponent__StartMovie_d__15_o *)QuestPhaseEntity__GetMoviePlayType(
                                                                (QuestPhaseEntity_o *)this,
                                                                0);
      v50 = _4__this->fields.talkInfo;
      if ( !v50 )
        goto LABEL_79;
      v51 = (int)this;
      if ( v50->fields.talkType == 5 )
        goto LABEL_39;
      if ( (_DWORD)this == 1 )
      {
        if ( v50->fields.talkPhase >= 6 )
          goto LABEL_48;
      }
      else if ( (_DWORD)this == 2 && v50->fields.talkPhase < 5 )
      {
        goto LABEL_48;
      }
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__stopBgm(0);
LABEL_39:
      if ( v51 != 3 )
        goto LABEL_42;
      v83 = _4__this->fields.talkInfo;
      if ( !v83 )
        goto LABEL_79;
      if ( v83->fields.talkPhase != 10 )
        goto LABEL_48;
LABEL_42:
      this = *p_movieFileMerge_5__4;
      if ( !*p_movieFileMerge_5__4 )
        goto LABEL_79;
      this = (BattleScriptRootComponent__StartMovie_d__15_o *)MovieFileMerge__ExistCRCCheckedMovieFile(
                                                                (MovieFileMerge_o *)this,
                                                                v8->fields._folder_5__3,
                                                                0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_30:
        this = (BattleScriptRootComponent__StartMovie_d__15_o *)v8->fields._questPhaseEntity_5__2;
        if ( this )
        {
          folder_5__3 = v8->fields._folder_5__3;
          movieFileMerge_5__4 = v8->fields._movieFileMerge_5__4;
          this = (BattleScriptRootComponent__StartMovie_d__15_o *)QuestPhaseEntity__IsEnableSkipMovie(
                                                                    (QuestPhaseEntity_o *)this,
                                                                    0);
          if ( movieFileMerge_5__4 )
          {
            MovieFileMerge__Initialize(movieFileMerge_5__4, folder_5__3, (unsigned __int8)this & 1, 0);
            this = (BattleScriptRootComponent__StartMovie_d__15_o *)v8->fields._movieFileMerge_5__4;
            if ( this )
            {
              v73 = MovieFileMerge__PlayMP4((MovieFileMerge_o *)this, 0);
              v8->fields.__2__current = (Il2CppObject *)v73;
              p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
              sub_1C7BA8C(p__2__current, (int32_t)v73, v75, v76, v77, v78, v79, v80);
              v81 = 3;
LABEL_77:
              LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = v81;
              return 1;
            }
          }
        }
LABEL_79:
        sub_1C7BD40(this, method);
      }
      v90 = *p__8__1;
      if ( !*p__8__1 )
        goto LABEL_79;
      v90->fields.isCancel = 0;
      v90->fields.isWaitDialog = 1;
      v90->fields.downloadState = 1;
      v91 = StringLiteral_1/*""*/;
      v8->fields._skipDialogTitle_5__5 = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v8->fields._skipDialogTitle_5__5, v91, v84, v85, v86, v87, v88, v89);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v92 = LocalizationManager__Get((System_String_o *)StringLiteral_5034/*"DOWNLOAD_QUEST_MOVIE_CANCEL_DIALOG_MESSAGE"*/, 0);
      v8->fields._skipDialogMessage_5__6 = v92;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v8->fields._skipDialogMessage_5__6,
        (int32_t)v92,
        v93,
        v94,
        v95,
        v96,
        v97,
        v98);
      v99 = LocalizationManager__Get((System_String_o *)StringLiteral_5033/*"DOWNLOAD_QUEST_MOVIE_CANCEL_DIALOG_DECIDE"*/, 0);
      v8->fields._skipDialogDecideText_5__7 = v99;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v8->fields._skipDialogDecideText_5__7,
        (int32_t)v99,
        v100,
        v101,
        v102,
        v103,
        v104,
        v105);
      v106 = LocalizationManager__Get((System_String_o *)StringLiteral_3689/*"COMMON_CONFIRM_BACK"*/, 0);
      v8->fields._skipDialogCancelText_5__8 = v106;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v8->fields._skipDialogCancelText_5__8,
        (int32_t)v106,
        v107,
        v108,
        v109,
        v110,
        v111,
        v112);
      _8__1 = v8->fields.__8__1;
      while ( 1 )
      {
        if ( !_8__1 )
          goto LABEL_79;
        downloadState = _8__1->fields.downloadState;
        if ( downloadState == 3 )
          break;
        _8__1->fields.isWaitDialog = 1;
        if ( downloadState == 2 )
        {
          _9__2 = _8__1->fields.__9__2;
          skipDialogTitle_5__5 = v8->fields._skipDialogTitle_5__5;
          skipDialogMessage_5__6 = v8->fields._skipDialogMessage_5__6;
          skipDialogDecideText_5__7 = v8->fields._skipDialogDecideText_5__7;
          skipDialogCancelText_5__8 = v8->fields._skipDialogCancelText_5__8;
          v139 = _8__1->fields.commonUI;
          if ( !_9__2 )
          {
            _9__2 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C7BD34(CommonConfirmDialog_ClickDelegate_TypeInfo);
            CommonConfirmDialog_ClickDelegate___ctor(
              _9__2,
              (Il2CppObject *)_8__1,
              Method_BattleScriptRootComponent___c__DisplayClass15_0__StartMovie_b__2__,
              0);
            _8__1->fields.__9__2 = _9__2;
            sub_1C7BA8C(
              (GrandQuestFolderBoardItem_o *)&_8__1->fields.__9__2,
              (int32_t)_9__2,
              v140,
              v141,
              v142,
              v143,
              v144,
              v145);
          }
          if ( !v139 )
            goto LABEL_79;
          CommonUI__OpenConfirmDialogOnFade(
            v139,
            skipDialogTitle_5__5,
            skipDialogMessage_5__6,
            skipDialogDecideText_5__7,
            skipDialogCancelText_5__8,
            _9__2,
            0,
            0,
            15.0,
            0,
            0,
            1,
            0);
          v146 = v8->fields.__8__1;
          if ( !v146 )
            goto LABEL_79;
          this = (BattleScriptRootComponent__StartMovie_d__15_o *)v146->fields.commonUI;
          if ( !this )
            goto LABEL_79;
          CommonUI__SetConfirmDialogForceCancelSE((CommonUI_o *)this, 1, 0);
        }
        else if ( downloadState == 1 )
        {
          if ( !_4__this )
            goto LABEL_79;
          v115 = _4__this->fields.talkInfo;
          if ( !v115 )
            goto LABEL_79;
          v116 = _8__1->fields.commonUI;
          qId = v115->fields.qId;
          pId = v115->fields.pId;
          _9__0 = _8__1->fields.__9__0;
          if ( !_9__0 )
          {
            _9__0 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C7BD34(CommonConfirmDialog_ClickDelegate_TypeInfo);
            CommonConfirmDialog_ClickDelegate___ctor(
              _9__0,
              (Il2CppObject *)_8__1,
              Method_BattleScriptRootComponent___c__DisplayClass15_0__StartMovie_b__0__,
              0);
            _8__1->fields.__9__0 = _9__0;
            sub_1C7BA8C(
              (GrandQuestFolderBoardItem_o *)&_8__1->fields.__9__0,
              (int32_t)_9__0,
              v120,
              v121,
              v122,
              v123,
              v124,
              v125);
          }
          v126 = v8->fields.__8__1;
          if ( !v126 )
            goto LABEL_79;
          _9__1 = v126->fields.__9__1;
          if ( !_9__1 )
          {
            _9__1 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
            System_Action___ctor(
              _9__1,
              (Il2CppObject *)v126,
              Method_BattleScriptRootComponent___c__DisplayClass15_0__StartMovie_b__1__,
              0);
            v126->fields.__9__1 = _9__1;
            sub_1C7BA8C(
              (GrandQuestFolderBoardItem_o *)&v126->fields.__9__1,
              (int32_t)_9__1,
              v128,
              v129,
              v130,
              v131,
              v132,
              v133);
          }
          if ( !v116 )
            goto LABEL_79;
          CommonUI__OpenDownloadMovieDialog(v116, qId, pId, _9__0, _9__1, 1, 0);
        }
LABEL_68:
        _8__1 = v8->fields.__8__1;
        if ( !_8__1 )
          goto LABEL_79;
        if ( _8__1->fields.isWaitDialog )
        {
          v8->fields.__2__current = 0;
          v188 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
          sub_1C7BA8C(v188, 0, v2, v3, v4, v5, v6, v7);
          result = 1;
          LODWORD(v188[-1].fields._ClosedMessage_k__BackingField) = 1;
          return result;
        }
      }
      if ( !_8__1->fields.isCancel )
      {
        v148 = sub_1C7BD34(ConnectMark_DownloadCancelDialogData_TypeInfo);
        ConnectMark_DownloadCancelDialogData___ctor((ConnectMark_DownloadCancelDialogData_o *)v148, 0);
        if ( v148 )
        {
          v155 = v8->fields._skipDialogTitle_5__5;
          *(_QWORD *)(v148 + 16) = v155;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v148 + 16), (int32_t)v155, v149, v150, v151, v152, v153, v154);
          v156 = v8->fields._skipDialogMessage_5__6;
          *(_QWORD *)(v148 + 24) = v156;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v148 + 24), (int32_t)v156, v157, v158, v159, v160, v161, v162);
          v163 = v8->fields._skipDialogDecideText_5__7;
          *(_QWORD *)(v148 + 32) = v163;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v148 + 32), (int32_t)v163, v164, v165, v166, v167, v168, v169);
          v170 = v8->fields._skipDialogCancelText_5__8;
          *(_QWORD *)(v148 + 40) = v170;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v148 + 40), (int32_t)v170, v171, v172, v173, v174, v175, v176);
          *(_BYTE *)(v148 + 48) = 1;
          v177 = (Il2CppObject *)v8->fields.__8__1;
          if ( v177 )
          {
            klass = (CommonUI_o *)v177[1].klass;
            v179 = v8->fields._folder_5__3;
            v180 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
            System_Action___ctor(
              v180,
              v177,
              Method_BattleScriptRootComponent___c__DisplayClass15_0__StartMovie_b__3__,
              0);
            if ( klass )
            {
              v181 = CommonUI__DownloadMovieAndWaitUI(
                       klass,
                       v179,
                       0,
                       v180,
                       0,
                       (ConnectMark_DownloadCancelDialogData_o *)v148,
                       0);
              v8->fields.__2__current = (Il2CppObject *)v181;
              p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
              sub_1C7BA8C(p__2__current, (int32_t)v181, v182, v183, v184, v185, v186, v187);
              v81 = 2;
              goto LABEL_77;
            }
          }
        }
        goto LABEL_79;
      }
LABEL_48:
      callback = v8->fields.callback;
LABEL_49:
      ActionExtensions__Call(callback, 0);
      return 0;
    case 1:
      v8->fields.__1__state = -1;
      goto LABEL_68;
    case 2:
      v52 = v8->fields.__8__1;
      v8->fields.__1__state = -1;
      if ( !v52 )
        goto LABEL_79;
      if ( v52->fields.isCancel )
        goto LABEL_48;
      v8->fields._skipDialogTitle_5__5 = 0;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v8->fields._skipDialogTitle_5__5, 0, v2, v3, v4, v5, v6, v7);
      v8->fields._skipDialogMessage_5__6 = 0;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v8->fields._skipDialogMessage_5__6, 0, v53, v54, v55, v56, v57, v58);
      v8->fields._skipDialogDecideText_5__7 = 0;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v8->fields._skipDialogDecideText_5__7,
        0,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
      v8->fields._skipDialogCancelText_5__8 = 0;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v8->fields._skipDialogCancelText_5__8,
        0,
        v65,
        v66,
        v67,
        v68,
        v69,
        v70);
      goto LABEL_30;
    case 3:
      callback = v8->fields.callback;
      v8->fields.__1__state = -1;
      goto LABEL_49;
    default:
      return 0;
  }
}


Il2CppObject *BattleScriptRootComponent__StartMovie_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleScriptRootComponent__StartMovie_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleScriptRootComponent__StartMovie_d__15__System_Collections_IEnumerator_Reset(
        BattleScriptRootComponent__StartMovie_d__15_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_BattleScriptRootComponent__StartMovie_d__15_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
}


Il2CppObject *BattleScriptRootComponent__StartMovie_d__15__System_Collections_IEnumerator_get_Current(
        BattleScriptRootComponent__StartMovie_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleScriptRootComponent__StartMovie_d__15__System_IDisposable_Dispose(
        BattleScriptRootComponent__StartMovie_d__15_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleScriptRootComponent__TransitionTerminalCoroutine_d__48___ctor(
        BattleScriptRootComponent__TransitionTerminalCoroutine_d__48_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleScriptRootComponent__TransitionTerminalCoroutine_d__48__MoveNext(
        BattleScriptRootComponent__TransitionTerminalCoroutine_d__48_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  TerminalPramsManager_c *v5; // x0
  int32_t EventID; // w22
  void *Instance; // x0
  TerminalPramsManager_c *v8; // x0
  Il2CppClass *klass; // x8
  Il2CppClass *v10; // x8
  Il2CppClass *v11; // x8
  int32_t name_high; // w22
  int32_t namespaze; // w23
  int32_t v14; // w24
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x22
  const MethodInfo *v16; // x2
  Il2CppClass *v17; // x9
  _BOOL4 v18; // w22
  Il2CppObject *v19; // x19
  Il2CppObject *v20; // x21
  System_Action_o *v21; // x22
  TerminalSceneComponent_c *v22; // x0
  UnityEngine_Object_o *mInstance; // x19
  __int64 v24; // x8
  UnityEngine_Object_o *v25; // x19
  __int64 v26; // x8
  clsQuestCheck_o *v27; // x19
  TerminalPramsManager_c *v28; // x0
  bool result; // w0
  TerminalPramsManager_c *v30; // x0
  TerminalPramsManager_c *v31; // x0
  BattleScriptRootComponent___c_c *v32; // x0
  System_Action_o *_9__48_0; // x21
  Il2CppObject *v34; // x22
  struct BattleScriptRootComponent___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  Il2CppObject *started; // x0
  Il2CppObject **p__2__current; // x19
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  __int64 v50; // x8
  Il2CppObject *v51; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CF2171 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_AvalonSceneManager_UnloadSceneAsync_TerminalSceneComponent___);
    sub_1C7BAE8(&Method_AvalonSceneManager_UnloadScene_BattleScriptRootComponent___);
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_BattleScriptRootComponent_TransitionTerminalSub__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C7BAE8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    sub_1C7BAE8(&Method_BattleScriptRootComponent___c__TransitionTerminalCoroutine_b__48_0__);
    sub_1C7BAE8(&BattleScriptRootComponent___c_TypeInfo);
    byte_4CF2171 = 1;
  }
  v51 = 0;
  entity = 0;
  _1__state = this->fields.__1__state;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    goto LABEL_58;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CE8D13 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CE8D13 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_4CEBA47 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4CEBA47 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
  if ( !byte_4CE8917 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4CE8917 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  EventID = WarMaster__getEventID(v5->static_fields->_WarId_k__BackingField, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_142;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         EventID,
         (const MethodInfo_342E348 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( !entity )
      goto LABEL_142;
    if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)entity, 0) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4CEBA5B )
      {
        sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
        byte_4CEBA5B = 1;
      }
      v8 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v8 = TerminalPramsManager_TypeInfo;
      }
      v8->static_fields->_isPlayRiverActionCheck_k__BackingField = 1;
    }
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !_4__this )
    goto LABEL_142;
  klass = _4__this[4].klass;
  if ( !klass || !Instance )
    goto LABEL_142;
  Instance = (void *)QuestPhaseMaster__GetMoviePlayType(
                       (QuestPhaseMaster_o *)Instance,
                       HIDWORD(klass->_1.name),
                       (int32_t)klass->_1.namespaze,
                       0);
  if ( (_DWORD)Instance != 3 )
  {
LABEL_58:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CEB5E2 )
    {
      sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
      byte_4CEB5E2 = 1;
    }
    Instance = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = TerminalPramsManager_TypeInfo;
    }
    if ( *(_BYTE *)(*((_QWORD *)Instance + 23) + 106LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_142;
      AvalonSceneManager__UnloadScene_object_(
        (AvalonSceneManager_o *)Instance,
        (const MethodInfo_3157FF0 *)Method_AvalonSceneManager_UnloadScene_BattleScriptRootComponent___);
      v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v20 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v21 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v21, _4__this, Method_BattleScriptRootComponent_TransitionTerminalSub__, 0);
      if ( !v20 )
        goto LABEL_142;
      Instance = AvalonSceneManager__UnloadSceneAsync_object_(
                   (AvalonSceneManager_o *)v20,
                   v21,
                   (const MethodInfo_315822C *)Method_AvalonSceneManager_UnloadSceneAsync_TerminalSceneComponent___);
      if ( !v19 )
        goto LABEL_142;
      UnityEngine_MonoBehaviour__StartCoroutine_71855340(
        (UnityEngine_MonoBehaviour_o *)v19,
        (System_Collections_IEnumerator_o *)Instance,
        0);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4CE840E )
      {
        sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
        byte_4CE840E = 1;
      }
      v22 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v22 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = (UnityEngine_Object_o *)v22->static_fields->mInstance;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
      {
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4CE840E )
        {
          sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
          byte_4CE840E = 1;
        }
        Instance = TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          Instance = TerminalSceneComponent_TypeInfo;
        }
        v24 = **((_QWORD **)Instance + 23);
        if ( !v24 )
          goto LABEL_142;
        v25 = *(UnityEngine_Object_o **)(v24 + 264);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v25, 0, 0) )
        {
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4CE840E )
          {
            sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
            byte_4CE840E = 1;
          }
          Instance = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            Instance = TerminalSceneComponent_TypeInfo;
          }
          v26 = **((_QWORD **)Instance + 23);
          if ( !v26 )
            goto LABEL_142;
          Instance = *(void **)(v26 + 264);
          if ( !Instance )
            goto LABEL_142;
          ScrTerminalMap__SetDiceButton((ScrTerminalMap_o *)Instance, 0);
          Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          v27 = (clsQuestCheck_o *)Instance;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          if ( !v27 )
            goto LABEL_142;
          if ( clsQuestCheck__CheckQuestPlayableNow(
                 v27,
                 BalanceConfig_TypeInfo->static_fields->EventBoardGameNextBoardQuestId,
                 0,
                 0) )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4CEB80D )
            {
              sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
              byte_4CEB80D = 1;
            }
            v28 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v28 = TerminalPramsManager_TypeInfo;
            }
            v28->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField = 1;
            Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
            if ( !Instance )
              goto LABEL_142;
            MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
          }
          else
          {
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4CE840E )
            {
              sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
              byte_4CE840E = 1;
            }
            Instance = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              Instance = TerminalSceneComponent_TypeInfo;
            }
            v50 = **((_QWORD **)Instance + 23);
            if ( !v50 )
              goto LABEL_142;
            Instance = *(void **)(v50 + 264);
            if ( !Instance )
              goto LABEL_142;
            ScrTerminalMap__SetEventBoardQuestArrivalPanel((ScrTerminalMap_o *)Instance, 0);
          }
        }
      }
    }
    else
    {
      if ( !_4__this )
        goto LABEL_142;
      BattleScriptRootComponent__TransitionTerminalSub((BattleScriptRootComponent_o *)_4__this, method);
    }
    return 0;
  }
  v10 = _4__this[4].klass;
  if ( !v10 )
    goto LABEL_142;
  LODWORD(v10->_1.byval_arg.data) = 10;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  Instance = (void *)CommonUI__maskFadeIsDisp((CommonUI_o *)Instance, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 0, 0);
  }
  v11 = _4__this[4].klass;
  if ( !v11 )
    goto LABEL_142;
  name_high = HIDWORD(v11->_1.name);
  namespaze = (int32_t)v11->_1.namespaze;
  Instance = UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_142;
  v14 = *((_DWORD *)Instance + 19);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__SaveMovieResumeInfo(name_high, namespaze, v14, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_WarMaster___);
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v15 )
    goto LABEL_142;
  Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                       v15,
                       &v51,
                       BalanceConfig_TypeInfo->static_fields->Fgo20251220WarId,
                       (const MethodInfo_342E348 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v18 = 0;
    goto LABEL_112;
  }
  if ( !v51 || (v17 = _4__this[4].klass) == 0 )
LABEL_142:
    sub_1C7BD40(Instance, method);
  v18 = HIDWORD(v51[6].klass) == HIDWORD(v17->_1.name);
LABEL_112:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CEB5E7 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEB5E7 = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
  }
  if ( v18 != v30->static_fields->_IsTransitionToTerminalAfterMovie_k__BackingField )
  {
    if ( !v30->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v30);
    if ( !byte_4CEB5F7 )
    {
      sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
      byte_4CEB5F7 = 1;
    }
    v31 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v31 = TerminalPramsManager_TypeInfo;
    }
    v31->static_fields->_IsTransitionToTerminalAfterMovie_k__BackingField = v18;
    TerminalPramsManager__SaveIsTransitionToTerminalAfterMovie(0);
  }
  v32 = BattleScriptRootComponent___c_TypeInfo;
  if ( !BattleScriptRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleScriptRootComponent___c_TypeInfo);
    v32 = BattleScriptRootComponent___c_TypeInfo;
  }
  _9__48_0 = v32->static_fields->__9__48_0;
  if ( !_9__48_0 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = BattleScriptRootComponent___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v32->static_fields->__9;
    _9__48_0 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(_9__48_0, v34, Method_BattleScriptRootComponent___c__TransitionTerminalCoroutine_b__48_0__, 0);
    static_fields = BattleScriptRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__48_0 = _9__48_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__48_0,
      (int32_t)_9__48_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  started = (Il2CppObject *)BattleScriptRootComponent__StartMovie(
                              (BattleScriptRootComponent_o *)_4__this,
                              _9__48_0,
                              v16);
  this->fields.__2__current = started;
  p__2__current = &this->fields.__2__current;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)started, v44, v45, v46, v47, v48, v49);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *BattleScriptRootComponent__TransitionTerminalCoroutine_d__48__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleScriptRootComponent__TransitionTerminalCoroutine_d__48_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleScriptRootComponent__TransitionTerminalCoroutine_d__48__System_Collections_IEnumerator_Reset(
        BattleScriptRootComponent__TransitionTerminalCoroutine_d__48_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_BattleScriptRootComponent__TransitionTerminalCoroutine_d__48_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
}


Il2CppObject *BattleScriptRootComponent__TransitionTerminalCoroutine_d__48__System_Collections_IEnumerator_get_Current(
        BattleScriptRootComponent__TransitionTerminalCoroutine_d__48_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleScriptRootComponent__TransitionTerminalCoroutine_d__48__System_IDisposable_Dispose(
        BattleScriptRootComponent__TransitionTerminalCoroutine_d__48_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleScriptRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CF2167 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleScriptRootComponent___c_TypeInfo);
    byte_4CF2167 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(BattleScriptRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleScriptRootComponent___c_TypeInfo->static_fields->__9 = (struct BattleScriptRootComponent___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)BattleScriptRootComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleScriptRootComponent___c___ctor(BattleScriptRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *BattleScriptRootComponent___c___EndRequestBattleScenario_b__39_1(
        BattleScriptRootComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0);
}


System_String_o *BattleScriptRootComponent___c___EndRequestBattleScenario_b__39_2(
        BattleScriptRootComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0);
}


void BattleScriptRootComponent___c___TransitionTerminalCoroutine_b__48_0(
        BattleScriptRootComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CF2168 & 1) == 0 )
  {
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CF2168 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  if ( !CommonUI__maskFadeIsDisp((CommonUI_o *)Instance, 0) )
    goto LABEL_7;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_10:
    sub_1C7BD40(Instance, v3);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 1, 0);
LABEL_7:
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteMovieResumeInfo(0);
}


void BattleScriptRootComponent___c___TransitionWarBoard_b__50_0(
        BattleScriptRootComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CF2169 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CF2169 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v3);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


void BattleScriptRootComponent___c__DisplayClass15_0___ctor(
        BattleScriptRootComponent___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleScriptRootComponent___c__DisplayClass15_0___StartMovie_b__0(
        BattleScriptRootComponent___c__DisplayClass15_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  int32_t v3; // w8

  if ( isDecide )
  {
    v3 = 3;
    this->fields.isCancel = 0;
  }
  else
  {
    v3 = 2;
  }
  this->fields.downloadState = v3;
}


void BattleScriptRootComponent___c__DisplayClass15_0___StartMovie_b__1(
        BattleScriptRootComponent___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  this->fields.isWaitDialog = 0;
}


// local variable allocation has failed, the output may be wrong!
void BattleScriptRootComponent___c__DisplayClass15_0___StartMovie_b__2(
        BattleScriptRootComponent___c__DisplayClass15_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  BattleScriptRootComponent___c__DisplayClass15_0_o *v4; // x19
  int v5; // w8
  System_Action_o *_9__4; // x22
  CommonUI_o *commonUI; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  v4 = this;
  if ( (byte_4CF216A & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    this = (BattleScriptRootComponent___c__DisplayClass15_0_o *)sub_1C7BAE8(&Method_BattleScriptRootComponent___c__DisplayClass15_0__StartMovie_b__4__);
    byte_4CF216A = 1;
  }
  v5 = 1;
  if ( isDecide )
  {
    v4->fields.isCancel = 1;
    v5 = 3;
  }
  _9__4 = v4->fields.__9__4;
  commonUI = v4->fields.commonUI;
  v4->fields.downloadState = v5;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)v4,
      Method_BattleScriptRootComponent___c__DisplayClass15_0__StartMovie_b__4__,
      0);
    v4->fields.__9__4 = _9__4;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v4->fields.__9__4, (int32_t)_9__4, v8, v9, v10, v11, v12, v13);
  }
  if ( !commonUI )
    sub_1C7BD40(this, isDecide);
  CommonUI__CloseConfirmDialog_31483188(commonUI, _9__4, 0);
}


void BattleScriptRootComponent___c__DisplayClass15_0___StartMovie_b__3(
        BattleScriptRootComponent___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  this->fields.isCancel = 1;
}


void BattleScriptRootComponent___c__DisplayClass15_0___StartMovie_b__4(
        BattleScriptRootComponent___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  this->fields.isWaitDialog = 0;
}


void BattleScriptRootComponent___c__DisplayClass22_0___ctor(
        BattleScriptRootComponent___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleScriptRootComponent___c__DisplayClass22_0___StartScriptFinishBattleEnd2_b__0(
        BattleScriptRootComponent___c__DisplayClass22_0_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  BattleScriptRootComponent_o *_4__this; // x0

  if ( (byte_4CF216B & 1) == 0 )
  {
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    byte_4CF216B = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C7BD40(0, v4);
  BattleScriptRootComponent__ProceedToNextTalkPhase(_4__this, this->fields.isExit, v5);
}


void BattleScriptRootComponent___c__DisplayClass25_0___ctor(
        BattleScriptRootComponent___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleScriptRootComponent___c__DisplayClass25_0___ScriptFinishBattleAfterDemoEnd_b__0(
        BattleScriptRootComponent___c__DisplayClass25_0_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  BattleScriptRootComponent_o *_4__this; // x0

  if ( (byte_4CF216C & 1) == 0 )
  {
    sub_1C7BAE8(&ScriptManager_TypeInfo);
    byte_4CF216C = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C7BD40(0, v4);
  BattleScriptRootComponent__ProceedToNextTalkPhase(_4__this, this->fields.isExit, v5);
}


void BattleScriptRootComponent___c__DisplayClass46_0___ctor(
        BattleScriptRootComponent___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleScriptRootComponent___c__DisplayClass46_0___StartMashuPowerUpAction_b__0(
        BattleScriptRootComponent___c__DisplayClass46_0_o *this,
        bool is_decide,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *_9__1; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  Il2CppObject *Request_object; // x0
  __int64 v12; // x1

  if ( (byte_4CF216D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_NetworkManager_getRequest_TutorialSetRequest___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_BattleScriptRootComponent___c__DisplayClass46_0__StartMashuPowerUpAction_b__1__);
    byte_4CF216D = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent___c__DisplayClass46_0__StartMashuPowerUpAction_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v5, v6, v7, v8, v9, v10);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__1,
                     (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
  if ( !Request_object )
    sub_1C7BD40(0, v12);
  TutorialSetRequest__beginRequest((TutorialSetRequest_o *)Request_object, this->fields.tutorial_flag_id, 0);
}


void BattleScriptRootComponent___c__DisplayClass46_0___StartMashuPowerUpAction_b__1(
        BattleScriptRootComponent___c__DisplayClass46_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.end_act, 0);
}


void BattleScriptRootComponent___c__DisplayClass51_0___ctor(
        BattleScriptRootComponent___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleScriptRootComponent___c__DisplayClass51_0___PlayStaffRoll_b__0(
        BattleScriptRootComponent___c__DisplayClass51_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x19
  AssetData_o *transform; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  Il2CppObject *Object_object__51713432; // x21
  Il2CppObject *v21; // x0
  AssetData_o **v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct BattleScriptRootComponent_o *_4__this; // x8
  UnityEngine_Transform_o *v30; // x20
  UnityEngine_Transform_o *v31; // x20
  Il2CppObject *Component_object; // x0
  AssetData_o *v33; // x20
  EndrolRootComponent_o *v34; // x21
  System_Action_o *v35; // x22

  if ( (byte_4CF216E & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_AssetData_GetObject_GameObject____78791560);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_EndrolRootComponent___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_BattleScriptRootComponent___c__DisplayClass51_1__PlayStaffRoll_b__1__);
    sub_1C7BAE8(&BattleScriptRootComponent___c__DisplayClass51_1_TypeInfo);
    sub_1C7BAE8(&StringLiteral_6048/*"EndrolPanel"*/);
    byte_4CF216E = 1;
  }
  v5 = sub_1C7BD34(BattleScriptRootComponent___c__DisplayClass51_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = data;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)data, v14, v15, v16, v17, v18, v19);
  transform = *(AssetData_o **)(v5 + 24);
  if ( !transform )
    goto LABEL_21;
  Object_object__51713432 = AssetData__GetObject_object__51713432(
                              transform,
                              (System_String_o *)StringLiteral_6048/*"EndrolPanel"*/,
                              (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v21 = UnityEngine_Object__Instantiate_object_(
          Object_object__51713432,
          (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  *(_QWORD *)(v5 + 16) = v21;
  v22 = (AssetData_o **)(v5 + 16);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)v21, v23, v24, v25, v26, v27, v28);
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
  transform = *v22;
  if ( !*v22 )
    goto LABEL_21;
  transform = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  v30 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4CE7E59 )
  {
    transform = (AssetData_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
  }
  if ( !v30 )
    goto LABEL_21;
  UnityEngine_Transform__set_localPosition(v30, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  transform = *v22;
  if ( !*v22 )
    goto LABEL_21;
  transform = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  v31 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4CE7E5E )
  {
    transform = (AssetData_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E5E = 1;
  }
  if ( !v31
    || (UnityEngine_Transform__set_localScale(v31, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (transform = *v22) == 0)
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_EndrolRootComponent___),
        v33 = *(AssetData_o **)(v5 + 24),
        v34 = (EndrolRootComponent_o *)Component_object,
        v35 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo),
        System_Action___ctor(
          v35,
          (Il2CppObject *)v5,
          Method_BattleScriptRootComponent___c__DisplayClass51_1__PlayStaffRoll_b__1__,
          0),
        !v34) )
  {
LABEL_21:
    sub_1C7BD40(transform, v7);
  }
  EndrolRootComponent__Open(v34, v33, v35, 0);
}


void BattleScriptRootComponent___c__DisplayClass51_1___ctor(
        BattleScriptRootComponent___c__DisplayClass51_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleScriptRootComponent___c__DisplayClass51_1___PlayStaffRoll_b__1(
        BattleScriptRootComponent___c__DisplayClass51_1_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *endObj; // x20
  AssetData_o *data; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  struct BattleScriptRootComponent___c__DisplayClass51_0_o *CS___8__locals1; // x8

  if ( (byte_4CF216F & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF216F = 1;
  }
  endObj = (UnityEngine_Object_o *)this->fields.endObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71870148(endObj, 0);
  data = this->fields.data;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_41096272(data, 0);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    sub_1C7BD40(v5, v6);
  ActionExtensions__Call(CS___8__locals1->fields.callback, 0);
}