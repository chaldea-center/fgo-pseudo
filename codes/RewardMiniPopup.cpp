void __fastcall RewardMiniPopup_DisplayArgs___ctor(RewardMiniPopup_DisplayArgs_o *this, const MethodInfo *method)
{
  this->fields._IsPlaySeDuplicable_k__BackingField = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Action_o *__fastcall RewardMiniPopup_DisplayArgs__get_FinishCallback(
        RewardMiniPopup_DisplayArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._FinishCallback_k__BackingField;
}


bool __fastcall RewardMiniPopup_DisplayArgs__get_IsPlaySeDuplicable(
        RewardMiniPopup_DisplayArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._IsPlaySeDuplicable_k__BackingField;
}


UnityEngine_Vector3_o __fastcall RewardMiniPopup_DisplayArgs__get_OffsetToAdd(
        RewardMiniPopup_DisplayArgs_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields._OffsetToAdd_k__BackingField.fields.x;
  y = this->fields._OffsetToAdd_k__BackingField.fields.y;
  z = this->fields._OffsetToAdd_k__BackingField.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


int32_t __fastcall RewardMiniPopup_DisplayArgs__get_Type(RewardMiniPopup_DisplayArgs_o *this, const MethodInfo *method)
{
  return this->fields._Type_k__BackingField;
}


void __fastcall RewardMiniPopup_DisplayArgs__set_FinishCallback(
        RewardMiniPopup_DisplayArgs_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._FinishCallback_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._FinishCallback_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall RewardMiniPopup_DisplayArgs__set_IsPlaySeDuplicable(
        RewardMiniPopup_DisplayArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPlaySeDuplicable_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RewardMiniPopup_DisplayArgs__set_OffsetToAdd(
        RewardMiniPopup_DisplayArgs_o *this,
        UnityEngine_Vector3_o value,
        const MethodInfo *method)
{
  this->fields._OffsetToAdd_k__BackingField = value;
}


void __fastcall RewardMiniPopup_DisplayArgs__set_Type(
        RewardMiniPopup_DisplayArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Type_k__BackingField = value;
}


void __fastcall RewardMiniPopup_PopupInfoBase___ctor(
        RewardMiniPopup_PopupInfoBase_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._FinishCallback_k__BackingField = finishCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)finishCallback, v5, v6);
}


RewardMiniPopup_DisplayArgs_o *__fastcall RewardMiniPopup_PopupInfoBase__GenerateArgs(
        RewardMiniPopup_PopupInfoBase_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x20
  System_Action_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4B1AE63 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&RewardMiniPopup_DisplayArgs_TypeInfo, v3);
    sub_1BCAFF8(&Method_RewardMiniPopup_PopupInfoBase_OnPlayAllFinished__, v4);
    byte_4B1AE63 = 1;
  }
  v5 = sub_1BCB244(RewardMiniPopup_DisplayArgs_TypeInfo);
  *(_BYTE *)(v5 + 40) = 1;
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 28) = ((__int64 (__fastcall *)(RewardMiniPopup_PopupInfoBase_o *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                           this,
                           this->klass->vtable._5_GenerateArgs.methodPtr);
  v6 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_RewardMiniPopup_PopupInfoBase_OnPlayAllFinished__, 0LL);
  *(_QWORD *)(v5 + 32) = v6;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)v6, v7, v8);
  return (RewardMiniPopup_DisplayArgs_o *)v5;
}


bool __fastcall RewardMiniPopup_PopupInfoBase__IsFinished(
        RewardMiniPopup_PopupInfoBase_o *this,
        const MethodInfo *method)
{
  return this->fields.isFinished;
}


void __fastcall RewardMiniPopup_PopupInfoBase__OnPlayAllFinished(
        RewardMiniPopup_PopupInfoBase_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  RewardMiniPopup_PopupInfoBase_Fields *p_fields; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *FinishCallback_k__BackingField; // t1

  FinishCallback_k__BackingField = this->fields._FinishCallback_k__BackingField;
  p_fields = &this->fields;
  v5 = FinishCallback_k__BackingField;
  p_fields->isFinished = 1;
  p_fields->_FinishCallback_k__BackingField = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)p_fields, 0, v2, v3);
  if ( FinishCallback_k__BackingField )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
}


