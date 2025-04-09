void __fastcall FriendshipUpItemSelectDialog___ctor(FriendshipUpItemSelectDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49B68F1 & 1) == 0 )
  {
    sub_1B4CF90(&BaseDialog_TypeInfo, method);
    byte_49B68F1 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendshipUpItemSelectDialog__Awake(FriendshipUpItemSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  FriendshipUpItemSelectDialog___c_c *v6; // x0
  System_Collections_Generic_IEnumerable_T__o *friendshipUpItemSelectItemArray; // x20
  System_Action_object__o *_9__11_0; // x21
  Il2CppObject *v9; // x22
  struct FriendshipUpItemSelectDialog___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_49B68EB & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_FriendshipUpItemSelectDialog_SelectItem__TypeInfo, method);
    sub_1B4CF90(&Method_BasicHelper_ForEach_FriendshipUpItemSelectDialog_SelectItem___, v3);
    sub_1B4CF90(&Method_FriendshipUpItemSelectDialog___c__Awake_b__11_0__, v4);
    sub_1B4CF90(&FriendshipUpItemSelectDialog___c_TypeInfo, v5);
    byte_49B68EB = 1;
  }
  v6 = FriendshipUpItemSelectDialog___c_TypeInfo;
  friendshipUpItemSelectItemArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.friendshipUpItemSelectItemArray;
  if ( !FriendshipUpItemSelectDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemSelectDialog___c_TypeInfo);
    v6 = FriendshipUpItemSelectDialog___c_TypeInfo;
  }
  _9__11_0 = (System_Action_object__o *)v6->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = FriendshipUpItemSelectDialog___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__11_0 = (System_Action_object__o *)sub_1B4D1DC(System_Action_FriendshipUpItemSelectDialog_SelectItem__TypeInfo);
    System_Action_object____ctor(_9__11_0, v9, Method_FriendshipUpItemSelectDialog___c__Awake_b__11_0__, 0LL);
    static_fields = FriendshipUpItemSelectDialog___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Action_FriendshipUpItemSelectDialog_SelectItem__o *)_9__11_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v11, v12);
  }
  BasicHelper__ForEach_object_(
    friendshipUpItemSelectItemArray,
    (System_Action_T__o *)_9__11_0,
    (const MethodInfo_2EEE790 *)Method_BasicHelper_ForEach_FriendshipUpItemSelectDialog_SelectItem___);
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendshipUpItemSelectDialog__Close(FriendshipUpItemSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_49B68EE & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_FriendshipUpItemSelectDialog__Close_b__14_0__, v3);
    sub_1B4CF90(&FriendshipUpItemSelectDialog_TypeInfo, v4);
    byte_49B68EE = 1;
  }
  FriendshipUpItemSelectDialog_TypeInfo->static_fields->state = 4;
  v5 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendshipUpItemSelectDialog__Close_b__14_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall FriendshipUpItemSelectDialog__Init(FriendshipUpItemSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0

  if ( (byte_49B68EC & 1) == 0 )
  {
    sub_1B4CF90(&FriendshipUpItemSelectDialog_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_1/*""*/, v3);
    byte_49B68EC = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.subTitleLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B4D1EC(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  FriendshipUpItemSelectDialog_TypeInfo->static_fields->state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendshipUpItemSelectDialog__OnClickClose(
        FriendshipUpItemSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_49B68F0 & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendshipUpItemSelectDialog_OnClickClose__, method);
    sub_1B4CF90(&FriendshipUpItemSelectDialog_TypeInfo, v3);
    byte_49B68F0 = 1;
  }
  if ( FriendshipUpItemSelectDialog_TypeInfo->static_fields->state == 2 )
  {
    v4 = Method_FriendshipUpItemSelectDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_FriendshipUpItemSelectDialog_OnClickClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B4CFA8(Method_FriendshipUpItemSelectDialog_OnClickClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    FriendshipUpItemSelectDialog__Close(this, v6);
  }
}


void __fastcall FriendshipUpItemSelectDialog__Open(
        FriendshipUpItemSelectDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UILabel_o *titleLabel; // x20
  UILabel_o *subTitleLabel; // x20
  UILabel_o *closeBtnLabel; // x20
  const MethodInfo *v19; // x1
  FriendshipUpItemSelectDialog___c_c *v20; // x0
  System_Action_o *_9__13_0; // x20
  Il2CppObject *v22; // x21
  struct FriendshipUpItemSelectDialog___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_49B68ED & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, callback);
    sub_1B4CF90(&FriendshipUpItemSelectDialog_TypeInfo, v5);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v6);
    sub_1B4CF90(&Method_FriendshipUpItemSelectDialog___c__Open_b__13_0__, v7);
    sub_1B4CF90(&FriendshipUpItemSelectDialog___c_TypeInfo, v8);
    sub_1B4CF90(&StringLiteral_10044/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_SELECT_DIALOG_EXPLANATION"*/, v9);
    sub_1B4CF90(&StringLiteral_10045/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_SELECT_DIALOG_TITLE"*/, v10);
    sub_1B4CF90(&StringLiteral_3657/*"COMMON_CONFIRM_CLOSE"*/, v11);
    byte_49B68ED = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  FriendshipUpItemSelectDialog_TypeInfo->static_fields->state = 1;
  this->fields.closeCallback = callback;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.closeCallback, (int32_t)callback, v14, v15);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10045/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_SELECT_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL),
        subTitleLabel = this->fields.subTitleLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10044/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_SELECT_DIALOG_EXPLANATION"*/, 0LL),
        !subTitleLabel)
    || (UILabel__set_text(subTitleLabel, (System_String_o *)gameObject, 0LL),
        closeBtnLabel = this->fields.closeBtnLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3657/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !closeBtnLabel) )
  {
LABEL_16:
    sub_1B4D1EC(gameObject, v13);
  }
  UILabel__set_text(closeBtnLabel, (System_String_o *)gameObject, 0LL);
  FriendshipUpItemSelectDialog__SetSelectItem(this, v19);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0LL);
  v20 = FriendshipUpItemSelectDialog___c_TypeInfo;
  if ( !FriendshipUpItemSelectDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemSelectDialog___c_TypeInfo);
    v20 = FriendshipUpItemSelectDialog___c_TypeInfo;
  }
  _9__13_0 = v20->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = FriendshipUpItemSelectDialog___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v20->static_fields->__9;
    _9__13_0 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(_9__13_0, v22, Method_FriendshipUpItemSelectDialog___c__Open_b__13_0__, 0LL);
    static_fields = FriendshipUpItemSelectDialog___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = _9__13_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v24, v25);
  }
  BaseDialog__Open((BaseDialog_o *)this, _9__13_0, 0, 0LL);
}


