void RewardMiniPopupExecutor___ctor(RewardMiniPopupExecutor_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_59326C4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Queue_Action___ctor__);
    sub_21FFC50(&System_Collections_Generic_Queue_Action__TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_RewardMiniPopupExecutor___ctor__);
    byte_59326C4 = 1;
  }
  v3 = (System_Collections_Generic_Queue_T__o *)sub_21FFEBC(System_Collections_Generic_Queue_Action__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v3,
    (const MethodInfo_469F6A0 *)Method_System_Collections_Generic_Queue_Action___ctor__);
  this->fields.playerActionQueue = (struct System_Collections_Generic_Queue_Action__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_476EF14 *)Method_SingletonTemplate_RewardMiniPopupExecutor___ctor__);
}


void RewardMiniPopupExecutor__AddTaskOnBattleToTerminal(RewardMiniPopupExecutor_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_59326B7 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_RewardMiniPopupExecutor__AddTaskOnBattleToTerminal_g__Action_2_0__);
    byte_59326B7 = 1;
  }
  v3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v3,
    (Il2CppObject *)this,
    Method_RewardMiniPopupExecutor__AddTaskOnBattleToTerminal_g__Action_2_0__,
    0);
  RewardMiniPopupExecutor__EnqueueActionAndInvokeIfFirst(this, v3, v4);
}


void RewardMiniPopupExecutor__AddTaskOnReBattle(RewardMiniPopupExecutor_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_59326BA & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_RewardMiniPopupExecutor__AddTaskOnReBattle_g__Action_5_0__);
    byte_59326BA = 1;
  }
  v3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_RewardMiniPopupExecutor__AddTaskOnReBattle_g__Action_5_0__, 0);
  RewardMiniPopupExecutor__EnqueueActionAndInvokeIfFirst(this, v3, v4);
}


void RewardMiniPopupExecutor__AddTaskOnReBattleOrdealCallFreeQuest(
        RewardMiniPopupExecutor_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_59326B9 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_RewardMiniPopupExecutor__AddTaskOnReBattleOrdealCallFreeQuest_g__Action_4_0__);
    byte_59326B9 = 1;
  }
  v3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v3,
    (Il2CppObject *)this,
    Method_RewardMiniPopupExecutor__AddTaskOnReBattleOrdealCallFreeQuest_g__Action_4_0__,
    0);
  RewardMiniPopupExecutor__EnqueueActionAndInvokeIfFirst(this, v3, v4);
}


