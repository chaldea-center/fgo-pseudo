void RewardMiniPopupExecutor___ctor(RewardMiniPopupExecutor_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *v3; // x20

  if ( (byte_4CB024F & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_Action___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Queue_Action__TypeInfo);
    sub_1C6BA08(&Method_SingletonTemplate_RewardMiniPopupExecutor___ctor__);
    byte_4CB024F = 1;
  }
  v3 = (System_Collections_Generic_Queue_T__o *)sub_1C6BC54(System_Collections_Generic_Queue_Action__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v3,
    (const MethodInfo_39AAE04 *)Method_System_Collections_Generic_Queue_Action___ctor__);
  this->fields.playerActionQueue = (struct System_Collections_Generic_Queue_Action__o *)v3;
  sub_1C6B9AC(&this->fields, v3);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_3A4F99C *)Method_SingletonTemplate_RewardMiniPopupExecutor___ctor__);
}


void RewardMiniPopupExecutor__AddTaskOnBattleToTerminal(RewardMiniPopupExecutor_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4CB0243 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_RewardMiniPopupExecutor__AddTaskOnBattleToTerminal_g__Action_2_0__);
    byte_4CB0243 = 1;
  }
  v3 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
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

  if ( (byte_4CB0246 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_RewardMiniPopupExecutor__AddTaskOnReBattle_g__Action_5_0__);
    byte_4CB0246 = 1;
  }
  v3 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_RewardMiniPopupExecutor__AddTaskOnReBattle_g__Action_5_0__, 0);
  RewardMiniPopupExecutor__EnqueueActionAndInvokeIfFirst(this, v3, v4);
}


void RewardMiniPopupExecutor__AddTaskOnReBattleOrdealCallFreeQuest(
        RewardMiniPopupExecutor_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4CB0245 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_RewardMiniPopupExecutor__AddTaskOnReBattleOrdealCallFreeQuest_g__Action_4_0__);
    byte_4CB0245 = 1;
  }
  v3 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
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

  if ( (byte_4CB024E & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&RewardMiniPopup_PopupInfoByUseAddRewardItem_TypeInfo);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    sub_1C6BA08(&Method_RewardMiniPopupExecutor___c__CreatePopupInfoByUseAddRewardItem_b__14_0__);
    sub_1C6BA08(&RewardMiniPopupExecutor___c_TypeInfo);
    byte_4CB024E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CB02B1 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB02B1 = 1;
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
  if ( !byte_4CB02B1 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB02B1 = 1;
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
    _9__14_0 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__14_0,
      v6,
      Method_RewardMiniPopupExecutor___c__CreatePopupInfoByUseAddRewardItem_b__14_0__,
      0);
    static_fields = RewardMiniPopupExecutor___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = _9__14_0;
    sub_1C6B9AC(&static_fields->__9__14_0, _9__14_0);
  }
  v8 = (RewardMiniPopup_PopupInfoByUseAddRewardItem_o *)sub_1C6BC54(RewardMiniPopup_PopupInfoByUseAddRewardItem_TypeInfo);
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

  if ( (byte_4CB024C & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&RewardMiniPopup_PopupInfoQuestPhaseClear_TypeInfo);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    sub_1C6BA08(&Method_RewardMiniPopupExecutor___c__CreatePopupInfoQuestPhaseReward_b__12_0__);
    sub_1C6BA08(&RewardMiniPopupExecutor___c_TypeInfo);
    byte_4CB024C = 1;
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
    _9__12_0 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(_9__12_0, v5, Method_RewardMiniPopupExecutor___c__CreatePopupInfoQuestPhaseReward_b__12_0__, 0);
    static_fields = RewardMiniPopupExecutor___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = _9__12_0;
    sub_1C6B9AC(&static_fields->__9__12_0, _9__12_0);
  }
  v7 = (RewardMiniPopup_PopupInfoQuestPhaseClear_o *)sub_1C6BC54(RewardMiniPopup_PopupInfoQuestPhaseClear_TypeInfo);
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

  if ( (byte_4CB024D & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&RewardMiniPopup_PopupInfoQuestClear_TypeInfo);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    sub_1C6BA08(&Method_RewardMiniPopupExecutor___c__CreatePopupInfoQuestReward_b__13_0__);
    sub_1C6BA08(&RewardMiniPopupExecutor___c_TypeInfo);
    byte_4CB024D = 1;
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
    _9__13_0 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(_9__13_0, v5, Method_RewardMiniPopupExecutor___c__CreatePopupInfoQuestReward_b__13_0__, 0);
    static_fields = RewardMiniPopupExecutor___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = _9__13_0;
    sub_1C6B9AC(&static_fields->__9__13_0, _9__13_0);
  }
  v7 = (RewardMiniPopup_PopupInfoQuestClear_o *)sub_1C6BC54(RewardMiniPopup_PopupInfoQuestClear_TypeInfo);
  RewardMiniPopup_PopupInfoQuestClear___ctor(v7, mQuestRewardInfos, _9__13_0, 0);
  return (RewardMiniPopup_PopupInfoBase_o *)v7;
}


