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
  __int64 v6; // x1
  int32_t JumpLine; // w19

  v2 = this;
  if ( (byte_59745A8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleScriptRootComponent__ChapterStart_b__41_0__);
    this = (BattleScriptRootComponent_o *)sub_2213A60(&ScriptManager_TypeInfo);
    byte_59745A8 = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v5, (Il2CppObject *)v2, Method_BattleScriptRootComponent__ChapterStart_b__41_0__, 0),
        (this = (BattleScriptRootComponent_o *)v2->fields.talkInfo) == 0) )
  {
    sub_2213CDC(this, method);
  }
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)this,
               method);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v6);
  ScriptManager__PlayChapterStartNotCollection(wId, v5, JumpLine, 0);
}


void BattleScriptRootComponent__ChapterStartEffect(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  int32_t name; // w20
  ScriptManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x1

  v2 = (Il2CppObject *)this;
  if ( (byte_59745AA & 1) == 0 )
  {
    sub_2213A60(&Method_BattleScriptRootComponent__ChapterStartEffect_b__43_0__);
    sub_2213A60(&ScriptManager_CallbackFunc_TypeInfo);
    this = (BattleScriptRootComponent_o *)sub_2213A60(&ScriptManager_TypeInfo);
    byte_59745AA = 1;
  }
  klass = v2[4].klass;
  if ( !klass )
    sub_2213CDC(this, method);
  name = (int32_t)klass->_1.name;
  v5 = (ScriptManager_CallbackFunc_o *)sub_2213CCC(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v5, v2, Method_BattleScriptRootComponent__ChapterStartEffect_b__43_0__, 0);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v6);
  ScriptManager__PlayChapterStartEffect(name, v5, 0, 0);
}


void BattleScriptRootComponent__ChapterStartEffectQuest(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  int32_t name; // w20
  ScriptManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x1

  v2 = (Il2CppObject *)this;
  if ( (byte_59745AB & 1) == 0 )
  {
    sub_2213A60(&Method_BattleScriptRootComponent__ChapterStartEffectQuest_b__44_0__);
    sub_2213A60(&ScriptManager_CallbackFunc_TypeInfo);
    this = (BattleScriptRootComponent_o *)sub_2213A60(&ScriptManager_TypeInfo);
    byte_59745AB = 1;
  }
  klass = v2[4].klass;
  if ( !klass )
    sub_2213CDC(this, method);
  name = (int32_t)klass->_1.name;
  v5 = (ScriptManager_CallbackFunc_o *)sub_2213CCC(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v5, v2, Method_BattleScriptRootComponent__ChapterStartEffectQuest_b__44_0__, 0);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v6);
  ScriptManager__PlayChapterStartEffect(name, v5, 0, 0);
}


void BattleScriptRootComponent__ChapterStartQuest(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  BattleScriptRootComponent_o *v2; // x19
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t wId; // w20
  int32_t qId; // w21
  System_Action_o *v6; // x22
  __int64 v7; // x1
  int32_t JumpLine; // w19

  v2 = this;
  if ( (byte_59745A9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleScriptRootComponent__ChapterStartQuest_b__42_0__);
    this = (BattleScriptRootComponent_o *)sub_2213A60(&ScriptManager_TypeInfo);
    byte_59745A9 = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo
    || (wId = talkInfo->fields.wId,
        qId = talkInfo->fields.qId,
        v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)v2, Method_BattleScriptRootComponent__ChapterStartQuest_b__42_0__, 0),
        (this = (BattleScriptRootComponent_o *)v2->fields.talkInfo) == 0) )
  {
    sub_2213CDC(this, method);
  }
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)this,
               method);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v7);
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
  if ( (byte_5974592 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    this = (BattleScriptRootComponent_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974592 = 1;
  }
  talkInfo = v2->fields.talkInfo;
  entity = 0;
  if ( !talkInfo )
    goto LABEL_28;
  bSetupInfo = talkInfo->fields.bSetupInfo;
  if ( !bSetupInfo || (qId = bSetupInfo->fields.originQuestId, qId <= 0) )
    qId = talkInfo->fields.qId;
  this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_28;
  this = (BattleScriptRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  v6 = v2->fields.talkInfo;
  if ( !v6 || !this )
    goto LABEL_28;
  if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &entity, qId, v6->fields.pId, 0) )
    return;
  this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_28;
  this = (BattleScriptRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
    sub_2213CE4(this);
  v12 = v2->fields.talkInfo;
  if ( !v12 )
LABEL_28:
    sub_2213CDC(this, method);
  v12->fields.qId = *((_DWORD *)&this->fields.myFSM + v10);
}


void BattleScriptRootComponent__EndBeforeBattleScript(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x3
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t talkType; // w9
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *v10; // x8
  BattleSetupInfo_o *bSetupInfo; // x20
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  TerminalPramsManager_c *v19; // x0
  Il2CppObject *WarBoardData_k__BackingField; // x20
  MissionNaviTransitionBoardItem_o *p_WarBoardData_k__BackingField; // x0
  int32_t v22; // w1
  Il2CppObject *v23; // x3
  TerminalPramsManager_c *v24; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  const MethodInfo_47A29F8 *v26; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v27; // x8

  if ( (byte_597459F & 1) == 0 )
  {
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_597459F = 1;
  }
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
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
          if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v4);
          bSetupInfo->fields.selectedBranchIdx = ScriptManager__GetSelectBranchIndex(0);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          v27 = this->fields.talkInfo;
          if ( !v27 || !Instance )
            goto LABEL_49;
          v23 = (Il2CppObject *)v27->fields.bSetupInfo;
          v22 = 35;
        }
        else
        {
          if ( !bSetupInfo->fields.isScriptBeforeWarBoard )
          {
            BattleScriptRootComponent__GoForBattle(bSetupInfo, v4);
            return;
          }
          if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v4);
          bSetupInfo->fields.selectedBranchIdx = ScriptManager__GetSelectBranchIndex(0);
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
          if ( !byte_59745D6 )
          {
            sub_2213A60(&TerminalPramsManager_TypeInfo);
            byte_59745D6 = 1;
          }
          v19 = TerminalPramsManager_TypeInfo;
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
            v19 = TerminalPramsManager_TypeInfo;
          }
          WarBoardData_k__BackingField = (Il2CppObject *)v19->static_fields->_WarBoardData_k__BackingField;
          if ( !byte_596D628 )
          {
            sub_2213A60(&TerminalPramsManager_TypeInfo);
            v19 = TerminalPramsManager_TypeInfo;
            byte_596D628 = 1;
          }
          if ( !*(&v19->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v19, v12);
            v19 = TerminalPramsManager_TypeInfo;
          }
          p_WarBoardData_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v19->static_fields->_WarBoardData_k__BackingField;
          p_WarBoardData_k__BackingField->klass = 0;
          sub_2213A04(p_WarBoardData_k__BackingField, 0, v13, v14, v15, v16, v17, v18);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !Instance )
            goto LABEL_49;
          v22 = 80;
          v23 = WarBoardData_k__BackingField;
        }
      }
      else
      {
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
        if ( !byte_596ABDE )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          byte_596ABDE = 1;
        }
        v24 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
          v24 = TerminalPramsManager_TypeInfo;
        }
        static_fields = v24->static_fields;
        v26 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
        static_fields->_IsAutoResume_k__BackingField = 1;
        Instance = SingletonMonoBehaviour_object___get_Instance(v26);
        if ( !Instance )
          goto LABEL_49;
        v22 = 34;
        v23 = 0;
      }
      AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, v22, 1, v23, 0, 0);
      return;
    case 5:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( Instance )
      {
        Instance = (Il2CppObject *)ScriptManager__IsBadEndRoute((ScriptManager_o *)Instance, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          BattleScriptRootComponent__RequestBattleSecnarioForNoneBattleQuest(this, 0, v8);
          return;
        }
        talkInfo = this->fields.talkInfo;
        if ( talkInfo )
          goto LABEL_13;
      }
LABEL_49:
      sub_2213CDC(Instance, v4);
    case 6:
LABEL_13:
      BattleScriptRootComponent__SavePlayedNotMeetsScript(
        (BattleScriptRootComponent_o *)Instance,
        talkInfo->fields.qId,
        talkInfo->fields.pId,
        v5);
      v10 = this->fields.talkInfo;
      if ( v10 )
      {
        v10->fields.talkPhase = 10;
        BattleScriptRootComponent__ProcessBattleScripts(this, 10, v9);
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
  __int64 v12; // x1
  TerminalPramsManager_c *v13; // x0
  DataManager_c *v14; // x8
  int v15; // w10
  struct BattleScriptRootComponent_TalkScriptInfo_o *v16; // x8
  __int64 v17; // x1
  TerminalPramsManager_c *v18; // x0
  __int64 v19; // x1
  bool IsStackScene; // w8
  int v21; // w9
  TerminalPramsManager_c *v22; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  const MethodInfo_47A29F8 *v24; // x0
  TerminalPramsManager_c *v25; // x0
  int v26; // w9
  _BOOL4 IsNoResumeFromChapterStart_k__BackingField; // w19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59745AC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_QuestMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_59745AC = 1;
  }
  entity = 0;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
  ScriptManager__DeleteTalkResumeInfo(0);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_62;
  qId = talkInfo->fields.qId;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
  if ( !byte_596AEF7 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596AEF7 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  v7 = this->fields.talkInfo;
  HIDWORD(Master_object[2].fields.list->fields.items) = qId;
  if ( !v7 )
    goto LABEL_62;
  pId = v7->fields.pId;
  if ( !HIDWORD(Master_object[3].monitor) )
    j_il2cpp_runtime_class_init_0(Master_object, v4);
  v9 = pId - 1;
  if ( !byte_596AEF9 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596AEF9 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  v11 = v9 & ~(v9 >> 31);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_PhaseCnt_k__BackingField = v11;
  TerminalPramsManager__SaveQuestInfo_SaveData(0);
  if ( !byte_59745D7 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_59745D7 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v14 = DataManager_TypeInfo;
  v15 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v13->static_fields->_IsNoResumeFromChapterStart_k__BackingField = 0;
  if ( !v15 )
    j_il2cpp_runtime_class_init_0(v14, v12);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestMaster___);
  v16 = this->fields.talkInfo;
  if ( !v16 || !Master_object )
    goto LABEL_62;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         Master_object,
         &entity,
         v16->fields.qId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_62;
    if ( QuestEntity__HasFlag((QuestEntity_o *)entity, 2, 0) )
    {
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v17);
      if ( !byte_59745D7 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_59745D7 = 1;
      }
      v18 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v17);
        v18 = TerminalPramsManager_TypeInfo;
      }
      v18->static_fields->_IsNoResumeFromChapterStart_k__BackingField = 1;
    }
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Master_object )
LABEL_62:
    sub_2213CDC(Master_object, v4);
  IsStackScene = AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Master_object, 0);
  v21 = *(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1);
  if ( IsStackScene )
  {
    if ( !v21 )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
    if ( !byte_59745D7 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_59745D7 = 1;
    }
    v22 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
      v22 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v22->static_fields;
    v24 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
    static_fields->_IsNoResumeFromChapterStart_k__BackingField = 0;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance(v24);
    if ( Master_object )
    {
      AvalonSceneManager__popSceneRefresh((AvalonSceneManager_o *)Master_object, 2, 0, 0);
      return;
    }
    goto LABEL_62;
  }
  if ( !v21 )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
  if ( !byte_596ABDE )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596ABDE = 1;
  }
  v25 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
    v25 = TerminalPramsManager_TypeInfo;
  }
  v26 = (unsigned __int8)byte_5972CF1;
  v25->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !v26 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v25 = TerminalPramsManager_TypeInfo;
    byte_5972CF1 = 1;
  }
  if ( !*(&v25->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v25, v19);
    v25 = TerminalPramsManager_TypeInfo;
  }
  IsNoResumeFromChapterStart_k__BackingField = v25->static_fields->_IsNoResumeFromChapterStart_k__BackingField;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( IsNoResumeFromChapterStart_k__BackingField )
  {
    if ( !Master_object )
      goto LABEL_62;
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Master_object, 34, 2, 0, 0);
  }
  else
  {
    if ( !Master_object )
      goto LABEL_62;
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Master_object, 34, 2, 0, 0, 0);
  }
}


void BattleScriptRootComponent__EndRequestBattleScenario(
        BattleScriptRootComponent_o *this,
        System_String_o *jsonstr,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  BattleScriptRootComponent_TalkScriptInfo_o *klass; // x21
  ScriptManager_c *v6; // x0
  int v7; // w8
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  __int64 v10; // x1
  System_Object_array *v11; // x21
  Il2CppObject *v12; // x0
  BattleResultComponent_resultData_o *myFSM; // x20
  System_Collections_Generic_IEnumerable_TSource__o *freeShopIds; // x0
  BattleScriptRootComponent___c_c *v15; // x8
  BattleScriptRootComponent_o *v16; // x21
  struct BattleScriptRootComponent___c_StaticFields *static_fields; // x9
  System_Converter_TInput__TOutput__o *_9__39_1; // x22
  Il2CppObject *v19; // x23
  struct BattleScriptRootComponent___c_StaticFields *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_array *v27; // x0
  System_String_o *v28; // x0
  System_Collections_Generic_IEnumerable_TSource__o *returnRarePriShopIds; // x0
  BattleScriptRootComponent___c_c *v30; // x8
  BattleScriptRootComponent_o *v31; // x20
  struct BattleScriptRootComponent___c_StaticFields *v32; // x9
  System_Converter_TInput__TOutput__o *_9__39_2; // x21
  Il2CppObject *v34; // x22
  struct BattleScriptRootComponent___c_StaticFields *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_String_array *v42; // x0
  System_String_o *v43; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v45; // x2
  __int64 v46; // x1
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v48; // x0
  int32_t WarId_k__BackingField; // w21
  System_Action_o *v50; // x22
  System_Collections_IEnumerator_o *v51; // x1
  Il2CppClass *v52; // x8

  v4 = (Il2CppObject *)this;
  if ( (byte_59745A6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleScriptRootComponent__EndRequestBattleScenario_b__39_0__);
    sub_2213A60(&System_Converter_int__string__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_int___);
    sub_2213A60(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ConvertAll_string___);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__39_1__);
    sub_2213A60(&Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__39_2__);
    sub_2213A60(&BattleScriptRootComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_20593/*"freeShopIds"*/);
    sub_2213A60(&StringLiteral_24299/*"returnRarePriShopIds"*/);
    sub_2213A60(&StringLiteral_869/*","*/);
    sub_2213A60(&StringLiteral_16427/*"["*/);
    this = (BattleScriptRootComponent_o *)sub_2213A60(&StringLiteral_16691/*"]"*/);
    byte_59745A6 = 1;
  }
  klass = (BattleScriptRootComponent_TalkScriptInfo_o *)v4[4].klass;
  if ( !klass )
    goto LABEL_53;
  v6 = ScriptManager_TypeInfo;
  v7 = *(&ScriptManager_TypeInfo->_2.cctor_finished + 1);
  klass->fields.talkPhase = 6;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(v6, jsonstr);
  ScriptManager__SaveTalkResumeInfo(klass, 0);
  ScriptManager__ClearSelectRouteArray(0);
  v9 = (Il2CppObject *)System_String__Concat_75694928(
                         (System_String_o *)StringLiteral_16427/*"["*/,
                         jsonstr,
                         (System_String_o *)StringLiteral_16691/*"]"*/,
                         0);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v8);
  v11 = JsonManager__DeserializeArray_object_(
          v9,
          (const MethodInfo_38D3A34 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v11, 1, 0);
  v12 = (Il2CppObject *)System_String__Concat_75694928(
                          (System_String_o *)StringLiteral_16427/*"["*/,
                          jsonstr,
                          (System_String_o *)StringLiteral_16691/*"]"*/,
                          0);
  this = (BattleScriptRootComponent_o *)JsonManager__DeserializeArray_object_(
                                          v12,
                                          (const MethodInfo_38D3A34 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  if ( !this )
    goto LABEL_53;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    sub_2213CE4(this);
  myFSM = (BattleResultComponent_resultData_o *)this->fields.myFSM;
  TerminalPramsManager__SetBattleResultCampaignBonus(myFSM, 0);
  if ( !myFSM )
    goto LABEL_53;
  freeShopIds = (System_Collections_Generic_IEnumerable_TSource__o *)myFSM->fields.freeShopIds;
  if ( freeShopIds )
  {
    this = (BattleScriptRootComponent_o *)System_Linq_Enumerable__ToList_int_(
                                            freeShopIds,
                                            (const MethodInfo_38A0B70 *)Method_System_Linq_Enumerable_ToList_int___);
    v15 = BattleScriptRootComponent___c_TypeInfo;
    v16 = this;
    if ( !*(&BattleScriptRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleScriptRootComponent___c_TypeInfo, jsonstr);
      v15 = BattleScriptRootComponent___c_TypeInfo;
    }
    static_fields = v15->static_fields;
    _9__39_1 = (System_Converter_TInput__TOutput__o *)static_fields->__9__39_1;
    if ( !_9__39_1 )
    {
      if ( !*(&v15->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v15, jsonstr);
        static_fields = BattleScriptRootComponent___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)static_fields->__9;
      _9__39_1 = (System_Converter_TInput__TOutput__o *)sub_2213CCC(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(
        _9__39_1,
        v19,
        Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__39_1__,
        0);
      v20 = BattleScriptRootComponent___c_TypeInfo->static_fields;
      v20->__9__39_1 = (struct System_Converter_int__string__o *)_9__39_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v20->__9__39_1, (int32_t)_9__39_1, v21, v22, v23, v24, v25, v26);
    }
    if ( !v16 )
      goto LABEL_53;
    this = (BattleScriptRootComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                            (System_Collections_Generic_List_int__o *)v16,
                                            (System_Converter_T__TOutput__o *)_9__39_1,
                                            (const MethodInfo_36D759C *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_53;
    v27 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
    v28 = System_String__Join((System_String_o *)StringLiteral_869/*","*/, v27, 0);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_20593/*"freeShopIds"*/, v28, 0);
  }
  returnRarePriShopIds = (System_Collections_Generic_IEnumerable_TSource__o *)myFSM->fields.returnRarePriShopIds;
  if ( returnRarePriShopIds )
  {
    this = (BattleScriptRootComponent_o *)System_Linq_Enumerable__ToList_int_(
                                            returnRarePriShopIds,
                                            (const MethodInfo_38A0B70 *)Method_System_Linq_Enumerable_ToList_int___);
    v30 = BattleScriptRootComponent___c_TypeInfo;
    v31 = this;
    if ( !*(&BattleScriptRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleScriptRootComponent___c_TypeInfo, jsonstr);
      v30 = BattleScriptRootComponent___c_TypeInfo;
    }
    v32 = v30->static_fields;
    _9__39_2 = (System_Converter_TInput__TOutput__o *)v32->__9__39_2;
    if ( !_9__39_2 )
    {
      if ( !*(&v30->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v30, jsonstr);
        v32 = BattleScriptRootComponent___c_TypeInfo->static_fields;
      }
      v34 = (Il2CppObject *)v32->__9;
      _9__39_2 = (System_Converter_TInput__TOutput__o *)sub_2213CCC(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(
        _9__39_2,
        v34,
        Method_BattleScriptRootComponent___c__EndRequestBattleScenario_b__39_2__,
        0);
      v35 = BattleScriptRootComponent___c_TypeInfo->static_fields;
      v35->__9__39_2 = (struct System_Converter_int__string__o *)_9__39_2;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v35->__9__39_2, (int32_t)_9__39_2, v36, v37, v38, v39, v40, v41);
    }
    if ( !v31 )
      goto LABEL_53;
    this = (BattleScriptRootComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                            (System_Collections_Generic_List_int__o *)v31,
                                            (System_Converter_T__TOutput__o *)_9__39_2,
                                            (const MethodInfo_36D759C *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_53;
    v42 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
    v43 = System_String__Join((System_String_o *)StringLiteral_869/*","*/, v42, 0);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_24299/*"returnRarePriShopIds"*/, v43, 0);
  }
  UnityEngine_PlayerPrefs__Save(0);
  this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_53;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, jsonstr);
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92E = 1;
  }
  this = (BattleScriptRootComponent_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, jsonstr);
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
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v46);
      if ( !byte_596A743 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596A743 = 1;
      }
      v48 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v46);
        v48 = TerminalPramsManager_TypeInfo;
      }
      WarId_k__BackingField = v48->static_fields->_WarId_k__BackingField;
      v50 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v50, v4, Method_BattleScriptRootComponent__EndRequestBattleScenario_b__39_0__, 0);
      if ( Instance )
      {
        v51 = QuestTree__mfBaseTreeUpdateWithOpenCheck((QuestTree_o *)Instance, WarId_k__BackingField, v50, 0);
        UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)v4, v51, 0);
        return;
      }