void __fastcall FriendshipUpItemSelectDialog__SetSelectItem(
        FriendshipUpItemSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  FriendshipUpItemInfo_array *AvailableQuestUseItems; // x20
  const MethodInfo *v12; // x2
  System_Collections_Generic_IEnumerable_T__o *friendshipUpItemSelectItemArray; // x21
  FriendshipUpItemSelectDialog___c_c *v14; // x0
  System_Action_object__o *_9__15_0; // x19
  Il2CppObject *v16; // x20
  struct FriendshipUpItemSelectDialog___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  unsigned __int64 v20; // x22
  __int64 v21; // x23
  signed int max_length; // w8
  bool v23; // w9
  struct FriendshipUpItemSelectDialog_SelectItem_array *v24; // x8
  bool v25; // w1
  UnityEngine_Object_o *grid; // x21
  struct System_Single_array *gridCellWidths; // x21
  struct System_Single_array *v28; // x9
  struct UIGrid_o *v29; // x8
  float v30; // s0
  UIGrid_c *klass; // x9

  if ( (byte_49B68EF & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_FriendshipUpItemSelectDialog_SelectItem__TypeInfo, method);
    sub_1B4CF90(&Method_BasicHelper_ForEach_FriendshipUpItemSelectDialog_SelectItem___, v3);
    sub_1B4CF90(&System_Math_TypeInfo, v4);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v5);
    sub_1B4CF90(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v6);
    sub_1B4CF90(&Method_FriendshipUpItemSelectDialog___c__SetSelectItem_b__15_0__, v7);
    sub_1B4CF90(&FriendshipUpItemSelectDialog___c_TypeInfo, v8);
    byte_49B68EF = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  AvailableQuestUseItems = PartyOrganizationUtility__GetAvailableQuestUseItems(
                             (PartyOrganizationUtility_o *)Instance,
                             0LL);
  Instance = (Il2CppObject *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)AvailableQuestUseItems, 0LL);
  friendshipUpItemSelectItemArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.friendshipUpItemSelectItemArray;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v14 = FriendshipUpItemSelectDialog___c_TypeInfo;
    if ( !FriendshipUpItemSelectDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipUpItemSelectDialog___c_TypeInfo);
      v14 = FriendshipUpItemSelectDialog___c_TypeInfo;
    }
    _9__15_0 = (System_Action_object__o *)v14->static_fields->__9__15_0;
    if ( !_9__15_0 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = FriendshipUpItemSelectDialog___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v14->static_fields->__9;
      _9__15_0 = (System_Action_object__o *)sub_1B4D1DC(System_Action_FriendshipUpItemSelectDialog_SelectItem__TypeInfo);
      System_Action_object____ctor(_9__15_0, v16, Method_FriendshipUpItemSelectDialog___c__SetSelectItem_b__15_0__, 0LL);
      static_fields = FriendshipUpItemSelectDialog___c_TypeInfo->static_fields;
      static_fields->__9__15_0 = (struct System_Action_FriendshipUpItemSelectDialog_SelectItem__o *)_9__15_0;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__15_0, (int32_t)_9__15_0, v18, v19);
    }
    BasicHelper__ForEach_object_(
      friendshipUpItemSelectItemArray,
      (System_Action_T__o *)_9__15_0,
      (const MethodInfo_2EEE790 *)Method_BasicHelper_ForEach_FriendshipUpItemSelectDialog_SelectItem___);
    return;
  }
  if ( !friendshipUpItemSelectItemArray )
    goto LABEL_41;
  if ( (int)friendshipUpItemSelectItemArray[1].monitor >= 1 )
  {
    if ( AvailableQuestUseItems )
    {
      v20 = 0LL;
      v21 = (unsigned int)friendshipUpItemSelectItemArray[1].monitor - 1LL;
      max_length = *(_QWORD *)&AvailableQuestUseItems->max_length;
      v23 = max_length > 0;
      while ( v20 < LODWORD(friendshipUpItemSelectItemArray[1].monitor) )
      {
        Instance = (Il2CppObject *)*((_QWORD *)&friendshipUpItemSelectItemArray[2].klass + v20);
        if ( v23 )
        {
          if ( v20 >= (unsigned int)max_length )
            break;
          if ( !Instance )
            goto LABEL_41;
          FriendshipUpItemSelectDialog_SelectItem__Set(
            (FriendshipUpItemSelectDialog_SelectItem_o *)Instance,
            AvailableQuestUseItems->m_Items[v20],
            v12);
          v24 = this->fields.friendshipUpItemSelectItemArray;
          if ( !v24 )
            goto LABEL_41;
          if ( v20 >= v24->max_length )
            break;
          Instance = (Il2CppObject *)v24->m_Items[v20];
          if ( !Instance )
            goto LABEL_41;
          v25 = 1;
        }
        else
        {
          if ( !Instance )
            goto LABEL_41;
          v25 = 0;
        }
        FriendshipUpItemSelectDialog_SelectItem__SetEnable(
          (FriendshipUpItemSelectDialog_SelectItem_o *)Instance,
          v25,
          v12);
        if ( v21 == v20 )
          goto LABEL_29;
        max_length = AvailableQuestUseItems->max_length;
        friendshipUpItemSelectItemArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.friendshipUpItemSelectItemArray;
        v23 = (__int64)++v20 < max_length;
        if ( !friendshipUpItemSelectItemArray )
          goto LABEL_41;
      }
LABEL_42:
      sub_1B4D1F4(Instance, v10);
    }
    goto LABEL_41;
  }
