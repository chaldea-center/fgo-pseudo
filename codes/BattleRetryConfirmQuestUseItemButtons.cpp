void __fastcall BattleRetryConfirmQuestUseItemButtons___ctor(
        BattleRetryConfirmQuestUseItemButtons_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(
        BattleRetryConfirmQuestUseItemButtons_o *this,
        bool value,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *buttons; // x19
  System_Action_object__o *v9; // x20

  if ( (byte_4BDF9F5 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_FriendshipUpItemUseItem__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_FriendshipUpItemUseItem___);
    sub_1C21E38(&Method_BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0__SetButtonEnabled_b__0__);
    sub_1C21E38(&BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0_TypeInfo);
    byte_4BDF9F5 = 1;
  }
  v5 = sub_1C22084(BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_BYTE *)(v5 + 16) = value;
  buttons = (System_Collections_Generic_IEnumerable_T__o *)this->fields.buttons;
  v9 = (System_Action_object__o *)sub_1C22084(System_Action_FriendshipUpItemUseItem__TypeInfo);
  System_Action_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0__SetButtonEnabled_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    buttons,
    (System_Action_T__o *)v9,
    (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_FriendshipUpItemUseItem___);
}


void __fastcall BattleRetryConfirmQuestUseItemButtons__Setup(
        BattleRetryConfirmQuestUseItemButtons_o *this,
        FriendshipUpItemInfo_array *itemInfos,
        System_Action_FriendshipUpItemInfo__FriendshipUpItemUseItem__o *callback,
        const MethodInfo *method)
{
  int64_t v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct FriendshipUpItemUseItem_array *buttons; // x8
  __int64 v17; // x29
  unsigned __int64 v18; // x23
  __int64 v19; // x22
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct FriendshipUpItemUseItem_array *v39; // x8
  int64_t v40; // x1
  FriendshipUpItemUseItem_o *v41; // x23
  FriendshipUpItemInfo_o *v42; // x24
  System_Action_o *v43; // x25

  if ( (byte_4BDF9F4 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_0_TypeInfo);
    sub_1C21E38(&Method_BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1__Setup_b__0__);
    sub_1C21E38(&BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1_TypeInfo);
    byte_4BDF9F4 = 1;
  }
  v7 = sub_1C22084(BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = callback,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)callback, v10, v11, v12, v13, v14, v15),
        (buttons = this->fields.buttons) == 0LL) )
  {
LABEL_15:
    sub_1C22094(v8, v9);
  }
  v17 = 4LL;
  while ( 1 )
  {
    v18 = v17 - 4;
    if ( v17 - 4 >= (int)buttons->max_length )
      break;
    if ( !itemInfos )
      goto LABEL_15;
    if ( (__int64)v18 >= (int)itemInfos->max_length )
      break;
    v19 = sub_1C22084(BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v19, 0LL);
    if ( !v19 )
      goto LABEL_15;
    *(_QWORD *)(v19 + 32) = v7;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 32), v7, v20, v21, v22, v23, v24, v25);
    if ( v18 >= itemInfos->max_length )
      goto LABEL_17;
    v32 = *((_QWORD *)&itemInfos->obj.klass + v17);
    *(_QWORD *)(v19 + 16) = v32;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 16), v32, v26, v27, v28, v29, v30, v31);
    v39 = this->fields.buttons;
    if ( !v39 )
      goto LABEL_15;
    if ( v18 >= v39->max_length )
LABEL_17:
      sub_1C2209C(v8, v9);
    v40 = *((_QWORD *)&v39->obj.klass + v17);
    *(_QWORD *)(v19 + 24) = v40;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 24), v40, v33, v34, v35, v36, v37, v38);
    v41 = *(FriendshipUpItemUseItem_o **)(v19 + 24);
    v42 = *(FriendshipUpItemInfo_o **)(v19 + 16);
    v43 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v43,
      (Il2CppObject *)v19,
      Method_BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1__Setup_b__0__,
      0LL);
    if ( v41 )
    {
      FriendshipUpItemUseItem__SetInit(v41, v42, 0, v43, 0LL);
      buttons = this->fields.buttons;
      ++v17;
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
  struct System_Action_FriendshipUpItemInfo__FriendshipUpItemUseItem__o *callback; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || (callback = CS___8__locals1->fields.callback) == 0LL )
    sub_1C22094(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct FriendshipUpItemInfo_o *, struct FriendshipUpItemUseItem_o *, _QWORD))callback->fields.m_target)(
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
    sub_1C22094(this, 0LL);
  FriendshipUpItemUseItem__SetButtonEnabled(btn, this->fields.value, 0LL);
}