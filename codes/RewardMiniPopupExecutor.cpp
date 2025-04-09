void __fastcall RewardMiniPopupExecutor___ctor(RewardMiniPopupExecutor_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Queue_T__o *v5; // x20

  if ( (byte_49B59AA & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Queue_Action___ctor__, method);
    sub_1B4CF90(&System_Collections_Generic_Queue_Action__TypeInfo, v3);
    sub_1B4CF90(&Method_SingletonTemplate_RewardMiniPopupExecutor___ctor__, v4);
    byte_49B59AA = 1;
  }
  v5 = (System_Collections_Generic_Queue_T__o *)sub_1B4D1DC(System_Collections_Generic_Queue_Action__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v5,
    (const MethodInfo_36EDEE4 *)Method_System_Collections_Generic_Queue_Action___ctor__);
  this->fields.playerActionQueue = (struct System_Collections_Generic_Queue_Action__o *)v5;
  sub_1B4CF34(&this->fields);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_37B4928 *)Method_SingletonTemplate_RewardMiniPopupExecutor___ctor__);
}


void __fastcall RewardMiniPopupExecutor__AddTaskOnBattleToTerminal(
        RewardMiniPopupExecutor_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_49B599E & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_RewardMiniPopupExecutor__AddTaskOnBattleToTerminal_g__Action_2_0__, v3);
    byte_49B599E = 1;
  }
  v4 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_RewardMiniPopupExecutor__AddTaskOnBattleToTerminal_g__Action_2_0__,
    0LL);
  RewardMiniPopupExecutor__EnqueueActionAndInvokeIfFirst(this, v4, v5);
}


void __fastcall RewardMiniPopupExecutor__AddTaskOnReBattle(RewardMiniPopupExecutor_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_49B59A1 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_RewardMiniPopupExecutor__AddTaskOnReBattle_g__Action_5_0__, v3);
    byte_49B59A1 = 1;
  }
  v4 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_RewardMiniPopupExecutor__AddTaskOnReBattle_g__Action_5_0__, 0LL);
  RewardMiniPopupExecutor__EnqueueActionAndInvokeIfFirst(this, v4, v5);
}


void __fastcall RewardMiniPopupExecutor__AddTaskOnReBattleOrdealCallFreeQuest(
        RewardMiniPopupExecutor_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_49B59A0 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_RewardMiniPopupExecutor__AddTaskOnReBattleOrdealCallFreeQuest_g__Action_4_0__, v3);
    byte_49B59A0 = 1;
  }
  v4 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_RewardMiniPopupExecutor__AddTaskOnReBattleOrdealCallFreeQuest_g__Action_4_0__,
    0LL);
  RewardMiniPopupExecutor__EnqueueActionAndInvokeIfFirst(this, v4, v5);
}


RewardMiniPopup_PopupInfoBase_o *__fastcall RewardMiniPopupExecutor__CreatePopupInfoByUseAddRewardItem(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0
  TerminalPramsManager_c *v7; // x8
  RewardMiniPopupExecutor___c_c *v8; // x0
  QuestRewardInfo_array *UseAddRewardItemRewardInfos_k__BackingField; // x19
  System_Action_o *_9__14_0; // x20
  Il2CppObject *v11; // x21
  struct RewardMiniPopupExecutor___c_StaticFields *static_fields; // x0
  RewardMiniPopup_PopupInfoByUseAddRewardItem_o *v13; // x21

  if ( (byte_49B59A9 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, v1);
    sub_1B4CF90(&RewardMiniPopup_PopupInfoByUseAddRewardItem_TypeInfo, v2);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v3);
    sub_1B4CF90(&Method_RewardMiniPopupExecutor___c__CreatePopupInfoByUseAddRewardItem_b__14_0__, v4);
    sub_1B4CF90(&RewardMiniPopupExecutor___c_TypeInfo, v5);
    byte_49B59A9 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B5A16 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v1);
    byte_49B5A16 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  if ( !v6->static_fields->_UseAddRewardItemRewardInfos_k__BackingField )
    return 0LL;
  if ( !v6->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v6);
  if ( !byte_49B5A16 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v1);
    byte_49B5A16 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v8 = RewardMiniPopupExecutor___c_TypeInfo;
  UseAddRewardItemRewardInfos_k__BackingField = v7->static_fields->_UseAddRewardItemRewardInfos_k__BackingField;
  if ( !RewardMiniPopupExecutor___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RewardMiniPopupExecutor___c_TypeInfo);
    v8 = RewardMiniPopupExecutor___c_TypeInfo;
  }
  _9__14_0 = v8->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = RewardMiniPopupExecutor___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__14_0 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__14_0,
      v11,
      Method_RewardMiniPopupExecutor___c__CreatePopupInfoByUseAddRewardItem_b__14_0__,
      0LL);
    static_fields = RewardMiniPopupExecutor___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = _9__14_0;
    sub_1B4CF34(&static_fields->__9__14_0);
  }
  v13 = (RewardMiniPopup_PopupInfoByUseAddRewardItem_o *)sub_1B4D1DC(RewardMiniPopup_PopupInfoByUseAddRewardItem_TypeInfo);
  RewardMiniPopup_PopupInfoByUseAddRewardItem___ctor(v13, UseAddRewardItemRewardInfos_k__BackingField, _9__14_0, 0LL);
  return (RewardMiniPopup_PopupInfoBase_o *)v13;
}


