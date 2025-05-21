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
  __int64 v9; // x2
  struct QuestUseItemInfo_array *itemInfoArray; // x8
  UnityEngine_Object_o *switchWidget; // x21
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  QuestUseItemInfo_o *v14; // x20
  UnityEngine_Object_o *friendshipUpItemUseItem; // x21
  bool UseFlag; // w21
  _QWORD *v17; // x8
  System_Reflection_MethodBase_o *v18; // x0
  const MethodInfo *v19; // x2
  bool v20; // w1
  const MethodInfo *v21; // x2

  if ( (byte_4B40402 & 1) == 0 )
  {
    sub_1BDB878(&Method_FriendshipUpItemSwitchComponent_ChangeButtonState__, openSelectDialog);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v6);
    byte_4B40402 = 1;
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
        v12 = Method_FriendshipUpItemSwitchComponent_ChangeButtonState__;
        if ( (*((_BYTE *)Method_FriendshipUpItemSwitchComponent_ChangeButtonState__ + 83) & 2) != 0 )
          v12 = (_QWORD *)sub_1BDB890(Method_FriendshipUpItemSwitchComponent_ChangeButtonState__);
        v13 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v12, v12[4]);
        OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0LL);
        if ( openSelectDialog )
        {
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))openSelectDialog->fields.m_target)(
            openSelectDialog->fields.original_method_info,
            *(_QWORD *)&openSelectDialog->fields.extra_arg);
          return;
        }
LABEL_30:
        sub_1BDBAD4(IsNullOrEmpty, v8);
      }
      itemInfoArray = this->fields.itemInfoArray;
      if ( !itemInfoArray )
        goto LABEL_30;
    }
    if ( !itemInfoArray->max_length )
      sub_1BDBADC(IsNullOrEmpty, v8, v9);
    v14 = itemInfoArray->m_Items[0];
    friendshipUpItemUseItem = (UnityEngine_Object_o *)this->fields.friendshipUpItemUseItem;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsNullOrEmpty = (PartyOrganizationUtility_o *)UnityEngine_Object__op_Equality(friendshipUpItemUseItem, 0LL, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      if ( !v14 )
        goto LABEL_30;
      UseFlag = QuestUseItemInfo__GetUseFlag(v14, 0LL);
      v17 = Method_FriendshipUpItemSwitchComponent_ChangeButtonState__;
      if ( (*((_BYTE *)Method_FriendshipUpItemSwitchComponent_ChangeButtonState__ + 83) & 2) != 0 )
        v17 = (_QWORD *)sub_1BDB890(Method_FriendshipUpItemSwitchComponent_ChangeButtonState__);
      v18 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v17, v17[4]);
      if ( UseFlag )
      {
        OverwriteAssetSoundName__PlaySystemSe(v18, 1, 0, 0LL);
        QuestUseItemInfo__SetUseFlag(v14, 0, 0LL);
        IsNullOrEmpty = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !IsNullOrEmpty )
          goto LABEL_30;
        PartyOrganizationUtility__SaveQuestUseItemUseState(IsNullOrEmpty, 0LL);
        IsNullOrEmpty = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseItem;
        if ( !IsNullOrEmpty )
          goto LABEL_30;
        v20 = 0;
      }
      else
      {
        OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0, 0LL);
        QuestUseItemInfo__SetUseFlag(v14, 1, 0LL);
        IsNullOrEmpty = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !IsNullOrEmpty )
          goto LABEL_30;
        PartyOrganizationUtility__SaveQuestUseItemUseState(IsNullOrEmpty, 0LL);
        IsNullOrEmpty = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseItem;
        if ( !IsNullOrEmpty )
          goto LABEL_30;
        v20 = 1;
      }
      FriendshipUpItemUseItem__ChangeButtonState((FriendshipUpItemUseItem_o *)IsNullOrEmpty, v20, v19);
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

  if ( (byte_4B40401 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, flag);
    byte_4B40401 = 1;
  }
  friendshipUpItemUseItem = (UnityEngine_Object_o *)this->fields.friendshipUpItemUseItem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(friendshipUpItemUseItem, 0LL, 0LL) )
  {
    v8 = this->fields.friendshipUpItemUseItem;
    if ( !v8 )
      sub_1BDBAD4(0LL, v6);
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
    sub_1BDBAD4(0LL, v6);
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
  if ( (byte_4B40405 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B40405 = 1;
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
      sub_1BDBAD4(v7, v6);
    }
  }
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
  struct QuestUseItemInfo_array *itemInfoArray; // x8
  int max_length; // w8
  float v10; // s0
  int32_t startCount; // w9

  if ( (byte_4B40403 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, *(_QWORD *)&count);
    byte_4B40403 = 1;
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
LABEL_14:
    sub_1BDBAD4(IsNullOrEmpty, v6);
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
    IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
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


void __fastcall FriendshipUpItemSwitchComponent__SetItemInfo(
        FriendshipUpItemSwitchComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  void *Instance; // x0
  __int64 v5; // x1
  struct QuestUseItemInfo_array *CachedQuestUseItems; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  int32_t v10; // w1

  if ( (byte_4B40400 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, method);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    byte_4B40400 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CachedQuestUseItems = PartyOrganizationUtility__GetCachedQuestUseItems((PartyOrganizationUtility_o *)Instance, 0LL);
  this->fields.itemInfoArray = CachedQuestUseItems;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.itemInfoArray, (int32_t)CachedQuestUseItems, v7, v8);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.itemInfoArray, 0LL) )
  {
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      return;
    }
LABEL_10:
    sub_1BDBAD4(Instance, v5);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  SwitchParameterDisplayManager__AddComponent(
    (SwitchParameterDisplayManager_o *)Instance,
    (SwitchParameterDisplayComponent_o *)this,
    0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  v10 = *((_DWORD *)Instance + 12);
  this->fields.startCount = v10;
  FriendshipUpItemSwitchComponent__SetItem(this, v10, v9);
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
  __int64 v9; // x2
  struct QuestUseItemInfo_array *itemInfoArray; // x8
  FriendshipUpItemUseItem_o *v11; // x20
  QuestUseItemInfo_o *v12; // x19
  const MethodInfo *v13; // x4

  if ( (byte_4B40404 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5);
    byte_4B40404 = 1;
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
        sub_1BDBADC(gameObject, v8, v9);
      v11 = this->fields.friendshipUpItemUseItem;
      v12 = itemInfoArray->m_Items[index];
      gameObject = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !gameObject || !v11 )
LABEL_14:
        sub_1BDBAD4(gameObject, v8);
      FriendshipUpItemUseItem__SetInit(v11, v12, *((_BYTE *)gameObject + 104), 0LL, v13);
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
  struct QuestUseItemInfo_array *itemInfoArray; // x8
  float v9; // s0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BDBAD4(0LL, v6);
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