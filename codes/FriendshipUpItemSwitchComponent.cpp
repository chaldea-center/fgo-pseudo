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
  __int64 v6; // x1
  PartyOrganizationUtility_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  struct FriendshipUpItemInfo_array *itemInfoArray; // x8
  UnityEngine_Object_o *switchWidget; // x21
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  FriendshipUpItemInfo_o *v13; // x21
  UnityEngine_Object_o *friendshipUpItemUseItem; // x20
  _BOOL4 UseFlag_k__BackingField; // w20
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  const MethodInfo *v18; // x2
  bool v19; // w1
  const MethodInfo *v20; // x2

  if ( (byte_4C1DA11 & 1) == 0 )
  {
    sub_1C3B764(&Method_FriendshipUpItemSwitchComponent_ChangeButtonState__, openSelectDialog);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v6);
    byte_4C1DA11 = 1;
  }
  IsNullOrEmpty = (PartyOrganizationUtility_o *)BasicHelper__IsNullOrEmpty(
                                                  (System_Collections_ICollection_o *)this->fields.itemInfoArray,
                                                  0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    itemInfoArray = this->fields.itemInfoArray;
    if ( !itemInfoArray )
      goto LABEL_30;
    if ( (int)itemInfoArray->max_length >= 2 )
    {
      switchWidget = (UnityEngine_Object_o *)this->fields.switchWidget;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      IsNullOrEmpty = (PartyOrganizationUtility_o *)UnityEngine_Object__op_Inequality(switchWidget, 0LL, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        v11 = Method_FriendshipUpItemSwitchComponent_ChangeButtonState__;
        if ( (*((_BYTE *)Method_FriendshipUpItemSwitchComponent_ChangeButtonState__ + 83) & 2) != 0 )
          v11 = (_QWORD *)sub_1C3B77C(Method_FriendshipUpItemSwitchComponent_ChangeButtonState__);
        v12 = (System_Reflection_MethodBase_o *)sub_1C3B748(v11, v11[4]);
        OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0LL);
        if ( openSelectDialog )
        {
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))openSelectDialog->fields.m_target)(
            openSelectDialog->fields.original_method_info,
            *(_QWORD *)&openSelectDialog->fields.extra_arg);
          return;
        }
LABEL_30:
        sub_1C3B9C0(IsNullOrEmpty, v8);
      }
      itemInfoArray = this->fields.itemInfoArray;
      if ( !itemInfoArray )
        goto LABEL_30;
    }
    if ( !itemInfoArray->max_length )
      sub_1C3B9C8(IsNullOrEmpty, v8);
    v13 = itemInfoArray->m_Items[0];
    friendshipUpItemUseItem = (UnityEngine_Object_o *)this->fields.friendshipUpItemUseItem;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsNullOrEmpty = (PartyOrganizationUtility_o *)UnityEngine_Object__op_Equality(friendshipUpItemUseItem, 0LL, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      if ( !v13 )
        goto LABEL_30;
      UseFlag_k__BackingField = v13->fields._UseFlag_k__BackingField;
      v16 = Method_FriendshipUpItemSwitchComponent_ChangeButtonState__;
      if ( (*((_BYTE *)Method_FriendshipUpItemSwitchComponent_ChangeButtonState__ + 83) & 2) != 0 )
        v16 = (_QWORD *)sub_1C3B77C(Method_FriendshipUpItemSwitchComponent_ChangeButtonState__);
      v17 = (System_Reflection_MethodBase_o *)sub_1C3B748(v16, v16[4]);
      if ( UseFlag_k__BackingField )
      {
        OverwriteAssetSoundName__PlaySystemSe(v17, 1, 0, 0LL);
        v13->fields._UseFlag_k__BackingField = 0;
        IsNullOrEmpty = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !IsNullOrEmpty )
          goto LABEL_30;
        PartyOrganizationUtility__SaveQuestUseItemUseState(IsNullOrEmpty, 0LL);
        IsNullOrEmpty = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseItem;
        if ( !IsNullOrEmpty )
          goto LABEL_30;
        v19 = 0;
      }
      else
      {
        OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0LL);
        v13->fields._UseFlag_k__BackingField = 1;
        IsNullOrEmpty = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !IsNullOrEmpty )
          goto LABEL_30;
        PartyOrganizationUtility__SaveQuestUseItemUseState(IsNullOrEmpty, 0LL);
        IsNullOrEmpty = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseItem;
        if ( !IsNullOrEmpty )
          goto LABEL_30;
        v19 = 1;
      }
      FriendshipUpItemUseItem__ChangeButtonState((FriendshipUpItemUseItem_o *)IsNullOrEmpty, v19, v18);
      FriendshipUpItemSwitchComponent__SetParam(this, 0, v20);
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

  if ( (byte_4C1DA10 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, flag);
    byte_4C1DA10 = 1;
  }
  friendshipUpItemUseItem = (UnityEngine_Object_o *)this->fields.friendshipUpItemUseItem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(friendshipUpItemUseItem, 0LL, 0LL) )
  {
    v8 = this->fields.friendshipUpItemUseItem;
    if ( !v8 )
      sub_1C3B9C0(0LL, v6);
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
    sub_1C3B9C0(0LL, v6);
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
  const MethodInfo *v6; // x1
  FriendshipUpItemUseItem_o *v7; // x0
  UnityEngine_Object_o *friendshipUpItemUseItem; // x20

  v3 = *(long double *)&alpha;
  if ( (byte_4C1DA14 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1DA14 = 1;
  }
  switchWidget = (UnityEngine_Object_o *)this->fields.switchWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(switchWidget, 0LL, 0LL) )
  {
    v7 = (FriendshipUpItemUseItem_o *)this->fields.switchWidget;
    if ( !v7 )
      goto LABEL_13;
    ((void (__fastcall *)(FriendshipUpItemUseItem_o *, Il2CppClass *, long double))v7->klass[1]._1.castClass)(
      v7,
      v7->klass[1]._1.declaringType,
      v3);
    friendshipUpItemUseItem = (UnityEngine_Object_o *)this->fields.friendshipUpItemUseItem;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(friendshipUpItemUseItem, 0LL, 0LL) )
    {
      v7 = this->fields.friendshipUpItemUseItem;
      if ( v7 )
      {
        FriendshipUpItemUseItem__UpdateButtonAlpha(v7, v6);
        return;
      }
LABEL_13:
      sub_1C3B9C0(v7, v6);
    }
  }
}