RewardMiniPopup_PopupInfoBase_o *__fastcall RewardMiniPopupExecutor__CreatePopupInfoQuestPhaseReward(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0
  QuestRewardInfo_array *mQuestPhaseRewardInfos; // x19
  RewardMiniPopupExecutor___c_c *v8; // x0
  System_Action_o *_9__12_0; // x20
  Il2CppObject *v10; // x21
  struct RewardMiniPopupExecutor___c_StaticFields *static_fields; // x0
  RewardMiniPopup_PopupInfoQuestPhaseClear_o *v12; // x21

  if ( (byte_49B59A7 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, v1);
    sub_1B4CF90(&RewardMiniPopup_PopupInfoQuestPhaseClear_TypeInfo, v2);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v3);
    sub_1B4CF90(&Method_RewardMiniPopupExecutor___c__CreatePopupInfoQuestPhaseReward_b__12_0__, v4);
    sub_1B4CF90(&RewardMiniPopupExecutor___c_TypeInfo, v5);
    byte_49B59A7 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  mQuestPhaseRewardInfos = v6->static_fields->mQuestPhaseRewardInfos;
  if ( !mQuestPhaseRewardInfos )
    return 0LL;
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    mQuestPhaseRewardInfos = TerminalPramsManager_TypeInfo->static_fields->mQuestPhaseRewardInfos;
  }
  v8 = RewardMiniPopupExecutor___c_TypeInfo;
  if ( !RewardMiniPopupExecutor___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RewardMiniPopupExecutor___c_TypeInfo);
    v8 = RewardMiniPopupExecutor___c_TypeInfo;
  }
  _9__12_0 = v8->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = RewardMiniPopupExecutor___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__12_0 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__12_0,
      v10,
      Method_RewardMiniPopupExecutor___c__CreatePopupInfoQuestPhaseReward_b__12_0__,
      0LL);
    static_fields = RewardMiniPopupExecutor___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = _9__12_0;
    sub_1B4CF34(&static_fields->__9__12_0);
  }
  v12 = (RewardMiniPopup_PopupInfoQuestPhaseClear_o *)sub_1B4D1DC(RewardMiniPopup_PopupInfoQuestPhaseClear_TypeInfo);
  RewardMiniPopup_PopupInfoQuestPhaseClear___ctor(v12, mQuestPhaseRewardInfos, _9__12_0, 0LL);
  return (RewardMiniPopup_PopupInfoBase_o *)v12;
}


