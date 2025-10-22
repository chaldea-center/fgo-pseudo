void RewardMiniPopupExecutor___ctor(RewardMiniPopupExecutor_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *v3; // x20

  if ( (byte_4C50D07 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Queue_Action___ctor__);
    sub_1C3E564(&System_Collections_Generic_Queue_Action__TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_RewardMiniPopupExecutor___ctor__);
    byte_4C50D07 = 1;
  }
  v3 = (System_Collections_Generic_Queue_T__o *)sub_1C3E7B0(System_Collections_Generic_Queue_Action__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v3,
    (const MethodInfo_395C07C *)Method_System_Collections_Generic_Queue_Action___ctor__);
  this->fields.playerActionQueue = (struct System_Collections_Generic_Queue_Action__o *)v3;
  sub_1C3E508(&this->fields, v3);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_39FFB90 *)Method_SingletonTemplate_RewardMiniPopupExecutor___ctor__);
}


void RewardMiniPopupExecutor__AddTaskOnBattleToTerminal(RewardMiniPopupExecutor_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C50CFB & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_RewardMiniPopupExecutor__AddTaskOnBattleToTerminal_g__Action_2_0__);
    byte_4C50CFB = 1;
  }
  v3 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
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

  if ( (byte_4C50CFE & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_RewardMiniPopupExecutor__AddTaskOnReBattle_g__Action_5_0__);
    byte_4C50CFE = 1;
  }
  v3 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_RewardMiniPopupExecutor__AddTaskOnReBattle_g__Action_5_0__, 0);
  RewardMiniPopupExecutor__EnqueueActionAndInvokeIfFirst(this, v3, v4);
}


void RewardMiniPopupExecutor__AddTaskOnReBattleOrdealCallFreeQuest(
        RewardMiniPopupExecutor_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C50CFD & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_RewardMiniPopupExecutor__AddTaskOnReBattleOrdealCallFreeQuest_g__Action_4_0__);
    byte_4C50CFD = 1;
  }
  v3 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(
    v3,
    (Il2CppObject *)this,
    Method_RewardMiniPopupExecutor__AddTaskOnReBattleOrdealCallFreeQuest_g__Action_4_0__,
    0);
  RewardMiniPopupExecutor__EnqueueActionAndInvokeIfFirst(this, v3, v4);
}


RewardMiniPopup_PopupInfoBase_o *RewardMiniPopupExecutor__CreatePopupInfoByUseAddRewardItem(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x8
  RewardMiniPopupExecutor___c_c *v3; // x0
  QuestRewardInfo_array *UseAddRewardItemRewardInfos_k__BackingField; // x19
  System_Action_o *_9__14_0; // x20
  Il2CppObject *v6; // x21
  struct RewardMiniPopupExecutor___c_StaticFields *static_fields; // x0
  RewardMiniPopup_PopupInfoByUseAddRewardItem_o *v8; // x21

  if ( (byte_4C50D06 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&RewardMiniPopup_PopupInfoByUseAddRewardItem_TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&Method_RewardMiniPopupExecutor___c__CreatePopupInfoByUseAddRewardItem_b__14_0__);
    sub_1C3E564(&RewardMiniPopupExecutor___c_TypeInfo);
    byte_4C50D06 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C50D69 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C50D69 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( !v1->static_fields->_UseAddRewardItemRewardInfos_k__BackingField )
    return 0;
  if ( !v1->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v1);
  if ( !byte_4C50D69 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C50D69 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v3 = RewardMiniPopupExecutor___c_TypeInfo;
  UseAddRewardItemRewardInfos_k__BackingField = v2->static_fields->_UseAddRewardItemRewardInfos_k__BackingField;
  if ( !RewardMiniPopupExecutor___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RewardMiniPopupExecutor___c_TypeInfo);
    v3 = RewardMiniPopupExecutor___c_TypeInfo;
  }
  _9__14_0 = v3->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = RewardMiniPopupExecutor___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__14_0 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__14_0,
      v6,
      Method_RewardMiniPopupExecutor___c__CreatePopupInfoByUseAddRewardItem_b__14_0__,
      0);
    static_fields = RewardMiniPopupExecutor___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = _9__14_0;
    sub_1C3E508(&static_fields->__9__14_0, _9__14_0);
  }
  v8 = (RewardMiniPopup_PopupInfoByUseAddRewardItem_o *)sub_1C3E7B0(RewardMiniPopup_PopupInfoByUseAddRewardItem_TypeInfo);
  RewardMiniPopup_PopupInfoByUseAddRewardItem___ctor(v8, UseAddRewardItemRewardInfos_k__BackingField, _9__14_0, 0);
  return (RewardMiniPopup_PopupInfoBase_o *)v8;
}


