void __fastcall FriendshipUpItemSwitchComponent___ctor(
        FriendshipUpItemSwitchComponent_o *this,
        const MethodInfo *method)
{
  SwitchParameterDisplayComponent___ctor((SwitchParameterDisplayComponent_o *)this, 0LL);
}


void __fastcall FriendshipUpItemSwitchComponent__ChangeButtonState(
        FriendshipUpItemSwitchComponent_o *this,
        System_Action_o *openSelectDialog,
        const MethodInfo *method)
{
  __int64 v5; // x1
  FriendshipUpItemUseItem_o *IsNullOrEmpty; // x0
  const MethodInfo *v7; // x1
  struct FriendshipUpItemInfo_array *itemInfoArray; // x8
  UnityEngine_Object_o *switchWidget; // x21
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  FriendshipUpItemInfo_o *v12; // x20
  UnityEngine_Object_o *friendshipUpItemUseItem; // x21
  bool UseFlag; // w21
  _QWORD *v15; // x8
  System_Reflection_MethodBase_o *v16; // x0
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  bool v19; // w1
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2

  if ( (byte_4B6272C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_FriendshipUpItemSwitchComponent_ChangeButtonState__, openSelectDialog);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v5);
    byte_4B6272C = 1;
  }
  IsNullOrEmpty = (FriendshipUpItemUseItem_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)this->fields.itemInfoArray,
                                                 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    itemInfoArray = this->fields.itemInfoArray;
    if ( !itemInfoArray )
      goto LABEL_28;
    if ( (int)itemInfoArray->max_length >= 2 )
    {
      switchWidget = (UnityEngine_Object_o *)this->fields.switchWidget;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      IsNullOrEmpty = (FriendshipUpItemUseItem_o *)UnityEngine_Object__op_Inequality(switchWidget, 0LL, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        v10 = Method_FriendshipUpItemSwitchComponent_ChangeButtonState__;
        if ( (*((_BYTE *)Method_FriendshipUpItemSwitchComponent_ChangeButtonState__ + 83) & 2) != 0 )
          v10 = (_QWORD *)sub_1BE4AE4(Method_FriendshipUpItemSwitchComponent_ChangeButtonState__);
        v11 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v10, v10[4]);
        OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
        if ( openSelectDialog )
        {
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))openSelectDialog->fields.m_target)(
            openSelectDialog->fields.original_method_info,
            *(_QWORD *)&openSelectDialog->fields.extra_arg);
          return;
        }
LABEL_28:
        sub_1BE4D28(IsNullOrEmpty, v7);
      }
      itemInfoArray = this->fields.itemInfoArray;
      if ( !itemInfoArray )
        goto LABEL_28;
    }
    if ( !itemInfoArray->max_length )
      sub_1BE4D30(IsNullOrEmpty, v7);
    v12 = itemInfoArray->m_Items[0];
    friendshipUpItemUseItem = (UnityEngine_Object_o *)this->fields.friendshipUpItemUseItem;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsNullOrEmpty = (FriendshipUpItemUseItem_o *)UnityEngine_Object__op_Equality(friendshipUpItemUseItem, 0LL, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      if ( !v12 )
        goto LABEL_28;
      UseFlag = FriendshipUpItemInfo__GetUseFlag(v12, v7);
      v15 = Method_FriendshipUpItemSwitchComponent_ChangeButtonState__;
      if ( (*((_BYTE *)Method_FriendshipUpItemSwitchComponent_ChangeButtonState__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1BE4AE4(Method_FriendshipUpItemSwitchComponent_ChangeButtonState__);
      v16 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v15, v15[4]);
      if ( UseFlag )
      {
        OverwriteAssetSoundName__PlaySystemSe(v16, 1, 0LL);
        FriendshipUpItemInfo__SetUseFlag(v12, 0, v17);
        IsNullOrEmpty = this->fields.friendshipUpItemUseItem;
        if ( !IsNullOrEmpty )
          goto LABEL_28;
        v19 = 0;
      }
      else
      {
        OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
        FriendshipUpItemInfo__SetUseFlag(v12, 1, v20);
        IsNullOrEmpty = this->fields.friendshipUpItemUseItem;
        if ( !IsNullOrEmpty )
          goto LABEL_28;
        v19 = 1;
      }
      FriendshipUpItemUseItem__ChangeButtonState(IsNullOrEmpty, v19, v18);
      FriendshipUpItemSwitchComponent__SetParam(this, 0, v21);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipUpItemSwitchComponent__EnableUseButton(
        FriendshipUpItemSwitchComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Object_o *friendshipUpItemUseItem; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  FriendshipUpItemUseItem_o *v8; // x0

  if ( (byte_4B6272A & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, flag);
    byte_4B6272A = 1;
  }
  friendshipUpItemUseItem = (UnityEngine_Object_o *)this->fields.friendshipUpItemUseItem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(friendshipUpItemUseItem, 0LL, 0LL) )
  {
    v8 = this->fields.friendshipUpItemUseItem;
    if ( !v8 )
      sub_1BE4D28(0LL, v6);
    FriendshipUpItemUseItem__SetButtonEnabled(v8, flag, v7);
  }
}


bool __fastcall FriendshipUpItemSwitchComponent__ParameterChange(
        FriendshipUpItemSwitchComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  bool activeSelf; // w21

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BE4D28(0LL, v6);
  activeSelf = UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
  if ( activeSelf )
    FriendshipUpItemSwitchComponent__SetItem(this, count, v7);
  return activeSelf;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipUpItemSwitchComponent__SetAlpha(
        FriendshipUpItemSwitchComponent_o *this,
        float alpha,
        const MethodInfo *method)
{
  long double v3; // q8
  UnityEngine_Object_o *switchWidget; // x20
  __int64 v6; // x1
  struct UIWidget_o *v7; // x0

  v3 = *(long double *)&alpha;
  if ( (byte_4B6272F & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6272F = 1;
  }
  switchWidget = (UnityEngine_Object_o *)this->fields.switchWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(switchWidget, 0LL, 0LL) )
  {
    v7 = this->fields.switchWidget;
    if ( !v7 )
      sub_1BE4D28(0LL, v6);
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, long double))v7->klass->vtable._8_set_alpha.method)(
      v7,
      v7->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      v3);
  }
}