RewardMiniPopup_PopupInfoBase_o *__fastcall RewardMiniPopupExecutor__CreatePopupInfoQuestReward(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0
  QuestRewardInfo_array *mQuestRewardInfos; // x19
  RewardMiniPopupExecutor___c_c *v8; // x0
  System_Action_o *_9__13_0; // x20
  Il2CppObject *v10; // x21
  struct RewardMiniPopupExecutor___c_StaticFields *static_fields; // x0
  RewardMiniPopup_PopupInfoQuestClear_o *v12; // x21

  if ( (byte_49B59A8 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, v1);
    sub_1B4CF90(&RewardMiniPopup_PopupInfoQuestClear_TypeInfo, v2);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v3);
    sub_1B4CF90(&Method_RewardMiniPopupExecutor___c__CreatePopupInfoQuestReward_b__13_0__, v4);
    sub_1B4CF90(&RewardMiniPopupExecutor___c_TypeInfo, v5);
    byte_49B59A8 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  mQuestRewardInfos = v6->static_fields->mQuestRewardInfos;
  if ( !mQuestRewardInfos )
    return 0LL;
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    mQuestRewardInfos = TerminalPramsManager_TypeInfo->static_fields->mQuestRewardInfos;
  }
  v8 = RewardMiniPopupExecutor___c_TypeInfo;
  if ( !RewardMiniPopupExecutor___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RewardMiniPopupExecutor___c_TypeInfo);
    v8 = RewardMiniPopupExecutor___c_TypeInfo;
  }
  _9__13_0 = v8->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = RewardMiniPopupExecutor___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__13_0 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(_9__13_0, v10, Method_RewardMiniPopupExecutor___c__CreatePopupInfoQuestReward_b__13_0__, 0LL);
    static_fields = RewardMiniPopupExecutor___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = _9__13_0;
    sub_1B4CF34(&static_fields->__9__13_0);
  }
  v12 = (RewardMiniPopup_PopupInfoQuestClear_o *)sub_1B4D1DC(RewardMiniPopup_PopupInfoQuestClear_TypeInfo);
  RewardMiniPopup_PopupInfoQuestClear___ctor(v12, mQuestRewardInfos, _9__13_0, 0LL);
  return (RewardMiniPopup_PopupInfoBase_o *)v12;
}


void __fastcall RewardMiniPopupExecutor__DequeueCurrentAndInvokeNext(
        RewardMiniPopupExecutor_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Queue_T__o *playerActionQueue; // x0
  struct RewardMiniPopup_RewardMiniPopupPlayerBase_o **p_currentPlayer; // x19
  Il2CppObject *result; // [xsp+8h] [xbp-28h] BYREF
  Il2CppObject *v7; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_49B59A6 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Queue_Action__TryDequeue__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_Queue_Action__TryPeek__, v3);
    byte_49B59A6 = 1;
  }
  v7 = 0LL;
  result = 0LL;
  playerActionQueue = (System_Collections_Generic_Queue_T__o *)this->fields.playerActionQueue;
  if ( !playerActionQueue
    || (System_Collections_Generic_Queue_object___TryDequeue(
          playerActionQueue,
          &result,
          (const MethodInfo_36EE6D8 *)Method_System_Collections_Generic_Queue_Action__TryDequeue__),
        this->fields.currentPlayer = 0LL,
        p_currentPlayer = &this->fields.currentPlayer,
        sub_1B4CF34(p_currentPlayer),
        (playerActionQueue = (System_Collections_Generic_Queue_T__o *)*(p_currentPlayer - 1)) == 0LL) )
  {
    sub_1B4D1EC(playerActionQueue, method);
  }
  System_Collections_Generic_Queue_object___TryPeek(
    playerActionQueue,
    &v7,
    (const MethodInfo_36EE7E4 *)Method_System_Collections_Generic_Queue_Action__TryPeek__);
  if ( v7 )
    ((void (__fastcall *)(Il2CppClass *, void *))v7[1].monitor)(v7[4].klass, v7[2].monitor);
}


void __fastcall RewardMiniPopupExecutor__EnqueueActionAndInvokeIfFirst(
        RewardMiniPopupExecutor_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_Queue_T__o *playerActionQueue; // x8
  bool v9; // w20

  if ( (byte_49B59A5 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_Action___, action);
    sub_1B4CF90(&Method_System_Collections_Generic_Queue_Action__Enqueue__, v5);
    byte_49B59A5 = 1;
  }
  v6 = System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.playerActionQueue,
         (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_Action___);
  playerActionQueue = (System_Collections_Generic_Queue_T__o *)this->fields.playerActionQueue;
  if ( !playerActionQueue )
    goto LABEL_7;
  v9 = v6;
  System_Collections_Generic_Queue_object___Enqueue(
    playerActionQueue,
    (Il2CppObject *)action,
    (const MethodInfo_36EE4AC *)Method_System_Collections_Generic_Queue_Action__Enqueue__);
  if ( v9 )
    return;
  if ( !action )
LABEL_7:
    sub_1B4D1EC(v6, v7);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))action->fields.m_target)(
    action->fields.original_method_info,
    *(_QWORD *)&action->fields.extra_arg);
}


