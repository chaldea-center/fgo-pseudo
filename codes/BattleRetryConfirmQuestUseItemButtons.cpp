void __fastcall BattleRetryConfirmQuestUseItemButtons___ctor(
        BattleRetryConfirmQuestUseItemButtons_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(
        BattleRetryConfirmQuestUseItemButtons_o *this,
        bool value,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_T__o *buttons; // x19
  System_Action_object__o *v12; // x20

  if ( (byte_4A51AFD & 1) == 0 )
  {
    sub_1B863B8(&System_Action_FriendshipUpItemUseItem__TypeInfo, value);
    sub_1B863B8(&Method_BasicHelper_ForEach_FriendshipUpItemUseItem___, v5);
    sub_1B863B8(&Method_BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0__SetButtonEnabled_b__0__, v6);
    sub_1B863B8(&BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0_TypeInfo, v7);
    byte_4A51AFD = 1;
  }
  v8 = sub_1B86604(BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B86614(v9, v10);
  *(_BYTE *)(v8 + 16) = value;
  buttons = (System_Collections_Generic_IEnumerable_T__o *)this->fields.buttons;
  v12 = (System_Action_object__o *)sub_1B86604(System_Action_FriendshipUpItemUseItem__TypeInfo);
  System_Action_object____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0__SetButtonEnabled_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    buttons,
    (System_Action_T__o *)v12,
    (const MethodInfo_2F59FB0 *)Method_BasicHelper_ForEach_FriendshipUpItemUseItem___);
}


void __fastcall BattleRetryConfirmQuestUseItemButtons__Setup(
        BattleRetryConfirmQuestUseItemButtons_o *this,
        QuestUseItemInfo_array *itemInfos,
        System_Action_QuestUseItemInfo__FriendshipUpItemUseItem__o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct FriendshipUpItemUseItem_array *buttons; // x8
  __int64 v16; // x29
  unsigned __int64 v17; // x23
  __int64 v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct FriendshipUpItemUseItem_array *v26; // x8
  __int64 v27; // x1
  FriendshipUpItemUseItem_o *v28; // x23
  QuestUseItemInfo_o *v29; // x24
  System_Action_o *v30; // x25

  if ( (byte_4A51AFC & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, itemInfos);
    sub_1B863B8(&BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_0_TypeInfo, v7);
    sub_1B863B8(&Method_BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1__Setup_b__0__, v8);
    sub_1B863B8(&BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1_TypeInfo, v9);
    byte_4A51AFC = 1;
  }
  v10 = sub_1B86604(BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = callback,
        sub_1B8635C((CGThumbnailListItem_o *)(v10 + 16), (int32_t)callback, v13, v14),
        (buttons = this->fields.buttons) == 0LL) )
  {
LABEL_15:
    sub_1B86614(v11, v12);
  }
  v16 = 4LL;
  while ( 1 )
  {
    v17 = v16 - 4;
    if ( v16 - 4 >= (int)buttons->max_length )
      break;
    if ( !itemInfos )
      goto LABEL_15;
    if ( (__int64)v17 >= (int)itemInfos->max_length )
      break;
    v18 = sub_1B86604(BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v18, 0LL);
    if ( !v18 )
      goto LABEL_15;
    *(_QWORD *)(v18 + 32) = v10;
    sub_1B8635C((CGThumbnailListItem_o *)(v18 + 32), v10, v19, v20);
    if ( v17 >= itemInfos->max_length )
      goto LABEL_17;
    v23 = *((_QWORD *)&itemInfos->obj.klass + v16);
    *(_QWORD *)(v18 + 16) = v23;
    sub_1B8635C((CGThumbnailListItem_o *)(v18 + 16), v23, v21, v22);
    v26 = this->fields.buttons;
    if ( !v26 )
      goto LABEL_15;
    if ( v17 >= v26->max_length )
LABEL_17:
      sub_1B8661C(v11, v12);
    v27 = *((_QWORD *)&v26->obj.klass + v16);
    *(_QWORD *)(v18 + 24) = v27;
    sub_1B8635C((CGThumbnailListItem_o *)(v18 + 24), v27, v24, v25);
    v28 = *(FriendshipUpItemUseItem_o **)(v18 + 24);
    v29 = *(QuestUseItemInfo_o **)(v18 + 16);
    v30 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      v30,
      (Il2CppObject *)v18,
      Method_BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1__Setup_b__0__,
      0LL);
    if ( v28 )
    {
      FriendshipUpItemUseItem__SetInit(v28, v29, 0, v30, 0LL);
      buttons = this->fields.buttons;
      ++v16;
      if ( buttons )
        continue;
    }
    goto LABEL_15;
  }
}


void __fastcall BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_0___ctor(
        BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1___ctor(
        BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1___Setup_b__0(
        BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1_o *this,
        const MethodInfo *method)
{
  struct BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_0_o *CS___8__locals1; // x8
  struct System_Action_QuestUseItemInfo__FriendshipUpItemUseItem__o *callback; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || (callback = CS___8__locals1->fields.callback) == 0LL )
    sub_1B86614(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct QuestUseItemInfo_o *, struct FriendshipUpItemUseItem_o *, _QWORD))callback->fields.m_target)(
    callback->fields.original_method_info,
    this->fields.info,
    this->fields.button,
    *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0___ctor(
        BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0___SetButtonEnabled_b__0(
        BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0_o *this,
        FriendshipUpItemUseItem_o *btn,
        const MethodInfo *method)
{
  if ( !btn )
    sub_1B86614(this, 0LL);
  FriendshipUpItemUseItem__SetButtonEnabled(btn, this->fields.value, 0LL);
}