LABEL_53:
      sub_2213CDC(this, jsonstr);
    }
  }
  v52 = v4[4].klass;
  if ( !v52 )
    goto LABEL_53;
  BattleScriptRootComponent__ProcessBattleScripts(
    (BattleScriptRootComponent_o *)v4,
    (int32_t)v52->_1.byval_arg.data,
    v45);
}


void BattleScriptRootComponent__EndRequestBattleSetup(System_String_o *result, const MethodInfo *method)
{
  System_String_o *v2; // x19
  __int64 v3; // x1
  void *monitor; // x19
  int32_t klass_high; // w20
  int32_t v6; // w21
  const MethodInfo *v7; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = result;
  if ( (byte_59745A1 & 1) == 0 )
  {
    sub_2213A60(&BattleData_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_BattleMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    result = (System_String_o *)sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_59745A1 = 1;
  }
  entity = 0;
  if ( !v2 )
    goto LABEL_19;
  if ( System_String__Equals_75686512(v2, (System_String_o *)StringLiteral_23336/*"ng"*/, 0) )
  {
    result = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( result )
    {
      CommonUI__SetLoadMode((CommonUI_o *)result, 0, 0);
      result = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( result )
      {
        AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)result, 34, 1, 0, 0, 0);
        return;
      }
    }
LABEL_19:
    sub_2213CDC(result, method);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3);
  result = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !result )
    goto LABEL_19;
  result = (System_String_o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)result,
                                &entity,
                                (const MethodInfo_3F132BC *)Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_19;
    monitor = entity[1].monitor;
    klass_high = HIDWORD(entity[2].klass);
    v6 = (int32_t)entity[2].monitor;
    if ( !*(&BattleData_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, method);
    BattleData__setResumeBattleId((int64_t)monitor, klass_high, v6, 0);
  }
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
  ScriptManager__DeleteTalkResumeInfo(0);
  ScriptManager__ClearSelectRouteArray(0);
  BattleScriptRootComponent__StartBattle(v7);
}


void BattleScriptRootComponent__GoForBattle(BattleSetupInfo_o *battleSetupInfo, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_59745A3 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleScriptRootComponent_EndRequestBattleSetup__);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&ScriptManager_TypeInfo);
    byte_59745A3 = 1;
  }
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
  ScriptManager__DeleteTalkResumeInfo(0);
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
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
  __int64 v8; // x1
  TerminalPramsManager_c *v9; // x0
  int v10; // w9
  int v11; // w9
  int v12; // w9
  int v13; // w9
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5974593 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_5974593 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0) )
    goto LABEL_11;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_36:
    sub_2213CDC(Instance, v6);
  AvalonSceneManager__transitionScene_48123684((AvalonSceneManager_o *)Instance, 34, callback, 1, 0, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
  if ( !byte_596CEB4 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CEB4 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v10 = (unsigned __int8)byte_596ABDE;
  v9->static_fields->_DispState_k__BackingField = 2;
  if ( !v10 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_596ABDE = 1;
  }
  if ( !*(&v9->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v9, v8);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v11 = (unsigned __int8)byte_596C1A2;
  v9->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !v11 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_596C1A2 = 1;
  }
  if ( !*(&v9->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v9, v8);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v12 = (unsigned __int8)byte_59745D5;
  v9->static_fields->_IsDispOnly_k__BackingField = 1;
  if ( !v12 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_59745D5 = 1;
  }
  if ( !*(&v9->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v9, v8);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v13 = (unsigned __int8)byte_596DB32;
  v9->static_fields->_IsScriptDisp_k__BackingField = 1;
  if ( !v13 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_596DB32 = 1;
  }
  if ( !*(&v9->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v9, v8);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_IsPlayScriptWithMap_k__BackingField = 1;
}


void BattleScriptRootComponent__OnDestroy(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  if ( (byte_597458C & 1) == 0 )
  {
    sub_2213A60(&ScriptManager_TypeInfo);
    byte_597458C = 1;
  }
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  AssetLoader_LoadEndDataHandler_o *v21; // x19
  __int64 v22; // x1

  if ( (byte_59745B1 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&CommonUI_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_BattleScriptRootComponent___c__DisplayClass51_0__PlayStaffRoll_b__0__);
    sub_2213A60(&BattleScriptRootComponent___c__DisplayClass51_0_TypeInfo);
    sub_2213A60(&StringLiteral_6298/*"Endroll"*/);
    byte_59745B1 = 1;
  }
  v5 = sub_2213CCC(BattleScriptRootComponent___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  if ( !*(&CommonUI_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, v20);
  CommonUI__SetForceObi_16_9(1, 0);
  v21 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_BattleScriptRootComponent___c__DisplayClass51_0__PlayStaffRoll_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v22);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6298/*"Endroll"*/, v21, 1, 0, 0);
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
    sub_2213CDC(talkInfo, isExit);
  }
  BattleScriptRootComponent__ProcessBattleScripts(this, v6->fields.talkPhase, v5);
}


void BattleScriptRootComponent__ProceedToNextTalkPhase_55207068(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void BattleScriptRootComponent__ProcessBattleScripts(
        BattleScriptRootComponent_o *this,
        int32_t phaseType,
        const MethodInfo *method)
{
  BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x21
  const MethodInfo *v6; // x1
  System_Action_o *v7; // x0
  intptr_t *v8; // x8
  System_Collections_IEnumerator_o *v9; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v11; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *v12; // x8
  const MethodInfo *v13; // x2
  int32_t FadeoutKind; // w20
  bool v15; // zf
  CommonUI_o *v16; // x20
  const MethodInfo *v17; // x1
  System_Action_o *v18; // x20
  const MethodInfo *v19; // x2
  AvalonSceneManager_c *v20; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v22; // x21

  if ( (byte_5974591 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_BattleScriptRootComponent_StartScriptFinishBattleAfterDemo__);
    sub_2213A60(&Method_BattleScriptRootComponent_StartScriptFinishBattle__);
    sub_2213A60(&Method_BattleScriptRootComponent__ProcessBattleScripts_b__16_0__);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_5974591 = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, *(_QWORD *)&phaseType);
  ScriptManager__SaveTalkResumeInfo(talkInfo, 0);
  if ( phaseType > 5 )
  {
    if ( phaseType <= 8 )
    {
      if ( phaseType == 6 )
      {
        BattleScriptRootComponent__ChkCondHavingBranchQuest(this, v6);
        v12 = this->fields.talkInfo;
        if ( !v12 )
          goto LABEL_45;
        if ( v12->fields.talkType == 5 )
        {
          BattleScriptRootComponent__StartScriptNoBattleAfter(this, v11);
          return;
        }
        v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        v8 = &Method_BattleScriptRootComponent_StartScriptFinishBattle__;
      }
      else
      {
        if ( phaseType == 7 )
        {
          BattleScriptRootComponent__StartDemoFinishBattle(this, v6);
          return;
        }
        v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        v8 = &Method_BattleScriptRootComponent_StartScriptFinishBattleAfterDemo__;
      }
      v18 = v7;
      System_Action___ctor(v7, (Il2CppObject *)this, *v8, 0);
      BattleScriptRootComponent__LoadPlayScenarioWithMap(this, v18, v19);
      return;
    }
    switch ( phaseType )
    {
      case 9:
        BattleScriptRootComponent__StartSecondDemoFinishBattle(this, v6);
        return;
      case 10:
LABEL_22:
        v9 = BattleScriptRootComponent__TransitionTerminalCoroutine(this, v6);
        UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v9, 0);
        return;
      case 11:
        BattleScriptRootComponent__StartScriptBattleStartJustBefore(this, v6);
        break;
    }
  }
  else
  {
    if ( phaseType <= 2 )
    {
      if ( phaseType )
      {
        if ( phaseType != 1 )
        {
          if ( phaseType == 2 )
            BattleScriptRootComponent__StartScriptBefeoreBattleDemo(this, v6);
          return;
        }
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
        if ( Instance )
        {
          if ( !clsQuestCheck__isPlayQuestStartAction((clsQuestCheck_o *)Instance, 0) )
          {
            BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v13);
            return;
          }
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( Instance )
          {
            FadeoutKind = CommonUI__maskFadGetFadeoutKind((CommonUI_o *)Instance, 0);
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v15 = FadeoutKind == 1;
            v16 = (CommonUI_o *)Instance;
            if ( v15 )
            {
              if ( Instance )
              {
                CommonUI__maskFadeout((CommonUI_o *)Instance, 1, 0.0, 0, 0);
                BattleScriptRootComponent__StartBattleQuestStart(this, v17);
                return;
              }
            }
            else
            {
              v20 = AvalonSceneManager_TypeInfo;
              if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
                v20 = AvalonSceneManager_TypeInfo;
              }
              DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
              v22 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
              System_Action___ctor(
                v22,
                (Il2CppObject *)this,
                Method_BattleScriptRootComponent__ProcessBattleScripts_b__16_0__,
                0);
              if ( v16 )
              {
                CommonUI__maskFadeout(v16, 1, DEFAULT_FADE_TIME, v22, 0);
                return;
              }
            }
          }
        }
LABEL_45:
        sub_2213CDC(Instance, v11);
      }
      goto LABEL_22;
    }
    if ( phaseType == 3 )
    {
      BattleScriptRootComponent__StartDemoBeforeBattle(this, v6);
    }
    else if ( phaseType == 4 )
    {
      BattleScriptRootComponent__StartScriptBeforeBattleAfterDemo(this, v6);
    }
    else
    {
      BattleScriptRootComponent__EndBeforeBattleScript(this, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleScriptRootComponent__RequestBattleSecnarioForNoneBattleQuest(
        BattleScriptRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  int v4; // w8
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  const MethodInfo *v8; // x1
  System_Collections_IEnumerator_o *v9; // x0
  Il2CppObject *v10; // x20
  __int64 v11; // x1
  Il2CppObject *Master_object; // x20
  QuestEntity_o *v13; // x20
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  __int64 v15; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *v16; // x8
  BattleScenarioRequest_o *v17; // x19
  int32_t qId; // w20
  int32_t pId; // w21
  QuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59745A5 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleScriptRootComponent_EndRequestBattleScenario__);
    sub_2213A60(&Method_DataManager_GetMasterData_LoginQuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_NetworkManager_getRequest_BattleScenarioRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_59745A5 = 1;
  }
  v4 = *(&ScriptManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, isExit);
  ScriptManager__DeleteTalkResumeInfo(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_LoginQuestMaster___);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo || !Instance )
    goto LABEL_42;
  if ( LoginQuestMaster__GetEntityByQuestId((LoginQuestMaster_o *)Instance, talkInfo->fields.qId, 0) )
  {
    v9 = BattleScriptRootComponent__TransitionTerminalCoroutine(this, v8);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v9, 0);
    return;
  }
  v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92E = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v10 )
    goto LABEL_42;
  CommonUI__CheckChangeOtherConnectMarkFromQuestClear(
    (CommonUI_o *)v10,
    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 660LL),
    0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92E = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_42;
  if ( !QuestMaster__TryGetQuestEntity(
          (QuestMaster_o *)Master_object,
          &entity,
          *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
          0) )
    goto LABEL_35;
  v13 = entity;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
  if ( !byte_596A92D )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92D = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v13 )
LABEL_42:
    sub_2213CDC(Instance, v6);
  if ( QuestEntity__HasFlag_49492572(v13, 0x8000, *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL) + 1, 0) )
  {
    Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  }
LABEL_35:
  v14 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent_EndRequestBattleScenario__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
  Instance = (DataManager_o *)NetworkManager__getRequest_object_(
                                v14,
                                (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  v16 = this->fields.talkInfo;
  if ( !v16 )
    goto LABEL_42;
  v17 = (BattleScenarioRequest_o *)Instance;
  qId = v16->fields.qId;
  pId = v16->fields.pId;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v6);
  Instance = (DataManager_o *)ScriptManager__GetSelectRouteArray(0);
  if ( !v17 )
    goto LABEL_42;
  BattleScenarioRequest__beginRequest(v17, qId, pId, (System_Int32_array *)Instance, 0);
}