void RewardMiniPopupExecutor__DequeueCurrentAndInvokeNext(RewardMiniPopupExecutor_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *playerActionQueue; // x0
  struct RewardMiniPopup_RewardMiniPopupPlayerBase_o **p_currentPlayer; // x19
  Il2CppObject *result; // [xsp+8h] [xbp-28h] BYREF
  Il2CppObject *v6; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4CB024B & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_Action__TryDequeue__);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_Action__TryPeek__);
    byte_4CB024B = 1;
  }
  v6 = 0;
  result = 0;
  playerActionQueue = (System_Collections_Generic_Queue_T__o *)this->fields.playerActionQueue;
  if ( !playerActionQueue
    || (System_Collections_Generic_Queue_object___TryDequeue(
          playerActionQueue,
          &result,
          (const MethodInfo_39AB5F8 *)Method_System_Collections_Generic_Queue_Action__TryDequeue__),
        this->fields.currentPlayer = 0,
        p_currentPlayer = &this->fields.currentPlayer,
        sub_1C6B9AC(p_currentPlayer, 0),
        (playerActionQueue = (System_Collections_Generic_Queue_T__o *)*(p_currentPlayer - 1)) == 0) )
  {
    sub_1C6BC60(playerActionQueue, method);
  }
  System_Collections_Generic_Queue_object___TryPeek(
    playerActionQueue,
    &v6,
    (const MethodInfo_39AB704 *)Method_System_Collections_Generic_Queue_Action__TryPeek__);
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

  if ( (byte_4CB024A & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Any_Action___);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_Action__Enqueue__);
    byte_4CB024A = 1;
  }
  v5 = System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.playerActionQueue,
         (const MethodInfo_3146EE0 *)Method_System_Linq_Enumerable_Any_Action___);
  playerActionQueue = (System_Collections_Generic_Queue_T__o *)this->fields.playerActionQueue;
  if ( !playerActionQueue )
    goto LABEL_7;
  v8 = v5;
  System_Collections_Generic_Queue_object___Enqueue(
    playerActionQueue,
    (Il2CppObject *)action,
    (const MethodInfo_39AB3CC *)Method_System_Collections_Generic_Queue_Action__Enqueue__);
  if ( v8 )
    return;
  if ( !action )
LABEL_7:
    sub_1C6BC60(v5, v6);
  ((void (__fastcall *)(intptr_t, intptr_t))action->fields.invoke_impl)(
    action->fields.method_code,
    action->fields.method);
}


