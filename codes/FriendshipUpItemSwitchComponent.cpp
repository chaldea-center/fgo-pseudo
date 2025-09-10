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
  __int64 v6; // x1
  __int64 v7; // x2
  struct QuestUseItemInfo_array *itemInfoArray; // x8
  UnityEngine_Object_o *switchWidget; // x21
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  QuestUseItemInfo_o *v12; // x20
  UnityEngine_Object_o *friendshipUpItemUseItem; // x21
  bool UseFlag; // w21
  _QWORD *v15; // x8
  System_Reflection_MethodBase_o *v16; // x0
  const MethodInfo *v17; // x2
  bool v18; // w1
  const MethodInfo *v19; // x2

  if ( (byte_4C22B88 & 1) == 0 )
  {
    sub_1C2D490(&Method_FriendshipUpItemSwitchComponent_ChangeButtonState__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C22B88 = 1;
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
        v10 = Method_FriendshipUpItemSwitchComponent_ChangeButtonState__;
        if ( (*((_BYTE *)Method_FriendshipUpItemSwitchComponent_ChangeButtonState__ + 83) & 2) != 0 )
          v10 = (_QWORD *)sub_1C2D4A8(Method_FriendshipUpItemSwitchComponent_ChangeButtonState__);
        v11 = (System_Reflection_MethodBase_o *)sub_1C2D474(v10, v10[4]);
        OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
        if ( openSelectDialog )
        {
          ((void (__fastcall *)(intptr_t, intptr_t))openSelectDialog->fields.invoke_impl)(
            openSelectDialog->fields.method_code,
            openSelectDialog->fields.method);
          return;
        }
LABEL_30:
        sub_1C2D6EC(IsNullOrEmpty, v6);
      }
      itemInfoArray = this->fields.itemInfoArray;
      if ( !itemInfoArray )
        goto LABEL_30;
    }
    if ( !LODWORD(itemInfoArray->max_length) )
      sub_1C2D6F4(IsNullOrEmpty, v6, v7);
    v12 = itemInfoArray->m_Items[0];
    friendshipUpItemUseItem = (UnityEngine_Object_o *)this->fields.friendshipUpItemUseItem;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsNullOrEmpty = (PartyOrganizationUtility_o *)UnityEngine_Object__op_Equality(friendshipUpItemUseItem, 0, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      if ( !v12 )
        goto LABEL_30;
      UseFlag = QuestUseItemInfo__GetUseFlag(v12, 0);
      v15 = Method_FriendshipUpItemSwitchComponent_ChangeButtonState__;
      if ( (*((_BYTE *)Method_FriendshipUpItemSwitchComponent_ChangeButtonState__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1C2D4A8(Method_FriendshipUpItemSwitchComponent_ChangeButtonState__);
      v16 = (System_Reflection_MethodBase_o *)sub_1C2D474(v15, v15[4]);
      if ( UseFlag )
      {
        OverwriteAssetSoundName__PlaySystemSe(v16, 1, 0, 0);
        QuestUseItemInfo__SetUseFlag(v12, 0, 0);
        IsNullOrEmpty = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !IsNullOrEmpty )
          goto LABEL_30;
        PartyOrganizationUtility__SaveQuestUseItemUseState(IsNullOrEmpty, 0);
        IsNullOrEmpty = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseItem;
        if ( !IsNullOrEmpty )
          goto LABEL_30;
        v18 = 0;
      }
      else
      {
        OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0);
        QuestUseItemInfo__SetUseFlag(v12, 1, 0);
        IsNullOrEmpty = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !IsNullOrEmpty )
          goto LABEL_30;
        PartyOrganizationUtility__SaveQuestUseItemUseState(IsNullOrEmpty, 0);
        IsNullOrEmpty = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseItem;
        if ( !IsNullOrEmpty )
          goto LABEL_30;
        v18 = 1;
      }
      FriendshipUpItemUseItem__ChangeButtonState((FriendshipUpItemUseItem_o *)IsNullOrEmpty, v18, v17);
      FriendshipUpItemSwitchComponent__SetParam(this, 0, v19);
    }
  }
}


void FriendshipUpItemSwitchComponent__EnableUseButton(
        FriendshipUpItemSwitchComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Object_o *friendshipUpItemUseItem; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  FriendshipUpItemUseItem_o *v8; // x0

  if ( (byte_4C22B87 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22B87 = 1;
  }
  friendshipUpItemUseItem = (UnityEngine_Object_o *)this->fields.friendshipUpItemUseItem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(friendshipUpItemUseItem, 0, 0) )
  {
    v8 = this->fields.friendshipUpItemUseItem;
    if ( !v8 )
      sub_1C2D6EC(0, v6);
    FriendshipUpItemUseItem__SetButtonEnabled(v8, flag, v7);
  }
}