RewardMiniPopup_PopupInfoBase_o *RewardMiniPopupExecutor__CreatePopupInfoByUseAddRewardItem(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x8
  RewardMiniPopupExecutor___c_c *v5; // x0
  QuestRewardInfo_array *UseAddRewardItemRewardInfos_k__BackingField; // x19
  struct RewardMiniPopupExecutor___c_StaticFields *static_fields; // x8
  System_Action_o *_9__14_0; // x20
  Il2CppObject *v9; // x21
  struct RewardMiniPopupExecutor___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  RewardMiniPopup_PopupInfoByUseAddRewardItem_o *v17; // x21

  if ( (byte_59326C2 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&RewardMiniPopup_PopupInfoByUseAddRewardItem_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_RewardMiniPopupExecutor___c__CreatePopupInfoByUseAddRewardItem_b__14_0__);
    sub_21FFC50(&RewardMiniPopupExecutor___c_TypeInfo);
    byte_59326C2 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
  if ( !byte_5932721 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932721 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( !v3->static_fields->_UseAddRewardItemRewardInfos_k__BackingField )
    return 0;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, v1, v2);
  if ( !byte_5932721 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932721 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v5 = RewardMiniPopupExecutor___c_TypeInfo;
  UseAddRewardItemRewardInfos_k__BackingField = v4->static_fields->_UseAddRewardItemRewardInfos_k__BackingField;
  if ( !*(&RewardMiniPopupExecutor___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RewardMiniPopupExecutor___c_TypeInfo, v1, v2);
    v5 = RewardMiniPopupExecutor___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__14_0 = static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, v1, v2);
      static_fields = RewardMiniPopupExecutor___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__14_0,
      v9,
      Method_RewardMiniPopupExecutor___c__CreatePopupInfoByUseAddRewardItem_b__14_0__,
      0);
    v10 = RewardMiniPopupExecutor___c_TypeInfo->static_fields;
    v10->__9__14_0 = _9__14_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->__9__14_0, (int32_t)_9__14_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = (RewardMiniPopup_PopupInfoByUseAddRewardItem_o *)sub_21FFEBC(RewardMiniPopup_PopupInfoByUseAddRewardItem_TypeInfo);
  RewardMiniPopup_PopupInfoByUseAddRewardItem___ctor(v17, UseAddRewardItemRewardInfos_k__BackingField, _9__14_0, 0);
  return (RewardMiniPopup_PopupInfoBase_o *)v17;
}


RewardMiniPopup_PopupInfoBase_o *RewardMiniPopupExecutor__CreatePopupInfoQuestPhaseReward(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  QuestRewardInfo_array *mQuestPhaseRewardInfos; // x19
  RewardMiniPopupExecutor___c_c *v5; // x0
  struct RewardMiniPopupExecutor___c_StaticFields *static_fields; // x8
  System_Action_o *_9__12_0; // x20
  Il2CppObject *v8; // x21
  struct RewardMiniPopupExecutor___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  RewardMiniPopup_PopupInfoQuestPhaseClear_o *v16; // x21

  if ( (byte_59326C0 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&RewardMiniPopup_PopupInfoQuestPhaseClear_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_RewardMiniPopupExecutor___c__CreatePopupInfoQuestPhaseReward_b__12_0__);
    sub_21FFC50(&RewardMiniPopupExecutor___c_TypeInfo);
    byte_59326C0 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  mQuestPhaseRewardInfos = v3->static_fields->mQuestPhaseRewardInfos;
  if ( !mQuestPhaseRewardInfos )
    return 0;
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, v1, v2);
    mQuestPhaseRewardInfos = TerminalPramsManager_TypeInfo->static_fields->mQuestPhaseRewardInfos;
  }
  v5 = RewardMiniPopupExecutor___c_TypeInfo;
  if ( !*(&RewardMiniPopupExecutor___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RewardMiniPopupExecutor___c_TypeInfo, v1, v2);
    v5 = RewardMiniPopupExecutor___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__12_0 = static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, v1, v2);
      static_fields = RewardMiniPopupExecutor___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__12_0, v8, Method_RewardMiniPopupExecutor___c__CreatePopupInfoQuestPhaseReward_b__12_0__, 0);
    v9 = RewardMiniPopupExecutor___c_TypeInfo->static_fields;
    v9->__9__12_0 = _9__12_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__12_0, (int32_t)_9__12_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = (RewardMiniPopup_PopupInfoQuestPhaseClear_o *)sub_21FFEBC(RewardMiniPopup_PopupInfoQuestPhaseClear_TypeInfo);
  RewardMiniPopup_PopupInfoQuestPhaseClear___ctor(v16, mQuestPhaseRewardInfos, _9__12_0, 0);
  return (RewardMiniPopup_PopupInfoBase_o *)v16;
}