System_Action_o *__fastcall RewardMiniPopup_PopupInfoBase__get_FinishCallback(
        RewardMiniPopup_PopupInfoBase_o *this,
        const MethodInfo *method)
{
  return this->fields._FinishCallback_k__BackingField;
}


void __fastcall RewardMiniPopup_PopupInfoBase__set_FinishCallback(
        RewardMiniPopup_PopupInfoBase_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._FinishCallback_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


int32_t __fastcall RewardMiniPopup_PopupInfoByUseAddRewardItem__get_Type(
        RewardMiniPopup_PopupInfoByUseAddRewardItem_o *this,
        const MethodInfo *method)
{
  return 4;
}


void __fastcall RewardMiniPopup_PopupInfoMultiQuestReward___ctor(
        RewardMiniPopup_PopupInfoMultiQuestReward_o *this,
        QuestRewardInfo_array *rewardInfoArray,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *v5; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  long double inited; // q0
  _QWORD *v13; // x20
  __int64 v14; // x8
  __int64 v15; // x0
  __int64 v16; // x0
  System_Collections_Generic_Queue_T__o *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  v5 = (System_Collections_Generic_IEnumerable_T__o *)rewardInfoArray;
  if ( (byte_4B1AE64 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_Empty_QuestRewardInfo___, rewardInfoArray);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_QuestRewardInfo___ctor__, v7);
    sub_1BCAFF8(&System_Collections_Generic_Queue_QuestRewardInfo__TypeInfo, v8);
    byte_4B1AE64 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._FinishCallback_k__BackingField = finishCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)finishCallback, v9, v10);
  if ( !v5 )
  {
    v13 = Method_System_Array_Empty_QuestRewardInfo___;
    v14 = *((_QWORD *)Method_System_Array_Empty_QuestRewardInfo___ + 7);
    if ( !v14 )
    {
      sub_1C1B4B8(Method_System_Array_Empty_QuestRewardInfo___);
      v14 = v13[7];
    }
    v15 = *(_QWORD *)(v14 + 16);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C1B45C(inited);
    if ( !*(_DWORD *)(v15 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v15);
    v16 = *(_QWORD *)(v13[7] + 16LL);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C1B45C(inited);
    v5 = **(System_Collections_Generic_IEnumerable_T__o ***)(v16 + 184);
    if ( !v5 )
      sub_1BCB254(v16, v11);
  }
  this->fields.remainCount = (int32_t)v5[1].monitor;
  v17 = (System_Collections_Generic_Queue_T__o *)sub_1BCB244(System_Collections_Generic_Queue_QuestRewardInfo__TypeInfo);
  System_Collections_Generic_Queue_object____ctor_58909588(
    v17,
    v5,
    (const MethodInfo_382E394 *)Method_System_Collections_Generic_Queue_QuestRewardInfo___ctor__);
  this->fields._RewardInfoQueue_k__BackingField = (struct System_Collections_Generic_Queue_QuestRewardInfo__o *)v17;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._RewardInfoQueue_k__BackingField, (int32_t)v17, v18, v19);
}


RewardMiniPopup_DisplayArgs_o *__fastcall RewardMiniPopup_PopupInfoMultiQuestReward__GenerateArgs(
        RewardMiniPopup_PopupInfoMultiQuestReward_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x20
  System_Action_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4B1AE65 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&RewardMiniPopup_DisplayArgs_TypeInfo, v3);
    sub_1BCAFF8(&Method_RewardMiniPopup_PopupInfoMultiQuestReward_OnSinglePopupPlayFinished__, v4);
    byte_4B1AE65 = 1;
  }
  v5 = sub_1BCB244(RewardMiniPopup_DisplayArgs_TypeInfo);
  *(_BYTE *)(v5 + 40) = 1;
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 28) = ((__int64 (__fastcall *)(RewardMiniPopup_PopupInfoMultiQuestReward_o *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                           this,
                           this->klass->vtable._5_GenerateArgs.methodPtr);
  v6 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_RewardMiniPopup_PopupInfoMultiQuestReward_OnSinglePopupPlayFinished__,
    0LL);
  *(_QWORD *)(v5 + 32) = v6;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)v6, v7, v8);
  return (RewardMiniPopup_DisplayArgs_o *)v5;
}


