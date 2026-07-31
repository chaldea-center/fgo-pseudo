void RewardMiniPopup_DisplayArgs___ctor(RewardMiniPopup_DisplayArgs_o *this, const MethodInfo *method)
{
  this->fields._IsPlaySeDuplicable_k__BackingField = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Action_o *RewardMiniPopup_DisplayArgs__get_FinishCallback(
        RewardMiniPopup_DisplayArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._FinishCallback_k__BackingField;
}


bool RewardMiniPopup_DisplayArgs__get_IsPlaySeDuplicable(RewardMiniPopup_DisplayArgs_o *this, const MethodInfo *method)
{
  return this->fields._IsPlaySeDuplicable_k__BackingField;
}


UnityEngine_Vector3_o RewardMiniPopup_DisplayArgs__get_OffsetToAdd(
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


int32_t RewardMiniPopup_DisplayArgs__get_Type(RewardMiniPopup_DisplayArgs_o *this, const MethodInfo *method)
{
  return this->fields._Type_k__BackingField;
}


void RewardMiniPopup_DisplayArgs__set_FinishCallback(
        RewardMiniPopup_DisplayArgs_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._FinishCallback_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._FinishCallback_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RewardMiniPopup_DisplayArgs__set_IsPlaySeDuplicable(
        RewardMiniPopup_DisplayArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPlaySeDuplicable_k__BackingField = value;
}


void RewardMiniPopup_DisplayArgs__set_OffsetToAdd(
        RewardMiniPopup_DisplayArgs_o *this,
        UnityEngine_Vector3_o value,
        const MethodInfo *method)
{
  this->fields._OffsetToAdd_k__BackingField = value;
}


void RewardMiniPopup_DisplayArgs__set_Type(
        RewardMiniPopup_DisplayArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Type_k__BackingField = value;
}


void RewardMiniPopup_PopupInfoBase___ctor(
        RewardMiniPopup_PopupInfoBase_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._FinishCallback_k__BackingField = finishCallback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)finishCallback, v5, v6, v7, v8, v9, v10);
}


RewardMiniPopup_DisplayArgs_o *RewardMiniPopup_PopupInfoBase__GenerateArgs(
        RewardMiniPopup_PopupInfoBase_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int v4; // w0
  System_Action_c *v5; // x8
  System_Action_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5936F18 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&RewardMiniPopup_DisplayArgs_TypeInfo);
    sub_21FFC50(&Method_RewardMiniPopup_PopupInfoBase_OnPlayAllFinished__);
    byte_5936F18 = 1;
  }
  v3 = sub_21FFEBC(RewardMiniPopup_DisplayArgs_TypeInfo);
  *(_BYTE *)(v3 + 40) = 1;
  System_Object___ctor((Il2CppObject *)v3, 0);
  v4 = ((__int64 (__fastcall *)(RewardMiniPopup_PopupInfoBase_o *, const MethodInfo *))this->klass->vtable._4_unknown.methodPtr)(
         this,
         this->klass->vtable._4_unknown.method);
  v5 = System_Action_TypeInfo;
  *(_DWORD *)(v3 + 28) = v4;
  v6 = (System_Action_o *)sub_21FFEBC(v5);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_RewardMiniPopup_PopupInfoBase_OnPlayAllFinished__, 0);
  *(_QWORD *)(v3 + 32) = v6;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)v6, v7, v8, v9, v10, v11, v12);
  return (RewardMiniPopup_DisplayArgs_o *)v3;
}


bool RewardMiniPopup_PopupInfoBase__IsFinished(RewardMiniPopup_PopupInfoBase_o *this, const MethodInfo *method)
{
  return this->fields.isFinished;
}


void RewardMiniPopup_PopupInfoBase__OnPlayAllFinished(RewardMiniPopup_PopupInfoBase_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  RewardMiniPopup_PopupInfoBase_Fields *p_fields; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *FinishCallback_k__BackingField; // t1

  FinishCallback_k__BackingField = this->fields._FinishCallback_k__BackingField;
  p_fields = &this->fields;
  v9 = FinishCallback_k__BackingField;
  p_fields->isFinished = 1;
  p_fields->_FinishCallback_k__BackingField = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_fields, 0, v2, v3, v4, v5, v6, v7);
  if ( FinishCallback_k__BackingField )
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
}


