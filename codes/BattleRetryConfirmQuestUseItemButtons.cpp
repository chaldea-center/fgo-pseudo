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
  System_Collections_Generic_IEnumerable_T__o *buttons; // x19
  System_Action_object__o *v8; // x20

  if ( (byte_4C468A2 & 1) == 0 )
  {
    sub_1C37058(&System_Action_FriendshipUpItemUseItem__TypeInfo);
    sub_1C37058(&Method_BasicHelper_ForEach_FriendshipUpItemUseItem___);
    sub_1C37058(&Method_BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0__SetButtonEnabled_b__0__);
    sub_1C37058(&BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0_TypeInfo);
    byte_4C468A2 = 1;
  }
  v5 = sub_1C372A4(BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_BYTE *)(v5 + 16) = value;
  buttons = (System_Collections_Generic_IEnumerable_T__o *)this->fields.buttons;
  v8 = (System_Action_object__o *)sub_1C372A4(System_Action_FriendshipUpItemUseItem__TypeInfo);
  System_Action_object____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0__SetButtonEnabled_b__0__,
    0);
  BasicHelper__ForEach_object_(
    buttons,
    (System_Action_T__o *)v8,
    (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_FriendshipUpItemUseItem___);
}


void BattleRetryConfirmQuestUseItemButtons__Setup(
        BattleRetryConfirmQuestUseItemButtons_o *this,
        QuestUseItemInfo_array *itemInfos,
        System_Action_QuestUseItemInfo__FriendshipUpItemUseItem__o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct FriendshipUpItemUseItem_array *buttons; // x8
  __int64 v12; // x29
  unsigned __int64 v13; // x23
  __int64 v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct FriendshipUpItemUseItem_array *v22; // x8
  __int64 v23; // x1
  FriendshipUpItemUseItem_o *v24; // x23
  QuestUseItemInfo_o *v25; // x24
  System_Action_o *v26; // x25

  if ( (byte_4C468A1 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_0_TypeInfo);
    sub_1C37058(&Method_BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1__Setup_b__0__);
    sub_1C37058(&BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1_TypeInfo);
    byte_4C468A1 = 1;
  }
  v7 = sub_1C372A4(BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = callback,
        sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)callback, v9, v10),
        (buttons = this->fields.buttons) == 0) )
  {
LABEL_15:
    sub_1C372B4(v8);
  }
  v12 = 4;
  while ( 1 )
  {
    v13 = v12 - 4;
    if ( v12 - 4 >= SLODWORD(buttons->max_length) )
      break;
    if ( !itemInfos )
      goto LABEL_15;
    if ( (__int64)v13 >= SLODWORD(itemInfos->max_length) )
      break;
    v14 = sub_1C372A4(BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v14, 0);
    if ( !v14 )
      goto LABEL_15;
    *(_QWORD *)(v14 + 32) = v7;
    sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 32), v7, v15, v16);
    if ( v13 >= LODWORD(itemInfos->max_length) )
      goto LABEL_17;
    v19 = *((_QWORD *)&itemInfos->obj.klass + v12);
    *(_QWORD *)(v14 + 16) = v19;
    sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 16), v19, v17, v18);
    v22 = this->fields.buttons;
    if ( !v22 )
      goto LABEL_15;
    if ( v13 >= LODWORD(v22->max_length) )
LABEL_17:
      sub_1C372BC(v8);
    v23 = *((_QWORD *)&v22->obj.klass + v12);
    *(_QWORD *)(v14 + 24) = v23;
    sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 24), v23, v20, v21);
    v24 = *(FriendshipUpItemUseItem_o **)(v14 + 24);
    v25 = *(QuestUseItemInfo_o **)(v14 + 16);
    v26 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v26,
      (Il2CppObject *)v14,
      Method_BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1__Setup_b__0__,
      0);
    if ( v24 )
    {
      FriendshipUpItemUseItem__SetInit(v24, v25, 0, v26, 0);
      buttons = this->fields.buttons;
      ++v12;
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  FriendshipUpItemUseItem__SetButtonEnabled(btn, this->fields.value, 0);
}