bool __fastcall RewardMiniPopup_PopupInfoMultiQuestReward__HasNext(
        RewardMiniPopup_PopupInfoMultiQuestReward_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1AE66 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Any_QuestRewardInfo___, method);
    byte_4B1AE66 = 1;
  }
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._RewardInfoQueue_k__BackingField,
           (const MethodInfo_302661C *)Method_System_Linq_Enumerable_Any_QuestRewardInfo___);
}


void __fastcall RewardMiniPopup_PopupInfoMultiQuestReward__OnSinglePopupPlayFinished(
        RewardMiniPopup_PopupInfoMultiQuestReward_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w8

  v2 = this->fields.remainCount - 1;
  this->fields.remainCount = v2;
  if ( !v2 )
    RewardMiniPopup_PopupInfoBase__OnPlayAllFinished((RewardMiniPopup_PopupInfoBase_o *)this, method);
}


bool __fastcall RewardMiniPopup_PopupInfoMultiQuestReward__PlayNext(
        RewardMiniPopup_PopupInfoMultiQuestReward_o *this,
        RewardMiniPopup_DisplayArgs_o *args,
        const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *RewardInfoQueue_k__BackingField; // x0
  Il2CppObject *v6; // x0
  const MethodInfo *v7; // x3

  if ( (byte_4B1AE67 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_QuestRewardInfo__Dequeue__, args);
    byte_4B1AE67 = 1;
  }
  RewardInfoQueue_k__BackingField = (System_Collections_Generic_Queue_T__o *)this->fields._RewardInfoQueue_k__BackingField;
  if ( !RewardInfoQueue_k__BackingField )
    sub_1BCB254(0LL, args);
  v6 = System_Collections_Generic_Queue_object___Dequeue(
         RewardInfoQueue_k__BackingField,
         (const MethodInfo_382E998 *)Method_System_Collections_Generic_Queue_QuestRewardInfo__Dequeue__);
  return RewardMiniPopup_PopupInfoMultiQuestReward__PlaySpecifiedReward(
           (RewardMiniPopup_PopupInfoMultiQuestReward_o *)v6,
           (QuestRewardInfo_o *)v6,
           args,
           v7);
}


bool __fastcall RewardMiniPopup_PopupInfoMultiQuestReward__PlaySpecifiedReward(
        RewardMiniPopup_PopupInfoMultiQuestReward_o *this,
        QuestRewardInfo_o *questRewardInfo,
        RewardMiniPopup_DisplayArgs_o *args,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B1AE68 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, questRewardInfo);
    byte_4B1AE68 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v7);
  return CommonUI__PlayRewardPopupLikeQuestPhaseReward((CommonUI_o *)Instance, questRewardInfo, args, 0LL);
}


System_Collections_Generic_Queue_QuestRewardInfo__o *__fastcall RewardMiniPopup_PopupInfoMultiQuestReward__get_RewardInfoQueue(
        RewardMiniPopup_PopupInfoMultiQuestReward_o *this,
        const MethodInfo *method)
{
  return this->fields._RewardInfoQueue_k__BackingField;
}


int32_t __fastcall RewardMiniPopup_PopupInfoQuestClear__get_Type(
        RewardMiniPopup_PopupInfoQuestClear_o *this,
        const MethodInfo *method)
{
  return 2;
}


void __fastcall RewardMiniPopup_PopupInfoQuestPhaseClear___ctor(
        RewardMiniPopup_PopupInfoQuestPhaseClear_o *this,
        QuestRewardInfo_array *rewardInfoArray,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._FinishCallback_k__BackingField = finishCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)finishCallback, v7, v8);
  *(_QWORD *)&this->fields.done = rewardInfoArray;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.done, (int32_t)rewardInfoArray, v9, v10);
}


bool __fastcall RewardMiniPopup_PopupInfoQuestPhaseClear__PlayLocal(
        RewardMiniPopup_PopupInfoQuestPhaseClear_o *this,
        RewardMiniPopup_DisplayArgs_o *args,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B1AE69 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, args);
    byte_4B1AE69 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v6);
  return CommonUI__OpenQuestPhaseReward(
           (CommonUI_o *)Instance,
           *(QuestRewardInfo_array **)&this->fields.done,
           args,
           0LL);
}