bool FriendshipUpItemSwitchComponent__ParameterChange(
        FriendshipUpItemSwitchComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  bool activeSelf; // w21

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v6);
  activeSelf = UnityEngine_GameObject__get_activeSelf(gameObject, 0);
  if ( activeSelf )
    FriendshipUpItemSwitchComponent__SetItem(this, count, v7);
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
  const MethodInfo *v6; // x1
  FriendshipUpItemUseItem_o *v7; // x0
  UnityEngine_Object_o *friendshipUpItemUseItem; // x20

  v3 = *(long double *)&alpha;
  if ( (byte_4C22B8B & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22B8B = 1;
  }
  switchWidget = (UnityEngine_Object_o *)this->fields.switchWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(switchWidget, 0, 0) )
  {
    v7 = (FriendshipUpItemUseItem_o *)this->fields.switchWidget;
    if ( !v7 )
      goto LABEL_13;
    ((void (__fastcall *)(FriendshipUpItemUseItem_o *, Il2CppClass *, long double))v7->klass[1]._1.element_class)(
      v7,
      v7->klass[1]._1.castClass,
      v3);
    friendshipUpItemUseItem = (UnityEngine_Object_o *)this->fields.friendshipUpItemUseItem;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(friendshipUpItemUseItem, 0, 0) )
    {
      v7 = this->fields.friendshipUpItemUseItem;
      if ( v7 )
      {
        FriendshipUpItemUseItem__UpdateButtonAlpha(v7, v6);
        return;
      }
LABEL_13:
      sub_1C2D6EC(v7, v6);
    }
  }
}


void FriendshipUpItemSwitchComponent__SetItem(
        FriendshipUpItemSwitchComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  void *IsNullOrEmpty; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct QuestUseItemInfo_array *itemInfoArray; // x8
  int max_length; // w8
  float v10; // s0
  int32_t startCount; // w9

  if ( (byte_4C22B89 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    byte_4C22B89 = 1;
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
    sub_1C2D6EC(IsNullOrEmpty, v6);
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
    FriendshipUpItemSwitchComponent__SetParam(this, (count - startCount) % max_length, v7);
    IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    if ( !IsNullOrEmpty )
      goto LABEL_14;
    v10 = *((float *)IsNullOrEmpty + 13);
  }
  else
  {
    FriendshipUpItemSwitchComponent__SetParam(this, 0, v7);
    v10 = 1.0;
  }
  FriendshipUpItemSwitchComponent__SetAlpha(this, v10, v6);
}


void FriendshipUpItemSwitchComponent__SetItemInfo(FriendshipUpItemSwitchComponent_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  struct QuestUseItemInfo_array *CachedQuestUseItems; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  int32_t v9; // w1

  if ( (byte_4C22B86 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C22B86 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CachedQuestUseItems = PartyOrganizationUtility__GetCachedQuestUseItems((PartyOrganizationUtility_o *)Instance, 0);
  this->fields.itemInfoArray = CachedQuestUseItems;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.itemInfoArray, (int32_t)CachedQuestUseItems, v6, v7);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemInfoArray, 0) )
  {
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      return;
    }
LABEL_10:
    sub_1C2D6EC(Instance, v4);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  SwitchParameterDisplayManager__AddComponent(
    (SwitchParameterDisplayManager_o *)Instance,
    (SwitchParameterDisplayComponent_o *)this,
    0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  v9 = *((_DWORD *)Instance + 12);
  this->fields.startCount = v9;
  FriendshipUpItemSwitchComponent__SetItem(this, v9, v8);
}


void FriendshipUpItemSwitchComponent__SetParam(
        FriendshipUpItemSwitchComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *friendshipUpItemUseItem; // x21
  void *gameObject; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct QuestUseItemInfo_array *itemInfoArray; // x8
  FriendshipUpItemUseItem_o *v10; // x20
  QuestUseItemInfo_o *v11; // x19
  const MethodInfo *v12; // x4

  if ( (byte_4C22B8A & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C22B8A = 1;
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
        sub_1C2D6F4(gameObject, v7, v8);
      v10 = this->fields.friendshipUpItemUseItem;
      v11 = itemInfoArray->m_Items[index];
      gameObject = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !gameObject || !v10 )
LABEL_14:
        sub_1C2D6EC(gameObject, v7);
      FriendshipUpItemUseItem__SetInit(v10, v11, *((_BYTE *)gameObject + 104), 0, v12);
    }
  }
}


bool FriendshipUpItemSwitchComponent__UpdateAlpha(
        FriendshipUpItemSwitchComponent_o *this,
        float alpha,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  struct QuestUseItemInfo_array *itemInfoArray; // x8
  float v9; // s0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v6);
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
  {
    itemInfoArray = this->fields.itemInfoArray;
    if ( itemInfoArray )
    {
      v9 = 1.0;
      if ( SLODWORD(itemInfoArray->max_length) > 1 )
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