LABEL_29:
  grid = (UnityEngine_Object_o *)this->fields.grid;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Inequality(grid, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( AvailableQuestUseItems )
    {
      gridCellWidths = this->fields.gridCellWidths;
      if ( gridCellWidths )
      {
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        Instance = (Il2CppObject *)System_Math__Min_62622116(
                                     AvailableQuestUseItems->max_length,
                                     gridCellWidths->max_length,
                                     0LL);
        v28 = this->fields.gridCellWidths;
        if ( v28 )
        {
          if ( (int)Instance - 1 >= v28->max_length )
            goto LABEL_42;
          v29 = this->fields.grid;
          if ( v29 )
          {
            v30 = v28->m_Items[(int)Instance];
            klass = v29->klass;
            v29->fields.maxPerLine = (int)Instance;
            v29->fields.cellWidth = v30;
            ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))klass->vtable._8_Reposition.method)(
              v29,
              klass->vtable._9_ResetPosition.methodPtr);
            return;
          }
        }
      }
    }
LABEL_41:
    sub_1B4D1EC(Instance, v10);
  }
}


void __fastcall FriendshipUpItemSelectDialog___Close_b__14_0(
        FriendshipUpItemSelectDialog_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *closeCallback; // x8

  closeCallback = this->fields.closeCallback;
  if ( closeCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallback->fields.m_target)(
      closeCallback->fields.original_method_info,
      *(_QWORD *)&closeCallback->fields.extra_arg);
  FriendshipUpItemSelectDialog__Init(this, method);
}