RewardMiniPopup_PopupInfoBase_o *RewardMiniPopupExecutor__CreatePopupInfoQuestPhaseReward(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  QuestRewardInfo_array *mQuestPhaseRewardInfos; // x19
  RewardMiniPopupExecutor___c_c *v3; // x0
  System_Action_o *_9__12_0; // x20
  Il2CppObject *v5; // x21
  struct RewardMiniPopupExecutor___c_StaticFields *static_fields; // x0
  RewardMiniPopup_PopupInfoQuestPhaseClear_o *v7; // x21

  if ( (byte_4C50D04 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&RewardMiniPopup_PopupInfoQuestPhaseClear_TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&Method_RewardMiniPopupExecutor___c__CreatePopupInfoQuestPhaseReward_b__12_0__);
    sub_1C3E564(&RewardMiniPopupExecutor___c_TypeInfo);
    byte_4C50D04 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  mQuestPhaseRewardInfos = v1->static_fields->mQuestPhaseRewardInfos;
  if ( !mQuestPhaseRewardInfos )
    return 0;
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    mQuestPhaseRewardInfos = TerminalPramsManager_TypeInfo->static_fields->mQuestPhaseRewardInfos;
  }
  v3 = RewardMiniPopupExecutor___c_TypeInfo;
  if ( !RewardMiniPopupExecutor___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RewardMiniPopupExecutor___c_TypeInfo);
    v3 = RewardMiniPopupExecutor___c_TypeInfo;
  }
  _9__12_0 = v3->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = RewardMiniPopupExecutor___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__12_0 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(_9__12_0, v5, Method_RewardMiniPopupExecutor___c__CreatePopupInfoQuestPhaseReward_b__12_0__, 0);
    static_fields = RewardMiniPopupExecutor___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = _9__12_0;
    sub_1C3E508(&static_fields->__9__12_0, _9__12_0);
  }
  v7 = (RewardMiniPopup_PopupInfoQuestPhaseClear_o *)sub_1C3E7B0(RewardMiniPopup_PopupInfoQuestPhaseClear_TypeInfo);
  RewardMiniPopup_PopupInfoQuestPhaseClear___ctor(v7, mQuestPhaseRewardInfos, _9__12_0, 0);
  return (RewardMiniPopup_PopupInfoBase_o *)v7;
}


RewardMiniPopup_PopupInfoBase_o *RewardMiniPopupExecutor__CreatePopupInfoQuestReward(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  QuestRewardInfo_array *mQuestRewardInfos; // x19
  RewardMiniPopupExecutor___c_c *v3; // x0
  System_Action_o *_9__13_0; // x20
  Il2CppObject *v5; // x21
  struct RewardMiniPopupExecutor___c_StaticFields *static_fields; // x0
  RewardMiniPopup_PopupInfoQuestClear_o *v7; // x21

  if ( (byte_4C50D05 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&RewardMiniPopup_PopupInfoQuestClear_TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&Method_RewardMiniPopupExecutor___c__CreatePopupInfoQuestReward_b__13_0__);
    sub_1C3E564(&RewardMiniPopupExecutor___c_TypeInfo);
    byte_4C50D05 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  mQuestRewardInfos = v1->static_fields->mQuestRewardInfos;
  if ( !mQuestRewardInfos )
    return 0;
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    mQuestRewardInfos = TerminalPramsManager_TypeInfo->static_fields->mQuestRewardInfos;
  }
  v3 = RewardMiniPopupExecutor___c_TypeInfo;
  if ( !RewardMiniPopupExecutor___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RewardMiniPopupExecutor___c_TypeInfo);
    v3 = RewardMiniPopupExecutor___c_TypeInfo;
  }
  _9__13_0 = v3->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = RewardMiniPopupExecutor___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__13_0 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(_9__13_0, v5, Method_RewardMiniPopupExecutor___c__CreatePopupInfoQuestReward_b__13_0__, 0);
    static_fields = RewardMiniPopupExecutor___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = _9__13_0;
    sub_1C3E508(&static_fields->__9__13_0, _9__13_0);
  }
  v7 = (RewardMiniPopup_PopupInfoQuestClear_o *)sub_1C3E7B0(RewardMiniPopup_PopupInfoQuestClear_TypeInfo);
  RewardMiniPopup_PopupInfoQuestClear___ctor(v7, mQuestRewardInfos, _9__13_0, 0);
  return (RewardMiniPopup_PopupInfoBase_o *)v7;
}