RewardMiniPopup_PopupInfoBase_o *RewardMiniPopupExecutor__CreatePopupInfoQuestReward(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  QuestRewardInfo_array *mQuestRewardInfos; // x19
  RewardMiniPopupExecutor___c_c *v5; // x0
  struct RewardMiniPopupExecutor___c_StaticFields *static_fields; // x8
  System_Action_o *_9__13_0; // x20
  Il2CppObject *v8; // x21
  struct RewardMiniPopupExecutor___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  RewardMiniPopup_PopupInfoQuestClear_o *v16; // x21

  if ( (byte_59326C1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&RewardMiniPopup_PopupInfoQuestClear_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_RewardMiniPopupExecutor___c__CreatePopupInfoQuestReward_b__13_0__);
    sub_21FFC50(&RewardMiniPopupExecutor___c_TypeInfo);
    byte_59326C1 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  mQuestRewardInfos = v3->static_fields->mQuestRewardInfos;
  if ( !mQuestRewardInfos )
    return 0;
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, v1, v2);
    mQuestRewardInfos = TerminalPramsManager_TypeInfo->static_fields->mQuestRewardInfos;
  }
  v5 = RewardMiniPopupExecutor___c_TypeInfo;
  if ( !*(&RewardMiniPopupExecutor___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RewardMiniPopupExecutor___c_TypeInfo, v1, v2);
    v5 = RewardMiniPopupExecutor___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__13_0 = static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, v1, v2);
      static_fields = RewardMiniPopupExecutor___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__13_0, v8, Method_RewardMiniPopupExecutor___c__CreatePopupInfoQuestReward_b__13_0__, 0);
    v9 = RewardMiniPopupExecutor___c_TypeInfo->static_fields;
    v9->__9__13_0 = _9__13_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__13_0, (int32_t)_9__13_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = (RewardMiniPopup_PopupInfoQuestClear_o *)sub_21FFEBC(RewardMiniPopup_PopupInfoQuestClear_TypeInfo);
  RewardMiniPopup_PopupInfoQuestClear___ctor(v16, mQuestRewardInfos, _9__13_0, 0);
  return (RewardMiniPopup_PopupInfoBase_o *)v16;
}


void RewardMiniPopupExecutor__DequeueCurrentAndInvokeNext(RewardMiniPopupExecutor_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *playerActionQueue; // x0
  struct RewardMiniPopup_RewardMiniPopupPlayerBase_o **p_currentPlayer; // x19
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  Il2CppObject *result; // [xsp+8h] [xbp-28h] BYREF
  Il2CppObject *v12; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_59326BF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Queue_Action__TryDequeue__);
    sub_21FFC50(&Method_System_Collections_Generic_Queue_Action__TryPeek__);
    byte_59326BF = 1;
  }
  playerActionQueue = (System_Collections_Generic_Queue_T__o *)this->fields.playerActionQueue;
  v12 = 0;
  result = 0;
  if ( !playerActionQueue
    || (System_Collections_Generic_Queue_object___TryDequeue(
          playerActionQueue,
          &result,
          (const MethodInfo_469FE98 *)Method_System_Collections_Generic_Queue_Action__TryDequeue__),
        this->fields.currentPlayer = 0,
        p_currentPlayer = &this->fields.currentPlayer,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_currentPlayer, 0, v5, v6, v7, v8, v9, v10),
        (playerActionQueue = (System_Collections_Generic_Queue_T__o *)*(p_currentPlayer - 1)) == 0) )
  {
    sub_21FFECC(playerActionQueue, method);
  }
  System_Collections_Generic_Queue_object___TryPeek(
    playerActionQueue,
    &v12,
    (const MethodInfo_469FFB0 *)Method_System_Collections_Generic_Queue_Action__TryPeek__);
  if ( v12 )
    ((void (__fastcall *)(Il2CppClass *, void *))v12[1].monitor)(v12[4].klass, v12[2].monitor);
}


void RewardMiniPopupExecutor__EnqueueActionAndInvokeIfFirst(
        RewardMiniPopupExecutor_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x1
  bool v6; // w8
  System_Collections_Generic_Queue_T__o *playerActionQueue; // x0

  if ( (byte_59326BE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_Action___);
    sub_21FFC50(&Method_System_Collections_Generic_Queue_Action__Enqueue__);
    byte_59326BE = 1;
  }
  v6 = System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.playerActionQueue,
         (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_Action___);
  playerActionQueue = (System_Collections_Generic_Queue_T__o *)this->fields.playerActionQueue;
  if ( v6 )
  {
    if ( playerActionQueue )
    {
      System_Collections_Generic_Queue_object___Enqueue(
        playerActionQueue,
        (Il2CppObject *)action,
        (const MethodInfo_469FC6C *)Method_System_Collections_Generic_Queue_Action__Enqueue__);
      return;
    }
LABEL_9:
    sub_21FFECC(playerActionQueue, v5);
  }
  if ( !playerActionQueue )
    goto LABEL_9;
  System_Collections_Generic_Queue_object___Enqueue(
    playerActionQueue,
    (Il2CppObject *)action,
    (const MethodInfo_469FC6C *)Method_System_Collections_Generic_Queue_Action__Enqueue__);
  if ( !action )
    goto LABEL_9;
  ((void (__fastcall *)(intptr_t, intptr_t))action->fields.invoke_impl)(
    action->fields.method_code,
    action->fields.method);
}