QuestRewardInfo_array *__fastcall RewardMiniPopup_PopupInfoQuestPhaseClear__get_RewardInfoArray(
        RewardMiniPopup_PopupInfoQuestPhaseClear_o *this,
        const MethodInfo *method)
{
  return *(QuestRewardInfo_array **)&this->fields.done;
}


int32_t __fastcall RewardMiniPopup_PopupInfoQuestPhaseClear__get_Type(
        RewardMiniPopup_PopupInfoQuestPhaseClear_o *this,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall RewardMiniPopup_PopupInfoSingle___ctor(
        RewardMiniPopup_PopupInfoSingle_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._FinishCallback_k__BackingField = finishCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)finishCallback, v5, v6);
}


bool __fastcall RewardMiniPopup_PopupInfoSingle__HasNext(
        RewardMiniPopup_PopupInfoSingle_o *this,
        const MethodInfo *method)
{
  return !*(&this->fields.isFinished + 1);
}


bool __fastcall RewardMiniPopup_PopupInfoSingle__PlayNext(
        RewardMiniPopup_PopupInfoSingle_o *this,
        RewardMiniPopup_DisplayArgs_o *args,
        const MethodInfo *method)
{
  char v5; // w21
  RewardMiniPopup_PopupInfoSingle_c *klass; // x8

  v5 = ((__int64 (__fastcall *)(RewardMiniPopup_PopupInfoSingle_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._6_HasNext.method)(
         this,
         this->klass->vtable._7_PlayNext.methodPtr,
         method);
  if ( (v5 & 1) != 0 )
  {
    klass = this->klass;
    *(&this->fields.isFinished + 1) = 1;
    ((void (__fastcall *)(RewardMiniPopup_PopupInfoSingle_o *, RewardMiniPopup_DisplayArgs_o *, const char *))klass[1]._1.gc_desc)(
      this,
      args,
      klass[1]._1.name);
  }
  return v5 & 1;
}


void __fastcall RewardMiniPopup_RewardMiniPopupPlayerBase___ctor(
        RewardMiniPopup_RewardMiniPopupPlayerBase_o *this,
        RewardMiniPopup_PopupInfoBase_array *inputPopupInfoArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_T__o *v6; // x0
  System_Object_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B1AE6A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_ExcludeNull_PopupInfoBase___, inputPopupInfoArray);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_PopupInfoBase___, v5);
    byte_4B1AE6A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)inputPopupInfoArray,
         (const MethodInfo_3004870 *)Method_BasicHelper_ExcludeNull_PopupInfoBase___);
  v7 = System_Linq_Enumerable__ToArray_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v6,
         (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_PopupInfoBase___);
  this->fields._PopupInfoArray_k__BackingField = (struct RewardMiniPopup_PopupInfoBase_array *)v7;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)v7, v8, v9);
}


bool __fastcall RewardMiniPopup_RewardMiniPopupPlayerBase__IsBusy(
        RewardMiniPopup_RewardMiniPopupPlayerBase_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Object_array *PopupInfoArray_k__BackingField; // x19
  RewardMiniPopup_RewardMiniPopupPlayerBase___c_c *v7; // x0
  System_Func_object__bool__o *_9__12_0; // x20
  Il2CppObject *v9; // x21
  struct RewardMiniPopup_RewardMiniPopupPlayerBase___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4B1AE6B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Any_PopupInfoBase___, method);
    sub_1BCAFF8(&System_Func_PopupInfoBase__bool__TypeInfo, v3);
    sub_1BCAFF8(&Method_RewardMiniPopup_RewardMiniPopupPlayerBase___c__IsBusy_b__12_0__, v4);
    sub_1BCAFF8(&RewardMiniPopup_RewardMiniPopupPlayerBase___c_TypeInfo, v5);
    byte_4B1AE6B = 1;
  }
  PopupInfoArray_k__BackingField = (System_Object_array *)this->fields._PopupInfoArray_k__BackingField;
  if ( !PopupInfoArray_k__BackingField )
    return 0;
  v7 = RewardMiniPopup_RewardMiniPopupPlayerBase___c_TypeInfo;
  if ( !RewardMiniPopup_RewardMiniPopupPlayerBase___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RewardMiniPopup_RewardMiniPopupPlayerBase___c_TypeInfo);
    v7 = RewardMiniPopup_RewardMiniPopupPlayerBase___c_TypeInfo;
  }
  _9__12_0 = (System_Func_object__bool__o *)v7->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = RewardMiniPopup_RewardMiniPopupPlayerBase___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__12_0 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_PopupInfoBase__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__12_0,
      v9,
      Method_RewardMiniPopup_RewardMiniPopupPlayerBase___c__IsBusy_b__12_0__,
      0LL);
    static_fields = RewardMiniPopup_RewardMiniPopupPlayerBase___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Func_PopupInfoBase__bool__o *)_9__12_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v11, v12);
  }
  return BasicHelper__Any_object__50347976(
           PopupInfoArray_k__BackingField,
           (System_Func_T__bool__o *)_9__12_0,
           (const MethodInfo_3003FC8 *)Method_BasicHelper_Any_PopupInfoBase___);
}