bool __fastcall RewardMiniPopupExecutor__HasRewardsOnBattleToTerminal(
        RewardMiniPopupExecutor_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v4; // x0

  if ( (byte_49B599F & 1) == 0 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
    byte_49B599F = 1;
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
  if ( !byte_49B5A16 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
    byte_49B5A16 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_UseAddRewardItemRewardInfos_k__BackingField != 0LL;
}


bool __fastcall RewardMiniPopupExecutor__IsBusy(RewardMiniPopupExecutor_o *this, const MethodInfo *method)
{
  struct RewardMiniPopup_RewardMiniPopupPlayerBase_o *currentPlayer; // x0

  currentPlayer = this->fields.currentPlayer;
  if ( currentPlayer )
    LOBYTE(currentPlayer) = ((__int64 (__fastcall *)(struct RewardMiniPopup_RewardMiniPopupPlayerBase_o *, void *))currentPlayer->klass->vtable._5_IsBusy.method)(
                              currentPlayer,
                              currentPlayer->klass[1]._1.image);
  return (char)currentPlayer;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RewardMiniPopupExecutor__Kill(RewardMiniPopupExecutor_o *this, bool strong, const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Queue_T__o *playerActionQueue; // x0

  if ( (byte_49B59A2 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Queue_Action__Clear__, strong);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49B59A2 = 1;
  }
  playerActionQueue = (System_Collections_Generic_Queue_T__o *)this->fields.playerActionQueue;
  if ( !playerActionQueue )
    goto LABEL_8;
  System_Collections_Generic_Queue_object___Clear(
    playerActionQueue,
    (const MethodInfo_36EE16C *)Method_System_Collections_Generic_Queue_Action__Clear__);
  if ( strong )
  {
    playerActionQueue = (System_Collections_Generic_Queue_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( playerActionQueue )
    {
      CommonUI__DestoryQuestPhaseReward((CommonUI_o *)playerActionQueue, 0LL, 0LL);
      return;
    }
LABEL_8:
    sub_1B4D1EC(playerActionQueue, strong);
  }
}


void __fastcall RewardMiniPopupExecutor__Play(
        RewardMiniPopupExecutor_o *this,
        RewardMiniPopup_RewardMiniPopupPlayerBase_o *newPlayer,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  System_Delegate_o *FinishCallback_k__BackingField; // x22
  System_Action_o *v9; // x23
  System_Delegate_o *v10; // x0
  RewardMiniPopupExecutor_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_49B59A4 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, newPlayer);
    sub_1B4CF90(&Method_RewardMiniPopupExecutor_DequeueCurrentAndInvokeNext__, v5);
    byte_49B59A4 = 1;
  }
  this->fields.currentPlayer = newPlayer;
  v6 = sub_1B4CF34(&this->fields.currentPlayer);
  if ( !newPlayer )
    sub_1B4D1EC(v6, v7);
  FinishCallback_k__BackingField = (System_Delegate_o *)newPlayer->fields._FinishCallback_k__BackingField;
  v9 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_RewardMiniPopupExecutor_DequeueCurrentAndInvokeNext__, 0LL);
  v10 = System_Delegate__Combine(FinishCallback_k__BackingField, (System_Delegate_o *)v9, 0LL);
  if ( v10 && (System_Action_c *)v10->klass != System_Action_TypeInfo )
  {
    v11 = (RewardMiniPopupExecutor_o *)sub_1B4D4AC(v10);
    RewardMiniPopupExecutor__DequeueCurrentAndInvokeNext(v11, v12);
  }
  else
  {
    newPlayer->fields._FinishCallback_k__BackingField = (struct System_Action_o *)v10;
    sub_1B4CF34(&newPlayer->fields._FinishCallback_k__BackingField);
    ((void (__fastcall *)(RewardMiniPopup_RewardMiniPopupPlayerBase_o *, Il2CppMethodPointer))newPlayer->klass->vtable._4_unknown.method)(
      newPlayer,
      newPlayer->klass->vtable._5_IsBusy.methodPtr);
  }
}


void __fastcall RewardMiniPopupExecutor__PlaySimultaneous(
        RewardMiniPopupExecutor_o *this,
        RewardMiniPopup_PopupInfoBase_array *popupInfoArray,
        const MethodInfo *method)
{
  RewardMiniPopup_RewardMiniPopupPlayerSimultaneous_o *v5; // x21
  const MethodInfo *v6; // x2

  if ( (byte_49B59A3 & 1) == 0 )
  {
    sub_1B4CF90(&RewardMiniPopup_RewardMiniPopupPlayerSimultaneous_TypeInfo, popupInfoArray);
    byte_49B59A3 = 1;
  }
  v5 = (RewardMiniPopup_RewardMiniPopupPlayerSimultaneous_o *)sub_1B4D1DC(RewardMiniPopup_RewardMiniPopupPlayerSimultaneous_TypeInfo);
  RewardMiniPopup_RewardMiniPopupPlayerSimultaneous___ctor(v5, popupInfoArray, 0LL);
  RewardMiniPopupExecutor__Play(this, (RewardMiniPopup_RewardMiniPopupPlayerBase_o *)v5, v6);
}


void __fastcall RewardMiniPopupExecutor___AddTaskOnBattleToTerminal_g__Action_2_0(
        RewardMiniPopupExecutor_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x20
  RewardMiniPopup_PopupInfoBase_o *PopupInfoQuestPhaseReward; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  RewardMiniPopup_PopupInfoBase_o *v10; // x21
  const MethodInfo *v11; // x0
  RewardMiniPopup_PopupInfoBase_o *v12; // x21
  System_Collections_Generic_IEnumerable_T__o *v13; // x0
  System_Object_array *v14; // x1
  const MethodInfo *v15; // x2
  __int64 v16; // x0

  if ( (byte_49B59AB & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_ExcludeNull_PopupInfoBase___, method);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_PopupInfoBase___, v3);
    sub_1B4CF90(&RewardMiniPopup_PopupInfoBase___TypeInfo, v4);
    byte_49B59AB = 1;
  }
  v5 = sub_1B4D038(RewardMiniPopup_PopupInfoBase___TypeInfo, 2LL);
  PopupInfoQuestPhaseReward = RewardMiniPopupExecutor__CreatePopupInfoQuestPhaseReward((const MethodInfo *)v5);
  if ( !v5 )
    sub_1B4D1EC(PopupInfoQuestPhaseReward, v7);
  v10 = PopupInfoQuestPhaseReward;
  if ( PopupInfoQuestPhaseReward )
  {
    PopupInfoQuestPhaseReward = (RewardMiniPopup_PopupInfoBase_o *)sub_1B4D0CC(
                                                                     PopupInfoQuestPhaseReward,
                                                                     *(_QWORD *)(*(_QWORD *)v5 + 64LL));
    if ( !PopupInfoQuestPhaseReward )
      goto LABEL_12;
  }
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_11;
  *(_QWORD *)(v5 + 32) = v10;
  v11 = (const MethodInfo *)sub_1B4CF34(v5 + 32);
  PopupInfoQuestPhaseReward = RewardMiniPopupExecutor__CreatePopupInfoByUseAddRewardItem(v11);
  v12 = PopupInfoQuestPhaseReward;
  if ( PopupInfoQuestPhaseReward )
  {
    PopupInfoQuestPhaseReward = (RewardMiniPopup_PopupInfoBase_o *)sub_1B4D0CC(
                                                                     PopupInfoQuestPhaseReward,
                                                                     *(_QWORD *)(*(_QWORD *)v5 + 64LL));
    if ( !PopupInfoQuestPhaseReward )
    {
LABEL_12:
      v16 = sub_1B4D210();
      sub_1B4D0B8(v16, 0LL);
    }
  }
  if ( *(_DWORD *)(v5 + 24) <= 1u )
LABEL_11:
    sub_1B4D1F4(PopupInfoQuestPhaseReward, v7, v8, v9);
  *(_QWORD *)(v5 + 40) = v12;
  sub_1B4CF34(v5 + 40);
  v13 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)v5,
          (const MethodInfo_2EECDE8 *)Method_BasicHelper_ExcludeNull_PopupInfoBase___);
  v14 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v13,
          (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_PopupInfoBase___);
  RewardMiniPopupExecutor__PlaySimultaneous(this, (RewardMiniPopup_PopupInfoBase_array *)v14, v15);
}