bool RewardMiniPopupExecutor__HasRewardsOnBattleToTerminal(RewardMiniPopupExecutor_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v5; // x0

  if ( (byte_59326B8 & 1) == 0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59326B8 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( v3->static_fields->mQuestPhaseRewardInfos )
    return 1;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method, v2);
  if ( !byte_5932721 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932721 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v5 = TerminalPramsManager_TypeInfo;
  }
  return v5->static_fields->_UseAddRewardItemRewardInfos_k__BackingField != 0;
}


bool RewardMiniPopupExecutor__IsBusy(RewardMiniPopupExecutor_o *this, const MethodInfo *method)
{
  struct RewardMiniPopup_RewardMiniPopupPlayerBase_o *currentPlayer; // x0

  currentPlayer = this->fields.currentPlayer;
  if ( currentPlayer )
    LOBYTE(currentPlayer) = ((__int64 (__fastcall *)(struct RewardMiniPopup_RewardMiniPopupPlayerBase_o *, const MethodInfo *))currentPlayer->klass->vtable._5_IsBusy.methodPtr)(
                              currentPlayer,
                              currentPlayer->klass->vtable._5_IsBusy.method);
  return (char)currentPlayer;
}


// local variable allocation has failed, the output may be wrong!
void RewardMiniPopupExecutor__Kill(RewardMiniPopupExecutor_o *this, bool strong, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *playerActionQueue; // x0

  if ( (byte_59326BB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Queue_Action__Clear__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59326BB = 1;
  }
  playerActionQueue = (System_Collections_Generic_Queue_T__o *)this->fields.playerActionQueue;
  if ( !playerActionQueue )
    goto LABEL_8;
  System_Collections_Generic_Queue_object___Clear(
    playerActionQueue,
    (const MethodInfo_469F934 *)Method_System_Collections_Generic_Queue_Action__Clear__);
  if ( strong )
  {
    playerActionQueue = (System_Collections_Generic_Queue_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( playerActionQueue )
    {
      CommonUI__DestoryQuestPhaseReward((CommonUI_o *)playerActionQueue, 0, 0);
      return;
    }
LABEL_8:
    sub_21FFECC(playerActionQueue, strong);
  }
}


void RewardMiniPopupExecutor__Play(
        RewardMiniPopupExecutor_o *this,
        RewardMiniPopup_RewardMiniPopupPlayerBase_o *newPlayer,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x0
  __int64 v11; // x1
  System_Delegate_o *FinishCallback_k__BackingField; // x22
  System_Action_o *v13; // x23
  System_Delegate_o *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  RewardMiniPopupExecutor_o *v21; // x0
  const MethodInfo *v22; // x1

  if ( (byte_59326BD & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_RewardMiniPopupExecutor_DequeueCurrentAndInvokeNext__);
    byte_59326BD = 1;
  }
  this->fields.currentPlayer = newPlayer;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentPlayer,
    (int32_t)newPlayer,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !newPlayer )
    sub_21FFECC(v10, v11);
  FinishCallback_k__BackingField = (System_Delegate_o *)newPlayer->fields._FinishCallback_k__BackingField;
  v13 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_RewardMiniPopupExecutor_DequeueCurrentAndInvokeNext__, 0);
  v14 = System_Delegate__Combine(FinishCallback_k__BackingField, (System_Delegate_o *)v13, 0);
  if ( v14 && (System_Action_c *)v14->klass != System_Action_TypeInfo )
  {
    v21 = (RewardMiniPopupExecutor_o *)sub_220024C(v14, System_Action_TypeInfo, v15, v16);
    RewardMiniPopupExecutor__DequeueCurrentAndInvokeNext(v21, v22);
  }
  else
  {
    newPlayer->fields._FinishCallback_k__BackingField = (struct System_Action_o *)v14;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&newPlayer->fields._FinishCallback_k__BackingField,
      (int32_t)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    ((void (__fastcall *)(RewardMiniPopup_RewardMiniPopupPlayerBase_o *, const MethodInfo *))newPlayer->klass->vtable._4_unknown.methodPtr)(
      newPlayer,
      newPlayer->klass->vtable._4_unknown.method);
  }
}