void __fastcall RewardMiniPopup_RewardMiniPopupPlayerBase__OnPlayAllFinished(
        RewardMiniPopup_RewardMiniPopupPlayerBase_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_FinishCallback_k__BackingField; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *FinishCallback_k__BackingField; // t1

  FinishCallback_k__BackingField = this->fields._FinishCallback_k__BackingField;
  p_FinishCallback_k__BackingField = (CGThumbnailListItem_o *)&this->fields._FinishCallback_k__BackingField;
  v5 = FinishCallback_k__BackingField;
  p_FinishCallback_k__BackingField->klass = 0LL;
  sub_1BCAF9C(p_FinishCallback_k__BackingField, 0, v2, v3);
  if ( FinishCallback_k__BackingField )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
}


void __fastcall RewardMiniPopup_RewardMiniPopupPlayerBase__OnPopupPlayFinished(
        RewardMiniPopup_RewardMiniPopupPlayerBase_o *this,
        RewardMiniPopup_PopupInfoBase_o *popupInfo,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( (((__int64 (__fastcall *)(RewardMiniPopup_RewardMiniPopupPlayerBase_o *, void *, const MethodInfo *))this->klass->vtable._5_IsBusy.method)(
          this,
          this->klass[1]._1.image,
          method) & 1) == 0 )
    RewardMiniPopup_RewardMiniPopupPlayerBase__OnPlayAllFinished(this, v4);
}


System_Action_o *__fastcall RewardMiniPopup_RewardMiniPopupPlayerBase__get_FinishCallback(
        RewardMiniPopup_RewardMiniPopupPlayerBase_o *this,
        const MethodInfo *method)
{
  return this->fields._FinishCallback_k__BackingField;
}


RewardMiniPopup_PopupInfoBase_array *__fastcall RewardMiniPopup_RewardMiniPopupPlayerBase__get_PopupInfoArray(
        RewardMiniPopup_RewardMiniPopupPlayerBase_o *this,
        const MethodInfo *method)
{
  return this->fields._PopupInfoArray_k__BackingField;
}