void __fastcall RewardMiniPopupExecutor___AddTaskOnReBattleOrdealCallFreeQuest_g__Action_4_0(
        RewardMiniPopupExecutor_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x20
  RewardMiniPopup_PopupInfoBase_o *PopupInfoQuestReward; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  RewardMiniPopup_PopupInfoBase_o *v10; // x21
  const MethodInfo *v11; // x0
  RewardMiniPopup_PopupInfoBase_o *v12; // x21
  System_Collections_Generic_IEnumerable_T__o *v13; // x0
  System_Object_array *v14; // x1
  const MethodInfo *v15; // x2
  __int64 v16; // x0

  if ( (byte_49B59AC & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_ExcludeNull_PopupInfoBase___, method);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_PopupInfoBase___, v3);
    sub_1B4CF90(&RewardMiniPopup_PopupInfoBase___TypeInfo, v4);
    byte_49B59AC = 1;
  }
  v5 = sub_1B4D038(RewardMiniPopup_PopupInfoBase___TypeInfo, 2LL);
  PopupInfoQuestReward = RewardMiniPopupExecutor__CreatePopupInfoQuestReward((const MethodInfo *)v5);
  if ( !v5 )
    sub_1B4D1EC(PopupInfoQuestReward, v7);
  v10 = PopupInfoQuestReward;
  if ( PopupInfoQuestReward )
  {
    PopupInfoQuestReward = (RewardMiniPopup_PopupInfoBase_o *)sub_1B4D0CC(
                                                                PopupInfoQuestReward,
                                                                *(_QWORD *)(*(_QWORD *)v5 + 64LL));
    if ( !PopupInfoQuestReward )
      goto LABEL_12;
  }
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_11;
  *(_QWORD *)(v5 + 32) = v10;
  v11 = (const MethodInfo *)sub_1B4CF34(v5 + 32);
  PopupInfoQuestReward = RewardMiniPopupExecutor__CreatePopupInfoByUseAddRewardItem(v11);
  v12 = PopupInfoQuestReward;
  if ( PopupInfoQuestReward )
  {
    PopupInfoQuestReward = (RewardMiniPopup_PopupInfoBase_o *)sub_1B4D0CC(
                                                                PopupInfoQuestReward,
                                                                *(_QWORD *)(*(_QWORD *)v5 + 64LL));
    if ( !PopupInfoQuestReward )
    {
LABEL_12:
      v16 = sub_1B4D210();
      sub_1B4D0B8(v16, 0LL);
    }
  }
  if ( *(_DWORD *)(v5 + 24) <= 1u )