void __fastcall FriendshipUpItemSelectDialog_SelectItem___ctor(
        FriendshipUpItemSelectDialog_SelectItem_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FriendshipUpItemSelectDialog_SelectItem__ChangeButtonState(
        FriendshipUpItemSelectDialog_SelectItem_o *this,
        const MethodInfo *method)
{
  FriendshipUpItemSelectDialog_SelectItem_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct FriendshipUpItemInfo_o *info; // x8
  _BOOL4 UseFlag_k__BackingField; // w20
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  const MethodInfo *v16; // x2
  struct FriendshipUpItemInfo_o *v17; // x8
  const MethodInfo *v18; // x2
  struct FriendshipUpItemInfo_o *v19; // x8
  Il2CppObject *Instance; // x20
  struct FriendshipUpItemInfo_o *v21; // x8
  FriendshipUpItemSelectDialog_SelectItem_o *v22; // x19
  FriendshipUpItemSelectDialog_SelectItem___c_c *v23; // x8
  System_Action_o *_9__5_0; // x22
  System_String_o *v25; // x21
  Il2CppObject *v26; // x23
  struct FriendshipUpItemSelectDialog_SelectItem___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3

  v2 = this;
  if ( (byte_49B68F3 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&FriendshipUpItemSelectDialog_TypeInfo, v3);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v4);
    sub_1B4CF90(&Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B4CF90(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v7);
    sub_1B4CF90(&Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__, v8);
    sub_1B4CF90(&FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo, v9);
    sub_1B4CF90(&StringLiteral_10038/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v10);
    this = (FriendshipUpItemSelectDialog_SelectItem_o *)sub_1B4CF90(&StringLiteral_1/*""*/, v11);
    byte_49B68F3 = 1;
  }
  if ( FriendshipUpItemSelectDialog_TypeInfo->static_fields->state == 2 )
  {
    info = v2->fields.info;
    if ( !info )
      goto LABEL_30;
    UseFlag_k__BackingField = info->fields._UseFlag_k__BackingField;
    v14 = Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__;
    if ( (*((_BYTE *)Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1B4CFA8(Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__);
    v15 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v14, v14[4]);
    if ( UseFlag_k__BackingField )
    {
      OverwriteAssetSoundName__PlaySystemSe(v15, 1, 0, 0LL);
      this = (FriendshipUpItemSelectDialog_SelectItem_o *)v2->fields.component;
      if ( !this )
        goto LABEL_30;
      FriendshipUpItemUseItem__ChangeButtonState((FriendshipUpItemUseItem_o *)this, 0, v16);
      v17 = v2->fields.info;
      if ( !v17 )
        goto LABEL_30;
      v17->fields._UseFlag_k__BackingField = 0;
LABEL_16:
      this = (FriendshipUpItemSelectDialog_SelectItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( this )
      {
        PartyOrganizationUtility__SaveQuestUseItemUseState((PartyOrganizationUtility_o *)this, 0LL);
        return;
      }
LABEL_30:
      sub_1B4D1EC(this, method);
    }
    OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0LL);
    this = (FriendshipUpItemSelectDialog_SelectItem_o *)v2->fields.info;
    if ( !this )
      goto LABEL_30;
    if ( FriendshipUpItemInfo__IsEventPeriod((FriendshipUpItemInfo_o *)this, method) )
    {
      this = (FriendshipUpItemSelectDialog_SelectItem_o *)v2->fields.component;
      if ( !this )
        goto LABEL_30;
      FriendshipUpItemUseItem__ChangeButtonState((FriendshipUpItemUseItem_o *)this, 1, v18);
      v19 = v2->fields.info;
      if ( !v19 )
        goto LABEL_30;
      v19->fields._UseFlag_k__BackingField = 1;
      goto LABEL_16;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (FriendshipUpItemSelectDialog_SelectItem_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_10038/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/,
                                                          0LL);
    v21 = v2->fields.info;
    if ( !v21 )
      goto LABEL_30;
    this = (FriendshipUpItemSelectDialog_SelectItem_o *)System_String__Format(
                                                          (System_String_o *)this,
                                                          (Il2CppObject *)v21->fields._Name_k__BackingField,
                                                          0LL);
    v22 = this;
    v23 = FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo;
    if ( !FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo);
      v23 = FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo;
    }
    _9__5_0 = v23->static_fields->__9__5_0;
    v25 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__5_0 )
    {
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        v23 = FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo;
      }
      v26 = (Il2CppObject *)v23->static_fields->__9;
      _9__5_0 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__5_0,
        v26,
        (intptr_t)Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__,
        0LL);
      static_fields = FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = _9__5_0;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v28, v29);
    }
    if ( !Instance )
      goto LABEL_30;
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      v25,
      (System_String_o *)v22,
      _9__5_0,
      -1,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0LL,
      0.0,
      0LL);
  }
}