bool RewardMiniPopupExecutor__HasRewardsOnBattleToTerminal(RewardMiniPopupExecutor_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4CB0244 & 1) == 0 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB0244 = 1;
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
  if ( !byte_4CB02B1 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB02B1 = 1;
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

  if ( (byte_4CB0247 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_Action__Clear__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB0247 = 1;
  }
  playerActionQueue = (System_Collections_Generic_Queue_T__o *)this->fields.playerActionQueue;
  if ( !playerActionQueue )
    goto LABEL_8;
  System_Collections_Generic_Queue_object___Clear(
    playerActionQueue,
    (const MethodInfo_39AB08C *)Method_System_Collections_Generic_Queue_Action__Clear__);
  if ( strong )
  {
    playerActionQueue = (System_Collections_Generic_Queue_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( playerActionQueue )
    {
      CommonUI__DestoryQuestPhaseReward((CommonUI_o *)playerActionQueue, 0, 0);
      return;
    }
LABEL_8:
    sub_1C6BC60(playerActionQueue, strong);
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

  if ( (byte_4CB0249 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_RewardMiniPopupExecutor_DequeueCurrentAndInvokeNext__);
    byte_4CB0249 = 1;
  }
  this->fields.currentPlayer = newPlayer;
  v5 = sub_1C6B9AC(&this->fields.currentPlayer, newPlayer);
  if ( !newPlayer )
    sub_1C6BC60(v5, v6);
  FinishCallback_k__BackingField = (System_Delegate_o *)newPlayer->fields._FinishCallback_k__BackingField;
  v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_RewardMiniPopupExecutor_DequeueCurrentAndInvokeNext__, 0);
  v9 = System_Delegate__Combine(FinishCallback_k__BackingField, (System_Delegate_o *)v8, 0);
  if ( v9 && (System_Action_c *)v9->klass != System_Action_TypeInfo )
  {
    v10 = (RewardMiniPopupExecutor_o *)sub_1C6BFFC(v9);
    RewardMiniPopupExecutor__DequeueCurrentAndInvokeNext(v10, v11);
  }
  else
  {
    newPlayer->fields._FinishCallback_k__BackingField = (struct System_Action_o *)v9;
    sub_1C6B9AC(&newPlayer->fields._FinishCallback_k__BackingField, v9);
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

  if ( (byte_4CB0248 & 1) == 0 )
  {
    sub_1C6BA08(&RewardMiniPopup_RewardMiniPopupPlayerSimultaneous_TypeInfo);
    byte_4CB0248 = 1;
  }
  v5 = (RewardMiniPopup_RewardMiniPopupPlayerSimultaneous_o *)sub_1C6BC54(RewardMiniPopup_RewardMiniPopupPlayerSimultaneous_TypeInfo);
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
  RewardMiniPopup_PopupInfoBase_o *v6; // x21
  const MethodInfo *v7; // x0
  RewardMiniPopup_PopupInfoBase_o *v8; // x21
  System_Collections_Generic_IEnumerable_T__o *v9; // x0
  System_Object_array *v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x0

  if ( (byte_4CB0250 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_ExcludeNull_PopupInfoBase___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_PopupInfoBase___);
    sub_1C6BA08(&RewardMiniPopup_PopupInfoBase___TypeInfo);
    byte_4CB0250 = 1;
  }
  v3 = sub_1C6BAB0(RewardMiniPopup_PopupInfoBase___TypeInfo, 2);
  PopupInfoQuestPhaseReward = RewardMiniPopupExecutor__CreatePopupInfoQuestPhaseReward((const MethodInfo *)v3);
  if ( !v3 )
    sub_1C6BC60(PopupInfoQuestPhaseReward, v5);
  v6 = PopupInfoQuestPhaseReward;
  if ( PopupInfoQuestPhaseReward )
  {
    PopupInfoQuestPhaseReward = (RewardMiniPopup_PopupInfoBase_o *)sub_1C6BB44(
                                                                     PopupInfoQuestPhaseReward,
                                                                     *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !PopupInfoQuestPhaseReward )
      goto LABEL_12;
  }
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_11;
  *(_QWORD *)(v3 + 32) = v6;
  v7 = (const MethodInfo *)sub_1C6B9AC(v3 + 32, v6);
  PopupInfoQuestPhaseReward = RewardMiniPopupExecutor__CreatePopupInfoByUseAddRewardItem(v7);
  v8 = PopupInfoQuestPhaseReward;
  if ( PopupInfoQuestPhaseReward )
  {
    PopupInfoQuestPhaseReward = (RewardMiniPopup_PopupInfoBase_o *)sub_1C6BB44(
                                                                     PopupInfoQuestPhaseReward,
                                                                     *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !PopupInfoQuestPhaseReward )
    {
LABEL_12:
      v12 = sub_1C6BC84();
      sub_1C6BB30(v12, 0);
    }
  }
  if ( *(_DWORD *)(v3 + 24) <= 1u )
LABEL_11:
    sub_1C6BC68(PopupInfoQuestPhaseReward);
  *(_QWORD *)(v3 + 40) = v8;
  sub_1C6B9AC(v3 + 40, v8);
  v9 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)v3,
         (const MethodInfo_3124D84 *)Method_BasicHelper_ExcludeNull_PopupInfoBase___);
  v10 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v9,
          (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_PopupInfoBase___);
  RewardMiniPopupExecutor__PlaySimultaneous(this, (RewardMiniPopup_PopupInfoBase_array *)v10, v11);
}


void RewardMiniPopupExecutor___AddTaskOnReBattleOrdealCallFreeQuest_g__Action_4_0(
        RewardMiniPopupExecutor_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  RewardMiniPopup_PopupInfoBase_o *PopupInfoQuestReward; // x0
  __int64 v5; // x1
  RewardMiniPopup_PopupInfoBase_o *v6; // x21
  const MethodInfo *v7; // x0
  RewardMiniPopup_PopupInfoBase_o *v8; // x21
  System_Collections_Generic_IEnumerable_T__o *v9; // x0
  System_Object_array *v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x0

  if ( (byte_4CB0251 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_ExcludeNull_PopupInfoBase___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_PopupInfoBase___);
    sub_1C6BA08(&RewardMiniPopup_PopupInfoBase___TypeInfo);
    byte_4CB0251 = 1;
  }
  v3 = sub_1C6BAB0(RewardMiniPopup_PopupInfoBase___TypeInfo, 2);
  PopupInfoQuestReward = RewardMiniPopupExecutor__CreatePopupInfoQuestReward((const MethodInfo *)v3);
  if ( !v3 )
    sub_1C6BC60(PopupInfoQuestReward, v5);
  v6 = PopupInfoQuestReward;
  if ( PopupInfoQuestReward )
  {
    PopupInfoQuestReward = (RewardMiniPopup_PopupInfoBase_o *)sub_1C6BB44(
                                                                PopupInfoQuestReward,
                                                                *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !PopupInfoQuestReward )
      goto LABEL_12;
  }
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_11;
  *(_QWORD *)(v3 + 32) = v6;
  v7 = (const MethodInfo *)sub_1C6B9AC(v3 + 32, v6);
  PopupInfoQuestReward = RewardMiniPopupExecutor__CreatePopupInfoByUseAddRewardItem(v7);
  v8 = PopupInfoQuestReward;
  if ( PopupInfoQuestReward )
  {
    PopupInfoQuestReward = (RewardMiniPopup_PopupInfoBase_o *)sub_1C6BB44(
                                                                PopupInfoQuestReward,
                                                                *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !PopupInfoQuestReward )
    {
LABEL_12:
      v12 = sub_1C6BC84();
      sub_1C6BB30(v12, 0);
    }
  }
  if ( *(_DWORD *)(v3 + 24) <= 1u )
LABEL_11:
    sub_1C6BC68(PopupInfoQuestReward);
  *(_QWORD *)(v3 + 40) = v8;
  sub_1C6B9AC(v3 + 40, v8);
  v9 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)v3,
         (const MethodInfo_3124D84 *)Method_BasicHelper_ExcludeNull_PopupInfoBase___);
  v10 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v9,
          (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_PopupInfoBase___);
  RewardMiniPopupExecutor__PlaySimultaneous(this, (RewardMiniPopup_PopupInfoBase_array *)v10, v11);
}