void RewardMiniPopupExecutor__DequeueCurrentAndInvokeNext(RewardMiniPopupExecutor_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *playerActionQueue; // x0
  struct RewardMiniPopup_RewardMiniPopupPlayerBase_o **p_currentPlayer; // x19
  Il2CppObject *result; // [xsp+8h] [xbp-28h] BYREF
  Il2CppObject *v6; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4C50D03 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Queue_Action__TryDequeue__);
    sub_1C3E564(&Method_System_Collections_Generic_Queue_Action__TryPeek__);
    byte_4C50D03 = 1;
  }
  v6 = 0;
  result = 0;
  playerActionQueue = (System_Collections_Generic_Queue_T__o *)this->fields.playerActionQueue;
  if ( !playerActionQueue
    || (System_Collections_Generic_Queue_object___TryDequeue(
          playerActionQueue,
          &result,
          (const MethodInfo_395C870 *)Method_System_Collections_Generic_Queue_Action__TryDequeue__),
        this->fields.currentPlayer = 0,
        p_currentPlayer = &this->fields.currentPlayer,
        sub_1C3E508(p_currentPlayer, 0),
        (playerActionQueue = (System_Collections_Generic_Queue_T__o *)*(p_currentPlayer - 1)) == 0) )
  {
    sub_1C3E7C0(playerActionQueue, method);
  }
  System_Collections_Generic_Queue_object___TryPeek(
    playerActionQueue,
    &v6,
    (const MethodInfo_395C97C *)Method_System_Collections_Generic_Queue_Action__TryPeek__);
  if ( v6 )
    ((void (__fastcall *)(Il2CppClass *, void *))v6[1].monitor)(v6[4].klass, v6[2].monitor);
}


void RewardMiniPopupExecutor__EnqueueActionAndInvokeIfFirst(
        RewardMiniPopupExecutor_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_Queue_T__o *playerActionQueue; // x8
  bool v8; // w20

  if ( (byte_4C50D02 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_Action___);
    sub_1C3E564(&Method_System_Collections_Generic_Queue_Action__Enqueue__);
    byte_4C50D02 = 1;
  }
  v5 = System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.playerActionQueue,
         (const MethodInfo_31055E8 *)Method_System_Linq_Enumerable_Any_Action___);
  playerActionQueue = (System_Collections_Generic_Queue_T__o *)this->fields.playerActionQueue;
  if ( !playerActionQueue )
    goto LABEL_7;
  v8 = v5;
  System_Collections_Generic_Queue_object___Enqueue(
    playerActionQueue,
    (Il2CppObject *)action,
    (const MethodInfo_395C644 *)Method_System_Collections_Generic_Queue_Action__Enqueue__);
  if ( v8 )
    return;
  if ( !action )
LABEL_7:
    sub_1C3E7C0(v5, v6);
  ((void (__fastcall *)(intptr_t, intptr_t))action->fields.invoke_impl)(
    action->fields.method_code,
    action->fields.method);
}


