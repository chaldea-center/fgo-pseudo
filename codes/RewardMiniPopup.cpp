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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._FinishCallback_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._FinishCallback_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._FinishCallback_k__BackingField = finishCallback;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)finishCallback, v5, v6, v7, v8, v9, v10);
}


RewardMiniPopup_DisplayArgs_o *__fastcall RewardMiniPopup_PopupInfoBase__GenerateArgs(
        RewardMiniPopup_PopupInfoBase_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x20
  System_Action_o *v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4C20967 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&RewardMiniPopup_DisplayArgs_TypeInfo, v3);
    sub_1C3B764(&Method_RewardMiniPopup_PopupInfoBase_OnPlayAllFinished__, v4);
    byte_4C20967 = 1;
  }
  v5 = sub_1C3B9B0(RewardMiniPopup_DisplayArgs_TypeInfo);
  *(_BYTE *)(v5 + 40) = 1;
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 28) = ((__int64 (__fastcall *)(RewardMiniPopup_PopupInfoBase_o *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                           this,
                           this->klass->vtable._5_GenerateArgs.methodPtr);
  v6 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_RewardMiniPopup_PopupInfoBase_OnPlayAllFinished__, 0LL);
  *(_QWORD *)(v5 + 32) = v6;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)v6, v7, v8, v9, v10, v11, v12);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  RewardMiniPopup_PopupInfoBase_Fields *p_fields; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *FinishCallback_k__BackingField; // t1

  FinishCallback_k__BackingField = this->fields._FinishCallback_k__BackingField;
  p_fields = &this->fields;
  v9 = FinishCallback_k__BackingField;
  p_fields->isFinished = 1;
  p_fields->_FinishCallback_k__BackingField = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)p_fields, 0LL, v2, v3, v4, v5, v6, v7);
  if ( FinishCallback_k__BackingField )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._FinishCallback_k__BackingField = value;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x1
  long double inited; // q0
  _QWORD *v17; // x20
  __int64 v18; // x8
  __int64 v19; // x0
  __int64 v20; // x0
  System_Collections_Generic_Queue_T__o *v21; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  v5 = (System_Collections_Generic_IEnumerable_T__o *)rewardInfoArray;
  if ( (byte_4C20968 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_Empty_QuestRewardInfo___, rewardInfoArray);
    sub_1C3B764(&Method_System_Collections_Generic_Queue_QuestRewardInfo___ctor__, v7);
    sub_1C3B764(&System_Collections_Generic_Queue_QuestRewardInfo__TypeInfo, v8);
    byte_4C20968 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._FinishCallback_k__BackingField = finishCallback;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)finishCallback, v9, v10, v11, v12, v13, v14);
  if ( !v5 )
  {
    v17 = Method_System_Array_Empty_QuestRewardInfo___;
    v18 = *((_QWORD *)Method_System_Array_Empty_QuestRewardInfo___ + 7);
    if ( !v18 )
    {
      sub_1C8D69C(Method_System_Array_Empty_QuestRewardInfo___);
      v18 = v17[7];
    }
    v19 = *(_QWORD *)(v18 + 16);
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
      v19 = sub_1C8D640(inited);
    if ( !*(_DWORD *)(v19 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v19);
    v20 = *(_QWORD *)(v17[7] + 16LL);
    if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
      v20 = sub_1C8D640(inited);
    v5 = **(System_Collections_Generic_IEnumerable_T__o ***)(v20 + 184);
    if ( !v5 )
      sub_1C3B9C0(v20, v15);
  }
  this->fields.remainCount = (int32_t)v5[1].monitor;
  v21 = (System_Collections_Generic_Queue_T__o *)sub_1C3B9B0(System_Collections_Generic_Queue_QuestRewardInfo__TypeInfo);
  System_Collections_Generic_Queue_object____ctor_58710496(
    v21,
    v5,
    (const MethodInfo_37FD9E0 *)Method_System_Collections_Generic_Queue_QuestRewardInfo___ctor__);
  this->fields._RewardInfoQueue_k__BackingField = (struct System_Collections_Generic_Queue_QuestRewardInfo__o *)v21;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._RewardInfoQueue_k__BackingField,
    (int64_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
}


RewardMiniPopup_DisplayArgs_o *__fastcall RewardMiniPopup_PopupInfoMultiQuestReward__GenerateArgs(
        RewardMiniPopup_PopupInfoMultiQuestReward_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x20
  System_Action_o *v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4C20969 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&RewardMiniPopup_DisplayArgs_TypeInfo, v3);
    sub_1C3B764(&Method_RewardMiniPopup_PopupInfoMultiQuestReward_OnSinglePopupPlayFinished__, v4);
    byte_4C20969 = 1;
  }
  v5 = sub_1C3B9B0(RewardMiniPopup_DisplayArgs_TypeInfo);
  *(_BYTE *)(v5 + 40) = 1;
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 28) = ((__int64 (__fastcall *)(RewardMiniPopup_PopupInfoMultiQuestReward_o *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                           this,
                           this->klass->vtable._5_GenerateArgs.methodPtr);
  v6 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_RewardMiniPopup_PopupInfoMultiQuestReward_OnSinglePopupPlayFinished__,
    0LL);
  *(_QWORD *)(v5 + 32) = v6;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)v6, v7, v8, v9, v10, v11, v12);
  return (RewardMiniPopup_DisplayArgs_o *)v5;
}


