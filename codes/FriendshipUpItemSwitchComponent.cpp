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
  PartyOrganizationUtility_o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  struct FriendshipUpItemInfo_array *itemInfoArray; // x8
  UnityEngine_Object_o *switchWidget; // x21
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  FriendshipUpItemInfo_o *v11; // x21
  UnityEngine_Object_o *friendshipUpItemUseItem; // x20
  _BOOL4 UseFlag_k__BackingField; // w20
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  const MethodInfo *v16; // x2
  bool v17; // w1
  const MethodInfo *v18; // x2

  if ( (byte_4BD8064 & 1) == 0 )
  {
    sub_1C21E38(&Method_FriendshipUpItemSwitchComponent_ChangeButtonState__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4BD8064 = 1;
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
        v9 = Method_FriendshipUpItemSwitchComponent_ChangeButtonState__;
        if ( (*((_BYTE *)Method_FriendshipUpItemSwitchComponent_ChangeButtonState__ + 83) & 2) != 0 )
          v9 = (_QWORD *)sub_1C21E50(Method_FriendshipUpItemSwitchComponent_ChangeButtonState__);
        v10 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v9, v9[4]);
        OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0LL);
        if ( openSelectDialog )
        {
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))openSelectDialog->fields.m_target)(
            openSelectDialog->fields.original_method_info,
            *(_QWORD *)&openSelectDialog->fields.extra_arg);
          return;
        }
LABEL_30:
        sub_1C22094(IsNullOrEmpty, v6);
      }
      itemInfoArray = this->fields.itemInfoArray;
      if ( !itemInfoArray )
        goto LABEL_30;
    }
    if ( !itemInfoArray->max_length )
      sub_1C2209C(IsNullOrEmpty, v6);
    v11 = itemInfoArray->m_Items[0];
    friendshipUpItemUseItem = (UnityEngine_Object_o *)this->fields.friendshipUpItemUseItem;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsNullOrEmpty = (PartyOrganizationUtility_o *)UnityEngine_Object__op_Equality(friendshipUpItemUseItem, 0LL, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      if ( !v11 )
        goto LABEL_30;
      UseFlag_k__BackingField = v11->fields._UseFlag_k__BackingField;
      v14 = Method_FriendshipUpItemSwitchComponent_ChangeButtonState__;
      if ( (*((_BYTE *)Method_FriendshipUpItemSwitchComponent_ChangeButtonState__ + 83) & 2) != 0 )
        v14 = (_QWORD *)sub_1C21E50(Method_FriendshipUpItemSwitchComponent_ChangeButtonState__);
      v15 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v14, v14[4]);
      if ( UseFlag_k__BackingField )
      {
        OverwriteAssetSoundName__PlaySystemSe(v15, 1, 0, 0LL);
        v11->fields._UseFlag_k__BackingField = 0;
        IsNullOrEmpty = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !IsNullOrEmpty )
          goto LABEL_30;
        PartyOrganizationUtility__SaveQuestUseItemUseState(IsNullOrEmpty, 0LL);
        IsNullOrEmpty = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseItem;
        if ( !IsNullOrEmpty )
          goto LABEL_30;
        v17 = 0;
      }
      else
      {
        OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0LL);
        v11->fields._UseFlag_k__BackingField = 1;
        IsNullOrEmpty = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !IsNullOrEmpty )
          goto LABEL_30;
        PartyOrganizationUtility__SaveQuestUseItemUseState(IsNullOrEmpty, 0LL);
        IsNullOrEmpty = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseItem;
        if ( !IsNullOrEmpty )
          goto LABEL_30;
        v17 = 1;
      }
      FriendshipUpItemUseItem__ChangeButtonState((FriendshipUpItemUseItem_o *)IsNullOrEmpty, v17, v16);
      FriendshipUpItemSwitchComponent__SetParam(this, 0, v18);
    }
  }
}


void __fastcall FriendshipUpItemSwitchComponent__EnableUseButton(
        FriendshipUpItemSwitchComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Object_o *friendshipUpItemUseItem; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  FriendshipUpItemUseItem_o *v8; // x0

  if ( (byte_4BD8063 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8063 = 1;
  }
  friendshipUpItemUseItem = (UnityEngine_Object_o *)this->fields.friendshipUpItemUseItem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(friendshipUpItemUseItem, 0LL, 0LL) )
  {
    v8 = this->fields.friendshipUpItemUseItem;
    if ( !v8 )
      sub_1C22094(0LL, v6);
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
    sub_1C22094(0LL, v6);
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
  if ( (byte_4BD8067 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8067 = 1;
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
      sub_1C22094(v7, v6);
    }
  }
}


void __fastcall FriendshipUpItemSwitchComponent__SetFriendshipUpItemUseItem(
        FriendshipUpItemSwitchComponent_o *this,
        FriendshipUpItemUseItem_o *item,
        const MethodInfo *method)
{
  this->fields.friendshipUpItemUseItem = item;
  sub_1C21DDC(&this->fields.friendshipUpItemUseItem, item);
}


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

  if ( (byte_4BD8065 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    byte_4BD8065 = 1;
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
    sub_1C22094(IsNullOrEmpty, v6);
  }
  itemInfoArray = this->fields.itemInfoArray;
  if ( !itemInfoArray )
    goto LABEL_12;
  max_length = itemInfoArray->max_length;
  if ( max_length >= 2 )
  {
    FriendshipUpItemSwitchComponent__SetParam(this, (count - this->fields.startCount) % max_length, v7);
    IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
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
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v4; // x1
  struct FriendshipUpItemInfo_array *QuestUseItems; // x0
  const MethodInfo *v6; // x2
  int32_t SelectedPartyPosition_k__BackingField; // w1

  if ( (byte_4BD8062 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4BD8062 = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  QuestUseItems = PartyOrganizationUtility__GetQuestUseItems(Instance, 0LL);
  this->fields.itemInfoArray = QuestUseItems;
  sub_1C21DDC(&this->fields.itemInfoArray, QuestUseItems);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemInfoArray, 0LL) )
  {
    Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      return;
    }
LABEL_10:
    sub_1C22094(Instance, v4);
  }
  Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  SwitchParameterDisplayManager__AddComponent(
    (SwitchParameterDisplayManager_o *)Instance,
    (SwitchParameterDisplayComponent_o *)this,
    0LL);
  Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  SelectedPartyPosition_k__BackingField = Instance->fields._SelectedPartyPosition_k__BackingField;
  this->fields.startCount = SelectedPartyPosition_k__BackingField;
  FriendshipUpItemSwitchComponent__SetItem(this, SelectedPartyPosition_k__BackingField, v6);
}


void __fastcall FriendshipUpItemSwitchComponent__SetParam(
        FriendshipUpItemSwitchComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *friendshipUpItemUseItem; // x21
  void *gameObject; // x0
  __int64 v7; // x1
  struct FriendshipUpItemInfo_array *itemInfoArray; // x8
  FriendshipUpItemUseItem_o *v9; // x20
  FriendshipUpItemInfo_o *v10; // x19
  const MethodInfo *v11; // x4

  if ( (byte_4BD8066 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4BD8066 = 1;
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
        sub_1C2209C(gameObject, v7);
      v9 = this->fields.friendshipUpItemUseItem;
      v10 = itemInfoArray->m_Items[index];
      gameObject = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !gameObject || !v9 )
LABEL_14:
        sub_1C22094(gameObject, v7);
      FriendshipUpItemUseItem__SetInit(v9, v10, *((_BYTE *)gameObject + 96), 0LL, v11);
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
    sub_1C22094(0LL, v6);
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