void BattleScriptRootComponent__RequestBattleSetup(
        BattleSetupInfo_o *battleSetupInfo,
        NetworkManager_ResultCallbackFunc_o *callbackFunc,
        const MethodInfo *method)
{
  CommonUI_o *routeSelect; // x0
  __int64 v6; // x1
  int32_t questId; // w21
  int32_t questPhase; // w22
  __int64 v9; // x1
  __int64 v10; // x1
  BalanceConfig_c *v11; // x0
  float BgmFadeOutTimeBeforeBattle; // s8
  __int64 v13; // x1
  Il2CppObject *Request_object; // x28
  int32_t SelectBranchIndex; // w0
  int32_t v16; // w8
  int32_t v17; // w9
  int32_t followerClassId; // w24
  int32_t followerGrandGraphId; // w25
  int32_t enemySelect; // w27
  int64_t followerId; // x23
  int32_t itemId; // w26
  int32_t v23; // w0
  int64_t userEquipId; // x20
  int32_t followerType; // w21
  int32_t questSelect; // w29
  int32_t boostId; // [xsp+E4h] [xbp-7Ch]
  int64_t activeDeckId; // [xsp+E8h] [xbp-78h]
  int32_t v29; // [xsp+F8h] [xbp-68h]
  int32_t v30; // [xsp+FCh] [xbp-64h]

  if ( (byte_59745A4 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_NetworkManager_getRequest_BattleSetupRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_59745A4 = 1;
  }
  routeSelect = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !routeSelect )
    goto LABEL_23;
  CommonUI__SetLoadMode(routeSelect, 2, 0);
  if ( !battleSetupInfo )
    goto LABEL_23;
  questId = battleSetupInfo->fields.questId;
  questPhase = battleSetupInfo->fields.questPhase;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
  routeSelect = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !routeSelect )
    goto LABEL_23;
  routeSelect = (CommonUI_o *)QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)routeSelect, questId, questPhase, 0);
  if ( !routeSelect )
    goto LABEL_23;
  if ( QuestPhaseEntity__IsFadeOutMainBgmBeforeBattle((QuestPhaseEntity_o *)routeSelect, 0) )
  {
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v9);
    BgmManager__Enable_KeepSubBgm(1, 0);
    v11 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10);
      v11 = BalanceConfig_TypeInfo;
    }
    BgmFadeOutTimeBeforeBattle = v11->static_fields->BgmFadeOutTimeBeforeBattle;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v10);
    SoundManager__fadeoutBgm(BgmFadeOutTimeBeforeBattle, 0);
    BgmManager__Enable_KeepSubBgm(0, 0);
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
  Request_object = NetworkManager__getRequest_object_(
                     callbackFunc,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_BattleSetupRequest___);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v13);
  SelectBranchIndex = ScriptManager__GetSelectBranchIndex(0);
  v17 = battleSetupInfo->fields.questId;
  v16 = battleSetupInfo->fields.questPhase;
  followerClassId = battleSetupInfo->fields.followerClassId;
  followerGrandGraphId = battleSetupInfo->fields.followerGrandGraphId;
  enemySelect = SelectBranchIndex;
  battleSetupInfo->fields.selectedBranchIdx = SelectBranchIndex;
  v29 = v16;
  v30 = v17;
  followerId = battleSetupInfo->fields.followerId;
  activeDeckId = battleSetupInfo->fields.deckId;
  itemId = battleSetupInfo->fields.itemId;
  boostId = battleSetupInfo->fields.boostId;
  v23 = BattleSetupInfo__TargetQuestBranchIdx(battleSetupInfo, 0);
  userEquipId = battleSetupInfo->fields.userEquipId;
  followerType = battleSetupInfo->fields.followerType;
  questSelect = v23;
  routeSelect = (CommonUI_o *)ScriptManager__GetSelectRouteArray(0);
  if ( !Request_object )
LABEL_23:
    sub_2213CDC(routeSelect, v6);
  BattleSetupRequest__beginRequest(
    (BattleSetupRequest_o *)Request_object,
    v30,
    v29,
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
    battleSetupInfo->fields.followerDispLimitCount,
    battleSetupInfo->fields.followerIconLimitCount,
    battleSetupInfo->fields.followerPortraitLimitCount,
    battleSetupInfo->fields.followerCommandCardLimitCount,
    battleSetupInfo->fields.followerTransformRandomLimitCount,
    battleSetupInfo->fields.choiceTransformRandomLimitCounts,
    battleSetupInfo->fields.followerTransformSpoilerProtectionLimitCount,
    battleSetupInfo->fields.followerTransformDispLimitCount,
    battleSetupInfo->fields.followerTransformIconLimitCount,
    battleSetupInfo->fields.followerTransformPortraitLimitCount,
    battleSetupInfo->fields.followerTransformCommandCardLimitCount,
    battleSetupInfo->fields.recommendSupportIdx,
    battleSetupInfo->fields.followerSupportDeckId,
    battleSetupInfo->fields.campaignItemId,
    battleSetupInfo->fields.restartWave,
    battleSetupInfo->fields.useRewardAddItemIds,
    0);
}


// local variable allocation has failed, the output may be wrong!
void BattleScriptRootComponent__SavePlayedNotMeetsScript(
        BattleScriptRootComponent_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  int v6; // w8
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  QuestPhaseEntity_o *Entity; // x0
  __int64 v10; // x1
  System_String_o *ScriptName_NotMeetsCond; // x0
  System_String_o *v12; // x0
  int32_t ScriptIntParam; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_59745A0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&StringLiteral_17741/*"badEndId"*/);
    sub_2213A60(&StringLiteral_23436/*"notMeets"*/);
    byte_59745A0 = 1;
  }
  v6 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  ScriptIntParam = 0;
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v8);
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Master_object, questId, phase, 0);
  if ( Entity )
  {
    ScriptIntParam = QuestPhaseEntity__getScriptIntParam(Entity, (System_String_o *)StringLiteral_17741/*"badEndId"*/, 0, 0);
    if ( ScriptIntParam )
    {
      ScriptName_NotMeetsCond = System_Int32__ToString((int32_t)&ScriptIntParam, 0);
    }
    else
    {
      if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v10);
      ScriptName_NotMeetsCond = ScriptManager__GetScriptName_NotMeetsCond(questId, phase, 0);
    }
    v12 = System_String__Concat_75651716((System_String_o *)StringLiteral_23436/*"notMeets"*/, ScriptName_NotMeetsCond, 0);
    UnityEngine_PlayerPrefs__SetInt(v12, 1, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void BattleScriptRootComponent__ScriptFinishBattleAfterDemoEnd(
        BattleScriptRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Int32_array *Request_object; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  ScriptManager_c *v15; // x0
  const MethodInfo *v16; // x2
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  __int64 v18; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleRouteSelectRequest_o *v20; // x19
  int32_t qId; // w20
  int32_t pId; // w21

  if ( (byte_5974598 & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&Method_BattleScriptRootComponent___c__DisplayClass25_0__ScriptFinishBattleAfterDemoEnd_b__0__);
    sub_2213A60(&BattleScriptRootComponent___c__DisplayClass25_0_TypeInfo);
    byte_5974598 = 1;
  }
  v5 = sub_2213CCC(BattleScriptRootComponent___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_15;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v15 = ScriptManager_TypeInfo;
  *(_BYTE *)(v5 + 24) = isExit;
  if ( !*(&v15->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v15, v14);
  if ( ScriptManager__GetSelectRouteArray(0) )
  {
    v17 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v17,
      (Il2CppObject *)v5,
      Method_BattleScriptRootComponent___c__DisplayClass25_0__ScriptFinishBattleAfterDemoEnd_b__0__,
      0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
    Request_object = (System_Int32_array *)NetworkManager__getRequest_object_(
                                             v17,
                                             (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      v20 = (BattleRouteSelectRequest_o *)Request_object;
      qId = talkInfo->fields.qId;
      pId = talkInfo->fields.pId;
      if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v7);
      Request_object = ScriptManager__GetSelectRouteArray(0);
      if ( v20 )
      {
        BattleRouteSelectRequest__beginRequest(v20, qId, pId, Request_object, 0);
        return;
      }
    }
LABEL_15:
    sub_2213CDC(Request_object, v7);
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, *(_BYTE *)(v5 + 24), v16);
}


bool BattleScriptRootComponent__StartBattle(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  int v3; // w20

  if ( (byte_59745A2 & 1) == 0 )
  {
    sub_2213A60(&Method_AvalonSceneManager_UnloadScene_FollowerRootComponent___);
    sub_2213A60(&Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_59745A2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  v3 = BYTE4(Instance[9].klass);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v3 )
  {
    if ( Instance )
    {
      AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 10, 1, 0, 1, 0);
      return 1;
    }
LABEL_12:
    sub_2213CDC(Instance, v2);
  }
  if ( !Instance )
    goto LABEL_12;
  AvalonSceneManager__UnloadScene_object_(
    (AvalonSceneManager_o *)Instance,
    (const MethodInfo_380E6D8 *)Method_AvalonSceneManager_UnloadScene_FollowerRootComponent___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  AvalonSceneManager__UnloadScene_object_(
    (AvalonSceneManager_o *)Instance,
    (const MethodInfo_380E6D8 *)Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 10, 1, 0, 0);
  return 1;
}


void BattleScriptRootComponent__StartBattleQuestStart(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_597459A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleScriptRootComponent_ProceedToNextTalkPhase__);
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_597459A = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BattleScriptRootComponent_ProceedToNextTalkPhase__, 0);
  if ( !Instance )
    sub_2213CDC(v5, v6);
  clsQuestCheck__PlayQuestStartAction((clsQuestCheck_o *)Instance, v4, 0);
}


void BattleScriptRootComponent__StartDemoBeforeBattle(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  int32_t name_high; // w20
  int32_t namespaze; // w21
  System_Action_object__o *v6; // x22
  __int64 v7; // x1

  v2 = (Il2CppObject *)this;
  if ( (byte_597459C & 1) == 0 )
  {
    sub_2213A60(&System_Action_string__TypeInfo);
    sub_2213A60(&Method_BattleScriptRootComponent__StartDemoBeforeBattle_b__29_0__);
    this = (BattleScriptRootComponent_o *)sub_2213A60(&ScriptManager_TypeInfo);
    byte_597459C = 1;
  }
  klass = v2[4].klass;
  if ( !klass )
    sub_2213CDC(this, method);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v6 = (System_Action_object__o *)sub_2213CCC(System_Action_string__TypeInfo);
  System_Action_object____ctor(v6, v2, Method_BattleScriptRootComponent__StartDemoBeforeBattle_b__29_0__, 0);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v7);
  ScriptManager__LoadBattleStartGameDemo(name_high, namespaze, 0, (System_Action_string__o *)v6, 0, 0);
}


void BattleScriptRootComponent__StartDemoFinishBattle(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x0
  int32_t qId; // w20
  int32_t pId; // w21
  System_Action_object__o *v7; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_5974596 & 1) == 0 )
  {
    sub_2213A60(&System_Action_string__TypeInfo);
    sub_2213A60(&Method_BattleScriptRootComponent__StartDemoFinishBattle_b__23_0__);
    sub_2213A60(&ScriptManager_TypeInfo);
    byte_5974596 = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_2213CDC(0, method);
  qId = talkInfo->fields.qId;
  if ( qId < 1 )
  {
    BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(talkInfo, 0, v2);
    BattleScriptRootComponent__ProceedToNextTalkPhase(this, 0, v9);
  }
  else
  {
    pId = talkInfo->fields.pId;
    v7 = (System_Action_object__o *)sub_2213CCC(System_Action_string__TypeInfo);
    System_Action_object____ctor(
      v7,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent__StartDemoFinishBattle_b__23_0__,
      0);
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v8);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  TerminalPramsManager_c *v14; // x0
  int32_t WarId_k__BackingField; // w22
  __int64 v16; // x1
  Il2CppObject *Instance; // x20
  CombineResultEffectComponent_ClickDelegate_o *v18; // x21

  if ( (byte_59745AD & 1) == 0 )
  {
    sub_2213A60(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TutorialFlag_TypeInfo);
    sub_2213A60(&Method_BattleScriptRootComponent___c__DisplayClass46_0__StartMashuPowerUpAction_b__0__);
    sub_2213A60(&BattleScriptRootComponent___c__DisplayClass46_0_TypeInfo);
    sub_2213A60(&StringLiteral_8901/*"MASHU_CHANGE_WAR_ID"*/);
    byte_59745AD = 1;
  }
  v4 = sub_2213CCC(BattleScriptRootComponent___c__DisplayClass46_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_17;
  *(_QWORD *)(v4 + 16) = end_act;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)end_act, v7, v8, v9, v10, v11, v12);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
  if ( !byte_596A743 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A743 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
    v14 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v14->static_fields->_WarId_k__BackingField;
  if ( WarId_k__BackingField != ConstantMaster__getValue((System_String_o *)StringLiteral_8901/*"MASHU_CHANGE_WAR_ID"*/, 0) )
    goto LABEL_14;
  *(_DWORD *)(v4 + 24) = 115;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v16);
  if ( TutorialFlag__Get_47388504(115, 0) )
  {
LABEL_14:
    ActionExtensions__Call(*(System_Action_o **)(v4 + 16), 0);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = (CombineResultEffectComponent_ClickDelegate_o *)sub_2213CCC(CombineResultEffectComponent_ClickDelegate_TypeInfo);
  CombineResultEffectComponent_ClickDelegate___ctor(
    v18,
    (Il2CppObject *)v4,
    Method_BattleScriptRootComponent___c__DisplayClass46_0__StartMashuPowerUpAction_b__0__,
    0);
  if ( !Instance )
LABEL_17:
    sub_2213CDC(v5, v6);
  CommonUI__OpenPowerUp((CommonUI_o *)Instance, v18, 0);
}


System_Collections_IEnumerator_o *BattleScriptRootComponent__StartMovie(
        BattleScriptRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5974590 & 1) == 0 )
  {
    sub_2213A60(&BattleScriptRootComponent__StartMovie_d__15_TypeInfo);
    byte_5974590 = 1;
  }
  v5 = sub_2213CCC(BattleScriptRootComponent__StartMovie_d__15_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)callback, v12, v13, v14, v15, v16, v17);
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
  __int64 v13; // x1
  BattleScriptRootComponent_TalkScriptInfo_o *v14; // x20
  Il2CppClass *v15; // x8
  int v16; // w8
  int v17; // w9
  Il2CppClass *v18; // x8

  v2 = (Il2CppObject *)this;
  if ( (byte_597458F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleScriptRootComponent__StartScript_b__14_0__);
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&ScriptManager_TypeInfo);
    this = (BattleScriptRootComponent_o *)sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_597458F = 1;
  }
  klass = v2[4].klass;
  if ( !klass )
    goto LABEL_27;
  namespaze_high = HIDWORD(klass->_1.namespaze);
  if ( (unsigned int)(namespaze_high - 3) < 4 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    this = (BattleScriptRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
            v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(v10, v2, Method_BattleScriptRootComponent__StartScript_b__14_0__, 0);
            started = BattleScriptRootComponent__StartMovie((BattleScriptRootComponent_o *)v2, v10, v11);
            UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)v2, started, 0);
            return;
          }
          v18 = v2[4].klass;
          if ( v18 )
          {
            BattleScriptRootComponent__ProcessBattleScripts(
              (BattleScriptRootComponent_o *)v2,
              (int32_t)v18->_1.byval_arg.data,
              v9);
            return;
          }
        }
      }
    }
LABEL_27:
    sub_2213CDC(this, method);
  }
  if ( namespaze_high == 1 )
  {
    this = (BattleScriptRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_27;
    CommonUI__maskFadeout((CommonUI_o *)this, 2, 0.0, 0, 0);
    v14 = (BattleScriptRootComponent_TalkScriptInfo_o *)v2[4].klass;
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v13);
    ScriptManager__SaveTalkResumeInfo(v14, 0);
    v15 = v2[4].klass;
    if ( !v15 )
      goto LABEL_27;
    v17 = HIDWORD(v15->_1.name);
    v16 = (int)v15->_1.namespaze;
    if ( v17 <= 0 )
    {
      if ( v16 )
        BattleScriptRootComponent__ChapterStartEffect((BattleScriptRootComponent_o *)v2, method);
      else
        BattleScriptRootComponent__ChapterStart((BattleScriptRootComponent_o *)v2, method);
    }
    else if ( v16 )
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
  int32_t pId; // w21
  int32_t wId; // w19
  int32_t qId; // w20
  ScriptManager_CallbackFunc_o *v7; // x23
  __int64 v8; // x1
  int32_t JumpLine; // w22

  v2 = this;
  if ( (byte_597459E & 1) == 0 )
  {
    sub_2213A60(&Method_BattleScriptRootComponent_ProceedToNextTalkPhase___91718472);
    sub_2213A60(&ScriptManager_CallbackFunc_TypeInfo);
    this = (BattleScriptRootComponent_o *)sub_2213A60(&ScriptManager_TypeInfo);
    byte_597459E = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo
    || (pId = talkInfo->fields.pId,
        wId = talkInfo->fields.wId,
        qId = talkInfo->fields.qId,
        v7 = (ScriptManager_CallbackFunc_o *)sub_2213CCC(ScriptManager_CallbackFunc_TypeInfo),
        ScriptManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)v2,
          Method_BattleScriptRootComponent_ProceedToNextTalkPhase___91718472,
          0),
        (this = (BattleScriptRootComponent_o *)v2->fields.talkInfo) == 0) )
  {
    sub_2213CDC(this, method);
  }
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)this,
               method);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v8);
  ScriptManager__PlayBattleStartJustBefore(wId, qId, pId, v7, 0, JumpLine, 0);
}