void RewardMiniPopupExecutor__PlaySimultaneous(
        RewardMiniPopupExecutor_o *this,
        RewardMiniPopup_PopupInfoBase_array *popupInfoArray,
        const MethodInfo *method)
{
  RewardMiniPopup_RewardMiniPopupPlayerSimultaneous_o *v5; // x21
  const MethodInfo *v6; // x2

  if ( (byte_59326BC & 1) == 0 )
  {
    sub_21FFC50(&RewardMiniPopup_RewardMiniPopupPlayerSimultaneous_TypeInfo);
    byte_59326BC = 1;
  }
  v5 = (RewardMiniPopup_RewardMiniPopupPlayerSimultaneous_o *)sub_21FFEBC(RewardMiniPopup_RewardMiniPopupPlayerSimultaneous_TypeInfo);
  RewardMiniPopup_RewardMiniPopupPlayerSimultaneous___ctor(v5, popupInfoArray, 0);
  RewardMiniPopupExecutor__Play(this, (RewardMiniPopup_RewardMiniPopupPlayerBase_o *)v5, v6);
}


System_Collections_IEnumerator_o *RewardMiniPopupExecutor__WaitRewardMiniPopup(
        RewardMiniPopupExecutor_o *this,
        System_Action_o *finiAction,
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

  if ( (byte_59326C3 & 1) == 0 )
  {
    sub_21FFC50(&RewardMiniPopupExecutor__WaitRewardMiniPopup_d__15_TypeInfo);
    byte_59326C3 = 1;
  }
  v5 = sub_21FFEBC(RewardMiniPopupExecutor__WaitRewardMiniPopup_d__15_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = finiAction;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)finiAction, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void RewardMiniPopupExecutor___AddTaskOnBattleToTerminal_g__Action_2_0(
        RewardMiniPopupExecutor_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  RewardMiniPopup_PopupInfoBase_o *PopupInfoQuestPhaseReward; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  RewardMiniPopup_PopupInfoBase_o *v12; // x21
  __int64 v13; // x1
  const MethodInfo *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  RewardMiniPopup_PopupInfoBase_o *v21; // x21
  System_Collections_Generic_IEnumerable_T__o *v22; // x0
  System_Object_array *v23; // x1
  const MethodInfo *v24; // x2
  __int64 v25; // x0

  if ( (byte_59326C5 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_ExcludeNull_PopupInfoBase___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_PopupInfoBase___);
    sub_21FFC50(&RewardMiniPopup_PopupInfoBase___TypeInfo);
    byte_59326C5 = 1;
  }
  v3 = sub_21FFD10(RewardMiniPopup_PopupInfoBase___TypeInfo, 2);
  PopupInfoQuestPhaseReward = RewardMiniPopupExecutor__CreatePopupInfoQuestPhaseReward((const MethodInfo *)v3);
  if ( !v3 )
    sub_21FFECC(PopupInfoQuestPhaseReward, v5);
  v12 = PopupInfoQuestPhaseReward;
  if ( PopupInfoQuestPhaseReward )
  {
    PopupInfoQuestPhaseReward = (RewardMiniPopup_PopupInfoBase_o *)sub_21FFDA4(
                                                                     PopupInfoQuestPhaseReward,
                                                                     *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !PopupInfoQuestPhaseReward )
      goto LABEL_12;
  }
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_11;
  *(_QWORD *)(v3 + 32) = v12;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)v12, v6, v7, v8, v9, v10, v11);
  PopupInfoQuestPhaseReward = RewardMiniPopupExecutor__CreatePopupInfoByUseAddRewardItem(v14);
  v21 = PopupInfoQuestPhaseReward;
  if ( PopupInfoQuestPhaseReward )
  {
    PopupInfoQuestPhaseReward = (RewardMiniPopup_PopupInfoBase_o *)sub_21FFDA4(
                                                                     PopupInfoQuestPhaseReward,
                                                                     *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !PopupInfoQuestPhaseReward )
    {
LABEL_12:
      v25 = sub_21FFEF0(PopupInfoQuestPhaseReward, v13);
      sub_21FFD90(v25, 0);
    }
  }
  if ( (*(_DWORD *)(v3 + 24) & 0xFFFFFFFE) == 0 )