void __fastcall FriendshipUpItemSwitchComponent__SetFriendshipUpItemUseItem(
        FriendshipUpItemSwitchComponent_o *this,
        FriendshipUpItemUseItem_o *item,
        const MethodInfo *method)
{
  this->fields.friendshipUpItemUseItem = item;
  sub_1C3B708(&this->fields.friendshipUpItemUseItem);
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

  if ( (byte_4C1DA12 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, *(_QWORD *)&count);
    byte_4C1DA12 = 1;
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
    sub_1C3B9C0(IsNullOrEmpty, v6);
  }
  itemInfoArray = this->fields.itemInfoArray;
  if ( !itemInfoArray )
    goto LABEL_12;
  max_length = itemInfoArray->max_length;
  if ( max_length >= 2 )
  {
    FriendshipUpItemSwitchComponent__SetParam(this, (count - this->fields.startCount) % max_length, v7);
    IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
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
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  int32_t SelectedPartyPosition_k__BackingField; // w1

  if ( (byte_4C1DA0F & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, method);
    sub_1C3B764(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    byte_4C1DA0F = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  this->fields.itemInfoArray = PartyOrganizationUtility__GetQuestUseItems(Instance, 0LL);
  sub_1C3B708(&this->fields.itemInfoArray);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemInfoArray, 0LL) )
  {
    Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      return;
    }
LABEL_10:
    sub_1C3B9C0(Instance, v5);
  }
  Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  SwitchParameterDisplayManager__AddComponent(
    (SwitchParameterDisplayManager_o *)Instance,
    (SwitchParameterDisplayComponent_o *)this,
    0LL);
  Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  SelectedPartyPosition_k__BackingField = Instance->fields._SelectedPartyPosition_k__BackingField;
  this->fields.startCount = SelectedPartyPosition_k__BackingField;
  FriendshipUpItemSwitchComponent__SetItem(this, SelectedPartyPosition_k__BackingField, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipUpItemSwitchComponent__SetParam(
        FriendshipUpItemSwitchComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *friendshipUpItemUseItem; // x21
  void *gameObject; // x0
  __int64 v8; // x1
  struct FriendshipUpItemInfo_array *itemInfoArray; // x8
  FriendshipUpItemUseItem_o *v10; // x20
  FriendshipUpItemInfo_o *v11; // x19
  const MethodInfo *v12; // x4

  if ( (byte_4C1DA13 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    sub_1C3B764(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5);
    byte_4C1DA13 = 1;
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
        goto LABEL_14;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      itemInfoArray = this->fields.itemInfoArray;
      if ( !itemInfoArray )
        goto LABEL_14;
      if ( itemInfoArray->max_length <= index )
        sub_1C3B9C8(gameObject, v8);
      v10 = this->fields.friendshipUpItemUseItem;
      v11 = itemInfoArray->m_Items[index];
      gameObject = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !gameObject || !v10 )
LABEL_14:
        sub_1C3B9C0(gameObject, v8);
      FriendshipUpItemUseItem__SetInit(v10, v11, *((_BYTE *)gameObject + 96), 0LL, v12);
    }
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
    sub_1C3B9C0(0LL, v6);
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