void BattleScriptRootComponent__StartScriptBefeoreBattleDemo(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  BattleScriptRootComponent_o *v2; // x19
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v4; // x8
  int32_t pId; // w22
  int32_t wId; // w20
  int32_t qId; // w21
  ScriptManager_CallbackFunc_o *v8; // x23
  __int64 v9; // x1
  int32_t JumpLine; // w19
  int32_t v11; // w22
  int32_t v12; // w20
  int32_t v13; // w21
  ScriptManager_CallbackFunc_o *v14; // x23
  struct BattleScriptRootComponent_TalkScriptInfo_o *v15; // x8
  int32_t v16; // w19
  int32_t talkType; // w24

  v2 = this;
  if ( (byte_597459B & 1) == 0 )
  {
    sub_2213A60(&Method_BattleScriptRootComponent_ProceedToNextTalkPhase___91718472);
    sub_2213A60(&Method_BattleScriptRootComponent_RequestBattleSecnarioForNoneBattleQuest__);
    sub_2213A60(&ScriptManager_CallbackFunc_TypeInfo);
    this = (BattleScriptRootComponent_o *)sub_2213A60(&ScriptManager_TypeInfo);
    byte_597459B = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_16;
  this = (BattleScriptRootComponent_o *)WarMaster__IsLastQuest(talkInfo->fields.wId, talkInfo->fields.qId, 0);
  v4 = v2->fields.talkInfo;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v4 )
    {
      pId = v4->fields.pId;
      wId = v4->fields.wId;
      qId = v4->fields.qId;
      v8 = (ScriptManager_CallbackFunc_o *)sub_2213CCC(ScriptManager_CallbackFunc_TypeInfo);
      ScriptManager_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)v2,
        Method_BattleScriptRootComponent_RequestBattleSecnarioForNoneBattleQuest__,
        0);
      this = (BattleScriptRootComponent_o *)v2->fields.talkInfo;
      if ( this )
      {
        JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
                     (BattleScriptRootComponent_TalkScriptInfo_o *)this,
                     method);
        if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v9);
        ScriptManager__PlayBattleStartWhite(wId, qId, pId, v8, 0, 0, JumpLine, 0, 0);
        return;
      }
    }
LABEL_16:
    sub_2213CDC(this, method);
  }
  if ( !v4 )
    goto LABEL_16;
  v11 = v4->fields.pId;
  v12 = v4->fields.wId;
  v13 = v4->fields.qId;
  v14 = (ScriptManager_CallbackFunc_o *)sub_2213CCC(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(
    v14,
    (Il2CppObject *)v2,
    Method_BattleScriptRootComponent_ProceedToNextTalkPhase___91718472,
    0);
  this = (BattleScriptRootComponent_o *)v2->fields.talkInfo;
  if ( !this )
    goto LABEL_16;
  this = (BattleScriptRootComponent_o *)BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
                                          (BattleScriptRootComponent_TalkScriptInfo_o *)this,
                                          method);
  v15 = v2->fields.talkInfo;
  if ( !v15 )
    goto LABEL_16;
  v16 = (int)this;
  talkType = v15->fields.talkType;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
  ScriptManager__PlayBattleStart(v12, v13, v11, v14, 0, 0, v16, talkType == 6, 0, 0, 0);
}


void BattleScriptRootComponent__StartScriptBeforeBattleAfterDemo(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  BattleScriptRootComponent_o *v2; // x22
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  int32_t pId; // w21
  int32_t wId; // w19
  int32_t qId; // w20
  ScriptManager_CallbackFunc_o *v7; // x23
  __int64 v8; // x1
  int32_t JumpLine; // w22

  v2 = this;
  if ( (byte_597459D & 1) == 0 )
  {
    sub_2213A60(&Method_BattleScriptRootComponent_ProceedToNextTalkPhase___91718472);
    sub_2213A60(&ScriptManager_CallbackFunc_TypeInfo);
    this = (BattleScriptRootComponent_o *)sub_2213A60(&ScriptManager_TypeInfo);
    byte_597459D = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo
    || (pId = talkInfo->fields.pId,
        wId = talkInfo->fields.wId,
        qId = talkInfo->fields.qId,
        v7 = (ScriptManager_CallbackFunc_o *)sub_2213CCC(ScriptManager_CallbackFunc_TypeInfo),
        ScriptManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)v2,
          Method_BattleScriptRootComponent_ProceedToNextTalkPhase___91718472,
          0),
        (this = (BattleScriptRootComponent_o *)v2->fields.talkInfo) == 0) )
  {
    sub_2213CDC(this, method);
  }
  JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
               (BattleScriptRootComponent_TalkScriptInfo_o *)this,
               method);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v8);
  ScriptManager__PlayBattleStart2(wId, qId, pId, v7, 0, 0, JumpLine, 0);
}


void BattleScriptRootComponent__StartScriptFinishBattle(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  void *talkInfo; // x0
  TerminalPramsManager_c *v4; // x0
  struct TerminalPramsManager_StaticFields *v5; // x8
  int32_t v6; // w20
  int32_t v7; // w21
  int32_t winResult; // w22
  ScriptManager_CallbackFunc_o *v9; // x23
  __int64 v10; // x1
  int32_t JumpLine; // w19
  TerminalPramsManager_c *v12; // x0
  _BOOL4 IsPlayScriptWithMap_k__BackingField; // w24
  __int64 v14; // x1
  __int64 v15; // x1
  TerminalPramsManager_c *v16; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  const MethodInfo_47A29F8 *v18; // x0
  int32_t v19; // w20
  int32_t v20; // w21
  int32_t v21; // w22
  ScriptManager_CallbackFunc_o *v22; // x23
  __int64 v23; // x1
  int32_t v24; // w19

  if ( (byte_5974594 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleScriptRootComponent_StartScriptFinishBattleEnd2__);
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&ScriptManager_CallbackFunc_TypeInfo);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_5974594 = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_40;
  if ( BattleScriptRootComponent_TalkScriptInfo__get_win_lose(
         (BattleScriptRootComponent_TalkScriptInfo_o *)talkInfo,
         method) != 1 )
  {
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
    ScriptManager__DeleteTalkResumeInfo(0);
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v14);
    BgmManager__SetMute(0, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v15);
    if ( !byte_596ABDE )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596ABDE = 1;
    }
    v16 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v15);
      v16 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v16->static_fields;
    v18 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
    static_fields->_IsAutoResume_k__BackingField = 1;
    talkInfo = SingletonMonoBehaviour_object___get_Instance(v18);
    if ( talkInfo )
    {
      AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)talkInfo, 34, 1, 0, 0, 0);
      return;
    }
    goto LABEL_40;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_596D5EA )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D5EA = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v5 = v4->static_fields;
  talkInfo = this->fields.talkInfo;
  if ( v5->_IsScriptDisp_k__BackingField )
  {
    if ( talkInfo )
    {
      v6 = *((_DWORD *)talkInfo + 5);
      v7 = *((_DWORD *)talkInfo + 6);
      winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(
                    (BattleScriptRootComponent_TalkScriptInfo_o *)talkInfo,
                    method);
      v9 = (ScriptManager_CallbackFunc_o *)sub_2213CCC(ScriptManager_CallbackFunc_TypeInfo);
      ScriptManager_CallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_BattleScriptRootComponent_StartScriptFinishBattleEnd2__,
        0);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
                     (BattleScriptRootComponent_TalkScriptInfo_o *)talkInfo,
                     method);
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10);
        if ( !byte_596D602 )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          byte_596D602 = 1;
        }
        v12 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10);
          v12 = TerminalPramsManager_TypeInfo;
        }
        IsPlayScriptWithMap_k__BackingField = v12->static_fields->_IsPlayScriptWithMap_k__BackingField;
        if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v10);
        ScriptManager__PlayBattleEnd2_51600116(
          v6,
          v7,
          winResult,
          15,
          v9,
          0,
          JumpLine,
          IsPlayScriptWithMap_k__BackingField,
          0);
        return;
      }
    }
LABEL_40:
    sub_2213CDC(talkInfo, method);
  }
  if ( !talkInfo )
    goto LABEL_40;
  v19 = *((_DWORD *)talkInfo + 5);
  v20 = *((_DWORD *)talkInfo + 6);
  v21 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(
          (BattleScriptRootComponent_TalkScriptInfo_o *)talkInfo,
          method);
  v22 = (ScriptManager_CallbackFunc_o *)sub_2213CCC(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(
    v22,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent_StartScriptFinishBattleEnd2__,
    0);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_40;
  v24 = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
          (BattleScriptRootComponent_TalkScriptInfo_o *)talkInfo,
          method);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v23);
  ScriptManager__PlayBattleEnd2(v19, v20, v21, v22, 0, v24, 0);
}


void BattleScriptRootComponent__StartScriptFinishBattleAfterDemo(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x0
  int32_t qId; // w20
  int32_t pId; // w21
  int32_t winResult; // w22
  ScriptManager_CallbackFunc_o *v7; // x23
  __int64 v8; // x1
  int32_t JumpLine; // w19
  TerminalPramsManager_c *v10; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  int32_t v12; // w20
  int32_t v13; // w21
  int32_t v14; // w22
  ScriptManager_CallbackFunc_o *v15; // x23
  __int64 v16; // x1
  int32_t v17; // w19
  TerminalPramsManager_c *v18; // x0
  _BOOL4 IsPlayScriptWithMap_k__BackingField; // w24
  int32_t v20; // w20
  int32_t v21; // w21
  int32_t v22; // w22
  ScriptManager_CallbackFunc_o *v23; // x23
  __int64 v24; // x1
  int32_t v25; // w19

  if ( (byte_5974597 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleScriptRootComponent_ScriptFinishBattleAfterDemoEnd__);
    sub_2213A60(&ScriptManager_CallbackFunc_TypeInfo);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_5974597 = 1;
  }
  if ( this->fields.setEndRoll )
  {
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      qId = talkInfo->fields.qId;
      pId = talkInfo->fields.pId;
      winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(talkInfo, method);
      v7 = (ScriptManager_CallbackFunc_o *)sub_2213CCC(ScriptManager_CallbackFunc_TypeInfo);
      ScriptManager_CallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_BattleScriptRootComponent_ScriptFinishBattleAfterDemoEnd__,
        0);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(talkInfo, method);
        if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v8);
        ScriptManager__PlayBattleEndWhite(qId, pId, winResult, v7, 0, JumpLine, 0);
        return;
      }
    }
LABEL_32:
    sub_2213CDC(talkInfo, method);
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_596D5EA )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D5EA = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  talkInfo = this->fields.talkInfo;
  if ( static_fields->_IsScriptDisp_k__BackingField )
  {
    if ( !talkInfo )
      goto LABEL_32;
    v12 = talkInfo->fields.qId;
    v13 = talkInfo->fields.pId;
    v14 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(talkInfo, method);
    v15 = (ScriptManager_CallbackFunc_o *)sub_2213CCC(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(
      v15,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent_ScriptFinishBattleAfterDemoEnd__,
      0);
    talkInfo = this->fields.talkInfo;
    if ( !talkInfo )
      goto LABEL_32;
    v17 = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(talkInfo, method);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
    if ( !byte_596D602 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D602 = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
      v18 = TerminalPramsManager_TypeInfo;
    }
    IsPlayScriptWithMap_k__BackingField = v18->static_fields->_IsPlayScriptWithMap_k__BackingField;
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v16);
    ScriptManager__PlayBattleEnd_51598788(v12, v13, v14, 15, v15, 0, v17, IsPlayScriptWithMap_k__BackingField, 0);
  }
  else
  {
    if ( !talkInfo )
      goto LABEL_32;
    v20 = talkInfo->fields.qId;
    v21 = talkInfo->fields.pId;
    v22 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(talkInfo, method);
    v23 = (ScriptManager_CallbackFunc_o *)sub_2213CCC(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(
      v23,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent_ScriptFinishBattleAfterDemoEnd__,
      0);
    talkInfo = this->fields.talkInfo;
    if ( !talkInfo )
      goto LABEL_32;
    v25 = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(talkInfo, method);
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v24);
    ScriptManager__PlayBattleEnd(v20, v21, v22, v23, 0, v25, 0);
  }
}


void BattleScriptRootComponent__StartScriptFinishBattleEnd2(
        BattleScriptRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Int32_array *Request_object; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  ScriptManager_c *v15; // x0
  const MethodInfo *v16; // x2
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  __int64 v18; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  BattleRouteSelectRequest_o *v20; // x19
  int32_t qId; // w20
  int32_t pId; // w21

  if ( (byte_5974595 & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&Method_BattleScriptRootComponent___c__DisplayClass22_0__StartScriptFinishBattleEnd2_b__0__);
    sub_2213A60(&BattleScriptRootComponent___c__DisplayClass22_0_TypeInfo);
    byte_5974595 = 1;
  }
  v5 = sub_2213CCC(BattleScriptRootComponent___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_15;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v15 = ScriptManager_TypeInfo;
  *(_BYTE *)(v5 + 24) = isExit;
  if ( !*(&v15->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v15, v14);
  if ( ScriptManager__GetSelectRouteArray(0) )
  {
    v17 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v17,
      (Il2CppObject *)v5,
      Method_BattleScriptRootComponent___c__DisplayClass22_0__StartScriptFinishBattleEnd2_b__0__,
      0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
    Request_object = (System_Int32_array *)NetworkManager__getRequest_object_(
                                             v17,
                                             (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    talkInfo = this->fields.talkInfo;
    if ( talkInfo )
    {
      v20 = (BattleRouteSelectRequest_o *)Request_object;
      qId = talkInfo->fields.qId;
      pId = talkInfo->fields.pId;
      if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v7);
      Request_object = ScriptManager__GetSelectRouteArray(0);
      if ( v20 )
      {
        BattleRouteSelectRequest__beginRequest(v20, qId, pId, Request_object, 0);
        return;
      }
    }
LABEL_15:
    sub_2213CDC(Request_object, v7);
  }
  BattleScriptRootComponent__ProceedToNextTalkPhase(this, *(_BYTE *)(v5 + 24), v16);
}


void BattleScriptRootComponent__StartScriptNoBattleAfter(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x0
  int32_t qId; // w20
  int32_t pId; // w21
  int32_t winResult; // w22
  ScriptManager_CallbackFunc_o *v7; // x23
  __int64 v8; // x1
  int32_t JumpLine; // w19
  int32_t v10; // w20
  int32_t v11; // w21
  int32_t v12; // w22
  ScriptManager_CallbackFunc_o *v13; // x23
  __int64 v14; // x1
  int32_t v15; // w19

  if ( (byte_59745A7 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__40_0__);
    sub_2213A60(&Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__40_1__);
    sub_2213A60(&ScriptManager_CallbackFunc_TypeInfo);
    sub_2213A60(&ScriptManager_TypeInfo);
    byte_59745A7 = 1;
  }
  talkInfo = this->fields.talkInfo;
  if ( this->fields.setEndRoll )
  {
    if ( talkInfo )
    {
      qId = talkInfo->fields.qId;
      pId = talkInfo->fields.pId;
      winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(talkInfo, method);
      v7 = (ScriptManager_CallbackFunc_o *)sub_2213CCC(ScriptManager_CallbackFunc_TypeInfo);
      ScriptManager_CallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__40_0__,
        0);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        JumpLine = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(talkInfo, method);
        if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v8);
        ScriptManager__PlayBattleEndWhite(qId, pId, winResult, v7, 0, JumpLine, 0);
        return;
      }
    }
LABEL_14:
    sub_2213CDC(talkInfo, method);
  }
  if ( !talkInfo )
    goto LABEL_14;
  v10 = talkInfo->fields.qId;
  v11 = talkInfo->fields.pId;
  v12 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(talkInfo, method);
  v13 = (ScriptManager_CallbackFunc_o *)sub_2213CCC(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_BattleScriptRootComponent__StartScriptNoBattleAfter_b__40_1__,
    0);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_14;
  v15 = BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(talkInfo, method);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v14);
  ScriptManager__PlayBattleEnd(v10, v11, v12, v13, 0, v15, 0);
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
  __int64 v7; // x1

  v2 = (Il2CppObject *)this;
  if ( (byte_5974599 & 1) == 0 )
  {
    sub_2213A60(&System_Action_string__TypeInfo);
    sub_2213A60(&Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__26_0__);
    this = (BattleScriptRootComponent_o *)sub_2213A60(&ScriptManager_TypeInfo);
    byte_5974599 = 1;
  }
  klass = v2[4].klass;
  if ( !klass )
    sub_2213CDC(this, method);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v6 = (System_Action_object__o *)sub_2213CCC(System_Action_string__TypeInfo);
  System_Action_object____ctor(v6, v2, Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__26_0__, 0);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v7);
  ScriptManager__LoadBattleEndGameDemo(name_high, namespaze, 0, (System_Action_string__o *)v6, 0, 0);
}