System_Action_o *RewardMiniPopup_PopupInfoBase__get_FinishCallback(
        RewardMiniPopup_PopupInfoBase_o *this,
        const MethodInfo *method)
{
  return this->fields._FinishCallback_k__BackingField;
}


void RewardMiniPopup_PopupInfoBase__set_FinishCallback(
        RewardMiniPopup_PopupInfoBase_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._FinishCallback_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


int32_t RewardMiniPopup_PopupInfoByUseAddRewardItem__get_Type(
        RewardMiniPopup_PopupInfoByUseAddRewardItem_o *this,
        const MethodInfo *method)
{
  return 4;
}


void RewardMiniPopup_PopupInfoMultiQuestReward___ctor(
        RewardMiniPopup_PopupInfoMultiQuestReward_o *this,
        QuestRewardInfo_array *rewardInfoArray,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  __int64 v14; // x2
  long double v15; // q0
  _QWORD *v16; // x20
  __int64 v17; // x8
  __int64 v18; // x0
  __int64 v19; // x0
  System_Collections_Generic_Queue_QuestRewardInfo__c *v20; // x0
  System_Collections_Generic_Queue_T__o *v21; // x21
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  if ( (byte_5936F19 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_QuestRewardInfo___);
    sub_21FFC50(&Method_System_Collections_Generic_Queue_QuestRewardInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_Queue_QuestRewardInfo__TypeInfo);
    byte_5936F19 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._FinishCallback_k__BackingField = finishCallback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)finishCallback, v7, v8, v9, v10, v11, v12);
  if ( !rewardInfoArray )
  {
    v16 = Method_System_Array_Empty_QuestRewardInfo___;
    v17 = *((_QWORD *)Method_System_Array_Empty_QuestRewardInfo___ + 7);
    if ( !v17 )
    {
      sub_2237B54(Method_System_Array_Empty_QuestRewardInfo___);
      v17 = v16[7];
    }
    v18 = *(_QWORD *)(v17 + 16);
    if ( (*(_WORD *)(v18 + 309) & 1) == 0 )
      v18 = sub_2237AF8(v15);
    if ( !*(_DWORD *)(v18 + 228) )
      *(__n128 *)&v15 = j_il2cpp_runtime_class_init_0(v18, v13, v14);
    v19 = *(_QWORD *)(v16[7] + 16LL);
    if ( (*(_WORD *)(v19 + 309) & 1) == 0 )
      v19 = sub_2237AF8(v15);
    rewardInfoArray = **(QuestRewardInfo_array ***)(v19 + 184);
    if ( !rewardInfoArray )
      sub_21FFECC(v19, v13);
  }
  v20 = System_Collections_Generic_Queue_QuestRewardInfo__TypeInfo;
  this->fields.remainCount = rewardInfoArray->max_length;
  v21 = (System_Collections_Generic_Queue_T__o *)sub_21FFEBC(v20);
  System_Collections_Generic_Queue_object____ctor_74053632(
    v21,
    (System_Collections_Generic_IEnumerable_T__o *)rewardInfoArray,
    (const MethodInfo_469F800 *)Method_System_Collections_Generic_Queue_QuestRewardInfo___ctor__);
  this->fields._RewardInfoQueue_k__BackingField = (struct System_Collections_Generic_Queue_QuestRewardInfo__o *)v21;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RewardInfoQueue_k__BackingField,
    (int32_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
}


RewardMiniPopup_DisplayArgs_o *RewardMiniPopup_PopupInfoMultiQuestReward__GenerateArgs(
        RewardMiniPopup_PopupInfoMultiQuestReward_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int v4; // w0
  System_Action_c *v5; // x8
  System_Action_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5936F1A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&RewardMiniPopup_DisplayArgs_TypeInfo);
    sub_21FFC50(&Method_RewardMiniPopup_PopupInfoMultiQuestReward_OnSinglePopupPlayFinished__);
    byte_5936F1A = 1;
  }
  v3 = sub_21FFEBC(RewardMiniPopup_DisplayArgs_TypeInfo);
  *(_BYTE *)(v3 + 40) = 1;
  System_Object___ctor((Il2CppObject *)v3, 0);
  v4 = ((__int64 (__fastcall *)(RewardMiniPopup_PopupInfoMultiQuestReward_o *, const MethodInfo *))this->klass->vtable._4_unknown.methodPtr)(
         this,
         this->klass->vtable._4_unknown.method);
  v5 = System_Action_TypeInfo;
  *(_DWORD *)(v3 + 28) = v4;
  v6 = (System_Action_o *)sub_21FFEBC(v5);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_RewardMiniPopup_PopupInfoMultiQuestReward_OnSinglePopupPlayFinished__,
    0);
  *(_QWORD *)(v3 + 32) = v6;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)v6, v7, v8, v9, v10, v11, v12);
  return (RewardMiniPopup_DisplayArgs_o *)v3;
}