bool RewardMiniPopupExecutor__HasRewardsOnBattleToTerminal(RewardMiniPopupExecutor_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4C50CFC & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C50CFC = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  if ( v2->static_fields->mQuestPhaseRewardInfos )
    return 1;
  if ( !v2->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v2);
  if ( !byte_4C50D69 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C50D69 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_UseAddRewardItemRewardInfos_k__BackingField != 0;
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

  if ( (byte_4C50CFF & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Queue_Action__Clear__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C50CFF = 1;
  }
  playerActionQueue = (System_Collections_Generic_Queue_T__o *)this->fields.playerActionQueue;
  if ( !playerActionQueue )
    goto LABEL_8;
  System_Collections_Generic_Queue_object___Clear(
    playerActionQueue,
    (const MethodInfo_395C304 *)Method_System_Collections_Generic_Queue_Action__Clear__);
  if ( strong )
  {
    playerActionQueue = (System_Collections_Generic_Queue_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( playerActionQueue )
    {
      CommonUI__DestoryQuestPhaseReward((CommonUI_o *)playerActionQueue, 0, 0);
      return;
    }
LABEL_8:
    sub_1C3E7C0(playerActionQueue, strong);
  }
}


void RewardMiniPopupExecutor__Play(
        RewardMiniPopupExecutor_o *this,
        RewardMiniPopup_RewardMiniPopupPlayerBase_o *newPlayer,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_Delegate_o *FinishCallback_k__BackingField; // x22
  System_Action_o *v8; // x23
  System_Delegate_o *v9; // x0
  RewardMiniPopupExecutor_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C50D01 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_RewardMiniPopupExecutor_DequeueCurrentAndInvokeNext__);
    byte_4C50D01 = 1;
  }
  this->fields.currentPlayer = newPlayer;
  v5 = sub_1C3E508(&this->fields.currentPlayer, newPlayer);
  if ( !newPlayer )
    sub_1C3E7C0(v5, v6);
  FinishCallback_k__BackingField = (System_Delegate_o *)newPlayer->fields._FinishCallback_k__BackingField;
  v8 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_RewardMiniPopupExecutor_DequeueCurrentAndInvokeNext__, 0);
  v9 = System_Delegate__Combine(FinishCallback_k__BackingField, (System_Delegate_o *)v8, 0);
  if ( v9 && (System_Action_c *)v9->klass != System_Action_TypeInfo )
  {
    v10 = (RewardMiniPopupExecutor_o *)sub_1C3EA80(v9);
    RewardMiniPopupExecutor__DequeueCurrentAndInvokeNext(v10, v11);
  }
  else
  {
    newPlayer->fields._FinishCallback_k__BackingField = (struct System_Action_o *)v9;
    sub_1C3E508(&newPlayer->fields._FinishCallback_k__BackingField, v9);
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

  if ( (byte_4C50D00 & 1) == 0 )
  {
    sub_1C3E564(&RewardMiniPopup_RewardMiniPopupPlayerSimultaneous_TypeInfo);
    byte_4C50D00 = 1;
  }
  v5 = (RewardMiniPopup_RewardMiniPopupPlayerSimultaneous_o *)sub_1C3E7B0(RewardMiniPopup_RewardMiniPopupPlayerSimultaneous_TypeInfo);
  RewardMiniPopup_RewardMiniPopupPlayerSimultaneous___ctor(v5, popupInfoArray, 0);
  RewardMiniPopupExecutor__Play(this, (RewardMiniPopup_RewardMiniPopupPlayerBase_o *)v5, v6);
}


void RewardMiniPopupExecutor___AddTaskOnBattleToTerminal_g__Action_2_0(
        RewardMiniPopupExecutor_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  RewardMiniPopup_PopupInfoBase_o *PopupInfoQuestPhaseReward; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  RewardMiniPopup_PopupInfoBase_o *v7; // x21
  const MethodInfo *v8; // x0
  RewardMiniPopup_PopupInfoBase_o *v9; // x21
  System_Collections_Generic_IEnumerable_T__o *v10; // x0
  System_Object_array *v11; // x1
  const MethodInfo *v12; // x2
  __int64 v13; // x0

  if ( (byte_4C50D08 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_ExcludeNull_PopupInfoBase___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_PopupInfoBase___);
    sub_1C3E564(&RewardMiniPopup_PopupInfoBase___TypeInfo);
    byte_4C50D08 = 1;
  }
  v3 = sub_1C3E60C(RewardMiniPopup_PopupInfoBase___TypeInfo, 2);
  PopupInfoQuestPhaseReward = RewardMiniPopupExecutor__CreatePopupInfoQuestPhaseReward((const MethodInfo *)v3);
  if ( !v3 )
    sub_1C3E7C0(PopupInfoQuestPhaseReward, v5);
  v7 = PopupInfoQuestPhaseReward;
  if ( PopupInfoQuestPhaseReward )
  {
    PopupInfoQuestPhaseReward = (RewardMiniPopup_PopupInfoBase_o *)sub_1C3E6A0(
                                                                     PopupInfoQuestPhaseReward,
                                                                     *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !PopupInfoQuestPhaseReward )
      goto LABEL_12;
  }
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_11;
  *(_QWORD *)(v3 + 32) = v7;
  v8 = (const MethodInfo *)sub_1C3E508(v3 + 32, v7);
  PopupInfoQuestPhaseReward = RewardMiniPopupExecutor__CreatePopupInfoByUseAddRewardItem(v8);
  v9 = PopupInfoQuestPhaseReward;
  if ( PopupInfoQuestPhaseReward )
  {
    PopupInfoQuestPhaseReward = (RewardMiniPopup_PopupInfoBase_o *)sub_1C3E6A0(
                                                                     PopupInfoQuestPhaseReward,
                                                                     *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !PopupInfoQuestPhaseReward )
    {
LABEL_12:
      v13 = sub_1C3E7E4();
      sub_1C3E68C(v13, 0);
    }
  }
  if ( *(_DWORD *)(v3 + 24) <= 1u )
LABEL_11:
    sub_1C3E7C8(PopupInfoQuestPhaseReward, v5, v6);
  *(_QWORD *)(v3 + 40) = v9;
  sub_1C3E508(v3 + 40, v9);
  v10 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)v3,
          (const MethodInfo_30E3764 *)Method_BasicHelper_ExcludeNull_PopupInfoBase___);
  v11 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v10,
          (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_PopupInfoBase___);
  RewardMiniPopupExecutor__PlaySimultaneous(this, (RewardMiniPopup_PopupInfoBase_array *)v11, v12);
}