void __fastcall RewardMiniPopup_RewardMiniPopupPlayerBase__set_FinishCallback(
        RewardMiniPopup_RewardMiniPopupPlayerBase_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._FinishCallback_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._FinishCallback_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall RewardMiniPopup_RewardMiniPopupPlayerBase__set_PopupInfoArray(
        RewardMiniPopup_RewardMiniPopupPlayerBase_o *this,
        RewardMiniPopup_PopupInfoBase_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._PopupInfoArray_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall RewardMiniPopup_RewardMiniPopupPlayerBase___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1AE6C & 1) == 0 )
  {
    sub_1BCAFF8(&RewardMiniPopup_RewardMiniPopupPlayerBase___c_TypeInfo, v1);
    byte_4B1AE6C = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(RewardMiniPopup_RewardMiniPopupPlayerBase___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RewardMiniPopup_RewardMiniPopupPlayerBase___c_TypeInfo->static_fields->__9 = (struct RewardMiniPopup_RewardMiniPopupPlayerBase___c_o *)v2;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)RewardMiniPopup_RewardMiniPopupPlayerBase___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall RewardMiniPopup_RewardMiniPopupPlayerBase___c___ctor(
        RewardMiniPopup_RewardMiniPopupPlayerBase___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RewardMiniPopup_RewardMiniPopupPlayerBase___c___IsBusy_b__12_0(
        RewardMiniPopup_RewardMiniPopupPlayerBase___c_o *this,
        RewardMiniPopup_PopupInfoBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return !x->fields.isFinished;
}


bool __fastcall RewardMiniPopup_RewardMiniPopupPlayerSimultaneous__IsBusy(
        RewardMiniPopup_RewardMiniPopupPlayerSimultaneous_o *this,
        const MethodInfo *method)
{
  float v3; // s8

  if ( !RewardMiniPopup_RewardMiniPopupPlayerBase__IsBusy((RewardMiniPopup_RewardMiniPopupPlayerBase_o *)this, method) )
    return 0;
  if ( this->fields.busyFoundFirstTime == 0.0 )
    this->fields.busyFoundFirstTime = UnityEngine_Time__get_unscaledTime(0LL);
  v3 = UnityEngine_Time__get_unscaledTime(0LL) - this->fields.busyFoundFirstTime;
  UnityEngine_Time__get_unscaledDeltaTime(0LL);
  return v3 < 7.0;
}


void __fastcall RewardMiniPopup_RewardMiniPopupPlayerSimultaneous__Play(
        RewardMiniPopup_RewardMiniPopupPlayerSimultaneous_o *this,
        const MethodInfo *method)
{
  __int64 IsNullOrEmpty; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  struct RewardMiniPopup_PopupInfoBase_array *PopupInfoArray_k__BackingField; // x21
  int max_length; // w8
  unsigned int v8; // w22
  RewardMiniPopup_PopupInfoBase_o *v9; // x20
  const MethodInfo *v10; // x1
  int v11; // w23
  RewardMiniPopup_DisplayArgs_o *Args_6_0; // x0

  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)this->fields._PopupInfoArray_k__BackingField,
                    0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    RewardMiniPopup_RewardMiniPopupPlayerBase__OnPlayAllFinished(
      (RewardMiniPopup_RewardMiniPopupPlayerBase_o *)this,
      v4);
    return;
  }
  PopupInfoArray_k__BackingField = this->fields._PopupInfoArray_k__BackingField;
  if ( !PopupInfoArray_k__BackingField )
LABEL_20:
    sub_1BCB254(IsNullOrEmpty, v4);
  max_length = PopupInfoArray_k__BackingField->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1BCB25C(IsNullOrEmpty, v4, v5);
      v9 = PopupInfoArray_k__BackingField->m_Items[v8];
      if ( !v9 )
        break;
      if ( (((__int64 (__fastcall *)(RewardMiniPopup_PopupInfoBase_o *, const char *))v9->klass[1]._1.gc_desc)(
              v9,
              v9->klass[1]._1.name) & 1) != 0 )
      {
        IsNullOrEmpty = ((__int64 (__fastcall *)(RewardMiniPopup_PopupInfoBase_o *, const char *))v9->klass[1]._1.gc_desc)(
                          v9,
                          v9->klass[1]._1.name);
        if ( (IsNullOrEmpty & 1) != 0 )
        {
          v11 = 21;
          do
          {
            if ( !--v11 )
              break;
            Args_6_0 = RewardMiniPopup_RewardMiniPopupPlayerSimultaneous___Play_g__GenerateArgs_6_0(this, v9, v5);
            if ( (((__int64 (__fastcall *)(RewardMiniPopup_PopupInfoBase_o *, RewardMiniPopup_DisplayArgs_o *, void *))v9->klass[1]._1.namespaze)(
                    v9,
                    Args_6_0,
                    v9->klass[1]._1.byval_arg.data) & 1) != 0 )
              ++this->fields.popupDisplayStartedCount;
            IsNullOrEmpty = ((__int64 (__fastcall *)(RewardMiniPopup_PopupInfoBase_o *, const char *))v9->klass[1]._1.gc_desc)(
                              v9,
                              v9->klass[1]._1.name);
          }
          while ( (IsNullOrEmpty & 1) != 0 );
        }
      }
      else
      {
        RewardMiniPopup_PopupInfoBase__OnPlayAllFinished(v9, v10);
      }
      max_length = PopupInfoArray_k__BackingField->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
    goto LABEL_20;
  }
}