bool RewardMiniPopup_PopupInfoMultiQuestReward__HasNext(
        RewardMiniPopup_PopupInfoMultiQuestReward_o *this,
        const MethodInfo *method)
{
  if ( (byte_5936F1B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_QuestRewardInfo___);
    byte_5936F1B = 1;
  }
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._RewardInfoQueue_k__BackingField,
           (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_QuestRewardInfo___);
}


void RewardMiniPopup_PopupInfoMultiQuestReward__OnSinglePopupPlayFinished(
        RewardMiniPopup_PopupInfoMultiQuestReward_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w8

  v2 = this->fields.remainCount - 1;
  this->fields.remainCount = v2;
  if ( !v2 )
    RewardMiniPopup_PopupInfoBase__OnPlayAllFinished((RewardMiniPopup_PopupInfoBase_o *)this, method);
}


bool RewardMiniPopup_PopupInfoMultiQuestReward__PlayNext(
        RewardMiniPopup_PopupInfoMultiQuestReward_o *this,
        RewardMiniPopup_DisplayArgs_o *args,
        const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *RewardInfoQueue_k__BackingField; // x0
  Il2CppObject *v6; // x0
  const MethodInfo *v7; // x3

  if ( (byte_5936F1C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Queue_QuestRewardInfo__Dequeue__);
    byte_5936F1C = 1;
  }
  RewardInfoQueue_k__BackingField = (System_Collections_Generic_Queue_T__o *)this->fields._RewardInfoQueue_k__BackingField;
  if ( !RewardInfoQueue_k__BackingField )
    sub_21FFECC(0, args);
  v6 = System_Collections_Generic_Queue_object___Dequeue(
         RewardInfoQueue_k__BackingField,
         (const MethodInfo_469FDFC *)Method_System_Collections_Generic_Queue_QuestRewardInfo__Dequeue__);
  return RewardMiniPopup_PopupInfoMultiQuestReward__PlaySpecifiedReward(
           (RewardMiniPopup_PopupInfoMultiQuestReward_o *)v6,
           (QuestRewardInfo_o *)v6,
           args,
           v7);
}


bool RewardMiniPopup_PopupInfoMultiQuestReward__PlaySpecifiedReward(
        RewardMiniPopup_PopupInfoMultiQuestReward_o *this,
        QuestRewardInfo_o *questRewardInfo,
        RewardMiniPopup_DisplayArgs_o *args,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_5936F1D & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5936F1D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v7);
  return CommonUI__PlayRewardPopupLikeQuestPhaseReward((CommonUI_o *)Instance, questRewardInfo, args, 0);
}


System_Collections_Generic_Queue_QuestRewardInfo__o *RewardMiniPopup_PopupInfoMultiQuestReward__get_RewardInfoQueue(
        RewardMiniPopup_PopupInfoMultiQuestReward_o *this,
        const MethodInfo *method)
{
  return this->fields._RewardInfoQueue_k__BackingField;
}


int32_t RewardMiniPopup_PopupInfoQuestClear__get_Type(
        RewardMiniPopup_PopupInfoQuestClear_o *this,
        const MethodInfo *method)
{
  return 2;
}


void RewardMiniPopup_PopupInfoQuestPhaseClear___ctor(
        RewardMiniPopup_PopupInfoQuestPhaseClear_o *this,
        QuestRewardInfo_array *rewardInfoArray,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._FinishCallback_k__BackingField = finishCallback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)finishCallback, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)&this->fields.done = rewardInfoArray;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.done,
    (int32_t)rewardInfoArray,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


bool RewardMiniPopup_PopupInfoQuestPhaseClear__PlayLocal(
        RewardMiniPopup_PopupInfoQuestPhaseClear_o *this,
        RewardMiniPopup_DisplayArgs_o *args,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_5936F1E & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5936F1E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
  return CommonUI__OpenQuestPhaseReward((CommonUI_o *)Instance, *(QuestRewardInfo_array **)&this->fields.done, args, 0);
}


