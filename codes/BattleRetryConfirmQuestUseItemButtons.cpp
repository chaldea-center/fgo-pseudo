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

  if ( (byte_4C254C2 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_FriendshipUpItemUseItem__TypeInfo, value);
    sub_1C3B764(&Method_BasicHelper_ForEach_FriendshipUpItemUseItem___, v5);
    sub_1C3B764(&Method_BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0__SetButtonEnabled_b__0__, v6);
    sub_1C3B764(&BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0_TypeInfo, v7);
    byte_4C254C2 = 1;
  }
  v8 = sub_1C3B9B0(BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1C3B9C0(v9, v10);
  *(_BYTE *)(v8 + 16) = value;
  buttons = (System_Collections_Generic_IEnumerable_T__o *)this->fields.buttons;
  v12 = (System_Action_object__o *)sub_1C3B9B0(System_Action_FriendshipUpItemUseItem__TypeInfo);
  System_Action_object____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_BattleRetryConfirmQuestUseItemButtons___c__DisplayClass2_0__SetButtonEnabled_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    buttons,
    (System_Action_T__o *)v12,
    (const MethodInfo_2FDCE70 *)Method_BasicHelper_ForEach_FriendshipUpItemUseItem___);
}


void __fastcall BattleRetryConfirmQuestUseItemButtons__Setup(
        BattleRetryConfirmQuestUseItemButtons_o *this,
        FriendshipUpItemInfo_array *itemInfos,
        System_Action_FriendshipUpItemInfo__FriendshipUpItemUseItem__o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct FriendshipUpItemUseItem_array *buttons; // x8
  __int64 v20; // x29
  unsigned __int64 v21; // x23
  __int64 v22; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct FriendshipUpItemUseItem_array *v42; // x8
  int64_t v43; // x1
  FriendshipUpItemUseItem_o *v44; // x23
  FriendshipUpItemInfo_o *v45; // x24
  System_Action_o *v46; // x25

  if ( (byte_4C254C1 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, itemInfos);
    sub_1C3B764(&BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_0_TypeInfo, v7);
    sub_1C3B764(&Method_BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1__Setup_b__0__, v8);
    sub_1C3B764(&BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1_TypeInfo, v9);
    byte_4C254C1 = 1;
  }
  v10 = sub_1C3B9B0(BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = callback,
        sub_1C3B708((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)callback, v13, v14, v15, v16, v17, v18),
        (buttons = this->fields.buttons) == 0LL) )
  {
LABEL_15:
    sub_1C3B9C0(v11, v12);
  }
  v20 = 4LL;
  while ( 1 )
  {
    v21 = v20 - 4;
    if ( v20 - 4 >= (int)buttons->max_length )
      break;
    if ( !itemInfos )
      goto LABEL_15;
    if ( (__int64)v21 >= (int)itemInfos->max_length )
      break;
    v22 = sub_1C3B9B0(BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v22, 0LL);
    if ( !v22 )
      goto LABEL_15;
    *(_QWORD *)(v22 + 32) = v10;
    sub_1C3B708((PartyOrganizationUtility_o *)(v22 + 32), v10, v23, v24, v25, v26, v27, v28);
    if ( v21 >= itemInfos->max_length )
      goto LABEL_17;
    v35 = *((_QWORD *)&itemInfos->obj.klass + v20);
    *(_QWORD *)(v22 + 16) = v35;
    sub_1C3B708((PartyOrganizationUtility_o *)(v22 + 16), v35, v29, v30, v31, v32, v33, v34);
    v42 = this->fields.buttons;
    if ( !v42 )
      goto LABEL_15;
    if ( v21 >= v42->max_length )
LABEL_17:
      sub_1C3B9C8(v11, v12);
    v43 = *((_QWORD *)&v42->obj.klass + v20);
    *(_QWORD *)(v22 + 24) = v43;
    sub_1C3B708((PartyOrganizationUtility_o *)(v22 + 24), v43, v36, v37, v38, v39, v40, v41);
    v44 = *(FriendshipUpItemUseItem_o **)(v22 + 24);
    v45 = *(FriendshipUpItemInfo_o **)(v22 + 16);
    v46 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      v46,
      (Il2CppObject *)v22,
      Method_BattleRetryConfirmQuestUseItemButtons___c__DisplayClass1_1__Setup_b__0__,
      0LL);
    if ( v44 )
    {
      FriendshipUpItemUseItem__SetInit(v44, v45, 0, v46, 0LL);
      buttons = this->fields.buttons;
      ++v20;
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
    sub_1C3B9C0(this, method);
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
    sub_1C3B9C0(this, 0LL);
  FriendshipUpItemUseItem__SetButtonEnabled(btn, this->fields.value, 0LL);
}