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
  bool v8; // w9
  System_Collections_Generic_IEnumerable_T__o *buttons; // x19
  System_Action_FriendshipUpItemUseItem__c *v10; // x0
  System_Action_object__o *v11; // x20

  if ( (byte_597452D & 1) == 0 )
  {
    sub_2213A60(&System_Action_FriendshipUpItemUseItem__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_FriendshipUpItemUseItem___);
    sub_2213A60(&Method_BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0__SetButtonEnabled_b__0__);
    sub_2213A60(&BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0_TypeInfo);
    byte_597452D = 1;
  }
  v5 = sub_2213CCC(BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  v8 = value;
  buttons = (System_Collections_Generic_IEnumerable_T__o *)this->fields.buttons;
  v10 = System_Action_FriendshipUpItemUseItem__TypeInfo;
  *(_BYTE *)(v5 + 16) = v8;
  v11 = (System_Action_object__o *)sub_2213CCC(v10);
  System_Action_object____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0__SetButtonEnabled_b__0__,
    0);
  BasicHelper__ForEach_object_(
    buttons,
    (System_Action_T__o *)v11,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_FriendshipUpItemUseItem___);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct FriendshipUpItemUseItem_array *buttons; // x8
  __int64 v17; // x29
  unsigned __int64 v18; // x23
  __int64 v19; // x22
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct FriendshipUpItemUseItem_array *v39; // x8
  __int64 v40; // x1
  FriendshipUpItemUseItem_o *v41; // x23
  QuestUseItemInfo_o *v42; // x24
  System_Action_o *v43; // x25

  if ( (byte_597452C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_0_TypeInfo);
    sub_2213A60(&Method_BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1__Setup_b__0__);
    sub_2213A60(&BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1_TypeInfo);
    byte_597452C = 1;
  }
  v7 = sub_2213CCC(BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = callback,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)callback, v10, v11, v12, v13, v14, v15),
        (buttons = this->fields.buttons) == 0) )
  {
LABEL_15:
    sub_2213CDC(v8, v9);
  }
  v17 = 4;
  while ( 1 )
  {
    v18 = v17 - 4;
    if ( v17 - 4 >= SLODWORD(buttons->max_length) )
      break;
    if ( !itemInfos )
      goto LABEL_15;
    if ( (__int64)v18 >= SLODWORD(itemInfos->max_length) )
      break;
    v19 = sub_2213CCC(BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v19, 0);
    if ( !v19 )
      goto LABEL_15;
    *(_QWORD *)(v19 + 32) = v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 32), v7, v20, v21, v22, v23, v24, v25);
    if ( v18 >= LODWORD(itemInfos->max_length) )
      goto LABEL_17;
    v32 = *((_QWORD *)&itemInfos->obj.klass + v17);
    *(_QWORD *)(v19 + 16) = v32;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 16), v32, v26, v27, v28, v29, v30, v31);
    v39 = this->fields.buttons;
    if ( !v39 )
      goto LABEL_15;
    if ( v18 >= LODWORD(v39->max_length) )
LABEL_17:
      sub_2213CE4(v8);
    v40 = *((_QWORD *)&v39->obj.klass + v17);
    *(_QWORD *)(v19 + 24) = v40;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 24), v40, v33, v34, v35, v36, v37, v38);
    v41 = *(FriendshipUpItemUseItem_o **)(v19 + 24);
    v42 = *(QuestUseItemInfo_o **)(v19 + 16);
    v43 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v43,
      (Il2CppObject *)v19,
      Method_BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1__Setup_b__0__,
      0);
    if ( v41 )
    {
      FriendshipUpItemUseItem__SetInit(v41, v42, 0, v43, 0);
      buttons = this->fields.buttons;
      ++v17;
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
  struct System_Action_QuestUseItemInfo__FriendshipUpItemUseItem__o *callback; // x9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || (callback = CS___8__locals1->fields.callback) == 0 )
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, 0);
  FriendshipUpItemUseItem__SetButtonEnabled(btn, this->fields.value, 0);
}