QuestRewardInfo_array *RewardMiniPopup_PopupInfoQuestPhaseClear__get_RewardInfoArray(
        RewardMiniPopup_PopupInfoQuestPhaseClear_o *this,
        const MethodInfo *method)
{
  return *(QuestRewardInfo_array **)&this->fields.done;
}


int32_t RewardMiniPopup_PopupInfoQuestPhaseClear__get_Type(
        RewardMiniPopup_PopupInfoQuestPhaseClear_o *this,
        const MethodInfo *method)
{
  return 1;
}


void RewardMiniPopup_PopupInfoSingle___ctor(
        RewardMiniPopup_PopupInfoSingle_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._FinishCallback_k__BackingField = finishCallback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)finishCallback, v5, v6, v7, v8, v9, v10);
}


bool RewardMiniPopup_PopupInfoSingle__HasNext(RewardMiniPopup_PopupInfoSingle_o *this, const MethodInfo *method)
{
  return !*(&this->fields.isFinished + 1);
}


bool RewardMiniPopup_PopupInfoSingle__PlayNext(
        RewardMiniPopup_PopupInfoSingle_o *this,
        RewardMiniPopup_DisplayArgs_o *args,
        const MethodInfo *method)
{
  char v5; // w21
  RewardMiniPopup_PopupInfoSingle_c *klass; // x8

  v5 = ((__int64 (__fastcall *)(RewardMiniPopup_PopupInfoSingle_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._6_HasNext.methodPtr)(
         this,
         this->klass->vtable._6_HasNext.method,
         method);
  if ( (v5 & 1) != 0 )
  {
    klass = this->klass;
    *(&this->fields.isFinished + 1) = 1;
    ((void (__fastcall *)(RewardMiniPopup_PopupInfoSingle_o *, RewardMiniPopup_DisplayArgs_o *, void *))klass[1]._1.image)(
      this,
      args,
      klass[1]._1.gc_desc);
  }
  return v5 & 1;
}


void RewardMiniPopup_RewardMiniPopupPlayerBase___ctor(
        RewardMiniPopup_RewardMiniPopupPlayerBase_o *this,
        RewardMiniPopup_PopupInfoBase_array *inputPopupInfoArray,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *v5; // x0
  System_Object_array *v6; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5936F1F & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_ExcludeNull_PopupInfoBase___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_PopupInfoBase___);
    byte_5936F1F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v5 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)inputPopupInfoArray,
         (const MethodInfo_37DD3BC *)Method_BasicHelper_ExcludeNull_PopupInfoBase___);
  v6 = System_Linq_Enumerable__ToArray_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v5,
         (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_PopupInfoBase___);
  this->fields._PopupInfoArray_k__BackingField = (struct RewardMiniPopup_PopupInfoBase_array *)v6;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v6, v7, v8, v9, v10, v11, v12);
}


bool RewardMiniPopup_RewardMiniPopupPlayerBase__IsBusy(
        RewardMiniPopup_RewardMiniPopupPlayerBase_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Object_array *PopupInfoArray_k__BackingField; // x19
  RewardMiniPopup_RewardMiniPopupPlayerBase___c_c *v5; // x0
  struct RewardMiniPopup_RewardMiniPopupPlayerBase___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__12_0; // x20
  Il2CppObject *v8; // x21
  struct RewardMiniPopup_RewardMiniPopupPlayerBase___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5936F20 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_PopupInfoBase___);
    sub_21FFC50(&System_Func_PopupInfoBase__bool__TypeInfo);
    sub_21FFC50(&Method_RewardMiniPopup_RewardMiniPopupPlayerBase___c__IsBusy_b__12_0__);
    sub_21FFC50(&RewardMiniPopup_RewardMiniPopupPlayerBase___c_TypeInfo);
    byte_5936F20 = 1;
  }
  PopupInfoArray_k__BackingField = (System_Object_array *)this->fields._PopupInfoArray_k__BackingField;
  if ( !PopupInfoArray_k__BackingField )
    return 0;
  v5 = RewardMiniPopup_RewardMiniPopupPlayerBase___c_TypeInfo;
  if ( !*(&RewardMiniPopup_RewardMiniPopupPlayerBase___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RewardMiniPopup_RewardMiniPopupPlayerBase___c_TypeInfo, method, v2);
    v5 = RewardMiniPopup_RewardMiniPopupPlayerBase___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__12_0 = (System_Func_object__bool__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, method, v2);
      static_fields = RewardMiniPopup_RewardMiniPopupPlayerBase___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_PopupInfoBase__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__12_0,
      v8,
      Method_RewardMiniPopup_RewardMiniPopupPlayerBase___c__IsBusy_b__12_0__,
      0);
    v9 = RewardMiniPopup_RewardMiniPopupPlayerBase___c_TypeInfo->static_fields;
    v9->__9__12_0 = (struct System_Func_PopupInfoBase__bool__o *)_9__12_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__12_0, (int32_t)_9__12_0, v10, v11, v12, v13, v14, v15);
  }
  return BasicHelper__Any_object__58575580(
           PopupInfoArray_k__BackingField,
           (System_Func_T__bool__o *)_9__12_0,
           (const MethodInfo_37DCADC *)Method_BasicHelper_Any_PopupInfoBase___);
}