bool __fastcall RewardMiniPopup_PopupInfoMultiQuestReward__HasNext(
        RewardMiniPopup_PopupInfoMultiQuestReward_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C2096A & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_Any_QuestRewardInfo___, method);
    byte_4C2096A = 1;
  }
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._RewardInfoQueue_k__BackingField,
           (const MethodInfo_2FFBC00 *)Method_System_Linq_Enumerable_Any_QuestRewardInfo___);
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

  if ( (byte_4C2096B & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Queue_QuestRewardInfo__Dequeue__, args);
    byte_4C2096B = 1;
  }
  RewardInfoQueue_k__BackingField = (System_Collections_Generic_Queue_T__o *)this->fields._RewardInfoQueue_k__BackingField;
  if ( !RewardInfoQueue_k__BackingField )
    sub_1C3B9C0(0LL, args);
  v6 = System_Collections_Generic_Queue_object___Dequeue(
         RewardInfoQueue_k__BackingField,
         (const MethodInfo_37FDFE4 *)Method_System_Collections_Generic_Queue_QuestRewardInfo__Dequeue__);
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

  if ( (byte_4C2096C & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, questRewardInfo);
    byte_4C2096C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v7);
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

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._FinishCallback_k__BackingField = finishCallback;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)finishCallback, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)&this->fields.done = rewardInfoArray;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.done, (int64_t)rewardInfoArray, v13, v14, v15, v16, v17, v18);
}