LABEL_11:
    sub_1B4D1F4(PopupInfoQuestReward, v7, v8, v9);
  *(_QWORD *)(v5 + 40) = v12;
  sub_1B4CF34(v5 + 40);
  v13 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)v5,
          (const MethodInfo_2EECDE8 *)Method_BasicHelper_ExcludeNull_PopupInfoBase___);
  v14 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v13,
          (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_PopupInfoBase___);
  RewardMiniPopupExecutor__PlaySimultaneous(this, (RewardMiniPopup_PopupInfoBase_array *)v14, v15);
}


void __fastcall RewardMiniPopupExecutor___AddTaskOnReBattle_g__Action_5_0(
        RewardMiniPopupExecutor_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x20
  RewardMiniPopup_PopupInfoBase_o *PopupInfoByUseAddRewardItem; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  RewardMiniPopup_PopupInfoBase_o *v10; // x21
  System_Collections_Generic_IEnumerable_T__o *v11; // x0
  System_Object_array *v12; // x1
  const MethodInfo *v13; // x2
  __int64 v14; // x0

  if ( (byte_49B59AD & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_ExcludeNull_PopupInfoBase___, method);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_PopupInfoBase___, v3);
    sub_1B4CF90(&RewardMiniPopup_PopupInfoBase___TypeInfo, v4);
    byte_49B59AD = 1;
  }
  v5 = sub_1B4D038(RewardMiniPopup_PopupInfoBase___TypeInfo, 1LL);
  PopupInfoByUseAddRewardItem = RewardMiniPopupExecutor__CreatePopupInfoByUseAddRewardItem((const MethodInfo *)v5);
  if ( !v5 )
    sub_1B4D1EC(PopupInfoByUseAddRewardItem, v7);
  v10 = PopupInfoByUseAddRewardItem;
  if ( PopupInfoByUseAddRewardItem )
  {
    PopupInfoByUseAddRewardItem = (RewardMiniPopup_PopupInfoBase_o *)sub_1B4D0CC(
                                                                       PopupInfoByUseAddRewardItem,
                                                                       *(_QWORD *)(*(_QWORD *)v5 + 64LL));
    if ( !PopupInfoByUseAddRewardItem )
    {
      v14 = sub_1B4D210();
      sub_1B4D0B8(v14, 0LL);
    }
  }
  if ( !*(_DWORD *)(v5 + 24) )
    sub_1B4D1F4(PopupInfoByUseAddRewardItem, v7, v8, v9);
  *(_QWORD *)(v5 + 32) = v10;
  sub_1B4CF34(v5 + 32);
  v11 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)v5,
          (const MethodInfo_2EECDE8 *)Method_BasicHelper_ExcludeNull_PopupInfoBase___);
  v12 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_PopupInfoBase___);
  RewardMiniPopupExecutor__PlaySimultaneous(this, (RewardMiniPopup_PopupInfoBase_array *)v12, v13);
}