void BattleScriptRootComponent__TransitionTerminal(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = BattleScriptRootComponent__TransitionTerminalCoroutine(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v3, 0);
}


System_Collections_IEnumerator_o *BattleScriptRootComponent__TransitionTerminalCoroutine(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_59745AE & 1) == 0 )
  {
    sub_2213A60(&BattleScriptRootComponent__TransitionTerminalCoroutine_d__48_TypeInfo);
    byte_59745AE = 1;
  }
  v3 = sub_2213CCC(BattleScriptRootComponent__TransitionTerminalCoroutine_d__48_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  __int64 v10; // x1
  TerminalPramsManager_c *v11; // x0

  if ( (byte_59745AF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_59745AF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo || !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)QuestPhaseMaster__IsInvisibleConnectAndLoad(
                                (QuestPhaseMaster_o *)Instance,
                                talkInfo->fields.qId,
                                talkInfo->fields.pId,
                                0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
    if ( !byte_596D8B0 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D8B0 = 1;
    }
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
      Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    }
    v6 = 2;
    *(_BYTE *)(*(_QWORD *)&Instance[1].fields._DispLog + 656LL) = 1;
  }
  else
  {
    v6 = 1;
  }
  v7 = this->fields.talkInfo;
  if ( !v7 )
    goto LABEL_30;
  talkType = v7->fields.talkType;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( talkType == 5 )
  {
    if ( !Instance )
      goto LABEL_30;
    v9 = AvalonSceneManager__checkLoadedScene((AvalonSceneManager_o *)Instance, 34, 0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( v9 )
    {
      if ( Instance )
      {
        AvalonSceneManager__changeScene((AvalonSceneManager_o *)Instance, 34, v6, 0, 0);
        goto LABEL_23;
      }
LABEL_30:
      sub_2213CDC(Instance, v4);
    }
  }
  if ( !Instance )
    goto LABEL_30;
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, v6, 0, 0, 0);
LABEL_23:
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10);
  if ( !byte_59745D5 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_59745D5 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_IsScriptDisp_k__BackingField = 0;
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
  struct BattleScriptRootComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__50_0; // x22
  System_String_o *v14; // x20
  System_String_o *v15; // x21
  Il2CppObject *v16; // x23
  struct BattleScriptRootComponent___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  TerminalPramsManager_c *v24; // x0
  struct TerminalPramsManager_StaticFields *v25; // x9
  const MethodInfo_47A29F8 *v26; // x0

  if ( (byte_59745B0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&Method_BattleScriptRootComponent___c__TransitionWarBoard_b__50_0__);
    sub_2213A60(&BattleScriptRootComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_26831/*"バトルスクリプトエラー"*/);
    sub_2213A60(&StringLiteral_26832/*"バトル前スクリプト以外のトークから聖杯戦争盤へ移動することはできません。\nターミナルへ戻ります。"*/);
    byte_59745B0 = 1;
  }
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
  ScriptManager__DeleteTalkResumeInfo(0);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    goto LABEL_32;
  if ( talkInfo->fields.talkType != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (CommonUI_o *)Instance;
    v11 = BattleScriptRootComponent___c_TypeInfo;
    if ( !*(&BattleScriptRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleScriptRootComponent___c_TypeInfo, v4);
      v11 = BattleScriptRootComponent___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__50_0 = static_fields->__9__50_0;
    v14 = (System_String_o *)StringLiteral_26832/*"バトル前スクリプト以外のトークから聖杯戦争盤へ移動することはできません。\nターミナルへ戻ります。"*/;
    v15 = (System_String_o *)StringLiteral_26831/*"バトルスクリプトエラー"*/;
    if ( !_9__50_0 )
    {
      if ( !*(&v11->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v11, v4);
        static_fields = BattleScriptRootComponent___c_TypeInfo->static_fields;
      }
      v16 = (Il2CppObject *)static_fields->__9;
      _9__50_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(_9__50_0, v16, Method_BattleScriptRootComponent___c__TransitionWarBoard_b__50_0__, 0);
      v17 = BattleScriptRootComponent___c_TypeInfo->static_fields;
      v17->__9__50_0 = _9__50_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->__9__50_0, (int32_t)_9__50_0, v18, v19, v20, v21, v22, v23);
    }
    if ( v10 )
    {
      CommonUI__OpenNotificationDialog(v10, v15, v14, _9__50_0, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
      return;
    }
    goto LABEL_32;
  }
  bSetupInfo = talkInfo->fields.bSetupInfo;
  if ( !bSetupInfo )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
    if ( !byte_596ABDE )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596ABDE = 1;
    }
    v24 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
      v24 = TerminalPramsManager_TypeInfo;
    }
    v25 = v24->static_fields;
    v26 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
    v25->_IsAutoResume_k__BackingField = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance(v26);
    if ( Instance )
    {
      v9 = 34;
      v8 = 0;
      goto LABEL_30;
    }
LABEL_32:
    sub_2213CDC(Instance, v4);
  }
  if ( bSetupInfo->fields.isScriptBeforePartySelect )
  {
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v4);
    bSetupInfo->fields.selectedBranchIdx = ScriptManager__GetSelectBranchIndex(0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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

  if ( (byte_59745B8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleScriptRootComponent__ChapterStartEffect_b__43_1__);
    byte_59745B8 = 1;
  }
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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
  if ( (byte_59745B9 & 1) == 0 )
  {
    this = (BattleScriptRootComponent_o *)sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_59745B9 = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo )
    sub_2213CDC(this, method);
  wId = talkInfo->fields.wId;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  TerminalPramsManager__SetWarStartedId(wId, 0);
  BattleScriptRootComponent__EndChapterStart(v2, v5);
}


void BattleScriptRootComponent___ChapterStartQuest_b__42_0(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  BattleScriptRootComponent_o *v2; // x19
  BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x20
  ScriptManager_c *v4; // x0
  int v5; // w9
  struct BattleScriptRootComponent_TalkScriptInfo_o *v6; // x8
  Il2CppObject *WarEntityByWarID; // x0
  __int64 v8; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *v9; // x8
  const MethodInfo *v10; // x1
  TerminalPramsManager_c *v11; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  const MethodInfo_47A2F30 *v13; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o *v14; // x8
  bool v15; // w20
  TerminalPramsManager_c *v16; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_59745B7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_WarMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    this = (BattleScriptRootComponent_o *)sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_59745B7 = 1;
  }
  talkInfo = v2->fields.talkInfo;
  entity = 0;
  if ( !talkInfo )
    goto LABEL_29;
  v4 = ScriptManager_TypeInfo;
  v5 = *(&ScriptManager_TypeInfo->_2.cctor_finished + 1);
  ++talkInfo->fields.pId;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(v4, method);
  ScriptManager__SaveTalkResumeInfo(talkInfo, 0);
  this = (BattleScriptRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  v6 = v2->fields.talkInfo;
  if ( !v6 || !this )
    goto LABEL_29;
  WarEntityByWarID = (Il2CppObject *)QuestTree__mfGetWarEntityByWarID((QuestTree_o *)this, v6->fields.wId, 0);
  entity = WarEntityByWarID;
  if ( !WarEntityByWarID )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
    this = (BattleScriptRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarMaster___);
    v9 = v2->fields.talkInfo;
    if ( !v9 || !this )
      goto LABEL_29;
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
      &entity,
      v9->fields.wId,
      (const MethodInfo_3F10B80 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    WarEntityByWarID = entity;
    if ( !entity )
      goto LABEL_28;
  }
  if ( !WarEntity__HasFlag((WarEntity_o *)WarEntityByWarID, 0x8000, 0) )
    goto LABEL_28;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10);
  if ( !byte_596D195 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D195 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10);
    v11 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v11->static_fields;
  v13 = (const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__;
  static_fields->_IsPhaseClear_k__BackingField = 1;
  this = (BattleScriptRootComponent_o *)SingletonTemplate_object___get_Instance(v13);
  v14 = v2->fields.talkInfo;
  if ( !v14 || !this )
LABEL_29:
    sub_2213CDC(this, method);
  v15 = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)this, v14->fields.qId, 0, 0);
  if ( !byte_596D194 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D194 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_IsQuestClear_k__BackingField = v15;
LABEL_28:
  BattleScriptRootComponent__ChapterStartEffectQuest(v2, v10);
}


void BattleScriptRootComponent___ChapterStart_b__41_0(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  BattleScriptRootComponent_o *v2; // x19
  BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x20
  ScriptManager_c *v4; // x0
  int v5; // w9
  const MethodInfo *v6; // x1

  v2 = this;
  if ( (byte_59745B6 & 1) == 0 )
  {
    this = (BattleScriptRootComponent_o *)sub_2213A60(&ScriptManager_TypeInfo);
    byte_59745B6 = 1;
  }
  talkInfo = v2->fields.talkInfo;
  if ( !talkInfo )
    sub_2213CDC(this, method);
  v4 = ScriptManager_TypeInfo;
  v5 = *(&ScriptManager_TypeInfo->_2.cctor_finished + 1);
  ++talkInfo->fields.pId;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(v4, method);
  ScriptManager__SaveTalkResumeInfo(talkInfo, 0);
  BattleScriptRootComponent__ChapterStartEffect(v2, v6);
}


void BattleScriptRootComponent___EndRequestBattleScenario_b__39_0(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8

  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_2213CDC(this, method);
  BattleScriptRootComponent__ProcessBattleScripts(this, talkInfo->fields.talkPhase, v2);
}


void BattleScriptRootComponent___StartDemoBeforeBattle_b__29_0(
        BattleScriptRootComponent_o *this,
        System_String_o *demoInfo,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 bSetupInfo; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v15; // x8

  if ( (byte_59745B4 & 1) == 0 )
  {
    sub_2213A60(&BattleSetupInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_59745B4 = 1;
  }
  if ( demoInfo )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        bSetupInfo = (__int64)talkInfo->fields.bSetupInfo;
        if ( !bSetupInfo )
        {
          bSetupInfo = sub_2213CCC(BattleSetupInfo_TypeInfo);
          BattleSetupInfo___ctor((BattleSetupInfo_o *)bSetupInfo, 0);
          v15 = this->fields.talkInfo;
          if ( !v15 || !bSetupInfo )
            goto LABEL_13;
          *(_QWORD *)(bSetupInfo + 20) = *(_QWORD *)&v15->fields.qId;
        }
        *(_QWORD *)(bSetupInfo + 104) = demoInfo;
        *(_WORD *)(bSetupInfo + 96) = 1;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(bSetupInfo + 104),
          (int32_t)demoInfo,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 50, 1, (Il2CppObject *)bSetupInfo, 0);
          return;
        }
      }
    }
LABEL_13:
    sub_2213CDC(Instance, v6);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 bSetupInfo; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v15; // x8

  if ( (byte_59745B2 & 1) == 0 )
  {
    sub_2213A60(&BattleSetupInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_59745B2 = 1;
  }
  if ( demoInfo )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        bSetupInfo = (__int64)talkInfo->fields.bSetupInfo;
        if ( !bSetupInfo )
        {
          bSetupInfo = sub_2213CCC(BattleSetupInfo_TypeInfo);
          BattleSetupInfo___ctor((BattleSetupInfo_o *)bSetupInfo, 0);
          v15 = this->fields.talkInfo;
          if ( !v15 || !bSetupInfo )
            goto LABEL_13;
          *(_QWORD *)(bSetupInfo + 20) = *(_QWORD *)&v15->fields.qId;
        }
        *(_QWORD *)(bSetupInfo + 104) = demoInfo;
        *(_WORD *)(bSetupInfo + 96) = 256;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(bSetupInfo + 104),
          (int32_t)demoInfo,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 50, 1, (Il2CppObject *)bSetupInfo, 0);
          return;
        }
      }
    }
LABEL_13:
    sub_2213CDC(Instance, v6);
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

  if ( (byte_59745B5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleScriptRootComponent_TransitionTerminal__);
    byte_59745B5 = 1;
  }
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v4, 0);
}


void BattleScriptRootComponent___StartScript_b__14_0(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8

  talkInfo = this->fields.talkInfo;
  if ( !talkInfo )
    sub_2213CDC(this, method);
  BattleScriptRootComponent__ProcessBattleScripts(this, talkInfo->fields.talkPhase, v2);
}


void BattleScriptRootComponent___StartSecondDemoFinishBattle_b__26_0(
        BattleScriptRootComponent_o *this,
        System_String_o *demoInfo,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 bSetupInfo; // x21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v15; // x8
  System_Action_o *v16; // x20
  const MethodInfo *v17; // x2

  if ( (byte_59745B3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleScriptRootComponent__StartSecondDemoFinishBattle_b__26_1__);
    sub_2213A60(&BattleSetupInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_59745B3 = 1;
  }
  if ( demoInfo )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
      talkInfo = this->fields.talkInfo;
      if ( talkInfo )
      {
        bSetupInfo = (__int64)talkInfo->fields.bSetupInfo;
        if ( !bSetupInfo )
        {
          bSetupInfo = sub_2213CCC(BattleSetupInfo_TypeInfo);
          BattleSetupInfo___ctor((BattleSetupInfo_o *)bSetupInfo, 0);
          v15 = this->fields.talkInfo;
          if ( !v15 || !bSetupInfo )
            goto LABEL_15;
          *(_QWORD *)(bSetupInfo + 20) = *(_QWORD *)&v15->fields.qId;
        }
        *(_QWORD *)(bSetupInfo + 104) = demoInfo;
        *(_WORD *)(bSetupInfo + 96) = 0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(bSetupInfo + 104),
          (int32_t)demoInfo,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 50, 1, (Il2CppObject *)bSetupInfo, 0);
          return;
        }
      }
    }
LABEL_15:
    sub_2213CDC(Instance, v6);
  }
  if ( this->fields.setEndRoll )
  {
    v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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


void BattleScriptRootComponent___TransitionTerminalCoroutine_b__48_0(
        BattleScriptRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  __int64 v8; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  __int64 v10; // x1
  int32_t WarId; // w19
  Il2CppObject *v12; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_59745BA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_WarMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59745BA = 1;
  }
  entity = 0;
  v12 = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  if ( CommonUI__maskFadeIsDisp((CommonUI_o *)Instance, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 1, 0);
  }
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v5);
  ScriptManager__DeleteMovieResumeInfo(0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
  Instance = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestMaster___);
  talkInfo = this->fields.talkInfo;
  if ( !talkInfo || !Instance )
    goto LABEL_26;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          talkInfo->fields.qId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
  Instance = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !entity )
    goto LABEL_26;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (Il2CppObject *)QuestEntity__GetWarId((QuestEntity_o *)entity, 0);
  if ( !v9 )
    goto LABEL_26;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               v9,
                               &v12,
                               (int32_t)Instance,
                               (const MethodInfo_3F10B80 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return;
  if ( !v12 || (Instance = entity) == 0 )
LABEL_26:
    sub_2213CDC(Instance, v4);
  if ( HIDWORD(v12[6].klass) == LODWORD(entity[1].klass) )
  {
    WarId = QuestEntity__GetWarId((QuestEntity_o *)entity, 0);
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v10);
    ScriptManager__SavePlayedLastMovie(WarId, 0);
  }
}


void BattleScriptRootComponent__beginInitialize(BattleScriptRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_597458D & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_597458D = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_2213CDC(Instance, v4);
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
    sub_2213CDC(0, data);
  BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(talkInfo, 0, method);
  BattleScriptRootComponent__StartScript(this, v5);
}


void BattleScriptRootComponent__beginStartUp(
        BattleScriptRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
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

  if ( (byte_597458E & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_WarMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    sub_2213A60(&StringLiteral_6672/*"FES_WAR_ID"*/);
    byte_597458E = 1;
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
    sub_221405C(data, v10, method);
LABEL_9:
    this->fields.talkInfo = 0;
    p_talkInfo = &this->fields.talkInfo;
  }
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_talkInfo,
    (int32_t)data,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v15 = *p_talkInfo;
  if ( !*p_talkInfo )
    goto LABEL_25;
  if ( v15->fields.restoreLine )
  {
    talkPhase = v15->fields.talkPhase;
    if ( talkPhase <= 0xB && ((1 << talkPhase) & 0x954) != 0 && !v15->fields.isTitleResume )
    {
      if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v14);
      BgmManager__SetMute(1, 0);
      v15 = *p_talkInfo;
      if ( !*p_talkInfo )
        goto LABEL_25;
    }
  }
  v15->fields.isTitleResume = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_WarMaster___),
        !*p_talkInfo)
    || !Instance )
  {
LABEL_25:
    sub_2213CDC(Instance, v14);
  }
  QuestId = WarMaster__getByLastQuestId((WarMaster_o *)Instance, (*p_talkInfo)->fields.qId, 0);
  if ( QuestId )
  {
    id = QuestId->fields.id;
    v19 = id == ConstantMaster__getValue((System_String_o *)StringLiteral_6672/*"FES_WAR_ID"*/, 0);
  }
  else
  {
    v19 = 0;
  }
  this->fields.setEndRoll = v19;
  SceneRootComponent__beginStartUp_48466984((SceneRootComponent_o *)this, 0);
}


