void BattleRetryConfirmQuestUseItemButtons___ctor(
        BattleRetryConfirmQuestUseItemButtons_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(
        BattleRetryConfirmQuestUseItemButtons_o *this,
        bool value,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *buttons; // x19
  System_Action_object__o *v9; // x20

  if ( (byte_4C5A699 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_FriendshipUpItemUseItem__TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_FriendshipUpItemUseItem___);
    sub_1C3E564(&Method_BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0__SetButtonEnabled_b__0__);
    sub_1C3E564(&BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0_TypeInfo);
    byte_4C5A699 = 1;
  }
  v5 = sub_1C3E7B0(BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  *(_BYTE *)(v5 + 16) = value;
  buttons = (System_Collections_Generic_IEnumerable_T__o *)this->fields.buttons;
  v9 = (System_Action_object__o *)sub_1C3E7B0(System_Action_FriendshipUpItemUseItem__TypeInfo);
  System_Action_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0__SetButtonEnabled_b__0__,
    0);
  BasicHelper__ForEach_object_(
    buttons,
    (System_Action_T__o *)v9,
    (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_FriendshipUpItemUseItem___);
}


void BattleRetryConfirmQuestUseItemButtons__Setup(
        BattleRetryConfirmQuestUseItemButtons_o *this,
        QuestUseItemInfo_array *itemInfos,
        System_Action_QuestUseItemInfo__FriendshipUpItemUseItem__o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct FriendshipUpItemUseItem_array *buttons; // x8
  __int64 v13; // x29
  unsigned __int64 v14; // x23
  __int64 v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct FriendshipUpItemUseItem_array *v23; // x8
  __int64 v24; // x1
  FriendshipUpItemUseItem_o *v25; // x23
  QuestUseItemInfo_o *v26; // x24
  System_Action_o *v27; // x25

  if ( (byte_4C5A698 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_0_TypeInfo);
    sub_1C3E564(&Method_BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1__Setup_b__0__);
    sub_1C3E564(&BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1_TypeInfo);
    byte_4C5A698 = 1;
  }
  v7 = sub_1C3E7B0(BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = callback,
        sub_1C3E508((CGThumbnailListItem_o *)(v7 + 16), (int32_t)callback, v10, v11),
        (buttons = this->fields.buttons) == 0) )
  {
LABEL_15:
    sub_1C3E7C0(v8, v9);
  }
  v13 = 4;
  while ( 1 )
  {
    v14 = v13 - 4;
    if ( v13 - 4 >= SLODWORD(buttons->max_length) )
      break;
    if ( !itemInfos )
      goto LABEL_15;
    if ( (__int64)v14 >= SLODWORD(itemInfos->max_length) )
      break;
    v15 = sub_1C3E7B0(BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v15, 0);
    if ( !v15 )
      goto LABEL_15;
    *(_QWORD *)(v15 + 32) = v7;
    sub_1C3E508((CGThumbnailListItem_o *)(v15 + 32), v7, v16, v17);
    if ( v14 >= LODWORD(itemInfos->max_length) )
      goto LABEL_17;
    v20 = *((_QWORD *)&itemInfos->obj.klass + v13);
    *(_QWORD *)(v15 + 16) = v20;
    sub_1C3E508((CGThumbnailListItem_o *)(v15 + 16), v20, v18, v19);
    v23 = this->fields.buttons;
    if ( !v23 )
      goto LABEL_15;
    if ( v14 >= LODWORD(v23->max_length) )
LABEL_17:
      sub_1C3E7C8(v8, v9);
    v24 = *((_QWORD *)&v23->obj.klass + v13);
    *(_QWORD *)(v15 + 24) = v24;
    sub_1C3E508((CGThumbnailListItem_o *)(v15 + 24), v24, v21, v22);
    v25 = *(FriendshipUpItemUseItem_o **)(v15 + 24);
    v26 = *(QuestUseItemInfo_o **)(v15 + 16);
    v27 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      v27,
      (Il2CppObject *)v15,
      Method_BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1__Setup_b__0__,
      0);
    if ( v25 )
    {
      FriendshipUpItemUseItem__SetInit(v25, v26, 0, v27, 0);
      buttons = this->fields.buttons;
      ++v13;
      if ( buttons )
        continue;
    }
    goto LABEL_15;
  }
}


void BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_0___ctor(
        BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1___ctor(
        BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1___Setup_b__0(
        BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1_o *this,
        const MethodInfo *method)
{
  struct BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_0_o *CS___8__locals1; // x8
  struct System_Action_QuestUseItemInfo__FriendshipUpItemUseItem__o *callback; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || (callback = CS___8__locals1->fields.callback) == 0 )
    sub_1C3E7C0(this, method);
  ((void (__fastcall *)(intptr_t, struct QuestUseItemInfo_o *, struct FriendshipUpItemUseItem_o *, intptr_t))callback->fields.invoke_impl)(
    callback->fields.method_code,
    this->fields.info,
    this->fields.button,
    callback->fields.method);
}


void BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0___ctor(
        BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0___SetButtonEnabled_b__0(
        BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0_o *this,
        FriendshipUpItemUseItem_o *btn,
        const MethodInfo *method)
{
  if ( !btn )
    sub_1C3E7C0(this, 0);
  FriendshipUpItemUseItem__SetButtonEnabled(btn, this->fields.value, 0);
}