void RewardMiniPopup_RewardMiniPopupPlayerBase__OnPlayAllFinished(
        RewardMiniPopup_RewardMiniPopupPlayerBase_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_FinishCallback_k__BackingField; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *FinishCallback_k__BackingField; // t1

  FinishCallback_k__BackingField = this->fields._FinishCallback_k__BackingField;
  p_FinishCallback_k__BackingField = (MissionNaviTransitionBoardItem_o *)&this->fields._FinishCallback_k__BackingField;
  v9 = FinishCallback_k__BackingField;
  p_FinishCallback_k__BackingField->klass = 0;
  sub_21FFBF4(p_FinishCallback_k__BackingField, 0, v2, v3, v4, v5, v6, v7);
  if ( FinishCallback_k__BackingField )
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
}


void RewardMiniPopup_RewardMiniPopupPlayerBase__OnPopupPlayFinished(
        RewardMiniPopup_RewardMiniPopupPlayerBase_o *this,
        RewardMiniPopup_PopupInfoBase_o *popupInfo,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( (((__int64 (__fastcall *)(RewardMiniPopup_RewardMiniPopupPlayerBase_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._5_IsBusy.methodPtr)(
          this,
          this->klass->vtable._5_IsBusy.method,
          method)
      & 1) == 0 )
    RewardMiniPopup_RewardMiniPopupPlayerBase__OnPlayAllFinished(this, v4);
}


System_Action_o *RewardMiniPopup_RewardMiniPopupPlayerBase__get_FinishCallback(
        RewardMiniPopup_RewardMiniPopupPlayerBase_o *this,
        const MethodInfo *method)
{
  return this->fields._FinishCallback_k__BackingField;
}


RewardMiniPopup_PopupInfoBase_array *RewardMiniPopup_RewardMiniPopupPlayerBase__get_PopupInfoArray(
        RewardMiniPopup_RewardMiniPopupPlayerBase_o *this,
        const MethodInfo *method)
{
  return this->fields._PopupInfoArray_k__BackingField;
}


void RewardMiniPopup_RewardMiniPopupPlayerBase__set_FinishCallback(
        RewardMiniPopup_RewardMiniPopupPlayerBase_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._FinishCallback_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._FinishCallback_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RewardMiniPopup_RewardMiniPopupPlayerBase__set_PopupInfoArray(
        RewardMiniPopup_RewardMiniPopupPlayerBase_o *this,
        RewardMiniPopup_PopupInfoBase_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._PopupInfoArray_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RewardMiniPopup_RewardMiniPopupPlayerBase___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5936F21 & 1) == 0 )
  {
    sub_21FFC50(&RewardMiniPopup_RewardMiniPopupPlayerBase___c_TypeInfo);
    byte_5936F21 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(RewardMiniPopup_RewardMiniPopupPlayerBase___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RewardMiniPopup_RewardMiniPopupPlayerBase___c_TypeInfo->static_fields->__9 = (struct RewardMiniPopup_RewardMiniPopupPlayerBase___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)RewardMiniPopup_RewardMiniPopupPlayerBase___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RewardMiniPopup_RewardMiniPopupPlayerBase___c___ctor(
        RewardMiniPopup_RewardMiniPopupPlayerBase___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RewardMiniPopup_RewardMiniPopupPlayerBase___c___IsBusy_b__12_0(
        RewardMiniPopup_RewardMiniPopupPlayerBase___c_o *this,
        RewardMiniPopup_PopupInfoBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return !x->fields.isFinished;
}


bool RewardMiniPopup_RewardMiniPopupPlayerSimultaneous__IsBusy(
        RewardMiniPopup_RewardMiniPopupPlayerSimultaneous_o *this,
        const MethodInfo *method)
{
  float v3; // s8

  if ( !RewardMiniPopup_RewardMiniPopupPlayerBase__IsBusy((RewardMiniPopup_RewardMiniPopupPlayerBase_o *)this, method) )
    return 0;
  if ( this->fields.busyFoundFirstTime == 0.0 )
    this->fields.busyFoundFirstTime = UnityEngine_Time__get_unscaledTime(0);
  v3 = UnityEngine_Time__get_unscaledTime(0) - this->fields.busyFoundFirstTime;
  UnityEngine_Time__get_unscaledDeltaTime(0);
  return v3 < 7.0;
}


void RewardMiniPopup_RewardMiniPopupPlayerSimultaneous__Play(
        RewardMiniPopup_RewardMiniPopupPlayerSimultaneous_o *this,
        const MethodInfo *method)
{
  __int64 IsNullOrEmpty; // x0
  const MethodInfo *v4; // x1
  struct RewardMiniPopup_PopupInfoBase_array *PopupInfoArray_k__BackingField; // x21
  int max_length; // w8
  unsigned int v7; // w22
  RewardMiniPopup_PopupInfoBase_o *v8; // x20
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  int v11; // w23
  RewardMiniPopup_DisplayArgs_o *Args_6_0; // x0

  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)this->fields._PopupInfoArray_k__BackingField,
                    0);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    RewardMiniPopup_RewardMiniPopupPlayerBase__OnPlayAllFinished(
      (RewardMiniPopup_RewardMiniPopupPlayerBase_o *)this,
      v4);
    return;
  }
  PopupInfoArray_k__BackingField = this->fields._PopupInfoArray_k__BackingField;
  if ( !PopupInfoArray_k__BackingField )
LABEL_19:
    sub_21FFECC(IsNullOrEmpty, v4);
  max_length = PopupInfoArray_k__BackingField->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_21FFED4(IsNullOrEmpty);
      v8 = PopupInfoArray_k__BackingField->m_Items[v7];
      if ( !v8 )
        break;
      if ( (((__int64 (__fastcall *)(RewardMiniPopup_PopupInfoBase_o *, void *))v8->klass[1]._1.image)(
              v8,
              v8->klass[1]._1.gc_desc)
          & 1) != 0 )
      {
        IsNullOrEmpty = ((__int64 (__fastcall *)(RewardMiniPopup_PopupInfoBase_o *, void *))v8->klass[1]._1.image)(
                          v8,
                          v8->klass[1]._1.gc_desc);
        if ( (IsNullOrEmpty & 1) != 0 )
        {
          v11 = 21;
          do
          {
            if ( !--v11 )
              break;
            Args_6_0 = RewardMiniPopup_RewardMiniPopupPlayerSimultaneous___Play_g__GenerateArgs_6_0(this, v8, v10);
            if ( (((__int64 (__fastcall *)(RewardMiniPopup_PopupInfoBase_o *, RewardMiniPopup_DisplayArgs_o *, const char *))v8->klass[1]._1.name)(
                    v8,
                    Args_6_0,
                    v8->klass[1]._1.namespaze)
                & 1) != 0 )
              ++this->fields.popupDisplayStartedCount;
            IsNullOrEmpty = ((__int64 (__fastcall *)(RewardMiniPopup_PopupInfoBase_o *, void *))v8->klass[1]._1.image)(
                              v8,
                              v8->klass[1]._1.gc_desc);
          }
          while ( (IsNullOrEmpty & 1) != 0 );
        }
      }
      else
      {
        RewardMiniPopup_PopupInfoBase__OnPlayAllFinished(v8, v9);
      }
      max_length = PopupInfoArray_k__BackingField->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
    goto LABEL_19;
  }
}


RewardMiniPopup_DisplayArgs_o *RewardMiniPopup_RewardMiniPopupPlayerSimultaneous___Play_g__GenerateArgs_6_0(
        RewardMiniPopup_RewardMiniPopupPlayerSimultaneous_o *this,
        RewardMiniPopup_PopupInfoBase_o *popupInfo,
        const MethodInfo *method)
{
  __int64 v5; // x21
  _QWORD *v6; // x0
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
  _QWORD *v20; // x20
  MissionNaviTransitionBoardItem_o *v21; // x22
  System_Delegate_o *v22; // x23
  System_Action_o *v23; // x24
  System_Delegate_o *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t popupDisplayStartedCount; // s0
  RewardMiniPopup_DisplayArgs_o *result; // x0
  RewardMiniPopup_RewardMiniPopupPlayerSimultaneous_o *v33; // x0
  const MethodInfo *v34; // x1

  if ( (byte_5936F22 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_RewardMiniPopup_RewardMiniPopupPlayerSimultaneous___c__DisplayClass6_0__Play_b__1__);
    sub_21FFC50(&RewardMiniPopup_RewardMiniPopupPlayerSimultaneous___c__DisplayClass6_0_TypeInfo);
    byte_5936F22 = 1;
  }
  v5 = sub_21FFEBC(RewardMiniPopup_RewardMiniPopupPlayerSimultaneous___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        *(_QWORD *)(v5 + 16) = popupInfo,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)popupInfo, v14, v15, v16, v17, v18, v19),
        (v6 = *(_QWORD **)(v5 + 16)) == 0)
    || (v6 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v6 + 392LL))(v6, *(_QWORD *)(*v6 + 400LL))) == 0 )
  {
    sub_21FFECC(v6, v7);
  }
  v20 = v6;
  v21 = (MissionNaviTransitionBoardItem_o *)(v6 + 4);
  v22 = (System_Delegate_o *)v6[4];
  v23 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_RewardMiniPopup_RewardMiniPopupPlayerSimultaneous___c__DisplayClass6_0__Play_b__1__,
    0);
  v24 = System_Delegate__Combine(v22, (System_Delegate_o *)v23, 0);
  if ( v24 && (System_Action_c *)v24->klass != System_Action_TypeInfo )
  {
    sub_220024C(v24, System_Action_TypeInfo, v25, v26);
    return (RewardMiniPopup_DisplayArgs_o *)RewardMiniPopup_RewardMiniPopupPlayerSimultaneous__IsBusy(v33, v34);
  }
  else
  {
    v20[4] = v24;
    sub_21FFBF4(v21, (int32_t)v24, v25, v26, v27, v28, v29, v30);
    popupDisplayStartedCount = this->fields.popupDisplayStartedCount;
    *((_DWORD *)v20 + 4) = 0;
    *((_DWORD *)v20 + 6) = 0;
    result = (RewardMiniPopup_DisplayArgs_o *)v20;
    *((_BYTE *)v20 + 40) = 0;
    *((float *)v20 + 5) = (float)popupDisplayStartedCount * -50.0;
  }
  return result;
}