LABEL_11:
    sub_21FFED4(PopupInfoQuestPhaseReward);
  *(_QWORD *)(v3 + 40) = v21;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 40), (int32_t)v21, v15, v16, v17, v18, v19, v20);
  v22 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)v3,
          (const MethodInfo_37DD3BC *)Method_BasicHelper_ExcludeNull_PopupInfoBase___);
  v23 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v22,
          (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_PopupInfoBase___);
  RewardMiniPopupExecutor__PlaySimultaneous(this, (RewardMiniPopup_PopupInfoBase_array *)v23, v24);
}


void RewardMiniPopupExecutor___AddTaskOnReBattleOrdealCallFreeQuest_g__Action_4_0(
        RewardMiniPopupExecutor_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  RewardMiniPopup_PopupInfoBase_o *PopupInfoQuestReward; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  RewardMiniPopup_PopupInfoBase_o *v12; // x21
  __int64 v13; // x1
  const MethodInfo *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  RewardMiniPopup_PopupInfoBase_o *v21; // x21
  System_Collections_Generic_IEnumerable_T__o *v22; // x0
  System_Object_array *v23; // x1
  const MethodInfo *v24; // x2
  __int64 v25; // x0

  if ( (byte_59326C6 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_ExcludeNull_PopupInfoBase___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_PopupInfoBase___);
    sub_21FFC50(&RewardMiniPopup_PopupInfoBase___TypeInfo);
    byte_59326C6 = 1;
  }
  v3 = sub_21FFD10(RewardMiniPopup_PopupInfoBase___TypeInfo, 2);
  PopupInfoQuestReward = RewardMiniPopupExecutor__CreatePopupInfoQuestReward((const MethodInfo *)v3);
  if ( !v3 )
    sub_21FFECC(PopupInfoQuestReward, v5);
  v12 = PopupInfoQuestReward;
  if ( PopupInfoQuestReward )
  {
    PopupInfoQuestReward = (RewardMiniPopup_PopupInfoBase_o *)sub_21FFDA4(
                                                                PopupInfoQuestReward,
                                                                *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !PopupInfoQuestReward )
      goto LABEL_12;
  }
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_11;
  *(_QWORD *)(v3 + 32) = v12;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)v12, v6, v7, v8, v9, v10, v11);
  PopupInfoQuestReward = RewardMiniPopupExecutor__CreatePopupInfoByUseAddRewardItem(v14);
  v21 = PopupInfoQuestReward;
  if ( PopupInfoQuestReward )
  {
    PopupInfoQuestReward = (RewardMiniPopup_PopupInfoBase_o *)sub_21FFDA4(
                                                                PopupInfoQuestReward,
                                                                *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !PopupInfoQuestReward )
    {
LABEL_12:
      v25 = sub_21FFEF0(PopupInfoQuestReward, v13);
      sub_21FFD90(v25, 0);
    }
  }
  if ( (*(_DWORD *)(v3 + 24) & 0xFFFFFFFE) == 0 )
LABEL_11:
    sub_21FFED4(PopupInfoQuestReward);
  *(_QWORD *)(v3 + 40) = v21;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 40), (int32_t)v21, v15, v16, v17, v18, v19, v20);
  v22 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)v3,
          (const MethodInfo_37DD3BC *)Method_BasicHelper_ExcludeNull_PopupInfoBase___);
  v23 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v22,
          (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_PopupInfoBase___);
  RewardMiniPopupExecutor__PlaySimultaneous(this, (RewardMiniPopup_PopupInfoBase_array *)v23, v24);
}