void RewardMiniPopupExecutor___AddTaskOnReBattleOrdealCallFreeQuest_g__Action_4_0(
        RewardMiniPopupExecutor_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  RewardMiniPopup_PopupInfoBase_o *PopupInfoQuestReward; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  RewardMiniPopup_PopupInfoBase_o *v7; // x21
  const MethodInfo *v8; // x0
  RewardMiniPopup_PopupInfoBase_o *v9; // x21
  System_Collections_Generic_IEnumerable_T__o *v10; // x0
  System_Object_array *v11; // x1
  const MethodInfo *v12; // x2
  __int64 v13; // x0

  if ( (byte_4C50D09 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_ExcludeNull_PopupInfoBase___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_PopupInfoBase___);
    sub_1C3E564(&RewardMiniPopup_PopupInfoBase___TypeInfo);
    byte_4C50D09 = 1;
  }
  v3 = sub_1C3E60C(RewardMiniPopup_PopupInfoBase___TypeInfo, 2);
  PopupInfoQuestReward = RewardMiniPopupExecutor__CreatePopupInfoQuestReward((const MethodInfo *)v3);
  if ( !v3 )
    sub_1C3E7C0(PopupInfoQuestReward, v5);
  v7 = PopupInfoQuestReward;
  if ( PopupInfoQuestReward )
  {
    PopupInfoQuestReward = (RewardMiniPopup_PopupInfoBase_o *)sub_1C3E6A0(
                                                                PopupInfoQuestReward,
                                                                *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !PopupInfoQuestReward )
      goto LABEL_12;
  }
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_11;
  *(_QWORD *)(v3 + 32) = v7;
  v8 = (const MethodInfo *)sub_1C3E508(v3 + 32, v7);
  PopupInfoQuestReward = RewardMiniPopupExecutor__CreatePopupInfoByUseAddRewardItem(v8);
  v9 = PopupInfoQuestReward;
  if ( PopupInfoQuestReward )
  {
    PopupInfoQuestReward = (RewardMiniPopup_PopupInfoBase_o *)sub_1C3E6A0(
                                                                PopupInfoQuestReward,
                                                                *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !PopupInfoQuestReward )
    {
LABEL_12:
      v13 = sub_1C3E7E4();
      sub_1C3E68C(v13, 0);
    }
  }
  if ( *(_DWORD *)(v3 + 24) <= 1u )
LABEL_11:
    sub_1C3E7C8(PopupInfoQuestReward, v5, v6);
  *(_QWORD *)(v3 + 40) = v9;
  sub_1C3E508(v3 + 40, v9);
  v10 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)v3,
          (const MethodInfo_30E3764 *)Method_BasicHelper_ExcludeNull_PopupInfoBase___);
  v11 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v10,
          (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_PopupInfoBase___);
  RewardMiniPopupExecutor__PlaySimultaneous(this, (RewardMiniPopup_PopupInfoBase_array *)v11, v12);
}