void RewardMiniPopupExecutor___AddTaskOnReBattle_g__Action_5_0(
        RewardMiniPopupExecutor_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  RewardMiniPopup_PopupInfoBase_o *PopupInfoByUseAddRewardItem; // x0
  __int64 v5; // x1
  RewardMiniPopup_PopupInfoBase_o *v6; // x21
  System_Collections_Generic_IEnumerable_T__o *v7; // x0
  System_Object_array *v8; // x1
  const MethodInfo *v9; // x2
  __int64 v10; // x0

  if ( (byte_4CB0252 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_ExcludeNull_PopupInfoBase___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_PopupInfoBase___);
    sub_1C6BA08(&RewardMiniPopup_PopupInfoBase___TypeInfo);
    byte_4CB0252 = 1;
  }
  v3 = sub_1C6BAB0(RewardMiniPopup_PopupInfoBase___TypeInfo, 1);
  PopupInfoByUseAddRewardItem = RewardMiniPopupExecutor__CreatePopupInfoByUseAddRewardItem((const MethodInfo *)v3);
  if ( !v3 )
    sub_1C6BC60(PopupInfoByUseAddRewardItem, v5);
  v6 = PopupInfoByUseAddRewardItem;
  if ( PopupInfoByUseAddRewardItem )
  {
    PopupInfoByUseAddRewardItem = (RewardMiniPopup_PopupInfoBase_o *)sub_1C6BB44(
                                                                       PopupInfoByUseAddRewardItem,
                                                                       *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !PopupInfoByUseAddRewardItem )
    {
      v10 = sub_1C6BC84();
      sub_1C6BB30(v10, 0);
    }
  }
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C6BC68(PopupInfoByUseAddRewardItem);
  *(_QWORD *)(v3 + 32) = v6;
  sub_1C6B9AC(v3 + 32, v6);
  v7 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)v3,
         (const MethodInfo_3124D84 *)Method_BasicHelper_ExcludeNull_PopupInfoBase___);
  v8 = System_Linq_Enumerable__ToArray_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v7,
         (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_PopupInfoBase___);
  RewardMiniPopupExecutor__PlaySimultaneous(this, (RewardMiniPopup_PopupInfoBase_array *)v8, v9);
}