void RewardMiniPopupExecutor___AddTaskOnReBattle_g__Action_5_0(
        RewardMiniPopupExecutor_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  RewardMiniPopup_PopupInfoBase_o *PopupInfoByUseAddRewardItem; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  RewardMiniPopup_PopupInfoBase_o *v12; // x21
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_T__o *v14; // x0
  System_Object_array *v15; // x1
  const MethodInfo *v16; // x2
  __int64 v17; // x0

  if ( (byte_59326C7 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_ExcludeNull_PopupInfoBase___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_PopupInfoBase___);
    sub_21FFC50(&RewardMiniPopup_PopupInfoBase___TypeInfo);
    byte_59326C7 = 1;
  }
  v3 = sub_21FFD10(RewardMiniPopup_PopupInfoBase___TypeInfo, 1);
  PopupInfoByUseAddRewardItem = RewardMiniPopupExecutor__CreatePopupInfoByUseAddRewardItem((const MethodInfo *)v3);
  if ( !v3 )
    sub_21FFECC(PopupInfoByUseAddRewardItem, v5);
  v12 = PopupInfoByUseAddRewardItem;
  if ( PopupInfoByUseAddRewardItem )
  {
    PopupInfoByUseAddRewardItem = (RewardMiniPopup_PopupInfoBase_o *)sub_21FFDA4(
                                                                       PopupInfoByUseAddRewardItem,
                                                                       *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !PopupInfoByUseAddRewardItem )
    {
      v17 = sub_21FFEF0(0, v13);
      sub_21FFD90(v17, 0);
    }
  }
  if ( !*(_DWORD *)(v3 + 24) )
    sub_21FFED4(PopupInfoByUseAddRewardItem);
  *(_QWORD *)(v3 + 32) = v12;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)v12, v6, v7, v8, v9, v10, v11);
  v14 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)v3,
          (const MethodInfo_37DD3BC *)Method_BasicHelper_ExcludeNull_PopupInfoBase___);
  v15 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v14,
          (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_PopupInfoBase___);
  RewardMiniPopupExecutor__PlaySimultaneous(this, (RewardMiniPopup_PopupInfoBase_array *)v15, v16);
}


bool RewardMiniPopupExecutor___WaitRewardMiniPopup_b__15_0(RewardMiniPopupExecutor_o *this, const MethodInfo *method)
{
  struct RewardMiniPopup_RewardMiniPopupPlayerBase_o *currentPlayer; // x0
  char v3; // w8

  currentPlayer = this->fields.currentPlayer;
  if ( currentPlayer )
    v3 = ((__int64 (__fastcall *)(struct RewardMiniPopup_RewardMiniPopupPlayerBase_o *, const MethodInfo *))currentPlayer->klass->vtable._5_IsBusy.methodPtr)(
           currentPlayer,
           currentPlayer->klass->vtable._5_IsBusy.method)
       ^ 1;
  else
    v3 = 1;
  return v3 & 1;
}


void RewardMiniPopupExecutor__WaitRewardMiniPopup_d__15___ctor(
        RewardMiniPopupExecutor__WaitRewardMiniPopup_d__15_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool RewardMiniPopupExecutor__WaitRewardMiniPopup_d__15__MoveNext(
        RewardMiniPopupExecutor__WaitRewardMiniPopup_d__15_o *this,
        const MethodInfo *method)
{
  RewardMiniPopupExecutor__WaitRewardMiniPopup_d__15_o *v2; // x19
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  void *monitor; // x0
  System_Func_bool__o *v6; // x21
  UnityEngine_WaitUntil_o *v7; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  bool result; // w0

  v2 = this;
  if ( (byte_59326CC & 1) == 0 )
  {
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&Method_RewardMiniPopupExecutor__WaitRewardMiniPopup_b__15_0__);
    this = (RewardMiniPopupExecutor__WaitRewardMiniPopup_d__15_o *)sub_21FFC50(&UnityEngine_WaitUntil_TypeInfo);
    byte_59326CC = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
LABEL_10:
    ActionExtensions__Call(v2->fields.finiAction, 0);
    return 0;
  }
  if ( !_1__state )
  {
    _4__this = (Il2CppObject *)v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_21FFECC(this, method);
    monitor = _4__this[1].monitor;
    if ( monitor
      && ((*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)monitor + 392LL))(
            monitor,
            *(_QWORD *)(*(_QWORD *)monitor + 400LL))
        & 1) != 0 )
    {
      v6 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(v6, _4__this, Method_RewardMiniPopupExecutor__WaitRewardMiniPopup_b__15_0__, 0);
      v7 = (UnityEngine_WaitUntil_o *)sub_21FFEBC(UnityEngine_WaitUntil_TypeInfo);
      UnityEngine_WaitUntil___ctor(v7, v6, 0);
      v2->fields.__2__current = (Il2CppObject *)v7;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
      sub_21FFBF4(p__2__current, (int32_t)v7, v9, v10, v11, v12, v13, v14);
      result = 1;
      p__2__current[-1].fields._BoardType_k__BackingField = 1;
      return result;
    }
    goto LABEL_10;
  }
  return 0;
}