void __fastcall FriendshipUpItemSwitchComponent__SetFriendshipUpItemUseItem(
        FriendshipUpItemSwitchComponent_o *this,
        FriendshipUpItemUseItem_o *item,
        const MethodInfo *method)
{
  this->fields.friendshipUpItemUseItem = item;
  sub_1BE4A70(&this->fields.friendshipUpItemUseItem);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipUpItemSwitchComponent__SetItem(
        FriendshipUpItemSwitchComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  void *IsNullOrEmpty; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct FriendshipUpItemInfo_array *itemInfoArray; // x8
  int max_length; // w8
  float v10; // s0

  if ( (byte_4B6272D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, *(_QWORD *)&count);
    byte_4B6272D = 1;
  }
  IsNullOrEmpty = (void *)BasicHelper__IsNullOrEmpty(
                            (System_Collections_ICollection_o *)this->fields.itemInfoArray,
                            0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( IsNullOrEmpty )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 0, 0LL);
      return;
    }
LABEL_12:
    sub_1BE4D28(IsNullOrEmpty, v6);
  }
  itemInfoArray = this->fields.itemInfoArray;
  if ( !itemInfoArray )
    goto LABEL_12;
  max_length = itemInfoArray->max_length;
  if ( max_length >= 2 )
  {
    FriendshipUpItemSwitchComponent__SetParam(this, count % max_length, v7);
    IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !IsNullOrEmpty )
      goto LABEL_12;
    v10 = *((float *)IsNullOrEmpty + 13);
  }
  else
  {
    FriendshipUpItemSwitchComponent__SetParam(this, 0, v7);
    v10 = 1.0;
  }
  FriendshipUpItemSwitchComponent__SetAlpha(this, v10, v6);
}


void __fastcall FriendshipUpItemSwitchComponent__SetItemInfo(
        FriendshipUpItemSwitchComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  void *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B62729 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, method);
    sub_1BE4ACC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    byte_4B62729 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  this->fields.itemInfoArray = (struct FriendshipUpItemInfo_array *)*((_QWORD *)Instance + 16);
  sub_1BE4A70(&this->fields.itemInfoArray);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemInfoArray, 0LL) )
  {
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      return;
    }
