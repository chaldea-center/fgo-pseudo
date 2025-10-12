void FriendshipUpItemSwitchComponent___ctor(FriendshipUpItemSwitchComponent_o *this, const MethodInfo *method)
{
  SwitchParameterDisplayComponent___ctor((SwitchParameterDisplayComponent_o *)this, 0);
}


void FriendshipUpItemSwitchComponent__ChangeButtonState(
        FriendshipUpItemSwitchComponent_o *this,
        System_Action_o *openSelectDialog,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *IsNullOrEmpty; // x0
  struct QuestUseItemInfo_array *itemInfoArray; // x8
  UnityEngine_Object_o *switchWidget; // x21
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  QuestUseItemInfo_o *v10; // x20
  UnityEngine_Object_o *friendshipUpItemUseItem; // x21
  bool UseFlag; // w21
  _QWORD *v13; // x8
  System_Reflection_MethodBase_o *v14; // x0
  const MethodInfo *v15; // x2
  bool v16; // w1
  const MethodInfo *v17; // x2

  if ( (byte_4C33257 & 1) == 0 )
  {
    sub_1C32C20(&Method_FriendshipUpItemSwitchComponent_ChangeButtonState__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C33257 = 1;
  }
  IsNullOrEmpty = (PartyOrganizationUtility_o *)BasicHelper__IsNullOrEmpty(
                                                  (System_Collections_ICollection_o *)this->fields.itemInfoArray,
                                                  0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    itemInfoArray = this->fields.itemInfoArray;
    if ( !itemInfoArray )
      goto LABEL_30;
    if ( SLODWORD(itemInfoArray->max_length) >= 2 )
    {
      switchWidget = (UnityEngine_Object_o *)this->fields.switchWidget;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      IsNullOrEmpty = (PartyOrganizationUtility_o *)UnityEngine_Object__op_Inequality(switchWidget, 0, 0);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        v8 = Method_FriendshipUpItemSwitchComponent_ChangeButtonState__;
        if ( (*((_BYTE *)Method_FriendshipUpItemSwitchComponent_ChangeButtonState__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_1C32C38(Method_FriendshipUpItemSwitchComponent_ChangeButtonState__);
        v9 = (System_Reflection_MethodBase_o *)sub_1C32C04(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
        if ( openSelectDialog )
        {
          ((void (__fastcall *)(intptr_t, intptr_t))openSelectDialog->fields.invoke_impl)(
            openSelectDialog->fields.method_code,
            openSelectDialog->fields.method);
          return;
        }
LABEL_30:
        sub_1C32E7C(IsNullOrEmpty);
      }
      itemInfoArray = this->fields.itemInfoArray;
      if ( !itemInfoArray )
        goto LABEL_30;
    }
    if ( !LODWORD(itemInfoArray->max_length) )
      sub_1C32E84(IsNullOrEmpty);
    v10 = itemInfoArray->m_Items[0];
    friendshipUpItemUseItem = (UnityEngine_Object_o *)this->fields.friendshipUpItemUseItem;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsNullOrEmpty = (PartyOrganizationUtility_o *)UnityEngine_Object__op_Equality(friendshipUpItemUseItem, 0, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      if ( !v10 )
        goto LABEL_30;
      UseFlag = QuestUseItemInfo__GetUseFlag(v10, 0);
      v13 = Method_FriendshipUpItemSwitchComponent_ChangeButtonState__;
      if ( (*((_BYTE *)Method_FriendshipUpItemSwitchComponent_ChangeButtonState__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1C32C38(Method_FriendshipUpItemSwitchComponent_ChangeButtonState__);
      v14 = (System_Reflection_MethodBase_o *)sub_1C32C04(v13, v13[4]);
      if ( UseFlag )
      {
        OverwriteAssetSoundName__PlaySystemSe(v14, 1, 0, 0);
        QuestUseItemInfo__SetUseFlag(v10, 0, 0);
        IsNullOrEmpty = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !IsNullOrEmpty )
          goto LABEL_30;
        PartyOrganizationUtility__SaveQuestUseItemUseState(IsNullOrEmpty, 0);
        IsNullOrEmpty = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseItem;
        if ( !IsNullOrEmpty )
          goto LABEL_30;
        v16 = 0;
      }
      else
      {
        OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0);
        QuestUseItemInfo__SetUseFlag(v10, 1, 0);
        IsNullOrEmpty = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !IsNullOrEmpty )
          goto LABEL_30;
        PartyOrganizationUtility__SaveQuestUseItemUseState(IsNullOrEmpty, 0);
        IsNullOrEmpty = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseItem;
        if ( !IsNullOrEmpty )
          goto LABEL_30;
        v16 = 1;
      }
      FriendshipUpItemUseItem__ChangeButtonState((FriendshipUpItemUseItem_o *)IsNullOrEmpty, v16, v15);
      FriendshipUpItemSwitchComponent__SetParam(this, 0, v17);
    }
  }
}


void FriendshipUpItemSwitchComponent__EnableUseButton(
        FriendshipUpItemSwitchComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Object_o *friendshipUpItemUseItem; // x21
  const MethodInfo *v6; // x2
  FriendshipUpItemUseItem_o *v7; // x0

  if ( (byte_4C33256 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33256 = 1;
  }
  friendshipUpItemUseItem = (UnityEngine_Object_o *)this->fields.friendshipUpItemUseItem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(friendshipUpItemUseItem, 0, 0) )
  {
    v7 = this->fields.friendshipUpItemUseItem;
    if ( !v7 )
      sub_1C32E7C(0);
    FriendshipUpItemUseItem__SetButtonEnabled(v7, flag, v6);
  }
}


bool FriendshipUpItemSwitchComponent__ParameterChange(
        FriendshipUpItemSwitchComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x2
  bool activeSelf; // w21

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  activeSelf = UnityEngine_GameObject__get_activeSelf(gameObject, 0);
  if ( activeSelf )
    FriendshipUpItemSwitchComponent__SetItem(this, count, v6);
  return activeSelf;
}


// local variable allocation has failed, the output may be wrong!
void FriendshipUpItemSwitchComponent__SetAlpha(
        FriendshipUpItemSwitchComponent_o *this,
        float alpha,
        const MethodInfo *method)
{
  long double v3; // q8
  UnityEngine_Object_o *switchWidget; // x20
  FriendshipUpItemUseItem_o *v6; // x0
  UnityEngine_Object_o *friendshipUpItemUseItem; // x20
  const MethodInfo *v8; // x1

  v3 = *(long double *)&alpha;
  if ( (byte_4C3325A & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3325A = 1;
  }
  switchWidget = (UnityEngine_Object_o *)this->fields.switchWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(switchWidget, 0, 0) )
  {
    v6 = (FriendshipUpItemUseItem_o *)this->fields.switchWidget;
    if ( !v6 )
      goto LABEL_13;
    ((void (__fastcall *)(FriendshipUpItemUseItem_o *, Il2CppClass *, long double))v6->klass[1]._1.element_class)(
      v6,
      v6->klass[1]._1.castClass,
      v3);
    friendshipUpItemUseItem = (UnityEngine_Object_o *)this->fields.friendshipUpItemUseItem;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(friendshipUpItemUseItem, 0, 0) )
    {
      v6 = this->fields.friendshipUpItemUseItem;
      if ( v6 )
      {
        FriendshipUpItemUseItem__UpdateButtonAlpha(v6, v8);
        return;
      }
LABEL_13:
      sub_1C32E7C(v6);
    }
  }
}


void FriendshipUpItemSwitchComponent__SetItem(
        FriendshipUpItemSwitchComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  void *IsNullOrEmpty; // x0
  const MethodInfo *v6; // x2
  struct QuestUseItemInfo_array *itemInfoArray; // x8
  int max_length; // w8
  const MethodInfo *v9; // x1
  float v10; // s0
  int32_t startCount; // w9

  if ( (byte_4C33258 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    byte_4C33258 = 1;
  }
  IsNullOrEmpty = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemInfoArray, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( IsNullOrEmpty )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 0, 0);
      return;
    }
LABEL_14:
    sub_1C32E7C(IsNullOrEmpty);
  }
  itemInfoArray = this->fields.itemInfoArray;
  if ( !itemInfoArray )
    goto LABEL_14;
  max_length = itemInfoArray->max_length;
  if ( max_length >= 2 )
  {
    startCount = this->fields.startCount;
    if ( startCount > count )
    {
      startCount = count;
      this->fields.startCount = count;
    }
    FriendshipUpItemSwitchComponent__SetParam(this, (count - startCount) % max_length, v6);
    IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !IsNullOrEmpty )
      goto LABEL_14;
    v10 = *((float *)IsNullOrEmpty + 13);
  }
  else
  {
    FriendshipUpItemSwitchComponent__SetParam(this, 0, v6);
    v10 = 1.0;
  }
  FriendshipUpItemSwitchComponent__SetAlpha(this, v10, v9);
}