Il2CppObject *RewardMiniPopupExecutor__WaitRewardMiniPopup_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        RewardMiniPopupExecutor__WaitRewardMiniPopup_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn RewardMiniPopupExecutor__WaitRewardMiniPopup_d__15__System_Collections_IEnumerator_Reset(
        RewardMiniPopupExecutor__WaitRewardMiniPopup_d__15_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_RewardMiniPopupExecutor__WaitRewardMiniPopup_d__15_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *RewardMiniPopupExecutor__WaitRewardMiniPopup_d__15__System_Collections_IEnumerator_get_Current(
        RewardMiniPopupExecutor__WaitRewardMiniPopup_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void RewardMiniPopupExecutor__WaitRewardMiniPopup_d__15__System_IDisposable_Dispose(
        RewardMiniPopupExecutor__WaitRewardMiniPopup_d__15_o *this,
        const MethodInfo *method)
{
  ;
}


void RewardMiniPopupExecutor___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59326C8 & 1) == 0 )
  {
    sub_21FFC50(&RewardMiniPopupExecutor___c_TypeInfo);
    byte_59326C8 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(RewardMiniPopupExecutor___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RewardMiniPopupExecutor___c_TypeInfo->static_fields->__9 = (struct RewardMiniPopupExecutor___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)RewardMiniPopupExecutor___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RewardMiniPopupExecutor___c___ctor(RewardMiniPopupExecutor___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RewardMiniPopupExecutor___c___CreatePopupInfoByUseAddRewardItem_b__14_0(
        RewardMiniPopupExecutor___c_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v8; // x0
  MissionNaviTransitionBoardItem_o *p_UseAddRewardItemRewardInfos_k__BackingField; // x0

  if ( (byte_59326CB & 1) == 0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59326CB = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  if ( !byte_5932722 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932722 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v8 = TerminalPramsManager_TypeInfo;
  }
  p_UseAddRewardItemRewardInfos_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v8->static_fields->_UseAddRewardItemRewardInfos_k__BackingField;
  p_UseAddRewardItemRewardInfos_k__BackingField->klass = 0;
  sub_21FFBF4(p_UseAddRewardItemRewardInfos_k__BackingField, 0, v2, v3, v4, v5, v6, v7);
}


void RewardMiniPopupExecutor___c___CreatePopupInfoQuestPhaseReward_b__12_0(
        RewardMiniPopupExecutor___c_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v8; // x0
  MissionNaviTransitionBoardItem_o *p_mQuestPhaseRewardInfos; // x0

  if ( (byte_59326C9 & 1) == 0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59326C9 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v8 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestPhaseRewardInfos = (MissionNaviTransitionBoardItem_o *)&v8->static_fields->mQuestPhaseRewardInfos;
  p_mQuestPhaseRewardInfos->klass = 0;
  sub_21FFBF4(p_mQuestPhaseRewardInfos, 0, v2, v3, v4, v5, v6, v7);
}


void RewardMiniPopupExecutor___c___CreatePopupInfoQuestReward_b__13_0(
        RewardMiniPopupExecutor___c_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalPramsManager_c *v8; // x0
  MissionNaviTransitionBoardItem_o *p_mQuestRewardInfos; // x0

  if ( (byte_59326CA & 1) == 0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59326CA = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v8 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestRewardInfos = (MissionNaviTransitionBoardItem_o *)&v8->static_fields->mQuestRewardInfos;
  p_mQuestRewardInfos->klass = 0;
  sub_21FFBF4(p_mQuestRewardInfos, 0, v2, v3, v4, v5, v6, v7);
}