float RewardMiniPopup_RewardMiniPopupPlayerSimultaneous__get_NextOffsetYToAdd(
        RewardMiniPopup_RewardMiniPopupPlayerSimultaneous_o *this,
        const MethodInfo *method)
{
  return (float)this->fields.popupDisplayStartedCount * -50.0;
}


void RewardMiniPopup_RewardMiniPopupPlayerSimultaneous___c__DisplayClass6_0___ctor(
        RewardMiniPopup_RewardMiniPopupPlayerSimultaneous___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RewardMiniPopup_RewardMiniPopupPlayerSimultaneous___c__DisplayClass6_0___Play_b__1(
        RewardMiniPopup_RewardMiniPopupPlayerSimultaneous___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  RewardMiniPopup_RewardMiniPopupPlayerBase_o *_4__this; // x19
  const MethodInfo *v3; // x1

  _4__this = (RewardMiniPopup_RewardMiniPopupPlayerBase_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(this, method);
  if ( (((__int64 (__fastcall *)(struct RewardMiniPopup_RewardMiniPopupPlayerSimultaneous_o *, const MethodInfo *))_4__this->klass->vtable._5_IsBusy.methodPtr)(
          this->fields.__4__this,
          _4__this->klass->vtable._5_IsBusy.method)
      & 1) == 0 )
    RewardMiniPopup_RewardMiniPopupPlayerBase__OnPlayAllFinished(_4__this, v3);
}