void RewardMiniPopupExecutor___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4CB0253 & 1) == 0 )
  {
    sub_1C6BA08(&RewardMiniPopupExecutor___c_TypeInfo);
    byte_4CB0253 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(RewardMiniPopupExecutor___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RewardMiniPopupExecutor___c_TypeInfo->static_fields->__9 = (struct RewardMiniPopupExecutor___c_o *)v1;
  sub_1C6B9AC(RewardMiniPopupExecutor___c_TypeInfo->static_fields, v1);
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

  if ( (byte_4CB0256 & 1) == 0 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB0256 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CB02B2 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB02B2 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  p_UseAddRewardItemRewardInfos_k__BackingField = &v2->static_fields->_UseAddRewardItemRewardInfos_k__BackingField;
  *p_UseAddRewardItemRewardInfos_k__BackingField = 0;
  sub_1C6B9AC(p_UseAddRewardItemRewardInfos_k__BackingField, 0);
}


void RewardMiniPopupExecutor___c___CreatePopupInfoQuestPhaseReward_b__12_0(
        RewardMiniPopupExecutor___c_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  struct QuestRewardInfo_array **p_mQuestPhaseRewardInfos; // x0

  if ( (byte_4CB0254 & 1) == 0 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB0254 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestPhaseRewardInfos = &v2->static_fields->mQuestPhaseRewardInfos;
  *p_mQuestPhaseRewardInfos = 0;
  sub_1C6B9AC(p_mQuestPhaseRewardInfos, 0);
}


void RewardMiniPopupExecutor___c___CreatePopupInfoQuestReward_b__13_0(
        RewardMiniPopupExecutor___c_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  struct QuestRewardInfo_array **p_mQuestRewardInfos; // x0

  if ( (byte_4CB0255 & 1) == 0 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB0255 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestRewardInfos = &v2->static_fields->mQuestRewardInfos;
  *p_mQuestRewardInfos = 0;
  sub_1C6B9AC(p_mQuestRewardInfos, 0);
}