void __fastcall FriendshipUpItemSelectDialog_SelectItem__Set(
        FriendshipUpItemSelectDialog_SelectItem_o *this,
        FriendshipUpItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  FriendshipUpItemUseItem_o *component; // x21
  FriendshipUpItemInfo_o *info; // x22
  System_Action_o *v9; // x23
  UILabel_o *label; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4

  if ( (byte_49B68F2 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, itemInfo);
    sub_1B4CF90(&Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__, v6);
    byte_49B68F2 = 1;
  }
  this->fields.info = itemInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.info, (int32_t)itemInfo, (int32_t)method, v3);
  component = this->fields.component;
  info = this->fields.info;
  v9 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__,
    0LL);
  if ( !component
    || (FriendshipUpItemUseItem__SetInit(component, info, 0, v9, v12), !itemInfo)
    || (label = this->fields.label) == 0LL )
  {
    sub_1B4D1EC(label, v11);
  }
  UILabel__set_text(label, itemInfo->fields._Explanation_k__BackingField, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipUpItemSelectDialog_SelectItem__SetEnable(
        FriendshipUpItemSelectDialog_SelectItem_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Component_o *component; // x0

  component = (UnityEngine_Component_o *)this->fields.component;
  if ( !component
    || (component = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(component, 0LL)) == 0LL )
  {
    sub_1B4D1EC(component, flag);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)component, flag, 0LL);
}


void __fastcall FriendshipUpItemSelectDialog_SelectItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49B68F4 & 1) == 0 )
  {
    sub_1B4CF90(&FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo, v1);
    byte_49B68F4 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo->static_fields->__9 = (struct FriendshipUpItemSelectDialog_SelectItem___c_o *)v2;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall FriendshipUpItemSelectDialog_SelectItem___c___ctor(
        FriendshipUpItemSelectDialog_SelectItem___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FriendshipUpItemSelectDialog_SelectItem___c___ChangeButtonState_b__5_0(
        FriendshipUpItemSelectDialog_SelectItem___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_49B68F5 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B4CF90(&Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__, v2);
    byte_49B68F5 = 1;
  }
  v3 = Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__;
  if ( (*((_BYTE *)Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B4CFA8(Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v6);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall FriendshipUpItemSelectDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49B68F6 & 1) == 0 )
  {
    sub_1B4CF90(&FriendshipUpItemSelectDialog___c_TypeInfo, v1);
    byte_49B68F6 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(FriendshipUpItemSelectDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FriendshipUpItemSelectDialog___c_TypeInfo->static_fields->__9 = (struct FriendshipUpItemSelectDialog___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)FriendshipUpItemSelectDialog___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall FriendshipUpItemSelectDialog___c___ctor(
        FriendshipUpItemSelectDialog___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FriendshipUpItemSelectDialog___c___Awake_b__11_0(
        FriendshipUpItemSelectDialog___c_o *this,
        FriendshipUpItemSelectDialog_SelectItem_o *item,
        const MethodInfo *method)
{
  ;
}


void __fastcall FriendshipUpItemSelectDialog___c___Open_b__13_0(
        FriendshipUpItemSelectDialog___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_49B68F7 & 1) == 0 )
  {
    sub_1B4CF90(&FriendshipUpItemSelectDialog_TypeInfo, method);
    byte_49B68F7 = 1;
  }
  FriendshipUpItemSelectDialog_TypeInfo->static_fields->state = 2;
}


void __fastcall FriendshipUpItemSelectDialog___c___SetSelectItem_b__15_0(
        FriendshipUpItemSelectDialog___c_o *this,
        FriendshipUpItemSelectDialog_SelectItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1B4D1EC(this, 0LL);
  FriendshipUpItemSelectDialog_SelectItem__SetEnable(item, 0, method);
}