void RewardMiniPopupExecutor___AddTaskOnReBattle_g__Action_5_0(
        RewardMiniPopupExecutor_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  RewardMiniPopup_PopupInfoBase_o *PopupInfoByUseAddRewardItem; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  RewardMiniPopup_PopupInfoBase_o *v7; // x21
  System_Collections_Generic_IEnumerable_T__o *v8; // x0
  System_Object_array *v9; // x1
  const MethodInfo *v10; // x2
  __int64 v11; // x0

  if ( (byte_4C50D0A & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_ExcludeNull_PopupInfoBase___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_PopupInfoBase___);
    sub_1C3E564(&RewardMiniPopup_PopupInfoBase___TypeInfo);
    byte_4C50D0A = 1;
  }
  v3 = sub_1C3E60C(RewardMiniPopup_PopupInfoBase___TypeInfo, 1);
  PopupInfoByUseAddRewardItem = RewardMiniPopupExecutor__CreatePopupInfoByUseAddRewardItem((const MethodInfo *)v3);
  if ( !v3 )
    sub_1C3E7C0(PopupInfoByUseAddRewardItem, v5);
  v7 = PopupInfoByUseAddRewardItem;
  if ( PopupInfoByUseAddRewardItem )
  {
    PopupInfoByUseAddRewardItem = (RewardMiniPopup_PopupInfoBase_o *)sub_1C3E6A0(
                                                                       PopupInfoByUseAddRewardItem,
                                                                       *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !PopupInfoByUseAddRewardItem )
    {
      v11 = sub_1C3E7E4();
      sub_1C3E68C(v11, 0);
    }
  }
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C3E7C8(PopupInfoByUseAddRewardItem, v5, v6);
  *(_QWORD *)(v3 + 32) = v7;
  sub_1C3E508(v3 + 32, v7);
  v8 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)v3,
         (const MethodInfo_30E3764 *)Method_BasicHelper_ExcludeNull_PopupInfoBase___);
  v9 = System_Linq_Enumerable__ToArray_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v8,
         (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_PopupInfoBase___);
  RewardMiniPopupExecutor__PlaySimultaneous(this, (RewardMiniPopup_PopupInfoBase_array *)v9, v10);
}


void RewardMiniPopupExecutor___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C50D0B & 1) == 0 )
  {
    sub_1C3E564(&RewardMiniPopupExecutor___c_TypeInfo);
    byte_4C50D0B = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(RewardMiniPopupExecutor___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RewardMiniPopupExecutor___c_TypeInfo->static_fields->__9 = (struct RewardMiniPopupExecutor___c_o *)v1;
  sub_1C3E508(RewardMiniPopupExecutor___c_TypeInfo->static_fields, v1);
}


void RewardMiniPopupExecutor___c___ctor(RewardMiniPopupExecutor___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RewardMiniPopupExecutor___c___CreatePopupInfoByUseAddRewardItem_b__14_0(
        RewardMiniPopupExecutor___c_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  struct QuestRewardInfo_array **p_UseAddRewardItemRewardInfos_k__BackingField; // x0

  if ( (byte_4C50D0E & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C50D0E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C50D6A )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C50D6A = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  p_UseAddRewardItemRewardInfos_k__BackingField = &v2->static_fields->_UseAddRewardItemRewardInfos_k__BackingField;
  *p_UseAddRewardItemRewardInfos_k__BackingField = 0;
  sub_1C3E508(p_UseAddRewardItemRewardInfos_k__BackingField, 0);
}


void RewardMiniPopupExecutor___c___CreatePopupInfoQuestPhaseReward_b__12_0(
        RewardMiniPopupExecutor___c_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  struct QuestRewardInfo_array **p_mQuestPhaseRewardInfos; // x0

  if ( (byte_4C50D0C & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C50D0C = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestPhaseRewardInfos = &v2->static_fields->mQuestPhaseRewardInfos;
  *p_mQuestPhaseRewardInfos = 0;
  sub_1C3E508(p_mQuestPhaseRewardInfos, 0);
}


void RewardMiniPopupExecutor___c___CreatePopupInfoQuestReward_b__13_0(
        RewardMiniPopupExecutor___c_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  struct QuestRewardInfo_array **p_mQuestRewardInfos; // x0

  if ( (byte_4C50D0D & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C50D0D = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestRewardInfos = &v2->static_fields->mQuestRewardInfos;
  *p_mQuestRewardInfos = 0;
  sub_1C3E508(p_mQuestRewardInfos, 0);
}