void BattleScriptRootComponent_TalkScriptInfo___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_59745C4 & 1) == 0 )
  {
    sub_2213A60(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    sub_2213A60(&StringLiteral_1395/*"2.0"*/);
    byte_59745C4 = 1;
  }
  v7 = StringLiteral_1395/*"2.0"*/;
  BattleScriptRootComponent_TalkScriptInfo_TypeInfo->static_fields->TalkResumeVersion = (struct System_String_o *)StringLiteral_1395/*"2.0"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleScriptRootComponent_TalkScriptInfo_TypeInfo->static_fields,
    v7,
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


void BattleScriptRootComponent_TalkScriptInfo___ctor_55224020(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        BattleScriptRootComponent_TalkScriptSaveInfo_o *saveInfo,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  BattleSetupInfo_BattleSetupSaveInfo_o *bSetupInfo; // x22
  BattleSetupInfo_o *v14; // x21
  struct BattleSetupInfo_o **p_bSetupInfo; // x20
  bool isAfterOrganization; // w8

  if ( (byte_59745BE & 1) == 0 )
  {
    sub_2213A60(&BattleSetupInfo_TypeInfo);
    byte_59745BE = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !saveInfo )
    sub_2213CDC(v5, v6);
  bSetupInfo = saveInfo->fields.bSetupInfo;
  *(_OWORD *)&this->fields.wId = *(_OWORD *)&saveInfo->fields.wId;
  *(_QWORD *)&this->fields.talkPhase = *(_QWORD *)&saveInfo->fields.talkPhase;
  if ( bSetupInfo )
  {
    v14 = (BattleSetupInfo_o *)sub_2213CCC(BattleSetupInfo_TypeInfo);
    BattleSetupInfo___ctor_48583600(v14, bSetupInfo, 0);
  }
  else
  {
    v14 = 0;
  }
  this->fields.bSetupInfo = v14;
  p_bSetupInfo = &this->fields.bSetupInfo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_bSetupInfo, (int32_t)v14, v7, v8, v9, v10, v11, v12);
  isAfterOrganization = saveInfo->fields.isAfterOrganization;
  *((_BYTE *)p_bSetupInfo + 9) = 0;
  *((_BYTE *)p_bSetupInfo + 10) = isAfterOrganization;
}


void BattleScriptRootComponent_TalkScriptInfo___ctor_55224200(
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
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

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
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v16, 0, v18, v19, v20, v21, v22, v23);
  *(_WORD *)((char *)&v16->monitor + 1) = 0;
}


void BattleScriptRootComponent_TalkScriptInfo___ctor_55224332(
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
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  const MethodInfo *v24; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.wId = war;
  this->fields.qId = quest;
  this->fields.pId = phase;
  this->fields.talkType = type;
  BattleScriptRootComponent_TalkScriptInfo__setWinLoseInfo(this, winLose, winResult, v17);
  this->fields.bSetupInfo = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.bSetupInfo, 0, v18, v19, v20, v21, v22, v23);
  this->fields._IsAfterOrganization_k__BackingField = 0;
  BattleScriptRootComponent_TalkScriptInfo__SetBasePhaseOfType(this, type, isPlayedScript, v24);
  this->fields.restoreLine = 0;
}


void BattleScriptRootComponent_TalkScriptInfo___ctor_55224596(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        BattleSetupInfo_o *battleInfo,
        int32_t type,
        int32_t winLose,
        int32_t winResult,
        bool isPlayedScript,
        bool isOrganized,
        const MethodInfo *method)
{
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x3
  struct BattleSetupInfo_o *bSetupInfo; // x8
  __int64 v25; // d0
  const MethodInfo *v26; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.bSetupInfo = battleInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.bSetupInfo,
    (int32_t)battleInfo,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  bSetupInfo = this->fields.bSetupInfo;
  if ( !bSetupInfo )
    sub_2213CDC(v21, v22);
  v25 = *(_QWORD *)&bSetupInfo->fields.warId;
  this->fields.talkType = type;
  *(_QWORD *)&this->fields.wId = v25;
  this->fields.pId = bSetupInfo->fields.questPhase;
  BattleScriptRootComponent_TalkScriptInfo__setWinLoseInfo(this, winLose, winResult, v23);
  this->fields._IsAfterOrganization_k__BackingField = isOrganized;
  BattleScriptRootComponent_TalkScriptInfo__SetBasePhaseOfType(this, type, isPlayedScript, v26);
  this->fields.restoreLine = 0;
}


BattleScriptRootComponent_TalkScriptSaveInfo_o *BattleScriptRootComponent_TalkScriptInfo__GetInfoForSave(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  BattleScriptRootComponent_TalkScriptInfo_c *v11; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_StaticFields *static_fields; // x8
  struct System_String_o *TalkResumeVersion; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  BattleSetupInfo_o *bSetupInfo; // x0
  BattleSetupInfo_BattleSetupSaveInfo_o *InfoForSave; // x1
  BattleScriptRootComponent_TalkScriptSaveInfo_o *result; // x0

  if ( (byte_59745BF & 1) == 0 )
  {
    sub_2213A60(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    sub_2213A60(&BattleScriptRootComponent_TalkScriptSaveInfo_TypeInfo);
    byte_59745BF = 1;
  }
  v3 = sub_2213CCC(BattleScriptRootComponent_TalkScriptSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  v11 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  if ( !*(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v4);
  if ( !v3 )
    sub_2213CDC(v11, v4);
  static_fields = BattleScriptRootComponent_TalkScriptInfo_TypeInfo->static_fields;
  TalkResumeVersion = static_fields->TalkResumeVersion;
  *(_QWORD *)(v3 + 16) = static_fields->TalkResumeVersion;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)TalkResumeVersion, v5, v6, v7, v8, v9, v10);
  bSetupInfo = this->fields.bSetupInfo;
  InfoForSave = 0;
  *(_OWORD *)(v3 + 24) = *(_OWORD *)&this->fields.wId;
  *(_QWORD *)(v3 + 40) = *(_QWORD *)&this->fields.talkPhase;
  if ( bSetupInfo )
    InfoForSave = BattleSetupInfo__GetInfoForSave(bSetupInfo, 0);
  *(_QWORD *)(v3 + 48) = InfoForSave;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 48), (int32_t)InfoForSave, v14, v15, v16, v17, v18, v19);
  result = (BattleScriptRootComponent_TalkScriptSaveInfo_o *)v3;
  *(_BYTE *)(v3 + 56) = this->fields._IsAfterOrganization_k__BackingField;
  return result;
}


int32_t BattleScriptRootComponent_TalkScriptInfo__GetJumpLine(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_59745C1 & 1) == 0 )
  {
    sub_2213A60(&ScriptManager_TypeInfo);
    byte_59745C1 = 1;
  }
  if ( !this->fields.restoreLine )
    return -1;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
  return ScriptManager__GetLastLineInfo(0);
}


bool BattleScriptRootComponent_TalkScriptInfo__IsConsumeAfterBattleWin(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_59745C3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59745C3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___)) == 0
    || (Instance = (DataManager_o *)QuestMaster__getQuestEntity((QuestMaster_o *)Instance, this->fields.qId, 0)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  return QuestEntity__HasFlag((QuestEntity_o *)Instance, 0x40000000, 0);
}


bool BattleScriptRootComponent_TalkScriptInfo__IsRestorable(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x20
  int32_t qId; // w21
  int32_t pId; // w22
  System_String_o *CachedSelectedBranchQuestId; // x0
  __int64 v8; // x1
  int32_t ScriptQuestId; // w20
  const MethodInfo *v10; // x1
  int32_t winResult; // w0
  int32_t talkType; // w8
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  int32_t v15; // w22
  ScriptManager_o *v16; // x21
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  int32_t v19; // w21
  ScriptManager_o *v20; // x19
  int32_t v21; // w21
  Il2CppObject *Instance; // x0
  __int64 v23; // x1
  int32_t v24; // w23
  ScriptManager_o *v25; // x22
  Il2CppObject *v26; // x0
  __int64 v27; // x1
  int32_t v28; // w22
  __int64 v29; // x1

  if ( (byte_59745C2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_QuestMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_59745C2 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestMaster___);
  qId = this->fields.qId;
  pId = this->fields.pId;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v3);
  CachedSelectedBranchQuestId = (System_String_o *)ScriptManager__GetCachedSelectedBranchQuestId(qId, pId, 0);
  if ( !Master_object )
    goto LABEL_30;
  ScriptQuestId = QuestMaster__getScriptQuestId((QuestMaster_o *)Master_object, (int32_t)CachedSelectedBranchQuestId, 0);
  winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(this, v10);
  talkType = this->fields.talkType;
  if ( talkType == 4 )
  {
    v21 = winResult;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v24 = this->fields.pId;
    v25 = (ScriptManager_o *)Instance;
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v23);
    CachedSelectedBranchQuestId = ScriptManager__GetScriptName_BattleEnd2(ScriptQuestId, v24, v21, 0);
    if ( v25 )
    {
      if ( ScriptManager__IsExistScriptFile(v25, CachedSelectedBranchQuestId, 0) )
        return 1;
      v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      v28 = this->fields.pId;
      v20 = (ScriptManager_o *)v26;
      if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v27);
      CachedSelectedBranchQuestId = ScriptManager__GetScriptName_BattleEnd(ScriptQuestId, v28, v21, 0);
      if ( v20 )
        goto LABEL_25;
    }
    goto LABEL_30;
  }
  if ( talkType != 3 )
    return 1;
  v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  v15 = this->fields.pId;
  v16 = (ScriptManager_o *)v13;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v14);
  CachedSelectedBranchQuestId = ScriptManager__GetScriptName_BattleStart(ScriptQuestId, v15, 0);
  if ( !v16 )
LABEL_30:
    sub_2213CDC(CachedSelectedBranchQuestId, v8);
  if ( ScriptManager__IsExistScriptFile(v16, CachedSelectedBranchQuestId, 0) )
    return 1;
  v17 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  v19 = this->fields.pId;
  v20 = (ScriptManager_o *)v17;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v18);
  CachedSelectedBranchQuestId = ScriptManager__GetScriptName_BattleStart2(ScriptQuestId, v19, 0);
  if ( !v20 )
    goto LABEL_30;
LABEL_25:
  if ( ScriptManager__IsExistScriptFile(v20, CachedSelectedBranchQuestId, 0) )
    return 1;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v29);
  ScriptManager__DeleteTalkResumeInfo(0);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t v6; // w8
  int32_t talkPhase; // w8
  struct BattleSetupInfo_o *bSetupInfo; // x9

  if ( (byte_59745C0 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&ScriptManager_TypeInfo);
    byte_59745C0 = 1;
  }
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, isExit);
  ScriptManager__DeleteLineInfo(0);
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v5);
  BgmManager__SetMute(0, 0);
  this->fields.restoreLine = 0;
  if ( isExit )
  {
LABEL_8:
    v6 = 10;
LABEL_9:
    this->fields.talkPhase = v6;
    return;
  }
  talkPhase = this->fields.talkPhase;
  if ( talkPhase <= 5 )
  {
    if ( talkPhase > 2 )
    {
      if ( talkPhase == 3 )
      {
        v6 = 4;
        goto LABEL_9;
      }
      if ( talkPhase == 4 )
      {
        bSetupInfo = this->fields.bSetupInfo;
        v6 = 11;
        if ( bSetupInfo )
        {
          if ( bSetupInfo->fields.isScriptBeforePartySelect )
            v6 = 5;
          else
            v6 = 11;
        }
        goto LABEL_9;
      }
    }
    else
    {
      if ( talkPhase == 1 )
      {
        v6 = 2;
        goto LABEL_9;
      }
      if ( talkPhase == 2 )
      {
        v6 = 3;
        goto LABEL_9;
      }
    }
  }
  else
  {
    if ( talkPhase <= 7 )
    {
      if ( talkPhase == 6 )
        v6 = 7;
      else
        v6 = 8;
      goto LABEL_9;
    }
    switch ( talkPhase )
    {
      case 8:
        v6 = 9;
        goto LABEL_9;
      case 9:
        goto LABEL_8;
      case 11:
        v6 = 5;
        goto LABEL_9;
    }
  }
}


void BattleScriptRootComponent_TalkScriptInfo__SetBasePhaseOfType(
        BattleScriptRootComponent_TalkScriptInfo_o *this,
        int32_t type,
        bool isPlayedScript,
        const MethodInfo *method)
{
  int32_t v4; // w8
  struct BattleSetupInfo_o *bSetupInfo; // x8

  if ( type > 4 )
  {
    if ( type == 6 )
    {
      v4 = 1;
      goto LABEL_16;
    }
    if ( type != 5 )
      goto LABEL_14;
  }
  else if ( type != 3 )
  {
    if ( type == 4 )
    {
      v4 = 6;
      goto LABEL_16;
    }
LABEL_14:
    v4 = 0;
    goto LABEL_16;
  }
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
LABEL_16:
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
    if ( (v6 & 0x81E) != 0 )
    {
LABEL_12:
      this->fields.talkPhase = v5;
      return;
    }
    if ( (v6 & 0x3C0) != 0 )
    {
      v5 = 6;
      goto LABEL_12;
    }
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

  if ( (byte_59745BB & 1) == 0 )
  {
    sub_2213A60(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    byte_59745BB = 1;
  }
  v3 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  winLoseInfo = this->fields.winLoseInfo;
  if ( !*(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleScriptRootComponent_TalkScriptInfo_TypeInfo, method);
    v3 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  }
  WinResultMultiplicationValue = v3->static_fields->WinResultMultiplicationValue;
  if ( winLoseInfo % WinResultMultiplicationValue != 1 )
    return 0;
  v6 = this->fields.winLoseInfo;
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, method);
    WinResultMultiplicationValue = BattleScriptRootComponent_TalkScriptInfo_TypeInfo->static_fields->WinResultMultiplicationValue;
  }
  v7 = v6 / WinResultMultiplicationValue;
  if ( !byte_5969ADF )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969ADF = 1;
  }
  v8 = (float)v7;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
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

  if ( (byte_59745BD & 1) == 0 )
  {
    sub_2213A60(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    byte_59745BD = 1;
  }
  v3 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
  winLoseInfo = this->fields.winLoseInfo;
  if ( !*(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleScriptRootComponent_TalkScriptInfo_TypeInfo, method);
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
  return (this->fields.talkPhase < 0xCu) & (0x954u >> this->fields.talkPhase);
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
  int v8; // w8
  int win_lose; // w0

  if ( (byte_59745BC & 1) == 0 )
  {
    sub_2213A60(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    byte_59745BC = 1;
  }
  if ( winLose == 1 )
  {
    v7 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
    v8 = *(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo->_2.cctor_finished + 1);
    if ( (winResult & 0xFFFFFFFE) == 2 )
    {
      if ( !v8 )
      {
        j_il2cpp_runtime_class_init_0(BattleScriptRootComponent_TalkScriptInfo_TypeInfo, *(_QWORD *)&winLose);
        v7 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
      }
      win_lose = v7->static_fields->WinResultMultiplicationValue * winResult + 1;
    }
    else
    {
      if ( !v8 )
      {
        j_il2cpp_runtime_class_init_0(BattleScriptRootComponent_TalkScriptInfo_TypeInfo, *(_QWORD *)&winLose);
        v7 = BattleScriptRootComponent_TalkScriptInfo_TypeInfo;
      }
      win_lose = v7->static_fields->WinResultMultiplicationValue + 1;
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  void *questPhaseEntity_5__2; // x0
  struct BattleScriptRootComponent_o *_4__this; // x28
  System_Action_o *callback; // x0
  Il2CppObject *v13; // x21
  struct BattleScriptRootComponent___c__DisplayClass15_0_o **p__8__1; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x1
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkInfo; // x8
  QuestPhaseEntity_o *v29; // x21
  struct System_String_o *MovieFolder; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  const MethodInfo *v37; // x2
  struct BattleScriptRootComponent___c__DisplayClass15_0_o *v38; // x22
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  struct CommonUI_o *commonUI; // x8
  struct MovieFileMerge_o *MovieFileMerge_k__BackingField; // x1
  struct MovieFileMerge_o **p_movieFileMerge_5__4; // x22
  struct BattleScriptRootComponent_TalkScriptInfo_o *v54; // x8
  int v55; // w23
  struct BattleScriptRootComponent___c__DisplayClass15_0_o *_8__1; // x8
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  MovieFileMerge_o *movieFileMerge_5__4; // x20
  System_String_o *folder_5__3; // x21
  Il2CppObject *v77; // x0
  Il2CppObject **p__2__current; // x19
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  int v85; // w8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v86; // x8
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  struct BattleScriptRootComponent___c__DisplayClass15_0_o *v93; // x8
  struct System_String_o *v94; // x1
  __int64 v95; // x1
  struct System_String_o *v96; // x0
  System_String_o *v97; // x2
  System_String_o *v98; // x3
  int32_t v99; // w4
  int32_t v100; // w5
  bool v101; // w6
  bool v102; // w7
  struct System_String_o *v103; // x0
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7
  struct System_String_o *v110; // x0
  System_String_o *v111; // x2
  System_String_o *v112; // x3
  int32_t v113; // w4
  int32_t v114; // w5
  bool v115; // w6
  bool v116; // w7
  struct BattleScriptRootComponent___c__DisplayClass15_0_o *v117; // x20
  int32_t downloadState; // w8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v119; // x8
  CommonUI_o *v120; // x23
  int32_t qId; // w21
  int32_t pId; // w22
  CommonConfirmDialog_ClickDelegate_o *_9__0; // x24
  System_String_o *v124; // x2
  System_String_o *v125; // x3
  int32_t v126; // w4
  int32_t v127; // w5
  bool v128; // w6
  bool v129; // w7
  struct BattleScriptRootComponent___c__DisplayClass15_0_o *v130; // x20
  System_Action_o *_9__1; // x25
  System_String_o *v132; // x2
  System_String_o *v133; // x3
  int32_t v134; // w4
  int32_t v135; // w5
  bool v136; // w6
  bool v137; // w7
  System_String_o *skipDialogTitle_5__5; // x21
  System_String_o *skipDialogMessage_5__6; // x23
  System_String_o *skipDialogDecideText_5__7; // x24
  System_String_o *skipDialogCancelText_5__8; // x25
  CommonConfirmDialog_ClickDelegate_o *_9__2; // x26
  CommonUI_o *v143; // x22
  System_String_o *v144; // x2
  System_String_o *v145; // x3
  int32_t v146; // w4
  int32_t v147; // w5
  bool v148; // w6
  bool v149; // w7
  struct BattleScriptRootComponent___c__DisplayClass15_0_o *v150; // x8
  Il2CppObject **v151; // x19
  __int64 v152; // x20
  System_String_o *v153; // x2
  System_String_o *v154; // x3
  int32_t v155; // w4
  int32_t v156; // w5
  bool v157; // w6
  bool v158; // w7
  struct System_String_o *v159; // x1
  struct System_String_o *v160; // x1
  System_String_o *v161; // x2
  System_String_o *v162; // x3
  int32_t v163; // w4
  int32_t v164; // w5
  bool v165; // w6
  bool v166; // w7
  struct System_String_o *v167; // x1
  System_String_o *v168; // x2
  System_String_o *v169; // x3
  int32_t v170; // w4
  int32_t v171; // w5
  bool v172; // w6
  bool v173; // w7
  struct System_String_o *v174; // x1
  System_String_o *v175; // x2
  System_String_o *v176; // x3
  int32_t v177; // w4
  int32_t v178; // w5
  bool v179; // w6
  bool v180; // w7
  Il2CppObject *v181; // x23
  CommonUI_o *klass; // x21
  System_String_o *v183; // x22
  System_Action_o *v184; // x24
  Il2CppObject *v185; // x0
  System_String_o *v186; // x2
  System_String_o *v187; // x3
  int32_t v188; // w4
  int32_t v189; // w5
  bool v190; // w6
  bool v191; // w7

  if ( (byte_59745CD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&ConnectMark_DownloadCancelDialogData_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&Method_BattleScriptRootComponent___c__DisplayClass15_0__StartMovie_b__0__);
    sub_2213A60(&Method_BattleScriptRootComponent___c__DisplayClass15_0__StartMovie_b__1__);
    sub_2213A60(&Method_BattleScriptRootComponent___c__DisplayClass15_0__StartMovie_b__2__);
    sub_2213A60(&Method_BattleScriptRootComponent___c__DisplayClass15_0__StartMovie_b__3__);
    sub_2213A60(&BattleScriptRootComponent___c__DisplayClass15_0_TypeInfo);
    sub_2213A60(&StringLiteral_5218/*"DOWNLOAD_QUEST_MOVIE_CANCEL_DIALOG_DECIDE"*/);
    sub_2213A60(&StringLiteral_3826/*"COMMON_CONFIRM_BACK"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_5219/*"DOWNLOAD_QUEST_MOVIE_CANCEL_DIALOG_MESSAGE"*/);
    byte_59745CD = 1;
  }
  _1__state = this->fields.__1__state;
  questPhaseEntity_5__2 = 0;
  if ( _1__state > 1 )
  {
    if ( _1__state != 2 )
    {
      if ( _1__state != 3 )
        return (char)questPhaseEntity_5__2;
      callback = this->fields.callback;
      this->fields.__1__state = -1;
LABEL_75:
      ActionExtensions__Call(callback, 0);
      LOBYTE(questPhaseEntity_5__2) = 0;
      return (char)questPhaseEntity_5__2;
    }
    _8__1 = this->fields.__8__1;
    this->fields.__1__state = -1;
    if ( !_8__1 )
      goto LABEL_83;
    if ( _8__1->fields.isCancel )
      goto LABEL_74;
    this->fields._skipDialogTitle_5__5 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._skipDialogTitle_5__5, 0, v2, v3, v4, v5, v6, v7);
    this->fields._skipDialogMessage_5__6 = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._skipDialogMessage_5__6,
      0,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
    this->fields._skipDialogDecideText_5__7 = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._skipDialogDecideText_5__7,
      0,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
    this->fields._skipDialogCancelText_5__8 = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._skipDialogCancelText_5__8,
      0,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