bool __fastcall RewardMiniPopup_PopupInfoQuestPhaseClear__PlayLocal(
        RewardMiniPopup_PopupInfoQuestPhaseClear_o *this,
        RewardMiniPopup_DisplayArgs_o *args,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C2096D & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, args);
    byte_4C2096D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v6);
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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._FinishCallback_k__BackingField = finishCallback;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)finishCallback, v5, v6, v7, v8, v9, v10);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4C2096E & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_ExcludeNull_PopupInfoBase___, inputPopupInfoArray);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_PopupInfoBase___, v5);
    byte_4C2096E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)inputPopupInfoArray,
         (const MethodInfo_2FDB4C8 *)Method_BasicHelper_ExcludeNull_PopupInfoBase___);
  v7 = System_Linq_Enumerable__ToArray_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v6,
         (const MethodInfo_302ACC8 *)Method_System_Linq_Enumerable_ToArray_PopupInfoBase___);
  this->fields._PopupInfoArray_k__BackingField = (struct RewardMiniPopup_PopupInfoBase_array *)v7;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)v7, v8, v9, v10, v11, v12, v13);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4C2096F & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_Any_PopupInfoBase___, method);
    sub_1C3B764(&System_Func_PopupInfoBase__bool__TypeInfo, v3);
    sub_1C3B764(&Method_RewardMiniPopup_RewardMiniPopupPlayerBase___c__IsBusy_b__12_0__, v4);
    sub_1C3B764(&RewardMiniPopup_RewardMiniPopupPlayerBase___c_TypeInfo, v5);
    byte_4C2096F = 1;
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
    _9__12_0 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_PopupInfoBase__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__12_0,
      v9,
      Method_RewardMiniPopup_RewardMiniPopupPlayerBase___c__IsBusy_b__12_0__,
      0LL);
    static_fields = RewardMiniPopup_RewardMiniPopupPlayerBase___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Func_PopupInfoBase__bool__o *)_9__12_0;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__12_0,
      (int64_t)_9__12_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  return BasicHelper__Any_object__50179104(
           PopupInfoArray_k__BackingField,
           (System_Func_T__bool__o *)_9__12_0,
           (const MethodInfo_2FDAC20 *)Method_BasicHelper_Any_PopupInfoBase___);
}