void FriendshipUpItemSwitchComponent__SetItemInfo(FriendshipUpItemSwitchComponent_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  struct QuestUseItemInfo_array *CachedQuestUseItems; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2
  int32_t v8; // w1

  if ( (byte_4C33255 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C33255 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CachedQuestUseItems = PartyOrganizationUtility__GetCachedQuestUseItems((PartyOrganizationUtility_o *)Instance, 0);
  this->fields.itemInfoArray = CachedQuestUseItems;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.itemInfoArray, (int32_t)CachedQuestUseItems, v5, v6);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemInfoArray, 0) )
  {
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      return;
    }
LABEL_10:
    sub_1C32E7C(Instance);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  SwitchParameterDisplayManager__AddComponent(
    (SwitchParameterDisplayManager_o *)Instance,
    (SwitchParameterDisplayComponent_o *)this,
    0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  v8 = *((_DWORD *)Instance + 12);
  this->fields.startCount = v8;
  FriendshipUpItemSwitchComponent__SetItem(this, v8, v7);
}


void FriendshipUpItemSwitchComponent__SetParam(
        FriendshipUpItemSwitchComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *friendshipUpItemUseItem; // x21
  void *gameObject; // x0
  struct QuestUseItemInfo_array *itemInfoArray; // x8
  FriendshipUpItemUseItem_o *v8; // x20
  QuestUseItemInfo_o *v9; // x19
  const MethodInfo *v10; // x4

  if ( (byte_4C33259 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C33259 = 1;
  }
  if ( (index & 0x80000000) == 0 )
  {
    friendshipUpItemUseItem = (UnityEngine_Object_o *)this->fields.friendshipUpItemUseItem;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(friendshipUpItemUseItem, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_14;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      itemInfoArray = this->fields.itemInfoArray;
      if ( !itemInfoArray )
        goto LABEL_14;
      if ( LODWORD(itemInfoArray->max_length) <= index )
        sub_1C32E84(gameObject);
      v8 = this->fields.friendshipUpItemUseItem;
      v9 = itemInfoArray->m_Items[index];
      gameObject = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !gameObject || !v8 )
LABEL_14:
        sub_1C32E7C(gameObject);
      FriendshipUpItemUseItem__SetInit(v8, v9, *((_BYTE *)gameObject + 104), 0, v10);
    }
  }
}


bool FriendshipUpItemSwitchComponent__UpdateAlpha(
        FriendshipUpItemSwitchComponent_o *this,
        float alpha,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x1
  struct QuestUseItemInfo_array *itemInfoArray; // x8
  float v8; // s0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
  {
    itemInfoArray = this->fields.itemInfoArray;
    if ( itemInfoArray )
    {
      v8 = 1.0;
      if ( SLODWORD(itemInfoArray->max_length) > 1 )
        v8 = alpha;
    }
    else
    {
      v8 = 1.0;
    }
    FriendshipUpItemSwitchComponent__SetAlpha(this, v8, v6);
  }
  return 1;
}