LABEL_35:
    questPhaseEntity_5__2 = this->fields._questPhaseEntity_5__2;
    if ( questPhaseEntity_5__2 )
    {
      folder_5__3 = this->fields._folder_5__3;
      movieFileMerge_5__4 = this->fields._movieFileMerge_5__4;
      questPhaseEntity_5__2 = (void *)QuestPhaseEntity__IsEnableSkipMovie(
                                        (QuestPhaseEntity_o *)questPhaseEntity_5__2,
                                        0);
      if ( movieFileMerge_5__4 )
      {
        MovieFileMerge__Initialize(movieFileMerge_5__4, folder_5__3, (unsigned __int8)questPhaseEntity_5__2 & 1, 0);
        questPhaseEntity_5__2 = this->fields._movieFileMerge_5__4;
        if ( questPhaseEntity_5__2 )
        {
          v77 = (Il2CppObject *)MovieFileMerge__PlayMP4((MovieFileMerge_o *)questPhaseEntity_5__2, 0);
          this->fields.__2__current = v77;
          p__2__current = &this->fields.__2__current;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v77, v79, v80, v81, v82, v83, v84);
          v85 = 3;
          goto LABEL_82;
        }
      }
    }
    goto LABEL_83;
  }
  _4__this = this->fields.__4__this;
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v13 = (Il2CppObject *)sub_2213CCC(BattleScriptRootComponent___c__DisplayClass15_0_TypeInfo);
    System_Object___ctor(v13, 0);
    this->fields.__8__1 = (struct BattleScriptRootComponent___c__DisplayClass15_0_o *)v13;
    p__8__1 = &this->fields.__8__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__8__1, (int32_t)v13, v15, v16, v17, v18, v19, v20);
    this->fields._questPhaseEntity_5__2 = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._questPhaseEntity_5__2,
      0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v27);
    questPhaseEntity_5__2 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !_4__this )
      goto LABEL_83;
    talkInfo = _4__this->fields.talkInfo;
    if ( !talkInfo || !questPhaseEntity_5__2 )
      goto LABEL_83;
    if ( !QuestPhaseMaster__TryGetEntity(
            (QuestPhaseMaster_o *)questPhaseEntity_5__2,
            &this->fields._questPhaseEntity_5__2,
            talkInfo->fields.qId,
            talkInfo->fields.pId,
            0) )
      goto LABEL_74;
    v29 = this->fields._questPhaseEntity_5__2;
    questPhaseEntity_5__2 = UserGameMaster__getSelfUserGame(0);
    if ( !questPhaseEntity_5__2 || !v29 )
      goto LABEL_83;
    MovieFolder = QuestPhaseEntity__GetMovieFolder(v29, *((_DWORD *)questPhaseEntity_5__2 + 19), 0);
    this->fields._folder_5__3 = MovieFolder;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._folder_5__3,
      (int32_t)MovieFolder,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    if ( System_String__IsNullOrEmpty(this->fields._folder_5__3, 0) )
      goto LABEL_74;
    questPhaseEntity_5__2 = _4__this->fields.talkInfo;
    if ( !questPhaseEntity_5__2 )
      goto LABEL_83;
    if ( *((_DWORD *)questPhaseEntity_5__2 + 8) == 1 )
      BattleScriptRootComponent_TalkScriptInfo__ProceedQuestTalkPhase(
        (BattleScriptRootComponent_TalkScriptInfo_o *)questPhaseEntity_5__2,
        0,
        v37);
    v38 = *p__8__1;
    questPhaseEntity_5__2 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v38 )
      goto LABEL_83;
    v38->fields.commonUI = (struct CommonUI_o *)questPhaseEntity_5__2;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v38->fields,
      (int32_t)questPhaseEntity_5__2,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    if ( !*p__8__1 )
      goto LABEL_83;
    commonUI = (*p__8__1)->fields.commonUI;
    if ( !commonUI )
      goto LABEL_83;
    MovieFileMerge_k__BackingField = commonUI->fields._MovieFileMerge_k__BackingField;
    this->fields._movieFileMerge_5__4 = MovieFileMerge_k__BackingField;
    p_movieFileMerge_5__4 = &this->fields._movieFileMerge_5__4;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._movieFileMerge_5__4,
      (int32_t)MovieFileMerge_k__BackingField,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    questPhaseEntity_5__2 = this->fields._questPhaseEntity_5__2;
    if ( !questPhaseEntity_5__2 )
      goto LABEL_83;
    questPhaseEntity_5__2 = (void *)QuestPhaseEntity__GetMoviePlayType((QuestPhaseEntity_o *)questPhaseEntity_5__2, 0);
    v54 = _4__this->fields.talkInfo;
    if ( !v54 )
      goto LABEL_83;
    v55 = (int)questPhaseEntity_5__2;
    if ( v54->fields.talkType != 5 )
    {
      if ( (_DWORD)questPhaseEntity_5__2 == 1 )
      {
        if ( v54->fields.talkPhase >= 6 )
          goto LABEL_74;
      }
      else if ( (_DWORD)questPhaseEntity_5__2 == 2 && v54->fields.talkPhase < 5 )
      {
LABEL_74:
        callback = this->fields.callback;
        goto LABEL_75;
      }
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
      SoundManager__stopBgm(0);
    }
    if ( v55 == 3 )
    {
      v86 = _4__this->fields.talkInfo;
      if ( !v86 )
        goto LABEL_83;
      if ( v86->fields.talkPhase != 10 )
        goto LABEL_74;
    }
    questPhaseEntity_5__2 = *p_movieFileMerge_5__4;
    if ( !*p_movieFileMerge_5__4 )
LABEL_83:
      sub_2213CDC(questPhaseEntity_5__2, method);
    questPhaseEntity_5__2 = (void *)MovieFileMerge__ExistCRCCheckedMovieFile(
                                      (MovieFileMerge_o *)questPhaseEntity_5__2,
                                      this->fields._folder_5__3,
                                      0);
    if ( ((unsigned __int8)questPhaseEntity_5__2 & 1) == 0 )
    {
      v93 = *p__8__1;
      if ( *p__8__1 )
      {
        v93->fields.isWaitDialog = 1;
        v93->fields.isCancel = 0;
        v94 = (struct System_String_o *)StringLiteral_1/*""*/;
        v93->fields.downloadState = 1;
        this->fields._skipDialogTitle_5__5 = v94;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields._skipDialogTitle_5__5,
          (int32_t)v94,
          v87,
          v88,
          v89,
          v90,
          v91,
          v92);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v95);
        v96 = LocalizationManager__Get((System_String_o *)StringLiteral_5219/*"DOWNLOAD_QUEST_MOVIE_CANCEL_DIALOG_MESSAGE"*/, 0);
        this->fields._skipDialogMessage_5__6 = v96;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields._skipDialogMessage_5__6,
          (int32_t)v96,
          v97,
          v98,
          v99,
          v100,
          v101,
          v102);
        v103 = LocalizationManager__Get((System_String_o *)StringLiteral_5218/*"DOWNLOAD_QUEST_MOVIE_CANCEL_DIALOG_DECIDE"*/, 0);
        this->fields._skipDialogDecideText_5__7 = v103;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields._skipDialogDecideText_5__7,
          (int32_t)v103,
          v104,
          v105,
          v106,
          v107,
          v108,
          v109);
        v110 = LocalizationManager__Get((System_String_o *)StringLiteral_3826/*"COMMON_CONFIRM_BACK"*/, 0);
        this->fields._skipDialogCancelText_5__8 = v110;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields._skipDialogCancelText_5__8,
          (int32_t)v110,
          v111,
          v112,
          v113,
          v114,
          v115,
          v116);
        v117 = this->fields.__8__1;
        goto LABEL_54;
      }
      goto LABEL_83;
    }
    goto LABEL_35;
  }
  if ( _1__state != 1 )
    return (char)questPhaseEntity_5__2;
  this->fields.__1__state = -1;
  while ( 1 )
  {
    v117 = this->fields.__8__1;
    if ( !v117 )
      goto LABEL_83;
    if ( v117->fields.isWaitDialog )
    {
      this->fields.__2__current = 0;
      v151 = &this->fields.__2__current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)v151, 0, v2, v3, v4, v5, v6, v7);
      LOBYTE(questPhaseEntity_5__2) = 1;
      *((_DWORD *)v151 - 2) = 1;
      return (char)questPhaseEntity_5__2;
    }
LABEL_54:
    if ( !v117 )
      goto LABEL_83;
    downloadState = v117->fields.downloadState;
    if ( downloadState == 3 )
      break;
    v117->fields.isWaitDialog = 1;
    if ( downloadState == 2 )
    {
      skipDialogTitle_5__5 = this->fields._skipDialogTitle_5__5;
      skipDialogMessage_5__6 = this->fields._skipDialogMessage_5__6;
      skipDialogDecideText_5__7 = this->fields._skipDialogDecideText_5__7;
      skipDialogCancelText_5__8 = this->fields._skipDialogCancelText_5__8;
      _9__2 = v117->fields.__9__2;
      v143 = v117->fields.commonUI;
      if ( !_9__2 )
      {
        _9__2 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          _9__2,
          (Il2CppObject *)v117,
          Method_BattleScriptRootComponent___c__DisplayClass15_0__StartMovie_b__2__,
          0);
        v117->fields.__9__2 = _9__2;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v117->fields.__9__2,
          (int32_t)_9__2,
          v144,
          v145,
          v146,
          v147,
          v148,
          v149);
      }
      if ( !v143 )
        goto LABEL_83;
      CommonUI__OpenConfirmDialogOnFade(
        v143,
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
      v150 = this->fields.__8__1;
      if ( !v150 )
        goto LABEL_83;
      questPhaseEntity_5__2 = v150->fields.commonUI;
      if ( !questPhaseEntity_5__2 )
        goto LABEL_83;
      CommonUI__SetConfirmDialogForceCancelSE((CommonUI_o *)questPhaseEntity_5__2, 1, 0);
    }
    else if ( downloadState == 1 )
    {
      if ( !_4__this )
        goto LABEL_83;
      v119 = _4__this->fields.talkInfo;
      if ( !v119 )
        goto LABEL_83;
      v120 = v117->fields.commonUI;
      qId = v119->fields.qId;
      pId = v119->fields.pId;
      _9__0 = v117->fields.__9__0;
      if ( !_9__0 )
      {
        _9__0 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          _9__0,
          (Il2CppObject *)v117,
          Method_BattleScriptRootComponent___c__DisplayClass15_0__StartMovie_b__0__,
          0);
        v117->fields.__9__0 = _9__0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v117->fields.__9__0,
          (int32_t)_9__0,
          v124,
          v125,
          v126,
          v127,
          v128,
          v129);
      }
      v130 = this->fields.__8__1;
      if ( !v130 )
        goto LABEL_83;
      _9__1 = v130->fields.__9__1;
      if ( !_9__1 )
      {
        _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__1,
          (Il2CppObject *)v130,
          Method_BattleScriptRootComponent___c__DisplayClass15_0__StartMovie_b__1__,
          0);
        v130->fields.__9__1 = _9__1;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v130->fields.__9__1,
          (int32_t)_9__1,
          v132,
          v133,
          v134,
          v135,
          v136,
          v137);
      }
      if ( !v120 )
        goto LABEL_83;
      CommonUI__OpenDownloadMovieDialog(v120, qId, pId, _9__0, _9__1, 1, 0);
    }
  }
  if ( v117->fields.isCancel )
    goto LABEL_74;
  v152 = sub_2213CCC(ConnectMark_DownloadCancelDialogData_TypeInfo);
  ConnectMark_DownloadCancelDialogData___ctor((ConnectMark_DownloadCancelDialogData_o *)v152, 0);
  if ( !v152 )
    goto LABEL_83;
  v159 = this->fields._skipDialogTitle_5__5;
  *(_QWORD *)(v152 + 16) = v159;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v152 + 16), (int32_t)v159, v153, v154, v155, v156, v157, v158);
  v160 = this->fields._skipDialogMessage_5__6;
  *(_QWORD *)(v152 + 24) = v160;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v152 + 24), (int32_t)v160, v161, v162, v163, v164, v165, v166);
  v167 = this->fields._skipDialogDecideText_5__7;
  *(_QWORD *)(v152 + 32) = v167;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v152 + 32), (int32_t)v167, v168, v169, v170, v171, v172, v173);
  v174 = this->fields._skipDialogCancelText_5__8;
  *(_QWORD *)(v152 + 40) = v174;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v152 + 40), (int32_t)v174, v175, v176, v177, v178, v179, v180);
  v181 = (Il2CppObject *)this->fields.__8__1;
  *(_BYTE *)(v152 + 48) = 1;
  if ( !v181 )
    goto LABEL_83;
  klass = (CommonUI_o *)v181[1].klass;
  v183 = this->fields._folder_5__3;
  v184 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v184, v181, Method_BattleScriptRootComponent___c__DisplayClass15_0__StartMovie_b__3__, 0);
  if ( !klass )
    goto LABEL_83;
  v185 = (Il2CppObject *)CommonUI__DownloadMovieAndWaitUI(
                           klass,
                           v183,
                           0,
                           v184,
                           0,
                           (ConnectMark_DownloadCancelDialogData_o *)v152,
                           0);
  this->fields.__2__current = v185;
  p__2__current = &this->fields.__2__current;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v185, v186, v187, v188, v189, v190, v191);
  v85 = 2;