LABEL_10:
    sub_1BE4D28(Instance, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  SwitchParameterDisplayManager__AddComponent(
    (SwitchParameterDisplayManager_o *)Instance,
    (SwitchParameterDisplayComponent_o *)this,
    0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  FriendshipUpItemSwitchComponent__SetItem(this, *((_DWORD *)Instance + 12), v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipUpItemSwitchComponent__SetParam(
        FriendshipUpItemSwitchComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *friendshipUpItemUseItem; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  struct FriendshipUpItemInfo_array *itemInfoArray; // x8

  if ( (byte_4B6272E & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_4B6272E = 1;
  }
  if ( (index & 0x80000000) == 0 )
  {
    friendshipUpItemUseItem = (UnityEngine_Object_o *)this->fields.friendshipUpItemUseItem;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(friendshipUpItemUseItem, 0LL, 0LL) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_13;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      itemInfoArray = this->fields.itemInfoArray;
      if ( !itemInfoArray )
        goto LABEL_13;
      if ( itemInfoArray->max_length <= index )
        sub_1BE4D30(gameObject, v7);
      gameObject = (UnityEngine_GameObject_o *)this->fields.friendshipUpItemUseItem;
      if ( !gameObject )
LABEL_13:
        sub_1BE4D28(gameObject, v7);
      FriendshipUpItemUseItem__SetInit((FriendshipUpItemUseItem_o *)gameObject, itemInfoArray->m_Items[index], 0LL, v8);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipUpItemSwitchComponent__SetWaveBattleRestart(
        FriendshipUpItemSwitchComponent_o *this,
        int32_t itemId,
        bool isUse,
        bool isValid,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x23
  FriendshipUpItemUseItem_o *v14; // x0
  FriendshipUpItemInfo_o *v15; // x1
  UnityEngine_Object_o *friendshipUpItemUseItem; // x22
  System_Collections_Generic_IEnumerable_TSource__o *itemInfoArray; // x22
  System_Func_object__bool__o *v18; // x24
  Il2CppObject *v19; // x0
  const MethodInfo *v20; // x3

  if ( (byte_4B62730 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_FirstOrDefault_FriendshipUpItemInfo____77202224, *(_QWORD *)&itemId);
    sub_1BE4ACC(&System_Func_FriendshipUpItemInfo__bool__TypeInfo, v9);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v10);
    sub_1BE4ACC(&Method_FriendshipUpItemSwitchComponent___c__DisplayClass11_0__SetWaveBattleRestart_b__0__, v11);
    sub_1BE4ACC(&FriendshipUpItemSwitchComponent___c__DisplayClass11_0_TypeInfo, v12);
    byte_4B62730 = 1;
  }
  v13 = sub_1BE4D18(FriendshipUpItemSwitchComponent___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_12;
  *(_DWORD *)(v13 + 16) = itemId;
  friendshipUpItemUseItem = (UnityEngine_Object_o *)this->fields.friendshipUpItemUseItem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(friendshipUpItemUseItem, 0LL, 0LL) )
  {
    itemInfoArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.itemInfoArray;
    v18 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_FriendshipUpItemInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v18,
      (Il2CppObject *)v13,
      Method_FriendshipUpItemSwitchComponent___c__DisplayClass11_0__SetWaveBattleRestart_b__0__,
      0LL);
    v19 = System_Linq_Enumerable__FirstOrDefault_object__49793520(
            itemInfoArray,
            (System_Func_TSource__bool__o *)v18,
            (const MethodInfo_2F7C9F0 *)Method_System_Linq_Enumerable_FirstOrDefault_FriendshipUpItemInfo____77202224);
    if ( v19 )
    {
      v15 = (FriendshipUpItemInfo_o *)v19;
      v14 = this->fields.friendshipUpItemUseItem;
      if ( !v14 )
        goto LABEL_12;
      FriendshipUpItemUseItem__SetInit(v14, v15, 0LL, v20);
    }
    v14 = this->fields.friendshipUpItemUseItem;
    if ( v14 )
    {
      FriendshipUpItemUseItem__SetWaveBattleRestart(v14, isUse, isValid, v20);
      return;
    }
LABEL_12:
    sub_1BE4D28(v14, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipUpItemSwitchComponent__ShowFriendshipUpItemUseButton(
        FriendshipUpItemSwitchComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Object_o *friendshipUpItemUseItem; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4B6272B & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, flag);
    byte_4B6272B = 1;
  }
  friendshipUpItemUseItem = (UnityEngine_Object_o *)this->fields.friendshipUpItemUseItem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(friendshipUpItemUseItem, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseItem;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1BE4D28(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, flag, 0LL);
  }
}


bool __fastcall FriendshipUpItemSwitchComponent__UpdateAlpha(
        FriendshipUpItemSwitchComponent_o *this,
        float alpha,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  struct FriendshipUpItemInfo_array *itemInfoArray; // x8
  float v9; // s0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BE4D28(0LL, v6);
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
  {
    itemInfoArray = this->fields.itemInfoArray;
    if ( itemInfoArray )
    {
      v9 = 1.0;
      if ( (int)itemInfoArray->max_length > 1 )
        v9 = alpha;
    }
    else
    {
      v9 = 1.0;
    }
    FriendshipUpItemSwitchComponent__SetAlpha(this, v9, v7);
  }
  return 1;
}


void __fastcall FriendshipUpItemSwitchComponent___c__DisplayClass11_0___ctor(
        FriendshipUpItemSwitchComponent___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall FriendshipUpItemSwitchComponent___c__DisplayClass11_0___SetWaveBattleRestart_b__0(
        FriendshipUpItemSwitchComponent___c__DisplayClass11_0_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1BE4D28(this, 0LL);
  return info->fields._Id_k__BackingField == this->fields.itemId;
}