RewardMiniPopup_DisplayArgs_o *__fastcall RewardMiniPopup_RewardMiniPopupPlayerSimultaneous___Play_g__GenerateArgs_6_0(
        RewardMiniPopup_RewardMiniPopupPlayerSimultaneous_o *this,
        RewardMiniPopup_PopupInfoBase_o *popupInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  _QWORD *v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  _QWORD *v14; // x20
  CGThumbnailListItem_o *v15; // x22
  System_Delegate_o *v16; // x23
  System_Action_o *v17; // x24
  System_Delegate_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t popupDisplayStartedCount; // s0
  RewardMiniPopup_RewardMiniPopupPlayerSimultaneous_o *v23; // x0
  const MethodInfo *v24; // x1

  if ( (byte_4B1AE6D & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, popupInfo);
    sub_1BCAFF8(&Method_RewardMiniPopup_RewardMiniPopupPlayerSimultaneous___c__DisplayClass6_0__Play_b__1__, v5);
    sub_1BCAFF8(&RewardMiniPopup_RewardMiniPopupPlayerSimultaneous___c__DisplayClass6_0_TypeInfo, v6);
    byte_4B1AE6D = 1;
  }
  v7 = sub_1BCB244(RewardMiniPopup_RewardMiniPopupPlayerSimultaneous___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 24) = this,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v10, v11),
        *(_QWORD *)(v7 + 16) = popupInfo,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 16), (int32_t)popupInfo, v12, v13),
        (v8 = *(_QWORD **)(v7 + 16)) == 0LL)
    || (v8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v8 + 392LL))(v8, *(_QWORD *)(*v8 + 400LL))) == 0LL )
  {
    sub_1BCB254(v8, v9);
  }
  v14 = v8;
  v15 = (CGThumbnailListItem_o *)(v8 + 4);
  v16 = (System_Delegate_o *)v8[4];
  v17 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v7,
    Method_RewardMiniPopup_RewardMiniPopupPlayerSimultaneous___c__DisplayClass6_0__Play_b__1__,
    0LL);
  v18 = System_Delegate__Combine(v16, (System_Delegate_o *)v17, 0LL);
  if ( v18 && (System_Action_c *)v18->klass != System_Action_TypeInfo )
  {
    sub_1BCB514(v18);
    return (RewardMiniPopup_DisplayArgs_o *)RewardMiniPopup_RewardMiniPopupPlayerSimultaneous__IsBusy(v23, v24);
  }
  else
  {
    v14[4] = v18;
    sub_1BCAF9C(v15, (int32_t)v18, v19, v20);
    popupDisplayStartedCount = this->fields.popupDisplayStartedCount;
    *((_DWORD *)v14 + 4) = 0;
    *((_DWORD *)v14 + 6) = 0;
    *((float *)v14 + 5) = (float)popupDisplayStartedCount * -50.0;
    *((_BYTE *)v14 + 40) = 0;
    return (RewardMiniPopup_DisplayArgs_o *)v14;
  }
}


float __fastcall RewardMiniPopup_RewardMiniPopupPlayerSimultaneous__get_NextOffsetYToAdd(
        RewardMiniPopup_RewardMiniPopupPlayerSimultaneous_o *this,
        const MethodInfo *method)
{
  return (float)this->fields.popupDisplayStartedCount * -50.0;
}


void __fastcall RewardMiniPopup_RewardMiniPopupPlayerSimultaneous___c__DisplayClass6_0___ctor(
        RewardMiniPopup_RewardMiniPopupPlayerSimultaneous___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RewardMiniPopup_RewardMiniPopupPlayerSimultaneous___c__DisplayClass6_0___Play_b__1(
        RewardMiniPopup_RewardMiniPopupPlayerSimultaneous___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  RewardMiniPopup_RewardMiniPopupPlayerBase_o *_4__this; // x19
  const MethodInfo *v3; // x1

  _4__this = (RewardMiniPopup_RewardMiniPopupPlayerBase_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(this, method);
  if ( (((__int64 (__fastcall *)(struct RewardMiniPopup_RewardMiniPopupPlayerSimultaneous_o *, void *))_4__this->klass->vtable._5_IsBusy.method)(
          this->fields.__4__this,
          _4__this->klass[1]._1.image) & 1) == 0 )
    RewardMiniPopup_RewardMiniPopupPlayerBase__OnPlayAllFinished(_4__this, v3);
}