void __fastcall RewardMiniPopup_RewardMiniPopupPlayerBase__OnPlayAllFinished(
        RewardMiniPopup_RewardMiniPopupPlayerBase_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_FinishCallback_k__BackingField; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *FinishCallback_k__BackingField; // t1

  FinishCallback_k__BackingField = this->fields._FinishCallback_k__BackingField;
  p_FinishCallback_k__BackingField = (PartyOrganizationUtility_o *)&this->fields._FinishCallback_k__BackingField;
  v9 = FinishCallback_k__BackingField;
  p_FinishCallback_k__BackingField->klass = 0LL;
  sub_1C3B708(p_FinishCallback_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
  if ( FinishCallback_k__BackingField )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._FinishCallback_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._FinishCallback_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall RewardMiniPopup_RewardMiniPopupPlayerBase__set_PopupInfoArray(
        RewardMiniPopup_RewardMiniPopupPlayerBase_o *this,
        RewardMiniPopup_PopupInfoBase_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._PopupInfoArray_k__BackingField = value;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall RewardMiniPopup_RewardMiniPopupPlayerBase___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C20970 & 1) == 0 )
  {
    sub_1C3B764(&RewardMiniPopup_RewardMiniPopupPlayerBase___c_TypeInfo, v1);
    byte_4C20970 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(RewardMiniPopup_RewardMiniPopupPlayerBase___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RewardMiniPopup_RewardMiniPopupPlayerBase___c_TypeInfo->static_fields->__9 = (struct RewardMiniPopup_RewardMiniPopupPlayerBase___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)RewardMiniPopup_RewardMiniPopupPlayerBase___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, 0LL);
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
    sub_1C3B9C0(IsNullOrEmpty, v4);
  max_length = PopupInfoArray_k__BackingField->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1C3B9C8(IsNullOrEmpty, v4);
      v8 = PopupInfoArray_k__BackingField->m_Items[v7];
      if ( !v8 )
        break;
      if ( (((__int64 (__fastcall *)(RewardMiniPopup_PopupInfoBase_o *, const char *))v8->klass[1]._1.gc_desc)(
              v8,
              v8->klass[1]._1.name) & 1) != 0 )
      {
        IsNullOrEmpty = ((__int64 (__fastcall *)(RewardMiniPopup_PopupInfoBase_o *, const char *))v8->klass[1]._1.gc_desc)(
                          v8,
                          v8->klass[1]._1.name);
        if ( (IsNullOrEmpty & 1) != 0 )
        {
          v11 = 21;
          do
          {
            if ( !--v11 )
              break;
            Args_6_0 = RewardMiniPopup_RewardMiniPopupPlayerSimultaneous___Play_g__GenerateArgs_6_0(this, v8, v10);
            if ( (((__int64 (__fastcall *)(RewardMiniPopup_PopupInfoBase_o *, RewardMiniPopup_DisplayArgs_o *, void *))v8->klass[1]._1.namespaze)(
                    v8,
                    Args_6_0,
                    v8->klass[1]._1.byval_arg.data) & 1) != 0 )
              ++this->fields.popupDisplayStartedCount;
            IsNullOrEmpty = ((__int64 (__fastcall *)(RewardMiniPopup_PopupInfoBase_o *, const char *))v8->klass[1]._1.gc_desc)(
                              v8,
                              v8->klass[1]._1.name);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  _QWORD *v22; // x20
  PartyOrganizationUtility_o *v23; // x22
  System_Delegate_o *v24; // x23
  System_Action_o *v25; // x24
  System_Delegate_o *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int32_t popupDisplayStartedCount; // s0
  RewardMiniPopup_RewardMiniPopupPlayerSimultaneous_o *v35; // x0
  const MethodInfo *v36; // x1

  if ( (byte_4C20971 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, popupInfo);
    sub_1C3B764(&Method_RewardMiniPopup_RewardMiniPopupPlayerSimultaneous___c__DisplayClass6_0__Play_b__1__, v5);
    sub_1C3B764(&RewardMiniPopup_RewardMiniPopupPlayerSimultaneous___c__DisplayClass6_0_TypeInfo, v6);
    byte_4C20971 = 1;
  }
  v7 = sub_1C3B9B0(RewardMiniPopup_RewardMiniPopupPlayerSimultaneous___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 24) = this,
        sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)this, v10, v11, v12, v13, v14, v15),
        *(_QWORD *)(v7 + 16) = popupInfo,
        sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)popupInfo, v16, v17, v18, v19, v20, v21),
        (v8 = *(_QWORD **)(v7 + 16)) == 0LL)
    || (v8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v8 + 392LL))(v8, *(_QWORD *)(*v8 + 400LL))) == 0LL )
  {
    sub_1C3B9C0(v8, v9);
  }
  v22 = v8;
  v23 = (PartyOrganizationUtility_o *)(v8 + 4);
  v24 = (System_Delegate_o *)v8[4];
  v25 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v7,
    Method_RewardMiniPopup_RewardMiniPopupPlayerSimultaneous___c__DisplayClass6_0__Play_b__1__,
    0LL);
  v26 = System_Delegate__Combine(v24, (System_Delegate_o *)v25, 0LL);
  if ( v26 && (System_Action_c *)v26->klass != System_Action_TypeInfo )
  {
    sub_1C3BC80(v26);
    return (RewardMiniPopup_DisplayArgs_o *)RewardMiniPopup_RewardMiniPopupPlayerSimultaneous__IsBusy(v35, v36);
  }
  else
  {
    v22[4] = v26;
    sub_1C3B708(v23, (int64_t)v26, v27, v28, v29, v30, v31, v32);
    popupDisplayStartedCount = this->fields.popupDisplayStartedCount;
    *((_DWORD *)v22 + 4) = 0;
    *((_DWORD *)v22 + 6) = 0;
    *((float *)v22 + 5) = (float)popupDisplayStartedCount * -50.0;
    *((_BYTE *)v22 + 40) = 0;
    return (RewardMiniPopup_DisplayArgs_o *)v22;
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
    sub_1C3B9C0(this, method);
  if ( (((__int64 (__fastcall *)(struct RewardMiniPopup_RewardMiniPopupPlayerSimultaneous_o *, void *))_4__this->klass->vtable._5_IsBusy.method)(
          this->fields.__4__this,
          _4__this->klass[1]._1.image) & 1) == 0 )
    RewardMiniPopup_RewardMiniPopupPlayerBase__OnPlayAllFinished(_4__this, v3);
}