void __fastcall RewardMiniPopupExecutor___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_49B59AE & 1) == 0 )
  {
    sub_1B4CF90(&RewardMiniPopupExecutor___c_TypeInfo, v1);
    byte_49B59AE = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(RewardMiniPopupExecutor___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RewardMiniPopupExecutor___c_TypeInfo->static_fields->__9 = (struct RewardMiniPopupExecutor___c_o *)v2;
  sub_1B4CF34(RewardMiniPopupExecutor___c_TypeInfo->static_fields);
}


void __fastcall RewardMiniPopupExecutor___c___ctor(RewardMiniPopupExecutor___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RewardMiniPopupExecutor___c___CreatePopupInfoByUseAddRewardItem_b__14_0(
        RewardMiniPopupExecutor___c_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  struct QuestRewardInfo_array **p_UseAddRewardItemRewardInfos_k__BackingField; // x0

  if ( (byte_49B59B1 & 1) == 0 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
    byte_49B59B1 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B5A17 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
    byte_49B5A17 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  p_UseAddRewardItemRewardInfos_k__BackingField = &v2->static_fields->_UseAddRewardItemRewardInfos_k__BackingField;
  *p_UseAddRewardItemRewardInfos_k__BackingField = 0LL;
  sub_1B4CF34(p_UseAddRewardItemRewardInfos_k__BackingField);
}


void __fastcall RewardMiniPopupExecutor___c___CreatePopupInfoQuestPhaseReward_b__12_0(
        RewardMiniPopupExecutor___c_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  struct QuestRewardInfo_array **p_mQuestPhaseRewardInfos; // x0

  if ( (byte_49B59AF & 1) == 0 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
    byte_49B59AF = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestPhaseRewardInfos = &v2->static_fields->mQuestPhaseRewardInfos;
  *p_mQuestPhaseRewardInfos = 0LL;
  sub_1B4CF34(p_mQuestPhaseRewardInfos);
}


void __fastcall RewardMiniPopupExecutor___c___CreatePopupInfoQuestReward_b__13_0(
        RewardMiniPopupExecutor___c_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  struct QuestRewardInfo_array **p_mQuestRewardInfos; // x0

  if ( (byte_49B59B0 & 1) == 0 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
    byte_49B59B0 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestRewardInfos = &v2->static_fields->mQuestRewardInfos;
  *p_mQuestRewardInfos = 0LL;
  sub_1B4CF34(p_mQuestRewardInfos);
}