LABEL_82:
  LOBYTE(questPhaseEntity_5__2) = 1;
  *((_DWORD *)p__2__current - 2) = v85;
  return (char)questPhaseEntity_5__2;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattleScriptRootComponent__StartMovie_d__15_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  int v6; // w9
  int v7; // w9
  int32_t EventID; // w22
  __int64 Instance; // x0
  TerminalPramsManager_c *v10; // x0
  __int64 v11; // x1
  Il2CppClass *klass; // x8
  Il2CppClass *v13; // x8
  Il2CppClass *v14; // x8
  int32_t name_high; // w22
  int32_t namespaze; // w23
  int32_t v17; // w24
  __int64 v18; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x22
  Il2CppClass *v20; // x9
  _BOOL4 v21; // w22
  Il2CppObject *v22; // x19
  Il2CppObject *v23; // x21
  System_Action_o *v24; // x22
  __int64 v25; // x1
  TerminalSceneComponent_c *v26; // x0
  UnityEngine_Object_o *mInstance; // x19
  __int64 v28; // x8
  UnityEngine_Object_o *v29; // x19
  __int64 v30; // x8
  clsQuestCheck_o *v31; // x19
  __int64 v32; // x1
  long double v33; // q0
  bool result; // w0
  TerminalPramsManager_c *v35; // x0
  TerminalPramsManager_c *v36; // x0
  System_Action_o *v37; // x21
  const MethodInfo *v38; // x2
  Il2CppObject *started; // x0
  Il2CppObject **p__2__current; // x19
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  Il2CppObject *v47; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_59745CE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_AvalonSceneManager_UnloadSceneAsync_TerminalSceneComponent___);
    sub_2213A60(&Method_AvalonSceneManager_UnloadScene_BattleScriptRootComponent___);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_BattleScriptRootComponent_TransitionTerminalSub__);
    sub_2213A60(&Method_BattleScriptRootComponent__TransitionTerminalCoroutine_b__48_0__);
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_WarMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_59745CE = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v47 = 0;
  entity = 0;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    goto LABEL_58;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_596ABDE )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596ABDE = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v6 = (unsigned __int8)byte_596DB32;
  v5->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !v6 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
    byte_596DB32 = 1;
  }
  if ( !*(&v5->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v5, method);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v7 = (unsigned __int8)byte_596A743;
  v5->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
  if ( !v7 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
    byte_596A743 = 1;
  }
  if ( !*(&v5->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v5, method);
    v5 = TerminalPramsManager_TypeInfo;
  }
  EventID = WarMaster__getEventID(v5->static_fields->_WarId_k__BackingField, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_128;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_128;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         EventID,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_128;
    if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)entity, 0) )
    {
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      if ( !byte_596DB46 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596DB46 = 1;
      }
      v10 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
        v10 = TerminalPramsManager_TypeInfo;
      }
      v10->static_fields->_isPlayRiverActionCheck_k__BackingField = 1;
    }
  }
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
  ScriptManager__DeleteTalkResumeInfo(0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !_4__this )
    goto LABEL_128;
  klass = _4__this[4].klass;
  if ( !klass || !Instance )
    goto LABEL_128;
  Instance = QuestPhaseMaster__GetMoviePlayType(
               (QuestPhaseMaster_o *)Instance,
               HIDWORD(klass->_1.name),
               (int32_t)klass->_1.namespaze,
               0);
  if ( (_DWORD)Instance != 3 )
  {
LABEL_58:
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    if ( !byte_596D5EA )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D5EA = 1;
    }
    Instance = (__int64)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      Instance = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( *(_BYTE *)(*(_QWORD *)(Instance + 184) + 106LL) )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_128;
      AvalonSceneManager__UnloadScene_object_(
        (AvalonSceneManager_o *)Instance,
        (const MethodInfo_380E6D8 *)Method_AvalonSceneManager_UnloadScene_BattleScriptRootComponent___);
      v22 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v24 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v24, _4__this, Method_BattleScriptRootComponent_TransitionTerminalSub__, 0);
      if ( !v23 )
        goto LABEL_128;
      Instance = (__int64)AvalonSceneManager__UnloadSceneAsync_object_(
                            (AvalonSceneManager_o *)v23,
                            v24,
                            (const MethodInfo_380E8D8 *)Method_AvalonSceneManager_UnloadSceneAsync_TerminalSceneComponent___);
      if ( !v22 )
        goto LABEL_128;
      UnityEngine_MonoBehaviour__StartCoroutine_83444756(
        (UnityEngine_MonoBehaviour_o *)v22,
        (System_Collections_IEnumerator_o *)Instance,
        0);
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v25);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      v26 = TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v25);
        v26 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = (UnityEngine_Object_o *)v26->static_fields->mInstance;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
      if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
      {
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
        if ( !byte_596A090 )
        {
          sub_2213A60(&TerminalSceneComponent_TypeInfo);
          byte_596A090 = 1;
        }
        Instance = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
          Instance = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v28 = **(_QWORD **)(Instance + 184);
        if ( !v28 )
          goto LABEL_128;
        v29 = *(UnityEngine_Object_o **)(v28 + 264);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        if ( UnityEngine_Object__op_Inequality(v29, 0, 0) )
        {
          if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
          if ( !byte_596A090 )
          {
            sub_2213A60(&TerminalSceneComponent_TypeInfo);
            byte_596A090 = 1;
          }
          Instance = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
            Instance = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v30 = **(_QWORD **)(Instance + 184);
          if ( !v30 )
            goto LABEL_128;
          Instance = *(_QWORD *)(v30 + 264);
          if ( !Instance )
            goto LABEL_128;
          ScrTerminalMap__SetDiceButton((ScrTerminalMap_o *)Instance, 0);
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          v31 = (clsQuestCheck_o *)Instance;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
          if ( !v31 )
            goto LABEL_128;
          if ( clsQuestCheck__CheckQuestPlayableNow(
                 v31,
                 BalanceConfig_TypeInfo->static_fields->EventBoardGameNextBoardQuestId,
                 0,
                 0) )
          {
            if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v33 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v32);
            sub_34AD2E0(1, 0, v33);
            Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
            if ( !Instance )
              goto LABEL_128;
            MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
          }
          else
          {
            if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v33 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v32);
            Instance = sub_291C204(0, v33);
            if ( !Instance )
              goto LABEL_128;
            Instance = *(_QWORD *)(Instance + 264);
            if ( !Instance )
              goto LABEL_128;
            ScrTerminalMap__SetEventBoardQuestArrivalPanel((ScrTerminalMap_o *)Instance, 0);
          }
        }
      }
    }
    else
    {
      if ( !_4__this )
        goto LABEL_128;
      BattleScriptRootComponent__TransitionTerminalSub((BattleScriptRootComponent_o *)_4__this, method);
    }
    return 0;
  }
  v13 = _4__this[4].klass;
  if ( !v13 )
    goto LABEL_128;
  LODWORD(v13->_1.byval_arg.data) = 10;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_128;
  Instance = CommonUI__maskFadeIsDisp((CommonUI_o *)Instance, 0);
  if ( (Instance & 1) != 0 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_128;
    CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 0, 0);
  }
  v14 = _4__this[4].klass;
  if ( !v14 )
    goto LABEL_128;
  name_high = HIDWORD(v14->_1.name);
  namespaze = (int32_t)v14->_1.namespaze;
  Instance = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_128;
  v17 = *(_DWORD *)(Instance + 76);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
  ScriptManager__SaveMovieResumeInfo(name_high, namespaze, v17, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarMaster___);
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
  if ( !v19 )
    goto LABEL_128;
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               v19,
               &v47,
               BalanceConfig_TypeInfo->static_fields->Fgo20251220WarId,
               (const MethodInfo_3F10B80 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( (Instance & 1) == 0 )
  {
    v21 = 0;
    goto LABEL_108;
  }
  if ( !v47 || (v20 = _4__this[4].klass) == 0 )
LABEL_128:
    sub_2213CDC(Instance, method);
  v21 = HIDWORD(v47[6].klass) == HIDWORD(v20->_1.name);
LABEL_108:
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_596D5F0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D5F0 = 1;
  }
  v35 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v35 = TerminalPramsManager_TypeInfo;
  }
  if ( v21 != v35->static_fields->_IsTransitionToTerminalAfterMovie_k__BackingField )
  {
    if ( !*(&v35->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v35, method);
    if ( !byte_596D5FF )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D5FF = 1;
    }
    v36 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      v36 = TerminalPramsManager_TypeInfo;
    }
    v36->static_fields->_IsTransitionToTerminalAfterMovie_k__BackingField = v21;
    TerminalPramsManager__SaveIsTransitionToTerminalAfterMovie(0);
  }
  v37 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v37, _4__this, Method_BattleScriptRootComponent__TransitionTerminalCoroutine_b__48_0__, 0);
  started = (Il2CppObject *)BattleScriptRootComponent__StartMovie((BattleScriptRootComponent_o *)_4__this, v37, v38);
  this->fields.__2__current = started;
  p__2__current = &this->fields.__2__current;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)started, v41, v42, v43, v44, v45, v46);
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattleScriptRootComponent__TransitionTerminalCoroutine_d__48_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59745C5 & 1) == 0 )
  {
    sub_2213A60(&BattleScriptRootComponent___c_TypeInfo);
    byte_59745C5 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleScriptRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleScriptRootComponent___c_TypeInfo->static_fields->__9 = (struct BattleScriptRootComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleScriptRootComponent___c_TypeInfo->static_fields,
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


void BattleScriptRootComponent___c___TransitionWarBoard_b__50_0(
        BattleScriptRootComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_59745C6 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_59745C6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  v4 = this;
  if ( (byte_59745C7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (BattleScriptRootComponent___c__DisplayClass15_0_o *)sub_2213A60(&Method_BattleScriptRootComponent___c__DisplayClass15_0__StartMovie_b__4__);
    byte_59745C7 = 1;
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
    _9__4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)v4,
      Method_BattleScriptRootComponent___c__DisplayClass15_0__StartMovie_b__4__,
      0);
    v4->fields.__9__4 = _9__4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__4, (int32_t)_9__4, v8, v9, v10, v11, v12, v13);
  }
  if ( !commonUI )
    sub_2213CDC(this, isDecide);
  CommonUI__CloseConfirmDialog_37373868(commonUI, _9__4, 0);
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

  if ( (byte_59745C8 & 1) == 0 )
  {
    sub_2213A60(&ScriptManager_TypeInfo);
    byte_59745C8 = 1;
  }
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, str);
  ScriptManager__ClearSelectRouteArray(0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, v4);
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

  if ( (byte_59745C9 & 1) == 0 )
  {
    sub_2213A60(&ScriptManager_TypeInfo);
    byte_59745C9 = 1;
  }
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, str);
  ScriptManager__ClearSelectRouteArray(0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, v4);
  BattleScriptRootComponent__ProceedToNextTalkPhase(_4__this, this->fields.isExit, v5);
}


void BattleScriptRootComponent___c__DisplayClass46_0___ctor(
        BattleScriptRootComponent___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleScriptRootComponent___c__DisplayClass46_0___StartMashuPowerUpAction_b__0(
        BattleScriptRootComponent___c__DisplayClass46_0_o *this,
        bool is_decide,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *_9__1; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  Il2CppObject *Request_object; // x0
  __int64 v12; // x1

  if ( (byte_59745CA & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_TutorialSetRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_BattleScriptRootComponent___c__DisplayClass46_0__StartMashuPowerUpAction_b__1__);
    byte_59745CA = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_BattleScriptRootComponent___c__DisplayClass46_0__StartMashuPowerUpAction_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v5, v6, v7, v8, v9, v10);
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, is_decide);
  Request_object = NetworkManager__getRequest_object_(
                     _9__1,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
  if ( !Request_object )
    sub_2213CDC(0, v12);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  Il2CppObject *Object_object__58532980; // x21
  Il2CppObject *v22; // x0
  AssetData_o **v23; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct BattleScriptRootComponent_o *_4__this; // x8
  UnityEngine_Transform_o *v31; // x20
  UnityEngine_Transform_o *v32; // x20
  Il2CppObject *Component_object; // x0
  AssetData_o *v34; // x20
  EndrolRootComponent_o *v35; // x21
  System_Action_o *v36; // x22

  if ( (byte_59745CB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EndrolRootComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_BattleScriptRootComponent___c__DisplayClass51_1__PlayStaffRoll_b__1__);
    sub_2213A60(&BattleScriptRootComponent___c__DisplayClass51_1_TypeInfo);
    sub_2213A60(&StringLiteral_6297/*"EndrolPanel"*/);
    byte_59745CB = 1;
  }
  v5 = sub_2213CCC(BattleScriptRootComponent___c__DisplayClass51_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = data;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)data, v14, v15, v16, v17, v18, v19);
  transform = *(AssetData_o **)(v5 + 24);
  if ( !transform )
    goto LABEL_21;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              transform,
                              (System_String_o *)StringLiteral_6297/*"EndrolPanel"*/,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  v22 = UnityEngine_Object__Instantiate_object_(
          Object_object__58532980,
          (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  *(_QWORD *)(v5 + 16) = v22;
  v23 = (AssetData_o **)(v5 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)v22, v24, v25, v26, v27, v28, v29);
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
  transform = *v23;
  if ( !*v23 )
    goto LABEL_21;
  transform = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  v31 = (UnityEngine_Transform_o *)transform;
  if ( !byte_5969AE0 )
  {
    transform = (AssetData_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v31 )
    goto LABEL_21;
  UnityEngine_Transform__set_localPosition(v31, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  transform = *v23;
  if ( !*v23 )
    goto LABEL_21;
  transform = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  v32 = (UnityEngine_Transform_o *)transform;
  if ( !byte_5969AE5 )
  {
    transform = (AssetData_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v32
    || (UnityEngine_Transform__set_localScale(v32, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (transform = *v23) == 0)
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EndrolRootComponent___),
        v34 = *(AssetData_o **)(v5 + 24),
        v35 = (EndrolRootComponent_o *)Component_object,
        v36 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v36,
          (Il2CppObject *)v5,
          Method_BattleScriptRootComponent___c__DisplayClass51_1__PlayStaffRoll_b__1__,
          0),
        !v35) )
  {
LABEL_21:
    sub_2213CDC(transform, v7);
  }
  EndrolRootComponent__Open(v35, v34, v36, 0);
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
  __int64 v4; // x1
  AssetData_o *data; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  struct BattleScriptRootComponent___c__DisplayClass51_0_o *CS___8__locals1; // x8

  if ( (byte_59745CC & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59745CC = 1;
  }
  endObj = (UnityEngine_Object_o *)this->fields.endObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  UnityEngine_Object__Destroy_83459800(endObj, 0);
  data = this->fields.data;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v4);
  AssetManager__releaseAsset_47496972(data, 0);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    sub_2213CDC(v6, v7);
  ActionExtensions__Call(CS___8__locals1->fields.callback, 0);
}